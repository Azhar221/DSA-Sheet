//beginner friendly
void sort120 (vector<int>& nums) {
    int one=0,two = 0,zero = 0;
      for (int i =0;i < nums.size();i++) {
        if(nums[i] == 0)
          zero++;
        else if (nums[i] == 1)
          one++;
        else
          two++;
      }
  
      nums.clear();
      for(int i=0;i<zero;i++)
        nums.emplace_back(0);
      for (int i =0;i<one;i++)
        nums.emplce_back(1);
      for(int i=0;i<two;i++)
        nums.emplce_back(2);
 }
//Total TC:O(n) SC:O(1) -> auxillary space

//below method just swap all zeros to first and 2's to last remaing will in correct position
//TC:O(n) SC:(1)
void sort120(vector<int>& nums) {
  int ptr1 = 0; //starting pointer 
  int ptr2 = nums.size() - 1; //ending pointer
  int curr = 0; //current pointer
  while (curr <= ptr2) { //if current less than equal to end pointer
    if (nums[curr] == 0 ) {
        swap(nums[ptr1],nums[curr]); //if 0 found then swap with current and start pointer values
        ptr1++; //move start pointer one step ahead
        curr++; //move current pointer one step ahead
    }
    else if(nums[curr] == 1){
      curr++; // if current pointer at 1 then just move the current pointer ahead
    }
     else if(nums[curr] == 2) {
        swap(nums[ptr2],nums[curr]); // if current pointer is 2 then swap values of current and end pointer values
        ptr2--; // movew end pointer one step back
     }
  }

}
