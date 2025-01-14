class Solution {
public:
   int funmaxi(vector<int>& v, int n) {
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxi = max(v[i], maxi);
    }
    return maxi;
}

long long calhrs(vector<int>& v, int speed) {
    long long totalhrs = 0;
    for (int i = 0; i < v.size(); i++) {
        totalhrs += (long long)(v[i] + speed - 1) / speed; 
    }
    return totalhrs;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size();
    int low = 1, high = funmaxi(piles, n);

    while (low <= high) {
        int mid = (low + high) / 2; 
        long long total_hrs = calhrs(piles, mid);

        if (total_hrs <= h) {
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }

    return low; 
}

};
