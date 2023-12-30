

//basic question in which we need to find the product of largest 2 elements in an array.

// approach1 in which you make the array sorted and return the last two elements and tehir products.

//approach 2: used is in which we intialize two max1 and max2 and then check if element is greater than max1 if its greather then assign that value to max1 and before that assign the value of max1 to max2 this is done because in a case when max1 wil already have ine value and then that value will be assigned to max2 and the updated ele value of max1. 
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int num1=nums[n]-1;
        int num2=nums[n-1]-1;
        return num1*num2;
    }
};