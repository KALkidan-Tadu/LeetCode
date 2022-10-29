class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        vector<int> radius(houses.size(), INT_MAX);
        int home = 0, heat = 0;
        while(home<houses.size() && heat<heaters.size()){
            if(houses[home]<=heaters[heat]){
                radius[home] = min(radius[home], heaters[heat] - houses[home]);
                home++;
            }else
                heat++;
        }
        home = houses.size()-1, heat = heaters.size()-1;
        while(home>=0 && heat>=0){
            if(houses[home]>=heaters[heat]){
                radius[home] = min(radius[home], houses[home]-heaters[heat]);
                home--;
            }else
                heat--;
        }
        sort(radius.begin(), radius.end(), greater<int>());
        return radius[0];
    }
};
