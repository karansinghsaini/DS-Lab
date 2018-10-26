#include"iostream"
using namespace std;
struct link{
	int data;
	link *ptr;
};
link *head,*tail;
void insert(int val){
	link *temp=new link;
	temp->data=val;
	temp->ptr=NULL;
	if(head==NULL){
		head=temp;
		tail=temp;
		temp=NULL;
	}
	else{
		tail->ptr=temp;
		tail=temp;
	}
}
void display(){
	link *temp=new link;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->ptr;
	}
}
int main(){
	head=NULL;
	tail=NULL;
	int n,value;
	cin>>n;
	while(n!=0){
		n--;
		cin>>value;
		insert(value);
	}
	display();
}
