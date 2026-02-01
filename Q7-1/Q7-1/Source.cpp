#include <iostream>
using namespace std;
 int* swapNumbers(int* ptr1, int* ptr2) {
	int num = 0;
	int num2 = 0;
	int temp = *ptr1; //store first value (accessed by using *) in temp var so it doesnt get lost when swapping
	*ptr1 = *ptr2; //give 2nd pointers value to the first pointer
	*ptr2 = temp; //give 1st pointers value from temp to 2nd pointer 
	return ptr1, ptr2;
}
 int main() {
	 int num = 20;
	 int num2 = 30;
	 //only use * on ptr when declaring and derefrencing it
	 int* ptr1 = &num; //declare ptrs and refer it to nums with & (assign the addresses)
	 int* ptr2 = &num2;
	 cout << "Before swapping:\nnum1=" << num << ", num2=" << num2 << endl;
	 swapNumbers(ptr1, ptr2);
	 cout << "After swapping:\nnum1=" << num << ", num2=" << num2 << endl;
 }
