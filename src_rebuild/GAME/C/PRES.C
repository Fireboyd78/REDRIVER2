#include "THISDUST.H"
#include "PRES.H"
#include "SYSTEM.H"

#include <STRING.H>

FONT_DIGIT fontDigit[] = {
	{ 2, 0xE },
	{ 0x11, 0xE},
	{ 0x20, 0x10},
	{ 0x31, 0xF},
	{ 0x41, 0xE },
	{ 0x50, 0xE },
	{ 4, 0x10 },
	{ 0x15, 0xE },
	{ 0x24, 0xF },
	{ 0x34, 0x11 },
	{ 0x46, 0xB },
	{ 0x52, 7 },
};

TEXTURE_DETAILS button_textures[11];

char* button_names[11] = {
	"BTNTRIAN",
	"BTNCIRCL",
	"BTNCROSS",
	"BTNSQUAR",
	"BTNUP",
	"BTNDOWN",
	"BTNLEFT",
	"BTNRIGHT",
	"BTNSTART",
	"BTNSELEC",
	"BTNDPAD",
};

CVECTOR gFontColour;
RECT16 fontclutpos;
short fonttpage = 0;
short fontclutid = 0;
char AsciiTable[256] = { 0 };
OUT_FONTINFO fontinfo[128];

// decompiled code
// original method signature: 
// void /*$ra*/ SetTextColour(unsigned char Red /*$a0*/, unsigned char Green /*$a1*/, unsigned char Blue /*$a2*/)
 // line 228, offset 0x00074a10
	/* begin block 1 */
		// Start line: 1308
	/* end block 1 */
	// End Line: 1309

	/* begin block 2 */
		// Start line: 456
	/* end block 2 */
	// End Line: 457

	/* begin block 3 */
		// Start line: 1309
	/* end block 3 */
	// End Line: 1310

