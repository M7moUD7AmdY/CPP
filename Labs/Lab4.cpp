

class School
{
	private :
		string Students_name  ;
		int Students_number = 0 ;
		int Max_student_number = 0 ;
		int Teacher_Number = 0;

	public:
		string School_Name ;
		void Set_name()
		{
			cout << "Enter School name :" << endl;
			cin >> School_Name ;
		}
		void Set_student_name()
		{
			cout << "Enter student name :" << endl;
			cin >> Students_name ;
		}

		void Add_Student()
		{
			Students_number++ ;
		}
		void Add_Teache()
		{
			Teacher_Number++ ;
		}
		void Set_Max_Students(int number)
		{
			if (number<1000)
			{
				Max_student_number = number ;
			}
			else
			{
				cout << "Invalid number" << endl ;
			}
		}


		void show_school_data(void)
		{
			cout << "THe name of school : "<< School_Name << endl ;
			cout << "The number of students :" << Students_number << endl ;
			cout << "The maximum Student number" << Max_student_number << endl ;
			cout << "Teacher Number : :" << Teacher_Number << endl ;

		}

}

