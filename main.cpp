class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() <= 2) return nums[0];
        map<int, int> mymap;
        int maxcount= 0, maxval = -1;
        for(int i = 0; i < nums.size(); i++){
            if(mymap.find(nums[i]) == mymap.end()){
                mymap.insert(pair<int, int>(nums[i], 1));
            }else{
                mymap[nums[i]]++;
            }
            if(mymap[nums[i]] > maxcount){
                maxcount = mymap[nums[i]];
                maxval = nums[i];
            }//end if
            
        }//end for i
        return maxval;
    }
};
