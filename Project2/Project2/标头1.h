#include"БъЭЗ.h"
class Person
{
private:
	int id;
	Date* birthDate;
public:
	Person(int id,int year,int month,int day);
	int getId();
	Date* getBirthDate();
};