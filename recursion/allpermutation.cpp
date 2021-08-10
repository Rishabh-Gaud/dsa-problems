#include <iostream>
using namespace std;

void permutation(string s,string ans){
	if(s.size()==0){
		cout<<ans<<endl;
		return;
	}

	for (int i = 0; i < s.size(); ++i)
	{
		char ch = s[i];
		string ros = s.substr(0,i)+s.substr(i+1);
		permutation(ros,ans+ch);

	}

}



int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
permutation("123","");
	
	return 0;
}