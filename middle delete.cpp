#include"iostream"
using namespace std;
int main()
{
	int size,i,num;
	cin>>size;
	int arr[size];
	for(i=0;i<size;i++)
	cin>>arr[i];
	num=size/2;
	for(i=num;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
	for(i=0;i<size;i++)
	cout<<arr[i];
	return 0;
}
