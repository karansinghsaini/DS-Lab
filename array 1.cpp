#include"iostream"
using namespace std;
int input(int s){
	int A[s];
	for(int i=0;i<s;i++)
	cin>>A[i];
	return *A;
}
int sort(int &arr,int s){
	for(int i=0;i<s;i++)
		for(int j=i+1;j<s;j++)
			if(arr[j]>arr[i])
			{
				int t=arr[j];
				arr[j]=arr[i];
				arr[i]=t;
			}
	
	}
int main(){
	cout<<"enter the array size";
	int size;
	cin>>size;
	int *arr=input(size);
	sort(*arr,size);
	cout<<"the required result is : "<<(A[0]-A[size-1]);
	return 0;
}
