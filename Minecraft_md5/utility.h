#pragma once
#include <string>
#include <fstream>
#include <cstdint>

using namespace std;

void inline DECLARE_INT(ostream& ofs, const string& NAME, size_t LENGTH) {
	ofs << "scoreboard objectives add vars."
		<< NAME << " dummy" << std::endl;
	//ofs << "scoreboard players set int_len vars."
	//	<< NAME << " 32" << std::endl;
}

void inline SET_INT(ostream& ofs, const string& NAME, uint32_t VALUE, size_t LENGTH) {
	for (size_t j = 0; j < LENGTH; j++) {
		ofs << "scoreboard players set @e[tag=md5.bit"
			<< j << "] vars." << NAME << " "
			<< ((VALUE >> j) & 1) << std::endl;
	}
}

void inline CLEAR_INT(ostream& ofs, const string& name, size_t length) {
	ofs << "scoreboard players set @e[tag=L" << length << "] vars." << name << " 0" << endl;
}

void inline REMOVE_INT(ostream& ofs, const string& name) {
	ofs << "scoreboard objectives remove " << name << endl;
}

void inline DECLARE_AND_SET_INT(ostream& ofs, const string& NAME, uint32_t VALUE, size_t LENGTH) {
	DECLARE_INT(ofs, NAME, LENGTH);
	SET_INT(ofs, NAME, VALUE, LENGTH);
}

void inline MAKE_SVAR(ostream& ofs, const string& var_name, uint32_t value) {
	ofs << "scoreboard players set "
		<< var_name << " svars " << value << endl;
}

void inline SVAR_ADD(ostream& ofs, const string& VAR1, const string& VAR2) {
	ofs << "scoreboard players operation "
		<< VAR1 << " svars += "
		<< VAR2 << " svars" << endl;
}

void inline SVAR_MINUS(ostream& ofs, const string& VAR1, const string& VAR2) {
	ofs << "scoreboard players operation "
		<< VAR1 << " svars -= "
		<< VAR2 << " svars" << endl;
}

void inline SVAR_MULT(ostream& ofs, const string& VAR1, const string& VAR2) {
	ofs << "scoreboard players operation "
		<< VAR1 << " svars *= "
		<< VAR2 << " svars" << endl;
}

void inline SVAR_DIVIDE(ostream& ofs, const string& VAR1, const string& VAR2) {
	ofs << "scoreboard players operation "
		<< VAR1 << " svars /= "
		<< VAR2 << " svars" << endl;
}

void inline SVAR_MOD(ostream& ofs, const string& VAR1, const string& VAR2) {
	ofs << "scoreboard players operation "
		<< VAR1 << " svars %= "
		<< VAR2 << " svars" << endl;
}

void inline SVAR_COPY(ostream& ofs, const string& TO, const string& FROM) {
	ofs << "scoreboard players operation "
		<< TO << " svars = "
		<< FROM << " svars" << endl;
}

void inline SVAR_COPY(ostream& ofs, const string& TO, const string& TO_SCB, const string& FROM,
                      const string& FROM_SCB) {
	ofs << "scoreboard players operation "
		<< TO << " " << TO_SCB << " = "
		<< FROM << " " << FROM_SCB << endl;
}

void inline COPY(ostream& ofs, const string& TO, const string& FROM, size_t length, size_t offset) {
	ofs << "execute as @e[tag=L" << length << "] at @s positioned ~" << offset <<
		" ~ ~ run scoreboard players operation @e[tag=md5.bit,sort=nearest,limit=1] vars." << TO << " = @s vars."
		<< FROM << endl;
}

void inline MAKE_SCONST(ostream& ofs, uint32_t VALUE) {
	MAKE_SVAR(ofs, "const" + to_string(VALUE), VALUE);
}

void inline SVAR_TO_VAR_8_impl(ostream& ofs, const string& SVAR, const string& SVAR_SCB, const string& VAR) {
	SVAR_COPY(ofs, "stemp1", "svars", SVAR, SVAR_SCB);

	SVAR_COPY(ofs, "stemp2", "stemp1");
	SVAR_MOD(ofs, "stemp2", "const2");
	ofs << "scoreboard players operation @e[tag=md5.bit0] vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(ofs, "stemp1", "const2");

	SVAR_COPY(ofs, "stemp2", "stemp1");
	SVAR_MOD(ofs, "stemp2", "const2");
	ofs << "scoreboard players operation @e[tag=md5.bit1] vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(ofs, "stemp1", "const2");

	SVAR_COPY(ofs, "stemp2", "stemp1");
	SVAR_MOD(ofs, "stemp2", "const2");
	ofs << "scoreboard players operation @e[tag=md5.bit2] vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(ofs, "stemp1", "const2");

	SVAR_COPY(ofs, "stemp2", "stemp1");
	SVAR_MOD(ofs, "stemp2", "const2");
	ofs << "scoreboard players operation @e[tag=md5.bit3] vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(ofs, "stemp1", "const2");

	SVAR_COPY(ofs, "stemp2", "stemp1");
	SVAR_MOD(ofs, "stemp2", "const2");
	ofs << "scoreboard players operation @e[tag=md5.bit4] vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(ofs, "stemp1", "const2");

	SVAR_COPY(ofs, "stemp2", "stemp1");
	SVAR_MOD(ofs, "stemp2", "const2");
	ofs << "scoreboard players operation @e[tag=md5.bit5] vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(ofs, "stemp1", "const2");

	SVAR_COPY(ofs, "stemp2", "stemp1");
	SVAR_MOD(ofs, "stemp2", "const2");
	ofs << "scoreboard players operation @e[tag=md5.bit6] vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(ofs, "stemp1", "const2");

	SVAR_COPY(ofs, "stemp2", "stemp1");
	SVAR_MOD(ofs, "stemp2", "const2");
	ofs << "scoreboard players operation @e[tag=md5.bit7] vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(ofs, "stemp1", "const2");
}

