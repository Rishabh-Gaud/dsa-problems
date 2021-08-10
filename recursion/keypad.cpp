#include <iostream>
using namespace std;
string keypadArr[]={"",
	"", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
};

void keypad(string s,string ans){
	if(s.empty()){
		cout<<ans<<endl;
		return;
	}
	char ch=s[0];
	string code = keypadArr[ch-'0'];
	string ros = s.substr(1);
	for (int i = 0; i < code.length(); ++i)
	{
		keypad(ros,ans+code[i]);
	}
}



int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	keypad("234 ","");
	
	return 0;
}