// 3.2
// Define class Gradebook with a member function display message
// create a gradebook object, and call it's displayMessage function.

#include <iostream>
#include <string>

using namespace std;

// Gradebook class definition
class GradeBook
{
public:
	GradeBook(string  name)
	{
		setCourseName(name);
	}
	void setCourseName(string name)
	{
		courseName = name;
	}
	string getCourseName()
	{
		return courseName;
	}
	void displayMessage(string courseName)
	{
		cout << "Welcome to the Gradebook for\n" << courseName << "!" << endl;
	}
private:
		string courseName;
};

int main()
{
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data structures in C++");
	
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << endl;
	cout << "gradeBook2 created for course: " << gradeBook2.getCourseName() << endl;


	/* string nameOfCourse;
	GradeBook myGradeBook;
	cout << "Initial course name is: " << myGradeBook.getCourseName() <<endl;
	cout << "\nPlease enter the course name:" << endl;
	getline(cin, nameOfCourse);
	myGradeBook.setCourseName(nameOfCourse);
	cout << endl;
	
	myGradeBook.displayMessage(nameOfCourse); */
	
	return 0;
}