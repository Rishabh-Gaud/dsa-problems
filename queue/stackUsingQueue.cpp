#include <iostream>
#include <queue>
using namespace std;


class stack{
	queue<int>q;
public:
	void push(int x){
		queue<int>temp;
		temp.push(x);
		while(!q.empty()){
			temp.push(q.front());
			q.pop();
		}
		swap(q,temp);
	}
	void pop(){
		q.pop();
	}
	int  peek(){
		return q.front();
	}
	
	bool empty(){
		return q.empty();
	}
	

};

int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	// towerOfHanoi(3,'A','B','C');
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	while(!st.empty()){
		cout<<st.peek()<<" ";
		st.pop();
	}
	
	return 0;
}