#include <iostream>
using namespace std;
 #define n 20
class queue{
	int* arr; int front; int back;
public:

	queue(){
		arr  = new int [n];
		front =-1;
		back = -1;
	}
	void push(int x){
		if(front ==-1){
			front++;
			back++;
			arr[back] = x;
		return;
		}
		if(back==n-1){
			cout<<"queue is overflow"<<endl;
			return ;
		}
		arr[++back] = x;

	}

	void pop(){
		if(front ==-1||front>back){
			cout<<"queue underflow"<<endl;
			return;
		}
		front++;
	}

	int peek(){
		if(front ==-1||front>back){
			return -1;
		}
		return arr[front];

	}
	bool empty(){
		if(front ==-1||front>back){
			return true;
		}
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
	cout<<q.peek()<<endl;
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	cout<<q.peek()<<endl;
	
	q.pop();
	cout<<q.empty();

	
	return 0;
}
