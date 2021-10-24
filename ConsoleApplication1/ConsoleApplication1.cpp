// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define m

#ifdef m

#include<iostream>
using namespace std;
char square[10] = { '0','1','2','3','4','5','6','7','8','9' };

int checkWin()
{
    if (square[1] == square[2] && square[2] == square[3]) return 1;
    else if (square[1] == square[5] && square[5] == square[9]) return 1;
    else if (square[1] == square[4] && square[4] == square[7]) return 1;
    else if (square[2] == square[5] && square[5] == square[8]) return 1;
    else if (square[3] == square[5] && square[5] == square[7]) return 1;
    else if (square[3] == square[6] && square[6] == square[9]) return 1;
    else if (square[4] == square[5] && square[5] == square[6]) return 1;
    else if (square[7] == square[8] && square[8] == square[9]) return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7'
        && square[8] != '8' && square[9] != '9') return 0;
    else return -1;
}

void board()
{
    system("cls");
    cout << "\t\tTic Tak Toe\n";
    cout << "\t\tPlayer 1(X) vs Player 2(0)\n";
    cout << "\t\t     |     |" << endl;
    cout << "\t\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "\t\t_____|_____|_____"<<endl;
    cout << "\t\t     |     |" << endl;
    cout << "\t\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "\t\t_____|_____|_____"<<endl;
    cout << "\t\t     |     |" << endl;
    cout << "\t\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "\t\t     |     |      "<<endl;

}


int main()
{
    int status = 1;
    while (status == 1)
    {
        int choice, player = 1;
        do
        {
            board();
            if (player % 2 == 0) player = 2;
            else player = 1;
            char mark;
            if (player == 1) mark = 'X';
            else mark = '0';
            cout << "Player " << player << " enter a number: ";
            cin >> choice;
            if (choice < 10 && square[choice] == (char)(choice + 48))
            {
                square[choice] = mark;
                player--;
            }
            else
            {
                cout << "Wrong number, press enter " << endl;
                cin.ignore();
                cin.get();
            }
        } while (checkWin() == -1);
        board();
        player++;
        cout << "Player " << player << " won! Congratulations!\n\n";
        cout << "Choose option: \n1.Play again\n2.Close app\n";
        cin >> choice;
        while (choice > 2)
        {
            cout << "Wrong number, try again\n";
            cin >> choice;
        }
        if (choice == 2)
        {
            status = 0;
        }
        else
        {
            for (int i = 1; i < 10; i++)
            {
                square[i] = (char)(i + 48);
            }
        }
        
    }
}
    


#endif // m


