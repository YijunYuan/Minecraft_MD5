#pragma once
#include  "utility.h"
void inline test_string(const string& str) {
	ofstream ofs("input_str.mcfunction");
	MAKE_SVAR(ofs, "initial_len",str.length() );
	for (int i = 0; i < str.length(); i++) {
		SET_INT(ofs, "ini_char" + to_string(i), str[i], 8);
	}
}

void test_add() {
	ofstream ofs("test_add.mcfunction");
	DECLARE_AND_SET_INT(ofs, "add1", 1234, 32);
	DECLARE_AND_SET_INT(ofs, "add2", 647, 32);
	DECLARE_AND_SET_INT(ofs, "add_res", 0, 32);
	ADD_32(ofs, "add1", "add2", "add_res");
}

void test_fuck() {
	ofstream ofs("test_fuck.mcfunction");
	MAKE_SVAR(ofs, "fuck", 64);
	DECLARE_AND_SET_INT(ofs, "cnm", 0, 32);
	SVAR_TO_VAR_8(ofs, "fuck", "cnm");
}