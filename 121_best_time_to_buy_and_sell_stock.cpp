#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// int maxProfit(vector<int>& prices) {
//         int min=prices[0],place=0,profit=0;
//         for(int i=0;i<prices.size();i++)
//         {
//             if(min>=prices[i])
//             {
//                 min=prices[i];
//                 place=i;
//             }
//         }
        

//         vector<int> findprofit(prices.size()-place,0);
//         if(findprofit.size()!=1)
//         {
//             int count=0;
//             for(int i=place;i<prices.size();i++)
//             {
//                findprofit[count]=prices[i];
//                count++;
//             }
//             sort(findprofit.begin(),findprofit.end());
//             profit=findprofit[findprofit.size()-1]-findprofit[0];
//             return profit;
//         }
//         else
//         {
//             return profit;
//         }

//     }

// wrong approach as i fix buy price to the global minimum from earliest

int maxProfit(vector<int>& prices) {
     int minprice=prices[0],profit=0;
     for(int i=1;i<prices.size();i++)
     {
        profit=max(profit,prices[i]-minprice);
        minprice=min(minprice,prices[i]);
     }
     return profit;
    }

    int main()
    {
        cout<<"Enter vector size =";
        int n;
        cin>>n;
        
        cout<<"Enter vector elements := ";
        vector<int>nums(n);

        for(int i=0;i<nums.size();i++)
        {
            cin>>nums[i];
        }
        
        int profit=maxProfit(nums);

        cout<<"answer = "<<profit;

        return 0;
    }