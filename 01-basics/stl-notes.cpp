#include <bits/stdc++.h>
using namespace std;
// VECTOR ARE DYNAMIC ARRAYS
// LISTS ARE DOUBLY LINKED LISTS
void explainPair()

{
    pair<int, int> pr1 = {2, 8};
    cout << pr1.first << " " << pr1.second << endl;
    pair<int, pair<int, int>> pr2 = {1, {2, 3}};
    cout << pr2.first << " " << pr2.second.first << " " << pr2.second.second << endl;
}
void explainVector()

{
    vector<int> v(5, 8); // vector of size 5 and all elements are 8 except what we input
    v.push_back(1);

    v.emplace_back(3);
    v.push_back(4);    // same way to add elements in vector
    v.emplace_back(2); // same way to add elements in vector
    cout << "Vector elements are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // iterators in vector
    for (auto i : v)
    {
        cout << i << " ";
    }

    cout << endl;
    vector<int>::iterator itr = v.begin();
    vector<int>::iterator itr2 = v.end();
    cout << "The first element is: " << *itr << endl;

    // reverse iterators in vector
    auto reverseBegin = v.rbegin();
    auto reverseEnd = v.rend();
    for (auto i = reverseBegin; i != reverseEnd; i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    vector<int> v2 = {1, 2, 3, 4, 5};
    v2.push_back(6);
    vector<int> dupVec(v2.begin() + 1, v2.end());
    // begin points to the second element of v2 and end points to the last element of v2
    // so begin points to the exact element as stated but end points to the next element of the last element of v2
    // range rule is include start position and exclude end position
    cout << "Duplicate vector elements are: ";
    for (auto i : dupVec)
    {
        cout << i << " ";
    }
    cout << endl;
}
void explainVector2()
{
    // iterators in vector are used to point to the memory address of the elements in vector
    vector<int> v5 = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    vector<int> v6 = {100, 200, 300, 400, 500};
    swap(v5, v6);
    v5.insert(v5.begin() + 2, 25); // insert at a  certain position in vector
    v5.pop_back();
    v5.erase(v5.begin() + 2, v5.end() - 1);
    cout << v5.front() << " " << v5.back() << endl;
    for (vector<int>::iterator it = v5.begin(); it != v5.end(); ++it)
    {
        cout << *it << " ";
    }
    // erase helps to clear the elements in vector that are subsequent to the iterator position
}
void explainList()
{
    vector<int> v = {2, 3};
    v.push_back(4); // v: 2 3 4

    list<int> l = {2, 3};
    l.push_front(1); // l: 1 2 3
    l.push_back(4);  // l: 1 2 3 4
    for (auto i : l)
    {
        cout << i << " ";
    }
}
void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    while (st.empty() == false)
    {
        cout << st.top() << " "; // will print all the elements in stack but will not remove them from stack
        st.pop();
    }
    cout << endl;
}
void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (q.empty() == false)
    {
        cout << q.front() << " "; // will print all the elements in queue but will not remove them from queue
        q.pop();
    }
}
void explainPq() // stores highest element at top
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(2);
    pq.push(38);

    while (pq.empty() == false)
    {
        cout << pq.top() << " "; // will print all the elements in priority queue but will not remove them from priority queue
        pq.pop();
    }
    // if you want to store the lowest element at top then use priority_queue<int, vector<int>, greater<int>> pq;
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(10);
    pq2.push(2);
    pq2.push(38);

    while (pq2.empty() == false)
    {
        cout << pq2.top() << " "; // will print all the elements in priority queue but will not remove them from priority queue
        pq2.pop();
    }
}
void explainSet() // stores unique elements in sorted order
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(9);
    s.insert(8);
    s.insert(9);
    s.insert(10);
    s.erase(4); // removes the element from the set
    // we can also use s.erase(s.begin()) to remove the first element from the set and delete in a specific range

    cout << endl;
    cout << s.count(9); // counts can be used as find as well
    cout << endl;
    auto it = s.find(5); // returns an iterator to the element if found else returns an iterator to the end of the set
    if (it != s.end())
    {
        cout << "Element found: " << *it << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    for (auto it2 : s)
    {
        cout << it2 << " ";
    }
}
void explainSet2()
{
    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(213);
    s1.insert(4);
    auto it1 = s1.begin();
    it1++;
    auto it2 = s1.end();
    it2--;
    s1.erase(it1, it2); // removes the elements from the set in a specific
    // range
    for (auto it3 : s1)
    {
        cout << it3 << " ";
    }

    // returns an iterator that points to the element that is greater than or equal to the given value. If no such element exists, it returns an iterator to the end of the set.
    auto it4 = s1.lower_bound(1);
    cout << *it4 << endl;

    auto it5 = s1.upper_bound(1); // returns an iterator that points to the element that is strictly greater than the given value. If no such element exists, it returns an iterator to the end of the set.
}
void explainMultiSet()
{
    multiset<int> ms; // stores duplicate elements in sorted order
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    // it points to first 1 in find functiuon
    auto it = ms.erase(ms.find(1)); // removes the first 1 and returns an iterator to the next element
    for (auto i : ms)
    {
        cout << i << " ";
    }
}
void explainUnorderedSet() // stores unique elements in unsorted order
{
    unordered_set<int> us; // best for time complexity as it uses hashing to store the elements
    us.insert(1);
    us.insert(1);
    us.insert(1);
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);
    us.insert(6);
    us.insert(9);
    us.insert(8);
    us.insert(9);
    us.insert(10);
    for (auto it : us)
    {
        cout << it << " ";
    }
}
void explainMap()
{
    map<int, string> mp; // stores unique elements in sorted order
    mp[1] = "one";
    mp[2] = "two";
    mp[3] = "three";
    mp.insert({4, "four"});
    auto it = mp.find(2); // returns an iterator to the element if found else returns an iterator to the end of the map
    auto it2 = mp.find(5);
    if (it2 != mp.end())
    {
        cout << "Element found: " << it2->first << " " << it2->second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    cout << it->first << " " << it->second << endl;
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
}
void explainUnorderedMap()
{
    unordered_map<int, string> ump; // stores unique elements in unsorted order
    ump[1] = "one";
    ump[2] = "two";
    ump[3] = "three";
    ump.insert({4, "four"});
    auto it = ump.find(2); // returns an iterator to the element if found else returns an iterator to the end of the map
    auto it2 = ump.find(5);
    if (it2 != ump.end())
    {
        cout << "Element found: " << it2->first << " " << it2->second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    cout << it->first << " " << it->second << endl;
    for (auto i : ump)
    {
        cout << i.first << " " << i.second << endl;
    }
}
void multiMap()
{
    multimap<int, char> mpp; // stores duplicate elements in sorted order
    mpp.insert({1, 'a'});
    mpp.insert({1, 'a'});
    mpp.insert({1, 'a'});
    mpp.insert({3, 'b'});
    mpp.insert({3, 'c'});
    mpp.insert({3, 'c'});
    mpp.insert({3, 'c'});
    mpp.insert({3, 'c'});
    mpp.insert({2, 'b'});
    for (auto i : mpp)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = mpp.equal_range(3); // returns a pair of iterators that points to the range of elements with the given key
    for (auto i = it.first; i != it.second; i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
}

void explainSort()
{
    int arr[] = {5, 2, 3, 1, 4};
    sort(arr, arr + 5); // sorts the array in ascending order starting from the first element to the last element
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // same thing can be done for vector as well
    vector<int> v = {5, 2, 3, 1, 4};
    sort(v.begin() + 1, v.end() - 1); // sorts the vector in ascending order
    for (auto element : v)
    {
        cout << element << " "; // sorts the vector in ascending order starting from the second element to the second last element
    }
}
void explainAccumulate()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int sum = accumulate(v.begin() + 4, v.end(), 0); // calculates the sum of all elements in the vector starting from the initial value of 0
    cout << "Sum of all elements in the vector: " << sum << endl;
}
void explainCount()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int count1 = count(v.begin(), v.end(), 3); // counts the number of occurrences of the given value in the vector
    cout << "Count of 3 in the vector: " << count1 << endl;
}
void explainFind()
{
    vector<int> v = {1, 2, 3, 3, 4, 5};
    auto it = find(v.begin(), v.end(), 3); // returns an iterator to the first occurrence of the given value in the vector
    if (it != v.end())
    {
        cout << "Element found: " << *it << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}
void explainNextPermutation()
{
    string s = "abc";
    do
    {

        cout << "Next permutation of abc: " << s << endl;
    } while (next_permutation(s.begin(), s.end())); // generates the next lexicographically greater permutation of the given string
    string s2 = "cba";
    do
    {
        cout << "Next permutation of cba: " << s2 << endl;
    } while (prev_permutation(s2.begin(), s2.end())); // generates the next lexicographically greater permutation of the given string
}
void explainMaxElement()
{
    vector<int> v = {1, 2, 3, 4, 5};
    auto it = max_element(v.begin(), v.end()); // returns an iterator to the maximum element in the vector
    cout << "Maximum element in the vector: " << *it << endl;
}
void explainReverse()
{
    vector<int> v = {1, 2, 3, 4, 5};
    reverse(v.begin(), v.end()); // reverses the elements in the vector
    for (auto element : v)
    {
        cout << element << " "; // prints the reversed vector
    }
}
bool internalComparator(int a, int b)
{
    if (a > b)
    {

        return true;
    }
    else
    {
        return false;
    }; // returns true if a is greater than b
}
void explainComparator()
{
    int arr[] = {5, 2, 3, 1, 4};
    sort(arr, arr + 5, internalComparator); // sorts the array using the internal comparator
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
bool internalComparator1(pair<int, int> a, pair<int, int> b)
{

    if (a.second > b.second)
    {
        return true;
    }
    if (a.second < b.second)
    {
        return false;
    }
    if (a.first < b.first)
    {
        return true;
    }
    else
    {
        return false;
    }; // returns true if a is greater than b
}
void explainComparator2()
{
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    sort(arr, arr + 4, internalComparator1); // sorts the array using the internal comparator
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}
int main()
{
    explainList();
    explainPair();
    explainVector();
    explainVector2();
    explainStack();
    explainQueue();
    explainPq();
    explainSet();
    explainSet2();
    explainMultiSet();
    explainUnorderedSet();
    explainMap();
    explainUnorderedMap();
    multiMap();
    explainSort();
    explainSort();
    explainAccumulate();
    explainCount();
    explainFind();
    explainNextPermutation();
    explainMaxElement();
    explainReverse();
    explainComparator();
    explainComparator2();
}
// unordered_set / unordered_map: O(1) on average, O(n) worst case