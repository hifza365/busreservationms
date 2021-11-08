#include<iostream>
#include<string>
using namespace std;

class Company
{
protected:
	string company_name;
	string office_address[3];
	string UAN_number;
	string customer_service_email;
public:
	Company()
	{
		company_name = "Daewoo Pakistan Express Bus Service";
		office_address[0] = "Buliding # 36, Street 8, F-7, Islamabad";
		office_address[1] = "Buliding # 14, Street 14, G-11, Lahore";
		office_address[2] = "Buliding # 5, Street 9, E-12, Karachi";
		UAN_number = "111 - 007 - 008";
		customer_service_email = "customer_service@daewoo.com.pk";
	}
	void set_company()
	{
		set_company_name();
		set_islamabad_office();
		set_lahore_office();
		set_karachi_office();
		set_UAN();
		set_customer_service_email();
	}
	void set_company_name()
	{
		cout << "\nEnter Company Name : "; getline(cin, company_name);
	}
	void set_islamabad_office()
	{
		cout << "\nEnter Islamabad Main Office Address : "; getline(cin, office_address[0]);
	}
	void set_lahore_office()
	{
		cout << "\nEnter Lahore Main Office Address : "; getline(cin, office_address[1]);
	}
	void set_karachi_office()
	{
		cout << "\nEnter Karachi Main Office Address : "; getline(cin, office_address[2]);
	}
	void set_UAN()
	{
		cout << "\nEnter UAN Number : "; getline(cin, UAN_number);
	}
	void set_customer_service_email()
	{
		cout << "\nEnter Customer Service Email : "; getline(cin, customer_service_email);
	}
	void get_company()
	{
		cout << "\n\t\t\t\n*** CONTACT US ***\n";
		get_company_name();
		get_islamabad_office();
		get_lahore_office();
		get_karachi_office();
		get_UAN();
		get_customer_service_email();
	}
	void get_company_name()
	{
		cout << "\nCompany Name : " << company_name << "\n";;
	}

	void get_islamabad_office()
	{
		cout << "\nIslamabad Main Office Address : " << office_address[0] << "\n";
	}

	void get_lahore_office()
	{
		cout << "\nLahore Main Office Address : " << office_address[1] << "\n";
	}

	void get_karachi_office()
	{
		cout << "\nKarachi Main Office Address : " << office_address[2] << "\n";
	}

	void get_UAN()
	{
		cout << "\nUAN Number : " << UAN_number << "\n";
	}

	void get_customer_service_email()
	{
		cout << "\nCustomer Service Email : " << customer_service_email << "\n";
	}

};

class Person 
{
protected:

	long long int cnic_number;

	string full_name;

	string DoB;

	string type;

public:

	Person() {}

	Person(long long int id_number, string name, string birth_date)
	{
		cnic_number = id_number;

		full_name = name;

		DoB = birth_date;
	}

	void set_person()
	{
		set_cnic_number();

		cin.ignore();

		set_full_name();

		set_DoB();
	}

	void set_cnic_number()
	{
		cout << "\nEnter CNIC number : "; cin >> cnic_number;
	}

	void set_full_name()
	{
		cout << "\nEnter Full Name : "; getline(cin, full_name);
	}

	void set_DoB()
	{
		cout << "\nEnter Date of Birth : "; getline(cin, DoB);
	}

	void get_person()
	{
		cout << "\nCNIC number : " << cnic_number << "\n";

		cout << "\nFull Name : " << full_name << "\n";

		cout << "\nDate of Birth : " << DoB << "\n";
	}

	void get_cnic_number()
	{
		cout << "\nCNIC number : " << cnic_number << "\n";
	}

	void get_full_name()
	{
		cout << "\nFull Name : " << full_name << "\n";
	}

	void get_DoB()
	{
		cout << "\nDate of Birth : " << DoB << "\n";
	}
};

class Admin : virtual public Person, virtual public Company
{
protected:

	string username;

	string password;

	string employee_id;

	string designation;

public:

	Admin() {}

	Admin(long long int id_number, string name, string birth_date, string emp_id, string u_name, string passcode) : Company(), Person(id_number, name, birth_date)
	{
		username = u_name;
		password = passcode;
		employee_id = emp_id;
		designation = "Administration";
	}
	void set_Employee()
	{
		set_person();
		set_employee_id();
	}

	void set_employee_id()
	{
		cout << "\nEnter Employee ID : "; getline(cin, employee_id);
	}

	void get_Employee()
	{
		get_person();
		get_employee_id();

	}

	void get_employee_id()
	{
		cout << "\nEmployee ID : " << employee_id << "\n";
	}
	void set_Admin()
	{
		set_Employee();
		set_username();
		set_password();

	}
	void set_username()
	{
		cout << "\nEnter Username : "; getline(cin, username);
	}

	void set_password()
	{
		cout << "\nEnter Password : "; getline(cin, password);
	}


	void get_Admin()
	{
		get_Employee();
		get_username();
		get_password();
	}

	void cout_username()
	{
		cout << "\nUsername : " << username << "\n";
	}

	void cout_password()
	{
		cout << "\nPassword : " << password << "\n";
	}

	string get_username()
	{
		return username;
	}

	string get_password()
	{
		return password;
	}

	bool check_log_in(string usern, string pass)
	{
		if (username == usern && password == pass)
		{
			return true;
		}

		else
		{
			return false;
		}
	}

};

class Bus : virtual public Company
{

protected:

	int bus_number;

	string bus_license_plate;

	string bus_type;

	int number_of_seats;

public:

	Bus() {}

	Bus(int bus_no, string bus_license) : Company()
	{
		bus_number = bus_no;

		bus_license_plate = bus_license;

	}

	void set_bus()
	{
		set_bus_number();

		cin.ignore();

		set_bus_license_plate();
	}


