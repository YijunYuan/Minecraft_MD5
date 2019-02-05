#pragma once
#include <string>
#include <fstream>
#include <cstdint>

using namespace std;

void inline DECLARE_INT(ostream& STREAM, const string& NAME, size_t LENGTH) {
	STREAM << "scoreboard objectives add vars."
		<< NAME << " dummy" << std::endl;
	//STREAM << "scoreboard players set int_len vars."
	//	<< NAME << " 32" << std::endl;
}

void inline SET_INT(ostream& STREAM, const string& NAME, uint32_t VALUE, size_t LENGTH) {
	for (size_t j = 0; j < LENGTH; j++) {
		STREAM << "scoreboard players set bit"
			<< j << " vars." << NAME << " "
			<< ((VALUE >> j) & 1) << std::endl;
	}
}

void inline DECLARE_AND_SET_INT(ostream& STREAM, const string& NAME, uint32_t VALUE, size_t LENGTH) {
	DECLARE_INT(STREAM, NAME, LENGTH);
	SET_INT(STREAM, NAME, VALUE, LENGTH);
}

void inline MAKE_SVAR(ostream& ofs, const string& var_name, uint32_t value) {
	ofs << "scoreboard players set "
		<< var_name << " svars " << value << endl;
}

void inline SVAR_ADD(ostream& STREAM, const string& VAR1, const string& VAR2) {
	STREAM << "scoreboard players operation "
		<< VAR1 << " svars += "
		<< VAR2 << " svars" << endl;
}

void inline SVAR_MINUS(ostream& STREAM, const string& VAR1, const string& VAR2) {
	STREAM << "scoreboard players operation "
		<< VAR1 << " svars -= "
		<< VAR2 << " svars" << endl;
}

void inline SVAR_MULT(ostream& STREAM, const string& VAR1, const string& VAR2) {
	STREAM << "scoreboard players operation "
		<< VAR1 << " svars *= "
		<< VAR2 << " svars" << endl;
}

void inline SVAR_DIVIDE(ostream& STREAM, const string& VAR1, const string& VAR2) {
	STREAM << "scoreboard players operation "
		<< VAR1 << " svars /= "
		<< VAR2 << " svars" << endl;
}

void inline SVAR_MOD(ostream& STREAM, const string& VAR1, const string& VAR2) {
	STREAM << "scoreboard players operation "
		<< VAR1 << " svars %= "
		<< VAR2 << " svars" << endl;
}

void inline SVAR_COPY(ostream& STREAM, const string& TO, const string& FROM) {
	STREAM << "scoreboard players operation "
		<< TO << " svars = "
		<< FROM << " svars" << endl;
}

void inline COPY(ostream& STREAM, const string& TO, const string& FROM, size_t LENGTH, size_t offset) {
	for (size_t i = 0; i < LENGTH; i++) {
		STREAM << "scoreboard players operation "
			<< "bit" << i + offset << " vars." << TO << " = "
			<< "bit" << i << " vars." << FROM << endl;
	}
}

void inline MAKE_SCONST(ostream& STREAM, uint32_t VALUE) {
	MAKE_SVAR(STREAM, "const" + to_string(VALUE), VALUE);
}

void inline SVAR_TO_VAR_8(ostream& STREAM, const string& SVAR, const string& VAR) {
	SVAR_COPY(STREAM, "stemp1", SVAR);
	SVAR_COPY(STREAM, "stemp2", "stemp1");
	SVAR_MOD(STREAM, "stemp2", "const2");
	STREAM << "scoreboard players operation bit0 vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(STREAM, "stemp1", "const2");
	SVAR_COPY(STREAM, "stemp2", "stemp1");
	SVAR_MOD(STREAM, "stemp2", "const2");
	STREAM << "scoreboard players operation bit1 vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(STREAM, "stemp1", "const2");
	SVAR_COPY(STREAM, "stemp2", "stemp1");
	SVAR_MOD(STREAM, "stemp2", "const2");
	STREAM << "scoreboard players operation bit2 vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(STREAM, "stemp1", "const2");
	SVAR_COPY(STREAM, "stemp2", "stemp1");
	SVAR_MOD(STREAM, "stemp2", "const2");
	STREAM << "scoreboard players operation bit3 vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(STREAM, "stemp1", "const2");
	SVAR_COPY(STREAM, "stemp2", "stemp1");
	SVAR_MOD(STREAM, "stemp2", "const2");
	STREAM << "scoreboard players operation bit4 vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(STREAM, "stemp1", "const2");
	SVAR_COPY(STREAM, "stemp2", "stemp1");
	SVAR_MOD(STREAM, "stemp2", "const2");
	STREAM << "scoreboard players operation bit5 vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(STREAM, "stemp1", "const2");
	SVAR_COPY(STREAM, "stemp2", "stemp1");
	SVAR_MOD(STREAM, "stemp2", "const2");
	STREAM << "scoreboard players operation bit6 vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(STREAM, "stemp1", "const2");
	SVAR_COPY(STREAM, "stemp2", "stemp1");
	SVAR_MOD(STREAM, "stemp2", "const2");
	STREAM << "scoreboard players operation bit7 vars."
		<< VAR << " = stemp2 svars" << endl;
	SVAR_DIVIDE(STREAM, "stemp1", "const2");
}

