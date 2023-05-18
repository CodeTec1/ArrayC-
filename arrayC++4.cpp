#include<iostream>
using namespace std;
int main(){
	int list[100];
	int n;
	int i;
	cout<<"how many values";
	cin>>n;
	cout<<"enter the values";
	for(i=0; i<n; i++){
		cin>>list[i];
	}
	int pos;
	cout<<"enter desired position where to insert";
	cin>>pos;
	//shift
	for(i=n-1;i>=pos; i--){
		list[i+1]=list[i];
	}
	cout<<"enter the new value";
    cin>>list[pos];
    n++;
    
	cout<<"values are";
	for(i=0;i<n;i++){
		cout<<list[i]<<"\t";
	}
	//deleteing element
	cout<<"enter desired position where to delete";
	cin>>pos;
	//shift
	for(i=pos; i<n; i++){
		list[i]=list[i+1];
	}
	n--;
	cout<<"values are:";
	for(i=0; i<n; i++){
		cout<<list[i]<<"\t";
	}
	//declare the search key
	int key;
	cout<<"enter element to search";
	cin>>key;
	for(i=0;i<n; i++){
		if(key==list[i]){
			cout<<key<<"found at location "<<i;
			break;
		}
	}
	if(i>n){
		cout<<key<<"was nevver found";
	}
	return 0;
}
