#include "GB_moudles.h"
#include "winuser.h"

// REPLAY ��ư ����
void Button::ReplayButton(HWND hWnd, HINSTANCE hInst)
{
    g_button_replay = CreateWindow(L"button", L"REPLAY", WS_CHILD | WS_VISIBLE, \
        COMM_BTN_x, COMM_BTN_y, COMM_BTN_width, COMM_BTN_hight, \
        hWnd, (HMENU)REPLAY, hInst, NULL);
}

// CLEAR ��ư ����
void Button::ClearButton(HWND hWnd, HINSTANCE hInst)
{
    g_button_clear = CreateWindow(L"button", L"CLEAR", WS_CHILD | WS_VISIBLE, \
        COMM_BTN_x + COMM_BTN_width + COMM_BTN_gap + 20, COMM_BTN_y, COMM_BTN_width, COMM_BTN_hight, \
        hWnd, (HMENU)CLEAR, hInst, NULL);
}


// + ��ư ����
void Button::PlusButton(HWND hWnd, HINSTANCE hInst)
{
    g_button_plus = CreateWindow(L"button", L"��", WS_CHILD | WS_VISIBLE, \
        SIZE_BTN_x, SIZE_BTN_y, SIZE_BTN_size, SIZE_BTN_size, \
        hWnd, (HMENU)MINUS, hInst, NULL);
}

// - ��ư ����
void Button::MinusButton(HWND hWnd, HINSTANCE hInst)
{
    g_button_minus = CreateWindow(L"button", L"��", WS_CHILD | WS_VISIBLE, \
        SIZE_BTN_x + SIZE_BTN_size + SIZE_BTN_gap, SIZE_BTN_y, SIZE_BTN_size, SIZE_BTN_size, \
        hWnd, (HMENU)PLUS, hInst, NULL);
}

// ���찳 ��ư ����
void Button::EarserButton(HWND hWnd, HINSTANCE hInst)
{
    g_button_eraser = CreateWindow(L"button", L"���찳", WS_CHILD | WS_VISIBLE, \
        ERASER_BTN_x, ERASER_BTN_y, ERASER_BTN_width, ERASER_BTN_hight, \
        hWnd, (HMENU)ERASER, hInst, NULL);
}


