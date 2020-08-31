#include <iostream>
using namespace std;

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
void board_disp()
{
    system("cls");
    cout <<"\n\t\tTIC TAC TOE\n\n";

    cout<<"\tPLAYER 1 [ X ]  -  PLAYER 2 [ 0 ]"<<endl<< endl;

    cout<<"\t     |     |     " << endl;
    cout<<"\t  " << square[1]<<"  |  "<<square[2]<<"  |  "<<square[3]<<endl;

    cout<<"\t_____|_____|_____" << endl;
    cout<<"\t     |     |     " << endl;

    cout<<"\t  "<<square[4]<<"  |  "<<square[5]<<"  |  "<<square[6]<<endl;

    cout<<"\t_____|_____|_____"<<endl;
    cout<<"\t     |     |     "<<endl;

    cout<<"\t  "<<square[7]<<"  |  "<<square[8]<<"  |  "<<square[9]<<endl;

    cout<<"\t     |     |     "<<endl<<endl;
}

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
    {
    	return 1;
	}

    else if (square[4] == square[5] && square[5] == square[6])
    {
    	return 1;
	}

    else if (square[7] == square[8] && square[8] == square[9])
    {
    	return 1;
	}

    else if (square[1] == square[4] && square[4] == square[7])
    {
    	return 1;
	}

    else if (square[2] == square[5] && square[5] == square[8])
    {
    	return 1;
	}

    else if (square[3] == square[6] && square[6] == square[9])
    {
    	return 1;
	}

    else if (square[1] == square[5] && square[5] == square[9])
    {
    	return 1;
	}

    else if (square[3] == square[5] && square[5] == square[7])
    {
    	return 1;
	}

    else if (square[1]!='1'&&square[2]!='2'&&square[3] != '3'&&square[4] != '4'&&square[5] != '5'&& square[6] != '6'&& square[7] != '7' && square[8] != '8' && square[9] != '9')
	{
    	return 0;
	}
    else
    {
    	return -1;
	}
}

int main()
{
	int player=1,i=-1,choice;

    char mark;
    while(i==-1)
    {
        board_disp();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
        {
        	square[1] = mark;
		}
		
        else if (choice == 2 && square[2] == '2')
        {
        	square[2] = mark;
		}

        else if (choice == 3 && square[3] == '3')
        {
        	square[3] = mark;
		}

        else if (choice == 4 && square[4] == '4')
        {
        	square[4] = mark;
		}

        else if (choice == 5 && square[5] == '5')
        {
        	square[5] = mark;
		}

        else if (choice == 6 && square[6] == '6')
        {
        	square[6] = mark;
		}

        else if (choice == 7 && square[7] == '7')
        {
        	square[7] = mark;
		}

        else if (choice == 8 && square[8] == '8')
        {
        	square[8] = mark;
		}

        else if (choice == 9 && square[9] == '9')
        {
        	square[9] = mark;
		}

        else
        {
            cout<<"!! INVALID MOVE !! ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }
    board_disp();
    if(i==1)
    {
    	cout<<"==>\aPLAYER "<<--player<<" WINS !! ";
	}
	
    else
    {
    	cout<<"\a GAME DRAW";
	}
        

    cin.ignore();
    cin.get();
    return 0;
}






