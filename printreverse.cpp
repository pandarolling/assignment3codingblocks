// printreverse.cpp

#include<iostream>
using namespace std;

int revOf(int num){

	int rev =0;

	while(num != 0){
		rev *= 10;
		rev += num%10;
		num /= 10;
	}
	return rev;
}

int main() {
	int n;
	cin>>n;

	cout<<revOf(n);
	return 0;
}