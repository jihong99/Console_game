#include <iostream>
#include "menu.h";
using namespace std;

char tboard[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
int input; //�Է�
int r, c; //�迭�� �࿭
char mark = 'X'; //��ũ
bool draw = false; //���º� ����
bool trd = false; //��Ȯ�� ���� ����


void main_screen()
{
    cout << "\t\t\t\t\t\tTic-Tac-Toe ���� \n\n\n ";
    cout << "\t\t\t\t\t\t�÷��̾� 1 [X] \t �÷��̾� 2 [O] \n\n\n ";
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
        cout << "\t\t\t\t\t\t�÷��̾� 1 [X] �Է� : ";
    }
    else
    {
        cout << "\t\t\t\t\t\t�÷��̾� 2 [O] �Է� : ";
    }
    cin >> input;
    system("cls");




    switch (input) //���ڸ� �Է��� ��
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
        cout << "�߸��� �Է��� ";
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
        cout << "�ٽ� �õ��ϼ���. \n";
        trd = false;
    }

    main_screen();
}



bool gameover() //���� ���� ����
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

        cout << "\t\t\t\t\t\t������ �������ּ���! \n\n\n";
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
            cout << "\t\t\t\t\t\t���º� �Դϴ�. \n";
            cout << "\t\t\t\t\t\t�ٽ� �Ϸ��� 0, �����Ϸ��� �ƹ���ư�̳� �������� : ";
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
                cout << "\t\t\t\t\t\t�÷��̾� 2 [O]�� �¸��Դϴ�. \n";
                cout << "\t\t\t\t\t\t�ٽ� �Ϸ��� 0, �����Ϸ��� �ƹ���ư�̳� �������� : ";
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
                cout << "\t\t\t\t\t\t�÷��̾� 1 [X] �� �¸��Դϴ�. \n";
                cout << "\t\t\t\t\t\t�ٽ� �Ϸ��� 0, �޴��� ���ư����� �ƹ���ư�̳� �������� : ";
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