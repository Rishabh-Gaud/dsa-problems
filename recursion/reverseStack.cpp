#include <bits/stdc++.h>
using namespace std;

void bottom(stack<int>&s,int element){
	if(s.size()==0){
		s.push(element);
		return;
	}
	int temp  =s.top();
	s.pop();
	bottom(s,element);
	s.push(temp);
}


void reverse(stack<int>&s){
	if(s.size()==1)return;

	int temp = s.top();
	s.pop();
	reverse(s);
	bottom(s,temp);


}




int main(){
	stack<int>s;
	s.push(1);
	s.push(7);
	s.push(5);
	s.push(8);
	s.push(2);
	s.push(9);
		
		cout<<endl;
		reverse(s);
		while(!s.empty()){
			cout<<s.top()<<" ";
			s.pop();
		}
	return 0;
}