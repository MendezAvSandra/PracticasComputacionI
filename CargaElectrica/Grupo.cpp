/*Autor: Sandra Mendez Aviles
 * mendezavilessandra@gmail.com
 * 07 de noviembre de 2021 */

# include <string>
# include <array>
# include <iostream>
# include <iomanip>

#include "Grupo.h"

using namespace std;

Grupo::Grupo(){
      nombreGrupo = " ";
      pkGrupo = 0;
      cargaGrupo = 0;
}
string Grupo::GetNombreGrupo(){
  return nombreGrupo;
};

float Grupo::GetCarga(){
  float pH;
  if (nombreGrupo == "Carboxilo"){
    if (pH < 2.16){
      cargaMolecula = 0;
    }
    else{
      cargaMolecula = -1;
    }
  }
  if (nombreGrupo == "Amino"){
    if (pH < 9.06){
      cargaMolecula = 1;
    }
    else{
      cargaMolecula = 0;
    }
  }
  if (nombreGrupo == "R"){
    if (pH < 10.54){
      cargaMolecula = 1;
    }
    else{
      cargaMolecula = 0;
    }
  }
  return cargaMolecula;
};
