#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums)
{
    for(int i=1;i<nums.size();i++)
    {
        nums[i]+=nums[i-1];
    }
    return nums;
}

int main()
{
    cout<<"Enter size of array = ";
    int n;
    cin >> n;
    vector<int> nums(n);
    cout<<"Enter elements of array := ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    vector<int> result = runningSum(nums);

    cout<<"Running Sum: ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    } 
    return 0;
}