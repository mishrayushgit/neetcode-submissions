class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> answer(size,0);
        stack <int> ist;
        for(int i = 0; i< size; i++){
            if(ist.empty()){
            ist.push(i);
            continue;
            }
            if(temperatures[ist.top()]<temperatures[i]){
                while(temperatures[ist.top()]<temperatures[i]){
                int days = i - ist.top();
                answer[ist.top()] = days;
                ist.pop();
                if(ist.empty()){
                    break;
                }
                }
                ist.push(i);
               
            }
            else{
                ist.push(i);
            }
        }
        return answer;

    }
};
