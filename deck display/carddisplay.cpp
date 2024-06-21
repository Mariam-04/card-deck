#include<iostream>
#include<string>
#include<fcntl.h>
#include<io.h>
#include"ConsoleFunctions.h"
class PlayingCard
{
private:
	int rank; //integer 1 – 13
	int suit; //integer 0 – 3
	char color; // red or black - ‘b’ for black , ‘r’ for red
public:
	static const int Diamond = 0;
	static const int Heart = 1;
	static const int Spade = 2;
	static const int Club = 3;
	PlayingCard(int rrank = 0, int ssuit = 0)

	{
		if (rrank >= 1 && rrank <= 13 && ssuit >= 0 && ssuit <= 3)
		{
			rank = rrank;
			suit = ssuit;
		}
		else
			if (suit == 0 || suit == 1) {
				color = 'r';
			}
			else
			{
				color = 'b';
			}
	}
	void display(int x, int y)
	{
		ConsoleColor backcol(white);
		ConsoleFunctions c1;

		// Set the text color based on the card's suit
		if (suit == 1) {
			ConsoleColor textcol(red);
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 8+1; j++) {
					c1.SetCursorAt(y + j, x + i);
					
					if (i == 0 && j == 0) {
						c1.SetColor(textcol, backcol);
						c1.SetCursorAt(y + j, x + i);
						wstring symbol = L"\u2665";
						_setmode(_fileno(stdout), _O_U8TEXT);
						wcout << symbol;
						_setmode(_fileno(stdout), _O_TEXT);

					}

					else if (i == 0 && j == 1) {
						if (rank == 11) {
							c1.SetColor(textcol, backcol);
							cout << 'J';
						}
						else if (rank == 1) {
							c1.SetColor(textcol, backcol);
							cout << 'A';
						}
						else if (rank == 12) {
							c1.SetColor(textcol, backcol);
							cout << 'Q';
						}
						else if (rank == 13) {
							c1.SetColor(textcol, backcol);
							cout << 'K';
						}
						else if (rank == 10) {
							c1.SetColor(textcol, backcol);
							cout << rank;
							j++;
						}
						else {
							c1.SetColor(textcol, backcol);
							cout << rank;
						}
					}

					else if ((i == 1 || i == 4) && j == 0) {

						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if ((i == 1 || i == 4) && j == 7) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 2 && j == 0) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 3 && j == 7) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 5 && j == 7) {
						if (rank == 11) {
							c1.SetColor(textcol, backcol);
							cout << 'J';
						}
						else if (rank == 1) {
							c1.SetColor(textcol, backcol);
							cout << 'A';
						}
						else if (rank == 12) {
							c1.SetColor(textcol, backcol);
							cout << 'Q';
						}
						else if (rank == 13) {
							c1.SetColor(textcol, backcol);
							cout << 'K';
						}
						else if (rank == 10) {
							c1.SetColor(textcol, backcol);
							cout << rank;
							j++;
						}
						else {
							c1.SetColor(textcol, backcol);
							cout << rank;
						}
					}
					else if (i == 5 && j == 6) {
						c1.SetColor(textcol, backcol);
						c1.SetCursorAt(y + j, x + i);
						wstring symbol = L"\u2665";
						_setmode(_fileno(stdout), _O_U8TEXT);
						wcout << symbol;
						_setmode(_fileno(stdout), _O_TEXT);
					}

