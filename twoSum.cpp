#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int nums[4];
	int target;
	int sum=0;
	
	for (int i = 0; i < 4; ++i)
	{
		cin>>nums[i];
	}
	cin>>target;
	
	for (int i = 0; i < nums.size(); ++i)
	{
		sum =nums[i]+nums[i+1];
		if(sum==target){
			cout<<nums[i]<<" "<<nums[i+1];
		}
				
	}
	return 0;
}
