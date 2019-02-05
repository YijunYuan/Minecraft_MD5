#pragma once
#include "utility.h"
//Maxianl initial_len: 64*8+55=567
//==>Possible new_len: 56, 120, 184, 248, 312, 376, 440, 504, 568
void declare_variables() {
	ofstream ofs("preparation.mcfunction");

	ofs << "scoreboard objectives add svars dummy" << endl;

	ofs << endl << endl;

	//original string
	for (int i = 0; i < 567; i++) {
		DECLARE_AND_SET_INT(ofs, "ini_char" + to_string(i), 0, 8);
	}
	ofs << endl << endl;

	//length of initial string
	MAKE_SVAR(ofs, "initial_len", 0);
	ofs << endl << endl;

	//msg
	for (int i = 0; i < 577; i++) {
		DECLARE_AND_SET_INT(ofs, "msg_char" + to_string(i), 0, 8);
	}
	ofs << endl << endl;

	//length of msg
	MAKE_SVAR(ofs, "new_len", 0);
	ofs << endl << endl;

	//h0,h1,h2,h3
	DECLARE_AND_SET_INT(ofs, "h0", 0x67452301, 32);
	DECLARE_AND_SET_INT(ofs, "h1", 0xefcdab89, 32);
	DECLARE_AND_SET_INT(ofs, "h2", 0x98badcfe, 32);
	DECLARE_AND_SET_INT(ofs, "h3", 0x10325476, 32);
	ofs << endl << endl;

	//a,b,c,d,i,f,g,temp
	DECLARE_AND_SET_INT(ofs, "a", 0, 32);
	DECLARE_AND_SET_INT(ofs, "b", 0, 32);
	DECLARE_AND_SET_INT(ofs, "c", 0, 32);
	DECLARE_AND_SET_INT(ofs, "d", 0, 32);
	DECLARE_AND_SET_INT(ofs, "i", 0, 32);
	DECLARE_AND_SET_INT(ofs, "f", 0, 32);
	//DECLARE_AND_SET_INT(ofs, "g", 0, 32);
	DECLARE_AND_SET_INT(ofs, "temp", 0, 32);
	DECLARE_AND_SET_INT(ofs, "temp1", 0, 32);
	DECLARE_AND_SET_INT(ofs, "temp2", 0, 32);
	DECLARE_AND_SET_INT(ofs, "temp3", 0, 32);
	DECLARE_AND_SET_INT(ofs, "temp4", 0, 32);
	ofs << endl << endl;

	//offset
	MAKE_SVAR(ofs, "offset", 0);
	ofs << endl << endl;

	//w[16]
	for (int i = 0; i < 16; i++) {
		DECLARE_AND_SET_INT(ofs, "w" + to_string(i), 0, 32);
	}

	/*
	MAKE_SMALL_VARIABLE(ofs, "const64", 64)
	MAKE_SMALL_VARIABLE(ofs, "const56", 56)
	MAKE_SMALL_VARIABLE(ofs, "const55", 55)
	MAKE_SMALL_VARIABLE(ofs, "small_temp1", 0)

	
	//new_len = initial_len / 64 * 64 + 56;
	SMALL_VARS_COPY(ofs, "new_len", "initial_len")
	SMALL_VARS_DIVIDE(ofs, "new_len", "const64")
	SMALL_VARS_MULT(ofs, "new_len", "const64")
	SMALL_VARS_ADD(ofs, "new_len", "const56")

	//if(initial_len % 64 > 55) new_len += 64;
	SMALL_VARS_COPY(ofs, "small_temp1", "initial_len")
	SMALL_VARS_MOD(ofs, "small_temp1", "const64")
	ofs << "execute if score small_temp1 small_vars > const55 small_vars run "
		<< "scoreboard players operation new_len small_vars += const64 small_vars" << endl;
	*/
	ofs<<endl<<endl;

	MAKE_SCONST(ofs, 1);
	MAKE_SCONST(ofs, 2);
	MAKE_SCONST(ofs, 4);
	MAKE_SCONST(ofs, 8);
	MAKE_SCONST(ofs, 16);
	MAKE_SCONST(ofs, 32);
	MAKE_SCONST(ofs, 64);

	//small temporary variables
	MAKE_SVAR(ofs, "stemp1", 0);
	MAKE_SVAR(ofs, "stemp2", 0);
	MAKE_SVAR(ofs, "stemp3", 0);
	MAKE_SVAR(ofs, "stemp4", 0);
	ofs << endl << endl;


/*
	ofs << "function md5:core_proxy" << endl;
	ofs.close();

	ofstream ofs1("core_proxy.mcfunction");
	ofs1 << "execute if score initial_len svars matches   1..55  run function md5:core56"  << endl;
	ofs1 << "execute if score initial_len svars matches  56..119 run function md5:core120" << endl;
	ofs1 << "execute if score initial_len svars matches 120..183 run function md5:core184" << endl;
	ofs1 << "execute if score initial_len svars matches 184..247 run function md5:core248" << endl;
	ofs1 << "execute if score initial_len svars matches 248..311 run function md5:core312" << endl;
	ofs1 << "execute if score initial_len svars matches 312..375 run function md5:core376" << endl;
	ofs1 << "execute if score initial_len svars matches 376..439 run function md5:core440" << endl;
	ofs1 << "execute if score initial_len svars matches 440..503 run function md5:core504" << endl;
	
	ofs1.close();
	*/
}
