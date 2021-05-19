//---------------------------------------------------------------------------

#ifndef EmployeeH
#define EmployeeH
//---------------------------------------------------------------------------
#endif

class emp
{
	public:

	UnicodeString Name;
	UnicodeString Birthday;
	UnicodeString Passport;
	UnicodeString Insurance;
	UnicodeString Education;
	UnicodeString Post;
	int Salary;
	UnicodeString Hiring;
	UnicodeString Notes;

	emp(UnicodeString a, UnicodeString c, UnicodeString d, UnicodeString e, UnicodeString f, UnicodeString g, int h, UnicodeString i, UnicodeString j)
	{
		Name = a;
		Birthday = c;
		Passport = d;
		Insurance = e;
		Education = f;
		Post = g;
		Salary = h;
		Hiring = i;
		Notes = j;
	}

	emp(){ }

};

class list
	{

		private:

		struct node{

			emp data;
			node *next;

		};

		node *head, *tail;

		public:
		list(){
			head = NULL;
			tail = NULL;
		}

		void AddNode(emp value);

		void GetNode(TMemo*Memo);

		void DeleteElement(TComboBox*ComboBox, TMemo*Memo);

		void Elder(TComboBox*ComboBox, TMemo*Memo);

		void FindName(TEdit*Edit, TMemo*Memo);

		void FindBirthday(TEdit*Edit, TMemo*Memo);

		void FindPassport(TEdit*Edit, TMemo*Memo);

		void FindInsurance(TEdit*Edit, TMemo*Memo);

		void FindEducation(TEdit*Edit, TMemo*Memo);

		void FindPost(TEdit*Edit, TMemo*Memo);

		void FindSalary(TEdit*Edit, TMemo*Memo);

		void FindHiring(TEdit*Edit, TMemo*Memo);
	};
