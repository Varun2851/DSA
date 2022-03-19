//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
class Solution{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int check = 1;
        int k = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1] && check == 1)
            {
                nums[k] = nums[i];
                k++;
                check++;
            }
            else if (nums[i] != nums[i - 1])
            {
                nums[k] = nums[i];
                k++;
                check = 1;
            }
        }
        return k;
    }
};