// TIME COMPLEXITY

// push -> log n
// top -> O(1)
// pop -> log n
// erase -> log n
// set -> everything happes in log n 



// PAIRS
// generally lies in the utility library

void explainPairs() {
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {2, 3}};

    cout << p.first << " " << p.second.second << " " << p.second.first;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5,1}};

    cout << arr[1].second;
} 





// VECTORS
// dynamic in nature i.e., its size can be increased dynamically

void explainVector() {
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // faster than push_back

    vector<pair<int, int>>vec;

    v.push_back({1, 2});
    v.emplace_back(1, 2);

    vector<int> v(5, 100); //  o/p --> {100, 100, 100, 100, 100}
 
    vector<int> v(5); // o/p --> {0, 0, 0, 0, 0} or any garbage value

    vector<int> v1(5, 20); // o/p --> {20, 20, 20, 20, 20}
    vector<int> v2(v1); // v1 copied in v2

    // syntax of iterator
    // vector<int>::iterator "name"
    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";
    // *(it) access the value inside the memory

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();

    vector<int>::iterator it = v.rend(); // reverse end
    
    vector<int>::iterator it = v.rbegin(); // reverse begin 
    
    cout << v[0] << " " << v.at(0);
    
    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    // auto means it will automatically asign a data type to a value according to the data
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for (auto it : v) {
        cout << it << " ";
    }

    // {10, 20, 12, 23}
    v.erase(v.begin()+1);

    // {10, 20, 12, 23, 35}
    v.erase(v.begin()+2, v.begin()+4); // // (10, 20, 35) [start, end)


    // Insert Function

    vector<int>v(2, 100); // {100, 100}
    v.insert(v.begin(), 300) // {300, 100, 100}
    v.insert(v.begin()+1, 2, 10) // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size(); // 2

    // {10, 20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40}, v2 -> {10, 20} 
}





// LISTS

void explainList() {
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(); // {2, 4}

    // rest functions are same as the vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}





// DEQUE

void explainDeque() {
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    dq.back();

    dq.front();

    //rest functions same as the vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}





// STACK
// LIFO (Last In First Out)

void explainStack() {
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace_back(5); // {5, 3, 3, 2, 1}

    cout << st.top(); // prints 5 "** st[2] is invalid"

    st.pop(); // st looks like {3, 3, 2, 1}

    cout << st.top(); // 3
    cout << st.size(); // 4

    cout << st.empty(); 

    stack<int>st1, st2;
    st1.swap(st2);
}





// QUEUE
// FIFO (First In First Out)

void explainQueue() {
queue<int> q;
q.push(1); // {1}
q.push(2); // {1, 2}
q.emplace_back(4); // {1, 2, 4}

q.back() += 5;

cout << q.back(); // prints 9

// Q is {1, 2, 9}
cout << q.front(); // prints 1

q.pop(); // {2, 9}

cout << q.front(); // prints 2

// size swap empty same as stack
}





//Priority Queue

void explainPQ() {
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8, 5, 2}

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
}





// SET
// stores data in sorted order
// stores unique data

void explainSet() {
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vector 
    // can also be used, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // returns the iterator which points to the address

    // {1, 2, 3, 4, 5}
    auto it = st.find(6); // if an element is not in the set, it will always return st.end()

    //{1, 4, 5}
    st.erase(5); // erases 5 // takes lograthmic time

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); // takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

    // lower_bound() and upper_bound() function works in the same way
    // as in the vector it does

    // Syntax ->
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);  
}





// MULTI-SET
// only obeys only sorted order
// doensn't obey unique

void explainMultiSet() {
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    //onlt a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);

    // rest all function are same as set   
}





// UNORDERED SET
// doesn't obey sorted order
// doesn't obey unique


void expalinUSet() {
    unordered set<int> st;
    //lower_bound and upper_bound function does not works
    // rest all functions are same
    // as above, it does not stores in any particular order it has a better time complexity than set in most cases, except some when collision happens
}





// MAP
// uses unique keys
// stores everything in respect of Keys and Values 

void explainMap() {
    map<int, int> mpp;
    // map<keys, value> 

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace({3, 1});
    
    mpp.insert({2, 4});

    MPP[{2, 3}] = 10;

    {
        {1, 2}
        {2, 4}
        {3, 1}
    }

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    cout < *(it).second;

    auto it = mpp.find(5);

    // This is the syntax
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    // erase, swap, empty, are same as above
}





// MULTI-MAP

void explainMultiMap() {
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}





// UNORDERED MAP

void explainUnorderedMap() {
    // same as set and unorderd_Set difference.
}