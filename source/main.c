#include <3ds.h>
#include <stdio.h>
#include <string.h>

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

	printf("v2.4\n");
	printf("if it dont work then go for a pron break and try again lator!\n");
	printf("if u too scared for pokegomz pres b\n");

	for(A = 0; A < 60000; A = A+5){
		//every 300A is a second
		hidScanInput();
		u32 kDown = hidKeysDown();
		if (A == 1800) printf("DOWNLOADING FLIES OF POKEGOMZ\n");
		if (A == 3600) printf("DOWNLOA COMPLETE!\n");
		if (A == 5400) printf("bribing gam freck to aron valt all\n"), printf("valted pokegomz in sord and sheld..\n");
		if (A == 7200) printf("installing frii pokegom gam..\n");
		if (A == 9600) printf("frii pokegom gam instal complet!\n");
		if (A == 10200) printf("jus make sur u don kil ur pokegomz\n"), printf("OR U BRIC!\n");
		if (A == 10800) printf("pathcing flies of pokegomz\n");
		if (A == 11400) printf("sicc!! now generat new systume imag\n");
		if (A == 13200) printf("systume imag genrat now\n"), printf("flash ontoo emptii brian\n");
		if (A == 15000) printf("doo sam ting with reecuvury and FEI\n"), printf("partishuns\n");
		if (A == 16800) printf("nowe update PBTS MKPN eedishun too\n"), printf("v2.0.0\n");
		if (A == 18600) printf("now u hav v2.0.0 becaus v0.0.1 suck 4-bite\n"), printf("bik.\n");
                if (A == 20400) printf("Downola 2TB ReshiRAM!\n");
		if (A == 22200) printf("flash buy-os form u..\n");
		if (A == 23400) printf("OH No HECK yo got frikken ban by MASUDA!!!\n");
		if (A == 25200) printf("makin alt accooun (ur such a hackers)\n");
		if (A == 26100) printf("u got aron ban my dud!!\n");
                if (A == 27000) printf("cunvirtin flies of pokegomz\n");
                if (A == 27900) printf("now imparti flies of pokegomz\n"); 
                if (A == 28800) printf("Gib U pokegomz in rel lif..\n");
		if (A == 29700) printf("Nowe u hav a rel liv Charizard!!!!!\n");

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
