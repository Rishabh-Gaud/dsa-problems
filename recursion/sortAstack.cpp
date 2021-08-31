#include <bits/stdc++.h>
using namespace std;


void insert(vector<int> &v,int element){
	if(v.size()==0){
		v.push_back(element);
		return;
	}
	if(v[v.size()-1]<element){
		v.push_back(element);
		return;
	}
	int temp = v[v.size()-1];
	v.pop_back();
	insert(v,element);
	v.push_back(temp);

}

void sorted(vector<int> &v){
	if(v.size()==1)return;

	int element = v[v.size()-1];
	v.pop_back();
	sorted(v);
	insert(v,element);
	return;
}




int main(){
	vector<int>v(6);
		v={1,7,5,8,2,9};
		for (int i = 0; i < 6; ++i)
		{
			/* code */
			cout<<v[i]<<" ";
		}
		cout<<endl;
		sorted(v);
		for (int i = 0; i < 6; ++i)
		{
			/* code */
			cout<<v[i]<<" ";
		}
	return 0;
}