#include"iostream"
using namespace std;
int main(){
	int s;
	cin>>s;
	int arr[s][2];
	for(int i=0;i<s;i++)
	arr[i][1]=1;
	for(int i=0;i<s;i++){
		cin>>arr[i][0];
		for(int j=0;j<=i;j++){
			if(arr[i]==arr[j])
			{
				arr[j][1]+=1;
			}
		}
	}
	for(int i=0;i<s;i++)
	{
		cout<<"element "<<arr[i][0]<<" occurs "<<arr[i][1]<<" times"<<endl;
	}
}
