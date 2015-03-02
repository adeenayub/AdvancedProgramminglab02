#include <iostream>


using namespace std;

int ans[10][10];
class Matrix{

public:
int answer[10][10];
void Multiply(int rowsizeA , int colsizeA , int rowsizeB , int colsizeB , int matA[10][10] , int matB[10][10]);
void Add(int rowsizeA , int colsizeA , int matA[10][10] , int matB[10][10]);
void Subtract(int rowsizeA , int colsizeA , int matA[10][10] , int matB[10][10]);
};

void Matrix:: Multiply(int rowsizeA , int colsizeA , int rowsizeB , int colsizeB , int matA[10][10] , int matB[10][10])
{
	for(int i=0;i<rowsizeA;i++)
	{
		for(int j=0;j<colsizeB;j++)
		{
			ans[i][j]=0;
			for(int k=0;k<colsizeA;k++)
			{
				ans[i][j]=ans[i][j]+(matA[i][k] * matB[k][j]);
				answer[i][j] = ans[i][j];
			}
		}
	}
}

void Matrix:: Add(int rowsizeA , int colsizeA , int matA[10][10] , int matB[10][10])
{
	for(int i=0;i<rowsizeA;i++)
	{
		for(int j=0;j<colsizeA;j++)
		{
			ans[i][j]=matA[i][j] + matB[i][j];
			answer[i][j] = ans[i][j];
		}
	}
}

void Matrix::Subtract(int rowsizeA , int colsizeA , int matA[10][10] , int matB[10][10])
{
	for(int i=0;i<rowsizeA;i++)
	{
		for(int j=0;j<colsizeA;j++)
		{
			ans[i][j]=matA[i][j] - matB[i][j];
			answer[i][j] = ans[i][j];
		}
	}
}




