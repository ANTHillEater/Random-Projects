#include <iostream>

using namespace std;

void logo();

void MainMap();
void FrameTop();
void WhatLine(int);
void FrameBottom();

int main(void){
	int input = 0;
	int param = 0;

	logo();

	while (param == 0){
		cout<<endl<<"1. New Game";
		cout<<endl<<"2. Load Game";
		cout<<endl<<"3. Exit";
		cout<<endl<<"Choose an option: ";
		cin>>input;

		if (input == 1){
			MainMap();
		}
		else if (input == 2){
			//load game
		}
		else if (input == 3){
			param = 1;
		}
		else {
			cout<<endl<<"Please input a valid option."<<endl;
		}
	}

	return 0;
}

void logo(){
	cout<<" ,ggg, ,ggg,_,ggg,                              ,gg,"<<endl;
	cout<<"dP\"\"Y8dP\"\"Y88P\"\"Y8b                            i8\"\"8i"<<endl;
	cout<<"Yb, `88'  `88'  `88                            `8,,8'"<<endl;
	cout<<" `\"  88    88    88                             `Y88aaad8"<<endl;
        cout<<"     88    88    88                              d8\"\"\"\"Y8,"<<endl;
        cout<<"     88    88    88    ,gggg,gg  gg,gggg,       ,8P     8b   ,gggg,gg   ,ggg,,ggg,,ggg,    ,ggg,"<<endl;
        cout<<"     88    88    88   dP\"  \"Y8I  I8P\"  \"Yb      dP      Y8  dP\"  \"Y8I  ,8\" \"8P\" \"8P\" \"8,  i8\" \"8i"<<endl;
        cout<<"     88    88    88  i8'    ,8I  I8'    ,8i _ ,dP'      I8 i8'    ,8I  I8   8I   8I   8I  I8, ,8I"<<endl;
        cout<<"     88    88    Y8,,d8,   ,d8b,,I8 _  ,d8' \"888,,_____,dP,d8,   ,d8b,,dP   8I   8I   Yb, `YbadP'"<<endl;
        cout<<"     88    88    `Y8P\"Y8888P\"`Y8PI8 YY88888Pa8P\"Y888888P\" P\"Y8888P\"`Y88P'   8I   8I   `Y8888P\"Y888"<<endl;
	cout<<"                                 I8"<<endl;
	cout<<"                                 I8"<<endl;
        cout<<"                                 I8"<<endl;
        cout<<"                                 I8"<<endl;
        cout<<"                                 I8"<<endl;
        cout<<"                                 I8"<<endl;

	return;
}

void MainMap(){
	int i = 0;

	FrameTop();
	for (i = 0; i < 40; i++){
		WhatLine(i);
	}
	FrameBottom();

	return;
}

void FrameTop(){
        int i = 0;
        int j = 0;

        cout<<"┌";
        for (i = 0; i < 78; i++) {
                cout<<"─";            //Creates the frame portion at the top
        }
        cout<<"┐"<<endl;

        for (i = 0; i < 4; i++) {
                cout<<"│";
                for (j = 0; j < 78; j++) {
                        cout<<"~";    //Creates the sea
                }
                cout<<"│"<<endl;
        }

        return;
}

