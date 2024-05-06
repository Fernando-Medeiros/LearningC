#include "Algorithm15Class.h"

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