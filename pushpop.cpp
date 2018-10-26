#include"iostream"
using namespace std;
class stack{
	public:
		int push(){
			int n=1,num,i,top=0;
			while(n!=0){
			int mxstk=5;
			int arr[mxstk];
			cout<<"enter the element you want to enter";
			cin>>num;
			if (top==mxstk-1){
				cout<<"overflow";	
				}
			else{
				arr[top]=num;
				top=top+1;
			
			cout<<"resultant stack is : ";
			for(i=0;i<top;i++){
				cout<<arr[i]<<"  ";
			}}
			cout<<endl<<"enter 1 if you want to enter any element"<<endl;
			cin>>n;
			}
			return 0;
		}
		int pop(){
			int n=1,num,i,top=5,mxstk=0;
			int ar[5]={1,2,3,4,5};
			while(n!=0){
				if(top==0){
				cout<<"this stack is already empty"<<endl;
				break;
			}
				else
				{
				top--;
				for(i=0;i<top;i++)
				cout<<ar[i]<<"   ";
				cout<<endl<<"enter 1 to pop another element  ";
				cin>>n;
				}
		}}
};
int main(){
	stack p;
	cout<<"press 1 to push and 2 to pop";
	int k;
	cin>>k;
	if(k==1)
	p.push();
	else
	p.pop();
	return 0;
}
