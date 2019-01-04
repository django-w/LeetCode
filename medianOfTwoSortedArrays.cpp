class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double mid = 0;
        int midIndex = 0;
        int count = 0;
        int total = 0;
        if(nums1.size() == 0 || nums2.size() == 0){
            if(nums1.size() == 0){
                if(nums2.size() % 2 == 0){
                    midIndex = nums2.size() / 2;
                    mid = (nums2[midIndex] + nums2[midIndex-1]) / 2.0;
                    return mid;
                }
                else{
                    midIndex = nums2.size() / 2;
                    mid = nums2[midIndex];
                    return mid;
                }
            }
            
            if(nums2.size() == 0){
                if(nums1.size() % 2 == 0){
                    midIndex = nums1.size() / 2;
                    mid = (nums1[midIndex] + nums1[midIndex-1]) / 2.0;
                    return mid;
                }
                else{
                    midIndex = nums1.size() / 2;
                    mid = nums1[midIndex];
                    return mid;
                }
            }
        }
                                
        total = nums1.size() + nums2.size();
        vector<int> tmp;
        int i = 0, j = 0;
        for(int loop = 0; loop < total; loop++){
            if(i >= nums1.size()){
                tmp.push_back(nums2[j]);
                j++;
                continue;
            }
            if(j >= nums2.size()){
                tmp.push_back(nums1[i]);
                i++;
                continue;
            }
            if(nums1[i] <= nums2[j]){
                tmp.push_back(nums1[i]);
                i++;
            }
            else{
                tmp.push_back(nums2[j]);
                j++;
            }
        }
        
        if(total % 2 == 0){
            midIndex = total / 2;
            mid = (tmp[midIndex] + tmp[midIndex-1]) / 2.0;
            return mid;
        }
        else{
            midIndex = total / 2;
            mid = tmp[midIndex];
            cout << mid;
            return mid;
        }
    return mid;
    }
};