#include<iostream>
#include<malloc.h>
#define null 0
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n,e;
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
    return 0;
}
