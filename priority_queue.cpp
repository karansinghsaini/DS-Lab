class priority{
	public:
		struct node{
			int data;
			int pr;
			node *ptr;
		};
		node *head=NULL;
		node *tail=NULL;
		void insert(int v,int p){
			node *temp=new node;
			temp->data=v;
			temp->pr=p;
			temp->ptr=NULL;
			if(head==NULL){
				head=temp;
				tail=temp;
			}
			else{
				for()
				while(temp->p<pr)
			}
		}
};
int main(){
	priority p;
	cout<<"enter the number of elements you waana enter";
	int n,i,value,p;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter next value";
		cin>>value;
		cout<<"enter its priority"
		cin>>p;
		p.insert(value,p);
	}
}

