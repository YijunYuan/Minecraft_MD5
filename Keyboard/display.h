#pragma once
#include <fstream>
#include <string>
using namespace std;

void display_result() {
	ofstream ofs("display_result.mcfunction");
	ofs << "tellraw @a[scores={Keyboard.Enabled=1..,Keyboard.Pressed=1..}] [" ;
	for(int i=0;i<600;i++) {
		ofs << R"({"selector":"@e[tag=keyboard.char)"<<i<<R"(]"},)";
	}
	ofs << "" << endl;
}