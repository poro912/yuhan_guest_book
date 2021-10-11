﻿#pragma once
// 프로그램 전체에서 사용하는 구조체와 함수를 저장하는 헤더파일

#include<vector>
#include<ctime>
#include<string>
#include <stdlib.h>
#include "resource.h"
#include "framework.h"

#define WINDOW_COLOR RGB(230,230,230)

typedef struct point_info
{
    LPARAM          lparm;      //좌표  
    int             cWidth;     //굵기
    COLORREF        color;      //색상
    DWORD           ctime;      //시간
    UINT            state;      //상태{WM_LBUTTONDOWN }
}PINFO;

<<<<<<< HEAD


static COLORREF cols[] = { RGB(255,0 ,255), //표시되지 않는 색(검정색 앞부분을 클릭하면 색이 변경되는거로 보아 프로그램상으로 구현은 되어있습니다)
                    RGB(0,0,0),         //검정
                    RGB(255,255,255),   //흰색
                    RGB(192,192,192),   //회색
                    RGB(255,0,0),       //빨간색
                    RGB(255,155,0),     //주황색
                    RGB(255,255,0),     //노란색
                    RGB(155,255,0),     //연두색
                    RGB(0,255,0),       //초록색
                    RGB(0,255,255),     //하늘색
                    RGB(0,0,255),       //파란색
                    RGB(155,0,255),     //자주색
                    RGB(255,0,255),     //보라색
                    RGB(255,0,155),     //연분홍
                    RGB(255,0,105),     //분홍색
                    RGB(150,75,0),      //갈색
                    RGB(128,0,0),       //적갈색
                    RGB(0,0,0)       //랜덤색
=======
static COLORREF cols[] = {
                    RGB(0,0,0),         //검정
                    RGB(255,255,255),   //흰색
                    RGB(192,192,192),   //회색
                    RGB(238,45,54),     //빨간색
                    RGB(255,127,39),    //주황색
                    RGB(255,242,0),     //노란색
                    RGB(113,222,22),    //연두색
                    RGB(14,190,98),     //초록색
                    RGB(23,186,255),    //하늘색
                    RGB(64,125,217),    //파란색
                    RGB(163,73,164),    //보라색
                    RGB(255,174,201),   //연분홍
                    RGB(251,117,190),   //분홍
                    RGB(185,122,87),    //갈색
>>>>>>> e3ff4fa29a8c6f8e3713f2efa5a29491aa1385e9
};

// 색상을 저장하는 배열      // ↓배열의 0번에 해당하는 부분이 프로그램에서 표시되지 않음

