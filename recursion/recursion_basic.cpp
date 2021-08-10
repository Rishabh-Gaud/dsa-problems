#include <iostream>
using namespace std;

//  summation till n
int sum(int n){
	if(n==0){
		return 0;
	}
	return n+sum(n-1);
}

// power of a^p


int pow(int a,int p){

	if(p==0){
		return 1;
	}
	int smallpow=pow(a,p-1);
	return a*smallpow;
}

// factorial

int fact(int n){
	if(n==0)return 1;
	int prevfact =  fact(n-1);
	return n*prevfact;
}

// fibbonacci no.

int fibbonaci(int n){
	if(n==0||n==1){
		return n;
	}

	int prevfib = fibbonaci(n-1)+fibbonaci(n-2);
	return prevfib;
}


// for sorting 


bool sorted(int arr[], int n){

	if(n==1){
		return 1;
	}
	bool restArr = sorted(arr+1,n-1);
	return (arr[0]<arr[1]&&restArr);
	
}

// printing no. increasing as well as decreasing

void inc(int n){

	if(n==0){
		return;
	}
	inc(n-1);
	cout<<n<<" ";
}

void dec(int n){

	if(n==0){
		return;
	}
	cout<<n<<" ";
	dec(n-1);

}
int firstOccur(int arr[],int n,int i,int x){
	if(n==i){
		return -1;
	}
	if(arr[i]==x)return i;


	int temp = firstOccur(arr,n,i+1,x);
	return temp;

}
int lastOccurance(int arr[],int n,int i,int x){
	
	if(n==i)return -1;

	int temp = lastOccurance(arr,n,i+1,x);
	if(temp!=-1)return temp;
	if(arr[i]==x)return i;
	return -1;
}
void removeduplicate(string s){
	if(s.empty())return;

	if(s[0]==s[1]){
		removeduplicate(s.substr(1));
	}
	else{
		cout<<s[0];
		removeduplicate(s.substr(1));
	}

}

int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	int input;
	// cin>>input;
	// cout<<sum(3);
	// cout<<fact(4);
	// int a[]={1,2,5,4,5,6,10};
	// // cout<<fibbonaci(6);
	// cout<<firstOccur(a,7,0,5)<<" "<<lastOccurance(a,7,0,5);
	// // inc(7);
	removeduplicate("aaibbssccdddw");
	return 0;
}
