/*
 * Team.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: Robert Larson
 */

#include "Team.h"

#include <iostream>

Team::Team(std::string name,
		   unsigned int seed,
		   unsigned int wins,
		   unsigned int losses,
		   std::vector<double> oddsToMakeNextRound)
: m_name(name),
  m_seed(seed),
  m_wins(wins),
  m_losses(losses),
  m_oddsToMakeNextRound(oddsToMakeNextRound) {

}

Team::~Team() {

}


double Team::GetOddsToMakeRound(unsigned long round)
{
   if(round < m_oddsToMakeNextRound.size()) {
	   return m_oddsToMakeNextRound.at(round);
   }

   return 0.0;
}

void Team::Display()
{
	std::string spacing;
	if(GetSeed() < 10)
		spacing.push_back(' ');

    std::cout << spacing << "#" << GetSeed() << " "  << GetName()   << " ("
 		    << GetWins() << "-" << GetLosses() << ")";

}
