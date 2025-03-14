class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int count = 1;
        vector<int> cnt;
        sort(arr.begin(),arr.end());

        for(int i=1;i<arr.size();i++){
            if(arr[i] == arr[i-1])
                count++;
            
            else{
                cnt.push_back(count);
                count = 1;
            }
        }
        cnt.push_back(count);
        sort(cnt.begin(),cnt.end());
        for(int i=1;i<cnt.size();i++){
            if(cnt[i] == cnt[i-1])
                return false;
        }
        return true;
        
    }
};