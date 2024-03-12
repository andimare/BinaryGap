#include <iostream>
#include <fstream>
using namespace std; 

class Solution{
	private:
		int max_num = 0, dummy = 0;
		bool state = false;
		int mod = 0;
	public:
	 int solution(int N){
		
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
	fstream file;
	Solution obj[4];
	int num, i = 0;
	
	
	file.open("text-input.txt", ios::in );
	
	if(file.is_open())cout<<"Its open"<<endl;
	
	while(file.good()){
		int num;
		
		//getline(cin, num);
		file>>num;
		
		cout<<"The binary gap number in "<<num<<" is : "<<obj[i].solution(num)<<endl;
		++i;
	}
	//console out
	//cout<<"Enter the a number: ";
	//cin>>num;
	
	//cout<<endl;
	//cout<<"The solution num is : "<<obj.solution(num)<<endl;
}
