#include"iostream"
using namespace std;
class entry{
	public:
		
};

int main(){
	entry e;
	int size=5;
	int arr[size][2]={{60,90},{40,71},{41,66},{71,80},{55,82}};
	for (int i=0;i<size;i++){
		cout<<arr[i][0]<<"     "<<arr[i][1]<<endl;
	}
	int n,ent,roll;
	cout<<"enter the number of elements you waana enter ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter next roll no";
		cin>>roll;
		cout<<"enter marks";
		cin>>ent;
		if(ent>arr[size-1][1]){
			size--;
		}
		if(ent<arr[size-1][1]){
			arr[size-1][0]=roll;
			arr[size-1][1]=ent;
		}
	}
	for (int i=0;i<size;i++){
		cout<<arr[i][0]<<"     "<<arr[i][1]<<endl;
	}
}
