#include <bits/stdc++.h>
using namespace std;

void letterCasePermutation(string in, string op){
	if(in.size()==0){
		cout<<op<<endl;;
		return;
	}

	string ch;
	 ch+= in[0]; 
	 if(ch>="a"&&ch<="z"){
	 	letterCasePermutation(in.substr(1),op+ch);
	 	ch =in[0]-32;
	 	letterCasePermutation(in.substr(1),op+ch);
	 }else if(ch>="A"&&ch<="Z"){
	 	letterCasePermutation(in.substr(1),op+ch);
	 	ch =in[0]+32;
	 	letterCasePermutation(in.substr(1),op+ch);
	 }
	 else{
	 	letterCasePermutation(in.substr(1),op+ch);
	 }
}

int main(){

	string s="a1B2";
	letterCasePermutation(s,"");
	return 0;

}