// conversion.cpp

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int sb, db, sn;
	cin>>sb>>db>>sn;
	int decimalNum= 0;
	int g =0;
	

	if(sb != 10){
		while(sn != 0){
		int ldigit= sn %10;
		decimalNum = decimalNum + ldigit*pow(sb,g);
		g++;
		sn /= 10;
		}
	}else{
		decimalNum = sn;
	}
		
		vector <int> result;

	while(decimalNum != 0){
		result.push_back((decimalNum %db));
		decimalNum /= db;
	}
	
	for(int i = result.size() - 1; i >= 0; i--){
		cout<<result[i];
	}
	return 0;
}