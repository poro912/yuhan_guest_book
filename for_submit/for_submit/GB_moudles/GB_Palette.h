#pragma once
#include"GB_moudles.h"

// �ķ�Ʈ
#define BTNS 16        // ���� ��ư ����
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
    btn btn_ran;
    COLORREF ran;
    HPEN pen;
    int x;
    int y;
    int boundary_x;
    int boundary_y;
    std::vector<BTN> btns;

    Palette(int x, int y);
    void print(HWND hWnd ,HDC hdc);
    COLORREF is_press(LPARAM lParam);

    COLORREF ChangeRand();
};