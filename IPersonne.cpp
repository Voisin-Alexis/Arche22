#include<string>
#include<list>
#include<iostream>
#include<vector>

#include "Eleve.h"
#include "Enseignant.h"
#include "Administrateur.h"
#include "Cours.h"
#include "IPersonne.h"

using namespace std;
	std::string Identifiant;
	std::string Mdp;
	
		 std::string getIdentifiant(){
		 	return Identifiant;
		 }
		 
    	void setIdentifiant(std::string id){
    		Identifiant = id;
		}
		
        std::string getMdp(){
        	return Mdp;
		}
		
        void setMdp(std::string mdp){
        	Mdp = mdp;
		}
