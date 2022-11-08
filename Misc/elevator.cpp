#include <iostream>

using namespace std;

int main (void){
	int height = 0;
	int floor = 1;
	int people = 0;
	int i = 0;
	int stepCounter = 0;

	cout<<"How many floors are there?"<<endl;
	cin>>height;

	int shaft[height];

	for (i = 0; i < height; ++i) {
		shaft[i] = 0;
	}

	shaft[0] = 1;

	while (floor > 0) {
		cout<<endl;
		for (i = (height - 1); i >= 0; --i) {
			if (shaft[i]) {
				cout<<"["<<people<<"]"<<endl;
			}
			else {
				cout<<" | "<<endl;
			}
		}
		for (i = 0; i < height; ++i) {
			shaft[i] = 0;
		}
		cout<<endl<<"What floor?"<<endl;
		cin>>floor;
		shaft[floor - 1] = 1;
	}

	return 0;
}
