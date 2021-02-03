#include <iostream>
using namespace std;

const int BUFF = 1024;

int main() {
	char buff[BUFF];
	bool l_com = false, quote = false;
	while (cin.getline(buff, BUFF)) {
		int i = 0;
		while (buff[i] != '\0') {
			//normal mode
			if (!quote && !l_com) {
				if (buff[i] == '/') {
					if (buff[i + 1] == '/') break;
					else if (buff[i + 1] == '*') {
						l_com = true;
					}
					else cout << buff[i];
				}
				else if (buff[i] == '"') {
					cout << buff[i];
					quote = true;
				}
				else cout << buff[i];
			}
			else if (l_com) {
				if (buff[i] == '*' && buff[i + 1] == '/') {
					l_com = false;
					i++;
				}
			}
			else if (quote) {
				if (buff[i] == '"') {
					cout << buff[i];
					quote = false;
				}
				else cout << buff[i];
			}
			i++;
		}
		if(!l_com) cout << endl;
	}
}
