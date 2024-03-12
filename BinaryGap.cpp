#include <iostream>
using namespace std; 

class Solution{
	public:
	 int solution(int N){
		static int max_num = 0, dummy = 0;
		static bool state = false;
		static int mod = 0;
		
		while(!state){		
			mod = N % 2;
			N /= 2;
			
			if(mod != 0){
				state = true;
			}else{
				continue;
			}
		}
		
		if(N == 0){
			if(mod == 0) return 0;
			return max_num;
		}else{		
			mod = N % 2;
			N /= 2;
			
			if(mod == 0){
				dummy++;
				if(N != 0) max_num = max_num < dummy ? dummy : max_num;
				
				return solution(N);
			}else{
				dummy = 0;
				
				return solution(N);
			}
		}
	 }
};

int main(){
	Solution obj;
	int num;
	
	//console out
	cout<<"Enter the a number: ";
	cin>>num;
	
	cout<<endl;
	cout<<"The solution num is :"<<obj.solution(num)<<endl;
}
