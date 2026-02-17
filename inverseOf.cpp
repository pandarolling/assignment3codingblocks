// inverseOf.cpp

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int num;
	cin>>num;
	int ans= 0;

	int i = 1;
	while(num != 0){

		int l = num % 10;
		ans += i*pow(10,l-1);
	
		i++;
		num /= 10;
	}

	cout<<ans<<endl;
	return 0;
}