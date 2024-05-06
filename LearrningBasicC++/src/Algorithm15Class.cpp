#include "Algorithm15Class.h"
#include <iostream>

Student::Student(int id, std::string name) {
	Id = id;
	Name = name;
}
int Student::GetId() const {
	return Id;
}
std::string Student::GetName() const {
	return Name;
}

Course::Course(int id, std::string name, unsigned char credits) {
	Id = id;
	Name = name;
	Credits = credits;
}

int Course::GetId() const {
	return Id;
}
std::string Course::GetName() const {
	return Name;
}
unsigned char Course::GetCredits() const {
	return Credits;
}

Grade::Grade(int studentId, int courseId, char grade) {
	StudentId = studentId;
	CourseId = courseId;
	Grd = grade;
}
int Grade::GetStudentId() const {
	return StudentId;
}
int Grade::GetCourseId() const {
	return CourseId;
}
char Grade::GetGrade() const {
	return Grd;
}


float SchoolHandler::GetNumGrade(char letter) const {
	float grid;
	switch (letter) {
	case 'A':grid = 4.0f; break;
	case 'B':grid = 3.0f; break;
	case 'C':grid = 2.0f; break;
	case 'D':grid = 1.0f; break;
	default: grid = 0.0f; break;
	};
	return grid;
}
void SchoolHandler::Add(Student student) {
	students.push_back(student);
}
void SchoolHandler::Add(Course course) {
	courses.push_back(course);
}
void SchoolHandler::Add(Grade grade) {
	grades.push_back(grade);
}
std::string SchoolHandler::GetStudentName(int studentId) const {
	for (int x = 0; x < students.size(); x++) {
		if (students.at(x).GetId() == studentId)
		{
			return students.at(x).GetName();
		}
	}
}
float SchoolHandler::GetGPA(int studentId) const {
	float points = 0.0f, credits = 0.0f;

	for (int x = 0; x < grades.size(); x++) {
		auto grade = &grades.at(x);

		if (grade->GetStudentId() == studentId)
		{
			for (int c = 0; c < courses.size(); c++) {
				auto course = &courses.at(c);

				if (grade->GetCourseId() == course->GetId())
				{
					auto credit = course->GetCredits();

					credits += credit;
					points += GetNumGrade(grade->GetGrade()) * credit;
					break;
				}
			}
		}
	}
	return points / credits;
}
void SchoolHandler::ReportGrade(int studentId) const {
	float points = 0.0f, credits = 0.0f;

	std::cout << "Report Card for " << GetStudentName(studentId) << std::endl;

	for (int x = 0; x < grades.size(); x++) {
		auto grade = &grades.at(x);

		if (grade->GetStudentId() == studentId)
		{
			for (int c = 0; c < courses.size(); c++) {
				auto course = &courses.at(c);

				if (grade->GetCourseId() == course->GetId())
				{
					std::cout << course->GetName() << ": " << grade->GetGrade() << std::endl;

					auto credit = course->GetCredits();

					credits += credit;
					points += GetNumGrade(grade->GetGrade()) * credit;
					break;
				}
			}
		}
	}
	std::cout << "GPA: " << (points / credits) << std::endl;
}