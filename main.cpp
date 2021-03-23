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

bool compare_by_age(const person &, const person &);
bool compare_by_name(const person&, const person&);

template <class T>
void print(std::vector<T>);

template <class T>
void print_stp(std::vector<T>);



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
	for (int i = 0; i < 17; ++i)
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

	people[8].age_ = 27;
	people[8].name_ = "Romana";

	people[9].age_ = 32;
	people[9].name_ = "Doretha";

	people[10].age_ = 20;
	people[10].name_ = "Danna";

	people[11].age_ = 23;
	people[11].name_ = "Zara";

	people[12].age_ = 26;
	people[12].name_ = "Rosalyn";

	people[13].age_ = 24;
	people[13].name_ = "Risa";

	people[14].age_ = 28;
	people[14].name_ = "Benny";

	people[15].age_ = 33;
	people[15].name_ = "Juan";

	people[16].age_ = 25;
	people[16].name_ = "Natalie";


	std::cout << "Now printing contents of the struct \n";
	print_stp(people);


	std::cout << "\nNow sorting struct of ppl\n";
	std::sort(people.begin(), people.end(), compare_by_age);
	std::sort(people.begin(), people.end(), compare_by_name);
	print_stp(people);




	return 0;
}

bool compare_by_name(const person& value, const person& value2)
{
	return value.name_ < value.name_;
}

bool compare_by_age(const person& value, const person& value2)
{
	return value.age_ > value2.age_;
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


