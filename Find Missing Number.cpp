//Find Missing Number in Integer Array of 1 to 100 in C++
#include <bits/stdc++.h>
using namespace std;

// Function to get the missing number
int getMissingNo(int a[], int n)
{
	// Given the range of elements are 1 more than the size of array
	int N = n + 1;

	//Sum of Series
	int total = (N) * (N + 1) / 2;
	for (int i = 0; i < n; i++)
		//minus the number from sum of series to  get the missing number
		total -= a[i];
	return total;
}

// Driver Code
int main()
{
	//int arr[] = { 1, 2, 3, 5 };
	int arr[10];
  	cout << "Enter Numbers: " << endl;
  	//  store input from user to array
  	for (int i = 0; i < 10; ++i) {
    	cin >> arr[i];
  	}
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int miss = getMissingNo(arr, N);
	
	cout <<"Missing Number is: " << miss;
	return 0;
}

