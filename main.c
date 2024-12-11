 /*
 * MAIN Application File
 * @file main.c
 * @defgroup main MAIN
 * @brief Application MAIN file to test the buzzer
*/

//----------------------------------------------------------
// INCLUDE FILES
//----------------------------------------------------------
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/timer/delay.h"
#include "junoke_song_commande.h"
#include "junoke_eye_commande.h"

//----------------------------------------------------------
// MAIN APPLICATION
//----------------------------------------------------------
int main()
{
    //----------------------------------------------------------
    // initialisation du microcontroleur
    SYSTEM_Initialize(); // NE PAS SUPPIRMER CETTE LIGNE DE CODE
    //----------------------------------------------------------
    // VOTRE CODE CI-DESSOUS
    // INSTRUCTIONS EXECUTEES UNE SEULE FOIS AU DEMARRAGE
    
    uint8_t distance = ultrason_distance();
    //----------------------------------------------------------
    
    while(1){
        //----------------------------------------------------------
        // VOTRE CODE CI-DESSOUS
        
        ultrason_distance();
        
        if(distance >= 1 && distance < 3){
            buzzer_tone(NOTE_C1, 500, 100);
        }
        
        else if(distance >= 3 && distance < 5){
            buzzer_tone(NOTE_C2,500,100);
        }
        
        else if(distance >= 5 && distance < 10){
            buzzer_tone(NOTE_C3,500,100);
        }
        
        else{
            buzzer_tone(NOTE_C7, 500, 100);
        }
        
        
        
        // INSTRUCTIONS EXECUTEES EN BOUCLE INDEFINIMENT
        //----------------------------------------------------------
        
    }
 
}
//----------------------------------------------------------
// FIN DU CODE
//----------------------------------------------------------
