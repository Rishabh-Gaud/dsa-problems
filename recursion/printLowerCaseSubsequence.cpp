#include <bits/stdc++.h>
using namespace std;

void printPermutionCase(string in, string op){
	if(in.size()==0){
		cout<<op<<" ";
		return;
	}
	string ch;
	 ch =in[0];
	printPermutionCase(in.substr(1),op+ch);
	 ch =in[0]-32;
	printPermutionCase(in.substr(1),op+(ch));
	
}

int main(){

	string s="abc";
	printPermutionCase(s,"");
	return 0;

}