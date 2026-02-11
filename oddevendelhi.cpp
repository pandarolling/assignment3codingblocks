// oddevendelhi.cpp

#include<iostream>
using namespace std;
int main() {
	int n;
	
	int carNo;
	cin>>n;

	for(int i=1; i <= n; i++){
		cin>>carNo;
		int oddSum=0, evenSum =0;
		while(carNo != 0){
			int l = carNo % 10;
			if(l %2 == 0){
				evenSum += l;
			}else{
				oddSum += l;
			}
			carNo /= 10;
		}

		if(evenSum % 4 ==0 || oddSum % 3 ==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}

	return 0;
}