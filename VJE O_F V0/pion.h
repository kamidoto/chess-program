#pragma once
class pion
{
	//classe pion

	public:
		pion(int positionDeBaseX,int positionDeBaseY, char team , char type);//createur

		int GetPositionX();
		int GetPositionY();

		int GetPositionDeBaseX();
		int GetPositionDeBaseY();

		int SetPositionX(int SetPositionX);//fonction pour le rock
		int deplacement(int CaseY, int CaseX);//deplacement


		~pion();//destructeur

	private:
		int positionX;
		int positionY;
		int PpositionDeBaseX;
		int PpositionDeBaseY;
		char Ptype;//type de piece  p = pion ; t = tour ; c = cavalier ; f = fous ; r = reine ; k = rois  
		char equipe;
};

