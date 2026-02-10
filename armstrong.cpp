// armstrong.cpp
#include<iostream>
using namespace std;

int isArmstrong(int num){
	int temp = num;
	int sum =0;
	while(num != 0){
		int ldigit = num %10;

		sum= sum+ (ldigit*ldigit*ldigit);
		num /= 10;
	}

	if(sum == temp)
		return 1;
	else 
	return 0;
}
int main() {

	int n1, n2;
	cin>>n1>>n2;

	for(int i= n1; i <= n2; i++){
		if(isArmstrong(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}