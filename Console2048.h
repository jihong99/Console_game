#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <ctime>

void playgame();                  // 게임 생성

void match(int** arr);            // 새로운 매치 시작

void setColor(int color);         // 콘솔text 색상
void setCellColor(int a);         // Cell 색상
void printField(int** arr);       // 게임모듈 출력
void randfill(int** arr);         // 랜덤으로 숫자 배치

bool check(int** arr);            // 더이상 움직일 수 있는지
void winMenu();                   // 2048 달성

bool movefuncUP(int** arr);       
bool movefuncDOWN(int** arr);     
bool movefuncLEFT(int** arr);     
bool movefuncRIGHT(int** arr);    

bool exitFunction();              