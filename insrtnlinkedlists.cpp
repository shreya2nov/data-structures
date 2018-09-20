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
    cout<<"1 insertion at start \n 2 insertion at middle \n 3 insertion at end \n";
    cout<<"enter choice"<<endl;
    cin>>c;
     struct node *new_node,*store_next;
    new_node=(struct node *)malloc(sizeof(struct node));
    p=start;
    if(c==1)
    {

        new_node ->next=start;
        start=new_node;
        cout<<"enter element you want to insert"<<endl;
        cin>>e;
        new_node ->data=e;
        traverse(start);
    }
     else if(c==2)
    {
         cout<<"enter element you want to insert"<<endl;
        cin>>e;
        cout<<"enter where you want to insert"<<endl;
        cin>>cou;
        p=start;
           for(int i=1;i<cou;i++)
        {
            p=p ->next;


        }
         store_next=p->next;
            p->next=new_node;
            new_node ->next=store_next;

        new_node ->data=e;
        traverse(start);
    }
    else
    {
        cout<<"enter element you want to insert"<<endl;
        cin>>e;
        while(p->next!=null)
        {
            p=p->next;
        }
        p ->next=new_node;
        new_node ->next=null;
        new_node ->data=e;
        traverse(start);
    }
   return 0;
}

