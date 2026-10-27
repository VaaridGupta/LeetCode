class Solution {
public:
    int Pivot(vector<int>& nums){
        int s = 0;
        int e = nums.size()-1;

        int mid = (s+e)/2;

        while(s<e){
            if(nums[mid]>=nums[0]){
                s = mid+1;
            }
            else{
                e=mid;
            }
            mid=(s+e)/2;
        }
        return s;
    }
    
    int BinarySearch(vector<int>& nums,int s,int e,int target){
        int mid = (s+e)/2;

        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }

            else if(nums[mid] > target){
                e = mid -1;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            mid = (s+e)/2;
        }
        return -1 ;
    }

     int search(vector<int>& nums, int target) {

        if (nums.empty()) return -1;
        int pivot=Pivot(nums);
        if(target >= nums[pivot] && target<=nums[nums.size()-1]){
           return BinarySearch(nums,pivot,nums.size()-1,target);
        }
        else{
           return BinarySearch(nums,0,pivot-1,target);
        }
    }
};