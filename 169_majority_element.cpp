#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int majorityElement(vector<int> &nums)
{
    unordered_map<int, int> freq;
    int max = 0, num = 0;
    for (auto i : nums)
    {
        freq[i]++;
    }
    for (auto i : freq)
    {
        if (max <= i.second)
        {
            max = i.second;
            num = i.first;
        }
    }
    return num;
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

    int majorelement=majorityElement(nums);

    cout<<"answer = "<<majorelement;
 return 0;
}