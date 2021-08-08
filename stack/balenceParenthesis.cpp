#include<iostream>
#include<stack>

using namespace std;
 
bool isValid(string s){
	stack<char>st;
	bool ans=1;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]=='('||s[i]=='{'||s[i]=='['){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			if (st.top()=='(')
			{
				st.pop();
			}
			else{
				ans=0;
				break;

			}
		}
			else if(s[i]==']'){
			if (st.top()=='[')
			{
				st.pop();
			}
			else{
				ans=0;
				break;

			}
		}	else if(s[i]=='}'){
			if (st.top()=='{')
			{
				st.pop();
			}
			else{
				ans=0;
				break;

			}
		}
	}
	return ans;
}

int main(){
	string s="{(([]()))}";
	cout<<isValid(s);
	return 0;
}