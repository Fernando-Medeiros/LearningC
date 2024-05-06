#include "Algorithm15Class.h"
#include <iostream>

static void Algorithm19() {
	float GPA = 0.0f;
	int studentId = 0;
	std::string studentName = "";

	auto handler = SchoolHandler();
	handler.Add(Student(11, "Mike"));
	handler.Add(Student(22, "Summer"));
	handler.Add(Course(125, "Course A", 5));
	handler.Add(Course(130, "Course B", 4));
	handler.Add(Course(135, "Course C", 3));
	handler.Add(Course(140, "Course D", 4));
	handler.Add(Grade(11, 125, 'B'));
	handler.Add(Grade(11, 130, 'A'));
	handler.Add(Grade(11, 135, 'C'));
	handler.Add(Grade(22, 125, 'A'));
	handler.Add(Grade(22, 130, 'A'));
	handler.Add(Grade(22, 140, 'B'));


	std::cout << "Enter Student ID: " << std::flush;
	std::cin >> studentId;

	studentName = handler.GetStudentName(studentId);

	GPA = handler.GetGPA(studentId);

	std::cout << "The GPA for " << studentName << " is " << GPA << std::endl;
}