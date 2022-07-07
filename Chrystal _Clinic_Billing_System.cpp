#include<iostream>
#include<string>
using namespace std;

struct package {
	string pack_no;
	string pack_id;
	string pack_name;
	float pack_price;
};

void main_menu();
void login();
void packageinfo();
void view_pack(package);
void sel_pack();
void cal_items();

package pack[11];

void main() {
	string username1, password1, username2, password2;
	login();


}
void login() {
	string un, pw, username1 = "user1", password1 = "user123", username2 = "user2", password2 = "user456";
	cout << "\n";
	cout << "\t\t=======================================" << endl;
	cout << "\n";
	cout << "\t\t****WELCOME TO THE CHRYSTAL CLINIC****" << endl;
	cout << "\t\t\t*** BILLING SYSTEM ***" << endl;
	cout << "\n";
	cout << "\t\t=======================================" << endl;
	cout << "\n";

	cout << "\t\t\tEnter username: ";
	cin >> un;
	if (un == username1) {
		cout << "\n";
		cout << "\t\t\tEnter password: ";
		cin >> pw;

		if (pw == password1) {
			cout << "\n";
			cout << "\t\t\tLogin successfully!" << endl << endl;
			system("pause");
			system("cls");
			return main_menu();
		}
		else {
			cout << "\n";
			cout << "\t\t\tIncorrect password!" << endl << endl;
		}
	}
	else if (un == username2) {
		cout << "\n";
		cout << "\t\t\tEnter password: ";
		cin >> pw;

		if (pw == password2) {
			cout << "\n";
			cout << "\t\t\tLogin successfully!" << endl;
			system("pause");
			system("cls");
			return main_menu();
		}
		else {
			cout << "\n";
			cout << "\t\t\tIncorrect password!" << endl << endl;
		}
	}
	else {
		cout << "\n";
		cout << "\t\t\tIncorrect username!" << endl << endl;
	}

}

void main_menu() {
	system("cls");
	int op;
	cout << "\n";
	cout << "\t\t=======================================" << endl;
	cout << "\n";
	cout << "\t\t*** CHRYSTAL CLINIC BILLING SYSTEM ***" << endl;
	cout << "\n";
	cout << "\t\t=======================================\n" << endl;
	cout << "\t\t____Select option____\n";
	cout << "\n";
	cout << "\t\t1: View all packages and Select" << endl;
	cout << "\n";
	cout << "\t\t2: Calculate bill " << endl;
	cout << "\n";
	cout << "\t\t3: Exit " << endl;
	cout << "\n";
	cout << "\t\t Press 0 to Login as another user:";
	cout << "\n";
	cout << " \t\t Enter your option: ";

	cin >> op;
	if (op == 1) {
		system("cls");
		return packageinfo();
	}
	else if (op == 2) {
		system("cls");
		return cal_items();
	}
	else if (op == 3) {
		system("cls");
	}
	else if (op == 0)
	{
		system("cls");
		login();
	}
	else {
		cout << "\n";
		cout << "\t\t\t Invalid option!" << endl;
	}
}

