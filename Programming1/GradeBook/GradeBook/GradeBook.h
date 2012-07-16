#include <string>

using namespace std;

class GradeBook
	{
	public:

		GradeBook( string );
		void setCourseName( string );
		string getCourseName();
		// displays welcome message
		void displayMessage();
	private:
		string courseName;
	};
