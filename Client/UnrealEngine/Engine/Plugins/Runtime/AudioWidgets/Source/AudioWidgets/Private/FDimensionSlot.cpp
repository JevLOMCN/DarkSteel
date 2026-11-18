// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// FDimensionSlot @ 14d8b5940

FDimensionSlot * __thiscall
SampledSequenceDrawingUtils::FDimensionSlot::FDimensionSlot
          (FDimensionSlot *this,ushort param_1,ushort param_2,FGeometry *param_3,
          FSampledSequenceDrawingParams *param_4)

{
  code *pcVar1;
  FSampledSequenceDrawingParams *pFVar2;
  bool bVar3;
  FDimensionSlot *pFVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  pFVar2 = param_4;
  if (param_2 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TotalNumDimensions > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SampledSequenceDrawingUtils.cpp"
                       ,0x2e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDimensionSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (param_4->Orientation == Horizontal) {
    param_4._4_4_ = SUB84(param_3->Size,4);
  }
  else {
    param_4._0_4_ = SUB84(param_3->Size,0);
    param_4._4_4_ = param_4._0_4_;
  }
  dVar8 = (double)(param_4._4_4_ / (float)param_2);
  fVar5 = pFVar2->DimensionSlotMargin;
  dVar9 = (double)param_1 * dVar8 + (double)fVar5;
  dVar6 = dVar8 - (double)(fVar5 + fVar5);
  if (dVar8 <= dVar6) {
    dVar6 = dVar8;
  }
  dVar8 = (double)pFVar2->MinSequenceHeightRatio * dVar8;
  if (dVar6 <= dVar8) {
    dVar6 = dVar8;
  }
  fVar7 = (float)dVar6;
  this->Height = fVar7;
  fVar5 = (float)((((double)fVar7 + dVar9) - dVar9) * __real_3fe0000000000000 + dVar9);
  this->Center = fVar5;
  fVar7 = fVar7 * pFVar2->MaxSequenceHeightRatio;
  this->Height = fVar7;
  fVar7 = fVar7 * __real_3f000000;
  this->Top = fVar5 - fVar7;
  this->Bottom = fVar7 + fVar5;
  return this;
}

