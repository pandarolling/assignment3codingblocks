// chewbacca1.cpp

#include<iostream>
using namespace std;

int revOf(int n){
	unsigned long long rev =0;

	while(n != 0){
		rev *= 10;
		rev += n %10;
		n /= 10;
	}
	return rev;
}

int main(){
	int num;
	cin>>num;
	int temp = num;
	unsigned long long ans=1;

	int l =0;
	while(temp!= 0){
		l++;
		temp /= 10;
	}

	while(num != 0){
		unsigned long long k = num %10;
		unsigned long inv = 9 - k;

		if(inv < k ){
			if(l ==1 && k ==9){
				ans = (ans*10) + k;
				l--;
			}else{
				ans = (ans*10) + inv;
			l--;

			}
		}else{
			ans = (ans*10) + k;
			l--;
		}
		num /= 10;
	}

	cout<<revOf(ans)/10<<endl;

	return 0;

}