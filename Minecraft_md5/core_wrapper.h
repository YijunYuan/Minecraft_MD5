#pragma once
#include "utility.h"

void inline core_wrapper() {
	ofstream ofs("./output/core_wrapper.mcfunction");
	ofs << "execute if score initial_len svars matches 0..55 run function md5:core56" << endl;
	for (size_t k = 56 + 64; k <= 568; k += 64) {
		ofs << "execute if score initial_len svars matches " << k - 64 << ".." << k - 1 << " run function md5:core" << k
			<< endl;
	}
}
