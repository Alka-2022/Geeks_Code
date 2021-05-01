class Solution {
    
public:
    
  int removeDuplicates(vector<int> &nums) 
  {
    int size = nums.size();
    if (size == 0)
      return 0;
    int left_pointer = 0;
    for (int right_pointer = 1; right_pointer < size; ++right_pointer) 
    {
      if (nums[right_pointer] != nums[left_pointer]) 
      {
        left_pointer++;
        nums[left_pointer] = nums[right_pointer];
          
      }
    }
    return left_pointer + 1;
      
  }
};
