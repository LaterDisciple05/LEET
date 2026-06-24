#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

unordered_map<int, int> uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> cnt;

    for (auto i : arr)
    {
        cnt[i]++;
    }
    return cnt;
}

int main()
{
    cout << "Enter number of elements of array = ";
    int n;
    cin >> n;
    bool uniqueoccur;

   

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

      int max=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=max)
            {
                max=nums[i];
            }
        }

    unordered_map<int, int> freq = uniqueOccurrences(nums);
    cout << "Answer = ";
    for (auto pair : freq)
    {
        cout << pair.first << " : " << pair.second << endl;
    }
    
    unordered_set<int> uniquefreq;

    for(auto i:freq)
    {
        uniquefreq.insert(i.second);
    }

    if(freq.size()==uniquefreq.size())
    {
        uniqueoccur= true;
    }
    else
    {
      uniqueoccur=false;
    
    }
    cout<<"result = "<<uniqueoccur;
}