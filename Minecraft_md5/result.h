#pragma once
#include "utility.h"

void inline result() {
	ofstream ofs("./output/result.mcfunction");

#pragma region h0
	ofs << "execute if score @e[tag=md5.bit7,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char0 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit6,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char0 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit5,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char0 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit4,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char0 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit3,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char1 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit2,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char1 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit1,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char1 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit0,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char1 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit15,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char2 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit14,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char2 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit13,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char2 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit12,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char2 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit11,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char3 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit10,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char3 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit9,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char3 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit8,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char3 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit23,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char4 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit22,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char4 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit21,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char4 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit20,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char4 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit19,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char5 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit18,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char5 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit17,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char5 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit16,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char5 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit31,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char6 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit30,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char6 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit29,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char6 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit28,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char6 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit27,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char7 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit26,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char7 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit25,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char7 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit24,limit=1] vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char7 md5.result += const1 svars" << endl;
#pragma endregion

#pragma region h1
	ofs << "execute if score @e[tag=md5.bit7,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char8 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit6,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char8 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit5,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char8 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit4,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char8 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit3,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char9 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit2,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char9 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit1,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char9 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit0,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char9 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit15,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char10 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit14,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char10 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit13,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char10 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit12,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char10 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit11,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char11 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit10,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char11 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit9,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char11 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit8,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char11 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit23,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char12 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit22,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char12 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit21,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char12 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit20,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char12 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit19,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char13 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit18,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char13 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit17,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char13 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit16,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char13 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit31,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char14 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit30,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char14 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit29,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char14 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit28,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char14 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit27,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char15 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit26,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char15 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit25,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char15 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit24,limit=1] vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char15 md5.result += const1 svars" << endl;
#pragma endregion

#pragma region h2
	ofs << "execute if score @e[tag=md5.bit7,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char16 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit6,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char16 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit5,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char16 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit4,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char16 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit3,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char17 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit2,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char17 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit1,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char17 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit0,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char17 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit15,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char18 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit14,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char18 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit13,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char18 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit12,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char18 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit11,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char19 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit10,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char19 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit9,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char19 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit8,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char19 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit23,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char20 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit22,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char20 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit21,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char20 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit20,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char20 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit19,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char21 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit18,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char21 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit17,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char21 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit16,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char21 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit31,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char22 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit30,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char22 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit29,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char22 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit28,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char22 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit27,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char23 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit26,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char23 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit25,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char23 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit24,limit=1] vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char23 md5.result += const1 svars" << endl;
#pragma endregion

#pragma region h3
	ofs << "execute if score @e[tag=md5.bit7,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char24 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit6,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char24 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit5,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char24 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit4,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char24 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit3,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char25 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit2,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char25 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit1,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char25 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit0,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char25 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit15,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char26 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit14,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char26 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit13,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char26 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit12,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char26 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit11,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char27 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit10,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char27 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit9,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char27 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit8,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char27 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit23,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char28 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit22,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char28 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit21,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char28 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit20,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char28 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit19,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char29 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit18,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char29 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit17,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char29 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit16,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char29 md5.result += const1 svars" << endl;


	ofs << "execute if score @e[tag=md5.bit31,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char30 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit30,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char30 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit29,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char30 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit28,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char30 md5.result += const1 svars" << endl;

	ofs << "execute if score @e[tag=md5.bit27,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char31 md5.result += const8 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit26,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char31 md5.result += const4 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit25,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char31 md5.result += const2 svars" << endl;
	ofs << "execute if score @e[tag=md5.bit24,limit=1] vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char31 md5.result += const1 svars" << endl;
#pragma endregion
	ofs.close();
}

void inline display_result() {
	ofstream ofs("./output/display_result.mcfunction");

	for (int i = 0; i < 32; i++) {
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 0 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"0\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 1 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"1\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 2 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"2\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 3 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"3\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 4 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"4\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 5 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"5\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 6 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"6\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 7 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"7\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 8 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"8\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 9 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"9\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 10 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"a\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 11 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"b\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 12 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"c\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 13 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"d\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 14 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"e\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( md5.result matches 15 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"f\""})" << endl;
	}
	
	ofs << "tellraw @s [";
	for (int i = 0; i < 31; i++) {
		ofs << R"({"selector":"@e[tag=char)" << i << R"(]","color":"green","underlined":true},)";
	}
	ofs << R"({"selector":"@e[tag=char)" << 31 << R"(]","color":"green","underlined":true}])" << endl;

	ofs.close();
}
