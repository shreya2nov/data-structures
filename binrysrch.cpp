#include<iostream>
using namespace std;
int main()
{

    int n,x;
    cout<<"enter elements in array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    cout<<"enter item to be srched";
    cin>>x;
   int beg=0;
int end=n-1;
    int mid=(beg+end)/2;
    while(beg<=end && a[mid]!=x)
   {
      if(x<a[mid])
      {

          end=mid-1;
      }
      else
      {
          beg=mid+1;

      }
      mid=(beg+end)/2;
   }
   if(a[mid]==x)
    cout<<endl<<" item found at position "<<mid;
   else
    cout<<"item not found";

}
