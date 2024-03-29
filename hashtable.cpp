#include "hashtable.h"
#include <cassert>

/*                      HASH TABLE SNAPSHOT
*   The purpose of this file is to demonstrate my understanding
*   of the c++ STL unordered_map. This will include the following 
*   collision resolution methods: seperate chaining, quadratic 
*   probing and double hashing. These three methods are 
*   fundementally different in concept, and are therefore included
*   in this snapshot. Not included is linear probing due to it’s 
*   similarity and inferiority to quadratic probing
*/

int main() {
    int passedTests = 0;
    sepchain<string, int> hash1;
    cout << "Testing Seperate Chaining Probing\n";
    string s(45,'*');
    cout << s << endl;
    cout << "Test 1\n";
    hash1["foo"] = 0;
    if (hash1["foo"] == 0)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed\n";
        cout << "Actual: " << hash1["foo"] << endl;
        cout << "Expected: 0\n";
    }
    cout << "Test 2\n";
    hash1["foo"] = 1;
    if (hash1["foo"] == 1)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed\n";
        cout << "Actual: " << hash1["foo"] << endl;
        cout << "Expected: 1\n";
    }
    cout << "Test 3\n";
    if (hash1.size() == 1)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Size Test\n";
        cout << "Actual: " << hash1.size() << endl;
        cout << "Expected: 1\n";
    }
    cout << "Test 4\n";
    hash1.erase("foo",1);
    if (hash1.size() == 0)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Erase Test\n";
        cout << "Actual: " << hash1.size() << endl;
        cout << "Expected: 0\n";
    }
    cout << "Test 5\n";
    hash1["foo"] = 3;
    hash1["bar"] = 4;
    hash1["fizz"] = 5;
    if (hash1.size() == 3)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Insert Test\n";
        cout << "Actual: " << hash1.size() << endl;
        cout << "Expected: 3\n";
    }
    cout << "Test 6\n";
    hash1.erase("buzz",1);
    if (hash1.size() == 3)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Erase Test\n";
        cout << "Actual: " << hash1.size() << endl;
        cout << "Expected: 3\n";
    }

    quadprobe<string, int> hash2;
    cout << "Testing Quadratic Probing\n";
    cout << s << endl;
    cout << "Test 1\n";
    hash2["foo"] = 0;
    if (hash2["foo"] == 0)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed\n";
        cout << "Actual: " << hash2["foo"] << endl;
        cout << "Expected: 0\n";
    }
    cout << "Test 2\n";
    hash2["foo"] = 1;
    if (hash2["foo"] == 1)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed\n";
        cout << "Actual: " << hash2["foo"] << endl;
        cout << "Expected: 1\n";
    }
    cout << "Test 3\n";
    if (hash2.size() == 1)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Size Test\n";
        cout << "Actual: " << hash2.size() << endl;
        cout << "Expected: 1\n";
    }
    cout << "Test 4\n";
    hash2.erase("foo");
    if (hash2.size() == 0)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Erase Test\n";
        cout << "Actual: " << hash2.size() << endl;
        cout << "Expected: 0\n";
    }
    cout << "Test 5\n";
    hash2["foo"] = 3;
    hash2["bar"] = 4;
    hash2["fizz"] = 5;
    if (hash2.size() == 3)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Insert Test\n";
        cout << "Actual: " << hash2.size() << endl;
        cout << "Expected: 3\n";
    }
    cout << "Test 6\n";
    hash2.erase("buzz");
    if (hash2.size() == 3)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Erase Test\n";
        cout << "Actual: " << hash2.size() << endl;
        cout << "Expected: 3\n";
    }

    dblhash<string, int> hash3;
    cout << "Testing Double Hashing\n";
    cout << s << endl;
    cout << "Test 1\n";
    hash3["foo"] = 0;
    if (hash3["foo"] == 0)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed\n";
        cout << "Actual: " << hash3["foo"] << endl;
        cout << "Expected: 0\n";
    }
    cout << "Test 2\n";
    hash3["foo"] = 1;
    if (hash3["foo"] == 1)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed\n";
        cout << "Actual: " << hash3["foo"] << endl;
        cout << "Expected: 1\n";
    }
    cout << "Test 3\n";
    if (hash3.size() == 1)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Size Test\n";
        cout << "Actual: " << hash3.size() << endl;
        cout << "Expected: 1\n";
    }
    cout << "Test 4\n";
    hash3.erase("foo");
    if (hash3.size() == 0)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Erase Test\n";
        cout << "Actual: " << hash3.size() << endl;
        cout << "Expected: 0\n";
    }
    cout << "Test 5\n";
    hash3["foo"] = 3;
    hash3["bar"] = 4;
    hash3["fizz"] = 5;
    if (hash3.size() == 3)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Insert Test\n";
        cout << "Actual: " << hash3.size() << endl;
        cout << "Expected: 3\n";
    }
    cout << "Test 6\n";
    hash3.erase("buzz");
    if (hash3.size() == 3)
    {
        passedTests++;
        cout << "Passed\n";
    }
    else {
        cout << "Failed Erase Test\n";
        cout << "Actual: " << hash3.size() << endl;
        cout << "Expected: 3\n";
    }

    return 0;
}