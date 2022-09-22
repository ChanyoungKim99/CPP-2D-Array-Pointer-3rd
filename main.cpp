#include <iostream>

int main()
{
	int array[2][3]
	{
		{1, 2, 3},
		{4, 5, 6}
	};

	int(*p)[3] = array;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << *(* p + j) << " ";
		}
		p++;
		std::cout << std::endl;
	}

	// *p = p[0] == &p[0][0] (배열도 포인터)
	// *p + 1 = &p[0][1] 
	// *(* p + 1) = p[0][1]



	int* p = &array[0][0];	// int 하나만 가리키는 포인터
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << *p++ << " ";
		}
		std::cout << std::endl;
	}

	// 메모리 상, 어짜피 배열은 일직선으로 나열되어있다
	// 그래서 위의 출력도 같이 나온다.
	// 위의 방식이 훨씬 간단하다
}