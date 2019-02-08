#pragma once
#include "utility.h"

void inline result() {
	ofstream ofs("./output/result.mcfunction");

#pragma region h0
	ofs << "execute if score bit7 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char0 result += const8 svars" << endl;
	ofs << "execute if score bit6 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char0 result += const4 svars" << endl;
	ofs << "execute if score bit5 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char0 result += const2 svars" << endl;
	ofs << "execute if score bit4 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char0 result += const1 svars" << endl;

	ofs << "execute if score bit3 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char1 result += const8 svars" << endl;
	ofs << "execute if score bit2 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char1 result += const4 svars" << endl;
	ofs << "execute if score bit1 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char1 result += const2 svars" << endl;
	ofs << "execute if score bit0 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char1 result += const1 svars" << endl;


	ofs << "execute if score bit15 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char2 result += const8 svars" << endl;
	ofs << "execute if score bit14 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char2 result += const4 svars" << endl;
	ofs << "execute if score bit13 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char2 result += const2 svars" << endl;
	ofs << "execute if score bit12 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char2 result += const1 svars" << endl;

	ofs << "execute if score bit11 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char3 result += const8 svars" << endl;
	ofs << "execute if score bit10 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char3 result += const4 svars" << endl;
	ofs << "execute if score bit9 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char3 result += const2 svars" << endl;
	ofs << "execute if score bit8 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char3 result += const1 svars" << endl;


	ofs << "execute if score bit23 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char4 result += const8 svars" << endl;
	ofs << "execute if score bit22 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char4 result += const4 svars" << endl;
	ofs << "execute if score bit21 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char4 result += const2 svars" << endl;
	ofs << "execute if score bit20 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char4 result += const1 svars" << endl;

	ofs << "execute if score bit19 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char5 result += const8 svars" << endl;
	ofs << "execute if score bit18 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char5 result += const4 svars" << endl;
	ofs << "execute if score bit17 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char5 result += const2 svars" << endl;
	ofs << "execute if score bit16 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char5 result += const1 svars" << endl;


	ofs << "execute if score bit31 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char6 result += const8 svars" << endl;
	ofs << "execute if score bit30 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char6 result += const4 svars" << endl;
	ofs << "execute if score bit29 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char6 result += const2 svars" << endl;
	ofs << "execute if score bit28 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char6 result += const1 svars" << endl;

	ofs << "execute if score bit27 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char7 result += const8 svars" << endl;
	ofs << "execute if score bit26 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char7 result += const4 svars" << endl;
	ofs << "execute if score bit25 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char7 result += const2 svars" << endl;
	ofs << "execute if score bit24 vars.h0 matches 1 run "
		<< "scoreboard players operation md5.char7 result += const1 svars" << endl;
#pragma endregion

#pragma region h1
	ofs << "execute if score bit7 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char8 result += const8 svars" << endl;
	ofs << "execute if score bit6 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char8 result += const4 svars" << endl;
	ofs << "execute if score bit5 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char8 result += const2 svars" << endl;
	ofs << "execute if score bit4 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char8 result += const1 svars" << endl;

	ofs << "execute if score bit3 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char9 result += const8 svars" << endl;
	ofs << "execute if score bit2 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char9 result += const4 svars" << endl;
	ofs << "execute if score bit1 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char9 result += const2 svars" << endl;
	ofs << "execute if score bit0 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char9 result += const1 svars" << endl;


	ofs << "execute if score bit15 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char10 result += const8 svars" << endl;
	ofs << "execute if score bit14 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char10 result += const4 svars" << endl;
	ofs << "execute if score bit13 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char10 result += const2 svars" << endl;
	ofs << "execute if score bit12 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char10 result += const1 svars" << endl;

	ofs << "execute if score bit11 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char11 result += const8 svars" << endl;
	ofs << "execute if score bit10 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char11 result += const4 svars" << endl;
	ofs << "execute if score bit9 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char11 result += const2 svars" << endl;
	ofs << "execute if score bit8 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char11 result += const1 svars" << endl;


	ofs << "execute if score bit23 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char12 result += const8 svars" << endl;
	ofs << "execute if score bit22 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char12 result += const4 svars" << endl;
	ofs << "execute if score bit21 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char12 result += const2 svars" << endl;
	ofs << "execute if score bit20 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char12 result += const1 svars" << endl;

	ofs << "execute if score bit19 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char13 result += const8 svars" << endl;
	ofs << "execute if score bit18 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char13 result += const4 svars" << endl;
	ofs << "execute if score bit17 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char13 result += const2 svars" << endl;
	ofs << "execute if score bit16 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char13 result += const1 svars" << endl;


	ofs << "execute if score bit31 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char14 result += const8 svars" << endl;
	ofs << "execute if score bit30 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char14 result += const4 svars" << endl;
	ofs << "execute if score bit29 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char14 result += const2 svars" << endl;
	ofs << "execute if score bit28 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char14 result += const1 svars" << endl;

	ofs << "execute if score bit27 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char15 result += const8 svars" << endl;
	ofs << "execute if score bit26 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char15 result += const4 svars" << endl;
	ofs << "execute if score bit25 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char15 result += const2 svars" << endl;
	ofs << "execute if score bit24 vars.h1 matches 1 run "
		<< "scoreboard players operation md5.char15 result += const1 svars" << endl;
#pragma endregion

#pragma region h2
	ofs << "execute if score bit7 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char16 result += const8 svars" << endl;
	ofs << "execute if score bit6 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char16 result += const4 svars" << endl;
	ofs << "execute if score bit5 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char16 result += const2 svars" << endl;
	ofs << "execute if score bit4 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char16 result += const1 svars" << endl;

	ofs << "execute if score bit3 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char17 result += const8 svars" << endl;
	ofs << "execute if score bit2 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char17 result += const4 svars" << endl;
	ofs << "execute if score bit1 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char17 result += const2 svars" << endl;
	ofs << "execute if score bit0 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char17 result += const1 svars" << endl;


	ofs << "execute if score bit15 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char18 result += const8 svars" << endl;
	ofs << "execute if score bit14 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char18 result += const4 svars" << endl;
	ofs << "execute if score bit13 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char18 result += const2 svars" << endl;
	ofs << "execute if score bit12 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char18 result += const1 svars" << endl;

	ofs << "execute if score bit11 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char19 result += const8 svars" << endl;
	ofs << "execute if score bit10 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char19 result += const4 svars" << endl;
	ofs << "execute if score bit9 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char19 result += const2 svars" << endl;
	ofs << "execute if score bit8 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char19 result += const1 svars" << endl;


	ofs << "execute if score bit23 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char20 result += const8 svars" << endl;
	ofs << "execute if score bit22 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char20 result += const4 svars" << endl;
	ofs << "execute if score bit21 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char20 result += const2 svars" << endl;
	ofs << "execute if score bit20 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char20 result += const1 svars" << endl;

	ofs << "execute if score bit19 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char21 result += const8 svars" << endl;
	ofs << "execute if score bit18 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char21 result += const4 svars" << endl;
	ofs << "execute if score bit17 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char21 result += const2 svars" << endl;
	ofs << "execute if score bit16 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char21 result += const1 svars" << endl;


	ofs << "execute if score bit31 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char22 result += const8 svars" << endl;
	ofs << "execute if score bit30 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char22 result += const4 svars" << endl;
	ofs << "execute if score bit29 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char22 result += const2 svars" << endl;
	ofs << "execute if score bit28 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char22 result += const1 svars" << endl;

	ofs << "execute if score bit27 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char23 result += const8 svars" << endl;
	ofs << "execute if score bit26 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char23 result += const4 svars" << endl;
	ofs << "execute if score bit25 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char23 result += const2 svars" << endl;
	ofs << "execute if score bit24 vars.h2 matches 1 run "
		<< "scoreboard players operation md5.char23 result += const1 svars" << endl;
#pragma endregion

#pragma region h3
	ofs << "execute if score bit7 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char24 result += const8 svars" << endl;
	ofs << "execute if score bit6 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char24 result += const4 svars" << endl;
	ofs << "execute if score bit5 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char24 result += const2 svars" << endl;
	ofs << "execute if score bit4 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char24 result += const1 svars" << endl;

	ofs << "execute if score bit3 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char25 result += const8 svars" << endl;
	ofs << "execute if score bit2 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char25 result += const4 svars" << endl;
	ofs << "execute if score bit1 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char25 result += const2 svars" << endl;
	ofs << "execute if score bit0 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char25 result += const1 svars" << endl;


	ofs << "execute if score bit15 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char26 result += const8 svars" << endl;
	ofs << "execute if score bit14 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char26 result += const4 svars" << endl;
	ofs << "execute if score bit13 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char26 result += const2 svars" << endl;
	ofs << "execute if score bit12 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char26 result += const1 svars" << endl;

	ofs << "execute if score bit11 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char27 result += const8 svars" << endl;
	ofs << "execute if score bit10 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char27 result += const4 svars" << endl;
	ofs << "execute if score bit9 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char27 result += const2 svars" << endl;
	ofs << "execute if score bit8 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char27 result += const1 svars" << endl;


	ofs << "execute if score bit23 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char28 result += const8 svars" << endl;
	ofs << "execute if score bit22 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char28 result += const4 svars" << endl;
	ofs << "execute if score bit21 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char28 result += const2 svars" << endl;
	ofs << "execute if score bit20 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char28 result += const1 svars" << endl;

	ofs << "execute if score bit19 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char29 result += const8 svars" << endl;
	ofs << "execute if score bit18 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char29 result += const4 svars" << endl;
	ofs << "execute if score bit17 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char29 result += const2 svars" << endl;
	ofs << "execute if score bit16 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char29 result += const1 svars" << endl;


	ofs << "execute if score bit31 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char30 result += const8 svars" << endl;
	ofs << "execute if score bit30 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char30 result += const4 svars" << endl;
	ofs << "execute if score bit29 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char30 result += const2 svars" << endl;
	ofs << "execute if score bit28 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char30 result += const1 svars" << endl;

	ofs << "execute if score bit27 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char31 result += const8 svars" << endl;
	ofs << "execute if score bit26 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char31 result += const4 svars" << endl;
	ofs << "execute if score bit25 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char31 result += const2 svars" << endl;
	ofs << "execute if score bit24 vars.h3 matches 1 run "
		<< "scoreboard players operation md5.char31 result += const1 svars" << endl;
#pragma endregion
	ofs.close();
}

void inline display_result() {
	ofstream ofs("./output/display_result.mcfunction");

	for (int i = 0; i < 32; i++) {
		ofs << R"(execute if score md5.char)" << i << R"( result matches 0 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"0\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 1 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"1\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 2 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"2\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 3 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"3\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 4 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"4\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 5 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"5\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 6 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"6\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 7 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"7\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 8 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"8\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 9 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"9\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 10 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"A\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 11 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"B\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 12 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"C\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 13 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"D\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 14 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"E\""})" << endl;
		ofs << R"(execute if score md5.char)" << i << R"( result matches 15 run data merge entity @e[tag=char)"
			<< i << R"(,limit=1] {CustomName:"\"F\""})" << endl;
	}
	cout << endl;
	ofs << "tellraw @a [";
	for (int i = 0; i < 31; i++) {
		ofs << R"({"selector":"@e[tag=char)" << i << R"(]","color":"green","underlined":true},)";
	}
	ofs << R"({"selector":"@e[tag=char)" << 31 << R"(]","color":"green","underlined":true}])" << endl;
}