void inline NOT_32(ostream& STREAM, const string& IP, const string& RES) {
	for (int i = 0; i < 32; i++) {
		STREAM << "scoreboard players operation stemp1 svars"
			<< " = bit" << i << " vars." << IP << endl;
		STREAM << "execute if score stemp1 svars matches 1 "
			<< "run scoreboard players set bit" << i << " vars." << RES << " 0" << endl;
		STREAM << "execute if score stemp1 svars matches 0 "
			<< "run scoreboard players set bit" << i << " vars." << RES << " 1" << endl;
	}
}

void inline AND_32(ostream& STREAM, const string& IP1, const string& IP2, const string& RES) {
	for (int i = 0; i < 32; i++) {
		STREAM << "scoreboard players operation stemp1 svars"
			<< " = bit" << i << " vars." << IP1 << endl;
		STREAM << "scoreboard players operation stemp1 svars"
			<< " += bit" << i << " vars." << IP2 << endl;
		STREAM << "execute if score stemp1 svars matches 2 "
			<< "run scoreboard players set bit" << i << " vars." << RES << " 1" << endl;
		STREAM << "execute unless score stemp1 svars matches 2 "
			<< "run scoreboard players set bit" << i << " vars." << RES << " 0" << endl;
	}
}

void inline OR_32(ostream& STREAM, const string& IP1, const string& IP2, const string& RES) {
	for (int i = 0; i < 32; i++) {
		STREAM << "scoreboard players operation stemp1 svars"
			<< " = bit" << i << " vars." << IP1 << endl;
		STREAM << "scoreboard players operation stemp1 svars"
			<< " += bit" << i << " vars." << IP2 << endl;
		STREAM << "execute unless score stemp1 svars matches 0 "
			<< "run scoreboard players set bit" << i << " vars." << RES << " 1" << endl;
		STREAM << "execute if score stemp1 svars matches 0 "
			<< "run scoreboard players set bit" << i << " vars." << RES << " 0" << endl;
	}
}

void inline XOR_32(ostream& STREAM, const string& IP1, const string& IP2, const string& RES) {
	for (int i = 0; i < 32; i++) {
		STREAM << "execute if score bit" << i << " vars." << IP1 << " = bit" << i << " vars." << IP2 << " "
			<< "run scoreboard players set bit" << i << " vars." << RES << " 0" << endl;
		STREAM << "execute unless score bit" << i << " vars." << IP1 << " = bit" << i << " vars." << IP2 << " "
			<< "run scoreboard players set bit" << i << " vars." << RES << " 1" << endl;
	}
}


///checked
void inline ADD_32(ostream& STREAM, const string& IP1, const string& IP2, const string& RES) {
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
	MAKE_SVAR(STREAM, "stemp1", 0); //carry=0
	for (int i = 0; i < 32; i++) {
		//int temp = a.d[i] + b.d[i] + carry;
		STREAM << "scoreboard players operation stemp2 svars = "
			<< "bit" << i << " vars." << IP1 << endl;
		STREAM << "scoreboard players operation stemp2 svars += "
			<< "bit" << i << " vars." << IP2 << endl;
		SVAR_ADD(STREAM, "stemp2", "stemp1");

		//c.d[c.len++] = temp % 2;
		SVAR_COPY(STREAM, "stemp3", "stemp2");
		SVAR_MOD(STREAM, "stemp3", "const2");
		STREAM << "scoreboard players operation bit" << i << " vars." << RES
			<< " = " << "stemp3 svars" << endl;

		//carry = temp / 2;
		SVAR_COPY(STREAM, "stemp1", "stemp2");
		SVAR_DIVIDE(STREAM, "stemp1", "const2");

	}


}


void inline LEFT_ROTATE_32(ostream& STREAM, const string& IP1, int os, const string& RES) {
	for (int i = 0; i < 32; i++) {
		STREAM << "scoreboard players operation "
			<< "bit" << (i + os) % 32 << " vars." << RES
			<< " = bit" << i << " vars." << IP1 << endl;
	}
}
