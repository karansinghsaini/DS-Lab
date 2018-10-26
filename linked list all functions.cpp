#include"iostream"
using namespace std;
struct node{
	int data;
	node *ptr;
};
node *head;
node *tail;
void insert(int x){
	node *temp=new node;
	temp->data=x;
	temp->ptr=NULL;
	if(head==NULL){
		head=temp;
		tail=temp;
		
	}
	else{
		tail->ptr=temp;
		tail=tail->ptr;
	}
}
void display(){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->ptr;
	}
}
void insert_at_start(int x){
	node *temp=new node;
	temp->data=x;
	
	if(head!=NULL){
		temp->ptr=head;
		head=temp;
	}
	else{
		head=temp;
		tail=temp;
	}
}
void sort(){
	node *temp;
	node *temp1;
	temp=head;
	int t;
	while(temp!=NULL){
		temp1=head;
		while(temp1!=NULL){
			if(temp->data<(temp1->data))
			{
				t=temp1->data;
				temp1->data=(temp->data);
				temp->data=t;
			}
			temp1=temp1->ptr;
		}
		temp=temp->ptr;
	}
}
void find_it(int f){
	int count;
	node *temp=new node;
	temp=head;
	while(temp!=NULL){
		count++;
		if(temp->data==f){
			cout<<"this value is at "<<count<<endl;
		}
		temp=temp->ptr;
	}
}
void insert_at_pos(int ele,int pos){
	node *temp1=new node;
	node *temp=new node;
	node *t=new node;
	temp->data=ele;
	temp->ptr=NULL;
	temp1=head;
	t=head;
	int count=0;
	while(temp1!=NULL){
		count++;
		if(pos==count){
			t->ptr=temp;
			temp->ptr=temp1;
			break;
		}
		t=temp1;
		temp1=temp1->ptr;
	}
}
void delete_it(int del){
	node *temp=new node;
	node *temp1=new node;
	temp1=head;
	temp=head;
	while(temp1!=NULL){	
		if(temp1->data==del){
			temp->ptr=temp1->ptr;
		}
		temp=temp1;
		temp1=temp1->ptr;
	}
}
int main(){
	head=NULL;
	tail=NULL;
	int  n,a,f,b;
	cout<<"enter the number of elents you want to list in series";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		insert(a);	
	}
	cout<<endl;
	cout<<"enter the amount of number you want to add in front";
	cin>>b;
	for(int i=0;i<b;i++){
	cin>>a;
	insert_at_start(a);
	}
	cout<<endl;
	display();
	sort();
	cout<<endl;
	display();
	cout<<"enter the element to find:"<<endl;
	cin>>f;
	find_it(f);
	cout<<"enter the number of elements you want to enter";
	int l,ele,pos;
	cin>>l;
	for(int i=0;i<l;i++){
		cout<<"enter element ";
		cin>>ele;
		cout<<"enter position ";
		cin>>pos;
		insert_at_pos(ele,pos);
	}
	display();
	int del;
	cout<<"enter the element you want to delete";
	cin>>del;
	delete_it(del);
	display();
	return 0;
}
