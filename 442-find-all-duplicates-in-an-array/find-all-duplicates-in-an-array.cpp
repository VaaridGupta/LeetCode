class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> result ; 
        map<int, int> mp ;      
        

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++ ; 
        }
        for(auto p : mp){
            if(p.second > 1 ){
                result.push_back(p.first) ; 
            }
        }
        
        return result ; 
        
    }
};