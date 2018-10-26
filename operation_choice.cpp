#include"iostream"
using namespace std;
class op{
	public:
	struct stack{
		int data;
		stack *ptr;
	};
	stack *top=NULL;
	void push(int v){
		stack *temp=new stack;
		temp->data=v;
		if (top==NULL){
			temp->ptr=NULL;
			top=temp;
		}
		else{
			temp->ptr=top;
			top=temp;
		}
	}
	void pop(){
		top=top->ptr;
	}
	void display(){
		stack *temp=new stack;
		temp=top;
		cout<<"resultant stack ----- \n";
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->ptr;
			
		}
	}
};
int main(){
	op o;
	cout<<"ENTER THE NUMBER OF OPERATIONS YOU WANT TO PERFORM   ";
	int z;
	cin>>z;
	int large[z];
	int l=0,k=0;
	for(int i=0;i<z;i++){
		cout<<"ENTER  YOUR CHOICE /n 1 - PUSH /n 2 - POP /n 3 -FIND MAX    :   ";
		int x,n;
		cin>>x;
		if(x==1){
			cout<<"ENTER ELEMENT TO PUSH INTO STACK : ";
			cin>>n;
			if(n>l){
				l=n;
			}
			large[k]=l;
			k++;			
			o.push(n);
		}
		else if(x==2){
			o.pop();
			if(n==large[k-1]){
				for(int p=0;p<k;p++){
					large[p]=large[p+1];				
				}
				k--;9
			}
		}
		else if(x==3){
		}
		
	}
	for(int i=0;i<k;i++){
		for(int j=i+1;j<k;j++){
			if(large[i]==large[j]){
				for(int a=j;a<k;a++){
					large[j]=large[j+1];
				}
				k--;
			}
		}
	}
	for(int i=0;i<k;i++){
		cout<<large[i]<<" is the largest element"<<endl;
	}
	//o.display();
}
