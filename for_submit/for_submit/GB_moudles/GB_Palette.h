#pragma once
#include"GB_moudles.h"

// �ķ�Ʈ
<<<<<<< HEAD
#define BTNS 18        // ���� ��ư ����
=======
#define BTNS (sizeof(cols)/sizeof(COLORREF))        // ���� ��ư ����
>>>>>>> e3ff4fa29a8c6f8e3713f2efa5a29491aa1385e9
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
<<<<<<< HEAD
    COLORREF ran;
=======
    btn btn_ran;
    COLORREF ran;
    HPEN pen;
>>>>>>> e3ff4fa29a8c6f8e3713f2efa5a29491aa1385e9
    int x;
    int y;
    int boundary_x;
    int boundary_y;
    std::vector<BTN> btns;

    Palette(int x, int y);
<<<<<<< HEAD
    void print(HDC hdc);
    int is_press(LPARAM lParam);

    void ChangeRand();
=======
    void print(HWND hWnd, HDC hdc);
    COLORREF is_press(LPARAM lParam);

    COLORREF ChangeRand();
>>>>>>> e3ff4fa29a8c6f8e3713f2efa5a29491aa1385e9
};