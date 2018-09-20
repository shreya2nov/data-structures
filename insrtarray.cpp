#include<iostream>
using namespace std;
int main()
{
        int n,k,item;

    cout<<"enter no of elements"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    cout<<"enter position"<<endl;
    cin>>k;
    cout<<"enter item"<<endl;
    cin>>item;
    for(int i=n;i>=k;i--)
    {
        a[i+1]=a[i];

    }
    a[k]=item;
    cout<<"now your array is"<<endl;
    for(int i=1;i<=n+1;i++)
    {
        cout<<a[i]<<endl;

    }
    return 0;
}
