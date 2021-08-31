#include <bits/stdc++.h>
using namespace std;


void insert(stack<int>&s,int element){
	if(s.size()==0){
		s.push(element);
		return;
	}
	if(s.top()<element){
		s.push(element);
		return;
	}
	int temp = s.top();
	s.pop();
	insert(s,element);
	s.push(temp);

}

void sorted(stack<int>&s){
	if(s.size()==1)return;

	int element = s.top();
	s.pop();
	sorted(s);
	insert(s,element);
	return;
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
		sorted(s);
		while(!s.empty()){
			cout<<s.top()<<" ";
			s.pop();
		}
	return 0;
}