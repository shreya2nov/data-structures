#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3];
    cout<<"enter first array"<<endl;
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {

            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"enter second array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cin>>b[i][j];
        }
        cout<<endl;
 }
  for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=0;
           for(int k=0;k<3;k++)
           {
               c[i][j]=c[i][j]+a[i][k]*b[k][j];

           }
        }
 }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<c[i][j]<<" ";
        }
        cout<<endl;
 }

 return 0;
}


