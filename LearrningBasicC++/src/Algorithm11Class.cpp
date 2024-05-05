#include "Algorithm11Class.h"

TaskHandler::TaskHandler(int length) {
	Stack.resize(length);
}

Task TaskHandler::GetTask(size_t pos) const {
	return Stack.at(pos);
}

Task TaskHandler::GetFirst() const {
	return Stack.front();
}

Task TaskHandler::GetLast() const {
	return Stack.back();
}

void TaskHandler::InsertFirst(Task task) {
	Stack.insert(Stack.begin(), task);
}

void TaskHandler::InsertLast(Task task) {
	Stack.insert(Stack.end(), task);
}
