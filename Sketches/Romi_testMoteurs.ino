/* Test des mouvements du robot
 * Marche avant 1s
 * Rotation à droite 1s
 * Rotation à gauche 1s
 * marche arrière 1s
 * repos 1s
 */


#include "Arduino.h"
#include <DRV8835MotorShield.h>


DRV8835MotorShield mot;


void setup()
{

}


void loop()
{
	// Aller droit pendant 1s
	mot.setSpeeds(100,100);
	delay(1000);
	// Tourner à droite pendant 1s
	mot.setM1Speed(100);
	mot.setM2Speed(-100);
	delay(1000);
	// Aller en arrière pendant 1s
	mot.setSpeeds(-100,-100);
	delay(1000);
	// Tourner à gauche pendant 1s
	mot.setM1Speed(-100);
	mot.setM2Speed(100);
	delay(1000);
	// Stop pendant 1s
	mot.setSpeeds(0,0);
	delay(1000);
}
