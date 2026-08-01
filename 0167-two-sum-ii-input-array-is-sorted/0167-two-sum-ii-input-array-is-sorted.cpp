class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int st = 0 , end = arr.size() - 1;
        int currsum = 0;
        vector<int> ans;

        while(st < end){
            currsum = arr[st] + arr[end];
            if(currsum == target){

                return {st+1,end+1};
            }else if(currsum > target){
                end--;
            }else{
                st++;
            }
        }
        return ans ;
            }

};