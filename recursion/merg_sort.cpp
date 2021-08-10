#include <iostream>
using namespace std;

void merge(int arr[], int l,int mid,int r){
	int n1=mid-l+1;
	int n2=r-mid;
	int a[n1];
	int b[n2];
	for (int i = 0; i < n1; ++i)
	{
		a[i]=arr[i+l];
	}
	for (int i = 0; i < n2; ++i)
	{
		b[i]=arr[mid+1+i];
	}
	int i=0,j=0,k=l;
	while(i<n1&&j<n2){
		if(a[i]<b[j]){
			arr[k]=a[i];
			k++,i++;
		}
		else{
			arr[k]=b[j];
			k++,j++;

		}

	}
	while(i<n1){
			arr[k]=a[i];
			i++,k++;
	}

	while(j<n2){
			arr[k]=b[j];
			j++,k++;
		}
	
}

void merge_sort(int arr[],int l,int r){
	if(l<r){
	int mid = (l+r)/2;
	merge_sort(arr,l,mid);
	merge_sort(arr,mid+1,r);
	merge(arr,l,mid,r);
}
}

int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 
	int arr[]={5,4,3,2,1,0};
	merge_sort(arr, 0,6);
	for (int i = 0; i < 6; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}
	return 0;
}