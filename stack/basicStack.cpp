#include <iostream>
using namespace std;
#define n 100
class stack{
	int* arr;
	int top;

public:
	stack(){
		arr =new int[n];
		top=-1;
	}

	void push(int x){
		if(top==99){
			cout<<"overflow"<<endl;
			return;
		}
		top++;
		arr[top]=x;

	}
	int Top(){
		if(top==-1){
		return -1;
		}
		return arr[top];
	}
	void pop(){
		if(top==-1){
			cout<<"stack is empty"<<endl;
			return ;
		}
		top--;

	}
	bool isEmpty(){
		if(top==-1){
			return 1;
		}
		return 0;
	}

	
	
};


int main(){
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	while(!st.isEmpty()){

		cout<<st.Top()<<" ";
		st.pop();
}
	return 0;
}