	void set_bus_number()
	{
		cout << "\nEnter Bus Number : "; cin >> bus_number;
	}

	void set_bus_license_plate()
	{
		cout << "\nEnter Bus License Plate : "; getline(cin, bus_license_plate);
	}

	void get_bus()
	{
		get_bus_number();

		get_bus_license_plate();
	}

	void get_bus_number()
	{
		cout << "\nBus Number : " << bus_number << "\n";
	}

	void get_bus_license_plate()
	{
		cout << "\nBus License Plate : " << bus_license_plate << "\n";
	}

};

class Economy_Bus : virtual public Bus
{
protected:

	string seating_plan[40];

public:

	Economy_Bus() {}

	Economy_Bus(int bus_no, string bus_license) : Company(), Bus(bus_no, bus_license)
	{

		bus_number = bus_no;

		bus_license_plate = bus_license;

		bus_type = "Economy";

		number_of_seats = 40;

		for (int i = 0; i < 40; i++)
		{
			seating_plan[i] = "0";
		}
	}

	void input_economy_bus()
	{
		set_bus();
	}

	void output_economy_bus()
	{
		get_bus();

		cout << "\nBus Type : " << bus_type << "\n";

		cout << "\nTotal Number of Seats : " << number_of_seats << "\n";

		output_economy_seating_plan();

	}

	void output_economy_seating_plan()
	{
		cout << "\nSeating Plan ('A' for Available Seats & 'NA' for Not Available Seats) : \n\n\n";

		int i, count = 0;

		for (i = 0; i < 40; i++)
		{
			++count;

			if (count < 10)
			{
				cout << "0";
			}

			if (seating_plan[i] == "0")
			{
				cout << count << " . A   ";
			}
			else
			{
				cout << count << ". NA   ";
			}

			if (count % 8 == 0)
			{
				cout << "\n\n\n";
			}
		}
	}

	bool check_economy_seat_availability(int number)
	{
		if (seating_plan[number - 1] == "0")
		{
			return true;
		}

		else
		{
			return false;
		}
	}

};

class Luxury_Bus : virtual public Bus
{
protected:

	string seating_plan[28];

public:

	Luxury_Bus() {}

	Luxury_Bus(int bus_no, string bus_license) : Company(), Bus(bus_no, bus_license)
	{

		bus_number = bus_no;

		bus_license_plate = bus_license;

		bus_type = "Luxury";

		number_of_seats = 28;

		for (int i = 0; i < 28; i++)
		{
			{
				seating_plan[i] = "0";
			}
		}
	}

	void input_luxury_bus()
	{
		set_bus();
	}

	void output_luxury_bus()
	{
		get_bus();

		cout << "\nBus Type : " << bus_type << "\n";

		cout << "\nTotal Number of Seats : " << number_of_seats << "\n";

		output_luxury_seating_plan();

	}

	void output_luxury_seating_plan()
	{
		cout << "\nSeating Plan ('A' for Available Seats & 'NA' for Not Available Seats) : \n\n\n";

		int i, count = 0;

		for (i = 0; i < 28; i++)
		{
			++count;

			if (count < 10)
			{
				cout << "0";
			}
			if (seating_plan[i] == "0")
			{
				cout << count << " . A   ";
			}
			else
			{
				cout << count << ". NA   ";
			}

			if (count % 7 == 0)
			{
				cout << "\n\n\n";
			}

		}
	}

	bool check_luxury_seat_availability(int number)
	{
		if (seating_plan[number - 1] == "0")
		{
			return true;
		}

		else
		{
			return false;
		}
	}

};

class Route : virtual public Company
{
protected:

	string origin;

	string destination;

	string departure_time;

	string arrival_time;

	string date;

	float price_per_ticket;

public:

	Route() {}

	Route(string start_place, string finish_place, string start_time, string finish_time, string date_of) : Company()
	{
		origin = start_place;

		destination = finish_place;

		departure_time = start_time;

		arrival_time = finish_time;

		date = date_of;
	}

	void set_route()
	{
		set_origin();

		set_destination();

		set_date();

		set_departure_time();

		set_arrival_time();

	}

	void set_origin()
	{
		cout << "\nEnter Journey Origin : "; getline(cin, origin);
	}

	void set_destination()
	{
		cout << "\nEnter Journey Destination Time : "; getline(cin, destination);
	}

	void set_departure_time()
	{
		cout << "\nEnter Journey Departure Time : "; getline(cin, departure_time);
	}

	void set_arrival_time()
	{
		cout << "\nEnter Journey Arrival Time : "; getline(cin, arrival_time);
	}

	void set_date()
	{
		cout << "\nEnter Date of Journey : "; getline(cin, date);
	}

	void get_route()
	{
		get_origin();

		get_destination();

		get_date();

		get_departure_time();

		get_arrival_time();
	}

	void get_origin()
	{
		cout << "\nJourney Origin : " << origin << "\n";
	}

	void get_destination()
	{
		cout << "\nJourney Destination : " << destination << "\n";
	}

	void get_departure_time()
	{
		cout << "\nJourney Departure Time : " << departure_time << "\n";
	}

	void get_arrival_time()
	{
		cout << "\nJourney Arrival Time : " << arrival_time << "\n";
	}

	void get_date()
	{
		cout << "\nDate of Journey : " << date << "\n";
	}

};


class Economy_Route : virtual public Economy_Bus, virtual public Route
{

public:

	Economy_Route() {}

	Economy_Route(int bus_no, string bus_license, string start_place, string finish_place, string start_time, string finish_time, string date_of, float price) : Company(), Economy_Bus(bus_no, bus_license), Route(start_place, finish_place, start_time, finish_time, date_of)
	{
		price_per_ticket = price;
	}

	void set_price_per_ticket()
	{
		cout << "\nEnter Price per Ticket : "; cin >> price_per_ticket;
	}

