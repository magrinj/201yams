//
// dice.hh for dice in /home/magrin_j//Math/Yams
// 
// Made by jeremy magrin
// Login   <magrin_j@epitech.net>
// 
// Started on  Mon Feb 11 09:56:03 2013 jeremy magrin
// Last update Tue Feb 12 12:07:40 2013 jeremy magrin
//

#ifndef		DICE_HH_
#define		DICE_HH_

#include	<vector>

class Dice {
public:
  Dice(unsigned int nb_face = 6);
  ~Dice();

public:
  void	       		setNbFace(unsigned int nb_face);
  unsigned int		getNbFace() const;
  void	       		setValue(int val);
  int			getValue() const;

private:
  unsigned int	       	m_nbFace;
  int			m_val;
};

#endif
