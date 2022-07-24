#include<bits/stdc++.h>
using namespace std;

int isPossible(vector<int> &boards, int k, int mid) {
    int painterCounts = 1;
    int boardSum = 0;
    int n = boards.size();

    for (int i = 0; i < n; i++) {
        if (boardSum + boards[i] <= mid) {
            boardSum += boards[i];
        }
        else {
            painterCounts++;
            if (painterCounts > k || boards[i] > mid) {
                return false;
            }
            boardSum = boards[i];
        }
    }
    return true;
}

int binarySearch (vector<int> &boards, int k) {
    int n = boards.size();
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += boards[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        if(isPossible(boards, k, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main () {
    vector<int> boards = {5, 5, 5, 5};
    int k = 2;
    int boardSum = 10;

    cout << binarySearch(boards, k);
    return 0;
}