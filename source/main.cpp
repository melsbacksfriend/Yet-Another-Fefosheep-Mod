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

