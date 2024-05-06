#pragma once
#include <string>
#include <vector>

class Student {
private:
	int Id;
	std::string Name;
public:
	Student(int id, std::string name);
	int GetId() const;
	std::string GetName() const;
};

class Course {
private:
	int Id;
	std::string Name;
	unsigned char Credits;
public:
	Course(int id, std::string name, unsigned char credits);
	int GetId() const;
	std::string GetName() const;
	unsigned char GetCredits() const;
};

class Grade {
private:
	int StudentId;
	int CourseId;
	char Grd;
public:
	Grade(int studentId, int courseId, char grade);
	int GetStudentId() const;
	int GetCourseId() const;
	char GetGrade() const;
};

class SchoolHandler {
private:
	std::vector<Student> students;
	std::vector<Course> courses;
	std::vector<Grade> grades;

	float GetNumGrade(char letter) const;
public:
	void Add(Student student);
	void Add(Course course);
	void Add(Grade grade);
	void ReportGrade(int studentId) const;
	float GetGPA(int studentId) const;
	std::string GetStudentName(int studentId) const;
};