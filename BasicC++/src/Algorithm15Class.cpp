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
std::string SchoolHandler::GetStudentName(int id) const {
	for (int x = 0; x < students.size(); x++) {
		if (students.at(x).GetId() == id)
		{
			return students.at(x).GetName();
		}
	}
}
float SchoolHandler::GetGPA(int studentId) const {
	const Grade* grade;
	const Course* course;
	float pts = 0.0f, cdts = 0.0f;

	for (int x = 0; x < grades.size(); x++) {
		grade = &grades.at(x);

		if (grade->GetStudentId() == studentId)
		{
			for (int c = 0; c < courses.size(); c++) {
				course = &courses.at(c);

				if (grade->GetCourseId() == course->GetId())
				{
					auto credit = course->GetCredits();

					pts += GetNumGrade(grade->GetGrade()) * credit;
					cdts += credit;
					break;
				}
			}
		}
	}
	return pts / cdts;
}