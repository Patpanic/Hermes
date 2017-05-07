/* Permet de vérifier le sens de rotation
 * et la position droite gauche des moteurs
 * Ajuster les branchements des moteurs
 * sur le shield pour correspondre au fonctionnement
 * M1 moteur droit
 * M2 moteur gauche
 * vitesse positive => marche avant
 */


#include "Arduino.h"
#include <DRV8835MotorShield.h>


DRV8835MotorShield mot;


void setup()
{

}


void loop()
{
	mot.setM1Speed(200);
	delay(1000);
	mot.setM2Speed(200);
	delay(1000);
	mot.setSpeeds(0,0);
	delay(1000);
}

