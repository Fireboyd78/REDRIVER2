#ifndef DR2ROADS_H
#define DR2ROADS_H

#define IS_ROAD_SURFACE(surfid)				(((surfid) & 0xFFFFE000) != 0xFFFFE000)		// is any road surface

#define IS_STRAIGHT_SURFACE(surfid)			(((surfid) > -1) && ((surfid) & 0xFFFFE000) == 0 && (surfid & 0x1FFF) < NumDriver2Straights)
#define IS_CURVED_SURFACE(surfid)			(((surfid) > -1) && ((surfid) & 0xFFFFE000) == 0x4000 && (surfid & 0x1FFF) < NumDriver2Curves)
#define IS_JUNCTION_SURFACE(surfid)			(((surfid) > -1) && ((surfid) & 0xFFFFE000) == 0x2000 && (surfid & 0x1FFF) < NumDriver2Junctions)

#define GET_STRAIGHT(surfid)				(Driver2StraightsPtr + (surfid & 0x1FFF))
#define GET_CURVE(surfid)					(Driver2CurvesPtr + (surfid & 0x1FFF))
#define GET_JUNCTION(surfid)				(Driver2JunctionsPtr + (surfid & 0x1FFF))

#define IS_SINGLE_LANE(rdcv)				((*(uint*)&(rdcv)->NumLanes & 0xFFFF) == 0xFF01)

extern ROAD_MAP_LUMP_DATA roadMapLumpData;

extern int NumTempJunctions;
extern DRIVER2_JUNCTION *Driver2JunctionsPtr;
extern ulong *Driver2TempJunctionsPtr;
extern int NumDriver2Junctions;

extern int NumDriver2Straights;
extern DRIVER2_STRAIGHT *Driver2StraightsPtr;

extern DRIVER2_CURVE *Driver2CurvesPtr;
extern int NumDriver2Curves;

extern short* RoadMapDataRegions[4];

extern void ProcessStraightsDriver2Lump(char *lump_file, int lump_size); // 0x000136C0

extern void ProcessCurvesDriver2Lump(char *lump_file, int lump_size); // 0x000136F4

extern void ProcessJunctionsDriver2Lump(char *lump_file, int lump_size, int fix); // 0x00013728

extern int MapHeight(VECTOR *pos); // 0x000137CC

extern int FindSurfaceD2(VECTOR *pos, VECTOR *normal, VECTOR *out, _sdPlane **plane); // 0x00012EF4

extern int sdHeightOnPlane(VECTOR *pos, _sdPlane *plane); // 0x000130D4

extern int GetSurfaceIndex(VECTOR *pos); // 0x0001380C

extern _sdPlane * FindRoadInBSP(_sdNode *node, _sdPlane *base); // 0x000138F0

extern int RoadInCell(VECTOR *pos); // 0x0001322C

extern _sdPlane * sdGetCell(VECTOR *pos); // 0x0001346C

extern short * sdGetBSP(_sdNode *node, XYPAIR *pos); // 0x00013848


#endif
