class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;  // handles is the value passed is null or empty.

        int writeIndex = 1;  // variable to update the final array.
        int count = 1;  
        
        for (int i = 1; i < nums.size(); i++) {  
            if (nums[i] == nums[i - 1]) { 
                count++;  
            } else {  
                count = 1; 
            }  
            
            if (count <= 2) {  
                nums[writeIndex] = nums[i]; 
                writeIndex++; 
            }  
        }  
        return writeIndex; 
    }
};
