#ifndef CARS_H
#define CARS_H

#define CAR_INDEX(cp)  (int)(cp-car_data)

// PHYSICS
extern _CAR_DATA car_data[22];	// all cars

// active cars
extern _CAR_DATA* active_car_list[20];
extern BOUND_BOX bbox[20];
extern unsigned char lightsOnDelay[20];

extern CAR_MODEL NewCarModel[5];
extern CAR_MODEL NewLowCarModel[5];

extern int whichCP;		// car poly counter
extern int baseSpecCP;	// special car poly counter

extern DENTUVS gTempHDCarUVDump[20][255];
extern SVECTOR gTempCarVertDump[20][132];
extern DENTUVS gTempLDCarUVDump[20][134];

extern MODEL *gHubcapModelPtr;
extern MODEL *gCleanWheelModelPtr;
extern MODEL *gFastWheelModelPtr;
extern MODEL *gDamWheelModelPtr;

extern short FrontWheelRotation[20];
extern short BackWheelRotation[20];

extern char LeftLight;
extern char RightLight;

extern void plotNewCarModel(CAR_MODEL *car, int palette); // 0x00020C94

extern void plotCarPolyB3(int numTris, CAR_POLY *src, SVECTOR *vlist, plotCarGlobals *pg); // 0x000237B8

extern void plotCarPolyFT3(int numTris, CAR_POLY *src, SVECTOR *vlist, plotCarGlobals *pg); // 0x000238C4

extern void plotCarPolyGT3(int numTris, CAR_POLY *src, SVECTOR *vlist, SVECTOR *nlist, plotCarGlobals *pg, int palette); // 0x00020EA0

extern void plotCarPolyGT3nolight(int numTris, CAR_POLY *src, SVECTOR *vlist, plotCarGlobals *pg, int palette); // 0x00023A20

extern void DrawCar(_CAR_DATA *cp, int view); // 0x000210B8

extern void DrawCarObject(CAR_MODEL *car, MATRIX *matrix, VECTOR *pos, VECTOR *pos1, int palette, _CAR_DATA *cp, int detail); // 0x000233DC

extern void DrawCarWheels(_CAR_DATA *cp, MATRIX *RearMatrix, VECTOR *pos, int zclip); // 0x00021AF8

extern void DrawWheelObject(MODEL *model, SVECTOR *verts, int transparent, int wheelnum); // 0x00022180

extern void PlayerCarFX(_CAR_DATA *cp); // 0x000234DC

extern void ComputeCarLightingLevels(_CAR_DATA *cp, char detail); // 0x00022458

extern void buildNewCars(); // 0x00022860

extern void buildNewCarFromModel(CAR_MODEL *car, MODEL *model, int first); // 0x00022960

extern void MangleWheelModels(); // 0x000230C8

extern void setupLightingMatrices(); // 0x000235F8

extern void restoreLightingMatrices(); // 0x00023750

extern char GetCarPalIndex(int tpage); // 0x00023390


#endif
