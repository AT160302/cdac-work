#include<iostream>

using namespace std;


//Create an enum called `pizza` having three possible values: `personal`, `medium`, `large`. 
//Personal is 100, medium is 200, and large is 300. 
//Depending on what the user selects, charge the user appropriately, along with 2.5% CGST and 2.5% SGST, and show the final bill. 
enum pizza { personal = 100, medium = 200, large = 300};

int main() {
   // pizza p,p1,p2;
    //p = personal;
    //p1 = medium;
    //p2 = large;
    
    int choice=0;
    float price, cgst, sgst, total_bill;
    
    
     cout << "Pizza menu " <<endl;
     cout << "1. personal pizza - Rs " << personal << endl;
     cout << "2. medium pizza - Rs " << medium<< endl;
	 cout << "3. Large pizza - Rs " << large<< endl;
     
      cout << "\nEnter your choice: 1 to 3\n";
      cin >> choice;
     
    switch (choice) {
	 	case 1:
	 	//	cout<<"\nYou have selected personal pizza ";
	 		price=personal;
	 		break;
		case 2:
		//	cout<<"\nyou have selected medium pizza ";
			price= medium;
	 		break;
		case 3:
		//	cout<<"\nyou have selected large pizza ";
			price= large;
	 		break;
		default:
			cout<<"\nInvalid choice ";
			break;
	}
	cgst = price * 2.5 / 100;
    sgst = price * 2.5 / 100;


	total_bill = price+ cgst+ sgst;
	
	cout << "\n Display bill "<< endl;
	cout << "------------------------------ "<< endl;
	cout << "Pizza price is Rs" << price << endl;
	cout << "CGST is: Rs " << cgst << endl;
	cout << "SGST is: Rs " << sgst << endl;
	 cout << "total bill: Rs " << total_bill << endl;
				
		  
    return 0;
}



