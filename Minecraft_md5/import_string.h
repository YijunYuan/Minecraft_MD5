#pragma once
#include "utility.h"

void inline import_string() {
	ofstream ofs("./output/import_string.mcfunction");
	ofs << "scoreboard players operation initial_len svars = str_len Keyboard.String" << endl;
	ofs << "execute as @e[tag=Keyboard] run execute if score @s Keyboard.Index = str_len Keyboard.String run scoreboard players set @s Keyboard.String 128" << endl;
	for (int i = 0; i < 570; i++) {
		SVAR_TO_VAR_8_impl(ofs,"@e[tag=Keyboard,scores={Keyboard.Index="+to_string(i)+ "}]", "Keyboard.String","msg_char" + to_string(i));
		//ofs << "scoreboard players operation stemp3 svars = @e[tag=Keyboard,scores={Keyboard.Index="<<i<<"}] Keyboard.String"<< endl;
		//SVAR_TO_VAR_8(ofs,"stemp3","msg_char" + to_string(i));
	}
	ofs << "execute as @e[tag=Keyboard] run execute if score @s Keyboard.Index = str_len Keyboard.String run scoreboard players reset @s Keyboard.String" << endl;
}
