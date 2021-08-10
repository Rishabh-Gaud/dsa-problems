#include <iostream>
using namespace std;
int subs(string input, string output[]){
	if(input.size()==0){
		output[0]="";
		return 1;
	}

	string smallString = input.substr(1);
	int smallStringSize = subs(smallString,output);
	for (int i = 0; i < smallStringSize; ++i)
	{
		output[i+smallStringSize] = input[0]+output[i];
	}
	return 2*smallStringSize;
}

void print_subs(string input,string output){
	if(input.size()==0){
		cout<<output<<endl;
		return ;
	}
	print_subs(input.substr(1),output);
	print_subs(input.substr(1),output+input[0]);
}

int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	string input;
	cin>>input;
	// string* output = new string[1000];
	// int count = subs(input ,output);
	// for (int i = 0; i < count; ++i)
	// {
	// 	cout<<output[i]<<endl;
	// }
print_subs(input,"");

	return 0;
}