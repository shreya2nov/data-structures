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
    int n,e,c,cou;
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
    cout<<" 1 deletion at d start \n 2 deltn aftr a gvn node \n 3 deltn at d end \n";
    cin>>c;
    if(c==1)
    {

        temp=start;
        p=temp->next;
        start=p;
        traverse(start);
    }
    else if(c==2)
    {
        cout<<"enter position \n";
        cin>>cou;
        p=start;
        for(int i=1;i<cou-1;i++)
        {
            p=p ->next;
        }
        p->next=p->next->next;
        traverse(start);
    }
    else
    {
        p=start;
        for(int i=1;i<n-1;i++)
        {
            p=p->next;
        }
        p->next=null;
        traverse(start);
    }
    return 0;
}


