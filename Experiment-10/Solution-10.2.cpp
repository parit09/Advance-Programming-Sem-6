/*      Problem 2
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

Constraints:
1 <= n <= 45
*/
//  https://leetcode.com/problems/climbing-stairs/description/

class Solution {
    public:
                            // int recurse(int var,vector<int>&dp){
                            //     if(var<0)  return 0;
                            //     if(var==0)  return 1;
                            //     if(dp[var]!=-1) return dp[var];
                            //     return dp[var]=recurse(var-1,dp) + recurse(var-2,dp);
                            // }
        int climbStairs(int n) {
                            // vector<int> dp(n+1,0);
                            // dp[0]=1;
                            // dp[1]=1;
                            // for(int i=2;i<=n;i++)
                            // {
                            //     dp[i]=dp[i-1] + dp[i-2];
                            // }
                            // return dp[n];
            if(n==1) return 1;
            int a=1;
            int b=1;
            int c=0;
            for(int i=2;i<=n;i++)
            {
                c = a + b;
                a=b;
                b=c;
            }
            return c;
        }
    };