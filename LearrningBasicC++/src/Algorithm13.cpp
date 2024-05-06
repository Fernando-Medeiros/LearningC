#include "Algorithm11Class.h"

static void Algorithm13() {
	Task* task;
	TaskHandler* handler;

	task = new Task();
	handler = new TaskHandler(5);

	task->Status = EStatus::Doing;
	task->Name = "Dynamic access memory";

	handler->InsertFirst(Task(*task));

	std::cout << "Name = " << task->Name << " > " << (int)task->Status << std::endl;

	delete task;

	std::cout << "Task inside stack:\n";
	std::cout << "Name = " << handler->GetFirst().Name << std::endl;
	std::cout << "Pointer to task :\n";
	std::cout << "Name = " << task->Name << " > " << (int)task->Status << std::endl;

	delete handler;
}