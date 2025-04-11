#include <iostream>
using namespace std;

class Soultion {
public:
    vector<int> twoSum(vector<int>& num, int target){
        unordered_map<int, int> _map;
        for(int i = 0; i < num.size(); ++i){
            int nums = num[i];
            int complement = target - nums;
            auto it = _map.find(complement);
            if(it != _map.end()){
                return {it->second, i};
        }
        _map[nums] = i;
    }
    return {};
}