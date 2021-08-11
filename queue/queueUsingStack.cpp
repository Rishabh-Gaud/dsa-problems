#include <iostream>
#include <stack>
using namespace std;

class queue{
	stack<int>s1;
	stack<int>s2;
public:
	void push(int x){
		s1.push(x);
	}

	int pop(){
		while(s1.empty()&&s2.empty()){
			cout<<"queue is empty"<<endl;
			return -1;
		}
		if(s2.empty()){
			while(!s1.empty()){
				s2.push(s1.top());
				s1.pop();
			}
		}
		int topval = s2.top();
		s2.pop();
		return topval;
	}

	bool empty(){
		if(s1.empty()&&s2.empty())return true;
		return false;
	}

};



int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	

	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.pop();
	while(!q.empty()){
		cout<<q.pop()<<" ";

	}
	return 0;
}