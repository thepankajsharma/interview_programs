#include <iostream>
using namespace std;


vector<int> sortedSquares(vector<int>& nums) {
	long int temp,i,j;
	
	for(i=0;i<=nums.size()-1;i++)
		nums[i] *= nums[i];
	
	for(i=0;i<=nums.size()-1;i++){
		for(j=i;j<=nums.size()-1;j++){
			if(nums[i]>nums[j]){
				temp = nums[i];
				nums[i] = nums[j];
				nums[j]=temp;
			}
		}
	}
	return nums;class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i;
        
        for(i=0;i<=nums.size()-1;i++)
            nums[i] *= nums[i];
        
        sort(nums.begin(),nums.end());
        
        return nums;
    }
};
}

int main()
{
	
	int x = 4;
	int y = 8;
	add(&x,y);
	cout<<x<<endl;
	cout<<y;
	return 0;
}