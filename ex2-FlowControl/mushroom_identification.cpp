/*
Student name: Beier (Benjamin) Liu
Date: 2/4/2018
Exercise 2:

Remark:
*/

#include <iostream>
using namespace std;

/*===================================================================================================
Main program:
Exercise 2 Part 2
===================================================================================================*/

int main(){
	/*
	Returns -- 0
	
	// the only mushrooms to have a annulus/ring ("anneau") are the "agaric jaunissant", the "amanite tue-mouches" and the "coprin chevelu"
	cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? ";	
	int q2;
	cin>>q2;
	// Both "coprin chevelu" and "agaric jaunissant" grow in meadows ("dans les prés" in French)
	cout << "Est-ce que votre champignon vit en forêt (1 : oui, 0 : non) ? ";
	int q3;
	cin>>q3;
	// The "cèpe de Bordeaux" is the only one to have pores ("tubes" in French)
	cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? ";
	int q4;
	cin>>q4;


	if q1==1 and q2==1 and q3==1
	{
		cout>>"Le champignon auquel vous pensez est la agaric jaunissant."
	}
	else if q1==1 and q2==1 and q3==0
	{
		cout>>"Le champignon auquel vous pensez est la amanite tue-mouches."
	}
	else if q1==1 and q2==0 and q3==0{
		cout>>"Le champignon auquel vous pensez est la pied bleu."
	}
	else if q1==0 and q2==1 and q3==1{
		cout>>"Le champignon auquel vous pensez est la coprin chevelu."
	}
	else if q1==0 and q2==0 and q3==0 and q4==1{
		cout>>"Le champignon auquel vous pensez est la cèpe de Bordeaux."
	}
	else if q1==0 and q2==0 and q3==0 and q4==0{
		cout>>"Le champignon auquel vous pensez est la girolle."
	}
	*/

	// The only mushrooms to have a convex cap ("chapeau convexe") are the "agaric jaunissant", the "amanite tue-mouches" and the "pied bleu"
	cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
	int q1;
	cin>>q1;
	if q1==1 
	{
		// the only mushrooms to have a annulus/ring ("anneau") are the "agaric jaunissant", the "amanite tue-mouches" and the "coprin chevelu"
		cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? ";	
		int q2;
		cin>>q2;
		if q2==1 
		{
			// Both "coprin chevelu" and "agaric jaunissant" grow in meadows ("dans les prés" in French)
			cout << "Est-ce que votre champignon vit en forêt (1 : oui, 0 : non) ? ";
			int q3;
			cin>>q3;
			if q3==1
			{
				cout>>"==> Le champignon auquel vous pensez est la agaric jaunissant."
			}
			else 
			{
				cout>>"==> Le champignon auquel vous pensez est la amanite tue-mouches."
			}
		}
		else 
		{
			cout>>"==> Le champignon auquel vous pensez est la pied bleu."
		}
	}
	else 
	{
		// the only mushrooms to have a annulus/ring ("anneau") are the "agaric jaunissant", the "amanite tue-mouches" and the "coprin chevelu"
		cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? ";	
		int q2;
		cin>>q2;
		if q2==0
		{
			// The "cèpe de Bordeaux" is the only one to have pores ("tubes" in French)
			cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? ";
			int q4;
			cin>>q4;
			if q4==1
			{
				cout>>"==> Le champignon auquel vous pensez est la cèpe de Bordeaux."
			}
			else
			{
				cout>>"==> Le champignon auquel vous pensez est la girolle."
			}
		}
		else
		{
			cout>>"==> Le champignon auquel vous pensez est la coprin chevelu."
		}
	}

	return 0;
}