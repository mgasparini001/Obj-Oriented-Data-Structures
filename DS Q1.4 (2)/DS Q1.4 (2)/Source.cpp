#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// searches entire vector by calling itself on its left and right halves until finding target value and printing the index the value was found.
int search(vector <int> v, int left, int right, int k)
{
	if (left == right) {
		return -1;
	}
	int middle = ((left + right) / 2);


	if (v[middle] == k)
	{
		return middle;
	}

	if (v[middle] < k)
	{
      search(v, left, middle -1, k);
    }

	else 
	{
      search(v, middle + 1, right, k);
	}

}

	


int main() {
	vector <int> list = { 3, 5, 6, 7, 8, 9, 14, 36 };
	int k = 5;
	int left = 0;
	int right = list.size() - 1;
	
	cout << search(list, left, right, k);
}