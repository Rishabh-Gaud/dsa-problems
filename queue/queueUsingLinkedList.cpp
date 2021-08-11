#include <iostream>
using namespace std;

class node{
public:
	node* next;
	int data;
	node(int val){
		data = val;
		next = NULL;
	}
};
class queue{
	node* front;
	node* back;
public:
	queue(){
		front =NULL;
		back = NULL;

	}
	void push(int x){

		node * n = new node(x);
		if(front == NULL){
			front =n;
			back =n;
		
			return;
		}
		back->next = n;
		back =n;


	}
	void pop(){
		if(front ==NULL){
			cout<<"nothing present"<<endl;
			return ;
		}
		node* todelete  = front;
		front = front->next;
		delete todelete;
	}
	bool empty(){
		if(front==NULL){
			return 1;
		}
		return 0;
	}
	int peek(){
		if(front == NULL){
			return -1;
		}
		return front->data;
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
	q.pop();
	cout<<q.peek();
	
	
	return 0;
}