#include <limits.h>
#include "matrix.h"
#include "gtest/gtest.h"

TEST(AddTest2, Blah) {
 int mat1[10][10];
 int mat2[10][10];

 Matrix obj;
 cout<<"Enter the 1st matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
     cin>>mat1[i][j];
}
}

cout<<"Enter the 2nd matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
    cin>>mat2[i][j];
}
}

obj.Add(2,2,mat1,mat2);
 int testcase[2][2];

 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 testcase[i][j] = 4;
 }
 }

 for(int i=0;i<2;i++){
     
 	for(int j=0;j<2;j++){
                
 		EXPECT_EQ(obj.answer[i][j],testcase[i][j]);
 		
 }
 }
 
}

TEST(AddTest3, Blah) {
 int mat1[10][10];
 int mat2[10][10];

 Matrix obj;
 cout<<"enter the first matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
     cin>>mat1[i][j];
}
}

cout<<"enter the second matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
    cin>>mat2[i][j];
}
}

obj.Subtract(2,2,mat1 , mat2);
 int testcase[2][2];

 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 testcase[i][j] = 0;
 }
 }

 for(int i=0;i<2;i++){
     
 	for(int j=0;j<2;j++){
                
 		EXPECT_EQ(obj.answer[i][j],testcase[i][j]);
 		
 }
 }
 
}

TEST(AddTest4, Blah) {
 int mat1[10][10];
 int mat2[10][10];

 Matrix obj;
 
 cout<<"Enter the 1st matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
     cin>>mat1[i][j];
}
}

cout<<"Enter the 2nd matrix"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
    cin>>mat2[i][j];
}
}


obj.Multiply(2,2,2,2,mat1,mat2);
 int testcase[2][2];

 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 testcase[i][j] = 8;
 }
 }

 for(int i=0;i<2;i++){
     
 	for(int j=0;j<2;j++){
                
 		EXPECT_EQ(obj.answer[i][j],testcase[i][j]);
 		
 }
 }
 
}



