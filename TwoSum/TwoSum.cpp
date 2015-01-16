class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> result;
        map<int, int> m;
        for(int i = 0; i<numbers.size(); i++){
            if(m.find(numbers[i]) == m.end()){
                m[target - numbers[i]] = i;
            }else{
                result.push_back(m[numbers[i]]+1);
                result.push_back(i+1);
            }
        }
        return result;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> result;
        map<int, int> m;
        for(int i = 0; i<numbers.size(); i++){
            if(m.find(target - numbers[i]) == m.end()){
                m[numbers[i]] = i;
            }else{
                result.push_back(m[numbers[i]]+1);
                result.push_back(i+1);
            }
        }
        return result;
    }
};