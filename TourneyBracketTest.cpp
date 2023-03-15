/*
 * TourneyBracketTest.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: Robert Larson
 */

#include "TourneyBracket.h"
#include "TourneyBracketFactory.h"

int main()
{
	TourneyBracket * bracket =
	    TourneyBracketFactory::GetInstance()->CreateTourneyBracket(2023);

    bracket->PlayRoundOf64();
    bracket->PlayRoundOf32();
    bracket->PlaySweet16();
    bracket->PlayElite8();
    bracket->PlayFinalFour();
    bracket->PlayChampionship();

	bracket->Display();

	delete bracket;

    return 0;
}
