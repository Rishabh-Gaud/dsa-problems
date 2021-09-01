#include <bits/stdc++.h>
using namespace std;

void printSubsequences(string in, string op){
	if(in.size()==0){
		cout<<op<<endl;;
		return;
	}

	string ch;
	 ch+= in[0]; 
	printSubsequences(in.substr(1),op+ch);
	printSubsequences(in.substr(1),op+"_"+ch);
}

int main(){

	string s="abcd";
	printSubsequences(s.substr(1),"a");
	return 0;

}