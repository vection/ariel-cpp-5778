/**
 * @author Ofir Pele
 * @since 2017
 */

#include "IntBuffer.hpp"
#include <iostream>
using namespace std;

int main() {
	IntBuffer ib(5);
	ib[0] = 1;
	ib[1] = 2;
	cout << ib[1] << endl;

	const IntBuffer cib(5);
	//cib[0] = 1;
	//cib[1] = 2;
	cout << cib[1] << endl;
}
