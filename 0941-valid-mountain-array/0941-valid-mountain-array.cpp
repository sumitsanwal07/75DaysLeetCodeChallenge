class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
//  increaing part 
        while(i<n-1 && arr[i]<arr[i+1]){
            i++;
        }
        //peak cannot be first or last elements
        if(i==0 || i==n-1){
            return false;
        }
        //decreasing part 
        while(i<n-1 && arr[i]>arr[i+1]){
            i++;
        }
        //must reach the end 
        return i == n-1;
    }
};