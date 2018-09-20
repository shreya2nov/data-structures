#include<iostream>
using namespace std;
int main()
{
    int n,x,temp;
    cout<<"enter no of elements in array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {

        for(int k=j;k<n;k++)
        {
            if(a[j]>a[k])
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<endl;
    }
}
