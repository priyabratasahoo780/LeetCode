class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minutesDegree = minutes*6;
        // 30*6 = 180
        double hourDegree = (hour*30) + (minutesDegree)/12;
        // 360 + 180/12 = 375
        double ans = abs(hourDegree - minutesDegree);
        // 195
        return min(ans, 360-ans);
    }
};