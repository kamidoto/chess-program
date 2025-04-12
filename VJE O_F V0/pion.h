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

		char GetEquipe();
		char GetType();

		int SetPositionX(int SetPositionX);//fonction pour le rock
		int deplacement(int CaseY, int CaseX);//deplacement

#pragma region piontrajectoire
		int fouTrajectoire(int x, int y); //permet de voir si le fou attaque le roi 
#pragma endregion

		int rangeBeetweenPiece(pion piece1, pion piece2); //permet de savoir quelle piece est plus pres de la pice avec la quelle on a appeler la fonction utile pour le deplacement du roi et rock 
		int rangeBeetwwenPiece(pion piece1, int coordoneX, int coordoneY); // pour roker

		~pion();//destructeur

	private:
		int positionX;
		int positionY;
		int PpositionDeBaseX;
		int PpositionDeBaseY;
		char Ptype;//type de piece  p = pion ; t = tour ; c = cavalier ; f = fous ; r = reine ; k = rois  
		char equipe;
};

