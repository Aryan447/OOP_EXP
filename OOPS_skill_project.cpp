
#include <iostream>
#include<vector>
using namespace std;

class contact{
	private:
		string name;
		string phone;
		string email;
	public:
		contact(string name, string phone, string email){
			this->name = name;
			this->phone = phone;
			this->email = email;
		}
		void print(){
			cout << "Name: " << name << endl;
			cout << "Phone: " << phone << endl;
			cout << "Email: " << email << endl<<endl;
		}
};

void add_contact(vector<contact> &contacts){
	string name, phone, email;
	cout << "\nEnter name: ";
	cin >> name;
	cout << "Enter phone: ";
	cin >> phone;
	cout << "Enter email: ";
	cin >> email;
	cout<<endl;
	contacts.push_back(contact(name, phone, email));
}

void delete_contact(vector<contact> &contacts){
	int index;
	cout << "Enter index of contact to delete: ";
	cin >> index;
	contacts.erase(contacts.begin() + index);
}

void contact_amount(vector<contact> &contacts){
	cout << "There are " << contacts.size() << " contacts in the list\n" << endl;
}

int main(){
	vector<contact> contacts;
	int choice;
	while(1){
		cout << "1. Add contact" << endl;
		cout << "2. Delete contact" << endl;
		cout << "3. Print contact list" << endl;
		cout << "4. Print contact amount" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter choice: ";
		cin >> choice;
		switch(choice){
			case 1:
				add_contact(contacts);
				break;
			case 2:
				delete_contact(contacts);
				break;
			case 3:
				for(int i = 0; i < contacts.size(); i++){
					cout<<"\nContact "<<i+1<<endl;
					contacts[i].print();
				}
				break;
			case 4:
				contact_amount(contacts);
				break;
			case 5:
				return 0;
				break;
			default:
				cout << "Invalid choice." << endl;
		}
	}
}