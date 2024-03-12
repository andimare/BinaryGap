#include <iostream>
using namespace std;

int main(){
	int num;
	
	//console out
	cout<<"Enter the a number:";
	cin>>num;
	
	while(num > 0){
		cout<<num % 2<<" "<<num/2<<endl;
		num = num / 2;
	}
	
	cout<<endl;
	//cout<<"The Binary Gap num is : "<<binaryGap(num, 0)<<endl;
}
