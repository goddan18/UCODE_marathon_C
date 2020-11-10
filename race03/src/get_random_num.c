#include "../inc/matrix.h"

wchar_t get_random_num() {
	//return 35 + (rand() % 70);
	wchar_t alphabet[] = {L"゠ァアィイゥウェエォオカガキギクグケゲコゴサザシジスズセゼソゾタ"
                         "ダチヂッツヅテデトドナニヌネノハバパヒビピフブプヘベペホボポマミ"
                         "ムメモャヤュユョヨラリルレロヮワヰヱヲンヴヵヶヷヸヹヺ・ーヽヾヿ"};
	return alphabet[rand() % 96];
}
