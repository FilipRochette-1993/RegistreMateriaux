/**
 * \file ClasseT.h
 * \brief Déclaration de la classe ClasseT
 * \author Filip Rochette
 * \version 1
 */

#ifndef TCLASSET_H_
#define TCLASSET_H_
#include <string>

/**
 * \class ClasseT
 * \brief classe modélisant une ClasseT
 *
 * Invariants de la classe: 
 */
class ClasseT
{
public:
  ClasseT();
  ClasseT(const ClasseT& p_source);
  ClasseT(ClasseT&& p_source) noexcept;
  ~ClasseT();

  ClasseT& operator=(const ClasseT p_source);

private:
  int m_attribut1;
  std::string m_attribut2;

  void verifieInvariant() const;

};

#endif /* TCLASSET_H_ */
