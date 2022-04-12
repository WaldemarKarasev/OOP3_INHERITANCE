#include <iostream>
#include <string>

using namespace std;

class Human
{
public:

	string SetName(string name)
	{
		this->name = name;
	}

	void GetName()
	{
		cout << "Name:" << name << endl;
	}

private:
	string name;
};

class Student : public Human
{
public:

	void SetGroup(string group)
	{
		this->group = group;
	}

	string GetGroup()
	{
		return group;
	}
	void Learn()
	{
		cout << "Learn, group:" << GetGroup() << endl;
	}
private:

	string group;

};

class StudentExternal : public Student
{
public:
	
	void Learn()
	{
		cout << "Learn at home, group:" << GetGroup() << endl;
	}

};

class Professor:public Human
{
public:
	string subject;
};

/*
class A
{
public:
	string msgOne = "MessageOne";

private:
	string msgTwo = "MessageTwo";

protected:
	string msgThree = "MessageThree";

};

class B : public A
{
public:
	void PrintMsg()
	{
		cout << msgOne << endl;
		//cout << msgTwo << endl;
		cout << msgThree << endl;

	}

};
*/

class A
{
public:
	//если его закомментировать, то будет ошибка в B()
	A()
	{
		msg = "Empty Message";
		//	cout << "A constructor" << endl;
	}

	A(string msg)
	{
		this->msg = msg;
	}

	void PrintMessage()
	{
		cout << msg << endl;
	}

	~A()
	{
		cout << "A destructor" << endl;
	}

private:
	string msg;
};

class B : public A
{
public:
	B():A("New message")
	{
		cout << "B constructor" << endl;
	}



	~B()
	{
		cout << "B destructor" << endl;
	}


};




int main()
{
	B b;
	b.PrintMessage();

	return 0;
}
