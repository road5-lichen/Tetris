#include <iostream>
#include "CNextBrickBoard.h"
#include "CTools.h"

using namespace std;

CNextBrickBoard::CNextBrickBoard(int offsetX, int offsetY)
{
	m_offsetX = offsetX;
	m_offsetY = offsetY;
}

void CNextBrickBoard::eraseBoard()
{
	for (int i = 1; i < 3; i++)
	{
		CTools::gotoxy(m_offsetX, m_offsetY + i);
		cout << "                ";
	}
}

void CNextBrickBoard::drawNextBrickBoard(int brickIndex)
{
	eraseBoard();

	CTools::gotoxy(m_offsetX, m_offsetY);
	cout << "--------------------";
	switch (brickIndex)
	{
	case 0:
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 1);
		cout << "**";
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 2);
		cout << "**";
		break;
	case 1:
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 1);
		cout << "****";
		break;
	case 2:
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 1);
		cout << "***";
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 2);
		cout << " *";
		break;
	case 3:
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 1);
		cout << "***";
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 2);
		cout << "  *";
		break;
	case 4:
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 1);
		cout << "***";
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 2);
		cout << "*";
		break;
	case 5:
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 1);
		cout << "**";
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 2);
		cout << " **";
		break;
	case 6:
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 1);
		cout << " **";
		CTools::gotoxy(m_offsetX + 8, m_offsetY + 2);
		cout << "**";
		break;
	default:
		break;
	}
	CTools::gotoxy(m_offsetX, m_offsetY + 3);
	cout << "--------------------";
}
