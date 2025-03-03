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

}