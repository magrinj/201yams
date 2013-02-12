//
// dice.cpp for dice in /home/magrin_j//Math/Yams
// 
// Made by jeremy magrin
// Login   <magrin_j@epitech.net>
// 
// Started on  Mon Feb 11 09:56:06 2013 jeremy magrin
// Last update Tue Feb 12 12:08:42 2013 jeremy magrin
//

#include	"dice.hh"

Dice::Dice(unsigned int nb_face) {
  this->setNbFace(nb_face);
}

Dice::~Dice() {
}

void		Dice::setNbFace(unsigned int nb_face) {
  if (nb_face == 0)
    this->m_nbFace = 1;
  else
    this->m_nbFace = nb_face;
}

unsigned int	Dice::getNbFace() const {
  return (this->m_nbFace);
}

void		Dice::setValue(int val) {
  this->m_val = val;
}

int		Dice::getValue() const {
  return (this->m_val);
}
