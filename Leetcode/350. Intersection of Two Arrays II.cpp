class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int count[1001]={0};
        vector<int>d;
        for(int i=0;i<nums1.size();i++){
            count[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(count[nums2[i]]>0){
                d.push_back(nums2[i]);
                count[nums2[i]]--;
            }
        }
        return d;
    }
};
