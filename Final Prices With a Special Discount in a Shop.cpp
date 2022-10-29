class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> discount(prices.size());
        stack<int> stack;
        for(int i=0; i<prices.size(); i++){
            while(!stack.empty() && prices[stack.top()]>=prices[i]){
                discount[stack.top()] = prices[stack.top()] - prices[i];
                stack.pop();
            }
            stack.push(i);
        }
        while(!stack.empty()){
            discount[stack.top()] = prices[stack.top()];
            stack.pop();
        }
        return discount;
    }
};
