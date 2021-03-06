#ifndef _CMAINGAMEAREA_H_
#define _CMAINGAMEAREA_H_

#define KROW 19
#define KCOL 15

class CMainGameArea
{
public:
	CMainGameArea(int offsetX = 0, int offsetY = 0);
	void drawGameArea();

	void drawMatrix();

	//尝试消层，返回值为消掉的层数
	int tryAndCutLayer();
	void resetGameArea();
	bool gameOver();

	int getOffsetX() const;
	int getOffsetY() const;

	int getMatrixStatus(int row, int col) const;
	void setMatrixStatus(int row, int col, int status);

private:
	void cutLayer(int row);

private:
	int m_arrAreaMatrix[KROW][KCOL];
	int m_offsetx;
	int m_offsety;
};

#endif