					else {
						cout << " ";
					}
				}
			}
		}
		else if (suit == 0) {
			ConsoleColor textcol(red);
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 8+1; j++) {
					c1.SetCursorAt(y + j, x + i);
					if (i == 0 && j == 0) {
						c1.SetColor(textcol, backcol);
						c1.SetCursorAt(y + j, x + i);
						wstring symbol = L"\u2666";
						_setmode(_fileno(stdout), _O_U8TEXT);
						wcout << symbol;
						_setmode(_fileno(stdout), _O_TEXT);

					}

					else if (i == 0 && j == 1) {
						if (rank == 11) {
							c1.SetColor(textcol, backcol);
							cout << 'J';
						}
						else if (rank == 1) {
							c1.SetColor(textcol, backcol);
							cout << 'A';
						}
						else if (rank == 12) {
							c1.SetColor(textcol, backcol);
							cout << 'Q';
						}
						else if (rank == 13) {
							c1.SetColor(textcol, backcol);
							cout << 'K';
						}
						else if (rank == 10) {
							c1.SetColor(textcol, backcol);
							cout << rank;
							j++;
						}
						else {
							c1.SetColor(textcol, backcol);
							cout << rank;
						}
					}

					else if ((i == 1 || i == 4) && j == 0) {

						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if ((i == 1 || i == 4) && j == 7) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 2 && j == 0) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 3 && j == 7) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 5 && j == 7) {
						if (rank == 11) {
							c1.SetColor(textcol, backcol);
							cout << 'J';
						}
						else if (rank == 1) {
							c1.SetColor(textcol, backcol);
							cout << 'A';
						}
						else if (rank == 12) {
							c1.SetColor(textcol, backcol);
							cout << 'Q';
						}
						else if (rank == 13) {
							c1.SetColor(textcol, backcol);
							cout << 'K';
						}
						else if (rank == 10) {
							c1.SetColor(textcol, backcol);
							cout << rank;
							j++;
						}
						else {
							c1.SetColor(textcol, backcol);
							cout << rank;
						}
					}
					else if (i == 5 && j == 6) {
						c1.SetColor(textcol, backcol);
						c1.SetCursorAt(y + j, x + i);
						wstring symbol = L"\u2666";
						_setmode(_fileno(stdout), _O_U8TEXT);
						wcout << symbol;
						_setmode(_fileno(stdout), _O_TEXT);
					}

					else {
						cout << " ";
					}
				}
			}
		}
		else if (suit == 2) {
			ConsoleColor textcol(black);
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 8+1; j++) {
					c1.SetCursorAt(y + j, x + i);
					if (i == 0 && j == 0) {
						c1.SetColor(textcol, backcol);
						c1.SetCursorAt(y + j, x + i);
						wstring symbol = L"\u2660";
						_setmode(_fileno(stdout), _O_U8TEXT);
						wcout << symbol;
						_setmode(_fileno(stdout), _O_TEXT);

					}

					else if (i == 0 && j == 1) {
						if (rank == 11) {
							c1.SetColor(textcol, backcol);
							cout << 'J';
						}
						else if (rank == 1) {
							c1.SetColor(textcol, backcol);
							cout << 'A';
						}
						else if (rank == 12) {
							c1.SetColor(textcol, backcol);
							cout << 'Q';
						}
						else if (rank == 13) {
							c1.SetColor(textcol, backcol);
							cout << 'K';
						}
						else if (rank == 10) {
							c1.SetColor(textcol, backcol);
							cout << rank;
							j++;
						}
						else {
							c1.SetColor(textcol, backcol);
							cout << rank;
						}
					}

					else if ((i == 1 || i == 4) && j == 0) {

						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if ((i == 1 || i == 4) && j == 7) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 2 && j == 0) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 3 && j == 7) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 5 && j == 7) {
						if (rank == 11) {
							c1.SetColor(textcol, backcol);
							cout << 'J';
						}
						else if (rank == 1) {
							c1.SetColor(textcol, backcol);
							cout << 'A';
						}
						else if (rank == 12) {
							c1.SetColor(textcol, backcol);
							cout << 'Q';
						}
						else if (rank == 13) {
							c1.SetColor(textcol, backcol);
							cout << 'K';
						}
						else if (rank == 10) {
							c1.SetColor(textcol, backcol);
							cout << rank;
							j++;
						}
						else {
							c1.SetColor(textcol, backcol);
							cout << rank;
						}
					}
					else if (i == 5 && j == 6) {
						c1.SetColor(textcol, backcol);
						c1.SetCursorAt(y + j, x + i);
						wstring symbol = L"\u2660";
						_setmode(_fileno(stdout), _O_U8TEXT);
						wcout << symbol;
						_setmode(_fileno(stdout), _O_TEXT);
					}

					else {
						cout << " ";
					}
				}
			}
		}
		else if (suit == 3) {
			ConsoleColor textcol(black);
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 8+1; j++) {
					c1.SetCursorAt(y + j, x + i);
					if (i == 0 && j == 0) {
						c1.SetColor(textcol, backcol);
						c1.SetCursorAt(y + j, x + i);
						wstring symbol = L"\u2663";
						_setmode(_fileno(stdout), _O_U8TEXT);
						wcout << symbol;
						_setmode(_fileno(stdout), _O_TEXT);

					}

					else if (i == 0 && j == 1) {
						if (rank == 11) {
							c1.SetColor(textcol, backcol);
							cout << 'J';
						}
						else if (rank == 1) {
							c1.SetColor(textcol, backcol);
							cout << 'A';
						}
						else if (rank == 12) {
							c1.SetColor(textcol, backcol);
							cout << 'Q';
						}
						else if (rank == 13) {
							c1.SetColor(textcol, backcol);
							cout << 'K';
						}
						else if (rank == 10) {
							c1.SetColor(textcol, backcol);
							cout << rank;
							j++;
						}
						else {
							c1.SetColor(textcol, backcol);
							cout << rank;
						}
					}

					else if ((i == 1 || i == 4) && j == 0) {

						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if ((i == 1 || i == 4) && j == 7) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 2 && j == 0) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 3 && j == 7) {
						c1.SetColor(textcol, backcol);
						cout << " ";
					}
					else if (i == 5 && j == 7) {
						if (rank == 11) {
							c1.SetColor(textcol, backcol);
							cout << 'J';
						}
						else if (rank == 1) {
							c1.SetColor(textcol, backcol);
							cout << 'A';
						}
						else if (rank == 12) {
							c1.SetColor(textcol, backcol);
							cout << 'Q';
						}
						else if (rank == 13) {
							c1.SetColor(textcol, backcol);
							cout << 'K';
						}
						else if (rank == 10) {
							c1.SetColor(textcol, backcol);
							cout << rank;
							j++;
						}
						else {
							c1.SetColor(textcol, backcol);
							cout << rank;
						}
					}
					else if (i == 5 && j == 6) {
						c1.SetColor(textcol, backcol);
						c1.SetCursorAt(y + j, x + i);
						wstring symbol = L"\u2663";
						_setmode(_fileno(stdout), _O_U8TEXT);
						wcout << symbol;
						_setmode(_fileno(stdout), _O_TEXT);
					}

					else {
						cout << " ";
					}
				}
			}

		}
	}

};
class PileofCards {

private:
	PlayingCard* pile;
	int top;
	int size;
public:
	PileofCards(int ssize)
	{
		size = ssize;
		top = -1;
		pile = new PlayingCard[size];

	}
	~PileofCards()
	{
		delete[]pile;
	}

