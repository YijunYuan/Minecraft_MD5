#pragma once
#include "utility.h"

void inline reset() {
	ofstream ofs("./output/reset.mcfunction");

	//set ini_char[]={0,...,0}
	for (int i = 0; i < 567; i++) {
		SET_INT(ofs, "ini_char" + to_string(i), 0, 8);
	}

	//length of initial string
	MAKE_SVAR(ofs, "initial_len", 0);

	//set msg_char[]={0,...,0}
	for (int i = 0; i < 577; i++) {
		SET_INT(ofs, "msg_char" + to_string(i), 0, 8);
	}

	//length of msg
	MAKE_SVAR(ofs, "new_len", 0);
	ofs << endl << endl;

	//h0,h1,h2,h3
	SET_INT(ofs, "h0", 0x67452301, 32);
	SET_INT(ofs, "h1", 0xefcdab89, 32);
	SET_INT(ofs, "h2", 0x98badcfe, 32);
	SET_INT(ofs, "h3", 0x10325476, 32);
	ofs << endl << endl;

	//a,b,c,d,i,f,g,temp
	SET_INT(ofs, "a", 0, 32);
	SET_INT(ofs, "b", 0, 32);
	SET_INT(ofs, "c", 0, 32);
	SET_INT(ofs, "d", 0, 32);
	SET_INT(ofs, "f", 0, 32);
	SET_INT(ofs, "temp", 0, 32);
	SET_INT(ofs, "temp1", 0, 32);
	SET_INT(ofs, "temp2", 0, 32);
	SET_INT(ofs, "temp3", 0, 32);
	SET_INT(ofs, "temp4", 0, 32);

	//offset
	MAKE_SVAR(ofs, "offset", 0);

	//set w[16]={0,...,0}
	for (int i = 0; i < 16; i++) {
		SET_INT(ofs, "w" + to_string(i), 0, 32);
	}

	//small temporary variables
	MAKE_SVAR(ofs, "stemp1", 0);
	MAKE_SVAR(ofs, "stemp2", 0);
	MAKE_SVAR(ofs, "stemp3", 0);
	MAKE_SVAR(ofs, "stemp4", 0);

	ofs << "execute as @e[tag=md5] run kill @s" << endl;
	for (int i = 0; i < 32; i++) {
		ofs << R"(summon armor_stand ~ 0 ~ {CustomName:"\"fuck\"", Tags:["md5", "char)" << i << R"("]})" << endl;
	}

	ofs.close();
}
