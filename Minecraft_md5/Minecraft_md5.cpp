#include "load_constants.h"
#include "core.h"
#include "result.h"
#include "install.h"
#include "reset.h"
#include "uninstall.h"
#include "test_string.h"
#include "import_string.h"

#include <thread>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<thread> task_group;
	task_group.emplace_back(uninstall);
	task_group.emplace_back(load_constants_k);
	task_group.emplace_back(core_func);
	task_group.emplace_back(result);
	task_group.emplace_back(display_result);
	task_group.emplace_back(test_string,
	                        "The quick brown fox jumps over the lazy dogThe quick brown fox jumps over the lazy dog");
	task_group.emplace_back(install);
	task_group.emplace_back(reset);
	task_group.emplace_back(import_string);
	for (auto& itr : task_group)
		itr.join();

	return 0;
}
