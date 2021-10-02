// program to perform operations on tables using functions only

#include<iostream>
#include<conio.h>
using namespace std;
void add(int a[][2],int b[][2]);
void sub(int a[][2],int b[][2]);
void multiply(int a[][2],int b[][2]);
void transpose(int a[][2],int b[][2]);

int main()
{
    int c,a[2][2],b[2][2],i=0,j=0;
    cout<<"Enter 1st 2x2 matrix ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nEnter 2nd 2x2 matrix ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"\nEnter your choice ";
    cout<<"\n1. Matrix Addition";
    cout<<"\n2. Matrix Subtraction";
    cout<<"\n3. Matrix Multiplication";
    cout<<"\n4. Matrix Transpose\n";
    cin>>c;
    switch(c)
    {
        case 1: add(a,b);
                break;
        case 2: sub(a,b);
                break;
        case 3: multiply(a,b);
                break;
        case 4: transpose(a,b);
                break;

        default: cout<<"Wrong input";
    }
    return 0;
}
void add(int a[][2],int b[][2])
{
    int add[2][2],i,j;
                for(i=0;i<2;i++)
                {
                   for(j=0;j<2;j++)
                    {
                      add[i][j]=a[i][j]+b[i][j];
                    }
                }
                cout<<"\nAdding both matrices we get \n";
                for(i=0;i<2;i++)
                {
                    for(j=0;j<2;j++)
                    {
                        cout<<add[i][j]<<" ";
                    }
                    cout<<"\n";
                }
}
void sub(int a[][2],int b[][2])
{
    int sub[2][2],i,j;
                for(i=0;i<2;i++)
                {
                   for(j=0;j<2;j++)
                    {
                      sub[i][j]=a[i][j]-b[i][j];
                    }
                }
                cout<<"\nSubtracting second matrix from first matrix we get\n ";
                for(i=0;i<2;i++)
                {
                    for(j=0;j<2;j++)
                    {
                        cout<<sub[i][j]<<" ";
                    }
                    cout<<"\n";
                }
}
void multiply(int a[][2],int b[][2])
{
    int multiply[2][2],i,j;
                for(i=0;i<2;i++)
                {
                    for(j=0;i<2;j++)
                    {
                        multiply[i][j]=a[i][j]*b[j][i];
                    }
                }
                cout<<"\nMultiplying both matrices we get\n";
                for(i=0;i<2;i++)
                {
                    for(j=0;j<2;j++)
                    {
                        cout<<multiply[i][j]<<" ";
                    }
                    cout<<"\n";
                }
}
void transpose(int a[][2],int b[][2])
{
   int transpose1[2][2],transpose2[2][2],i,j;
                for(i=0;i<2;i++)
                {
                    for(j=0;i<2;j++)
                    {
                        transpose1[i][j]=a[j][i];
                        transpose2[i][j]=b[j][i];
                    }
                }
                cout<<"\nTranspose of 1st matrix\n";
                for(i=0;i<2;i++)
                {
                    for(j=0;j<2;j++)
                    {
                        cout<<transpose1[i][j]<<" ";
                    }
                    cout<<"\n";
                }
                cout<<"\nTranspose of 2nd matrix\n";
                for(i=0;i<2;i++)
                {
                    for(j=0;j<2;j++)
                    {
                        cout<<transpose2[i][j]<<" ";
                    }
                    cout<<"\n";
                }
}
                
