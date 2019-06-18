#include <3ds.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

int A = 0;

int main(void)
{
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);
	u8 param[0x300];
	u8 hmac[0x20];
	u8 regionCode;
	u64 shopID;
	CFGU_SecureInfoGetRegion(&regionCode);
	switch (regionCode)
	{
	case 0:
		shopID = 0x0004001000020900;
		break;
	case 1:
		shopID = 0x0004001000021900;
		break;
	case 2:
		shopID = 0x0004001000022900;
		break;
	default:
		shopID = 0x00;
	}
        srand(time(0));

        cout << "v2.4" << endl;
        cout << "if it dont work then go for a pron break and try again lator!" << endl;
        cout << "if u too scared for pokegomz pres b" << endl;

	for(A = 0; A < 60000; A = A+5){
		hidScanInput();
		u32 kDown = hidKeysDown();
		if (A == 1800) cout << "DOWNLOADING FLIES OF POKEGOMZ" << endl;
		if (A == 3600) cout << "DOWNLOA COMPLETE!" << endl;
		if (A == 5400)
{
 cout << "bribing gam freck to aron valt all valted pokegomz" << endl;
 cout << "in sord and sheld.." << endl;
}
		if (A == 7200) cout << "installing frii pokegom gam.." << endl;
		if (A == 9600) cout << "frii pokegom gam instal complet!" << endl;
		if (A == 10200) cout << "jus make sur u don kil ur pokegomz OR U BRIC!" << endl;
		if (A == 10800) cout << "pathcing flies of pokegomz.." << endl;
		if (A == 11400) cout << "sicc!! now generat new systume imag" << endl;
		if (A == 13200) cout << "systume imag genrat now flash ontoo emptii brian" << endl;
		if (A == 15000) cout << "doo sam ting with reecuvury and FEI partishuns" << endl;
		if (A == 16800) cout << "nowe update PBTS MKPN eedishun too v2.0.0" << endl;
		if (A == 18600) cout << "now u hav v2.0.0 becaus v0.0.1 suck 4-bite bik." << endl;
                if (A == 20400) cout << "Downola 2TB ReshiRAM!" << endl;
		if (A == 22200) cout << "flash buy-os form u.." << endl;
		if (A == 23400) cout << "OH No HECK yo got frikken ban by MASUDA!!!" << endl;
		if (A == 25200) cout << "makin alt accooun (ur such a hackers)" << endl;
		if (A == 26100) cout << "u got aron ban my dud!!" << endl;
                if (A == 27000) cout << "cunvirtin flies of pokegomz" << endl;
                if (A == 27900) cout << "now imparti flies of pokegomz" << endl;
                if (A == 28800) cout << "Gib U pokegomz in rel lif.." << endl;
		if (A == 29700) {
                if (1 + (rand () % 151) == 1) cout << "Nowe u hav a rel liv Bulbasaur!!!!!" << endl;
                if (1 + (rand () % 151) == 2) cout << "Nowe u hav a rel liv Ivysaur!!!!!" << endl;
                if (1 + (rand () % 151) == 3) cout << "Nowe u hav a rel liv Venusaur!!!!!" << endl;
                if (1 + (rand () % 151) == 4) cout << "Nowe u hav a rel liv Charmander!!!!!" << endl;
                if (1 + (rand () % 151) == 5) cout << "Nowe u hav a rel liv Charmeleon!!!!!" << endl;
                if (1 + (rand () % 151) == 6) cout << "Nowe u hav a rel liv Charizard!!!!!" << endl;
                if (1 + (rand () % 151) == 7) cout << "Nowe u hav a rel liv Squirtle!!!!!" << endl;
                if (1 + (rand () % 151) == 8) cout << "Nowe u hav a rel liv Wartortle!!!!!" << endl;
                if (1 + (rand () % 151) == 9) cout << "Nowe u hav a rel liv Blastoise!!!!!" << endl;
                if (1 + (rand () % 151) == 10) cout << "Nowe u hav a rel liv Caterpie!!!!!" << endl;
                if (1 + (rand () % 151) == 11) cout << "Nowe u hav a rel liv Metapod!!!!!" << endl;
                if (1 + (rand () % 151) == 12) cout << "Nowe u hav a rel liv Butterfree!!!!!" << endl;
                if (1 + (rand () % 151) == 13) cout << "Nowe u hav a rel liv Weedle!!!!!" << endl;
                if (1 + (rand () % 151) == 14) cout << "Nowe u hav a rel liv Kakuna!!!!!" << endl;
                if (1 + (rand () % 151) == 15) cout << "Nowe u hav a rel liv Beedrill!!!!!" << endl;
                if (1 + (rand () % 151) == 16) cout << "Nowe u hav a rel liv Pidgey!!!!!" << endl;
                if (1 + (rand () % 151) == 17) cout << "Nowe u hav a rel liv Pidgeotto!!!!!" << endl;
                if (1 + (rand () % 151) == 18) cout << "Nowe u hav a rel liv Pidgeot!!!!!" << endl;
                if (1 + (rand () % 151) == 19) cout << "Nowe u hav a rel liv Rattata!!!!!" << endl;
                if (1 + (rand () % 151) == 20) cout << "Nowe u hav a rel liv Raticate!!!!!" << endl;
                if (1 + (rand () % 151) == 21) cout << "Nowe u hav a rel liv Spearow!!!!!" << endl;
                if (1 + (rand () % 151) == 22) cout << "Nowe u hav a rel liv Fearow!!!!!" << endl;
                if (1 + (rand () % 151) == 23) cout << "Nowe u hav a rel liv Ekans!!!!!" << endl;
                if (1 + (rand () % 151) == 24) cout << "Nowe u hav a rel liv Arbok!!!!!" << endl;
                if (1 + (rand () % 151) == 25) cout << "Nowe u hav a rel liv Pikachu!!!!!" << endl;
                if (1 + (rand () % 151) == 26) cout << "Nowe u hav a rel liv Raichu!!!!!" << endl;
                if (1 + (rand () % 151) == 27) cout << "Nowe u hav a rel liv Sandshrew!!!!!" << endl;
                if (1 + (rand () % 151) == 28) cout << "Nowe u hav a rel liv Sandslash!!!!!" << endl;
                if (1 + (rand () % 151) == 29) cout << "Nowe u hav a rel liv Nidoran F!!!!!" << endl;
                if (1 + (rand () % 151) == 30) cout << "Nowe u hav a rel liv Nidorina!!!!!" << endl;
                if (1 + (rand () % 151) == 31) cout << "Nowe u hav a rel liv Nidoqueen!!!!!" << endl;
                if (1 + (rand () % 151) == 32) cout << "Nowe u hav a rel liv Nidoran M!!!!!" << endl;
                if (1 + (rand () % 151) == 33) cout << "Nowe u hav a rel liv Nidorino!!!!!" << endl;
                if (1 + (rand () % 151) == 34) cout << "Nowe u hav a rel liv Nidoking!!!!!" << endl;
                if (1 + (rand () % 151) == 35) cout << "Nowe u hav a rel liv Clefairy!!!!!" << endl;
                if (1 + (rand () % 151) == 36) cout << "Nowe u hav a rel liv Clefable!!!!!" << endl;
                if (1 + (rand () % 151) == 37) cout << "Nowe u hav a rel liv Vulpix!!!!!" << endl;
                if (1 + (rand () % 151) == 38) cout << "Nowe u hav a rel liv Ninetales!!!!!" << endl;
                if (1 + (rand () % 151) == 39) cout << "Nowe u hav a rel liv Jigglypuff!!!!!" << endl;
                if (1 + (rand () % 151) == 40) cout << "Nowe u hav a rel liv Wigglytuff!!!!!" << endl;
                if (1 + (rand () % 151) == 41) cout << "Nowe u hav a rel liv Zubat!!!!!" << endl;
                if (1 + (rand () % 151) == 42) cout << "Nowe u hav a rel liv Golbat!!!!!" << endl;
                if (1 + (rand () % 151) == 43) cout << "Nowe u hav a rel liv Oddish!!!!!" << endl;
                if (1 + (rand () % 151) == 44) cout << "Nowe u hav a rel liv Gloom!!!!!" << endl;
                if (1 + (rand () % 151) == 45) cout << "Nowe u hav a rel liv Vileplume!!!!!" << endl;
                if (1 + (rand () % 151) == 46) cout << "Nowe u hav a rel liv Paras!!!!!" << endl;
                if (1 + (rand () % 151) == 47) cout << "Nowe u hav a rel liv Parasect!!!!!" << endl;
                if (1 + (rand () % 151) == 48) cout << "Nowe u hav a rel liv Venonat!!!!!" << endl;
                if (1 + (rand () % 151) == 49) cout << "Nowe u hav a rel liv Venomoth!!!!!" << endl;
                if (1 + (rand () % 151) == 50) cout << "Nowe u hav a rel liv Diglett!!!!!" << endl;
                if (1 + (rand () % 151) == 51) cout << "Nowe u hav a rel liv Dugtrio!!!!!" << endl;
                if (1 + (rand () % 151) == 52) cout << "Nowe u hav a rel liv Meowth!!!!!" << endl;
                if (1 + (rand () % 151) == 53) cout << "Nowe u hav a rel liv Persian!!!!!" << endl;
                if (1 + (rand () % 151) == 54) cout << "Nowe u hav a rel liv Psyduck!!!!!" << endl;
                if (1 + (rand () % 151) == 55) cout << "Nowe u hav a rel liv Golduck!!!!!" << endl;
                if (1 + (rand () % 151) == 56) cout << "Nowe u hav a rel liv Mankey!!!!!" << endl;
                if (1 + (rand () % 151) == 57) cout << "Nowe u hav a rel liv Primeape!!!!!" << endl;
                if (1 + (rand () % 151) == 58) cout << "Nowe u hav a rel liv Growlithe!!!!!" << endl;
                if (1 + (rand () % 151) == 59) cout << "Nowe u hav a rel liv Arcanine!!!!!" << endl;
                if (1 + (rand () % 151) == 60) cout << "Nowe u hav a rel liv Poliwag!!!!!" << endl;
                if (1 + (rand () % 151) == 61) cout << "Nowe u hav a rel liv Poliwhirl!!!!!" << endl;
                if (1 + (rand () % 151) == 62) cout << "Nowe u hav a rel liv Poliwrath!!!!!" << endl;
                if (1 + (rand () % 151) == 63) cout << "Nowe u hav a rel liv Abra!!!!!" << endl;
                if (1 + (rand () % 151) == 64) cout << "Nowe u hav a rel liv Kadabra!!!!!" << endl;
                if (1 + (rand () % 151) == 65) cout << "Nowe u hav a rel liv Alakazam!!!!!" << endl;
                if (1 + (rand () % 151) == 66) cout << "Nowe u hav a rel liv Machop!!!!!" << endl;
                if (1 + (rand () % 151) == 67) cout << "Nowe u hav a rel liv Machoke!!!!!" << endl;
                if (1 + (rand () % 151) == 68) cout << "Nowe u hav a rel liv Machamp!!!!!" << endl;
                if (1 + (rand () % 151) == 69) cout << "Nowe u hav a rel liv Bellsprout!!!!!" << endl;
                if (1 + (rand () % 151) == 70) cout << "Nowe u hav a rel liv Weepinbell!!!!!" << endl;
                if (1 + (rand () % 151) == 71) cout << "Nowe u hav a rel liv Victreebel!!!!!" << endl;
                if (1 + (rand () % 151) == 72) cout << "Nowe u hav a rel liv Tentacool!!!!!" << endl;
                if (1 + (rand () % 151) == 73) cout << "Nowe u hav a rel liv Tentacruel!!!!!" << endl;
                if (1 + (rand () % 151) == 74) cout << "Nowe u hav a rel liv Geodude!!!!!" << endl;
                if (1 + (rand () % 151) == 75) cout << "Nowe u hav a rel liv Graveler!!!!!" << endl;
                if (1 + (rand () % 151) == 76) cout << "Nowe u hav a rel liv Golem!!!!!" << endl;
                if (1 + (rand () % 151) == 77) cout << "Nowe u hav a rel liv Ponyta!!!!!" << endl;
                if (1 + (rand () % 151) == 78) cout << "Nowe u hav a rel liv Rapidash!!!!!" << endl;
                if (1 + (rand () % 151) == 79) cout << "Nowe u hav a rel liv Slowpoke!!!!!" << endl;
                if (1 + (rand () % 151) == 80) cout << "Nowe u hav a rel liv Slowbro!!!!!" << endl;
                if (1 + (rand () % 151) == 81) cout << "Nowe u hav a rel liv Magnemite!!!!!" << endl;
                if (1 + (rand () % 151) == 82) cout << "Nowe u hav a rel liv Magneton!!!!!" << endl;
                if (1 + (rand () % 151) == 83) cout << "Nowe u hav a rel liv Farfetch'd!!!!!" << endl;
                if (1 + (rand () % 151) == 84) cout << "Nowe u hav a rel liv Doduo!!!!!" << endl;
                if (1 + (rand () % 151) == 85) cout << "Nowe u hav a rel liv Dodrio!!!!!" << endl;
                if (1 + (rand () % 151) == 86) cout << "Nowe u hav a rel liv Seel!!!!!" << endl;
                if (1 + (rand () % 151) == 87) cout << "Nowe u hav a rel liv Dewgong!!!!!" << endl;
                if (1 + (rand () % 151) == 88) cout << "Nowe u hav a rel liv Grimer!!!!!" << endl;
                if (1 + (rand () % 151) == 89) cout << "Nowe u hav a rel liv Muk!!!!!" << endl;
                if (1 + (rand () % 151) == 90) cout << "Nowe u hav a rel liv Shellder!!!!!" << endl;
                if (1 + (rand () % 151) == 91) cout << "Nowe u hav a rel liv Cloyster!!!!!" << endl;
                if (1 + (rand () % 151) == 92) cout << "Nowe u hav a rel liv Gastly!!!!!" << endl;
                if (1 + (rand () % 151) == 93) cout << "Nowe u hav a rel liv Haunter!!!!!" << endl;
                if (1 + (rand () % 151) == 94) cout << "Nowe u hav a rel liv Gengar!!!!!" << endl;
                if (1 + (rand () % 151) == 95) cout << "Nowe u hav a rel liv Onix!!!!!" << endl;
                if (1 + (rand () % 151) == 96) cout << "Nowe u hav a rel liv Drowzee!!!!!" << endl;
                if (1 + (rand () % 151) == 97) cout << "Nowe u hav a rel liv Hypno!!!!!" << endl;
                if (1 + (rand () % 151) == 98) cout << "Nowe u hav a rel liv Krabby!!!!!" << endl;
                if (1 + (rand () % 151) == 99) cout << "Nowe u hav a rel liv Kingler!!!!!" << endl;
                if (1 + (rand () % 151) == 100) cout << "Nowe u hav a rel liv Voltorb!!!!!" << endl;
                if (1 + (rand () % 151) == 101) cout << "Nowe u hav a rel liv Electrode!!!!!" << endl;
                if (1 + (rand () % 151) == 102) cout << "Nowe u hav a rel liv Exeggcute!!!!!" << endl;
                if (1 + (rand () % 151) == 103) cout << "Nowe u hav a rel liv Exeggutor!!!!!" << endl;
                if (1 + (rand () % 151) == 104) cout << "Nowe u hav a rel liv Cubone!!!!!" << endl;
                if (1 + (rand () % 151) == 105) cout << "Nowe u hav a rel liv Marowak!!!!!" << endl;
                if (1 + (rand () % 151) == 106) cout << "Nowe u hav a rel liv Hitmonlee!!!!!" << endl;
                if (1 + (rand () % 151) == 107) cout << "Nowe u hav a rel liv Hitmonchan!!!!!" << endl;
                if (1 + (rand () % 151) == 108) cout << "Nowe u hav a rel liv Lickitung!!!!!" << endl;
                if (1 + (rand () % 151) == 109) cout << "Nowe u hav a rel liv Koffing!!!!!" << endl;
                if (1 + (rand () % 151) == 110) cout << "Nowe u hav a rel liv Weezing!!!!!" << endl;
                if (1 + (rand () % 151) == 111) cout << "Nowe u hav a rel liv Rhyhorn!!!!!" << endl;
                if (1 + (rand () % 151) == 112) cout << "Nowe u hav a rel liv Rhydon!!!!!" << endl;
                if (1 + (rand () % 151) == 113) cout << "Nowe u hav a rel liv Chansey!!!!!" << endl;
                if (1 + (rand () % 151) == 114) cout << "Nowe u hav a rel liv Tangela!!!!!" << endl;
                if (1 + (rand () % 151) == 115) cout << "Nowe u hav a rel liv Kangaskhan!!!!!" << endl;
                if (1 + (rand () % 151) == 116) cout << "Nowe u hav a rel liv Horsea!!!!!" << endl;
                if (1 + (rand () % 151) == 117) cout << "Nowe u hav a rel liv Seadra!!!!!" << endl;
                if (1 + (rand () % 151) == 118) cout << "Nowe u hav a rel liv Goldeen!!!!!" << endl;
                if (1 + (rand () % 151) == 119) cout << "Nowe u hav a rel liv Seaking!!!!!" << endl;
                if (1 + (rand () % 151) == 120) cout << "Nowe u hav a rel liv Staryu!!!!!" << endl;
                if (1 + (rand () % 151) == 121) cout << "Nowe u hav a rel liv Starmie!!!!!" << endl;
                if (1 + (rand () % 151) == 122) cout << "Nowe u hav a rel liv Mr. Mime!!!!!" << endl;
                if (1 + (rand () % 151) == 123) cout << "Nowe u hav a rel liv Scyther!!!!!" << endl;
                if (1 + (rand () % 151) == 124) cout << "Nowe u hav a rel liv Jynx!!!!!" << endl;
                if (1 + (rand () % 151) == 125) cout << "Nowe u hav a rel liv Electabuzz!!!!!" << endl;
                if (1 + (rand () % 151) == 126) cout << "Nowe u hav a rel liv Magmar!!!!!" << endl;
                if (1 + (rand () % 151) == 127) cout << "Nowe u hav a rel liv Pinsir!!!!!" << endl;
                if (1 + (rand () % 151) == 128) cout << "Nowe u hav a rel liv Tauros!!!!!" << endl;
                if (1 + (rand () % 151) == 129) cout << "Nowe u hav a rel liv Magikarp!!!!!" << endl;
                if (1 + (rand () % 151) == 130) cout << "Nowe u hav a rel liv Gyarados!!!!!" << endl;
                if (1 + (rand () % 151) == 131) cout << "Nowe u hav a rel liv Lapras!!!!!" << endl;
                if (1 + (rand () % 151) == 132) cout << "Nowe u hav a rel liv Ditto!!!!!" << endl;
                if (1 + (rand () % 151) == 133) cout << "Nowe u hav a rel liv Eevee!!!!!" << endl;
                if (1 + (rand () % 151) == 134) cout << "Nowe u hav a rel liv Vaporeon!!!!!" << endl;
                if (1 + (rand () % 151) == 135) cout << "Nowe u hav a rel liv Jolteon!!!!!" << endl;
                if (1 + (rand () % 151) == 136) cout << "Nowe u hav a rel liv Flareon!!!!!" << endl;
                if (1 + (rand () % 151) == 137) cout << "Nowe u hav a rel liv Porygon!!!!!" << endl;
                if (1 + (rand () % 151) == 138) cout << "Nowe u hav a rel liv Omanyte!!!!!" << endl;
                if (1 + (rand () % 151) == 139) cout << "Nowe u hav a rel liv Omastar!!!!!" << endl;
                if (1 + (rand () % 151) == 140) cout << "Nowe u hav a rel liv Kabuto!!!!!" << endl;
                if (1 + (rand () % 151) == 141) cout << "Nowe u hav a rel liv Kabutops!!!!!" << endl;
                if (1 + (rand () % 151) == 142) cout << "Nowe u hav a rel liv Aerodactyl!!!!!" << endl;
                if (1 + (rand () % 151) == 143) cout << "Nowe u hav a rel liv Snorlax!!!!!" << endl;
                if (1 + (rand () % 151) == 144) cout << "Nowe u hav a rel liv Articuno!!!!!" << endl;
                if (1 + (rand () % 151) == 145) cout << "Nowe u hav a rel liv Zapdos!!!!!" << endl;
                if (1 + (rand () % 151) == 146) cout << "Nowe u hav a rel liv Moltres!!!!!" << endl;
                if (1 + (rand () % 151) == 147) cout << "Nowe u hav a rel liv Dratini!!!!!" << endl;
                if (1 + (rand () % 151) == 148) cout << "Nowe u hav a rel liv Dragonair!!!!!" << endl;
                if (1 + (rand () % 151) == 149) cout << "Nowe u hav a rel liv Dragonite!!!!!" << endl;
                if (1 + (rand () % 151) == 150) cout << "Nowe u hav a rel liv Mewtwo!!!!!" << endl;
                if (1 + (rand () % 151) == 151) cout << "Nowe u hav a rel liv Mew!!!!!" << endl;
}

		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
		if (kDown & KEY_B) break;
		if (A == 31500){
		memset(param, 0, sizeof(param));
		memset(hmac, 0, sizeof(hmac));
		APT_PrepareToDoApplicationJump(0, shopID, 0);
		APT_DoApplicationJump(param, sizeof(param), hmac); } }

	gfxExit();
	return 0;
}
