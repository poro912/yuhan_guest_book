#pragma once
#include"GB_moudles.h"

// 파레트
<<<<<<< HEAD
#define BTNS 18        // 색상 버튼 갯수
=======
#define BTNS (sizeof(cols)/sizeof(COLORREF))        // 색상 버튼 갯수
>>>>>>> e3ff4fa29a8c6f8e3713f2efa5a29491aa1385e9
#define S_BTN_x 650     // 색상 버튼 시작 x위치
#define S_BTN_y 30      // 색상 버튼 시작 y위치
#define BTN_gap 3       // 버튼 간격
#define BTN_size 30     // 버튼 크기

typedef struct btn      //색상 버튼내용을 저장할 구조체
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