#include "GB_Palette.h"


Palette::Palette(int x, int y)
{
    RECT rec;
    srand((unsigned)time(NULL));

    this->x = x;
    this->y = y;
    this->pen = CreatePen(PS_SOLID, 2, RGB(192, 192, 192));
    for (int i = 0; i < BTNS; i++)
    {
        BTN btn;
        btn.rect.left = x;
        btn.rect.top = y;
        btn.rect.right = x + BTN_size;
        btn.rect.bottom = y + BTN_size;

        x += BTN_size + BTN_gap;

        btn.brsh = CreateSolidBrush(cols[i]);
        btn.col = cols[i];
        btns.push_back(btn);
    }
    this->boundary_x = x + BTN_size;
    this->boundary_y = y + BTN_size;


    // ���� ������ ���� �� ��ư ����
    rec.left = x;
    rec.top = y;
    rec.right = x + BTN_size;
    rec.bottom = y + BTN_size;

    this->btn_ran.rect = rec;
    x += BTN_size + BTN_gap;
    this->ChangeRand();

    // �ٿ���� ���� Ȯ��
    this->boundary_x += x + BTN_size;
}

void Palette::print(HWND hWnd,HDC hdc)
{
    RECT temp;
    SelectObject(hdc, this->pen);
    for (auto i : btns)
    {
        SelectObject(hdc, i.brsh);
        Rectangle(hdc, i.rect.left, i.rect.top, i.rect.right, i.rect.bottom);
    }

    // ���� ��ư ���
    temp = btn_ran.rect;
    SelectObject(hdc, this->btn_ran.brsh);
    Rectangle(hdc, temp.left, temp.top, temp.right, temp.bottom);
}


COLORREF Palette::is_press(LPARAM lParam)
{
    POINT po;
    po.x = LOWORD(lParam);
    po.y = HIWORD(lParam);

    for (int i = 0; i < this->btns.size(); i++)
        if (PtInRect(&this->btns[i].rect, po))
            return btns[i].col;
    if (PtInRect(&this->btn_ran.rect, po))
        return btn_ran.col;

    return -1;
}

// ������ ���������� �о�� �����ϴ� �Լ�
COLORREF Palette::ChangeRand() {

        int rr = rand() % 255;
        int gg = rand() % 255;
        int bb = rand() % 255;

        this->btn_ran.col = RGB(rr, gg, bb);
        if(this->btn_ran.brsh != NULL)
            DeleteObject(this->btn_ran.brsh);
        this->btn_ran.brsh = CreateSolidBrush(this->btn_ran.col);

        return this->btn_ran.col;
}