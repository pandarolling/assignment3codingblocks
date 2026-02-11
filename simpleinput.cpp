#include<iostream>
using namespace std;
int main() {
	int sum =0;
	int num;

	while(cin>>num){
		sum += num;
		if(sum < 0){
			break;
		}else{
			cout<<num<<endl;
		}
		
	}

	return 0;
}