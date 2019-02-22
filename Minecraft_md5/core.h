#pragma once
#include "utility.h"

const uint32_t r[64] = {
	7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22,
	5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20,
	4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23,
	6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21
};

void inline append1(size_t);

void inline core_func() {
#pragma omp parallel for
	for (size_t k = 56; k <= 568; k += 64) {
		ofstream ofs("./output/md5/data/md5/functions/core" + to_string(k) + ".mcfunction");

		//We should notice that '1' has been appended to the end of the string in "import_string.mcfunction"

		// append the len in bits at the end of the buffer.
		///to_bytes(initial_len * 8, msg + new_len);
		//*(msg + new_len) = uint8_t(initial_len * 8);
		//*(msg + new_len + 1) = uint8_t((initial_len * 8) >> 8);
		//*(msg + new_len + 2) = uint8_t((initial_len * 8) >> 16);
		//*(msg + new_len + 3) = uint8_t((initial_len * 8) >> 24);


		SVAR_COPY(ofs, "stemp3", "initial_len");
		SVAR_MULT(ofs, "stemp3", "const8");
		SVAR_TO_VAR_8(ofs, "stemp3", "msg_char" + to_string(k));

		SVAR_COPY(ofs, "stemp2", "initial_len");
		SVAR_DIVIDE(ofs, "stemp2", "const32");
		SVAR_TO_VAR_8(ofs, "stemp2", "msg_char" + to_string(k + 1));

		for (size_t os = 0; os < k; os += 64) {
			for (int i = 0; i < 16; i++) {
				COPY(ofs, "w" + to_string(i), "msg_char" + to_string(os + i * 4), 8,0);
				COPY(ofs, "w" + to_string(i), "msg_char" + to_string(os + i * 4 + 1), 8, 8);
				COPY(ofs, "w" + to_string(i), "msg_char" + to_string(os + i * 4 + 2), 8, 16);
				COPY(ofs, "w" + to_string(i), "msg_char" + to_string(os + i * 4 + 3), 8, 24);
			
			}

			COPY(ofs, "a", "h0", 32,0);
			COPY(ofs, "b", "h1", 32,0);
			COPY(ofs, "c", "h2", 32,0);
			COPY(ofs, "d", "h3", 32,0);

			int g;

			for (int i = 0; i < 64; i++) {
				if (i < 16) {
					//f = (b & c) | ((~b) & d);
					g = i;
					AND_32(ofs, "b", "c", "temp1");
					NOT_32(ofs, "b", "temp2");
					AND_32(ofs, "temp2", "d", "temp3");
					OR_32(ofs, "temp1", "temp3", "f");
				}
				else if (i < 32) {
					//f = (d & b) | ((~d) & c);
					g = (5 * i + 1) % 16;
					AND_32(ofs, "d", "b", "temp1");
					NOT_32(ofs, "d", "temp2");
					AND_32(ofs, "temp2", "c", "temp3");
					OR_32(ofs, "temp1", "temp3", "f");
				}
				else if (i < 48) {
					//f = b ^ c ^ d;
					g = (3 * i + 5) % 16;
					XOR_32(ofs, "b", "c", "temp1");
					XOR_32(ofs, "temp1", "d", "f");
				}
				else {
					//f = c ^ (b | (~d));
					g = (7 * i) % 16;
					NOT_32(ofs, "d", "temp1");
					OR_32(ofs, "b", "temp1", "temp2");
					XOR_32(ofs, "c", "temp2", "f");
				}

				COPY(ofs, "temp", "d", 32,0);
				COPY(ofs, "d", "c", 32,0);
				COPY(ofs, "c", "b", 32,0);

				ADD_32(ofs, "a", "f", "temp1");
				ADD_32(ofs, "temp1", "const.k" + to_string(i), "temp2");
				ADD_32(ofs, "temp2", "w" + to_string(g), "temp1");
				LEFT_ROTATE_32(ofs, "temp1", r[i], "temp2");
				ADD_32(ofs, "temp2", "b", "temp1");
				COPY(ofs, "b", "temp1", 32,0); //TODO:copy can be cancelled here!!!

				COPY(ofs, "a", "temp", 32,0);
			}

			ADD_32(ofs, "h0", "a", "temp1");
			COPY(ofs, "h0", "temp1", 32,0);
			ADD_32(ofs, "h1", "b", "temp1");
			COPY(ofs, "h1", "temp1", 32,0);
			ADD_32(ofs, "h2", "c", "temp1");
			COPY(ofs, "h2", "temp1", 32,0);
			ADD_32(ofs, "h3", "d", "temp1");
			COPY(ofs, "h3", "temp1", 32,0);
		}

		ofs << "function md5:result" << endl;

		ofs.close();
	}
}

