#pragma once
#include <fstream>
#include <string>
using namespace std;

void inline summon_armor_stand() {
	ofstream ofs("summon_armor_stand.mcfunction");
	for(int i=0;i<600;i++) {
		ofs << R"(summon armor_stand ~ ~ ~ {CustomName:"{\"text\":\"\"}",Tags:["Keyboard","keyboard.char)" << i << R"("]})"<<endl;
		ofs << R"(scoreboard players set @e[tag=keyboard.char)" << i << R"(] Keyboard.Index )" << i << endl;
	}
}