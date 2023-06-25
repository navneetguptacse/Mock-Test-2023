#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int left = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[left] = nums[i];
            left++; 
        }
    }
    
    for (int i = left; i < n; i++) {
        nums[i] = 0;
    }
}

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> nums(n);
        for(auto &i:nums)
            cin >> i;
        moveZeroes(nums);
        for(auto i:nums)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
