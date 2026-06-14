class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp = arr;

        for(int i=0;i<n-1;i++){
            int maxi = temp[i+1];
            for(int j=i+1;j<n;j++){
                if(temp[j] > maxi) maxi = temp[j];
            }
            arr[i] = maxi;
        }

        arr[n-1] = -1;
        return arr;
    }
};