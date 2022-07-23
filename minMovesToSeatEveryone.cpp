#include<bits/stdc++.h>
using namespace std;

int minMoves (vector<int> seats, vector<int> students) {
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
        int ans = 0;
    for (int i = 0; i < seats.size(); i++) {
        if (students[i] == seats[i]) continue;

        if (students[i] < seats[i]) 
            ans += (seats[i] - students[i]);

        else if (students[i] > seats[i])
            ans += (students[i] - seats[i]);
    }
    return ans;
}

int main () {
    vector<int> seats = {3, 1, 5};
    vector<int> students = {2, 7, 4};

    cout << minMoves(seats, students) << " ";
    return 0;
}