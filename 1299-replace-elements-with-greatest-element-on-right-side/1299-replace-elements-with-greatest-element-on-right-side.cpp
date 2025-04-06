class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = -1;
        for(int i=arr.size()-1;i>=0;i--){
            int temp = arr[i];
            arr[i] = maxi;
            maxi = max(maxi, temp);
        }
        return arr;

        /*for(int i=0;i<arr.size();i++){
            int maxi = INT_MIN;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>maxi){
                    maxi = arr[j];
                }
            }
            arr[i] = maxi; 
        }
        arr[arr.size()-1] = -1;
        return arr;*/
    }
};