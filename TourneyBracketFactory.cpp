/*
 * TourneyBracketFactory.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: Robert Larson
 */

#include "TourneyBracketFactory.h"

#include "TourneyBracket.h"
#include "TourneyBracket2017.h"
#include "TourneyBracket2023.h"

TourneyBracketFactory *TourneyBracketFactory::m_instance =
    new TourneyBracketFactory();

TourneyBracketFactory::TourneyBracketFactory() {}

TourneyBracketFactory::~TourneyBracketFactory() {}

TourneyBracket *TourneyBracketFactory::CreateTourneyBracket(unsigned int year) {
  if (year == 2017) {
    return new TourneyBracket2017();
  } else if (year == 2023) {
    return new TourneyBracket2023();
  }

  return 0;
}
