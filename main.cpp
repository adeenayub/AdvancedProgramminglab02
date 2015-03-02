#include <iostream>
#include "matrix.h"

using namespace std;


int main()
{
int a,b,z,n;
int matrixA[10][10];
int matrixB[10][10];


cout<<"Enter the size of 1st matrix"<<endl;
cin>>a>>b;
cout<<"Enter the size of 2nd matrix"<<endl;
cin>>z>>n;


cout<<"Enter the 1st matrix"<<endl;
for(int i=0;i<a;i++)
{
for(int j=0;j<b;j++)
{
     cin>>matrixA[i][j];
}
}

cout<<"Enter the 2nd matrix"<<endl;
for(int i=0;i<z;i++)
{
for(int j=0;j<n;j++)
{
    cin>>matrixB[i][j];
}
}

Matrix obj;
int option;
cout << endl << "Press 1 for Addition" << endl << "Press 2 for Subtraction" << endl << "Press 3 for Multiplication" << endl;
cin >> option;

if(option == 1)
{
if(a==z && b==n)
obj.Add(a,b,matrixA,matrixB);
else 
cout << "Size of matrices should be the same for addition" << endl;
}
else if (option == 2)
{
if(a==z && b==n)
obj.Subtract(a , b , matrixA , matrixB);
else 
cout << "Size of matrices should be the same for subtraction" << endl;
}
else if (option == 3)
{
obj.Multiply(a , b , z , n , matrixA , matrixB);
}
else
{
cout << "Sorry Wrong Option" << endl;
}

cout<<"The resulting matrix is "<<endl;
for(int i=0;i<a;i++){
for(int j=0;j<n;j++){
cout<<result[i][j]<<" ";
}
cout<<endl;
}


return 0;
}