	PlayingCard Peek() const {
		return pile[top];
	}
	PlayingCard Remove() {
		if (IsEmpty() == true) {
			cout << "                                                                              Errror: The Pile of Cards is Already empty! " << endl;
			return PlayingCard();
		}
		else {
			PlayingCard removed_card = pile[top];
			top--;
			return removed_card;
		}
	}
	void Add(PlayingCard card) {
		if (IsFull() == true) {
			cout << " ";
			cout << "                                                                       Error: The Pile of Cards is Already Full!" << endl;
		}
		else {
			pile[top + 1] = card;
			top++;
		}
	}
	bool IsEmpty() const {
		if (top == -1) {
			return true;
		}
		else return false;
	}
	bool IsFull() const {
		if (top == size - 1) {
			return true;
		}
		else return false;
	}

};

class Deck
{

private:
	PlayingCard* deck[52];
	int size;
public:
	Deck()
	{
		int j = 0;
		size = 52;
		for (int i = 1; i <= 13; i++)
		{
			deck[j] = new PlayingCard(i, PlayingCard::Diamond);
			j++;
		}
		for (int i = 1; i <= 13; i++)
		{
			deck[j] = new PlayingCard(i, PlayingCard::Heart);
			j++;
		}
		for (int i = 1; i <= 13; i++)
		{
			deck[j] = new PlayingCard(i, PlayingCard::Spade);
			j++;
		}
		for (int i = 1; i <= 13; i++)
		{
			deck[j] = new PlayingCard(i, PlayingCard::Club);
			j++;
		}
	}
	int getSize() {
		return size;
	}
	bool IsEmpty()
	{
		if (size == 0)
		{
			return true;
		}
		else
			return false;
	}
	PlayingCard Remove(int i)
	{
		PlayingCard cardremoved = *deck[i];
		delete deck[i];
		deck[i] = nullptr;
		size--;
		for (int j = i; j < size; j++) {
			deck[j] = deck[j + 1];
		}
		return cardremoved;
	}
	~Deck()
	{
		for (int i = 0; i < size; i++)
		{
			delete deck[i];
		}
	}

