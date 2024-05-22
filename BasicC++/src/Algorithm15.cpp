#include <iostream>
#include "Algorithm15Class.h"

static void Algorithm15() {
	auto student = Student(1, "Mike");
	auto course = Course(103, "Algorithm", 4);
	auto grade = Grade(1, 103, 'B');

	std::cout << "Student = " << student.GetName() << std::endl;
	std::cout << "Course = " << course.GetName() << std::endl;
	std::cout << "StudentId = " << grade.GetStudentId() << " CourseId = " << grade.GetCourseId() << " Grade = " << grade.GetGrade() << std::endl;
}