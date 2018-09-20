#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<endl<<"enter element to be srched";
    cin>>x;
    for(int i=0;i<n;i++)
    {
       if(x==a[i])
       {
           cout<<"element found at "<<i;
           break;
       }

    }
    delete []a;
    return 0;
}
