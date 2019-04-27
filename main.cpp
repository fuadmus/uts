#include <iostream>
#include <iomanip>

using namespace std;


	void showBin (int [], int);


int main()
{

	const int SIZE = 10;
	int array1[SIZE] = {10,5,15,21,7,5,5,25,18,12};

	int menu, addremove, add, remove, binnum;



	do{

	cout<<"********************************************** \n";
	cout<<"*					MENU					* \n";
	cout<<"*											* \n";
	cout<<"*			   1. Select a Bin			  * \n";
	cout<<"*				2. View Bins				* \n";
	cout<<"*				  3. Quit				   * \n";
	cout<<"********************************************** \n";
	cin>>menu;
	switch (menu)
	{
	case 1:
		{
					cout<<"**************************************** \n";
					cout<<"* ENTER THE BIN NUMBER YOU WISH TO USE * \n";
					cout<<"*   1. Valve		 2. Bearing		* \n";
					cout<<"*   3. Bushing	   4. Coupling	   * \n";
					cout<<"*   5. Flange		6. Gear		   * \n";
					cout<<"*   7. Gear Housing  8. Vaccum Gripper * \n";
					cout<<"*   9. Cable		10. Rod			* \n";
					cout<<"**************************************** \n";
					cin>>binnum;



			cout<<"******************************* \n";
			cout<<"*		1. Add to bin		* \n";
			cout<<"*	 2. Remove from bin	  * \n";
			cout<<"******************************* \n";
			cin>>addremove;
			switch(addremove)
			{
			case 1:
				{

					cout<<"Enter how many parts you wish to add to bin"<< binnum<<". \n";
					cin>>add;

					int addedbin = array1[binnum] + add;
					cout<<"bin "<<binnum<<" now has "<<addedbin<<endl;
					break;
				}
			case 2:
				{
					cout<<"Enter how many parts you wish to remove from bin"<< binnum<<". \n";
					cin>>remove;

					int rembin = array1[binnum] - remove;
					cout<<"bin "<<binnum<<" now has "<<rembin<<endl;
					break;
				}
			break;
			}
		break;
		}



	case 2:
		{

			showBin (array1, SIZE);

			break;
		}
	case 3:
		{
		cout<<"Thanks for using Inventory. Come back soon!!! \n";
		break;
		}

	break;
	}

	}
	while (menu != 3);

return 0;
}

void showBin (int nums[], int SIZE)
{
		for (int count = 0; count < SIZE; count++)
		cout<<nums[count]<<" ";
		cout<<endl;
}
