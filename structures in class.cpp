#include"iostream"
using namespace std;
class link{
	struct node{
		int data;
		node *next;
		node *prev;
	};
	public:
	node *head=NULL;
	node *tail=NULL;
	void insert(){
		cout<<"enter the number of elements you want to add : ";
		int i,n,x;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>x;
			node *temp=new node;
			temp->prev=NULL;
			temp->next=NULL;
			temp->data=x;
			if(head==NULL){
				head=temp;
				tail=temp;
			}
			else{
				tail->next=temp;
				temp->prev=tail;
				tail=temp;
			}
		}
	}
	void display(){
		node *temp=new node;
		temp=head;
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->next;			
		}
		temp=tail;
		cout<<endl;
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->prev;
		}
	}
};
int main(){
	link l;
	l.insert();
	l.display();
}
