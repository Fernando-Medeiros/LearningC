#include "../shared/Print.cpp"
#include "Algorithm01Num.h"

static void Algorithm01() {
	Num n(55);

	Print("value is: {}\n", (int)n);
	Print("value is: {}\n", (int)++n);
	Print("value is: {}\n", (int)n);
	Print("value is: {}\n", (int)n++);
	Print("value is: {}\n", (int)n);
	Print("value is: {}\n", (int)--n);
	Print("value is: {}\n", (int)n);
	Print("value is: {}\n", (int)n--);
	Print("value is: {}\n", (int)n);
}