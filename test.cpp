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
	//Copy constuctor
	test(test& Test)
	{
		this->age = Test.age;
		this->name = Test.name;
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
	std::string	set_name(const std::string name)
	{
		this->name = name;
		return name;
	}
	int	set_age(const int	age)
	{
		this->age = age;
		return age;
	}
};


int main () {
    test tst(20, "Zokevlar");
	test tst_Copy(tst);

    tst.get_name();
	tst.get_age();

	tst_Copy.set_name("ziad");
	tst_Copy.set_age(23);
	std::cout << "============================="<<std::endl;
	tst_Copy.get_name();
	tst_Copy.get_age();
}