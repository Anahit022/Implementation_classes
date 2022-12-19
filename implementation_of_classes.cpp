#include <iostream>
#include <string>

class Dog 
{
	std::string name;
	std::string breed;
	std::string color;
	int age;
	int weight;
	int height;
public:
	Dog()
	{
		name = "Gabi";
		breed = "shepherd";
		color = "black";
		age = 1;
		weight = 22;
		height = 55;
	}
	void print()
	{
		std::cout << "My name is " << name << std::endl;
		std::cout << "I am " << breed << std::endl;
		std::cout << "I am " << age << " years old" << std::endl;
		std::cout << "I am " << weight << " kg " << std::endl;
		std::cout << "I am " << height << "sm" << std::endl;
	}
	void move()
	{
		std::cout << name << " is moving:" << std::endl;
	}
	void eat()
	{
		std::cout << name << " is eating:" << std::endl;
	}
	void sleep()
	{
		std::cout << name << " is slleping:" << std::endl;
	}
	void make_sound()
	{
		std::cout << "Woof, Woof:" << std::endl;
	}
	void sad()
	{
		std::cout << name << " is sad:" << std::endl;
	}
};
class Helicopter
{
	std::string model;
	std::string color;
	int speed;
	int altitude;
	int count_of_passengers;
	int count_of_workers;
public:
	Helicopter()
	{
		model = "Sikorsky H-5";
		color = "Green";
		speed = 100;
		altitude = 3000;
		count_of_passengers = 3;
		count_of_workers = 2;
	}
	void print()
	{
		std::cout << "It is " << model << " helicopter:\n ";
		std::cout << "Speed: " << speed << "\n";
		std::cout << "Passengers:" << count_of_passengers << "\n";
		std::cout << "Workers:" << count_of_workers << "\n";
		std::cout << "altitude:" << altitude << "\n";
	}
	void fly()
	{
		std::cout << model << " helicopter is flying:" << std::endl;
	}
	void land()
	{
		std::cout << model << " helicopter is landing:" << std::endl;
	}
};

class Hospital
{
	std::string name;
	std::string location;
	std::string phone_number;
	std::string work_time;
	std::string e_mail;
	int count_of_doctors;
	int count_of_patients;
	int available_beds;
public:
	Hospital() {
		name = "Nairi";
		location = "Paronyan St,Build. 21,Yerevan 0015";
		phone_number = "374 1037500";
		work_time = "full time";
		e_mail = "hospital@nairimed.am";
		count_of_doctors = 200;
		count_of_patients = 500;
		available_beds = 30;
	}
	void print()
	{
		std::cout << "It is " << name << " hospital.\n";
		std::cout << "It's location: " << location << "\n";
		std::cout << "Phone number : " << phone_number << "\n";
		std::cout << "Work time: " << work_time << "\n";
		std::cout << "e_mail: " << e_mail << "\n";
		std::cout << "count_of_doctors: " << count_of_doctors << "\n";
		std::cout << "count_of_patients: " << count_of_patients << "\n";
		std::cout << "available_beds: " << available_beds << "\n";
	}
	void fill_patient_data()
	{
		std::cout << "Please say your data:" << std::endl;
	}
	void diagnostic()
	{
		std::cout << "You should be examined:" << std::endl;
	}
	void tratement()
	{
		std::cout << "You shuold receive appropriate treatment:" << std::endl;
	}
	void healthy()
	{
		std::cout << "You are healthy:" << std::endl;
	}
	void beds()
	{
		std::cout << "Sorry, we don't have any beds available:" << std::endl;
	}
};

int main()
{
	Dog dog;
	dog.print();
	dog.move();
	dog.eat();
	dog.make_sound();
	dog.sleep();
	dog.sad();
	Helicopter helicopter;
	helicopter.print();
	helicopter.fly();
	helicopter.land();
	Hospital hospital;
	hospital.print();
	hospital.fill_patient_data();
	hospital.diagnostic();
	hospital.tratement();
	hospital.healthy();
	hospital.beds();

	return 0;
}