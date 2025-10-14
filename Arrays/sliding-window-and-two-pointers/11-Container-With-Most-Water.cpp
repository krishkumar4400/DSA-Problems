#include<iostream>
#include<vector>
#include<algorithm>

int maxArea(vector<int>heights)
{
    int n = heights.size();
    int lp = 0;
    int rp = n-1;
    int ans = INT32_MIN;

    while(lp < rp) {
        int width = rp-lp;
        int ht = min(ht[lp], ht[rp]);

        int currWater = width * height;

        ans = max(ans, currWater);

        ht[lp] < ht[rp] ? lp++ : rp--;
    }
    return ans;
}

int main() {
    vector<int>heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxWater = maxArea(heights);
    cout << "Maximum water the container can contain = "<< maxWater<<endl;
}