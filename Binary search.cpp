#include<bits/stdc++.h>
using namespace std;
int Binary_search(vector<int>&v,int key);
int main(){
	int n,i,key;
	cin>>n;
	vector<int>v(n);
	for(i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<"Enter key to search: ";
	cin>>key;
	int index=Binary_search(v,key);
	if(index==-1)
	 cout<<"value not found\n";
	else
	 cout<<"value found at index "<<index<<endl;
	 return 0;
}
int Binary_search(vector<int> &v,int key){
	int left=0,right=v.size()-1,mid,index=-1;
	while(left<=right){
		mid=left+(right-left)/2;
		if(v[mid]==key){
			index=mid;
			break;
		}
		else if(v[mid]>key){
			right=mid-1;
		}
		else{
			left=mid+1;
		}
	}
	return index;
}
