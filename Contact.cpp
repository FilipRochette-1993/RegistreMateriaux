/**
 * \file Contact.cpp
 * \brief Implémentation de la classe Contact
 * \author Filip Rochette
 * \version 1
 */

#include "Contact.h"
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
Contact::Contact() :
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
Contact::Contact(const Contact& p_source) :
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
Contact::Contact(const Contact&& p_source) noexcept :
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
Contact::~Contact()
{
  
}

/**
 * \brief Constructeur avec paramètres.
 * On construit un objet Classe à partir de valeurs passées en paramètres.
 * \param[in] parametre1 input.
 * \pre parametre1, precondition
 * \post parametre1, postcondition
 */
Contact& Contact::operator=(const Contact p_source)
{

}

/**
 * \brief retourne les informations sur la personne dans une chaîne formatée
 * \return les caractéristiques de l'adresse sous la forme d'un objet string
 */
std::string Contact::reqContactFormate() const
{
  std::ostringstream os;
  os << "je m'appelle " << m_attribut1 << " " << m_attribut2 << std::endl;
  return os.str();
}

/**
 * \brief Vérification des invariant de la classe Personne.
 * 		  L'invariant de cette classe s'assure que la Personne est valide.
 */
void Contact::verifieInvariant() const
{
  INVARIANT(!m_prenom.empty());
  INVARIANT(!m_nom.empty());
}

