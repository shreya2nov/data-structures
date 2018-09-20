#include<iostream>
#include<malloc.h>
#define null 0
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traverse(node *head)
{
    node *r=head;
    while(r!=null)
    {
        cout<<r ->data<<endl;
        r=r->next;
    }
}
int main()
{
    int n,e,c=0;
    struct node *temp,*p,*start;
    cout<<"no of elements in linked lists"<<endl;
    cin>>n;
    cout<<"enter first element "<<endl;
    cin>>e;
    temp=(struct node *)malloc(sizeof(struct node));
    temp ->data=e;
    temp ->next=null;
    p=temp;
    start=temp;
    for(int i=2;i<=n;i++)

    {
        cout<<"enter next"<<endl;
         cin>>e;
    temp=(struct node *)malloc(sizeof(struct node));
    temp ->data=e;
    temp ->next=null;
    p ->next=temp;
    p=p ->next;

    }
   cout<<"Enter element you want to srched"<<endl;
   cin>>e;
   p=start;
  for(int i=1;i<=n;i++)
   {
       if(p->data==e)
       {
           cout<<"Element found at position "<<i;
           c++;
       }
       p=p->next;
   }
    if(c==0)
    {
        cout<<"element not found";
    }
    return 0;
}


