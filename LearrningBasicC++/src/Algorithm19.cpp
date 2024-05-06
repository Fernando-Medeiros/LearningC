#include "Algorithm15Class.h"
#include <iostream>
#include <vector>

static void Algorithm19() {
	float GPA = 0.0f;
	int studentId = 0;
	std::string studentName = "";

	auto students = std::vector<Student>{
		Student(11, "Mike"),
		Student(22, "Summer")
	};
	auto courses = std::vector<Course>{
		Course(125, "Course A", 5),
		Course(130, "Course B", 4),
		Course(135, "Course C", 3),
		Course(140, "Course D", 4)
	};
	auto grades = std::vector<Grade>{
		Grade(11, 125, 'B'),
		Grade(11, 130, 'A'),
		Grade(11, 135, 'C'),
		Grade(22, 125, 'A'),
		Grade(22, 130, 'A'),
		Grade(22, 140, 'B'),
	};

	std::cout << "Enter Student ID: " << std::flush;
	std::cin >> studentId;

	for (Student student : students) {
		if (student.GetId() == studentId) {
			studentName = student.GetName();
			break;
		}
	}

	float points = 0.0f, credits = 0.0f;

	for (Grade& grade : grades) {
		if (grade.GetStudentId() == studentId)
		{
			float grid;
			switch (grade.GetGrade()) {
			case 'A':grid = 4.0f; break;
			case 'B':grid = 3.0f; break;
			case 'C':grid = 2.0f; break;
			case 'D':grid = 1.0f; break;
			default: grid = 0.0f; break;
			};

			for (Course& course : courses) {
				if (grade.GetCourseId() == course.GetId())
				{
					credits += course.GetCredits();
					points += grid * course.GetCredits();
					break;
				}
			}
		}
	}

	GPA = points / credits;

	std::cout << "The GPA for " << studentName << " is " << (float)GPA << std::endl;
}