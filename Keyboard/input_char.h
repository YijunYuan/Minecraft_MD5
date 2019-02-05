#pragma once
#include <fstream>
#include <string>
using namespace std;

void input_char() {
	ofstream ofs("input_char.mcfunction");
	for (int i = 32; i < 127; i++) {
		ofs <<
			R"(execute as @a[scores={Keyboard.Enabled=1..,Keyboard.Pressed=1..},nbt={SelectedItem:{id:"minecraft:carrot_on_a_stick",tag:{display:{Name:"{\"text\":\")"
			<< string(1, char(i)) << R"(\"}"}}}}] run execute as @e[tag=Keyboard] run execute if score @s Keyboard.Index = str_len Keyboard.String run function keyboard:input/input_ascii)" << i << endl;
	}
}
