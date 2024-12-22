#include <iostream>
#include <string>


class test
{
private :
    int age;
	std::string name;
public :
    test() {
        this->age = 0;
        this->name = "";
    }
    test (int age, std::string name) {
        this->age = age;
        this->name = name;
    }
    ~test()
	{

	}
    void  get_name()
    {
		std::cout << "You name is "<< name <<std::endl;
    }
	void	get_age()
	{
		std::cout << "You Age is " << age <<std::endl;
	}

};


int main () {
    test tst(20, "Zokevlar");

    tst.get_name();
	tst.get_age();
}