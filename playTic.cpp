#include <iostream>
#include "menu.h";
using namespace std;

char tboard[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
int input; //입력
int r, c; //배열의 행열
char mark = 'X'; //마크
bool draw = false; //무승부 여부
bool trd = false; //정확한 동작 여부


void main_screen()
{
    cout << "\t\t\t\t\t\tTic-Tac-Toe 게임 \n\n\n ";
    cout << "\t\t\t\t\t\t플레이어 1 [X] \t 플레이어 2 [O] \n\n\n ";
    cout << "\t\t\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t\t\t  " << tboard[0][0] << "  |  " << tboard[0][1] << "  |  " << tboard[0][2] << " \n";
    cout << "\t\t\t\t\t\t_____|_____|_____\n";
    cout << "\t\t\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t\t\t  " << tboard[1][0] << "  |  " << tboard[1][1] << "  |  " << tboard[1][2] << " \n";
    cout << "\t\t\t\t\t\t_____|_____|_____\n";
    cout << "\t\t\t\t\t\t     |     |     \n";
    cout << "\t\t\t\t\t\t  " << tboard[2][0] << "  |  " << tboard[2][1] << "  |  " << tboard[2][2] << " \n";
    cout << "\t\t\t\t\t\t     |     |     \n\n\n";
}


void in_game()
{
    if (mark == 'X')
    {
        cout << "\t\t\t\t\t\t플레이어 1 [X] 입력 : ";
    }
    else
    {
        cout << "\t\t\t\t\t\t플레이어 2 [O] 입력 : ";
    }
    cin >> input;
    system("cls");




    switch (input) //숫자를 입력할 시
    {
    case 1:
        r = 0;
        c = 0;
        break;
    case 2:
        r = 0;
        c = 1;
        break;
    case 3:
        r = 0;
        c = 2;
        break;
    case 4:
        r = 1;
        c = 0;
        break;
    case 5:
        r = 1;
        c = 1;
        break;
    case 6:
        r = 1;
        c = 2;
        break;
    case 7:
        r = 2;
        c = 0;
        break;
    case 8:
        r = 2;
        c = 1;
        break;
    case 9:
        r = 2;
        c = 2;
        break;
    default:
        cout << "잘못된 입력임 ";
    }



    if ((tboard[r][c] != 'X') && (tboard[r][c] != 'O'))
    {
        if (mark == 'X')
        {
            tboard[r][c] = 'X';
            mark = 'O';
        }
        else
        {
            tboard[r][c] = 'O';
            mark = 'X';
        }
        trd = true;
    }

    else
    {
        cout << "다시 시도하세요. \n";
        trd = false;
    }

    main_screen();
}



bool gameover() //게임 오버 조건
{

    for (int i = 0; i < 3; i++)
    {
        if (tboard[i][0] == tboard[i][1] && tboard[i][0] == tboard[i][2] || tboard[0][i] == tboard[1][i] && tboard[0][i] == tboard[2][i])
            return true;
    }


    if (tboard[0][0] == tboard[1][1] && tboard[0][0] == tboard[2][2] || tboard[0][2] == tboard[1][1] && tboard[0][2] == tboard[2][0])
        return true;



    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            if (tboard[i][j] != 'X' && tboard[i][j] != 'O')
                return false;
        }



    draw = true;
    return true;
};

void maingame(void)
{
    system("cls");
    while (1) {

        mark = 'X';
        int a;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                tboard[i][j] = (i * 3 + j + 1) + 48;
            }
        }

        cout << "\t\t\t\t\t\t게임을 시작해주세요! \n\n\n";
        main_screen();

        while (!gameover())
        {
            while (!trd)
            {
                in_game();
            }
            trd = false;
        }
        if (draw)
        {
            cout << "\t\t\t\t\t\t무승부 입니다. \n";
            cout << "\t\t\t\t\t\t다시 하려면 0, 종료하려면 아무버튼이나 누르세요 : ";
            cin >> a;

            if (a == 0) {
                system("cls");
                continue;
            }
            else
                break;
        }
        else
        {
            if (mark == 'X')
            {
                cout << "\t\t\t\t\t\t플레이어 2 [O]의 승리입니다. \n";
                cout << "\t\t\t\t\t\t다시 하려면 0, 종료하려면 아무버튼이나 누르세요 : ";
                cin >> a;

                if (a == 0) {
                    system("cls");
                    continue;
                }
                else
                    printmenu();

            }
            else
            {
                cout << "\t\t\t\t\t\t플레이어 1 [X] 의 승리입니다. \n";
                cout << "\t\t\t\t\t\t다시 하려면 0, 메뉴로 돌아가려면 아무버튼이나 누르세요 : ";
                cin >> a;

                if (a == 0) {
                    system("cls");
                    continue;
                }
                else
                    printmenu();
            }
        }

    }

    return;
}