#pragma once
#include "sortBase.h"
template<class T>
class BubbleSort
{
public:
	BubbleSort(std::vector<T> temp)
	{
		m_value = temp;
	}
public:
	
	void sort();
	void display();

protected:
	void swap(T& a, T& b);
private:
	std::vector<T> m_value;
};

template<class T>
void BubbleSort<T>::swap(T& a, T& b)
{
	auto temp = a;
	a = b;
	b = temp;
}

template<class T>
void BubbleSort<T>::display()
{

	std::cout <<"the type is :"<< typeid (T).name() << std::endl;
	for (auto it =m_value.begin();it!=m_value.end();++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout<< std::endl;
}

template<class T>
void BubbleSort<T>::sort()
{
	for (auto i=0;i<m_value.size();++i)
	{
		for (auto j =0;j< i;++j)
		{
			if (m_value[i] > m_value[j])
			{
				swap(m_value[i], m_value[j]);
			}
		}
	}
}

