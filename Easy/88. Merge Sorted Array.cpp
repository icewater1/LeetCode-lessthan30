class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0)
        {
            m = n;
            nums1 = nums2;
        }
        else
        {
            for(int i = 0; i < n; i++, m++)
            {
                auto it = nums1.begin();
                if(nums2[i] <= nums1[0])
                {
                    nums1.emplace(it,nums2[i]);
                    nums1.pop_back();
                }
                else if(nums2[i] >= nums1[m-1])
                {
                    nums1[m] = nums2[i];
                }
                else
                {
                    while(*it < nums2[i]) it++;
                    nums1.pop_back();
                    nums1.emplace(it,nums2[i]);
                }
            }
        }
    }
};
