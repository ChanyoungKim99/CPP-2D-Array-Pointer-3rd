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

	// *p = p[0] == &p[0][0] (�迭�� ������)
	// *p + 1 = &p[0][1] 
	// *(* p + 1) = p[0][1]



	int* p = &array[0][0];	// int �ϳ��� ����Ű�� ������
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << *p++ << " ";
		}
		std::cout << std::endl;
	}

	// �޸� ��, ��¥�� �迭�� ���������� �����Ǿ��ִ�
	// �׷��� ���� ��µ� ���� ���´�.
	// ���� ����� �ξ� �����ϴ�
}