// chewbacca.cpp


#include<iostream>
using namespace std;


int main(){
	char arr[20];
	int num;
	int size =0;
	int flag =0;

	cin.getline(arr,20);
	int i =0;
	while(arr[i] != '\0'){
		if( arr[i] >= '5'){					//compares with ascii
			arr[i] = '9' +'0' - arr[i];		//this subtracts from the ascii of 9 and then add ascii of 0
											//this way number stays in the range of 0 to 9
		}
		i++;
	}
	i =0;

	while(arr[i] != '\0'){
		if(arr[i] != '0' || flag > 0 )	{

			flag++;				//this ensures no leading zeroes
			cout<<arr[i];
		}

		i++;
	}

	return 0;

}