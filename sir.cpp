#include <cstring>
#include "sir.h"

bool verificare_secv(char secv[], char subsir[], int& contor) {

	bool found = false;
	char* context = nullptr;
	char* p = strtok_s(secv," ",&context);
	while (p != nullptr) {
		if (strcmp(p, subsir) == 0) {
			found = true;
			contor++;
		}
		p = strtok_s(nullptr," ",&context);
	}
	return found;
}