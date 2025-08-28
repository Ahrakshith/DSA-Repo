class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n2) {
        int i=0;
        int n=arr.size();
        int count=0;

        while(i<n){
            if(arr[i]==0 &&
             (i==0 || arr[i-1]==0 )
             && 
             (i==n-1 || arr[i+1]==0)
             ){
                arr[i]=1;
                count++;
                i+=2;
            }
            else{
                i++;
            }
        }
        if(count>=n2) return true;
        return false;
    }
};