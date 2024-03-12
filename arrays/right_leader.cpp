/*
Leaders in an array
Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is a leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.

Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17
as it is greater than all the elements
to its right.  Similarly, the next
leader is 5. The right most element
is always a leader so it is also
included.

link:https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
*/

class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int a[], int n)
    {
        int curr_leader = INT_MIN;
        vector<int> leader_arr;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] >= curr_leader)
            {
                curr_leader = a[i];
                leader_arr.push_back(a[i]);
            }
        }
        reverse(leader_arr.begin(), leader_arr.end());
        return leader_arr;
    }
};
