#include"iostream"
#include"string.h"
using namespace std;
bool check(string p,string s[]){
	for(int i=0;i<10;i++){
		if(s[i]==p){
			return true;
		}
	}
	return false;
}
int index(string p,string s[]){
	for(int i=0;i<10;i++){
		if(s[i]==p){
			return i;
		}
	}
}
int main(){
	int l,f,t,w,t2=0,t4=0,record[100],tot=0;
	string s[100],p,ar1[2]={'f','d'},ar2={'j','k'};
	cin>>t;
	cin>>w;
	for(int i=0;i<w;i++){
		cin>>p;
		if(check(p,s)){
			f=index(p,s);
			tot=tot+record[f];
			break;
		}
		s[i]=p;
		l=strlen(p);
		t2++;
		if(check(p[i],ar1[])){
			flag=1;
		}
		else{
			flag=2;
		}
		for(int j=0;j<l;j++){
			l--;
			if(p[i],ar1[]){
				if(flag==1){
					t4+=1;
				}
				else{
					t2+=1;
				}
			}
			else{
				if(flag=2){
					t4++;
				}
				else{
					t2++;
				}
			}
		}
		record[i]=((0.2*t2)+(0.4*t4))
		tot=tot+record[i];
	}
	cout<<tot;
	return 0;
}
