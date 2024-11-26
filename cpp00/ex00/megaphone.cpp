#include <iostream>
#include <string>


// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	(void)argv;

// 	std::string name;
// 	// name = "Ziad";
// 	std::getline(std::cin >> std::ws, name);
// 	std::cout<< "My name is " << name << std::endl;
// 	std::cout << "lenghth name : " << name.length() << std::endl;
// 	// std::cout<< "eho"<<std::endl;
// 	return (0);
// }

class Date
{
	public:
		int m_day;
		int m_month;
		int m_year;
};

void printDate(const Date& date)
{
    std::cout << date.m_day << '/' << date.m_month << '/' << date.m_year << std::endl;
}

int main()
{
    Date date;
	date.m_day = 26;
	date.m_month = 11;
	date.m_year = 2024;
    printDate(date);

    return 0;
}