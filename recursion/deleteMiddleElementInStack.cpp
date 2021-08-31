#include <bits/stdc++.h>
using namespace std;

void deleter(stack<int>&s,int k){
	if(k==1){
		s.pop();
		return;
	}
	int temp = s.top();
	s.pop();
	deleter(s,k-1);
	s.push(temp);
}


void middileDeleter(stack<int>&s){
	int n=s.size();
	if(n==1){
		s.pop();
		return ;
	}
	deleter(s,n/2);
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
		middileDeleter(s);
		while(!s.empty()){
			cout<<s.top()<<" ";
			s.pop();
		}
	return 0;
}