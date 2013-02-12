//
// yams.cpp for yams in /home/magrin_j//Math/Yams
// 
// Made by jeremy magrin
// Login   <magrin_j@epitech.net>
// 
// Started on  Mon Feb 11 09:45:20 2013 jeremy magrin
// Last update Tue Feb 12 12:24:28 2013 jeremy magrin
//

#include	<iostream>
#include	"yamsProb.hh"

YamsProb::YamsProb() {
  this->m_func["paire"] = &paire;
  this->m_func["brelan"] = &brelan;
  this->m_func["carre"] = &carre;
  this->m_func["full"] = &full;
  this->m_func["suite"] = &suite;
  this->m_func["yams"] = &yams;
}

YamsProb::~YamsProb() {
}

double		YamsProb::calc_prob(Dice *dice, std::string comb) {
  std::string	key = comb.substr(0, comb.find_first_of("_"));

  std::cout << key << std::endl;
  // return ((this->m_func[key])(dice, comb));
  return (0);
}

double		YamsProb::paire(Dice *dice, std::string comb) {
  std::string	end = comb.substr(comb.find_first_of("_") + 1);
  int		paireOf = atoi(end.c_str());
  double	pA = 1 / 1;
  double	pB;
  double	prob;

  for (unsigned int i = 0; i < NB_DICE; i++) {
    pB *= dice[i].getNbFace();
  }
  pB = 1 / pB;
  prob = pA * (pB / pA);
  return (prob);
}

double		YamsProb::brelan(Dice *dice, std::string comb) {

}

double		YamsProb::carre(Dice *dice, std::string comb) {

}

double		YamsProb::full(Dice *dice, std::string comb) {

}

double		YamsProb::suite(Dice *dice, std::string comb) {

}

double		YamsProb::yams(Dice *dice, std::string comb) {

}
