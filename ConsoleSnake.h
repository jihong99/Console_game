#pragma once

int title(void); //���� ����ȭ�� 
void reset(void); //������ �ʱ�ȭ 
void draw_map(void); // ������ �׵θ��� �׸� 
int move(int dir); //��Ӹ��� �̵� 
void pause(void); //�Ͻ����� 
void game_over(void); //���� ������ Ȯ�� 
void food(void); // ���� ���� 
void status(void); // �����ڿ� statusǥ��  
void CursorView(bool b); // Ŀ�� ����
void MainGame(); // 