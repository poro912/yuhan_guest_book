#pragma once
#include "GB_moudles.h"

#define REPLAY 1500     // REPLAY ��ư ��ȣ
#define CLEAR 1501      // CLEAR ��ư ��ȣ
#define COMM_BTN_x 30       //command button
#define COMM_BTN_y 33       //
#define COMM_BTN_width 100  //
#define COMM_BTN_hight 30   //
#define COMM_BTN_gap 10     //

#define PLUS 2000       // PLUS ��ư ��ȣ
#define MINUS 2001      // MINUS ��ư ��ȣ
#define SIZE_BTN_x 290  //command button
#define SIZE_BTN_y 33   // 
#define SIZE_BTN_size 30    //
#define SIZE_BTN_gap 30     //
#define SIZE_BTN_top_width -10
#define SIZE_BTN_width 150  //
#define SIZE_BTN_hight 35   //

#define ERASER 2500     // REPLAY ��ư ��ȣ
#define ERASER_BTN_x 580       //command button
#define ERASER_BTN_y 30       //
#define ERASER_BTN_width 80   //
#define ERASER_BTN_hight 30   //
#define ERASER_BTN_gap 10     //


class Button
{
public:

	HWND g_button_replay = nullptr; // ��ư�� ���� �����͸� ����
	HWND g_button_clear = nullptr;
	HWND g_button_plus = nullptr;
	HWND g_button_minus = nullptr;
	HWND g_button_eraser = nullptr;

	void ReplayButton(HWND hWnd, HINSTANCE hInst);
	void ClearButton(HWND hWnd, HINSTANCE hInst);
	void PlusButton(HWND hWnd, HINSTANCE hInst);
	void MinusButton(HWND hWnd, HINSTANCE hInst);
	void EarserButton(HWND hWnd, HINSTANCE hInst);
};