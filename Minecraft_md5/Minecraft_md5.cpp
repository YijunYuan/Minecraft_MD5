#include <iostream>
#include "load_constants.h"
#include "preparation.h"
#include "core.h"
#include "result.h"
#include "test.h"
using namespace std;

uint32_t test(uint32_t initial_len) {
	uint32_t new_len;
	for (new_len = initial_len + 1; new_len % (512 / 8) != 448 / 8; new_len++);
	return new_len;
}

void fuck() {
	cout << (567 * 8) << endl
		 << ((567 * 8) >> 8) << endl
		 << ((567 * 8) >> 16) << endl
		 << (567 >> 29) << endl;


}

int main() {
	//test_fuck();

	load_constants_k();
	declare_variables();
	core_func();
	result();
	display_result();
	test_string("The quick brown fox jumps over the lazy dog");
}
