/**
 * \file Fournisseur.h
 * \brief Déclaration de la classe Fournisseur
 * \author Filip Rochette
 * \version 1
 */

#ifndef FOURNISSEUR_H_
#define FOURNISSEUR_H_
#include <string>
#include <vector>
#include "Contact.h"

/**
 * \class Fournisseur
 * \brief classe modélisant une Fournisseur
 *
 * Invariants de la classe: 
 */
class Fournisseur
{
public:
  Fournisseur();
  Fournisseur(const Fournisseur& p_source);
  Fournisseur(Fournisseur&& p_source) noexcept;
  ~Fournisseur();

  Fournisseur& operator=(const Fournisseur p_source);

  size_t reqId() const;

private:
  size_t m_id;

  std::string m_nom;
  std::string m_contact;
  std::string m_numTel;
  std::string m_courriel;

  std::vector<Contact> m_contacts;

  void verifieInvariant() const;

};

#endif /* FOURNISSEUR_H_ */
