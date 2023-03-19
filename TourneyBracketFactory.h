/*
 * TourneyBracketFactory.h
 *
 *  Created on: Mar 17, 2017
 *      Author: Robert Larson
 */

#ifndef TOURNEYBRACKETFACTORY_H_
#define TOURNEYBRACKETFACTORY_H_

class TourneyBracket;

class TourneyBracketFactory {
 public:
  static TourneyBracketFactory *GetInstance() { return m_instance; }

  TourneyBracket *CreateTourneyBracket(unsigned int year);

 private:
  TourneyBracketFactory();
  virtual ~TourneyBracketFactory();

  static TourneyBracketFactory *m_instance;
};

#endif /* TOURNEYBRACKETFACTORY_H_ */
