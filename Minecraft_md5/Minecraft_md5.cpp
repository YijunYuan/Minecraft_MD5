#include <iostream>
#include "load_constants.h"
#include "preparation.h"
#include "core.h"
#include "result.h"
#include "test.h"
#include "install.h"
#include "reset.h"
#include "uninstall.h"
#include <thread>
using namespace std;

int main() {
	thread t1(uninstall);
	thread t2(load_constants_k);
	thread t3(core_func);
	thread t4(result);
	thread t5(display_result);
	thread t6(test_string, "The quick brown fox jumps over the lazy dog.");
	thread t7(install);
	thread t8(reset);

	t1.join(); t2.join(); t3.join(); t4.join();
	t5.join(); t6.join(); t7.join(); t8.join();

	return 0;
}
