#ifndef _CBRICKSTYLE7_H_
#define _CBRICKSTYLE7_H_

#include "CBrick.h"

/*
 *   **
 *  **
 */
class CBrickStyle7 : public CBrick
{
public:
	CBrickStyle7(CMainGameArea* gameArea);

	virtual bool rotate();

private:
};

#endif