// [D]
void SetTextColour(unsigned char Red, unsigned char Green, unsigned char Blue)
{
	gFontColour.r = Red;
	gFontColour.g = Green;
	gFontColour.b = Blue;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ StringWidth(char *pString /*$a0*/)
 // line 245, offset 0x00074a24
	/* begin block 1 */
		// Start line: 246
		// Start offset: 0x00074A24
		// Variables:
	// 		int w; // $a2
	// 		char let; // $a1

		/* begin block 1.1 */
			// Start line: 256
			// Start offset: 0x00074A60
			// Variables:
		// 		char convLet; // $v1
		/* end block 1.1 */
		// End offset: 0x00074A98
		// End Line: 266
	/* end block 1 */
	// End offset: 0x00074AB0
	// End Line: 269

	/* begin block 2 */
		// Start line: 1342
	/* end block 2 */
	// End Line: 1343

	/* begin block 3 */
		// Start line: 1343
	/* end block 3 */
	// End Line: 1344

// [D]
int StringWidth(char *pString)
{
	char bVar1;
	char *pbVar2;
	int iVar3;

	iVar3 = 0;
	bVar1 = *pString;
	pbVar2 = (pString + 1);
	while (bVar1 != 0) {
		if (bVar1 == 0x20) {
			iVar3 = iVar3 + 4;
		}
		else {
			if (((uint)bVar1 + 0x80 & 0xff) < 0xb) {
				iVar3 = iVar3 + 0x18;
			}
			else {
				if (AsciiTable[(uint)bVar1] != 0xff) {
					iVar3 = iVar3 + (uint)fontinfo[AsciiTable[(uint)bVar1]].width;
				}
			}
		}
		bVar1 = *pbVar2;
		pbVar2 = pbVar2 + 1;
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ OutputString(char *pString /*$s2*/, int formatting /*$s0*/, int x /*$a2*/, int y /*$s3*/, int xw /*stack 16*/, int r /*stack 20*/, int g /*stack 24*/, int b /*stack 28*/)
 // line 285, offset 0x00074ab0
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x00074AB0
		// Variables:
	// 		int xpos; // $s1

		/* begin block 1.1 */
			// Start line: 302
			// Start offset: 0x00074B14
		/* end block 1.1 */
		// End offset: 0x00074B14
		// End Line: 302
	/* end block 1 */
	// End offset: 0x00074B8C
	// End Line: 323

	/* begin block 2 */
		// Start line: 1405
	/* end block 2 */
	// End Line: 1406

	/* begin block 3 */
		// Start line: 1422
	/* end block 3 */
	// End Line: 1423

	/* begin block 4 */
		// Start line: 1423
	/* end block 4 */
	// End Line: 1424

int OutputString(char *pString, int formatting, int x, int y, int xw, int r, int g, int b)
{
	UNIMPLEMENTED();
	return 0;
	/*
	int iVar1;

	SetTextColour((uchar)r, (uchar)g, (uchar)b);
	if ((formatting & 1U) == 0) {
		if ((formatting & 2U) == 0) {
			if ((formatting & 4U) != 0) {
				iVar1 = StringWidth(pString);
				PrintString(pString, x - iVar1, y);
			}
		}
		else {
			iVar1 = StringWidth(pString);
			x = (x + (xw - iVar1 >> 1)) * 0x10000 >> 0x10;
			PrintString(pString, x, y);
		}
	}
	else {
		PrintString(pString, x, y);
	}
	return x;
	*/
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintStringRightAligned(char *pString /*$s1*/, int x /*$s0*/, int y /*$s2*/)
 // line 333, offset 0x00074b8c
	/* begin block 1 */
		// Start line: 1514
	/* end block 1 */
	// End Line: 1515

	/* begin block 2 */
		// Start line: 1525
	/* end block 2 */
	// End Line: 1526

void PrintStringRightAligned(char *pString, int x, int y)
{
	UNIMPLEMENTED();
	/*
	int iVar1;

	iVar1 = StringWidth(pString);
	PrintString(pString, x - iVar1, y);
	return;*/
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintStringCentred(char *pString /*$s1*/, short y /*$a1*/)
 // line 347, offset 0x00074bd8
	/* begin block 1 */
		// Start line: 348
		// Start offset: 0x00074BD8
	/* end block 1 */
	// End offset: 0x00074C28
	// End Line: 352

	/* begin block 2 */
		// Start line: 1553
	/* end block 2 */
	// End Line: 1554

// [D]
void PrintStringCentred(char *pString, short y)
{
	int iVar1;

	iVar1 = StringWidth(pString);
	PrintString(pString, (0x140 - iVar1) * 0x8000 >> 0x10, (int)y);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadFont(char *buffer /*$a0*/)
 // line 360, offset 0x00073cc8
	/* begin block 1 */
		// Start line: 361
		// Start offset: 0x00073CC8
		// Variables:
	// 		struct RECT dest; // stack offset -24
	// 		char *file; // $s1
	// 		int i; // $v1
	// 		int nchars; // $s0
	/* end block 1 */
	// End offset: 0x00073EA0
	// End Line: 408

	/* begin block 2 */
		// Start line: 720
	/* end block 2 */
	// End Line: 721

	/* begin block 3 */
		// Start line: 722
	/* end block 3 */
	// End Line: 723

// [D]
void LoadFont(char *buffer)
{
	int *piVar1;
	char *pcVar2;
	u_long *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *addr;
	RECT16 rect;

	fontclutpos.x = 976;
	fontclutpos.y = 256;
	fontclutpos.w = 16;
	fontclutpos.h = 1;
	//addr = (int *)&DAT_0011b400;		// [A] FIXME: this font address might be used somewhere else
	addr = (int*)_frontend_buffer;
	if (buffer != NULL) {
		addr = (int *)buffer;
	}
	Loadfile("GFX\\FONT2.FNT", (char *)addr);
	iVar6 = *addr;
	memcpy(fontinfo, addr + 1, iVar6 * 8);
	addr = addr + 1 + iVar6 * 2;
	pcVar2 = AsciiTable;

	memcpy(AsciiTable, addr, 256);
	/*
	// ALIGNED INLINE MEMCPY???
	if (((uint)addr & 3) == 0) {
		piVar1 = addr;
		do {
			iVar6 = piVar1[1];
			iVar4 = piVar1[2];
			iVar5 = piVar1[3];
			*(int *)pcVar2 = *piVar1;
			((int *)pcVar2)[1] = iVar6;
			((int *)pcVar2)[2] = iVar4;
			((int *)pcVar2)[3] = iVar5;
			piVar1 = piVar1 + 4;
			pcVar2 = (char *)((int *)pcVar2 + 4);
		} while (piVar1 != addr + 0x40);
	}
	else {
		piVar1 = addr;
		do {
			iVar6 = piVar1[1];
			iVar4 = piVar1[2];
			iVar5 = piVar1[3];
			*(int *)pcVar2 = *piVar1;
			((int *)pcVar2)[1] = iVar6;
			((int *)pcVar2)[2] = iVar4;
			((int *)pcVar2)[3] = iVar5;
			piVar1 = piVar1 + 4;
			pcVar2 = (char *)((int *)pcVar2 + 4);
		} while (piVar1 != addr + 0x40);
	}*/

	fontclutid = GetClut((int)fontclutpos.x, (int)fontclutpos.y);
	iVar6 = 0xf;
	puVar3 = (u_long *)(addr + 0x40);
	do {
		iVar6 = iVar6 + -1;
		*(ushort *)puVar3 = *(ushort *)puVar3 & 0x7fff;
		puVar3 = (u_long *)((int)puVar3 + 2);
	} while (-1 < iVar6);
	*(ushort *)((int)addr + 0x102) = *(ushort *)((int)addr + 0x102) | 0x8000;
	*(ushort *)(addr + 0x41) = *(ushort *)(addr + 0x41) | 0x8000;
	LoadImage(&fontclutpos, (u_long *)(addr + 0x40));
	rect.x = 960;
	rect.y = 466;
	rect.w = 64;
	rect.h = 46;
	fonttpage = GetTPage(0, 0, 960, 466);
	LoadImage(&rect, (u_long *)(addr + 0x48));
	DrawSync(0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StoreClut2(unsigned long *pDest /*$a1*/, int x /*$a1*/, int y /*$a2*/)
 // line 416, offset 0x00074c28
	/* begin block 1 */
		// Start line: 417
		// Start offset: 0x00074C28
		// Variables:
	// 		struct RECT rect; // stack offset -16
	/* end block 1 */
	// End offset: 0x00074C64
	// End Line: 426

	/* begin block 2 */
		// Start line: 1628
	/* end block 2 */
	// End Line: 1629

	/* begin block 3 */
		// Start line: 1693
	/* end block 3 */
	// End Line: 1694

	/* begin block 4 */
		// Start line: 1696
	/* end block 4 */
	// End Line: 1697

void StoreClut2(ulong *pDest, int x, int y)
{
	UNIMPLEMENTED();
	/*
	undefined2 local_10;
	undefined2 local_e;
	undefined2 local_c;
	undefined2 local_a;

	local_10 = (undefined2)x;
	local_e = (undefined2)y;
	local_c = 0x10;
	local_a = 1;
	StoreImage2(&local_10, pDest);
	return;*/
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCLUT16Flags(unsigned short clutID /*$a0*/, unsigned short mask /*$s2*/, char transparent /*$s0*/)
 // line 434, offset 0x00074c64
	/* begin block 1 */
		// Start line: 435
		// Start offset: 0x00074C64
		// Variables:
	// 		unsigned short buffer[16]; // stack offset -56
	// 		unsigned short *pCurrent; // $a0
	// 		char ctr; // $a1
	// 		int x; // $s3
	// 		int y; // $s1
	/* end block 1 */
	// End offset: 0x00074D34
	// End Line: 455

	/* begin block 2 */
		// Start line: 1731
	/* end block 2 */
	// End Line: 1732

	/* begin block 3 */
		// Start line: 1740
	/* end block 3 */
	// End Line: 1741

void SetCLUT16Flags(ushort clutID, ushort mask, char transparent)
{
	UNIMPLEMENTED();
	/*
	ushort uVar1;
	ulong *puVar2;
	uint uVar3;
	ulong *puVar4;
	int x;
	ulong local_38[8];

	x = ((uint)clutID & 0x3f) << 4;
	StoreClut2(local_38, x, (uint)(clutID >> 6));
	puVar2 = local_38;
	uVar3 = 1;
	if (puVar2 < &stack0xffffffe8) {
		puVar4 = (ulong *)((int)puVar2 + (uint)(byte)transparent * 2);
		do {
			if (((int)(uint)mask >> (uVar3 & 0x1f) & 1U) == 0) {
				uVar1 = *(ushort *)puVar2 & 0x7fff;
			}
			else {
				uVar1 = *(ushort *)puVar2 | 0x8000;
			}
			*(ushort *)puVar2 = uVar1;
			*(ushort *)puVar4 = 0;
			puVar2 = (ulong *)((int)puVar2 + 2);
			uVar3 = uVar3 + 1 & 0xff;
		} while (puVar2 < &stack0xffffffe8);
	}
	LoadClut2(local_38, x, (uint)(clutID >> 6));
	return;*/
}



// decompiled code
// original method signature: 
// int /*$ra*/ PrintString(char *string /*$s3*/, int x /*$s2*/, int y /*$s6*/)
 // line 457, offset 0x00073ea0
	/* begin block 1 */
		// Start line: 458
		// Start offset: 0x00073EA0
		// Variables:
	// 		struct OUT_FONTINFO *pFontInfo; // $a1
	// 		struct SPRT *font; // $s0
	// 		unsigned char width; // $s1
	// 		unsigned char c; // $s1
	// 		int index; // $v1
	/* end block 1 */
	// End offset: 0x00074140
	// End Line: 536

	/* begin block 2 */
		// Start line: 895
	/* end block 2 */
	// End Line: 896

	/* begin block 3 */
		// Start line: 945
	/* end block 3 */
	// End Line: 946

	/* begin block 4 */
		// Start line: 953
	/* end block 4 */
	// End Line: 954

// MAP.C ????
extern int gShowMap;

// [D]
int PrintString(char *string, int x, int y)
{
	char chr;
	char bVar1;
	unsigned char uVar2;
	int iVar3;
	short sVar4;
	DB *pDVar5;
	int x_00;
	char *pcVar6;
	uint uVar7;
	SPRT *font;
	char *pbVar8;

	x_00 = -1;
	if (current != NULL) {
		font = (SPRT *)current->primptr;
		if (gShowMap != 0) {
			font = (SPRT *)SetFontTPage(font);
		}
		chr = *string;
		pbVar8 = (string + 1);
		x_00 = x;
		while (chr != 0) {
			if (chr == 0x20) {
				x_00 = x_00 + 4;
			}
			else {
				if (((chr < 0x20) || (0x8a < chr)) || (chr < 0x80)) {
					bVar1 = AsciiTable[chr];
					if (AsciiTable[chr] == 0xff) {
						bVar1 = AsciiTable[63];
					}
					uVar7 = (uint)bVar1;
					chr = fontinfo[uVar7].width;

					setSprt(font);
					setSemiTrans(font, 1);

					//*(undefined *)((int)&font->tag + 3) = 4;
					//font->code = 'f';

					font->r0 = gFontColour.r;
					font->g0 = gFontColour.g;
					uVar2 = gFontColour.b;
					font->x0 = (short)x_00;
					font->b0 = uVar2;
					font->y0 = (short)fontinfo[uVar7].offy + (short)y;
					font->u0 = fontinfo[uVar7].x;
					uVar2 = fontinfo[uVar7].y;
					font->w = (ushort)chr;
					font->v0 = uVar2 - 46;
					sVar4 = fontclutid;
					iVar3 = gShowMap;
					font->h = (ushort)fontinfo[uVar7].height;
					font->clut = sVar4;
					pDVar5 = current;
					if (iVar3 == 0) {
						addPrim(current->ot, font);
						//font->tag = font->tag & 0xff000000 | *current->ot & 0xffffff;
						//*pDVar5->ot = *pDVar5->ot & 0xff000000 | (uint)font & 0xffffff;
					}
					else {
						DrawPrim(font);
					}
					font = font + 1;
					x_00 = x_00 + (uint)chr;
				}
				else {
					if (gShowMap == 0) {
						font = (SPRT *)SetFontTPage(font);
					}
					font = (SPRT *)DrawButton(chr, font, x_00, y);
					x_00 = x_00 + 0x18;
					if (gShowMap != 0) {
						font = (SPRT *)SetFontTPage(font);
					}
				}
			}
			chr = *pbVar8;
			pbVar8 = pbVar8 + 1;
		}
		if (gShowMap == 0) {
			pcVar6 = (char *)SetFontTPage(font);
			current->primptr = pcVar6;
		}
		else {
			DrawSync(0);
		}
	}
	return x_00;
}



// decompiled code
// original method signature: 
// short /*$ra*/ PrintDigit(int x /*$t3*/, int y /*$s1*/, char *string /*$a2*/)
 // line 539, offset 0x00074140
	/* begin block 1 */
		// Start line: 540
		// Start offset: 0x00074140
		// Variables:
	// 		struct FONT_DIGIT *pDigit; // $a1
	// 		struct SPRT *font; // $t0
	// 		char width; // $a3
	// 		char fixedWidth; // $t1
	// 		char vOff; // $t2
	// 		char h; // $a0

		/* begin block 1.1 */
			// Start line: 552
			// Start offset: 0x00074190
			// Variables:
		// 		char let; // $v1
		// 		char convLet; // $a0
		/* end block 1.1 */
		// End offset: 0x000741F4
		// End Line: 583
	/* end block 1 */
	// End offset: 0x00074364
	// End Line: 606

	/* begin block 2 */
		// Start line: 1125
	/* end block 2 */
	// End Line: 1126

	/* begin block 3 */
		// Start line: 1129
	/* end block 3 */
	// End Line: 1130

short PrintDigit(int x, int y, char *string)
{
	UNIMPLEMENTED();
	return 0;
	/*
	byte bVar1;
	byte bVar2;
	uchar uVar3;
	DB *pDVar4;
	short sVar5;
	undefined2 uVar6;
	uint uVar7;
	ulong *puVar8;
	uint *puVar9;
	int iVar10;
	char cVar11;

	sVar5 = (short)x;
	puVar9 = (uint *)current->primptr;
	bVar1 = *string;
	while (bVar1 != 0) {
		bVar1 = *string;
		string = (char *)((byte *)string + 1);
		if (bVar1 == 0x3a) {
			uVar7 = 0xb;
		}
		else {
			if (bVar1 == 0x2f) {
				uVar7 = 10;
			}
			else {
				uVar7 = (uint)bVar1 - 0x30 & 0xff;
			}
		}
		bVar2 = fontDigit[uVar7].width;
		iVar10 = 0x10;
		if (bVar1 == 0x3a) {
			iVar10 = 8;
		}
		cVar11 = '\0';
		if (uVar7 < 6) {
			uVar6 = 0x1c;
		}
		else {
			cVar11 = '\x1c';
			uVar6 = 0x1f;
		}
		*(char *)((int)puVar9 + 3) = '\x04';
		*(char *)((int)puVar9 + 7) = 'f';
		*(uchar *)(puVar9 + 1) = gFontColour.r;
		*(uchar *)((int)puVar9 + 5) = gFontColour.g;
		uVar3 = gFontColour.b;
		*(short *)(puVar9 + 2) = (short)x + (short)((int)(iVar10 - (uint)bVar2) >> 1);
		*(undefined2 *)((int)puVar9 + 10) = (short)y;
		*(uchar *)((int)puVar9 + 6) = uVar3;
		*(uchar *)(puVar9 + 3) = digit_texture.coords.u0 + fontDigit[uVar7].xOffset;
		uVar3 = digit_texture.coords.v0;
		*(ushort *)(puVar9 + 4) = (ushort)bVar2;
		*(undefined2 *)((int)puVar9 + 0x12) = uVar6;
		*(char *)((int)puVar9 + 0xd) = cVar11 + uVar3;
		pDVar4 = current;
		*(ushort *)((int)puVar9 + 0xe) = digit_texture.clutid;
		*puVar9 = *puVar9 & 0xff000000 | *pDVar4->ot & 0xffffff;
		puVar8 = pDVar4->ot;
		x = x + iVar10;
		sVar5 = (short)x;
		*puVar8 = *puVar8 & 0xff000000 | (uint)puVar9 & 0xffffff;
		bVar1 = *string;
		puVar9 = puVar9 + 5;
	}
	*(uint **)&current->primptr = puVar9;
	*(char *)((int)puVar9 + 3) = '\a';
	*(char *)((int)puVar9 + 7) = '&';
	*(undefined2 *)(puVar9 + 2) = 0xffff;
	*(undefined2 *)((int)puVar9 + 10) = 0xffff;
	*(undefined2 *)(puVar9 + 4) = 0xffff;
	*(undefined2 *)((int)puVar9 + 0x12) = 0xffff;
	*(undefined2 *)(puVar9 + 6) = 0xffff;
	*(undefined2 *)((int)puVar9 + 0x1a) = 0xffff;
	pDVar4 = current;
	*(ushort *)((int)puVar9 + 0x16) = digit_texture.tpageid;
	*puVar9 = *puVar9 & 0xff000000 | *pDVar4->ot & 0xffffff;
	*pDVar4->ot = *pDVar4->ot & 0xff000000 | (uint)puVar9 & 0xffffff;
	pDVar4->primptr = pDVar4->primptr + 0x20;
	return sVar5;*/
}



// decompiled code
// original method signature: 
// int /*$ra*/ PrintStringFeature(char *string /*$a0*/, int x /*$a1*/, int y /*$a2*/, int w /*$a3*/, int h /*stack 16*/, int transparent /*stack 20*/)
 // line 612, offset 0x00074d34
	/* begin block 1 */
		// Start line: 1968
	/* end block 1 */
	// End Line: 1969

	/* begin block 2 */
		// Start line: 2126
	/* end block 2 */
	// End Line: 2127

	/* begin block 3 */
		// Start line: 2127
	/* end block 3 */
	// End Line: 2128

// [D]
int PrintStringFeature(char *string, int x, int y, int w, int h, int transparent)
{
	int iVar1;

	iVar1 = PrintString(string, x, y);
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintStringBoxed(char *string /*$s2*/, int ix /*$s5*/, int iy /*$a2*/)
 // line 643, offset 0x00074364
	/* begin block 1 */
		// Start line: 644
		// Start offset: 0x00074364
		// Variables:
	// 		struct OUT_FONTINFO *pFontInfo; // $a1
	// 		struct SPRT *font; // $s0
	// 		char word[32]; // stack offset -64
	// 		char *wpt; // $t0
	// 		char c; // $a0
	// 		int x; // $s1
	// 		int y; // $s3
	// 		int index; // $a1
	// 		int wordcount; // $s4
	/* end block 1 */
	// End offset: 0x000745DC
	// End Line: 711

	/* begin block 2 */
		// Start line: 1338
	/* end block 2 */
	// End Line: 1339

	/* begin block 3 */
		// Start line: 1376
	/* end block 3 */
	// End Line: 1377

	/* begin block 4 */
		// Start line: 1387
	/* end block 4 */
	// End Line: 1388

void PrintStringBoxed(char *string, int ix, int iy)
{
	UNIMPLEMENTED();
	/*
	byte bVar1;
	uchar uVar2;
	short sVar3;
	DB *pDVar4;
	int iVar5;
	ulong *puVar6;
	uint uVar7;
	byte *pbVar8;
	uint *puVar9;
	int iVar10;
	int iVar11;
	byte local_40;
	byte local_3f[31];

	puVar9 = (uint *)current->primptr;
	if (*string != '\0') {
		iVar11 = 1;
		iVar10 = ix;
		do {
			string = GetNextWord(string, (char *)&local_40);
			iVar5 = StringWidth((char *)&local_40);
			if ((0x134 < iVar10 + iVar5) && ((iVar11 != 1 || (*string != '\0')))) {
				iy = iy + 0xe;
				iVar10 = ix;
			}
			pbVar8 = local_3f;
			bVar1 = local_40;
			while (bVar1 != 0) {
				if (bVar1 == 0x20) {
					iVar10 = iVar10 + 4;
				}
				else {
					uVar7 = (uint)(byte)AsciiTable[bVar1];
					if (uVar7 != 0xffffffff) {
						*(char *)((int)puVar9 + 3) = '\x04';
						*(char *)((int)puVar9 + 7) = 'd';
						*(uchar *)(puVar9 + 1) = gFontColour.r;
						*(uchar *)((int)puVar9 + 5) = gFontColour.g;
						uVar2 = gFontColour.b;
						*(short *)(puVar9 + 2) = (short)iVar10;
						*(uchar *)((int)puVar9 + 6) = uVar2;
						*(short *)((int)puVar9 + 10) = (short)fontinfo[uVar7].offy + (short)iy;
						*(uchar *)(puVar9 + 3) = fontinfo[uVar7].x;
						*(char *)((int)puVar9 + 0xd) = fontinfo[uVar7].y + -0x2e;
						pDVar4 = current;
						sVar3 = fontclutid;
						*(ushort *)(puVar9 + 4) = (ushort)fontinfo[uVar7].width;
						bVar1 = fontinfo[uVar7].height;
						*(short *)((int)puVar9 + 0xe) = sVar3;
						*(ushort *)((int)puVar9 + 0x12) = (ushort)bVar1;
						*puVar9 = *puVar9 & 0xff000000 | *pDVar4->ot & 0xffffff;
						puVar6 = pDVar4->ot;
						*puVar6 = *puVar6 & 0xff000000 | (uint)puVar9 & 0xffffff;
						puVar9 = puVar9 + 5;
						iVar10 = iVar10 + (uint)fontinfo[uVar7].width;
					}
				}
				bVar1 = *pbVar8;
				pbVar8 = pbVar8 + 1;
			}
			iVar11 = iVar11 + 1;
		} while (*string != '\0');
	}
	*(char *)((int)puVar9 + 3) = '\a';
	*(char *)((int)puVar9 + 7) = '&';
	pDVar4 = current;
	sVar3 = fonttpage;
	*(undefined2 *)(puVar9 + 2) = 0xffff;
	*(undefined2 *)((int)puVar9 + 10) = 0xffff;
	*(undefined2 *)(puVar9 + 4) = 0xffff;
	*(undefined2 *)((int)puVar9 + 0x12) = 0xffff;
	*(undefined2 *)(puVar9 + 6) = 0xffff;
	*(undefined2 *)((int)puVar9 + 0x1a) = 0xffff;
	*(short *)((int)puVar9 + 0x16) = sVar3;
	*puVar9 = *puVar9 & 0xff000000 | *pDVar4->ot & 0xffffff;
	*pDVar4->ot = *pDVar4->ot & 0xff000000 | (uint)puVar9 & 0xffffff;
	*(uint **)&pDVar4->primptr = puVar9 + 8;
	return;*/
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitButtonTextures()
 // line 713, offset 0x00074e54
	/* begin block 1 */
		// Start line: 715
		// Start offset: 0x00074E54
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x00074EB4
	// End Line: 719

	/* begin block 2 */
		// Start line: 2500
	/* end block 2 */
	// End Line: 2501

	/* begin block 3 */
		// Start line: 1426
	/* end block 3 */
	// End Line: 1427

	/* begin block 4 */
		// Start line: 2501
	/* end block 4 */
	// End Line: 2502

	/* begin block 5 */
		// Start line: 2503
	/* end block 5 */
	// End Line: 2504

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitButtonTextures(void)
{
	UNIMPLEMENTED();
	/*
	char *name;
	int iVar1;
	TEXTURE_DETAILS *info;
	char **ppcVar2;

	ppcVar2 = &button_names11;
	iVar1 = 10;
	info = &button_textures;
	do {
		name = *ppcVar2;
		ppcVar2 = ppcVar2 + 1;
		iVar1 = iVar1 + -1;
		GetTextureDetails(name, info);
		info = info + 1;
	} while (-1 < iVar1);
	return;
	*/
}



// decompiled code
// original method signature: 
// int /*$ra*/ PrintScaledString(int y /*$s4*/, char *string /*$s1*/, int scale /*$s2*/)
 // line 726, offset 0x000745dc
	/* begin block 1 */
		// Start line: 727
		// Start offset: 0x000745DC
		// Variables:
	// 		struct FONT_DIGIT *pDigit; // $a2
	// 		struct POLY_FT4 *font; // $t0
	// 		int x; // $s0
	// 		int width; // $t3
	// 		int height; // $t6
	// 		int y0; // $t1
	// 		int x1; // $t5
	// 		int y1; // $v0
	// 		unsigned char vOff; // $t8
	// 		char c; // $a0
	/* end block 1 */
	// End offset: 0x00074858
	// End Line: 794

	/* begin block 2 */
		// Start line: 1580
	/* end block 2 */
	// End Line: 1581

	/* begin block 3 */
		// Start line: 1596
	/* end block 3 */
	// End Line: 1597

int PrintScaledString(int y, char *string, int scale)
{
	UNIMPLEMENTED();
	return 0;
	/*
	byte bVar1;
	char cVar2;
	uchar uVar3;
	uchar uVar4;
	DB *pDVar5;
	short sVar6;
	int iVar7;
	int iVar8;
	uint uVar9;
	char cVar10;
	ulong *puVar11;
	char cVar12;
	uint *prim;
	short sVar13;
	int iVar14;
	byte *pbVar15;
	int iVar16;

	iVar7 = StringWidth(string);
	iVar7 = iVar7 * scale;
	if (iVar7 < 0) {
		iVar7 = iVar7 + 0xf;
	}
	prim = (uint *)current->primptr;
	if (gShowMap != 0) {
		prim = (uint *)SetFontTPage(prim);
	}
	bVar1 = *string;
	pbVar15 = (byte *)(string + 1);
	iVar7 = 0x140 - (iVar7 >> 4) >> 1;
	uVar3 = digit_texture.coords.u0;
	uVar4 = digit_texture.coords.v0;
	while (digit_texture.coords.u0 = uVar3, digit_texture.coords.v0 = uVar4, bVar1 != 0) {
		uVar9 = (uint)bVar1 - 0x30;
		if (bVar1 == 0x20) {
			iVar8 = scale;
			if (scale < 0) {
				iVar8 = scale + 3;
			}
			iVar8 = iVar7 + (iVar8 >> 2);
		}
		else {
			iVar8 = iVar7;
			if ((uVar9 & 0xff) < 10) {
				bVar1 = fontDigit[uVar9].width;
				cVar10 = '\0';
				if ((int)uVar9 < 6) {
					iVar14 = 0x1c;
				}
				else {
					cVar10 = '\x1c';
					iVar14 = 0x1f;
				}
				iVar8 = (iVar14 >> 1) * scale;
				if (iVar8 < 0) {
					iVar8 = iVar8 + 0xf;
				}
				iVar16 = (uint)bVar1 * scale;
				sVar6 = (short)(iVar8 >> 4);
				sVar13 = (short)y - sVar6;
				if (iVar16 < 0) {
					iVar16 = iVar16 + 0xf;
				}
				iVar8 = iVar7 + (iVar16 >> 4);
				cVar12 = fontDigit[uVar9].xOffset;
				*(char *)((int)prim + 3) = '\t';
				*(char *)((int)prim + 7) = ',';
				*(uchar *)(prim + 1) = gFontColour.r;
				sVar6 = (short)y + sVar6;
				cVar12 = uVar3 + cVar12;
				cVar10 = cVar10 + uVar4;
				*(uchar *)((int)prim + 5) = gFontColour.g;
				uVar3 = gFontColour.b;
				*(short *)((int)prim + 0x1a) = sVar6;
				*(short *)((int)prim + 0x22) = sVar6;
				cVar2 = cVar12 + bVar1;
				*(char *)((int)prim + 0xd) = cVar10;
				*(char *)((int)prim + 0x15) = cVar10;
				cVar10 = cVar10 + (char)iVar14;
				*(short *)(prim + 2) = (short)iVar7;
				*(short *)((int)prim + 10) = sVar13;
				*(short *)(prim + 4) = (short)iVar8;
				*(short *)((int)prim + 0x12) = sVar13;
				*(short *)(prim + 6) = (short)iVar7;
				*(short *)(prim + 8) = (short)iVar8;
				*(char *)(prim + 3) = cVar12;
				*(char *)(prim + 5) = cVar2;
				*(char *)(prim + 7) = cVar12;
				*(char *)((int)prim + 0x1d) = cVar10;
				*(char *)(prim + 9) = cVar2;
				*(char *)((int)prim + 0x25) = cVar10;
				*(uchar *)((int)prim + 6) = uVar3;
				pDVar5 = current;
				*(ushort *)((int)prim + 0xe) = digit_texture.clutid;
				*(ushort *)((int)prim + 0x16) = digit_texture.tpageid;
				*prim = *prim & 0xff000000 | *pDVar5->ot & 0xffffff;
				puVar11 = pDVar5->ot;
				uVar9 = (uint)prim & 0xffffff;
				prim = prim + 10;
				*puVar11 = *puVar11 & 0xff000000 | uVar9;
			}
		}
		bVar1 = *pbVar15;
		pbVar15 = pbVar15 + 1;
		iVar7 = iVar8;
		uVar3 = digit_texture.coords.u0;
		uVar4 = digit_texture.coords.v0;
	}
	*(uint **)&current->primptr = prim;
	return iVar7;
	*/
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GetNextWord(char *string /*$a0*/, char *word /*$a1*/)
 // line 800, offset 0x00074d54
	/* begin block 1 */
		// Start line: 801
		// Start offset: 0x00074D54
		// Variables:
	// 		char c; // $v1
	/* end block 1 */
	// End offset: 0x00074D94
	// End Line: 817

	/* begin block 2 */
		// Start line: 2336
	/* end block 2 */
	// End Line: 2337

	/* begin block 3 */
		// Start line: 2502
	/* end block 3 */
	// End Line: 2503

	/* begin block 4 */
		// Start line: 2505
	/* end block 4 */
	// End Line: 2506

char * GetNextWord(char *string, char *word)
{
	UNIMPLEMENTED();
	return 0;
	/*
	char cVar1;

	cVar1 = *string;
	do {
		if (cVar1 == '\0') {
		LAB_00074d88:
			*word = '\0';
			return string;
		}
		string = string + 1;
		if (cVar1 == ' ') {
			*word = ' ';
			word = word + 1;
			goto LAB_00074d88;
		}
		*word = cVar1;
		cVar1 = *string;
		word = word + 1;
	} while (true);
	*/
}



// decompiled code
// original method signature: 
// void * /*$ra*/ DrawButton(unsigned char button /*$a0*/, void *prim /*$s1*/, int x /*$a2*/, int y /*$a3*/)
 // line 819, offset 0x00074858
	/* begin block 1 */
		// Start line: 820
		// Start offset: 0x00074858
		// Variables:
	// 		struct TEXTURE_DETAILS *btn; // $a1
	// 		struct POLY_FT3 *null; // $s0
	/* end block 1 */
	// End offset: 0x00074A10
	// End Line: 853

	/* begin block 2 */
		// Start line: 1807
	/* end block 2 */
	// End Line: 1808

	/* begin block 3 */
		// Start line: 1833
	/* end block 3 */
	// End Line: 1834

void * DrawButton(unsigned char button, void *prim, int x, int y)
{
	UNIMPLEMENTED();
	return 0;
	/*
	bool bVar1;
	DB *pDVar2;
	int iVar3;

	*(undefined *)((int)prim + 3) = 4;
	iVar3 = (uint)button * 0xe;
	*(undefined *)((int)prim + 4) = 0x80;
	*(undefined *)((int)prim + 5) = 0x80;
	*(undefined *)((int)prim + 6) = 0x80;
	*(undefined *)((int)prim + 7) = 100;
	*(undefined2 *)((int)prim + 8) = (short)x;
	*(short *)((int)prim + 10) = (short)y + -3;
	*(byte *)((int)prim + 0xc) = (&DAT_000d93c8)[iVar3];
	*(undefined *)((int)prim + 0xd) = (&DAT_000d93c9)[iVar3];
	*(short *)((int)prim + 0x10) =
		(ushort)(byte)(&DAT_000d93ca)[iVar3] - (ushort)(byte)(&DAT_000d93c8)[iVar3];
	*(short *)((int)prim + 0x12) =
		(ushort)(byte)(&DAT_000d93cd)[iVar3] - (ushort)(byte)(&DAT_000d93c9)[iVar3];
	*(undefined2 *)((int)prim + 0xe) = *(undefined2 *)(&DAT_000d93d2 + iVar3);
	*(undefined *)((int)prim + 0x17) = 7;
	*(undefined *)((int)prim + 0x1b) = 0x26;
	*(undefined2 *)((int)prim + 0x1c) = 0xffff;
	*(undefined2 *)((int)prim + 0x1e) = 0xffff;
	*(undefined2 *)((int)prim + 0x24) = 0xffff;
	*(undefined2 *)((int)prim + 0x26) = 0xffff;
	*(undefined2 *)((int)prim + 0x2c) = 0xffff;
	*(undefined2 *)((int)prim + 0x2e) = 0xffff;
	bVar1 = gShowMap == 0;
	*(undefined2 *)((int)prim + 0x2a) = *(undefined2 *)(&DAT_000d93d0 + iVar3);
	pDVar2 = current;
	if (bVar1) {
		*(uint *)prim = *(uint *)prim & 0xff000000 | *(uint *)*current->ot & 0xffffff;
		*(uint *)*pDVar2->ot = *(uint *)*pDVar2->ot & 0xff000000 | (uint)prim & 0xffffff;
		*(uint *)((int)prim + 0x14) =
			*(uint *)((int)prim + 0x14) & 0xff000000 | *(uint *)*pDVar2->ot & 0xffffff;
		*(uint *)*pDVar2->ot = *(uint *)*pDVar2->ot & 0xff000000 | (int)prim + 0x14U & 0xffffff;
	}
	else {
		DrawPrim((int)prim + 0x14U);
		DrawPrim(prim);
	}
	return (void *)((int)prim + 0x34);
	*/
}



// decompiled code
// original method signature: 
// void * /*$ra*/ SetFontTPage(void *prim /*$a0*/)
 // line 855, offset 0x00074d94
	/* begin block 1 */
		// Start line: 856
		// Start offset: 0x00074D94
		// Variables:
	// 		struct POLY_FT3 *null; // $s0
	/* end block 1 */
	// End offset: 0x00074E54
	// End Line: 871

	/* begin block 2 */
		// Start line: 2581
	/* end block 2 */
	// End Line: 2582

	/* begin block 3 */
		// Start line: 2620
	/* end block 3 */
	// End Line: 2621

// [D]
void* SetFontTPage(void *prim)
{
	POLY_FT3* null = (POLY_FT3*)prim;

	setPolyFT3(null);
	setSemiTrans(null, 1);

	null->x0 = -1;
	null->y0 = -1;
	null->x1 = -1;
	null->y1 = -1;
	null->x2 = -1;
	null->y2 = -1;
	null->tpage = fonttpage;

	if (gShowMap == 0) {
		addPrim(current->ot, null);
	}
	else {
		DrawPrim(prim);
	}
	return null+1;
}




