class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        int low = 1, high = n;

        while(low < high){
            if(numbers[low-1] + numbers[high-1] == target) return {low, high};
            else if(numbers[low-1] + numbers[high-1] > target) high--;
            else if(numbers[low-1] + numbers[high-1] < target) low++;
        }

        return {};
    }
};