#include<iostream>
using namespace std;
int main()
{
	int ids[100],size,c,high,low,mid,item,flag=0;
	cout<<"How many elements you want to insert: "<<endl;
	cin>>size;
	for(c=0;c<size;c++){
		cout<<"Enter element for array location:  "<<c<<"   ";
		cin>>ids[c];
	}
	cout<<"Enter element for searching: ";
	cin>>item;
	low=0;
	high=size-1;
	while(low<=high){
		mid=(low+high)/2;
		if(item==ids[mid])
		{
			cout<<"Item found at location: "<<mid;
			break;
			//flag=flag+1;
		}
		else if(item>ids[mid]){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	if(low>high){
		cout<<"Item Not Found";
	}	
}
