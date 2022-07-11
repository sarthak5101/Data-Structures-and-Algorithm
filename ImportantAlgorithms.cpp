void impAlgo() {
    // GIVEN -> An array 'a' of length n:
    // We have to arrange the elements of the array in a sorted manner: 
    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>);

    pair<int, int> a[] = ({1, 2}, {2, 1}, {4, 1});

    // sort it according to the second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a, a+n, comp); // comp -> ITS A SELF WRITTEN COMPARATOR, AND ITS NOTHING BUT A BOOLEAN COMPARATOR

    // {{4, 1}, {2, 1}, {1, 2}}

    // Solving above:
    /* bool comp (pair<int, int> p1, pair<int, int> p2) {
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;
        // if they are same

        if(p1. first > p2.first) return true;
        return false;
    }*/

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 165786578687;
    int cnt = __builtin_popcountll();

    string s = "123";
    sort(s.begin(), s.end());

    do {
        cout << s << endl;
    } while(next_permutation(S.begin(), s.end()));

    int maxi = *max_element(a, a+n);
    // similarly for min element
}


int main() {
    return 0;
}



