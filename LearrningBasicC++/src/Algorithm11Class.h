#pragma once
#include <iostream>
#include <vector>

enum class EStatus { Do, Doing, Done };

struct Task {
	std::string Name;
	EStatus Status;
};

class TaskHandler {
private:
	std::vector<Task> Stack;
public:
	TaskHandler(int length);
	Task GetTask(size_t pos) const;
	Task GetFirst() const;
	Task GetLast() const;
	void InsertFirst(Task task);
	void InsertLast(Task task);
};

// Versão alternativa do #pragma once
#ifdef ALGORITHM11
#define ALGORITHM11
#endif // ALGORITHM11