#include"iostream"
using namespace std;
int main(){
	cout<<"enter the size of array";
	int size;
	cin>>size;
	cout<<"enter an array";
	int arr[size],i,num,m;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	for(int j=i+1;j<size;j++)
	if(arr[i]<arr[j])
	{
		int t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
	}
	for(i=0;i<size;i++)
	cout<<arr[i];
	return 0;
}