void inline SVAR_TO_VAR_8(ostream& ofs, const string& SVAR, const string& VAR) {
	SVAR_TO_VAR_8_impl(ofs, SVAR, "svars", VAR);
}

void inline NOT_32(ostream& ofs, const string& IP, const string& RES) {
	ofs << "execute as @e[tag=L32] if score @s vars."
		<< IP << " matches 1 run scoreboard players set @s vars." << RES
		<< " 0" << endl;
	ofs << "execute as @e[tag=L32] if score @s vars."
		<< IP << " matches 0 run scoreboard players set @s vars." << RES
		<< " 1" << endl;
}

void inline AND_32(ostream& ofs, const string& IP1, const string& IP2, const string& RES) {
	ofs << "execute as @e[tag=L32] run scoreboard players operation @s vars." << RES
		<< " = @s vars." << IP1 << endl;
	ofs << "execute as @e[tag=L32] run scoreboard players operation @s vars." << RES
		<< " *= @s vars." << IP2 << endl;
}

void inline OR_32(ostream& ofs, const string& IP1, const string& IP2, const string& RES) {
	ofs << "execute as @e[tag=L32] if score @s vars." << IP1 <<
		" matches 1 run scoreboard players set @s vars." << RES << " 1" << endl;
	ofs << "execute as @e[tag=L32] if score @s vars." << IP1 <<
		" matches 0 run scoreboard players operation @s vars." << RES
		<< " = @s vars." << IP2 << endl;
}

void inline XOR_32(ostream& ofs, const string& IP1, const string& IP2, const string& RES) {
	ofs << "execute as @e[tag=L32] if score @s vars." << IP1 << " = @s vars." << IP2 << " "
		<< "run scoreboard players set @s vars." << RES << " 0" << endl;
	ofs << "execute as @e[tag=L32] unless score @s vars." << IP1 << " = @s vars." << IP2 << " "
		<< "run scoreboard players set @s vars." << RES << " 1" << endl;
}

void inline ADD_32(ostream& ofs, const string& IP1, const string& IP2, const string& RES) {
	/*
		bign add(bign a, bign b) {
			bign c;
			int carry = 0;//这里的carry表示进位
			for (int i = 0; i < a.len || i < b.len; i++) {
				int temp = a.d[i] + b.d[i] + carry;
				c.d[c.len++] = temp % 10;
				carry = temp / 10;
			}
			if (carry != 0) {//如果最后一位的进位不为0，直接付给结果的最高位
				c.d[c.len++] = carry;
			}
			return c;
		}
	*/

	MAKE_SVAR(ofs, "stemp1", 0); //carry=0


	ofstream ofs_add("./output/add_impl/add_" + IP1 + "_" + IP2 + ".mcfunction");

	//c.d[c.len++]=a.d[i] + b.d[i] + carry;
	ofs_add << "scoreboard players operation @s vars."
		<< RES << " = @s vars." << IP1 << endl;
	ofs_add << "scoreboard players operation @s vars."
		<< RES << " += @s vars." << IP2 << endl;
	ofs_add << "scoreboard players operation @s vars."
		<< RES << " += stemp1 svars" << endl;

	//carry=c.d[c.len++]/2;
	ofs_add << "scoreboard players operation stemp1 svars"
		<< " = @s vars." << RES << endl;
	ofs_add << "scoreboard players operation stemp1 svars"
		<< " /= const2 svars" << endl;

	//c.d[c.len++]%=2;
	ofs_add << "scoreboard players operation @s vars."
		<< RES << " %= const2 svars" << endl;

	ofs_add.close();

	ofs << "execute at @e[tag=md5.bit0] as @e[tag=L32,sort=furthest] "
		<< "run function md5:add_impl/add_" + IP1 + "_" + IP2 << endl;

}

void inline LEFT_ROTATE_32(ostream& ofs, const string& IP1, int os, const string& RES) {
	ofs << "execute as @e[tag=L" << 32 - os << "] at @s positioned ~" << os <<
		" ~ ~ run scoreboard players operation @e[tag=md5.bit,sort=nearest,limit=1] vars." << RES << " = @s vars."
		<< IP1 << endl;
	ofs << "execute as @e[tag=md5.bit] run execute as @s[tag=!L" << 32 - os << "] at @s positioned ~" << os - 32 <<
		" ~ ~ run scoreboard players operation @e[tag=md5.bit,sort=nearest,limit=1] vars." << RES << " = @s vars."
		<< IP1 << endl;
}
