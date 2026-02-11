#include<iostream>
using namespace std;

int main() {

	int num ;
	int m, n;
	cin>>num;

	for(int i =1; i<= num; i++){
		int aayush=0, harshit =0;
		int bought =1;
		cin>>m>>n;
		while(1){
			if(harshit < aayush ){
			 	if(harshit + bought <= n){ 
					 harshit += bought;
					 bought++;
				 }else{
					 break;
				 }
			 }else{
				 if( aayush + bought <= m){
				 	aayush += bought;
				 	bought++;
			 	}else{
					break;
				 }
			 }
		}
		if(aayush >harshit){
			cout<<"Aayush"<<endl;
		}else{
			cout<<"Harshit"<<endl;
		}
		
	}
	return 0;
}



