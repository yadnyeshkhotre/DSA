/*Find the smallest and second smallest element in an array

Given an array of integers, your task is to find the smallest and second smallest element in the array. If smallest and second smallest do not exist, print -1.
Example 1:

Input :
5
2 4 3 5 6
Output :
2 3
Explanation:
2 and 3 are respectively the smallest
and second smallest elements in the array.

link:https://www.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1

*/

vector<int> minAnd2ndMin(int a[], int n)
{
    int dummy, smallest = INT_MAX, sec_smallest = INT_MAX;
    int flag = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            sec_smallest = smallest;
            smallest = a[i];
        }
        if (a[i] < sec_smallest && a[i] != smallest)
        {
            sec_smallest = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            flag += 1;
        }
    }
    if (flag == n - 1)
    {
        v.push_back(-1);
        v.push_back(-1);
    }
    else
    {
        v.push_back(smallest);
        v.push_back(sec_smallest);
        return v;
    }
}
