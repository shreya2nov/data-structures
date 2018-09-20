#include<iostream>
using namespace std;
int main()
{
        int n,k,item,c=0;

    cout<<"enter no of elements"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    cout<<"enter item"<<endl;
    cin>>item;
    for(int j=1;j<=n;j++)
    {
        if(item==a[j])
        {
            k=j;
          for(int i=k;i<n;i++)
    {
        a[i]=a[i+1];

    }
     for(int i=1;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    c++;
        }

    }
    if(c==0)
        cout<<"element not found";
return 0;
}
