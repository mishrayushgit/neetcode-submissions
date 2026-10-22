class TimeMap {
unordered_map<string,vector<pair<string,int>>> mapi;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mapi[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        
        int left = 0;
        int right = mapi[key].size()-1;
        if(right < 0){
            return "";
        }
        while(left<=right){
            int mid = (left + right)/2;
            if(mapi[key][mid].second == timestamp){
                return mapi[key][mid].first;
            }
            else if(mapi[key][mid].second>timestamp){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        if (right >= 0) {
        return mapi[key][right].first;
    }
        return "";
    }
};
