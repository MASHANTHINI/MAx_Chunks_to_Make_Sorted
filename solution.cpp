class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count=0;
        int m=0;
        for(int i=0;i<arr.size();i++){
            m=max(m,arr[i]);
            if(m==i){
                count++;
            }
        }
        return count;
    }
};
