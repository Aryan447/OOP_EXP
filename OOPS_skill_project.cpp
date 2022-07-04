#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class contact{
	public:
		string name;
		string phone;
		string email;
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
	cout<<"Contact deleted successfully"<<endl;
}

void contact_amount(vector<contact> &contacts){
	cout << "There are " << contacts.size() << " contacts in the list\n" << endl;
}

int main(){
	vector<contact> contacts;
    ofstream out;
	int choice;
	while(1){
		cout << "1. Add contact" << endl;
		cout << "2. Delete contact" << endl;
        cout << "3. Edit contact" <<endl;
		cout << "3. Print contact list" << endl;
		cout << "4. Print contact amount" << endl;
        cout << "5. To Save contact in txt file" << endl;
		cout << "6. Exit" << endl;
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
            int edit;
            cout<<"Enter index of contact to edit: ";
            cin>>edit;
            cout<<"Enter new name: ";
            cin>>contacts[edit].name;
            cout<<"Enter new phone: ";
            cin>>contacts[edit].phone;
            cout<<"Enter new email: ";
            cin>>contacts[edit].email;
            cout<<"Contact edited successfully"<<endl;
            break;
			case 4:
				for(int i = 0; i < contacts.size(); i++){
					cout<<"\nContact "<<i+1<<endl;
					contacts[i].print();
				}
				break;
			case 5:
				contact_amount(contacts);
				break;
            case 6:
                out.open("contact_list.txt");
                for(int i = 0; i < contacts.size(); i++){
                    out<<"Contact "<<i+1<<" ="<<endl;
                    out<<"Name: "<<contacts[i].name<<endl;
                    out<<"Phone Number: "<<contacts[i].phone<<endl;
                    out<<"Email: "<<contacts[i].email<<endl;
                }
                cout<<"Contact list saved in contact_list.txt"<<endl<<endl;
                break;
			case 7:
				return 0;
				break;
			default:
				cout << "Invalid choice." << endl;
		}
	}
}
