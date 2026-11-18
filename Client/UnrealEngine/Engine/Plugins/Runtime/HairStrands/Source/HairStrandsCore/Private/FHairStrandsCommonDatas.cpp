// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// FHairStrandsCommonDatas @ 14dfee4a0

FHairStrandsCommonDatas * __thiscall
FHairStrandsCommonDatas::FHairStrandsCommonDatas(FHairStrandsCommonDatas *this)

{
  (this->StrandsPoints).PointsPosition.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsPoints).PointsPosition.ArrayNum = 0;
  (this->StrandsPoints).PointsPosition.ArrayMax = 0;
  (this->StrandsPoints).PointsRadius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsPoints).PointsRadius.ArrayNum = 0;
  (this->StrandsPoints).PointsRadius.ArrayMax = 0;
  (this->StrandsPoints).PointsCoordU.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsPoints).PointsCoordU.ArrayNum = 0;
  (this->StrandsPoints).PointsCoordU.ArrayMax = 0;
  (this->StrandsPoints).PointsBaseColor.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsPoints).PointsBaseColor.ArrayNum = 0;
  (this->StrandsPoints).PointsBaseColor.ArrayMax = 0;
  (this->StrandsPoints).PointsRoughness.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsPoints).PointsRoughness.ArrayNum = 0;
  (this->StrandsPoints).PointsRoughness.ArrayMax = 0;
  (this->StrandsPoints).PointsAO.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsPoints).PointsAO.ArrayNum = 0;
  (this->StrandsPoints).PointsAO.ArrayMax = 0;
  (this->StrandsPoints).PointsMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsPoints).PointsMapping.ArrayNum = 0;
  (this->StrandsPoints).PointsMapping.ArrayMax = 0;
  (this->StrandsPoints).SourcePointCount = 0;
  (this->StrandsCurves).CurvesCount.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsCurves).CurvesCount.ArrayNum = 0;
  (this->StrandsCurves).CurvesCount.ArrayMax = 0;
  (this->StrandsCurves).CurvesOffset.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsCurves).CurvesOffset.ArrayNum = 0;
  (this->StrandsCurves).CurvesOffset.ArrayMax = 0;
  (this->StrandsCurves).CurvesLength.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsCurves).CurvesLength.ArrayNum = 0;
  (this->StrandsCurves).CurvesLength.ArrayMax = 0;
  (this->StrandsCurves).CurvesRootUV.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsCurves).CurvesRootUV.ArrayNum = 0;
  (this->StrandsCurves).CurvesRootUV.ArrayMax = 0;
  (this->StrandsCurves).StrandIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsCurves).StrandIDs.ArrayNum = 0;
  (this->StrandsCurves).StrandIDs.ArrayMax = 0;
  (this->StrandsCurves).ClumpIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsCurves).ClumpIDs.ArrayNum = 0;
  (this->StrandsCurves).ClumpIDs.ArrayMax = 0;
  *(undefined8 *)&(this->StrandsCurves).GroomIDToIndex = 0;
  *(undefined8 *)&(this->StrandsCurves).GroomIDToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->StrandsCurves).GroomIDToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->StrandsCurves).GroomIDToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->StrandsCurves).GroomIDToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->StrandsCurves).GroomIDToIndex.field_0x34 = 0;
  *(undefined4 *)&(this->StrandsCurves).GroomIDToIndex.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StrandsCurves).GroomIDToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->StrandsCurves).GroomIDToIndex.field_0x48 = 0;
  (this->StrandsCurves).CurvesClosestGuideIDs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StrandsCurves).CurvesClosestGuideIDs.ArrayNum = 0;
  (this->StrandsCurves).CurvesClosestGuideIDs.ArrayMax = 0;
  (this->StrandsCurves).CurvesClosestGuideWeights.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StrandsCurves).CurvesClosestGuideWeights.ArrayNum = 0;
  (this->StrandsCurves).CurvesClosestGuideWeights.ArrayMax = 0;
  (this->StrandsCurves).AttributeFlags = 0;
  (this->StrandsCurves).CurvesMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandsCurves).CurvesMapping.ArrayNum = 0;
  (this->StrandsCurves).CurvesMapping.ArrayMax = 0;
  (this->StrandsCurves).SourceCurveCount = 0;
  this->Flags = 0;
  return this;
}

// GetAttributeFlags @ 14e099b60

uint __thiscall FHairStrandsCommonDatas::GetAttributeFlags(FHairStrandsCommonDatas *this)

{
  return (this->StrandsCurves).AttributeFlags;
}

// GetAttributes @ 14e099b70

uint __thiscall FHairStrandsCommonDatas::GetAttributes(FHairStrandsCommonDatas *this)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    cVar2 = (char)uVar3;
    if (cVar2 == '\a') {
      iVar1 = (this->StrandsPoints).PointsRadius.ArrayNum;
      bVar6 = iVar1 < 0;
      bVar5 = iVar1 == 0;
LAB_14e099ba6:
      if (bVar5 || bVar6) goto LAB_14e099bad;
LAB_14e099bf1:
      uVar4 = uVar4 | 1 << (uVar3 & 0x1f);
    }
    else {
      if (cVar2 == '\x04') {
        iVar1 = (this->StrandsPoints).PointsBaseColor.ArrayNum;
        bVar6 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        goto LAB_14e099ba6;
      }
      if (cVar2 == '\x05') {
        iVar1 = (this->StrandsPoints).PointsRoughness.ArrayNum;
        bVar6 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        goto LAB_14e099ba6;
      }
      if (cVar2 == '\x06') {
        iVar1 = (this->StrandsPoints).PointsAO.ArrayNum;
        bVar6 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        goto LAB_14e099ba6;
      }
LAB_14e099bad:
      if (cVar2 == '\0') {
        iVar1 = (this->StrandsCurves).CurvesRootUV.ArrayNum;
        bVar6 = iVar1 < 0;
        bVar5 = iVar1 == 0;
LAB_14e099bea:
        if (!bVar5 && !bVar6) goto LAB_14e099bf1;
      }
      else {
        if (cVar2 != '\x03') {
          if (cVar2 == '\x01') {
            iVar1 = (this->StrandsCurves).ClumpIDs.ArrayNum;
            bVar6 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          else {
            if (cVar2 != '\x02') goto LAB_14e099bf8;
            iVar1 = (this->StrandsCurves).StrandIDs.ArrayNum;
            bVar6 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          goto LAB_14e099bea;
        }
        if ((0 < (this->StrandsCurves).CurvesClosestGuideIDs.ArrayNum) &&
           (0 < (this->StrandsCurves).CurvesClosestGuideWeights.ArrayNum)) goto LAB_14e099bf1;
      }
    }
LAB_14e099bf8:
    uVar3 = uVar3 + 1;
    if (7 < uVar3) {
      return uVar4;
    }
  } while( true );
}

