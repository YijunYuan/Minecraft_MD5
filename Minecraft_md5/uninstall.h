#pragma once
#include "utility.h"

void inline uninstall() {
	ofstream ofs("./output/uninstall.mcfunction");

	REMOVE_INT(ofs, "svars");

	for (int i = 0; i < 64; i++) {
		REMOVE_INT(ofs, "vars.const.k" + to_string(i));
	}

	for (int i = 0; i < 567; i++) {
		REMOVE_INT(ofs, "vars.ini_char" + to_string(i));
	}

	for (int i = 0; i < 577; i++) {
		REMOVE_INT(ofs, "vars.msg_char" + to_string(i));
	}

	REMOVE_INT(ofs, "vars.h0");
	REMOVE_INT(ofs, "vars.h1");
	REMOVE_INT(ofs, "vars.h2");
	REMOVE_INT(ofs, "vars.h3");

	REMOVE_INT(ofs, "vars.a");
	REMOVE_INT(ofs, "vars.b");
	REMOVE_INT(ofs, "vars.c");
	REMOVE_INT(ofs, "vars.d");
	REMOVE_INT(ofs, "vars.f");
	REMOVE_INT(ofs, "vars.temp");
	REMOVE_INT(ofs, "vars.temp1");
	REMOVE_INT(ofs, "vars.temp2");
	REMOVE_INT(ofs, "vars.temp3");

	for (int i = 0; i < 16; i++) {
		REMOVE_INT(ofs, "vars.w" + to_string(i));
	}

	REMOVE_INT(ofs, "md5.result");

	ofs << "kill @e[tag=md5]" << endl;
	ofs << "kill @e[tag=md5.bit]" << endl;
	ofs << "kill @e[tag=md5.enabled]" << endl;
	ofs << "scoreboard objectives remove md5.login" << endl;
	ofs.close();
}
