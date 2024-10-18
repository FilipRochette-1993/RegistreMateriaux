/**
 * \file ClasseT.cpp
 * \brief Implémentation de la classe ClasseT
 * \author Filip Rochette
 * \version 1
 */

#include "ClasseT.h"
#include "ContratException.h"
#include <string>
#include <sstream>

/**
 * \brief Constructeur avec paramètres.
 * On construit un objet Classe à partir de valeurs passées en paramètres.
 * \param[in] parametre1 input.
 * \pre parametre1, precondition
 * \post parametre1, postcondition
 */
ClasseT::ClasseT() :
{
  PRECONDITION();

  POSTCONDITION();
  INVARIANTS();
}

/**
 * \brief Constructeur avec paramètres.
 * On construit un objet Classe à partir de valeurs passées en paramètres.
 * \param[in] parametre1 input.
 * \pre parametre1, precondition
 * \post parametre1, postcondition
 */
ClasseT::ClasseT(const ClasseT& p_source) :
{
  PRECONDITION();

  POSTCONDITION();
  INVARIANTS();
}

/**
 * \brief Constructeur avec paramètres.
 * On construit un objet Classe à partir de valeurs passées en paramètres.
 * \param[in] parametre1 input.
 * \pre parametre1, precondition
 * \post parametre1, postcondition
 */
ClasseT::ClasseT(const ClasseT&& p_source) noexcept :
{
  PRECONDITION();

  POSTCONDITION();
  INVARIANTS();
}

/**
 * \brief Constructeur avec paramètres.
 * On construit un objet Classe à partir de valeurs passées en paramètres.
 * \param[in] parametre1 input.
 * \pre parametre1, precondition
 * \post parametre1, postcondition
 */
ClasseT::~ClasseT()
{
  
}

/**
 * \brief Constructeur avec paramètres.
 * On construit un objet Classe à partir de valeurs passées en paramètres.
 * \param[in] parametre1 input.
 * \pre parametre1, precondition
 * \post parametre1, postcondition
 */
ClasseT& ClasseT::operator=(const ClasseT p_source)
{

}

/**
 * \brief retourne les informations sur la personne dans une chaîne formatée
 * \return les caractéristiques de l'adresse sous la forme d'un objet string
 */
std::string ClasseT::reqClasseTFormate() const
{
  std::ostringstream os;
  os << "je m'appelle " << m_attribut1 << " " << m_attribut2 << std::endl;
  return os.str();
}

/**
 * \brief Vérification des invariant de la classe Personne.
 * 		  L'invariant de cette classe s'assure que la Personne est valide.
 */
void ClasseT::verifieInvariant() const
{
  INVARIANT(!m_prenom.empty());
  INVARIANT(!m_nom.empty());
}

