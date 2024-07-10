#include<bits/stdc++.h>
using namespace std;
void selection_sort_descending(vector<int>&v);
int main(){
	int n,i;
	cin>>n;
	vector<int>v(n);
	for(i=0;i<n;i++){
		cin>>v[i];
	}
	selection_sort_descending(v);
	for(i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
void selection_sort_descending(vector<int>&v){
	int i,j,n=v.size(),index;
	for(i=0;i<n-1;i++){
		index=i;
		for(j=i+1;j<n;j++){
			if(v[j]>v[index]){
				index=j;
			}
		}
		if(index!=i){
		  swap(v[i],v[index]);
	    }
	}
}
