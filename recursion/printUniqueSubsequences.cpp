#include <bits/stdc++.h>
using namespace std;
vector<string>v;
set<string>s;
void printSubsequences(string in, string op){
	if(in.size()==0){
		s.insert(op);
		return;
	}

	printSubsequences(in.substr(1),op);
	op+=in[0];
	printSubsequences(in.substr(1),op);
}

int main(){

	string str="aab";
	printSubsequences(str,"");
	for(auto c:s){
		cout<<c<<endl;
	}

	return 0;

}