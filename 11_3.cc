// Example program
#include <iostream>
#include <string>

using std::cout;
using std::endl;

/*  Given a sorted array of n integers that has been rotated an unknown number of
times, write code to find an element in the array. You may assume that the array
was originally sorted in increasing order.
*/

int main()
{
  int target = 3;
  size_t n = 5;
  int arr[n] = {4, 5, 1, 2, 3};
  
  size_t front = 0, back = n-1;
  while(back != front) {
    size_t mid = (back + front) / 2;
    if (arr[mid] == target) {
        cout << mid << endl;
        break;
    } 
    
    if (arr[back] == target) {
        cout << back << endl;
        break;
    } 
    
    if (arr[front] == target) {
        cout << front << endl;
        break;
    } 
    
    if (arr[mid] <= arr[back]) {
        if (target > arr[mid] && target <= arr[back])
            front = mid;
        else
            back = mid;
        
    } else { // it wraps between mid and back
        if (target < arr[mid] && target >= arr[front])
            back = mid;
        else 
            front= mid;
    } 
  }
}
