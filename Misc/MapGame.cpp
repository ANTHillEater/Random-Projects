#include <iostream>

using namespace std;

void MapGameLogo();	//ASCII art

int MainMenu();

//void LoadGame();

void FrameTop();	//Acts as top of map
void FrameBottom();	//Acts as bottom of map

void MainMap();		//Main Land
void TopLeft1();	//Left-most island
void TopLeft2();	//The two islands a little to the right of the left-most one
void RightMap();	//The right island, mid y
void BottomLeft();	//Bottom left island
void BottomRight();	//Bottom right islands

int main(void){
	int input = 0;
	int param = 0;

	MapGameLogo();

	while (param == 0) {
		input = MainMenu();
		if (input == 1){
			param = 1;
			MainMap();
		}
		else if (input == 2){
//			LoadGame();
		}
		else if (input == 3){
			cout<<endl<<"See you later!"<<endl<<endl;
			param = 1;
		}
		else {
			cout<<endl<<"Oops! That's not right! Try again.";
		}
	}

	return 0;
}

void MapGameLogo(){
	cout<<endl;

	printf(" ,ggg, ,ggg,_,ggg,                              ,gg,\n");
	printf("dP\"\"Y8dP\"\"Y88P\"\"Y8b                            i8\"\"8i\n");
	printf("Yb, `88'  `88'  `88                            `8,,8'\n");
	printf(" `\"  88    88    88                             `Y88aaad8\n");
	printf("     88    88    88                              d8\"\"\"\"Y8,\n");
	printf("     88    88    88    ,gggg,gg  gg,gggg,       ,8P     8b   ,gggg,gg   ,ggg,,ggg,,ggg,    ,ggg,\n");
	printf("     88    88    88   dP\"  \"Y8I  I8P\"  \"Yb      dP      Y8  dP\"  \"Y8I  ,8\" \"8P\" \"8P\" \"8,  i8\" \"8i\n");
	printf("     88    88    88  i8'    ,8I  I8'    ,8i _ ,dP'      I8 i8'    ,8I  I8   8I   8I   8I  I8, ,8I\n");
	printf("     88    88    Y8,,d8,   ,d8b,,I8 _  ,d8' \"888,,_____,dP,d8,   ,d8b,,dP   8I   8I   Yb, `YbadP'\n");
	printf("     88    88    `Y8P\"Y8888P\"`Y8PI8 YY88888Pa8P\"Y888888P\" P\"Y8888P\"`Y88P'   8I   8I   `Y8888P\"Y888\n");
	printf("                                 I8\n");
	printf("                                 I8\n");
	printf("                                 I8\n");
	printf("                                 I8\n");
	printf("                                 I8\n");
	printf("                                 I8\n");

	printf("\n");

	return;
}

int MainMenu(){
	int input = 0;

	printf("\n1. New Game");
	printf("\n2. Continue Save Game");
	printf("\n3. Exit");
	scanf("%d", &input);

	return input;
}

/*void LoadGame(){
	FILE *saveGame

	saveGame = fopen("MapGameData.txt", "r");

	if (saveGame == NULL) {
		printf("\n\nThere was a problem reading the save data.\n");
	}
	else {
		
	}

	fclose(saveGame);

	return;
}*/

void FrameTop(){
	int i = 0;
	int j = 0;

	printf("┌");
	for (i = 0; i < 78; i++) {
		printf("─");		//Creates the frame portion at the top
	}
	printf("┐\n");

	for (i = 0; i < 4; i++) {
		printf("│");
		for (j = 0; j < 78; j++) {
			printf("~");	//Creates the sea
		}
		printf("│\n");
	}

	return;
}

void FrameBottom(){
	int i = 0;
	int j = 0;

	for (i = 0; i < 4; i++) {
		printf("│");
		for (j = 0; j < 78; j++) {
			printf("~");	//Creates the sea
		}
		printf("│\n");
	}

	printf("└");
	for (i = 0; i < 78; i++) {
		printf("─");		//Creates the frame portion at the bottom
	}
	printf("┘\n");

	return;
}

void MainMap(){
	char MainMap[78][38] = {};
	int i = 0;

	FrameTop();

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~┌─────┐~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~┌┘     │~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~┌┘      └┐~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~┌─┘        └─┐~~~~~~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~│            └┐~~~~~~~┌┐~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~┌┘             └───┐~~┌┘│~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~┌───┐~~~┌──┐~~~~~~~~~~│                  └─┘  │~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~┌┘  ┌┘~┌─┘  └─┐~~~~~~~┌┘                      ┌┘~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~│┌──┘~~│    ┌─┘~~~~~┌─┘                      ┌┘~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~└┘~~~~┌┘   ┌┘~~~~~┌─┘                        │~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~┌───┘    │~~~~┌─┘                       └┐~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~┌┐~~~~~┌┘     ┌──┘~~~┌┘                          │~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~┌─┘│~~~~~│     ┌┘~~~~~~│                           │~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~│  │~~~~~└┐   ┌┘~~~~┌──┘                        ┌──┘~~┌─┐~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~┌┘  └┐~~~~~└┐  │~~~~┌┘                          ┌┘~~~~┌┘ │~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~┌─┘    │~~~~~~└──┘~~~┌┘                           └─┐~~~└┐┌┘~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~└──┐┌──┘~~~~~~~~~~~~~│                              │~~~~│└┐~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~└┘~~~~~~~~~~~~~~~┌┘                              │~~~~│ │~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~┌┘                               └┐~~~└┐│~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~┌──┘                                 │~~~~└┘~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~┌──────┘                                    └─┐~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~┌───┐~~~┌───┘                                             └┐~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~┌─┘   └─┐~│                                                  └┐~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~│       └─┘                                                   │~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~│                                         ┌─┐                 │~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~└┐                                        │~│                ┌┘~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~└─┐                                      │~│         ┌──┐  ┌┘~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~│ ┌─┐                                ┌─┘~│         │~~└──┘~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~└─┘~│                                └┐~~└──┐      │~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~│                                 │┌┐~~~│      └┐~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~└┐  ┌──┐                          │││~~~└─┐     └┐~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~└──┘~~│                    ┌─────┘│└┐┌┐~~│    ┌─┘~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~│         ┌────┐    ┌┘~~~~~~└─┘││┌┐└┐   │~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~~~~~~└┐       ┌┘~~~~└┐  ┌┘~~~~~~~~~~│└┘│~└──┐│~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~~~~~┌─┐~~~└┐      │~~~~~~└──┘~~~~~~~~~┌─┘  └┐~~~└┘~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~~┌───┘ │~~~~└──┐ ┌─┘~~~~~~~~~~~~~~~~~~~│     │~~~~~~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~┌┘     │~~~~~~~└─┘~~~~~~~~~~~~~~~~~~~~~│     │~~~~~~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~~│      └┐~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~└┐  ┌─┘~~~~~~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~┌┘ ┌┐  ┌─┘~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~└──┘~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("│\n");

	printf("│");
	printf("~~~~~~~~~└──┘└──┘~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("│\n");

	FrameBottom();

	return;
}

void TopLeft1(){
	

	return;
}

void TopLeft2(){
	

	return;
}

void RightMap(){
	

	return;
}

void BottomLeft(){
	

	return;
}

void BottomRight(){
	

	return;
}
