#pragma once
#include  "utility.h"
void inline test_string(const string& str) {
	ofstream ofs("./output/test_string.mcfunction");
	MAKE_SVAR(ofs, "initial_len",str.length() );
	for (int i = 0; i < str.length(); i++) {
		SET_INT(ofs, "ini_char" + to_string(i), str[i], 8);
	}
}