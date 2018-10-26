#include"iostream"
using namespace std;
int main(){
	int size;
	cout<<"enter the array size";
	cin>>size;
	int arr[size];
	cout<<"enter the array elements";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int lsum,rsum;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			lsum=0;
			rsum=0;
			for(int r=0;r<i;r++){
				lsum=lsum+arr[r];
			}
			for(int r=j;r<size;r++){
				rsum=rsum+arr[r];
			}
		
		if(lsum==rsum){
			cout<<endl<<"there exist a element  "<<arr[i];
		cout<<endl<<lsum<<" "<<rsum;
		break;
		}
}
	}
	
	return 0;
}
