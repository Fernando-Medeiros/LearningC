#include "Algorithm11Class.h"

static void Algorithm11() {
	TaskHandler Handler = TaskHandler(50);

	auto task01 = Task();
	task01.Name = "Learning C++";
	task01.Status = EStatus::Doing;

	auto task02 = Task();
	task02.Name = "Windows Forms";
	task02.Status = EStatus::Do;

	Handler.InsertFirst(task01);
	Handler.InsertLast(task02);

	Task first = Handler.GetFirst();
	Task last = Handler.GetLast();

	std::cout << "Name = " << first.Name << " > " << (int)first.Status << std::endl;
	std::cout << "Name = " << last.Name << " > " << (int)last.Status << std::endl;
}