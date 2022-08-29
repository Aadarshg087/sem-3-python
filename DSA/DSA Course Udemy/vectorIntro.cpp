#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    // Pop back will remove one element from the back
    // arr.pop_back();

    // Push back will insert the given element from the back
    arr.push_back(10);

    // it will print the no of elements
    cout << "No. of elements: " << arr.size() << endl;

    // it will print the memory that has been allocated to the vector array
    // it will double the memory as soon as push back command is working before this command. Otherwise, it will show as same as no of elements in the array
    cout << "Memory allocatd to the vector array: " << arr.capacity() << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}