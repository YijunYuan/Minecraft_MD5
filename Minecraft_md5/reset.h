#pragma once
#include "utility.h"

void inline reset() {
	ofstream ofs("./output/reset.mcfunction");


	//set msg_char[]={0,...,0}
	for (int i = 0; i < 577; i++) {
		CLEAR_INT(ofs, "msg_char" + to_string(i), 8);
	}

	//length of msg
	MAKE_SVAR(ofs, "new_len", 0);

	//h0,h1,h2,h3
	SET_INT(ofs, "h0", 0x67452301, 32);
	SET_INT(ofs, "h1", 0xefcdab89, 32);
	SET_INT(ofs, "h2", 0x98badcfe, 32);
	SET_INT(ofs, "h3", 0x10325476, 32);

	//a,b,c,d,i,f,g,temp
	CLEAR_INT(ofs, "a", 32);
	CLEAR_INT(ofs, "b", 32);
	CLEAR_INT(ofs, "c", 32);
	CLEAR_INT(ofs, "d", 32);
	CLEAR_INT(ofs, "f", 32);
	CLEAR_INT(ofs, "temp", 32);
	CLEAR_INT(ofs, "temp1", 32);
	CLEAR_INT(ofs, "temp2", 32);
	CLEAR_INT(ofs, "temp3", 32);

	//offset
	MAKE_SVAR(ofs, "offset", 0);

	//set w[16]={0,...,0}
	for (int i = 0; i < 16; i++) {
		CLEAR_INT(ofs, "w" + to_string(i), 32);
	}

	//small temporary variables
	MAKE_SVAR(ofs, "stemp1", 0);
	MAKE_SVAR(ofs, "stemp2", 0);
	MAKE_SVAR(ofs, "stemp3", 0);
	MAKE_SVAR(ofs, "stemp4", 0);

	//set result to 0
	for (int i = 0; i < 32; i++) {
		ofs << "scoreboard players set md5.char" << i << " md5.result 0" << endl;
	}

	//re-summon armor_stand for displaying result
	ofs << "kill @e[tag=md5]" << endl;
	for (int i = 0; i < 32; i++) {
		ofs <<
			R"(summon armor_stand ~ 0 ~ {NoGravity:1b,Invisible:1,Invulnerable:1,CustomName:"\"*\"", Tags:["md5", "char)"
			<< i << R"("]})" << endl;
	}

	ofs.close();
}
