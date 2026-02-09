#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec; //  by default size is 0.
    // cout << vec[0];  // error - segmentation fault, means we want to access the memory where we don't have permission to or not possible to access that memory

    vector<int> vec1 = {1, 2, 3, 4}; //4 size

    for (int val : vec1)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<int>vec2(5, 0);
    for(int i=0; i<5; i++) {
        cout<<vec2[i] << " ";
    }
    cout<<endl;

    // foreach loop in vector
    vector<int>nums = {1,2,3,4};
    vector<char>ch = {'a', 'b', 'c', 'd'};

    for(int val : nums) {
        cout <<val << " ";
    }
    cout << endl;

    for(char val : ch) {
        cout << val << " ";
    }
    cout << endl;

    // vector functions
    vector<int>vec3;
    cout<<vec3.size()<<endl;
    vec3.push_back(24);
    vec3.push_back(25);
    vec3.push_back(26);
    cout << vec3.size() << endl;
    vec3.pop_back();
    cout<<vec3.size()<<endl;

    cout<<vec3.front() <<endl;
    cout<<vec3.back()<<endl;
    // cout<<vec3[10]; // error
    // cout<<vec3.at(10)<<endl; // error

    vector<int>vec4;
    vec4.push_back(0);
    vec4.push_back(1);
    vec4.push_back(2);
    vec4.push_back(3);
    vec4.push_back(4);
    cout<<vec4.size() << endl << vec4.capacity() << endl;

    return 0;
}