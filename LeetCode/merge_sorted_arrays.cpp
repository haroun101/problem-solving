// merge to sorted arrays into one sorted array
vector<int> MyMerge(vector<int>& nums1, vector<int>& nums2) {
    int i = 0 ,j = 0;
    int m = nums1.size() , n = nums2.size();
    vector<int>ans;
    while(i < m || j < n){
       while (i<m and (j == n or nums1[i] <= nums2[j])){
            ans.push_back(nums1[i++]);
       }
       while (j<n and (i == m or nums2[j] <= nums1[i])){
            ans.push_back(nums2[j++]);
       }
    }
    return ans ;
}