	void display(int x, int y) {
		ConsoleFunctions c;
		c.setConsoleWindowAndBufferSize(800, 800);
		for (int i = 0; i <size; i++) {
			deck[i]->display(x, y);
			y=y + 10;
		}
	}
};

int main(){
	//PlayingCard A(3, PlayingCard::Spade);
	//PlayingCard B(2, PlayingCard::Spade);
	//PlayingCard C(4, PlayingCard::Heart);
	//PlayingCard D(5, PlayingCard::Club);
	//PlayingCard E(3, PlayingCard::Diamond);
	//PlayingCard temp(3, PlayingCard::Heart);

	//PileofCards pile1(5);
	///** Adding cards in pile ****/
	//pile1.Add(A);
	//pile1.Add(B);
	//pile1.Add(C);
	//pile1.Add(D);
	//pile1.Add(E);
	///*Note for Testing:
	//The 6th card temp, in the statement below, should not be added to the
	//pile, as at this point pile is full.
	//Write a statement in IsFull function to display an error message if pile is
	//full.
	//*/

	//pile1.Add(temp);

	///** Removing Cards from pile ***/
	////temp = pile1.Remove();
	///* Here you will need to see which card is removed from the pile.
	//For this you need to write display function for class PlayingCard to
	//view a card. */
	//temp.display(0, 0);

	///* According to this scenario, the above statement should display the card
	//3 of Diamond, as this is the card removed from the top of the pile*/

	//temp = pile1.Remove(); //5 of Club should be removed 
	//temp.display(0, 10);
	//temp = pile1.Remove(); //4 of Heart should be removed 
	//temp.display(0, 20);
	//temp = pile1.Remove(); //2 of Spade should be removed 
	//temp.display(0, 30);

	//temp = pile1.Remove(); //3 of Spade should be removed 
	//temp.display(0, 40);
	//temp = pile1.Remove(); //Now the pile is empty 

	/*Write a print statement in IsEmpty funtion to display an error message when
	 pile is empty*/




	Deck D1;
	D1.display(0,0);
	//int j = 0;
	//PlayingCard A(0, 0);
	//int y = 0;
	//A = D1.Remove(0);
	////A.display(0, y);
	//y = y + 10;
	//A = D1.Remove(0);
	////A.display(0, 10);
	//y = y + 10;
	//A = D1.Remove(0);
	////A.display(0, 20); // three cards removed
	////D1.display(0, 0);
	//y = y + 10;
	//while (!D1.IsEmpty())
	//{
	//	A = D1.Remove(0);
	//	//A.display(0, y);
	//	y = y + 10;
	//}
	//D1.display(0, 0);

	return 0;
}