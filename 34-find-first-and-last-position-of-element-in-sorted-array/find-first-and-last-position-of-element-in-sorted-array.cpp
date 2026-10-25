class Solution {
    int firstocc(vector<int> &arr,int key){
    int s=0,e=arr.size()-1;
    int mid=(s+e)/2;
    int ans=-1;
    while (s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
         mid=(s+e)/2;
    }
     return ans;
}

int lastocc(vector<int> &arr,int key){
    int s=0,e=arr.size()-1;
    int mid=(s+e)/2;
    int ans=-1;
    while (s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }

        mid=(s+e)/2;
    }
    return ans;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> result;
        result.push_back(firstocc(nums,target));
        result.push_back(lastocc(nums,target));
        
        return result;
    }
};