	void get_price_per_ticket()
	{
		cout << "\nPrice per Ticket : " << price_per_ticket << " Rupees\n";
	}

	void set_economy_route()
	{
		input_economy_bus();

		set_route();

	}

	void get_economy_route()
	{

		get_route();

		output_economy_bus();

		get_price_per_ticket();
	}


	void customer_output_economy_route()
	{

		get_route();

		get_bus_number();

		get_bus_license_plate();

		get_price_per_ticket();

	}

	void add_economy_reservation(int number)
	{
		seating_plan[number - 1] = "1";
	}

	void cancel_economy_reservation(int number)
	{
		seating_plan[number - 1] = "0";
	}

};


class Luxury_Route : virtual public Luxury_Bus, virtual public Route
{

public:

	Luxury_Route() {}

	Luxury_Route(int bus_no, string bus_license, string start_place, string finish_place, string start_time, string finish_time, string date_of, float price) : Company(), Luxury_Bus(bus_no, bus_license), Route(start_place, finish_place, start_time, finish_time, date_of)
	{
		price_per_ticket = price;

	}

	void set_price_per_ticket()
	{
		cout << "\nEnter Price per Ticket : "; cin >> price_per_ticket;
	}

	void get_price_per_ticket()
	{
		cout << "\nPrice per Ticket : " << price_per_ticket << " Rupees\n";
	}

	void input_luxury_route()
	{
		input_luxury_bus();

		set_route();

	}

	void output_luxury_route()
	{

		get_route();

		output_luxury_bus();

		get_price_per_ticket();
	}

	void customer_output_luxury_route()
	{
		get_route();

		get_price_per_ticket();

		get_bus_number();

		get_bus_license_plate();
	}

	void add_luxury_reservation(int number)
	{
		seating_plan[number - 1] = "1";
	}

	void cancel_luxury_reservation(int number)
	{
		seating_plan[number - 1] = "0";
	}
};

class Customer_Reservation : public Person, public Economy_Route, public Luxury_Route
{
protected:

	int seat_number;

	string reservation_id;

public:

	Customer_Reservation() :seat_number(0), reservation_id("Null") {}

	void input_reservation_details()
	{
		set_person();
	}

	void set_seat_number(int number)
	{
		seat_number = number;

		reservation_id = full_name + DoB;
	}

	void output_reservation_details()
	{

		cout << "\n\n\n*** RESERVATION DETAILS ***\n\n";

		cout << "\nResevation ID : " << reservation_id << "\n";

		get_person();

		cout << "\nSeat Number : " << seat_number << "\n";

	}

