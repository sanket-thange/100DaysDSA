#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size , int key ){
	
	int s=0 ;
	int e = size - 1;
	int mid = (s+e)/2;
	int ans = -1;
	while(s<=e){
		
		if( arr[mid]== key){
		ans = mid;
		e = mid -1 ;
		
		}
		else if (arr[mid]>key){
			e = mid-1;
		}
		
		else if (arr[mid < key]){
			s = mid +1 ;
		}
		
		 mid = (s+e)/2;
		
	}
	return ans;
	
}
int laseOccurance(int arr[], int size , int key ){
	
	int s=0 ;
	int e = size - 1;
	int mid = (s+e)/2;
	int ans = -1;
	while(s<=e){
		
		if( arr[mid]== key){
		ans = mid;
		s = mid + 1 ;
		
		}
		else if (arr[mid]>key){
			e = mid-1;
		}
		
		else if (arr[mid < key]){
			s = mid +1 ;
		}
		
		 mid = (s+e)/2;
		
	}
	return ans;
	
}

int main(int argc, char const *argv[])
{
	int arr[5]={10,20,20,20,50};
	int size = sizeof(arr)/sizeof(arr[0]);
	int key ;
	cin>>key;
	cout<<firstOccurance(arr, size , key)<<endl;
	cout<<laseOccurance ( arr, size, key);
	return 0;
}
