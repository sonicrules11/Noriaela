#include "../main.h"

class SkinList {
public:
    // Gloves (Added for future use)
    int GloveCT     = 0; // Glovehere
    int GloveT      = 0;// Glovehere
    int GloveID     = 0;// Glove Skin Here
    // Knives
	int KnifeCT		= WEAPON_KNIFE_KARAMBIT;
	int KnifeT 		= WEAPON_KNIFE_KARAMBIT;
	int KnifeID    	= 419;
	// Rifles
    int galil   = 661;
    int famas   = 604;
    int ak47    = 316;
    int m4a4    = 695;
    int m4a1    = 663;
    int scout   = 624;
    int sg      = 200;
    int aug     = 455;
    int awp     = 84;
    int g3      = 606;
    int scar    = 642;
    // Pistols
    int glock   = 367;
    int usp     = 657;
    int p2000   = 71;
    int dual    = 658;
    int p250    = 668;
    int tec9    = 671;
    int five7   = 44;
    int cz      = 297;
    int deagle  = 397;
    int revolver= 12;
    // SMGs
    int mac10   = 433;
    int mp9     = 549;
    int mp7     = 627;
    int ump     = 436;
    int p90     = 636;
    int bizon   = 203;
    // Heavys
    int nova    = 590;
    int sawed   = 638;
    int mag7    = 666;
    int xm      = 654;
    int m249    = 648;
    int negev   = 483;
};

extern SkinList skin;