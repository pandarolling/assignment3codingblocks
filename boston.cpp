#include<iostream>
using namespace std;

int isprime(int num){
	int flag = 0;
	for(int i =2; i*i <= num; i++){

		if( num % i == 0){
			flag++;
		}

	}
	if( flag > 2){
		return 0;
	}else{
		return 1;
	}

}
int main() {
	int n;
	cin>>n;
	int sum = 0;
	 
	int nsum =0;
	int temp = n;

	while(temp != 0){
		nsum += temp %10;
		temp /= 10;
	}
	int i =2;
	while(i <= n/2){

		if( n%i ==0){
			if (isprime(i)){
				sum += i;
			}
		}else{
			i++;
		}
		n /= i;
	}
	if(nsum == sum){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}