int packsize;
package packlist[15];
void sel_pack() {
	string num;
	cout << endl;
	cout << "\n";
	cout << endl << "\t\t 0. Main Menu " << endl;
	cout << "\n";
	cout << "\t\t 1. Exit Menu " << endl;
	cout << "\n";
	cout << "\t\t 2. Select Packages" << endl;
	cout << endl << "\t\t Enter your option :";
	cin >> num;

	cout << "\n";
	cout << "\n";
	if (num == "0") {
		system("cls");
		main_menu();
	}
	else if (num == "1") {
		system("pause");
	}
	else if (num == "2") {
		cout << "_______________________________________________________________________________\n\n";
		cout << "\tEnter package name or first three letters of the package to select: ";
		cin >> num;
		int c = 0;
		while (num != "0") {

			if (num == "Acn" || num == "Acne" || num == "acn") {
				packlist[c] = { pack[0] };
				cout << "\n";
				cout << "\t Package ID: \t" << pack[0].pack_id << endl << "\t Package Name: " << pack[0].pack_name << endl;
				c = c + 1;
				++packsize;
			}
			else if (num == "Bur" || num == "Burns" || num == "bur") {
				packlist[c] = { pack[1] };
				cout << "\n";
				cout << "\t Package ID: \t" << pack[1].pack_id << endl << "\t Package Name: " << pack[1].pack_name << endl;
				c = c + 1;
				++packsize;
			}
			else if (num == "Ker" || num == "Keratosis" || num == "ker") {
				packlist[c] = { pack[2] };
				cout << "\n";
				cout << "\t Package ID: \t" << pack[2].pack_id << endl << "\t Package Name: " << pack[2].pack_name << endl;
				c = c + 1;
				++packsize;
			}
			else if (num == "Ope" || num == "Open" || num == "ope") {
				packlist[c] = { pack[3] };
				cout << "\n";
				cout << "\t Package ID: " << pack[3].pack_id << endl << "\t Package Name: " << pack[3].pack_name << endl;
				c = c + 1;
				++packsize;
			}
			else if (num == "Xan" || num == "Xanthelasma" || num == "xan") {
				packlist[c] = { pack[4] };
				cout << "\n";
				cout << "\t Package ID: \t" << pack[4].pack_id << endl << "\t Package Name: " << pack[4].pack_name << endl;
				c = c + 1;
				++packsize;
			}
			else if (num == "Sca" || num == "Scalp" || num == "sca") {
				packlist[c] = { pack[5] };
				cout << "\n";
				cout << "\t Package ID: \t" << pack[5].pack_id << endl << "\t Package Name: " << pack[5].pack_name << endl;
				c = c + 1;
				++packsize;
			}
			else if (num == "Low" || num == "Low" || num == "low") {
				packlist[c] = { pack[6] };
				cout << "\n";
				cout << "\t Package ID: " << pack[6].pack_id << endl << "\t Package Name: " << pack[6].pack_name << endl;
				c = c + 1;
				++packsize;
			}
			else if (num == "PRP" || num == "PRP" || num == "prp") {
				packlist[c] = { pack[7] };
				cout << "\n";
				cout << "\t Package ID: \t" << pack[7].pack_id << endl << "\t Package Name: " << pack[7].pack_name << endl;
				c = c + 1;
				++packsize;
			}
			else if (num == "EMS" || num == "EMS" || num == "ems") {
				packlist[c] = { pack[8] };
				cout << "\n";
				cout << "\t Package ID: \t" << pack[8].pack_id << endl << "\t Package Name: " << pack[8].pack_name << endl;
				c = c + 1;
				++packsize;
			}
			else if (num == "War" || num == "Warts" || num == "war") {
				packlist[c] = { pack[9] };
				cout << "\n";
				cout << "\t Package ID: \t" << pack[9].pack_id << endl << "\t Package Name: " << pack[9].pack_name << endl;
				c = c + 1;
				++packsize;
			}
			else if (num == "Sen" || num == "Sensitive" || num == "sen") {
				packlist[c] = { pack[10] };
				cout << "\n";
				cout << "\t Package ID: \t" << pack[10].pack_id << endl << "\t Package Name: " << pack[10].pack_name << endl;
				c = c + 1;
				++packsize;
			}

			else {
				cout << "\n";
				cout << "\t Invalid package ID!" << endl;
			}

			cout << endl;
			cout << "\tEnter package name or first three letters of the package to select: ";
			cin >> num;
		}
		main_menu();
	}
	else {
		cout << "\t\n Invalid option!" << endl;
		{
			main_menu();
			system("cls");
		}
	}
}

