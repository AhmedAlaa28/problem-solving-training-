
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int,greater<>>ms(nums.begin(),nums.end());
        auto it=ms.begin();
            advance(it,--k);
                return *it;
    }
};
// second approach
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int, vector<int>, greater<int>> mnHeap;

        for (int i = 0; i < (int)nums.size(); i++) {
            if ((int)mnHeap.size() <= k ||
                nums[i] > mnHeap.top()) { 
                mnHeap.push(nums[i]);
                if ((int)mnHeap.size() > k)
                    mnHeap.pop();
            }
        }
        return mnHeap.top(); 
    }
};
