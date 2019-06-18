#include <3ds.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

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
