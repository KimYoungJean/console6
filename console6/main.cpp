#include "�ҽ�1.h"
#define EXAMPLE_TYPE_PRINT   1
#define ARRAY_TYPE_SIMPLE   1
#define ARRAY_TYPE_DIMENSION   2
//���
#define EXAMPLE_TYPE EXAMPLE_TYPE_PRINT
#define ARRAY_TYPE ARRAY_TYPE_DIMENSION


namespace EXAMPLE_1
{
#define Arraysize
	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT

		int numA = 0;
		int numB = 1;
		int numC = 2;
		int numD = 3;
		int numE = 4;
		int numF = 5;

		cout << numA << endl;
		cout << numB << endl;
		cout << numC << endl;
		cout << numD << endl;
		cout << numE << endl;
		cout << numF << endl;

		int num[6];
		cout << num[0] << endl;
		cout << num[1] << endl;
		cout << num[2] << endl;
		cout << num[3] << endl;
		cout << num[4] << endl;
		cout << num[5] << endl;



		for (int i = 0; i < sizeOfArray; i++)
		{
			cout << num[i] << endl;
		}

		int anNums[6] = { 0,1,2,3,4,5 };
		int anNums[6] = {};
		int anNums[6] = { 0, };

		/*
		
		 �迭�� ũ�⸦ ������ ���𰡸� �ؾ��� �� sizeof�����ڸ� ���÷���.
		 ��size of �����ڸ� �迭�� Ȱ���� ��� �迭 ��ü�� ����Ʈ ũ�⸦ ����ϴ� ���� �����ϱ� ����
		 ex) int anValues[5];

		 sizeof(anValues);
		 // 20
		 sizeof(anValues[0]);
		 // 4

		 
		*/

		int anValuesA[Arraysize] =
		{
			1,2,3,4,5
		};

		int anValuesB[Arraysize] =

		{
			1,2,3,4,5
		};
		const int SizeA = sizeof(anValuesA) / sizeof(anValuesA[0]);
		const int SizeB = sizeof(anValuesB) / sizeof(anValuesB[0]);

		printf("%d,%d,%d,%d,%d\n", anValuesA[0], anValuesA[1], anValuesA[2], anValuesA[3], anValuesA[4]);

		cout << '\n';

		for (int i = 0; i, SizeA;i ++)
		{	//���׿�����
			printf("%d%c", anValuesA[i], (i <= SizeA - 2) ? ',' : ' ');
		}

		// C/C++����� ������ �迭 ����
		//
		/*
		int anMatrix[5][5];
		int anDimensionMatrix[5][5][5][10][100];

		sizeof(anMatrix); // 5* (�迭 ��� ũ�� : 100)
		sizeof(anDimensionMatrix); //(5*5*4 :500)
		*/

		// int anMatrix[Arraysize][Arraysize] = { 0 };

		// const int nRow = sizeof(anMatrix) / sizeof(anMatrix[0]);
		// const int ncol = sizeof(anMatrix[0]) / sizeof(anMatrix[0][0]);

		// 2���������� ���
		// x / y 


#if ARRAY_TYPE == ARRAY_TYPE_SIMPLE
#else 
#endif // End of ARRAY_TYPE_SIMPLE

#else
#endif // End OF EXAMPLE_TYPE_PRINT

	}
}