#pragma once
#include <fstream>
#include <string>
using namespace std;

void inline show_frame() {
	system("del *.mcfunction");
	for (int i = 32; i < 127; i++) {
		if (i < 32 + 9) {
			ofstream ofs("show_frame0.mcfunction", ios::app);
			ofs << "replaceitem entity @s container." << (i - 32) % 9 <<
				" minecraft:carrot_on_a_stick{display:{Name:\"{\\\"text\\\":\\\""<<string(1,char(i))<<"\\\"}\", Lore:[\"Keyboard\"]}} 1" <<
				endl;
			ofs.close();
		}
		else if (i < 32 + 9 * 2) {
			ofstream ofs("show_frame1.mcfunction", ios::app);
			ofs << "replaceitem entity @s container." << (i - 32) % 9 <<
				" minecraft:carrot_on_a_stick{display:{Name:\"{\\\"text\\\":\\\"" << string(1, char(i)) << "\\\"}\", Lore:[\"Keyboard\"]}} 1" <<
				endl;
			ofs.close();
		}
		else if (i < 32 + 9 * 3) {
			ofstream ofs("show_frame2.mcfunction", ios::app);
			ofs << "replaceitem entity @s container." << (i - 32) % 9 <<
				" minecraft:carrot_on_a_stick{display:{Name:\"{\\\"text\\\":\\\"" << string(1, char(i)) << "\\\"}\", Lore:[\"Keyboard\"]}} 1" <<
				endl;
			ofs.close();
		}
		else if (i < 32 + 9 * 4) {
			ofstream ofs("show_frame3.mcfunction", ios::app);
			ofs << "replaceitem entity @s container." << (i - 32) % 9 <<
				" minecraft:carrot_on_a_stick{display:{Name:\"{\\\"text\\\":\\\"" << string(1, char(i)) << "\\\"}\", Lore:[\"Keyboard\"]}} 1" <<
				endl;
			ofs.close();
		}
		else if (i < 32 + 9 * 5) {
			ofstream ofs("show_frame4.mcfunction", ios::app);
			ofs << "replaceitem entity @s container." << (i - 32) % 9 <<
				" minecraft:carrot_on_a_stick{display:{Name:\"{\\\"text\\\":\\\"" << string(1, char(i)) << "\\\"}\", Lore:[\"Keyboard\"]}} 1" <<
				endl;
			ofs.close();
		}
		else if (i < 32 + 9 * 6) {
			ofstream ofs("show_frame5.mcfunction", ios::app);
			ofs << "replaceitem entity @s container." << (i - 32) % 9 <<
				" minecraft:carrot_on_a_stick{display:{Name:\"{\\\"text\\\":\\\"" << string(1, char(i)) << "\\\"}\", Lore:[\"Keyboard\"]}} 1" <<
				endl;
			ofs.close();
		}
		else if (i < 32 + 9 * 7) {
			ofstream ofs("show_frame6.mcfunction", ios::app);
			ofs << "replaceitem entity @s container." << (i - 32) % 9 <<
				" minecraft:carrot_on_a_stick{display:{Name:\"{\\\"text\\\":\\\"" << string(1, char(i)) << "\\\"}\", Lore:[\"Keyboard\"]}} 1" <<
				endl;
			ofs.close();
		}
		else if (i < 32 + 9 * 8) {
			ofstream ofs("show_frame7.mcfunction", ios::app);
			ofs << "replaceitem entity @s container." << (i - 32) % 9 <<
				" minecraft:carrot_on_a_stick{display:{Name:\"{\\\"text\\\":\\\"" << string(1, char(i)) << "\\\"}\", Lore:[\"Keyboard\"]}} 1" <<
				endl;
			ofs.close();
		}
		else if (i < 32 + 9 * 9) {
			ofstream ofs("show_frame8.mcfunction", ios::app);
			ofs << "replaceitem entity @s container." << (i - 32) % 9 <<
				" minecraft:carrot_on_a_stick{display:{Name:\"{\\\"text\\\":\\\"" << string(1, char(i)) << "\\\"}\", Lore:[\"Keyboard\"]}} 1" <<
				endl;
			ofs.close();
		}
		else if (i < 32 + 9 * 10) {
			ofstream ofs("show_frame9.mcfunction", ios::app);
			ofs << "replaceitem entity @s container." << (i - 32) % 9 <<
				" minecraft:carrot_on_a_stick{display:{Name:\"{\\\"text\\\":\\\"" << string(1, char(i)) << "\\\"}\", Lore:[\"Keyboard\"]}} 1" <<
				endl;
			ofs.close();
		}
		else {
			ofstream ofs("show_frame10.mcfunction", ios::app);
			ofs << "replaceitem entity @s container." << (i - 32) % 9 <<
				" minecraft:carrot_on_a_stick{display:{Name:\"{\\\"text\\\":\\\"" << string(1, char(i)) << "\\\"}\", Lore:[\"Keyboard\"]}} 1" <<
				endl;
			ofs.close();
		}


	}
}
