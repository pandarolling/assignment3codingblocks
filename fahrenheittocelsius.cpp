// fahrenheittocelsius.cpp


#include<iostream>
using namespace std;
int celOf(int num){
	int c = (5*(num-32))/9;
	return c;
}
int main() {
	int step;
	int n1, n2;
	cin>>n1>>n2>>step;

	for(int i = n1; i <= n2; i = i+step){
		cout<<i<<"\t"<<celOf(i)<<endl;
	}
	return 0;
}