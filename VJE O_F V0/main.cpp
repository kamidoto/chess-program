#include "pion.h"
#include <iostream>

int main()
{
#pragma region colone (axe x)
	int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8;
#pragma endregion

#pragma region initialisation des pieces
	pion TWG (a, 1, 'W', 't');//Tour White Gauche
	pion CWG (b, 1, 'W', 'c');//Cavalier White Gauche
	pion FWG (c, 1, 'w', 'f');
	pion RW  (d, 1, 'w', 'r');
	pion KW  (e, 1, 'w', 'k');
	pion FWD (f, 1, 'w', 'f');
	pion CWD (g, 1, 'w', 'c');
	pion TWD (h, 1, 'w', 'c');
	pion PWa (a, 2, 'w', 'p');// Pion White colone a
	pion PWb (b, 2, 'w', 'p');
	pion PWc (c, 2, 'w', 'p');
	pion PWd (d, 2, 'w', 'p');
	pion PWe (e, 2, 'w', 'p');
	pion PWf (f, 2, 'w', 'p');
	pion PWg (g, 2, 'w', 'p');
	pion PWh (h, 2, 'w', 'p');
	pion TBG (a, 1, 'B', 't');//Tour Black Gauche
	pion CBG (b, 1, 'B', 'c');//Cavalier Black Gauche
	pion FBG (c, 1, 'B', 'f');
	pion RB  (d, 1, 'B', 'r');
	pion KB  (e, 1, 'B', 'k');
	pion FBD (f, 1, 'B', 'f');
	pion CBD (g, 1, 'B', 'c');
	pion TBD (h, 1, 'B', 'c');
	pion PBa (a, 2, 'B', 'p');// Pion Black colone a
	pion PBb (b, 2, 'B', 'p');
	pion PBc (c, 2, 'B', 'p');
	pion PBd (d, 2, 'B', 'p');
	pion PBe (e, 2, 'B', 'p');
	pion PBf (f, 2, 'B', 'p');
	pion PBg (g, 2, 'B', 'p');
	pion PBh (h, 2, 'B', 'p');
#pragma endregion

	while (true == true)
	{
		/*les blancs jouent*/ while (TWG.GetPositionX() == TWG.GetPositionX() or TWG.GetPositionY() == TWG.GetPositionY() or CWG.GetPositionX() == CWG.GetPositionX() or CWG.GetPositionY() == CWG.GetPositionY() or FWG.GetPositionX() == FWG.GetPositionX() or FWG.GetPositionY() == FWG.GetPositionY() or RW.GetPositionX() == RW.GetPositionX() or RW.GetPositionY() == RW.GetPositionY() or KW.GetPositionX() == KW.GetPositionX() or KW.GetPositionY() == KW.GetPositionY() or FWD.GetPositionX() == FWD.GetPositionX() or FWD.GetPositionY() == FWD.GetPositionY() or CWD.GetPositionX() == CWD.GetPositionX() or CWD.GetPositionY() == CWD.GetPositionY() or TWD.GetPositionX() == TWD.GetPositionX() or TWD.GetPositionY() == TWD.GetPositionY() or PWa.GetPositionY() == PWa.GetPositionY() or PWb.GetPositionY() == PWb.GetPositionY() or PWc.GetPositionY() == PWc.GetPositionY() or PWd.GetPositionY() == PWd.GetPositionY() or PWe.GetPositionY() == PWe.GetPositionY() or PWf.GetPositionY() == PWf.GetPositionY() or PWg.GetPositionY() == PWg.GetPositionY() or PWh.GetPositionY() == PWh.GetPositionY())
		{
			
		}

		/*les noirs jouent*/ while (TBG.GetPositionX() == TBG.GetPositionX() or TBG.GetPositionY() == TBG.GetPositionY() or CBG.GetPositionX() == CBG.GetPositionX() or CBG.GetPositionY() == CBG.GetPositionY() or FBG.GetPositionX() == FBG.GetPositionX() or FBG.GetPositionY() == FBG.GetPositionY() or RB.GetPositionX() == RB.GetPositionX() or RB.GetPositionY() == RB.GetPositionY() or KB.GetPositionX() == KB.GetPositionX() or KB.GetPositionY() == KB.GetPositionY() or FBD.GetPositionX() == FBD.GetPositionX() or FBD.GetPositionY() == FBD.GetPositionY() or CBD.GetPositionX() == CBD.GetPositionX() or CBD.GetPositionY() == CBD.GetPositionY() or TBD.GetPositionX() == TBD.GetPositionX() or TBD.GetPositionY() == TBD.GetPositionY() or PBa.GetPositionY() == PBa.GetPositionY() or PBb.GetPositionY() == PBb.GetPositionY() or PBc.GetPositionY() == PBc.GetPositionY() or PBd.GetPositionY() == PBd.GetPositionY() or PBe.GetPositionY() == PBe.GetPositionY() or PBf.GetPositionY() == PBf.GetPositionY() or PBg.GetPositionY() == PBg.GetPositionY() or PBh.GetPositionY() == PBh.GetPositionY())
		{

		}
	}
}