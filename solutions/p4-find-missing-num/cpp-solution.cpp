#include <iostream>
#include <array>

int findMissingNumber(std::array<int, 9> &arr){

    // Range of the array
    int range = arr.back();

    // Calculating the sum of elements present inside the array.
    int sumOfWholeArray = 0;
    for (int number : arr) sumOfWholeArray+=number;

    // Calculating the sum of the range within the array.
    int sumOfArray = range*(range+1)/2;

    // Returing the missing number.
    return sumOfArray - sumOfWholeArray;
}

int main(){
    std::array<int,9> arr = {0,1,5,3,4,6,7,8,9};
    std::cout<<findMissingNumber(arr);
}