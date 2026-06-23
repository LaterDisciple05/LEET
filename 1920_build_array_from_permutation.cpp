#include <iostream>
#include <vector>

using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> ans(nums.size(),0);
    for(int i=0;i<nums.size();i++)
    {
        ans[i]=nums[nums[i]];
    }
    return ans;
}

int main()
{
    cout<<"Enter number of array elements = ";
    int n;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter array elements := ";
    for(int i=0;i<n;i++)
    {
       cin>>nums[i];
    }   

    vector<int> ans=buildArray(nums);
    cout<<"Answer array : ";
    for (int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}