	bool check_null()
	{
		if (reservation_id == "Null")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool check_reservation_ID(string res_id)
	{
		if (reservation_id == res_id)
			return true;
		else 
			return false;
	}

	int get_seat_number()
	{
		return seat_number;
	}

	void del_details()
	{
		reservation_id = "Null";
	
		cnic_number = 0;

		full_name = "Null";

		DoB = "Null";
	}

};

class Controller
{
	Admin administration;
	Economy_Route Eco_Route[3];
	Customer_Reservation C_Isb_Lhe_Eco[40];
	Customer_Reservation C_Isb_Khi_Eco[40];
	Customer_Reservation C_Lhe_Isb_Eco[40];
	Customer_Reservation C_Isb_Lhe_Lux[28];
	Customer_Reservation C_Isb_Khi_Lux[28];
	Customer_Reservation C_Lhe_Isb_Lux[28];
	Luxury_Route Lux_Route[3];
public:
	Controller(Admin adm, Economy_Route Eco[], Luxury_Route Lux[])
	{
		for (int i = 0; i < 3; i++)
		{
			administration = adm;
			Eco_Route[i] = Eco[i];
			Lux_Route[i] = Lux[i];
		}
	}
	void login()
	{
		int opti_1;
		string res_id, usern, pass;
		cout << "\n\n\n\t*** Please Login ***\n";

		cout << "\nEnter Username : "; getline(cin, usern);

		cout << "\nEnter Password : "; getline(cin, pass);

		if (administration.check_log_in(usern, pass))
		{
			cout << "\n*** You are Logged In ****\n";
			Administration_Menu();
		}
		else
		{
			cout << "\n\n*** Login Failed ***\n\n";

			cout << "\n\n\t*** Menu ***\n\n\nPress 1 to Try Again.\n\nPress 2 to Go Back To The Main Menu.\n\nEnter Here : "; cin >> opti_1;

			if (opti_1 == 1)
			{
				cin.ignore();
				login();
			}
			else if (opti_1 == 2)
			{
				main_menu();
			}
			else
			{
				cout << "\nInvalid Option. Please Try Again.\n";
				main_menu();
			}
		}
	}
	void Administration_Menu()
	{
		int opt_1, opt_2;
		cout << "\n\n\t***Administration Menu ***\n\n\nPress 1 to View Current Routes and Seating.\n\nPress 2 to Change Route Details.\n\nPress 3 to View Current Reservations.\n\nPress 4 to Go Back to Main Menu.\n\n";
		cout << "Enter Here : "; cin >> opt_1;
		system("cls");
		if (opt_1 == 1)
		{
			Admin_View_detail();

		}

		else if (opt_1 == 2)
		{
			admin_change_details();
		}
		else if (opt_1 == 3)
		{
			Admin_current_reservation();
		}
		else if (opt_1 == 4)
		{
			main_menu();
		}
		else
		{
			cout << "\nInvalid Option. Please Try Again.\n";
			Administration_Menu();
		}
	}
	void Admin_View_detail()
	{
		int opt_2;
		cout << "\n\n\n\n\n\t*** Menu ***\n\n\nPress 1 to View Details for Islamabad to Lahore (Economy) Route.";
		cout << "\n\nPress 2 to View Details for Islamabad to Karachi (Economy) Route.";
		cout << "\n\nPress 3 to View Details for Lahore to Islamabad (Economy) Route.";
		cout << "\n\nPress 4 to View Details for Islamabad to Lahore (Luxury) Route.";
		cout << "\n\nPress 5 to View Details for Islamabad to Karachi (Luxury) Route.";
		cout << "\n\nPress 6 to View Details for Lahore to Islamabad (Luxury) Route.";
		cout << "\n\nPress 7 to Go Back to the Previous Menu.";
		cout << "\n\nEnter Here : ";
		cin >> opt_2;
		system("cls");
		if (opt_2 == 1)
		{
			cout << "\n\n\n**** JOUNREY NUMBER 1 ***\n";

			Eco_Route[0].get_economy_route();

		}
		else if (opt_2 == 2)
		{

			cout << "\n\n\n*** JOUNREY NUMBER 2 ***\n";

			Eco_Route[1].get_economy_route();
		}

		else if (opt_2 == 3)
		{

			cout << "\n\n\n*** JOUNREY NUMBER 3 ***\n";

			Eco_Route[2].get_economy_route();

		}

		else if (opt_2 == 4)
		{
			cout << "\n\n\n*** JOUNREY NUMBER 4 ***\n";

			Lux_Route[0].output_luxury_route();
		}


		else if (opt_2 == 5)
		{

			cout << "\n\n\n*** JOUNREY NUMBER 5 ***\n";

			Lux_Route[1].output_luxury_route();
		}

		else if (opt_2 == 6)
		{
			cout << "\n\n\n*** JOUNREY NUMBER 6 ***\n";

			Lux_Route[2].output_luxury_route();
		}

		else if (opt_2 == 7)
		{
			Administration_Menu();
		}

		else
		{
			cout << "\nInvalid Option. Please Try Again.\n";
		}

		Admin_View_detail();

	}
	void admin_change_details()
	{
		int opt_2;
		cout << "\n\n\n\n\t*** Menu ***\n\n\nPress 1 to Change Details for Islamabad to Lahore (Economy) Route.";
		cout << "\n\nPress 2 to Change Details for Islamabad to Karachi (Economy) Route.";
		cout << "\n\nPress 3 to Change Details for Lahore to Islamabad (Economy) Route.";
		cout << "\n\nPress 4 to Change Details for Islamabad to Lahore (Luxury) Route.";
		cout << "\n\nPress 5 to Change Details for Islamabad to Karachi (Luxury) Route.";
		cout << "\n\nPress 6 to Change Details for Lahore to Islamabad (Luxury) Route.";
		cout << "\n\nPress 7 to Go Back to the Previous Menu.";
		cout << "\n\nEnter Here : ";
		cin >> opt_2;
		system("cls");
		if (opt_2 == 7)
		{
			Administration_Menu();
		}
		else if (opt_2 >= 1 && opt_2 <= 6)
		{
			admin_change_menu(opt_2);
		}
		else
		{
			admin_change_details();
		}
	}
	void admin_change_menu(int opt_2)
	{
		int opt_3;
		cout << "\n\n\t*** Menu ***\n\n\nPress 1 to Change Bus Number.\n\nPress 2 to Change Bus License Plate Number.\n\nPress 3 to Change Date.\n\nPress 4 to Change Departure Time.\n\nPress 5 to Change Arrival Time.\n\nPress 6 to Change Ticket Price.\n\nPress 7 to Go Back to the Previous Menu.\n\nEnter Here : ";
		cin >> opt_3;
		system("cls");
		if (opt_3 == 7)
		{
			admin_change_details();
		}


		if (opt_2 == 1)
		{
			if (opt_3 == 1)
			{
				Eco_Route[0].set_bus_number();
			}

			else if (opt_3 == 2)
			{
				cin.ignore();
				Eco_Route[0].set_bus_license_plate();
			}

			else if (opt_3 == 3)
			{
				cin.ignore();
				Eco_Route[0].set_date();
			}

			else if (opt_3 == 4)
			{
				cin.ignore();
				Eco_Route[0].set_departure_time();
			}

			else if (opt_3 == 5)
			{
				cin.ignore();
				Eco_Route[0].set_arrival_time();
			}

			else if (opt_3 == 6)
			{
				cin.ignore();
				Eco_Route[0].set_price_per_ticket();
			}
			else
			{
				cout << "\nInvalid Option. Please Try Again.\n";
				admin_change_menu(opt_2);
			}
		}

		else if (opt_2 == 2)
		{
			if (opt_3 == 1)
			{
				Eco_Route[1].set_bus_number();
			}

			else if (opt_3 == 2)
			{
				cin.ignore();
				Eco_Route[1].set_bus_license_plate();
			}

			else if (opt_3 == 3)
			{
				cin.ignore();
				Eco_Route[1].set_date();
			}

			else if (opt_3 == 4)
			{
				cin.ignore();
				Eco_Route[1].set_departure_time();
			}

			else if (opt_3 == 5)
			{
				cin.ignore();
				Eco_Route[1].set_arrival_time();
			}

			else if (opt_3 == 6)
			{
				cin.ignore();
				Eco_Route[1].set_price_per_ticket();
			}
			else
			{
				cout << "\nInvalid Option. Please Try Again.\n";
				admin_change_menu(opt_2);
			}
		}

		else if (opt_2 == 3)
		{
			if (opt_3 == 1)
			{
				Eco_Route[2].set_bus_number();
			}

			else if (opt_3 == 2)
			{
				cin.ignore();
				Eco_Route[2].set_bus_license_plate();
			}

			else if (opt_3 == 3)
			{
				cin.ignore();
				Eco_Route[2].set_date();
			}

			else if (opt_3 == 4)
			{
				cin.ignore();
				Eco_Route[2].set_departure_time();
			}

			else if (opt_3 == 5)
			{
				cin.ignore();
				Eco_Route[2].set_arrival_time();
			}

			else if (opt_3 == 6)
			{
				cin.ignore();
				Eco_Route[2].set_price_per_ticket();
			}
			else
			{
				cout << "\nInvalid Option. Please Try Again.\n";
				admin_change_menu(opt_2);
			}
		}

		else if (opt_2 == 4)
		{
			if (opt_3 == 1)
			{
				Lux_Route[0].set_bus_number();
			}

			else if (opt_3 == 2)
			{
				cin.ignore();
				Lux_Route[0].set_bus_license_plate();
			}

			else if (opt_3 == 3)
			{
				cin.ignore();
				Lux_Route[0].set_date();
			}

			else if (opt_3 == 4)
			{
				cin.ignore();
				Lux_Route[0].set_departure_time();
			}

			else if (opt_3 == 5)
			{
				cin.ignore();
				Lux_Route[0].set_arrival_time();
			}

			else if (opt_3 == 6)
			{
				cin.ignore();
				Lux_Route[0].set_price_per_ticket();
			}
			else
			{
				cout << "\nInvalid Option. Please Try Again.\n";
				admin_change_menu(opt_2);
			}
		}


		else if (opt_2 == 5)
		{
			if (opt_3 == 1)
			{
				Lux_Route[1].set_bus_number();
			}

			else if (opt_3 == 2)
			{
				cin.ignore();
				Lux_Route[1].set_bus_license_plate();
			}

			else if (opt_3 == 3)
			{
				cin.ignore();
				Lux_Route[1].set_date();
			}

			else if (opt_3 == 4)
			{
				cin.ignore();
				Lux_Route[1].set_departure_time();
			}

			else if (opt_3 == 5)
			{
				cin.ignore();
				Lux_Route[1].set_arrival_time();
			}

			else if (opt_3 == 6)
			{
				cin.ignore();
				Lux_Route[1].set_price_per_ticket();
			}
			else
			{
				cout << "\nInvalid Option. Please Try Again.\n";
				admin_change_menu(opt_2);
			}
		}


		else if (opt_2 == 6)
		{
			if (opt_3 == 1)
			{
				Lux_Route[2].set_bus_number();
			}

			else if (opt_3 == 2)
			{
				cin.ignore();
				Lux_Route[2].set_bus_license_plate();
			}

			else if (opt_3 == 3)
			{
				cin.ignore();
				Lux_Route[2].set_date();
			}

			else if (opt_3 == 4)
			{
				cin.ignore();
				Lux_Route[2].set_departure_time();
			}

			else if (opt_3 == 5)
			{
				cin.ignore();
				Lux_Route[2].set_arrival_time();
			}

			else if (opt_3 == 6)
			{
				cin.ignore();
				Lux_Route[2].set_price_per_ticket();
			}
			else
			{
				cout << "\nInvalid Option. Please Try Again.\n";
				admin_change_menu(opt_2);
			}
		}

		else
		{
			cout << "\nInvalid Option. Please Try Again.\n";
			admin_change_details();
		}

		cout << "\n\n*** Changes Successfully Made ***\n\n";

		admin_change_menu(opt_2);

	}
	void Admin_current_reservation()
	{
		int opt_2;
		cout << "\n\n\n\n\t*** Menu ***\n\n\nPress 1 to View Current Reservations for Islamabad to Lahore (Economy) Route.";
		cout << "\n\nPress 2 to View Current Reservations for Islamabad to Karachi (Economy) Route.";
		cout << "\n\nPress 3 to View Current Reservations for Lahore to Islamabad (Economy) Route.";
		cout << "\n\nPress 4 to View Current Reservations for Islamabad to Lahore (Luxury) Route.";
		cout << "\n\nPress 5 to View Current Reservations for Islamabad to Karachi (Luxury) Route.";
		cout << "\n\nPress 6 to View Current Reservations for Lahore to Islamabad (Luxury) Route.";
		cout << "\n\nPress 7 to Go Back to the Previous Menu.";
		cout << "\n\nEnter Here : ";
		cin >> opt_2;
		system("cls");

		int count = 0, i;

		if (opt_2 == 1)
		{
			for (i = 0; i < 40; i++)
			{
				if (!C_Isb_Lhe_Eco[i].check_null())
				{
					C_Isb_Lhe_Eco[i].output_reservation_details();
					++count;
				}
			}

			cout << "\n\n";

			Eco_Route[0].output_economy_seating_plan();

			cout << "\n\n*** TOTAL RESERVATIONS FOR ROUTE : " << count << " ***\n\n";
		}

		else if (opt_2 == 2)
		{
			for (i = 0; i < 40; i++)
			{
				if (!C_Isb_Khi_Eco[i].check_null())
				{
					C_Isb_Khi_Eco[i].output_reservation_details();
					++count;
				}
			}

			cout << "\n\n";

			Eco_Route[1].output_economy_seating_plan();

			cout << "\n\n*** TOTAL RESERVATIONS FOR ROUTE : " << count << " ***\n\n";

		}

		else if (opt_2 == 3)
		{
			for (i = 0; i < 40; i++)
			{
				if (!C_Lhe_Isb_Eco[i].check_null())
				{
					C_Lhe_Isb_Eco[i].output_reservation_details();
					++count;
				}
			}

			cout << "\n\n";

			Eco_Route[2].output_economy_seating_plan();

			cout << "\n\n*** TOTAL RESERVATIONS FOR ROUTE : " << count << " ***\n\n";

		}

		else if (opt_2 == 4)
		{
			for (i = 0; i < 28; i++)
			{
				if (!C_Isb_Lhe_Lux[i].check_null())
				{
					C_Isb_Lhe_Lux[i].output_reservation_details();
					++count;
				}
			}

			cout << "\n\n";

			Lux_Route[0].output_luxury_seating_plan();

			cout << "\n\n*** TOTAL RESERVATIONS FOR ROUTE : " << count << " ***\n\n";

		}

		else if (opt_2 == 5)
		{
			for (i = 0; i < 28; i++)
			{
				if (!C_Isb_Khi_Lux[i].check_null())
				{
					C_Isb_Khi_Lux[i].output_reservation_details();
					++count;
				}
			}

			cout << "\n\n";

			Lux_Route[1].output_luxury_seating_plan();

			cout << "\n\n*** TOTAL RESERVATIONS FOR ROUTE : " << count << " ***\n\n";

		}

		else if (opt_2 == 6)
		{
			for (i = 0; i < 28; i++)
			{
				if (!C_Lhe_Isb_Lux[i].check_null())
				{
					C_Lhe_Isb_Lux[i].output_reservation_details();
					++count;
				}
			}

			cout << "\n\n";

			Lux_Route[2].output_luxury_seating_plan();

			cout << "\n\n*** TOTAL RESERVATIONS FOR ROUTE : " << count << " ***\n\n";

		}

		else if (opt_2 == 7)
		{

			Administration_Menu();
		}

		else
		{
			cout << "\nInvalid Entry. Please Try Again.\n";
		}

		Admin_current_reservation();
	}
	void Eco_seat_availability(int z)
	{
		int opt_1, i;
		do
		{
			cout << "\nEnter Desired Seat Number = "; cin >> opt_1;

			if (opt_1 < 0 || opt_1 > 40)
			{
				cout << "\nInvalid Entry. Please Try Again.\n";

			}
		} while (opt_1 < 0 || opt_1 > 40);

		if (Eco_Route[z].check_economy_seat_availability(opt_1))
		{
			cout << "\n*** SEAT AVALIABLE ***\n";

			for (i = 0; i < 40; i++)
			{
				if (C_Isb_Lhe_Eco[i].check_null())
				{
					C_Isb_Lhe_Eco[i].input_reservation_details();

					C_Isb_Lhe_Eco[i].set_seat_number(opt_1);

					Eco_Route[z].add_economy_reservation(opt_1);

					system("CLS");

					C_Isb_Lhe_Eco[i].output_reservation_details();

					Eco_Route[z].customer_output_economy_route();

					administration.get_company();

					Reserve_a_seat();

				}

			}
		}

		else
		{
			cout << "\nYou have Chosen a seat that is not available. Please try again,\n";
			Eco_seat_availability(z);
		}

	}
	void Lux_seat_availability(int z)
	{
		int opt_1, i;
		do
		{
			cout << "\nEnter Desired Seat Number = "; cin >> opt_1;

			if (opt_1 < 0 || opt_1 > 28)
			{
				cout << "\nInvalid Entry. Please Try Again.\n";

			}
		} while (opt_1 < 0 || opt_1 > 28);

		if (Lux_Route[z].check_luxury_seat_availability(opt_1))
		{
			cout << "\n*** SEAT AVALIABLE ***\n";

			for (i = 0; i < 28; i++)
			{
				if (C_Isb_Lhe_Lux[i].check_null())
				{
					C_Isb_Lhe_Lux[i].input_reservation_details();

					C_Isb_Lhe_Lux[i].set_seat_number(opt_1);

					Lux_Route[z].add_luxury_reservation(opt_1);

					system("CLS");

					C_Isb_Lhe_Lux[i].output_reservation_details();

					Lux_Route[z].customer_output_luxury_route();

					administration.get_company();

					Reserve_a_seat();

				}
			}


		}

		else
		{
			cout << "\nYou have Chosen a seat that is not available. Please try again,\n";
			Lux_seat_availability(z);
		}

	}
	void Reserve_a_seat()
	{
		int opt, opt_1, i;
		cout << "\n\n\n\n\t*** Menu ***\n\nPress 1 to Reserve Seat in Islamabad to Lahore Economy Route.\n\nPress 2 to Reserve Seat in Islamabad to Karachi Economy Route. \n\nPress 3 to Reserve Seat in for Lahore to Islamabad Economy Route. \n\nPress 4 to Reserve Seat in Islamabad to Lahore Luxury Route. \n\nPress 5 to Reserve Seat in Islamabad to Karachi Luxury Route.\n\nPress 6 to Reserve Seat in Lahore to Islamabad Luxury Route.\n\nPress 7 to Go Back to Previous Menu.\n\nEnter Here : ";
		cin >> opt;

		system("CLS");

		if (opt == 1)
		{

			cout << "\n\n*** Islamabad to Lahore (Economy) Route ***\n\n";

			Eco_Route[0].output_economy_seating_plan();
			Eco_seat_availability(0);

		}

		else if (opt == 2)
		{

			cout << "\n\n*** Islamabad to Karachi (Economy) Route ***\n\n";

			Eco_Route[1].output_economy_seating_plan();
			Eco_seat_availability(1);

		}

		else if (opt == 3)
		{

			cout << "\n\n*** Lahore to Islamabad (Economy) Route ***\n\n";

			Eco_Route[2].output_economy_seating_plan();
			Eco_seat_availability(2);

		}

		else if (opt == 4)
		{

			cout << "\n\n*** Islamabad to Lahore (Luxury) Route ***\n\n";

			Lux_Route[0].output_luxury_seating_plan();
			Lux_seat_availability(0);
		}

		else if (opt == 5)
		{

			cout << "\n\n*** Islamabad to Karachi (Luxury) Route ***\n\n";

			Lux_Route[1].output_luxury_seating_plan();
			Lux_seat_availability(1);

		}



		else if (opt == 6)
		{
			cout << "\n\n*** Lahore to Islamabad (Luxury) Route ***\n\n";

			Lux_Route[2].output_luxury_seating_plan();
			Lux_seat_availability(2);

		}

		else if (opt == 7)
		{
			Customer_menu();
		}

		else
		{
			cin.ignore();
			cout << "\nInvalid Entry. Please Try Again.\n";
			Reserve_a_seat();

		}
	}
	void View_reserve_seat()
	{
		string res_id;
		int i;
		cout << "\nEnter Reservation ID You Want To View : "; getline(cin, res_id);

		system("CLS");

		for (i = 0; i < 40; i++)
		{
			if (C_Isb_Lhe_Eco[i].check_reservation_ID(res_id))
			{

				C_Isb_Lhe_Eco[i].output_reservation_details();

				Eco_Route[0].customer_output_economy_route();

				Customer_menu();

			}

			else if (C_Isb_Khi_Eco[i].check_reservation_ID(res_id))
			{

				C_Isb_Khi_Eco[i].output_reservation_details();

				Eco_Route[1].customer_output_economy_route();

				Customer_menu();

			}

			else if (C_Lhe_Isb_Eco[i].check_reservation_ID(res_id))
			{

				C_Lhe_Isb_Eco[i].output_reservation_details();

				Eco_Route[2].customer_output_economy_route();

				Customer_menu();

			}
		}

		for (i = 0; i < 28; i++)
		{
			if (C_Isb_Lhe_Lux[i].check_reservation_ID(res_id))
			{
				C_Isb_Lhe_Lux[i].output_reservation_details();

				Lux_Route[0].customer_output_luxury_route();

				Customer_menu();

			}

			else if (C_Isb_Khi_Lux[i].check_reservation_ID(res_id))
			{

				C_Isb_Khi_Lux[i].output_reservation_details();

				Lux_Route[1].customer_output_luxury_route();

				Customer_menu();

			}

			else if (C_Lhe_Isb_Lux[i].check_reservation_ID(res_id))
			{
				C_Lhe_Isb_Lux[i].output_reservation_details();

				Lux_Route[2].customer_output_luxury_route();

				Customer_menu();

			}
		}
		cout << "\nEntered reservation ID does not exist.";
		invalid_entry();

	}
	void invalid_entry()
	{
		int op;
		cout << "\n\nPress 1 to Try Again.\n\nPress 2 to go Back to Customer Menu.\n\nPress 3 to go to Main Menu.\n\nEnter Here : "; cin >> op;
		if (op == 1)
		{
			cin.ignore();

			View_reserve_seat();
		}
		else if (op == 2)
		{
			Customer_menu();
		}
		else if (op == 3)
		{
			main_menu();
		}

		else
		{
			cin.ignore();
			cout << "\n\nInvalid Entry. Please Try Again.\n\n";
			invalid_entry();
		}

	}
	void Cancel_Reservation()
	{
		string res_id;
		int i, seat_no;
		cin.ignore();
		cout << "\n\n\tCancel Reservation****\n\n";
		cout << "\nEnter Reservation ID You Want to Cancel : "; getline(cin, res_id);

		for (i = 0; i < 40; i++)
		{
			if (C_Isb_Lhe_Eco[i].check_reservation_ID(res_id))
			{
				system("CLS");

				seat_no = C_Isb_Lhe_Eco[i].get_seat_number();

				Eco_Route[0].cancel_economy_reservation(seat_no);

				C_Isb_Lhe_Eco[i].del_details();

				cout << "\n*** Reservation Successfully Cancelled ***\n";

				Customer_menu();

			}

			else if (C_Isb_Khi_Eco[i].check_reservation_ID(res_id))
			{
				system("CLS");

				seat_no = C_Isb_Khi_Eco[i].get_seat_number();

				Eco_Route[1].cancel_economy_reservation(seat_no);

				C_Isb_Khi_Eco[i].del_details();

				cout << "\n*** Reservation Successfully Cancelled ***\n";

				Customer_menu();

			}

			else if (C_Lhe_Isb_Eco[i].check_reservation_ID(res_id))
			{
				system("CLS");

				seat_no = C_Lhe_Isb_Eco[i].get_seat_number();

				Eco_Route[2].cancel_economy_reservation(seat_no);

				C_Lhe_Isb_Eco[i].del_details();

				cout << "\n*** Reservation Successfully Cancelled ***\n";

				Customer_menu();

			}
		}

		for (i = 0; i < 28; i++)
		{
			if (C_Isb_Lhe_Lux[i].check_reservation_ID(res_id))
			{
				system("CLS");

				seat_no = C_Isb_Lhe_Lux[i].get_seat_number();

				Lux_Route[0].cancel_luxury_reservation(seat_no);

				C_Isb_Lhe_Lux[i].del_details();

				cout << "\n*** Reservation Successfully Cancelled ***\n";

				Customer_menu();
			}

			else if (C_Isb_Khi_Lux[i].check_reservation_ID(res_id))
			{
				system("CLS");

				seat_no = C_Isb_Khi_Lux[i].get_seat_number();

				Lux_Route[1].cancel_luxury_reservation(seat_no);

				C_Isb_Khi_Lux[i].del_details();

				cout << "\n*** Reservation Successfully Cancelled ***\n";

				Customer_menu();

			}

			else if (C_Lhe_Isb_Lux[i].check_reservation_ID(res_id))
			{
				system("CLS");

				seat_no = C_Lhe_Isb_Lux[i].get_seat_number();

				Lux_Route[2].cancel_luxury_reservation(seat_no);

				C_Lhe_Isb_Lux[i].del_details();

				cout << "\n*** Reservation Successfully Cancelled ***\n";

				Customer_menu();

			}
		}
		cout << "\nEntered reservation ID does not exist.";
		cancel_invalid();


	}
	void cancel_invalid()
	{
		int opti;
		cout << "\n\nPress 1 to Try Again.\n\nPress 2 to go Back to Main Menu.\n\nEnter Here : ";
		cin >> opti;
		if (opti == 1)
		{

			Cancel_Reservation();
		}

		else if (opti == 2)
		{
			Customer_menu();
		}

		else
		{
			cin.ignore();
			cout << "\n\nInvalid Entry. Please Try Again.\n\n";
			cancel_invalid();
		}
	}
	void Customer_menu()
	{
		int opt_2;
		cout << "\n\n\n\t*** Customer Menu ***\n\n\nPress 1 to View All Routes and Available Seats.\n\nPress 2 to Reserve Seat\n\nPress 3 to View a Reserved Seat\n\nPress 4 to Cancel a Reservation\n\nPress 5 to Go Back to Main Menu\n\nEnter Here : ";
		cin >> opt_2;
		system("cls");
		if (opt_2 == 1)
		{
			Customer_View_detail();
		}
		else if (opt_2 == 2)
		{
			Reserve_a_seat();
		}
		else if (opt_2 == 3)
		{
			cin.ignore();
			View_reserve_seat();
		}
		else if (opt_2 == 4)
		{
			Cancel_Reservation();
		}
		else if (opt_2 == 5)
		{
			main_menu();
		}
		else
		{
			cout << "\nInvalid Option. Please Try Again.\n";
			Customer_menu();
		}
	}
	void Customer_View_detail()
	{
		int opt_2;
		cout << "\n\n\n\n\n\t*** View Details ***\n\n\n";
		cout << "Press 1 to View Details for Islamabad to Lahore(Economy) Route.";
		cout << "\n\nPress 2 to View Details for Islamabad to Karachi(Economy) Route.";
		cout << "\n\nPress 3 to View Details for Lahore to Islamabad (Economy) Route.";
		cout << "\n\nPress 4 to View Details for Islamabad to Lahore(Luxury) Route.";
		cout << "\n\nPress 5 to View Details for Islamabad to Karachi(Luxury) Route.";
		cout << "\n\nPress 6 to View Details for Lahore to Islamabad (Luxury) Route.";
		cout << "\n\nPress 7 to Go Back to the Previous Menu.";
		cout << "\n\nEnter Here : ";
		cin >> opt_2;
		system("cls");
		if (opt_2 == 1)
		{
			cout << "\n\n\n**** JOUNREY NUMBER 1 ***\n";
			Eco_Route[0].get_economy_route();
		}
		else if (opt_2 == 2)
		{
			cout << "\n\n\n*** JOUNREY NUMBER 2 ***\n";
			Eco_Route[1].get_economy_route();
		}
		else if (opt_2 == 3)
		{
			cout << "\n\n\n*** JOUNREY NUMBER 3 ***\n";
			Eco_Route[2].get_economy_route();
		}
		else if (opt_2 == 4)
		{
			cout << "\n\n\n*** JOUNREY NUMBER 4 ***\n";
			Lux_Route[0].output_luxury_route();
		}


		else if (opt_2 == 5)
		{

			cout << "\n\n\n*** JOUNREY NUMBER 5 ***\n";

			Lux_Route[1].output_luxury_route();
		}

		else if (opt_2 == 6)
		{
			cout << "\n\n\n*** JOUNREY NUMBER 6 ***\n";

			Lux_Route[2].output_luxury_route();
		}

		else if (opt_2 == 7)
		{
			Customer_menu();
		}

		else
		{
			cout << "\nInvalid Option. Please Try Again.\n";
		}

		Customer_View_detail();

	}
	void main_menu()
	{
		system("cls");

		cout << "\n\n\t\t\t*** DAEWOO BUS RESERVATION MANAGEMENT ***\n\n";

		char x;
		cout << "\n\n\t*** Main Menu ***\n\n\nPress 1 for Administration Menu.\n\nPress 2 for Customer Menu.\n\nPress 3 to for Contact Details.\n\nEnter Here : "; cin >> x;
		system("cls");

		cin.ignore();

		if (x == '1')
		{
			login();
		}
		else if (x == '2')
		{
			Customer_menu();
		}
		if (x == '3')
		{
			administration.get_company();
			cout << "\n\n\nPress any key to go back to main menu: "; cin >> x;
			main_menu();
		}
		else
		{
			cout << "\nInvalid Entry. Please Try Again.\n";
			main_menu();
		}

		cout << "\n\n";
	}
};
class controller_on
{
	Admin administration;
	Economy_Route Eco_Route[3];
	Luxury_Route Lux_Route[3];
	public:
	controller_on()
	{
		administration = { 61478596, "Sadia Ahmad", "18/10/00", "Admin_1", "Admin_1", "passadmin1" };
		Eco_Route[0] = { 1, "PK 147", "Islamabad", "Lahore", "8:00 A.M.", "1:00 P.M.", "8th June, 2019", 1200.00 };
		Eco_Route[1] = { 1, "PK 789", "Islamabad", "Karachi", "7:00 A.M.", "11:00 P.M.", "8th June, 2019", 4000.00 };
		Eco_Route[2] = { 1, "PK 149", "Lahore", "Islamabad", "8:00 A.M.", "1:00 P.M.", "8th June, 2019", 1200.00 };
		Lux_Route[0] = { 1, "PK 178", "Islamabad", "Lahore", "9:00 A.M.", "2:00 P.M.", "9th June, 2019", 1800.00 };
		Lux_Route[1] = { 1, "PK 852", "Islamabad", "Karachi", "8:00 A.M.", "12:00 P.M.", "9th June, 2019", 5000.00 };
		Lux_Route[2] = { 1, "PK 235", "Lahore", "Islamabad", "9:00 A.M.", "2:00 P.M.", "9th June, 2019", 1800.00 };
	}
	void start_controller()
	{
		Controller bus_res_system(administration, Eco_Route, Lux_Route);
		bus_res_system.main_menu();
	}
};
int main()
{
	controller_on co;
	co.start_controller();
	system("pause");
}