void WhatLine(int i){
	int j = 0;

	cout<<"│";

	for (j = 0; j < 6; j++){
		cout<<"~";
	}

	switch(i){
	case 0:
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~┌────┐~~~~~~~~~~~~~~~~~";
	break;

	case 1:
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~┌┘    │~~~~~~~~~~~~~~~~~";
	break;

	case 2:
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~┌┘     └┐~~~~~~~~~~~~~~~~";
	break;

	case 3:
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~┌┘       └─┐~~~~~~~~~~~~~~";
	break;

	case 4:
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~│          └┐~~~~~~┌┐~~~~~";
	break;

	case 5:
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~┌┘           └───┐~┌┘│~~~~~";
	break;

	case 6:
	cout<<"~~~~~~~~~~~~~~~~~┌───┐~~~┌──┐~~~~~~~~~~│                └─┘ │~~~~~";
	break;

	case 7:
	cout<<"~~~~~~~~~~~~~~~~┌┘  ┌┘~┌─┘  └─┐~~~~~~~┌┘                   ┌┘~~~~~";
	break;

	case 8:
	cout<<"~~~~~~~~~~~~~~~~│┌──┘~~│    ┌─┘~~~~~┌─┘                   ┌┘~~~~~~";
	break;

	case 9:
	cout<<"~~~~~~~~~~~~~~~~└┘~~~~┌┘   ┌┘~~~~~┌─┘                     │~~~~~~~";
	break;

	case 10:
	cout<<"~~~~~~~~~~~~~~~~~~┌───┘    │~~~~┌─┘                       └┐~~~~~~";
	break;

	case 11:
	cout<<"~~~~~~~~~~┌┐~~~~~┌┘     ┌──┘~~~┌┘                          │~~~~~~";
	break;

	case 12:
	cout<<"~~~~~~~~┌─┘│~~~~~│     ┌┘~~~~~~│                           │~~~~~~";
	break;

	case 13:
	cout<<"~~~~~~~~│  │~~~~~└┐   ┌┘~~~~┌──┘                        ┌──┘~~~┌─┐";
	break;

	case 14:
	cout<<"~~~~~~~┌┘  └┐~~~~~└┐  │~~~~┌┘                          ┌┘~~~~~┌┘ │";
	break;

	case 15:
	cout<<"~~~~~┌─┘    │~~~~~~└──┘~~~┌┘                           └─┐~~~~└┐┌┘";
	break;

	case 16:
	cout<<"~~~~~└──┐┌──┘~~~~~~~~~~~~~│                              │~~~~~│└┐";
	break;

	case 17:
	cout<<"~~~~~~~~└┘~~~~~~~~~~~~~~~┌┘                              │~~~~~│ │";
	break;

	case 18:
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~┌┘                               └┐~~~~└┐│";
	break;

	case 19:
	cout<<"~~~~~~~~~~~~~~~~~~~~~┌──┘                                 │~~~~~└┘";
	break;

	case 20:
	cout<<"~~~~~~~~~~~~~~┌──────┘                                    └─┐~~~~~";
	break;

	case 21:
	cout<<"~~┌───┐~~~┌───┘                                             └┐~~~~";
	break;

	case 22:
	cout<<"┌─┘   └─┐~│                                                  └┐~~~";
	break;

	case 23:
	cout<<"│       └─┘                                                   │~~~";
	break;

	case 24:
	cout<<"│                                         ┌─┐                 │~~~";
	break;

	case 25:
	cout<<"└┐                                        │~│                ┌┘~~~";
	break;

	case 26:
	cout<<"~└─┐                                      │~│         ┌──┐  ┌┘~~~~";
	break;

	case 27:
	cout<<"~~~│ ┌─┐                                ┌─┘~│         │~~└──┘~~~~~";
	break;

	case 28:
	cout<<"~~~└─┘~│                                └┐~~└──┐      │~~~~~~~~~~~";
	break;

	case 29:
	cout<<"~~~~~~~│                                 │┌┐~~~│      └┐~~~~~~~~~~";
	break;

	case 30:
	cout<<"~~~~~~~└┐  ┌──┐                          │││~~~└─┐     └┐~~~~~~~~~";
	break;

	case 31:
	cout<<"~~~~~~~~└──┘~~│                    ┌─────┘│└┐┌┐~~│    ┌─┘~~~~~~~~~";
	break;

	case 32:
	cout<<"~~~~~~~~~~~~~~│         ┌────┐    ┌┘~~~~~~└─┘││┌┐└┐   │~~~~~~~~~~~";
	break;

	case 33:
	cout<<"~~~~~~~~~~~~~~└┐       ┌┘~~~~└┐  ┌┘~~~~~~~~~~│└┘│~└──┐│~~~~~~~~~~~";
	break;

	case 34:
	cout<<"~~~~~~~~~┌─┐~~~└┐      │~~~~~~└──┘~~~~~~~~~┌─┘  └┐~~~└┘~~~~~~~~~~~";
	break;

	case 35:
	cout<<"~~~~~┌───┘ │~~~~└──┐ ┌─┘~~~~~~~~~~~~~~~~~~~│     │~~~~~~~~~~~~~~~~";
	break;

	case 36:
	cout<<"~~~~┌┘     │~~~~~~~└─┘~~~~~~~~~~~~~~~~~~~~~│     │~~~~~~~~~~~~~~~~";
	break;

	case 37:
	cout<<"~~~~│      └┐~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~└┐  ┌─┘~~~~~~~~~~~~~~~~";
	break;

	case 38:
	cout<<"~~~┌┘ ┌┐  ┌─┘~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~└──┘~~~~~~~~~~~~~~~~~~";
	break;

	case 39:
	cout<<"~~~└──┘└──┘~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	break;
	}

	for (j = 0; j < 6; j++){
		cout<<"~";
	}

	cout<<"│"<<endl;

	return;
}

void FrameBottom(){
        int i = 0;
        int j = 0;

        for (i = 0; i < 4; i++) {
                cout<<"│";
                for (j = 0; j < 78; j++) {
                        cout<<"~";    //Creates the sea
                }
                cout<<"│"<<endl;
        }

        cout<<"└";
        for (i = 0; i < 78; i++) {
                cout<<"─";            //Creates the frame portion at the bottom
        }
        cout<<"┘"<<endl;

        return;
}
