#pragma once
#include"GB_moudles.h"

// �ķ�Ʈ
#define BTNS 18        // ���� ��ư ����
#define S_BTN_x 650     // ���� ��ư ���� x��ġ
#define S_BTN_y 30      // ���� ��ư ���� y��ġ
#define BTN_gap 3       // ��ư ����
#define BTN_size 30     // ��ư ũ��

typedef struct btn      //���� ��ư������ ������ ����ü
{
    RECT rect;
    COLORREF col;
    HBRUSH brsh;
    HPEN pen;
    //HWND Wnd;
}BTN;



class Palette
{

public:
    COLORREF ran;
    int x;
    int y;
    int boundary_x;
    int boundary_y;
    std::vector<BTN> btns;

    Palette(int x, int y);
    void print(HDC hdc);
    int is_press(LPARAM lParam);

    void ChangeRand();
};