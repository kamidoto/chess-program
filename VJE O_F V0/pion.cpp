#include "pion.h"
#include <stdio.h>
#include <iostream>

pion::pion(int positionDeBaseX, int positionDeBaseY, char team, char type)
{
	positionX = positionDeBaseX;
	positionY = positionDeBaseY;

	PpositionDeBaseX = positionDeBaseX;
	PpositionDeBaseY = positionDeBaseY;

	equipe = team; // B pour noir et W pour blanc

	Ptype = type; //type de piece  p = pion ; t = tour ; c = cavalier ; f = fous ; r = reine ; k = rois 
}

int pion::GetPositionX()
{
	std::cout << "positionX: " << positionX << "\n";

	return positionX;
}

int pion::GetPositionY()
{
	std::cout << "positionY: " << positionY << "\n";

	return positionY;
}

int pion::GetPositionDeBaseX()
{
	return PpositionDeBaseX;
}

int pion::GetPositionDeBaseY()
{
	return PpositionDeBaseY;
}

int pion::SetPositionX(int SetPositionX)
{
	positionX = SetPositionX;

	return positionX;
}

int pion::deplacement(int CaseY , int CaseX )
{
	int deltaX, deltaY;

	switch (Ptype)
	{
	case 'p':

		if (CaseY == positionY + 1 and CaseX == positionX)
			positionY = CaseY;

		else if (CaseY == positionY + 2 and CaseX == positionX and positionY == PpositionDeBaseY)
		{
			positionY = CaseY;
		}
		else
			std::cout << "pas possible\n";

		break;

	case 't': 

		if (CaseX != positionX and CaseY != positionY)
			printf("ps possible \a");

		else if (CaseX != positionX)
			positionX = CaseX;

		else if (CaseY != positionY)
			positionY = CaseY;

		break;

	case 'c':
		
		if (CaseY == positionY + 2 and CaseX == positionX + 1)
		{
			positionY = CaseY;
			positionX = CaseX;
		}

		else if (CaseY == positionY + 2 and CaseX == positionX - 1)
		{
			positionY = CaseY;
			positionX = CaseX;
		}

		else if (CaseY == positionY - 2 and CaseX == positionX + 1)
		{
			positionY = CaseY;
			positionX = CaseX;
		}

		else if (CaseY == positionY - 2 and CaseX == positionX + 1)
		{
			positionY = CaseY;
			positionX = CaseX;
		}

		else if (CaseY == positionY + 1 and CaseX == positionX + 2)
		{
			positionY = CaseY;
			positionX = CaseX;
		}

		else if (CaseY == positionY + 1 and CaseX == positionX - 2)
		{
			positionY = CaseY;
			positionX = CaseX;
		}

		else if (CaseY == positionY - 1 and CaseX == positionX + 2)
		{
			positionY = CaseY;
			positionX = CaseX;
		}

		else if (CaseY == positionY - 1 and CaseX == positionX - 2)
		{
			positionY = CaseY;
			positionX = CaseX;
		}

		else
			std::cout << "pas possible\n";

		break;

	case 'f':
		 deltaX = CaseX - positionX;
		 deltaY = CaseY - positionY;

		 if (deltaY / deltaX == 1 or deltaY / deltaX == -1)
		 {
			 positionX = CaseX;
			 positionY = CaseY;
		 }

		 else
			 printf("ps possible");

		break;

	case 'r':
		deltaX = CaseX - positionX;
		deltaY = CaseY - positionY;

		if (deltaY / deltaX == 1 or deltaY/deltaX == -1 )
		{
			positionX = CaseX;
			positionY = CaseY;
		}

		else if (CaseX != positionX and CaseY == positionY)
		{
			positionX = CaseX;
		}

		else if (CaseY != positionY and CaseX == positionX)
		{
			positionY = CaseY;
		}

		else
			std::cout << "pas possible\n";

		break;

	case 'k':

		if (CaseY == positionY + 1 or CaseY == positionY - 1 or CaseX == positionX + 1 or CaseX == positionX - 1)
		{
			positionX == CaseX;
			positionY == CaseY;
		}

		else if (CaseY == positionY +1 and CaseX == positionX + 1)
		{
			positionX == CaseX;
			positionY == CaseY;
		}

		else if (CaseY == positionY + 1 and CaseX == positionX - 1)
		{
			positionX == CaseX;
			positionY == CaseY;
		}

		else if (CaseY == positionY - 1 and CaseX == positionX + 1)
		{
			positionX == CaseX;
			positionY == CaseY;
		}

		else if (CaseY == positionY - 1 and CaseX == positionX - 1)
		{
			positionX == CaseX;
			positionY == CaseY;
		}

		else
			std::cout << "pas possible\n";

		break;
	}
	return positionX, positionY;
}

pion::~pion()
{

}