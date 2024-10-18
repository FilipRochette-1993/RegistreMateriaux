#include "ClasseTemplate.h"
#include "gtest/gtest.h"

class ClasseTest: public ::testing::Test 
{
protected:
	ClasseTemplate<int> listeVide;

	void SetUp() override
	{
		listeVide.ajouter(10, 1);
	}
};

TEST_F(ClasseTest, constructeurVideOK) 
{
	EXPECT_TRUE(listeVide.taille() == 0);
	EXPECT_TRUE(listeVide.estVide());
}

TEST(Pile, constructeur_no_throw){
    EXPECT_NO_THROW(Pile<int> p);
}

TEST(Pile, vide_push_cardinal_null){
    Pile<int> p;
    EXPECT_EQ(0, p.size());
}