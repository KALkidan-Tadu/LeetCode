class StockSpanner {
public:
    stack<pair<int,int>> mystack;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int answer = 1;
        while(!mystack.empty() && mystack.top().first <= price){
            answer += mystack.top().second;
            mystack.pop();
        }
        mystack.push({price, answer});
        return answer;
    }
};
