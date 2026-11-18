// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Overlaps @ 148fc6110

bool __thiscall TRange<FFrameTime>::Overlaps(TRange<FFrameTime> *this,TRange<FFrameTime> *param_1)

{
  FFrameTime FVar1;
  FFrameTime FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  FFrameNumber FVar10;
  FFrameTime *pFVar11;
  FFrameNumber FVar12;
  float fStackX_1c;
  float fStackX_24;
  
  bVar8 = IsEmpty(this);
  if (!bVar8) {
    bVar8 = IsEmpty(param_1);
    if (!bVar8) {
      if (((this->UpperBound).Type.Value == '\x02') || ((param_1->LowerBound).Type.Value == '\x02'))
      {
        bVar8 = true;
      }
      if (((this->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
      {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      bVar4 = true;
      bVar7 = true;
      if (bVar8 == false) {
        if ((param_1->LowerBound).Type.Value == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
        }
        FVar1 = (param_1->LowerBound).Value;
        if ((this->UpperBound).Type.Value == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
        }
        FVar2 = (this->UpperBound).Value;
        FVar12 = FVar1.FrameNumber.Value;
        FVar10 = FVar2.FrameNumber.Value;
        if ((FVar12.Value < FVar10.Value) ||
           ((FVar10.Value == FVar12.Value &&
            (fStackX_1c = FVar2.SubFrame, fStackX_24 = FVar1.SubFrame, fStackX_24 < fStackX_1c)))) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        pFVar11 = TRangeBound<FFrameTime>::GetValue(&param_1->LowerBound);
        FVar1 = *pFVar11;
        pFVar11 = TRangeBound<FFrameTime>::GetValue(&this->UpperBound);
        FVar12 = FVar1.FrameNumber.Value;
        FVar10 = (*pFVar11).FrameNumber;
        if ((FVar12.Value < FVar10.Value) ||
           ((FVar10.Value == FVar12.Value &&
            (fStackX_1c = (*pFVar11).SubFrame, fStackX_24 = FVar1.SubFrame, fStackX_24 <= fStackX_1c
            )))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (((this->UpperBound).Type.Value == '\x01') &&
           ((param_1->LowerBound).Type.Value == '\x01')) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          bVar7 = bVar8;
        }
      }
      bVar8 = true;
      if (!bVar6) {
        if ((param_1->UpperBound).Type.Value == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
        }
        FVar1 = (param_1->UpperBound).Value;
        if ((this->LowerBound).Type.Value == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
        }
        FVar2 = (this->LowerBound).Value;
        FVar12 = FVar1.FrameNumber.Value;
        FVar10 = FVar2.FrameNumber.Value;
        if ((FVar10.Value < FVar12.Value) ||
           ((FVar10.Value == FVar12.Value &&
            (fStackX_1c = FVar2.SubFrame, fStackX_24 = FVar1.SubFrame, fStackX_1c < fStackX_24)))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        pFVar11 = TRangeBound<FFrameTime>::GetValue(&param_1->UpperBound);
        FVar1 = *pFVar11;
        pFVar11 = TRangeBound<FFrameTime>::GetValue(&this->LowerBound);
        FVar12 = FVar1.FrameNumber.Value;
        FVar10 = (*pFVar11).FrameNumber;
        if ((FVar10.Value < FVar12.Value) ||
           ((FVar10.Value == FVar12.Value &&
            (fStackX_1c = (*pFVar11).SubFrame, fStackX_24 = FVar1.SubFrame, fStackX_1c <= fStackX_24
            )))) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (((this->LowerBound).Type.Value != '\x01') ||
           ((param_1->UpperBound).Type.Value != '\x01')) {
          bVar4 = false;
        }
        if (bVar4) {
          bVar8 = bVar6;
        }
      }
      if ((bVar7) && (bVar8)) {
        return true;
      }
      return false;
    }
  }
  return false;
}

