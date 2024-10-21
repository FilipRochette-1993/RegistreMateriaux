/**
 * \file Contact.h
 * \brief Déclaration de la classe Contact
 * \author Filip Rochette
 * \version 1
 */

#ifndef CONTACT_H_
#define CONTACT_H_
#include <string>

/**
 * \class Contact
 * \brief classe modélisant une Contact
 *
 * Invariants de la classe: 
 */
class Contact
{
public:
  Contact();
  Contact(const Contact& p_source);
  Contact(Contact&& p_source) noexcept;
  ~Contact();

  Contact& operator=(const Contact p_source);

private:
  size_t m_id;

  std::string m_nom;
  std::string m_prenom;
  std::string m_numTel;
  std::string m_poste;
  std::string m_courriel;

  void verifieInvariant() const;

};

#endif /* CONTACT_H_ */
