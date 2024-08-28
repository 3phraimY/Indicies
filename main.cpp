#include <iostream>

using namespace std;
int main() {
    int intArray[4] = {2,7,11,15};
    int target = 9;

    //determing length of intArray based on storage size
    int length = sizeof(intArray) / sizeof(intArray[0]);

    //iterate through all elements in array
    for(int i = 0; i < length; i++)
    {
        //iterate through all elements with indicies greater than i
        for(int j = i + 1; j < length; j++)
        {
            //check if sum of elements match target
            if(intArray[i] + intArray[j] == target)
            {
                cout <<"indicies are " << i << ", " << j << endl;
            }
        }
    }
}