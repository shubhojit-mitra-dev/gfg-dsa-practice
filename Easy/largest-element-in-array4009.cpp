/*
Problem: Largest Element In Array4009
Difficulty: Easy
Tags: N/A
URL: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1?page=1&difficulty=Basic&sortBy=submissions
*/

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        vector<int>::iterator it = max_element(arr.begin(), arr.end());
        int max = *it;
        return max;
    }
};