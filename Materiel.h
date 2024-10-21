/**
 * \file Materiel.h
 * \brief Déclaration de la classe Materiel
 * \author Filip Rochette
 * \version 1
 */

#ifndef MATERIEL_H_
#define MATERIEL_H_
#include <string>
#include <vector>
#include "Fournisseur.h"

/**
 * \class Materiel
 * \brief classe modélisant une Materiel
 *
 * Invariants de la classe: 
 */
class Materiel
{
public:
  Materiel();
  Materiel(const Materiel& p_source);
  Materiel(Materiel&& p_source) noexcept;
  ~Materiel();

  Materiel& operator=(const Materiel p_source);

  size_t reqId() const;
  double reqDernierPrix() const;
  std::string reqPrefixeId() const;
  std::string reqDescription() const;
  std::string reqFabricant() const;
  std::string reqDernierFournisseur() const;
  std::string reqFormatAchat() const;
  std::vector<Fournisseur> reqFournisseurs() const;

  void asgId(const size_t& p_id);
  void asgDernierPrix(const double& p_dernierPrix);
  void asgPrefixeId(const std::string& p_prefixeId);
  void asgDescription(const std::string& p_description);
  void asgFabricant(const std::string& p_fabricant);
  void asgDernierFournisseur(const std::string& p_dernierFournisseur);
  void asgFormatAchat(const std::string& p_formatAchat);
  void asgFournisseur(const Fournisseur* p_fournisseur);

private:
  size_t m_id;

  double m_dernierPrix;

  std::string m_prefixeId;
  std::string m_description;
  std::string m_fabricant;
  std::string m_dernierFournisseur;
  std::string m_formatAchat;

  std::vector<Fournisseur> m_fournisseurs;

  void verifieInvariant() const;

};

#endif /* MATERIEL_H_ */
