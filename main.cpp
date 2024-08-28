#include <iostream>

using namespace std;
int main() {
    int intArray[4] = {2,7,11,15};
    int target = 9;
    int length = sizeof(intArray) / sizeof(intArray[0]);
    for(int i = 0; i < length; i++)
    {
        for(int j = i + 1; j < length; j++)
        {
            if(intArray[i] + intArray[j] == target)
            {
                cout <<"indicies are " << i << ", " << j << endl;
            }
        }
    }
}