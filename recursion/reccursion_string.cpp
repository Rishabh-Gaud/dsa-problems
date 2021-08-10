#include <iostream>
using namespace std;

void reverse(string s){
	if(s.empty())return;

	reverse(s.substr(1));
	cout<<s[0];
}

void replacePI(string s){
	if(s.size()==0)return;
	if(s[0]=='p'&&s[1]=='i'){
	cout<<"3.14";
	replacePI(s.substr(2));
	}

	else {
	cout<<s[0];
	replacePI(s.substr(1));
	}
}

int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	//reverse("rishabh");
	replacePI("pippippiixspiip");
	return 0;
}