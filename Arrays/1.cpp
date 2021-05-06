// Iterative Approach

/*
#include <iostream>
using namespace std;
void reverseArrayIt(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
}
int main() 
{
    int arr[] = {3,7,6,1,8,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array : ";
    for (int i = 0; i < n; i++)
       cout<<arr[i]<<" ";
    cout<<endl;
       reverseArrayIt(arr, 0, n-1);
       cout << "Reversed Array : ";
       for (int i = 0; i < n; i++)
           cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
*/


// Recursive Approach

/*
#include <iostream>
using namespace std;
void revereseArrayRec(int arr[], int start, int end){
   if(start >= end)
      return;
   int temp = arr[start];
   arr[start] = arr[end];
   arr[end] = temp;
   revereseArrayRec(arr,start+1, end-1);
}
int main() {
   int arr[] = {6, 9, 1, 4, 0, 5};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout<<" Orignal Array : ";
   for (int i = 0; i < n; i++)
      cout<<arr[i]<<" ";
   cout<<endl;
      revereseArrayRec(arr, 0, n-1);
      cout << " Reversed array : ";
      for (int i = 0; i < n; i++)
         cout<<arr[i]<<" ";
   cout<<endl;
   return 0;
}
*/