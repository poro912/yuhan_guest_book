#pragma once
// ��⿡ ���� ���Ǹ� �ϴ� �������
#include "../for_submit.h"
#include<vector>

//---------------GB_Button--------------------
#include "GB_Button.h"

//---------------GB_File_io--------------------
#include "GB_File_io.h"


//---------------GB_Graphics--------------------

// ������ ������ �״�� ����Ѵ�.
void draw_vector(
    HWND                hWnd,
    HDC                 hdc,
    std::vector<struct point_info>& Pinfo
);
//---------------GB_Keyboard--------------------


//---------------GB_Mouse--------------------


//---------------GB_Palatte--------------------
#include "GB_Palette.h"