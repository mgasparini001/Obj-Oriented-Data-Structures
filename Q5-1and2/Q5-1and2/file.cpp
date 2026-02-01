#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<int>nums;
	//make size so that we can calculate median later
		int size = 0;
	
	//intialize num for each element
	int num = 0;
	cout << "\nenter a number (-1 to stop): ";
	//make while loop while entering nums
	while(cin >> num)
	{
		//break for -1
		if (num == -1) {
			break;
		}
		//use push_back function to add elements to a vector
		nums.push_back(num);
		//determine size by how many loops
		size++;
	}
	//use sort with begin and end functions as params
	sort(begin(nums), end(nums));
	//list out the sorted vector
	for (int i = 0; i < size; i++)
	{
		cout << nums[i] << " ";
	}
	//use median formula but subtract by one to accoun for the index num
	double medianodd = nums[((size + 1) / 2) - 1];
	//check if its even or odd
	if(size % 2 != 0)
	{
		cout << "\nmedian: " << medianodd;
}
	
	double medianeven1 = nums[(size  / 2) - 1];
	double medianeven2 = nums[(size / 2)];
		double medianeven = (medianeven1 + medianeven2) / 2;
	if(size % 2 ==0) {
		cout << "\nmedian: " << medianeven;
	}
	
	
	
	
	/*
	5.1 CODE:
	//make array with size of 9
	int nums[9];
	int num;
	//loop to store each num in each slot of array 0-8
	for (int i = 0; i < 9; i++)
	{
		cout << "\nenter a number :";
		cin >> num;
		nums[i] = num;
		
	}
	//sort from smallest to greatest using begin adn end as params
	sort(begin(nums), end(nums));
	//make loop to print each num out
	for (int i = 0; i < 9; i++)
	{
		cout << nums[i] << " ";
	}
	//store the middle num in var
	int median = nums[4];
	cout << "\nmedian: " << median;
	return 0;
	*/
}