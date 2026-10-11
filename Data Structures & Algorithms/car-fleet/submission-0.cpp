class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> time;
        vector<pair<int,double>> cars;
        int n = position.size();
        for(int i = 0; i < n; i++){
            double dur = (double)(target - position[i])/speed[i];
            cars.push_back({position[i],dur});
        }
        sort(cars.rbegin(),cars.rend());
        for(int i = 0; i < n ; i++){
            if(time.empty() || cars[i].second > time.top()){
                time.push(cars[i].second);
            }
        }
        return time.size();
}
};
