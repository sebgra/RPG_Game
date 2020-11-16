#include "Personnage.h"
#include "Drop.h"
#include "Case.h"
#include <QObject>

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

    // const std::vector<Case>& Carte_2()
    // {
    //     static std::vector<Case> vect = { Case(1, 0, 0,false, false,"plop"),
    //                                       Case(99, 0, 0,false, false,"prout") };
    //     return vect;
    // }

    const vector<vector<Case>>& Carte_2()
    {
        static vector<vector<Case>> vect = { {Case(0, 0, 0,false, false,"Case_0.jpg"), Case(1, 1, 0,false, false,"Case_1.jpg"),Case(2, 2, 0,false, true,"Case_2.jpg"),Case(3, 3, 0,false, true,"Case_0.jpg"), Case(4, 4, 0,false, true,"Case_3.jpg"),Case(5, 5, 0,false, true,"Case_0.jpg"),Case(6, 6, 0,false, true,"Case_0.jpg"), Case(7, 7, 0,false, true,"Case_1.jpg"),Case(8, 8, 0,false, true,"Case_0.jpg"),Case(9, 9, 0,false, true,"Case_0.jpg"), Case(10, 10, 0,false, true,"Case_1.jpg"),Case(11, 11, 0,false, true,"Case_0.jpg"),Case(12, 12, 0,false, true,"Case_0.jpg"), Case(13, 13, 0,false, true,"Case_1.jpg"), Case(14, 14, 0,false, true,"Case_1.jpg")},

{Case(15, 0, 1,false, false,"Case_15.jpg"), Case(16, 1, 1,false, false,"Case_16.jpg"),Case(17, 2, 1,false, false,"Case_17.jpg"),Case(18, 3, 1,false, true,"Case_0.jpg"), Case(19, 4, 1,false, true,"Case_1.jpg"),Case(20, 5, 1,false, true,"Case_0.jpg"),Case(21, 6, 1,false, true,"Case_0.jpg"), Case(22, 7, 1,false, true,"Case_1.jpg"),Case(23, 8, 1,false, true,"Case_0.jpg"),Case(24, 9, 1,false, true,"Case_0.jpg"), Case(25, 10, 1,false, true,"Case_1.jpg"),Case(26, 11, 1,false, true,"Case_0.jpg"),Case(27, 12, 1,false, true,"Case_0.jpg"), Case(28, 13, 1,false, true,"Case_1.jpg"), Case(29, 14, 1,false, true,"Case_1.jpg")},
{Case(30, 0, 2,false, true,"Case_0.jpg"), Case(31, 1, 2,false, false,"Case_31.jpg"),Case(32, 2, 2,false, false,"Case_32.jpg"),Case(33, 3, 2,false, false,"Case_33.jpg"), Case(34, 4, 2,false, true,"Case_1.jpg"),Case(35, 5, 2,false, true,"Case_0.jpg"),Case(36, 6, 2,false, false,"Case_36.jpg"), Case(37, 7, 2,false, false,"Case_37.jpg"),Case(38, 8, 2,false, false,"Case_38.jpg"),Case(39, 9, 2,false, false,"Case_39.jpg"), Case(40, 10, 2,false, false,"Case_40.jpg"),Case(41, 11, 2,false, false,"Case_41.jpg"),Case(42, 12, 2,false, false,"Case_42.jpg"), Case(43, 13, 2,false, true,"Case_1.jpg"), Case(44, 14, 2,false, true,"Case_1.jpg")},
{Case(45, 0, 3,false, true,"Case_0.jpg"), Case(46, 1, 3,false, true,"Case_1.jpg"),Case(47, 2, 3,false, false,"Case_47.jpg"),Case(48, 3, 3,false, false,"Case_48.jpg"), Case(49, 4, 3,false, false,"Case_49.jpg"),Case(50, 5, 3,false, false,"Case_50.jpg"),Case(51, 6, 3,false, false,"Case_51.jpg"), Case(52, 7, 3,false, false,"Case_52.jpg"),Case(53, 8, 3,false, false,"Case_53.jpg"),Case(54, 9, 3,false, false,"Case_54.jpg"), Case(55, 10, 3,false, false,"Case_55.jpg"),Case(56, 11, 3,false, false,"Case_56.jpg"),Case(57, 12, 3,false, false,"Case_57.jpg"), Case(58, 13, 3,false, true,"Case_1.jpg"), Case(59, 14, 3,false, true,"Case_1.jpg")},
{Case(60, 0, 4,false, true,"Case_0.jpg"), Case(61, 1, 4,false, true,"Case_1.jpg"),Case(62, 2, 4,false, true,"Case_0.jpg"),Case(63, 3, 4,false, false,"Case_63.jpg"), Case(64, 4, 4,false, true,"Case_1.jpg"),Case(65, 5, 4,false, true,"Case_0.jpg"),Case(66, 6, 4,false, false,"Case_66.jpg"), Case(67, 7, 4,false, false,"Case_67.jpg"),Case(68, 8, 4,false, false,"Case_68.jpg"),Case(69, 9, 4,false, false,"Case_69.jpg"), Case(70, 10, 4,false, false,"Case_70.jpg"),Case(71, 11, 4,false, false,"Case_71.jpg"),Case(72, 12, 4,false, false,"Case_72.jpg"), Case(73, 13, 4,false, true,"Case_1.jpg"), Case(74, 14, 4,false, true,"Case_1.jpg")},
{Case(75, 0, 5,false, true,"Case_0.jpg"), Case(76, 1, 5,false, true,"Case_1.jpg"),Case(77, 2, 5,false, true,"Case_0.jpg"),Case(78, 3, 5,false, true,"Case_0.jpg"), Case(79, 4, 5,false, true,"Case_1.jpg"),Case(80, 5, 5,false, true,"Case_0.jpg"),Case(81, 6, 5,false, true,"Case_0.jpg"), Case(82, 7, 5,false, true,"Case_1.jpg"),Case(83, 8, 5,false, true,"Case_0.jpg"),Case(84, 9, 5,false, true,"Case_0.jpg"), Case(85, 10, 5,false, true,"Case_1.jpg"),Case(86, 11, 5,false, true,"Case_0.jpg"),Case(87, 12, 5,false, false,"Case_87.jpg"), Case(88, 13, 5,false, true,"Case_1.jpg"), Case(89, 14, 5,false, true,"Case_1.jpg")},
{Case(90, 0, 6,false, true,"Case_0.jpg"), Case(91, 1, 6,false, true,"Case_1.jpg"),Case(92, 2, 6,false, true,"Case_0.jpg"),Case(93, 3, 6,false, true,"Case_0.jpg"), Case(94, 4, 6,false, true,"Case_1.jpg"),Case(95, 5, 6,false, true,"Case_0.jpg"),Case(96, 6, 6,false, true,"Case_0.jpg"), Case(97, 7, 6,false, true,"Case_1.jpg"),Case(98, 8, 6,false, true,"Case_0.jpg"),Case(99, 9, 6,false, true,"Case_0.jpg"), Case(100, 10, 6,false, true,"Case_1.jpg"),Case(101, 11, 6,false, true,"Case_0.jpg"),Case(102, 12, 6,false, false,"Case_102.jpg"), Case(103, 13, 6,false, true,"Case_1.jpg"), Case(104, 14, 6,false, true,"Case_1.jpg")},
{Case(105, 0, 7,false, true,"Case_0.jpg"), Case(106, 1, 7,false, true,"Case_1.jpg"),Case(107, 2, 7,false, true,"Case_0.jpg"),Case(108, 3, 7,false, true,"Case_0.jpg"), Case(109, 4, 7,false, true,"Case_1.jpg"),Case(110, 5, 7,false, true,"Case_0.jpg"),Case(111, 6, 7,false, true,"Case_0.jpg"), Case(112, 7, 7,false, true,"Case_1.jpg"),Case(113, 8, 7,false, true,"Case_0.jpg"),Case(114, 9, 7,false, true,"Case_0.jpg"), Case(115, 10, 7,false, true,"Case_1.jpg"),Case(116, 11, 7,false, true,"Case_0.jpg"),Case(117, 12, 7,false, false,"Case_117.jpg"), Case(118, 13, 7,false, true,"Case_1.jpg"), Case(119, 14, 7,false, true,"Case_1.jpg")},
{Case(120, 0, 8,false, true,"Case_0.jpg"), Case(121, 1, 8,false, false,"Case_121.jpg"),Case(122, 2, 8,false, false,"Case_122.jpg"),Case(123, 3, 8,false, false,"Case_123.jpg"), Case(124, 4, 8,false, false,"Case_124.jpg"),Case(125, 5, 8,false, false,"Case_125.jpg"),Case(126, 6, 8,false, false,"Case_126.jpg"), Case(127, 7, 8,false, false,"Case_127.jpg"),Case(128, 8, 8,false, false,"Case_128.jpg"),Case(129, 9, 8,false, false,"Case_129.jpg"), Case(130, 10, 8,false, false,"Case_130.jpg"),Case(131, 11, 8,false, true,"Case_0.jpg"),Case(132, 12, 8,false, false,"Case_132.jpg"), Case(133, 13, 8,false, false,"Case_133.jpg"), Case(134, 14, 8,false, true,"Case_1.jpg")},
{Case(135, 0, 9,false, true,"Case_0.jpg"), Case(136, 1, 9,false, false,"Case_136.jpg"),Case(137, 2, 9,false, true,"Case_0.jpg"),Case(138, 3, 9,false, true,"Case_0.jpg"), Case(139, 4, 9,false, false,"Case_139.jpg"),Case(140, 5, 9,false, false,"Case_140.jpg"),Case(141, 6, 9,false, true,"Case_0.jpg"), Case(142, 7, 9,false, true,"Case_0.jpg"),Case(143, 8, 9,false, false,"Case_143.jpg"),Case(144, 9, 9,false, true,"Case_0.jpg"), Case(145, 10, 9,false, false,"Case_145.jpg"),Case(146, 11, 9,false, true,"Case_0.jpg"),Case(147, 12, 9,false, true,"Case_0.jpg"), Case(148, 13, 9,false, false,"Case_148.jpg"), Case(149, 14, 9,false, true,"Case_1.jpg")},
{Case(150, 0, 10,false, true,"Case_0.jpg"), Case(151, 1, 10,false, false,"Case_151.jpg"),Case(152, 2, 10,false, false,"Case_152.jpg"),Case(153, 3, 10,false, true,"Case_0.jpg"), Case(154, 4, 10,false, true,"Case_1.jpg"),Case(155, 5, 10,false, false,"Case_155.jpg"),Case(156, 6, 10,false, true,"Case_0.jpg"), Case(157, 7, 10,false, false,"Case_157.jpg"),Case(158, 8, 10,false, false,"Case_158.jpg"),Case(159, 9, 10,false, true,"Case_0.jpg"), Case(160, 10, 10,false, false,"Case_160.jpg"),Case(161, 11, 10,false, false,"Case_161.jpg"),Case(162, 12, 10,false, true,"Case_0.jpg"), Case(163, 13, 10,false, false,"Case_163.jpg"), Case(164, 14, 10,false, true,"Case_1.jpg")},
{Case(165, 0, 11,false, true,"Case_0.jpg"), Case(166, 1, 11,false, true,"Case_1.jpg"),Case(167, 2, 11,false, false,"Case_167.jpg"),Case(168, 3, 11,false, false,"Case_168.jpg"), Case(169, 4, 11,false, true,"Case_1.jpg"),Case(170, 5, 11,false, false,"Case_170.jpg"),Case(171, 6, 11,false, false,"Case_171.jpg"), Case(172, 7, 11,false, false,"Case_172.jpg"),Case(173, 8, 11,false, false,"Case_173.jpg"),Case(174, 9, 11,false, true,"Case_0.jpg"), Case(175, 10, 1,false, true,"Case_1.jpg"),Case(176, 11, 11,false, false,"Case_176.jpg"),Case(177, 12, 11,false, false,"Case_177.jpg"), Case(178, 13, 11,false, false,"Case_178.jpg"), Case(179, 14, 11,false, true,"Case_1.jpg")},
{Case(180, 0, 12,false, true,"Case_0.jpg"), Case(181, 1, 12,false, true,"Case_1.jpg"),Case(182, 2, 12,false, true,"Case_0.jpg"),Case(183, 3, 12,false, false,"Case_83.jpg"), Case(184, 4, 12,false, true,"Case_1.jpg"),Case(185, 5, 12,false, false,"Case_185.jpg"),Case(186, 6, 12,false, true,"Case_0.jpg"), Case(187, 7, 12,false, false,"Case_187.jpg"),Case(188, 8, 12,false, true,"Case_0.jpg"),Case(189, 9, 12,false, false,"Case_0.jpg"), Case(190, 10, 12,false, false,"Case_1.jpg"),Case(191, 11, 12,false, false,"Case_0.jpg"),Case(192, 12, 12,false, false,"Case_0.jpg"), Case(193, 13, 12,false, false,"Case_1.jpg"), Case(194, 14, 12,false, true,"Case_1.jpg")},
{Case(195, 0, 13,false, true,"Case_0.jpg"), Case(196, 1, 13,false, false,"Case_196.jpg"),Case(197, 2, 13,false, false,"Case_197.jpg"),Case(198, 3, 13,false, false,"Case_198.jpg"), Case(199, 4, 13,false, false,"Case_199.jpg"),Case(200, 5, 13,false, false,"Case_200.jpg"),Case(201, 6, 13,false, true,"Case_201.jpg"), Case(202, 7, 13,false, false,"Case_202.jpg"),Case(203, 8, 13,false, false,"Case_203.jpg"),Case(204, 9, 13,false, false,"Case_204.jpg"), Case(205, 10, 13,false, false,"Case_205.jpg"),Case(206, 11, 13,false, false,"Case_206.jpg"),Case(207, 12, 13,false, false,"Case_0.jpg"), Case(208, 13, 13,false, true,"Case_1.jpg"), Case(209, 14, 13,false, true,"Case_1.jpg")},
{Case(210, 0, 14,false, true,"Case_0.jpg"), Case(211, 1, 14,false, true,"Case_1.jpg"),Case(212, 2, 14,false, true,"Case_0.jpg"),Case(213, 3, 14,false, true,"Case_0.jpg"), Case(214, 4, 14,false, true,"Case_1.jpg"),Case(215, 5, 14,false, true,"Case_0.jpg"),Case(216, 6, 14,false, true,"Case_0.jpg"), Case(217, 7, 14,false, true,"Case_1.jpg"),Case(218, 8, 14,false, true,"Case_0.jpg"),Case(219, 9, 14,false, true,"Case_0.jpg"), Case(220, 10, 14,false, true,"Case_1.jpg"),Case(221, 11, 14,false, true,"Case_0.jpg"),Case(222, 12, 14,false, true,"Case_0.jpg"), Case(223, 13, 14,false, true,"Case_1.jpg"), Case(224, 14, 14,false, true,"Case_1.jpg")}};
        return vect;
    }


    //std::vector<Case> Carte_2(2,Case(1, 0, 0,false, false,"plop")); // test de la carte pour deplacements
    // test_1 = Case(1, 0, 0,false, false,"plop");
    // test_2 = Case(1, 0, 0,false, false,"plop");

    // test_3 = Case(1, 0, 0,false, false,"plop");

    // Carte_2.push_back(test_1);
    // Carte_2.push_back(test_2);
    // Carte_2.push_back(test_3);


    //Case& nb_1 = Carte_2[1];

    //nb_1 = Case(99, 0, 0,false, false,"prout");
    //Case Carte_2[1] = Case(1, 0, 0,false, false,"test");
    //Case objet = Case(99, 0, 0,false, false,"prout");
    //Carte[1] = Case(99, 0, 0,false, false,"prout");
    //Carte_2[1] = objet;



    Personnage::Personnage(int id)
    {
        Id = id;
        m_vie = 100;                              
        m_degats= 10;//NArme.getDegats();
        m_X_pos = 0;
        m_Y_pos = 0;
        m_niveau = 1;
        m_experience = 0;
        m_puissance = 1;
        m_est_vivant = true;
        m_sprite = "Perso";
        //m_tile = new Case(1, 0, 0,false, false,"plop"); //
        m_tile = &Carte_2()[0][0];

    };

    //Personnage::Personnage(int id, int vieAtStart, int degatsArmeAtStart)
    //{
    //   m_vie = vieAtStart;
    //   m_degatsArme = degatsArmeAtStart;
    //   persoId = id; 
    //   X_pos = 0;
    //   Y_pos = 0;
    //   niveau = 1;
    //   experience = 0;            
    // };

    void Personnage::recevoirDegats(int nombreDegats)
    {

     m_vie = m_vie - nombreDegats;      //IL faut rajouter une fonction coup critique
    };

    void Personnage::attaquer(Personnage &cible)
    {
    cible.recevoirDegats(m_degats);         //Attention aux attribut privés
    };

    void Personnage::guerir()
    {
         m_vie = m_vie + 40;
         
         if (m_vie > 100)
         {
            m_vie = 100;
         }    
    };

    void Personnage::regen()
    {
         m_vie = 100;
           
    };



    bool Personnage::estVivant()                //tout est dans le nom
    {
    if (m_vie > 0)
        return true;
    else             
        return false;
    };

    Personnage::~Personnage()                       //destructeur
    {
                           
    };
    
    int Personnage::get_vie()
    {
       return m_vie; 
    };
    int Personnage::get_Id()
    {
       return Id; 
    };
   

    // void Personnage::se_blesser(int douleur)
    // {
    //      m_vie = m_vie - douleur;
    //      if (m_vie < 0)
    //         m_vie = 0;    
    // };
    int Personnage::get_degats()
    {
       return m_degats; 
    };

    int Personnage::get_X_pos()
    {
       return m_X_pos; 
    };

    int Personnage::get_Y_pos()
    {
       return m_Y_pos; 
    };

    int Personnage::get_niveau()
    {
       return m_niveau; 
    };

    int Personnage::get_experience()
    {
       return m_experience; 
    };

    int Personnage::get_puissance()
    {
       return m_puissance; 
    };
    bool Personnage::get_vivant()
    {
       return m_est_vivant; 
    };

    std::string Personnage::get_sprite()
    {
       return m_sprite; 
    };

    Case Personnage::get_case()
    {
       return *m_tile; 
    };

    void Personnage::set_case(Case & Case_cible)
    {
        m_tile = &Case_cible; 
    };

    // void Personnage::set_sprite()
    // {
    //     m_tile = &Case_cible; 
    // };

    void Personnage::change_niveau()
    {
    	

    	if ((m_experience > 0) && (m_experience < 110))
    	{
    		m_niveau = 1;
    	}

    	else if ((m_experience >= 110) && (m_experience < 650))
    	{
    		m_niveau = 2;
    	}

    	else if ((m_experience >= 650) && (m_experience < 1500))
    	{
    		m_niveau = 3;
    	}

    	else if ((m_experience >= 1500) && (m_experience < 2800))
    	{
    		m_niveau = 4;
    	}

    	else if ((m_experience >= 2800) && (m_experience < 4800))
    	{
    		m_niveau = 5;
    	}

    	else if ((m_experience >= 4800) && (m_experience < 7300))
    	{
    		m_niveau = 6;
    	}

    	else if ((m_experience >= 7300) && (m_experience < 10500))
    	{
    		m_niveau = 7;
    	}

    	else if ((m_experience >= 10500) && (m_experience < 14500))
    	{
    		m_niveau = 8;
    	}

    	else if ((m_experience >= 14500) && (m_experience < 19200))
    	{
    		m_niveau = 9;
    	}

    	else 
    	{
    		m_niveau = 10;
    	}
    };

    void Personnage::go_up()
    {
    	if ((m_Y_pos >0) &&(m_Y_pos<=14))
    	{
    		m_Y_pos = m_Y_pos-1 ;
            m_tile = &Carte_2()[m_Y_pos][m_X_pos]; 

    	}

    	else
    	{
    		m_Y_pos = m_Y_pos;
    	}



    };


	void Personnage::go_down()
	{
		if ((m_Y_pos >=0) &&(m_Y_pos<14) )
    	{
    		m_Y_pos = m_Y_pos+1 ; 
            m_tile = &Carte_2()[m_Y_pos][m_X_pos]; // [x][y]
    	}

    	else
    	{
    		m_Y_pos = m_Y_pos;
    	}
	};

	void Personnage::go_left() /// modifie
	{
		if ((m_X_pos >0) &&(m_X_pos<=14))
    	{
    		m_X_pos = m_X_pos-1 ;
            m_tile = &Carte_2()[m_Y_pos][m_X_pos]; 

    	}

    	else
    	{
    		m_X_pos = m_X_pos;
    	}
	};


	void Personnage::go_right() /// modifie
	{
		if ((m_X_pos >=0) &&(m_X_pos<14) )
    	{
    		m_X_pos = m_X_pos+1 ;
            m_tile = &Carte_2()[m_Y_pos][m_X_pos]; // [x][y] 

    	}

    	else
    	{
    		m_X_pos = m_X_pos;
    	}


	};