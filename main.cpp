#include<iostream>
#include<vector>
#include<algorithm>
#include<string>





//create a vector struct of ppl 
struct people
{
	std::vector<int> age;
	std::vector<std::string> name;
};

struct person
{
	int age_;
	std::string name_;
};

template <class T>
void print(std::vector<T>);

template <class T>
void print_stp(std::vector<T>);

template <class T>
void print_st(std::vector<T> , std::vector<T>  );

void prints(people);


int main(void)
{
	std::vector<float> sortfloats;
	sortfloats.push_back(645.41);
	sortfloats.push_back(37.59);
	sortfloats.push_back(76.41);
	sortfloats.push_back(5.31);
	sortfloats.push_back(-34.23);
	sortfloats.push_back(1.11);
	sortfloats.push_back(1.10);
	sortfloats.push_back(23.46);
	sortfloats.push_back(635.47);
	sortfloats.push_back(-876.32);
	sortfloats.push_back(467.83);
	sortfloats.push_back(62.25);



	std::vector<std::string> sortnames;
	sortnames.push_back("Hal");
	sortnames.push_back("Susann");
	sortnames.push_back("Dwight");
	sortnames.push_back("Kassandra");
	sortnames.push_back("Lawrence");
	sortnames.push_back("Cindy");
	sortnames.push_back("Cory");
	sortnames.push_back("Mac");
	sortnames.push_back("Romana");

	print(sortfloats);
	print(sortnames);

	std::cout << "Now sorting ....\n\n";

	std::sort(sortfloats.begin(), sortfloats.end());
	std::sort(sortnames.begin(), sortnames.end());


	print(sortfloats);
	print(sortnames);

	std::vector<person> people;

	//adding ppl to the vector first 
	for(int i = 0; i < 10; ++ i)
		people.push_back(person());



	people[0].age_ = 20;
	people[0].name_ = "Hal";

	people[1].age_ = 31;
	people[1].name_ = "Susann";

	people[2].age_ = 19;
	people[2].name_ = "Dwight";

	people[3].age_ = 21;
	people[3].name_ = "Kassandra";

	people[4].age_ = 25;
	people[4].name_ = "Lawrance";

	people[5].age_ = 22;
	people[5].name_ = "Cindy";

	people[6].age_ = 27;
	people[6].name_ = "Cory";

	people[7].age_ = 19;
	people[7].name_ = "Mac";

	people[8].age_ = 20;
	people[8].name_ = "Danna";

	people[9].age_ = 25;
	people[9].name_ = "Natalie";

	//people[5].age_ = 22;
	//people[5].name_ = "Cindy";


	/*ppl.age.push_back(20);
	ppl.name.push_back("Hal");

	ppl.age.push_back(31);
	ppl.name.push_back("Susann");

	ppl.age.push_back(19);
	ppl.name.push_back("Dwight");

	ppl.age.push_back(21);
	ppl.name.push_back("Kassandra");

	ppl.age.push_back(25);
	ppl.name.push_back("Lawrance");

	ppl.age.push_back(22);
	ppl.name.push_back("Cindy");

	ppl.age.push_back(27);
	ppl.name.push_back("Cory");

	ppl.age.push_back(19);
	ppl.name.push_back("Mac");

	//....
	ppl.age.push_back(20);
	ppl.name.push_back("Danna");

	ppl.age.push_back(25);
	ppl.name.push_back("Natalie");*/


	std::cout << "Now printing contents of the struct \n";
	print_stp(people);


	std::cout << "\nNow sorting struct of ppl\n";
	std::sort(people.begin(), people.end());
	print_stp(people);

	//prints(ppl);


	//std::cout << "Now sorting struct of ppl\n";
	//std::sort(ppl.age.begin(), ppl.age.end(), std::greater<int>());

	//std::cout << "Now printing contents of the  sorted struct \n";
	//prints(ppl);

	return 0;
}

template <class T>
void print_stp(std::vector<T> structname)
{
	for (int i = 0; i < structname.size(); ++i)
		std::cout << structname[i].name_ << ", " << structname[i].age_ << std::endl;
	std::cout << "\n\n";
}

template <class T>
void print(std::vector<T> values)
{
	for (int i = 0; i < values.size(); ++i)
		std::cout << values.at(i) << ' ';
	std::cout << "\n\n";
}


template <class T>
void print_st(std::vector<T> age, std::vector<T> name)
{
	for (int i = 0; i < age.size(); ++i)
		std::cout << name.at(i) << ", " << age.at(i) << std::endl;
}


void prints(people ppl)
{
	for (int i = 0; i < ppl.age.size(); ++i)
		std::cout << ppl.name.at(i) << ", " << ppl.age.at(i) << std::endl;
}