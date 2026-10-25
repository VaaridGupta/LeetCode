class Solution {
public:

    int Mountain(vector<int> arr){
        int s=0,e=arr.size()-1;
        int mid=(s+e)/2;

        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=(s+e)/2;
        }
        return s;
    }    
    int peakIndexInMountainArray(vector<int>& arr) {
        return Mountain(arr);        
    }
};