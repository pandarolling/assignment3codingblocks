// printseries.cpp

#include<iostream>
using namespace std;

int main() {
	int limit;
	int num;
	int flag =0;

	cin>>limit>>num;
	int i =1;
	while(flag != limit){
		int ans = (3*i)+2;
		if(ans %num !=0){
			cout<<ans<<endl;
			flag++;
		}
		i++;
	}
	return 0;
}