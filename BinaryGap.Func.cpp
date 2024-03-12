#include <iostream>
using namespace std; 

int solution(int val){
	static int max_num = 0, dummy = 0;
	static bool state = false;
	static int mod = 0;
	while(!state){		
		mod = val % 2;
		val /= 2;
		
		if(mod != 0){
			state = true;
		}else{
			continue;
		}
	}
	
	if(val == 0){
		if(mod == 0) return 0;
		return max_num;
	}else{		
		mod = val % 2;
		val /= 2;
		
		if(mod == 0){
			dummy++;
			if(val != 0) max_num = max_num < dummy ? dummy : max_num;
			
			return solution(val);
		}else{
			dummy = 0;
			
			return solution(val);
		}
	}
}

int main(){
	int num;
	
	//console out
	cout<<"Enter the a number:";
	cin>>num;
	
	cout<<endl;
	cout<<"The solution num is :"<<solution(num)<<endl;
}
