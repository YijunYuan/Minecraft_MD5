#pragma once
#include <fstream>
#include <string>
using namespace std;

void input_ascii() {
	for (int i = 32; i < 127; i++) {
		ofstream ofs("input_ascii"+to_string(i)+".mcfunction");
		ofs << "scoreboard players set @s Keyboard.String "<<i << endl;
		ofs << R"(data merge entity @s {CustomName:"\")"<< string(1, char(i)) <<R"(\""})" << endl;
		ofs << "scoreboard players add str_len Keyboard.String 1" << endl;
	}
}