#include "stdlib.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
//these two headers are already included in the <Windows.h> header
#pragma comment(lib, "Winmm.lib")
using namespace std;

int main() {
	ifstream pswdchk ("OSIUser.setting");
	string Password[5];
	string Passload[5];
	string NormPass;
	string tocmd;
	int Chickenvar=0;
	int CMD=1;
	string Choice;
	string Title;
	string style = "-";
	string Bdr = "";
	string Columnten = "";
	string Columnten1 = "";
	string Columnten2 = "";
	string WaitColumn = "";
	std::string opt1;
	std::string opt2;
	std::string opt3;
	std::string opt4;
	std::string opt5;
	std::string opt6;
	std::string opt7;
	std::string opt8;
	std::string opt9;
	std::string opt10;
	std::string opt11;
loop:
		system("color 3b");
		if(CMD==0) {
		cout <<"Invalid Command.\n\n>";
	}
	if (Chickenvar==1) {
		cout << "\n\nChicken 'style' to chicken a stylish chicken test. Chicken 'exit' to chicken\nprogram. KFC is love, KFC is life.\n\nCHICKEN GOES HERE>";
	}
		if (CMD==1) {
		if (Chickenvar==0) {
			cout <<"OBCLS Version 0.3\nType exit to quit.\n\n>";
		}
	}
	CMD=0;

	cin >>Choice;
	if(Choice=="exit") {
		goto loopend;
	}
	if(Choice=="style") {
		using namespace std; //It seems I need it here too?
		CMD=1;
		system("color 2e");
		system("CLS");
		opt1 = "\n1:                     Style 1";
		opt2 = "\n2:                     Style 2";
		opt3 = "\n3:                     Style 3";
		opt4 = "\n4:                     Style 4";
		opt5 = "\n5:                     Style 5";
		opt6 = "\n6:                    No Style";
		std::cout << "Hello!" << "\nThis is a test of the OIS Styling System..." << "\nChoose a style:" << opt1 << opt2 << opt3 << opt4 << opt5 << opt6 <<"\n";
		std::string Choice = "";
ChoiceRetry:

		cout << "\n>";
		cin >> Choice;
		if (Choice == "6") {
			cout << "Viewing styleless window:\n\n";
			goto ChoiceYes;
		}

		cout << "\n\n";
		if (Choice == "1") {
			Columnten = "----------";
			Columnten1 = " ----------";
			Columnten2 = "---------";
			Bdr = "| ";
			WaitColumn = " ---------PRESS--ENTER--------";
			style = "1";
			goto ChoiceYes;
		}
		if (Choice == "2") {
			Columnten = "          ";
			Columnten1 = "o         ";
			Columnten2 = "          o";
			Bdr = " ";
			WaitColumn = "o         PRESS  ENTER        o";
			style = "2";
			goto ChoiceYes;
		}
		if (Choice == "3") {
			Columnten = "//////////";
			Columnten1 = "//////////";
			Columnten2 = "//////////";
			Bdr = "/";
			WaitColumn = "/////////PRESS  ENTER/////////";
			style = "3";
			goto ChoiceYes;
		}
		if (Choice == "4") {
			Columnten = "==========";
			Columnten1 = "==========";
			Columnten2 = "==========";
			Bdr = "=";
			WaitColumn = "=========PRESS==ENTER=========";
			style = "4";
			goto ChoiceYes;
		}
		if (Choice == "5") {
			Columnten = "##########";
			Columnten1 = " #########";
			Columnten2 = "######### ";
			Bdr = "#";
			WaitColumn = " ####### PRESS  ENTER ####### ";
			style = "5";
			goto ChoiceYes;
		}
		cout << "Invalid input.";
		goto ChoiceRetry;
ChoiceYes:
		Title = " EXAMPLE: ";
		//string ColumnTitle = Columnten1, Title, Columnten2;(USE COUT)
		//string Column = Columnten1, Columnten, Columnten2; (USE COUT)
		cout << Columnten1<< Title<< Columnten2 << "\n" ;
		string TYPE = "This is an example window   ";
		cout << Bdr<< TYPE<< Bdr<< "\n";
		TYPE = "         for style ";
		cout << Bdr<< TYPE<< style ;
		TYPE = ".       ";
		cout << TYPE<<Bdr<< "\n";
		cout << WaitColumn;





		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cin.get();
		system("CLS");
	}
	if (Choice=="Chicken"){
		if(Chickenvar==0){	
		Chickenvar=1;
		cout<<"Chicken Mode Enabled";
		goto Chicken_toggle_end;
	}
		if(Chickenvar==1){
		Chickenvar=0;
		goto Chicken_toggle_end;
		cout<<"Chicken Mode Disabled";
		}
		Chicken_toggle_end:
		CMD=1;
		goto loop;
	}
	if (Choice=="cmd"){
		system("CLS");
		system("color 6e");
		cout <<"This will not work on systems with a disabled command prompt\n\n";
		system("cmd");
		CMD=1;
		system("CLS");
	}
	if (Choice=="help"){
		CMD=1;
		cout<<"To run commands using CMD, type 'cmd'.\nTo test the styling system, type 'style'.\nTo exit the program, type 'exit'.\nTo run the GUI, type 'OSI'.\n\n";
		
	}
	if (Choice=="OSI"){
		Styleloop:
		system("CLS");
		system("color 2a");
		cout<<"\n\nChoose the system style.\nEnter 1-5, 6 for no style:";
		cin>>Choice;
		if (Choice == "1") {
			Columnten = "----------";
			Columnten1 = " ----------";
			Columnten2 = "---------";
			Bdr = "| ";
			WaitColumn = "- - - - - - - - - - - - - - - - - - - - - - - - - ";
			style = "1";
			goto Styleend;
		}
		if (Choice == "2") {
			Columnten = "          ";
			Columnten1 = "o         ";
			Columnten2 = "          o";
			Bdr = " ";
			WaitColumn = "o                                               o";
			style = "2";
			goto Styleend;
		}
		if (Choice == "3") {
			Columnten = "//////////";
			Columnten1 = "//////////";
			Columnten2 = "//////////";
			Bdr = "/";
			WaitColumn = "//////////////////     ++++     ////////////////";
			style = "3";
			goto Styleend;
		}
		if (Choice == "4") {
			Columnten = "==========";
			Columnten1 = "==========";
			Columnten2 = "==========";
			Bdr = "=";
			WaitColumn = "================================================";
			style = "4";
			goto Styleend;
		}
		if (Choice == "5") {
			Columnten = "##########";
			Columnten1 = " #########";
			Columnten2 = "######### ";
			Bdr = "#";
			WaitColumn = " ############################################## ";
			style = "5";
			goto Styleend;
		}
		if (Choice == "6") {
		string style = "-";
		string Bdr = " ";
		string Columnten = " ";
		string Columnten1 = " ";
		string Columnten2 = " ";
		string WaitColumn = " ";
		goto Styleend;
		}
		goto Styleloop;
		Styleend:
		OSImainloop:
	system("CLS");	
	opt1 = "                                              ";
	opt2 = "                 OSI v0.2.3                   ";
	opt3 = "                                              ";
	opt4 = "          1:                    Exit          ";
	opt5 = "          2:                  Log in          ";
	opt6 = "                                              ";
	Title="  Welcome to OSI GUI v1.0   ";
	cout << Columnten1<< Title<< Columnten2 << "\n" ;
	cout<< Bdr<< opt1<< Bdr<<"\n";
	cout<< Bdr<< opt2<< Bdr<<"\n";
	cout<< Bdr<< opt3<< Bdr<<"\n";
	cout<< Bdr<< opt4<< Bdr<<"\n";
	cout<< Bdr<< opt5<< Bdr<<"\n";
	cout<< Bdr<< opt6<< Bdr<<"\n";
	cout<<WaitColumn<<"\nEnter A Number:";
	
		
	cin>>Choice;
	if(Choice=="1"){
		goto exitmain;
	}
	if (Choice=="2"){
		goto OSImainloopbreak;
	}
	goto OSImainloop;
	OSImainloopbreak:
		OSIlogloop:
	system("CLS");	
	opt1 = " Type exit to go back                         ";
	opt2 = "                                              ";
	opt3 = "                                              ";
	opt4 = "             - ENTER PASSWORD -               ";
	opt5 = "       Type 'new' to create a new user.       ";
	opt6 = "                                              ";
	Title="  User Login Access System  ";
	cout << Columnten1<< Title<< Columnten2 << "\n" ;
	cout<< Bdr<< opt1<< Bdr<<"\n";
	cout<< Bdr<< opt2<< Bdr<<"\n";
	cout<< Bdr<< opt3<< Bdr<<"\n";
	cout<< Bdr<< opt4<< Bdr<<"\n";
	cout<< Bdr<< opt5<< Bdr<<"\n";
	cout<< Bdr<< opt6<< Bdr<<"\n";
	cout<<WaitColumn<<"\nEnter Password:";
	cin >>Choice;
	if (Choice=="exit"){
	goto OSImainloop;
	}
	if (Choice=="new"){
	newuser:
	system("CLS;");
	opt1 = " Type exit to abort operation                 ";
	opt2 = "                                              ";	
	opt3 = "          Please enter a password             ";
	opt4 = "             for your new user.               ";
	opt5 = "                   .....                      ";
	opt6 = "                                              ";
	Title="  User Login Access System  ";
	cout << Columnten1<< Title<< Columnten2 << "\n" ;
	cout<< Bdr<< opt1<< Bdr<<"\n";
	cout<< Bdr<< opt2<< Bdr<<"\n";
	cout<< Bdr<< opt3<< Bdr<<"\n";
	cout<< Bdr<< opt4<< Bdr<<"\n";
	cout<< Bdr<< opt5<< Bdr<<"\n";
	cout<< Bdr<< opt6<< Bdr<<"\n";
	cout<<WaitColumn<<"\nEnter Your New Password:";
	cin >>NormPass;
	if (NormPass=="new"){
	system("CLS;");
	opt1 = "                                              ";	
	opt2 = "       Sorry. This password is reserved       ";
	opt3 = "            for the new user command.         ";
	opt4 = "                                              ";
	opt5 = "                -Press Enter-                 ";
	opt6 = "                                              ";
	Title="           -Error-          ";
	cout << Columnten1<< Title<< Columnten2 << "\n" ;
	cout<< Bdr<< opt1<< Bdr<<"\n";
	cout<< Bdr<< opt2<< Bdr<<"\n";
	cout<< Bdr<< opt3<< Bdr<<"\n";
	cout<< Bdr<< opt4<< Bdr<<"\n";
	cout<< Bdr<< opt5<< Bdr<<"\n";
	cout<< Bdr<< opt6<< Bdr<<"\n";
	cout<<WaitColumn<<"\n";
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
	goto newuser;
	}
	if (NormPass=="exit"){
		goto OSImainloopbreak;
	}
	PassGenRetry:
	ofstream passgen;
	passgen.open ("OSIUser.setting");
	if (passgen.is_open()) {
		passgen <<NormPass;
	}
	else {
	filebadloop:
	system("CLS;");
	opt1 = "                                              ";
	opt2 = "          The file 'Users.passwf' did         ";
	opt3 = "             not open successfully.           ";
	opt4 = "         A new user cannot be created.        ";
	opt5 = "            1=Retry        2=Abort            ";
	opt6 = "                                              ";
	Title="  User Login Access System  ";
	cout << Columnten1<< Title<< Columnten2 << "\n" ;
	cout<< Bdr<< opt1<< Bdr<<"\n";
	cout<< Bdr<< opt2<< Bdr<<"\n";
	cout<< Bdr<< opt3<< Bdr<<"\n";
	cout<< Bdr<< opt4<< Bdr<<"\n";
	cout<< Bdr<< opt5<< Bdr<<"\n";
	cout<< Bdr<< opt6<< Bdr<<"\n";
	cout<<WaitColumn<<"\nEnter A Number:";
	cin>>Choice;
	if (Choice=="1"){
		cout<<"Press Enter to attempt to open 'Users.passwf' again...";
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cin.get();
		goto PassGenRetry;
	}
	if (Choice=="2"){
		goto OSImainloopbreak;
	}
	goto filebadloop;
	}
	system("CLS;");
	opt1 = "                                              ";
	opt2 = "   Password has been successsfully installed. ";
	opt3 = "          Press Enter to continue.            ";
	opt4 = "                                              ";
	opt5 = "                    .....                     ";
	opt6 = "                                              ";
	Title="  User Login Access System  ";
	cout << Columnten1<< Title<< Columnten2 << "\n" ;
	cout<< Bdr<< opt1<< Bdr<<"\n";
	cout<< Bdr<< opt2<< Bdr<<"\n";
	cout<< Bdr<< opt3<< Bdr<<"\n";
	cout<< Bdr<< opt4<< Bdr<<"\n";
	cout<< Bdr<< opt5<< Bdr<<"\n";
	cout<< Bdr<< opt6<< Bdr<<"\n";
	cout<<WaitColumn<<"\n";
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
	goto OSIlogloop;
	}
Pswdchkloop:
	if (pswdchk.is_open()){
		for(int i = 0; i < 5; ++i){
		
		pswdchk>>Password[i];
}
	}
	else {
	chkbadloop:
	system("CLS;");
	opt1 = "                                              ";
	opt2 = "          The file 'Users.passwf' did         ";
	opt3 = "             not open successfully.           ";
	opt4 = "           Passwords failed to load.          ";
	opt5 = "            1=Retry        2=Abort            ";
	opt6 = "                                              ";
	Title="  User Login Access System  ";
	cout << Columnten1<< Title<< Columnten2 << "\n" ;
	cout<< Bdr<< opt1<< Bdr<<"\n";
	cout<< Bdr<< opt2<< Bdr<<"\n";
	cout<< Bdr<< opt3<< Bdr<<"\n";
	cout<< Bdr<< opt4<< Bdr<<"\n";
	cout<< Bdr<< opt5<< Bdr<<"\n";
	cout<< Bdr<< opt6<< Bdr<<"\n";
	cout<<WaitColumn<<"\nEnter A Number:";
	cin>>Choice;
	if (Choice=="1"){
		cout<<"Press Enter to attempt to open 'Users.passwf' again...";
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cin.get();
		goto Pswdchkloop;
	}
	if (Choice=="2"){
		goto OSImainloop;
	}
	goto chkbadloop;
	} 
	if (Choice==Password[0]){
	
		goto OSIlogloopbreak;
	}
	goto OSIlogloop;
	OSIlogloopbreak:
	if (Chickenvar==1){
	cout<<"ADMIN ENABLED\n\nPress Enter";
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
	}
	else {
		cout<<"User initiated.\n\nPress Enter";	
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cin.get();
	}
	loopmainmenu:
	system("CLS;");
	if (Chickenvar==1){
	opt1 = " Welcome Admin                         v0.2.3 ";
	}
	else {
		opt1 = " Welcome User                          v0.2.3 ";
	}
	opt2 = "                 Options:                     ";
	opt3 = "-Programs                                     ";
	opt4 = "-Options                                      ";
	opt5 = "-About                                        ";
	opt6 = "-Exit                                         ";
	Title="         - Welcome -        ";
	cout << Columnten1<< Title<< Columnten2 << "\n" ;
	cout<< Bdr<< opt1<< Bdr<<"\n";
	cout<< Bdr<< opt2<< Bdr<<"\n";
	cout<< Bdr<< opt3<< Bdr<<"\n";
	cout<< Bdr<< opt4<< Bdr<<"\n";
	cout<< Bdr<< opt5<< Bdr<<"\n";
	cout<< Bdr<< opt6<< Bdr<<"\n";
	cout<<WaitColumn<<"\nChoose an option:";
	cin>>Choice;
	for(unsigned int n = 0; n < Choice.length(); ++n) {
    Choice[n] = tolower(Choice[n]);
}
	if (Choice=="exit"){
	goto OSImainloop;
	}
	if (Choice=="about"){
	system("CLS;");
	system("color 7f");
	opt1 = "           OSI GUI and Command Shell          ";
	opt2 = "                   System                     ";
	opt3 = "                                              ";
	opt4 = "              By Olivier Poirier              ";
	opt5 = "                                              ";
	opt6 = "                                              ";
	Title="         - About -          ";
	cout << Columnten1<< Title<< Columnten2 << "\n" ;
	cout<< Bdr<< opt1<< Bdr<<"\n";
	cout<< Bdr<< opt2<< Bdr<<"\n";
	cout<< Bdr<< opt3<< Bdr<<"\n";
	cout<< Bdr<< opt4<< Bdr<<"\n";
	cout<< Bdr<< opt5<< Bdr<<"\n";
	cout<< Bdr<< opt6<< Bdr<<"\n";
	cout<<WaitColumn<<"\n";
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
	system("color 2a");
	}
	if (Choice=="programs"){
	prgmloop:
	system("color 5d");
	system("CLS");	
	opt1 = "                                              ";
	if (Chickenvar==1){
	opt1 = "                     - Hidden Items Revealed -";
	}
	opt2 = "-Word                                         ";
	opt3 = "-Text Adventure                               ";
	opt4 = "-Exit                                         ";
	opt5 = "                                              ";
	if (Chickenvar==1){
	opt5 = "-Special Documents                            ";
	}
	opt6 = "                                              ";
	Title="       - Programs -         ";
	cout << Columnten1<< Title<< Columnten2 << "\n" ;
	cout<< Bdr<< opt1<< Bdr<<"\n";
	cout<< Bdr<< opt2<< Bdr<<"\n";
	cout<< Bdr<< opt3<< Bdr<<"\n";
	cout<< Bdr<< opt4<< Bdr<<"\n";
	cout<< Bdr<< opt5<< Bdr<<"\n";
	cout<< Bdr<< opt6<< Bdr<<"\n";
	cout<<WaitColumn<<"\nChoose Program:";
	cin >>Choice;
	for(unsigned int n = 0; n < Choice.length(); ++n) {
    Choice[n] = tolower(Choice[n]);
	}
	if (Choice=="exit"){
	system("color 2a");
	goto loopmainmenu;
}
}
goto loopmainmenu;
exitmain:
CMD=1;
system("CLS");

}
if (Choice=="clear"){
	CMD=1;
	system("CLS");
}	


	goto loop;
loopend:
	return 0;
}