void cal_items() {
	string num;
	int quantity;
	float total = 0.00;

	system("cls");
	cout << "\n";
	cout << "\t\t===================================================" << endl;
	cout << "\n";
	cout << "\t\t********* CHRYSTAL CLINIC BILLING SYSTEM *********" << endl;
	cout << "\n";
	cout << "\t\t===================================================" << endl;
	cout << "\t\t _____________*** Calculate bill ***_____________" << endl;
	cout << "\n";
	cout << "\n";
	cout << "\t\t Amount \tMenu Item  \t\tPrice(Rs.)" << endl;

	for (int c = 0; c < packsize; ++c) {
		quantity = 1;
		for (int a = c + 1; a < packsize; ++a) {
			if (packlist[c].pack_id == packlist[a].pack_id) {
				quantity = quantity + 1;
				packlist[c].pack_price += packlist[c].pack_price;
				packlist[a].pack_id = "duplicate";
			}
		}
		if (packlist[c].pack_id != "duplicate") {
			total = total + packlist[c].pack_price;
			cout << "\t\t " << quantity << "\t\t" << packlist[c].pack_name << packlist[c].pack_price << endl;
		}
	}

	cout << "\n\n" << "\t\t\tAmount Due \t\t\t Rs." << total << endl;
	cout << "\n";
	cout << "\t\t*****************************************************" << endl;

	cout << "\n";
	cout << endl << "\t\t 0. Main Menu " << endl;
	cout << "\t\t 1. Exit Menu " << endl;
	cout << "\t\t Enter your option: ";
	cin >> num;
	cout << "\n";
	if (num == "0") {
		main_menu();
	}
	else if (num == "1") {
		cout << "\n \t\t Thank you for using the system! \n";
		system("pause");
	}
	else {
		cout << "\n \t\t Invalid option! " << endl;
	}
}

void view_pack(package p) {

	cout << "\t" << p.pack_id << "\t" << p.pack_name << "\t" << p.pack_price << endl << endl;
}

void packageinfo() {

	pack[0].pack_id = "SKNACN01";
	pack[0].pack_name = "Acne \t\t\t\t";
	pack[0].pack_price = 3000.00;

	pack[1].pack_id = "SKNBNS02";
	pack[1].pack_name = "Burns scar \t\t\t";
	pack[1].pack_price = 4500.00;

	pack[2].pack_id = "SKNKPS03";
	pack[2].pack_name = "Keratosis Pilaris \t\t";
	pack[2].pack_price = 4500.00;

	pack[3].pack_id = "SKNOPS04";
	pack[3].pack_name = "Open Pores \t\t\t";
	pack[3].pack_price = 3800.00;

	pack[4].pack_id = "SKNXPA05";
	pack[4].pack_name = "Xanthelasma Palpebrarum \t";
	pack[4].pack_price = 5500.00;

	pack[5].pack_id = "HRIMSTI02";
	pack[5].pack_name = "Scalp Micropigmentation Stimulation";
	pack[5].pack_price = 40000.00;

	pack[6].pack_id = "HRILLT03";
	pack[6].pack_name = "Low Level Light Therapy \t";
	pack[6].pack_price = 28000.00;

	pack[7].pack_id = "HRIPRP04";
	pack[7].pack_name = "PRP For Hair Loss Treatment \t";
	pack[7].pack_price = 35000.00;

	pack[8].pack_id = "BDYEMS01";
	pack[8].pack_name = "EMS body toning \t\t";
	pack[8].pack_price = 15000.00;

	pack[9].pack_id = "SKNWTS06";
	pack[9].pack_name = "Warts \t\t\t\t";
	pack[9].pack_price = 4800.00;

	pack[10].pack_id = "SKNSDT07";
	pack[10].pack_name = "Sensitive Skin Dermal Therapy \t";
	pack[10].pack_price = 10000.00;

	system("cls");
	cout << "\n";
	cout << "\t Option 1:" << endl;
	cout << "\n";
	cout << "\t\t\t*** CHRYSTAL CLINIC BILLING SYSTEM ***" << endl;
	cout << "\n";
	cout << "\tPackage ID \t Package Name \t\t\t     Price (Rs.)" << endl;
	cout << endl;
	for (int c = 0; c < 11; ++c) {
		view_pack(pack[c]);
	}
	sel_pack();
}
