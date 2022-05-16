#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string.h>
using namespace std;

struct node{
	string data;
	node *ptr;
};
class Queue {
	private:
	node *n,*rear,*front,*temp;
	int count;
	public:
Queue(){
	n=front=rear=temp=NULL;
	count=0;
}
	
void enList(string x){
	
    if (rear==NULL)	
	{
		n= new node;
		n->data = x;
		rear=n;
		front=n;
		rear->ptr=NULL;
		count++;
	}
	else
	{
		n=new node;
		n->data =x;
		rear->ptr=n;
		rear=n;
		rear->ptr=NULL;
		count++;
			
	}
} 
void deList(){
    
	if (rear==NULL || front==NULL)	
	{
		cout<<"QUEUE IS EMPTY...\n";
	}
	else
	{
		temp=front;
		cout<<"DELETED VALUE IS "<<front->data;
       	front=front->ptr;
        delete (temp);
        count--;	
	}
} 

void display( ){
    if (rear==NULL || front==NULL)
    {
        cout<<"QUEUE IS EMPTY...\n";
    }
    else
    {	
    	n=front;
        while(n!=NULL){
		    cout<<"\t"<<n->data<<endl;
		    n=n->ptr;
	    }    
	cout<<"SIZE= "<<count<<endl;
    }
    
    
}
};
int main(){
	system("color 70");
    Queue obj;
    string data;
    char op;
    
    cout<<"-----------------------------------------------------\n";
    cout<<"-            QUEUE USING LINKED-LIST                -\n";
    cout<<"-----------------------------------------------------\n";
	
	while (op!='x')
    { 
    cout<<"\ni FOR ENQUEUE\nd FOR DEQUEUE\no FOR DISPLAY\nx FOR EXIT\n"<<endl;
        op=getch();
        switch (op)
        {
        case 'i':
        	system("cls");
            cout<<"ENTER ANY STRING= ";
            cin>>data;
            obj.enList(data);
            break;
        
        case 'd':
        	system("cls");
            obj.deList();
            break;
        
        case 'o':
        	system("cls");
            cout<<"~QUEUE IS~\n";
            obj.display();
            break;
        
      
        case 'x':
        	system("cls");
            break;
            
        default:
        	system("cls");
            cout<<"INVALID INPUT\n";
            break;
        }
    }
    return 0;
}
