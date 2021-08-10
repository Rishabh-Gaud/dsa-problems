#include <iostream>
using namespace std;

int length(char s[]){
	if(s[0]=='\0'){
		return 0;
	}
	return 1+length(s+1);
}

void replaceByX(char s[]){
	if(s[0]=='\0')return ;
	if(s[0]!='b'){
		replaceByX(s+1);
	}
	else{
		s[0]='x';
		replaceByX(s+1);
	}
}

void noconsecutive(char s[]){
	if(s[0]=='\0')return ;

	if(s[0]!=s[1]){
		noconsecutive(s+1);
	}
	else{
		int i=1;
		for (;s[i]!='\0'; ++i)
		{
			s[i-1]=s[i];
		}
		s[i-1]=s[i];
		noconsecutive(s);
	}
}
void removeX(char s[]){

	if(s[0]=='\0')return;
	if(s[0]!='x'){
		removeX(s+1);
	}
	else{
		int i=1;
		for (; s[i]!='\0'; ++i)
		{
			s[i-1]=s[i];
		}
		s[i-1]=s[i];
		removeX(s);

	}
}

int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	char s[100];
	cin>>s;
	cout<<length(s)<<endl;
	// removeX(s);
	// replaceByX(s);
	noconsecutive(s);
	cout<<s;
}