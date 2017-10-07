#include <stdio.h>

void Arr(int Matrix[][10],int row, int column);
void multiplyMatrices(int formerMatrix[][10], int latterMatrix[][10], int multResult[][10], int rowFormer, int columnFormer, int rowLatter, int columnLatter);
void display(int mult[][10], int rowFormer, int columnLatter);

int main()
{
	int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond,i, j, k;
	int thridMatrix[10][10], rowThrid, columnThrid,mult2[10][10];
	int fourthMatrix[10][10], rowFourth, columnFourth,mult3[10][10];
	int fifthMatrix[10][10], rowFifth, columnFifth,mult4[10][10];
	int sixthMatrix[10][10], rowSixth, columnSixth, mult5[10][10];

	printf("Enter rows and column for first matrix: ");
	scanf("%d %d", &rowFirst, &columnFirst);

	printf("Enter rows and column for second matrix: ");
	scanf("%d %d", &rowSecond, &columnSecond);
	
	printf("Enter rows and column for Thrid matrix: ");
	scanf("%d %d", &rowThrid, &columnThrid);

	printf("Enter rows and column for Fourth matrix: ");
	scanf("%d %d", &rowFourth, &columnFourth);

	printf("Enter rows and column for Fifth matrix: ");
	scanf("%d %d", &rowFifth, &columnFifth);

	printf("Enter rows and column for Sixth matrix: ");
	scanf("%d %d", &rowSixth, &columnSixth);

	while (columnFirst != rowSecond && columnSecond != rowThrid && columnThrid != rowFourth && columnFourth!=rowFifth && columnFifth != rowSixth)
	{
		printf("Error!\n");

		printf("Enter rows and column for first matrix: ");
		scanf("%d%d", &rowFirst, &columnFirst);

		printf("Enter rows and column for second matrix: ");
		scanf("%d%d", &rowSecond, &columnSecond);
		
		printf("Enter rows and column for thrid matrix: ");
		scanf("%d%d", &rowThrid, &columnThrid);

		printf("Enter rows and column for fourth matrix: ");
		scanf("%d%d", &rowFourth, &columnFourth);

		printf("Enter rows and column for fifth matrix: ");
		scanf("%d%d", &rowFifth, &columnFifth);

		printf("Enter rows and column for sixth matrix: ");
		scanf("%d%d", &rowSixth, &columnSixth);

	}
	
	
		printf("\nA1:\n\n");
		Arr(firstMatrix, rowFirst, columnFirst);

		printf("\nA2:\n\n");
		Arr(secondMatrix, rowSecond, columnSecond);

		printf("\nA3:\n\n");
		Arr(thridMatrix, rowThrid, columnThrid);

		printf("\nA4:\n\n");
		Arr(fourthMatrix, rowFourth, columnFourth);

		printf("\nA5:\n\n");
		Arr(fifthMatrix, rowFifth, columnFifth);

		printf("\nA6:\n\n");
		Arr(sixthMatrix, rowSixth, columnSixth);
	

	//1.
	multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);
	
	//display(mult, rowFirst, columnSecond);

	//2.
	multiplyMatrices(mult, thridMatrix, mult2,rowFirst,columnSecond,rowThrid,columnThrid);

	//display(mult2, rowFirst, columnThrid);

	//3.
	multiplyMatrices(mult2, fourthMatrix, mult3, rowFirst, columnThrid, rowFourth, columnFourth);

	//display(mult3, rowFirst, columnFourth);

	//4.
	multiplyMatrices(mult3, fifthMatrix, mult4, rowFirst, columnFourth, rowFifth, columnFifth);

	//display(mult4, rowFirst, columnFifth);

	multiplyMatrices(mult4, sixthMatrix, mult5, rowFirst, columnFifth, rowSixth, columnSixth);

	display(mult5, rowFirst, columnSixth);

	return 0;
}

void Arr(int Matrix[][10], int row, int column)
{
	int i, j;

	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < column; ++j)
		{
			Matrix[i][j] = 1;
			printf(" %d ", Matrix[i][j]);
			if (j == column - 1)
				printf("\n\n");
		}
	}
	
}

void multiplyMatrices(int formerMatrix[][10], int latterMatrix[][10], int mult[][10], int rowFormer, int columnFormer, int rowLatter, int columnLatter)
{
	int i, j, k;

	for (i = 0; i < rowFormer; ++i)
	{
		for (j = 0; j < columnLatter; ++j)
		{
			mult[i][j] = 0;
		}
	}

	for (i = 0; i < rowFormer; ++i)
	{
		for (j = 0; j < columnLatter; ++j)
		{
			for (k = 0; k<columnFormer; ++k)
			{
				mult[i][j] += formerMatrix[i][k] * latterMatrix[k][j];
			}
		}
	}
}

void display(int mult[][10], int rowFormer, int columnLatter)
{
	int i, j;
	printf("\nOutput Matrix:\n");
	for (i = 0; i < rowFormer; ++i)
	{
		for (j = 0; j < columnLatter; ++j)
		{
			printf("%d  ", mult[i][j]);
			if (j == columnLatter - 1)
				printf("\n\n");
		}
	}
}