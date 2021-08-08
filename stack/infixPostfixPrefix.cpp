#include<iostream>
#include <bits/stdc++.h>
#include <stack>
#include <algorithm>
#include<math.h>
using namespace std;


int postfix(string s){
	stack<int>st;

	for(int i=0;i<s.length();i++){
		if(s[i]>='0' && s[i]<='9'){

			st.push(s[i]-'0');

		}
		else{
			int op1 = st.top();
			st.pop();
			int op2 = st.top();
			st.pop();
			
			switch(s[i]){
				case '+':
					st.push(op1+op2);
					break;
				case '-':
					st.push(op1-op2);
					break;
				case '*':
					st.push(op1*op2);
					break;
					case '/':
					st.push(op1/op2);
					break;
				case '^':
					st.push(pow(op1,op2));
					break;
				default: break;
				
			}
		}

	}
	return st.top();
}

int prefix(string s){
	stack<int>st;

	for(int i=s.length()-1;i>=0;i--){
		if(s[i]>='0' && s[i]<='9'){

			st.push(s[i]-'0');

		}
		else{
			int op1 = st.top();
			st.pop();
			int op2 = st.top();
			st.pop();
			
			switch(s[i]){
				case '+':
					st.push(op1+op2);
					break;
				case '-':
					st.push(op1-op2);
					break;
				case '*':
					st.push(op1*op2);
					break;
					case '/':
					st.push(op1/op2);
					break;
				case '^':
					st.push(pow(op1,op2));
					break;
				default: break;
				
			}
		}

	}
	return st.top();
}
	int precedence(char s){
		if(s=='^')return 3;
		if(s=='*' || s=='/')return 2;
		if(s=='-' || s=='+')return 1;
		else return -1;
	}

string infixToPostfix(string s){
	// reverse(s.begin(),s.end());
	stack<char>st;
	string word="";
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='('){
			st.push(s[i]);
		}
		else if(s[i]>='a'&&s[i]<='z')word+=s[i];
		
		else if(s[i]==')'){
			while(!st.empty()&&st.top()!='('){
				word+=st.top();
				
				st.pop();
			}
			if(!st.empty())st.pop();

		}
		else {while(!st.empty()&&precedence(s[i])<precedence(st.top())){
			word+=st.top();
			st.pop();

		}
		st.push(s[i]);
		}
	}
	while(!st.empty()){
		word+=st.top();
		st.pop();
	}
	 // reverse(word.begin(),word.end());
	 return word;
}

int main(){

 // cout<<prefix("-+7*45+20");
	// cout<<postfix("02+54*7+-");
   cout<<infixToPostfix("(a-b/c)*(a/k-l)");

 // cout<<"hello";
	return 0;
}