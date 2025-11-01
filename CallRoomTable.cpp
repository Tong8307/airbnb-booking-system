#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Declaration Function Table
void KualaLumpurArea();
void SelangorArea();
void MelakaArea();
void PenangArea();
void SabahArea();
void SarawakArea();

void CallRoomTable(int locationNo){
	// table to let customer select 
	switch (locationNo) {
		case 1:
			KualaLumpurArea();
			break;
		case 2:
			MelakaArea();
			break;
		case 3:
			PenangArea();
			break;
		case 4:
			SelangorArea();
			break;
		case 5:
			SabahArea();
			break;
		case 6:
			SarawakArea();
			break;
	}
}

