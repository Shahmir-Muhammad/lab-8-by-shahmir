

task 1

/*

#include<iostream>
using namespace std;
int main()
{
	



int arr[5];
	for(int i=0;i<=4;i++){
		cout<<"enter integer: "<<endl;
		cin>>arr[i];
	}
	cout<<"The average of 5 numbers is:\n "<<(arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/5;
	
	return 0;
	
	}*/
	
task 3	


/*	#include<iostream>
	using namespace std;
	int main()
	{ 
	int arr[5],i,j,min,temp;
	for(i=0;i<5;i++){
	
	cout<<"enter array of 5 elements: "<<endl;
	cin>>arr[i];
	}
	cout<<"the original  values in array:"<<endl;
	for(i=0;i<5;i++){
		cout<<arr[i]<<" ";
		
	}
	for(i=0;i<4;i++){
		min=i;
		for(j=i+i;j<5;j++){
			if(arr[j]<arr[min])
			min=j;
		
		}
		if   (min!=i){
		
	
	temp=arr[i];
	arr[i]=arr[min];
	arr[min]=temp;
	
	}
	
	}
	cout<<"the sorted array: "<<endl;
	for(i=0;i<5;i++)
{
	cout<<arr[i]<<" ";

}return 0;

}
	*/
	
	task 2


/*	#include<iostream>
using namespace std;
int main()
{
	int n[5];
 int temp;
 for(int i=0;i<=4;i++){
 	cout<<"enter numbers: "<<endl;
 	cin>>n[i];
 }
 for(int i=0;i<=4;i++){
 	for(int j=0;j<=3;j++){
 		if(n[j]>n[j+1]){
 			temp=n[j];
 			n[j]=n[j+1];
 			n[j+1]=temp;
		}
    }
    
 }
 for(int i=0;i<=4;i++){
 	cout<<n[i];
 }
	*/
	
	
