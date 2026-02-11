// isarmstrong.cpp


#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int num){
	int ldig, digits = 0;
	int temp = num;
	int sum =0;

	while(num!= 0){
		digits++;
		num /= 10;
	}

	num = temp;

	while( num != 0){
		ldig = num % 10;
		sum = sum + pow(ldig,digits);
		num /= 10;
	}

	if( sum == temp ){
		return true;
	}else
		return false;

}

int main() {
	int n;
	cin>>n;

	int ans =isArmstrong(n);

	if(ans){
		cout<<"true";
	}else
	cout<<"false";

	return 0;
}