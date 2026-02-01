#include <iostream>
using namespace std;
// ex when n = 6:                                                  122          +           71   =   193
//   (2 *                                               f(5)) = 61)                                           +    (3 *     f(4))    +      (2 *     f(3))        = 71
//                  (2 *               f(4) = 19)                         + (3 * f(3)) + (2 * f(2))
//                    (2 *    f(3) = 7)    + (3 * f(2)) + (2 * f(1)) 
//             (2 * f(2)) + (3 * f(1)) + (2 * f(0))
//                f(2) = 1,  f(1) = 1, f(0) = 1
int f(int n) {
	if (n == 0 || n == 1 || n == 2) {
		return 1;
	}
	else {
		return (2 * f(n - 1)) + (3 * f(n - 2)) + (2 * f(n - 3));


	}


}
int main() {
	cout << f(6);



	return 0;
}