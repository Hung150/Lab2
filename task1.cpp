#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=39;i+=2){
		for(int j=1;j<=39;j++){
			if(j<=39-i){
				cout<<" ";
			}
			else{
				cout<<"X";
			}
		}
		cout<<"\n";
	}
}
