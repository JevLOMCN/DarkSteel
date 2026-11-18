// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// IsEmpty @ 148ad43c0

bool __thiscall TRange<double>::IsEmpty(TRange<double> *this)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    return false;
  }
  dVar2 = (this->LowerBound).Value;
  pdVar1 = &(this->UpperBound).Value;
  if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
    if (((this->UpperBound).Type.Value == '\x02') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      bVar4 = (bool)(*pcVar3)();
      return bVar4;
    }
    if (dVar2 != (this->UpperBound).Value) {
      return false;
    }
    if (((this->LowerBound).Type.Value != '\0') && ((this->UpperBound).Type.Value != '\0')) {
      return false;
    }
  }
  return true;
}

// Overlaps @ 148ad5dd0

bool __thiscall TRange<double>::Overlaps(TRange<double> *this,TRange<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar5;
  uchar uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  double dVar4;
  
  bVar11 = IsEmpty(this);
  if (!bVar11) {
    bVar11 = IsEmpty(param_1);
    if (!bVar11) {
      uVar6 = (this->UpperBound).Type.Value;
      if ((uVar6 == '\x02') || ((param_1->LowerBound).Type.Value == '\x02')) {
        bVar11 = true;
      }
      if (((this->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
      {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      bVar8 = true;
      bVar10 = true;
      if (bVar11 == false) {
        if (uVar6 == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        dVar2 = (this->UpperBound).Value;
        if ((param_1->LowerBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        pdVar1 = &(param_1->LowerBound).Value;
        dVar3 = *pdVar1;
        dVar4 = *pdVar1;
        if ((this->UpperBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        dVar5 = (this->UpperBound).Value;
        if ((param_1->LowerBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        if (((this->UpperBound).Type.Value == '\x01') &&
           ((param_1->LowerBound).Type.Value == '\x01')) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
        }
        bVar10 = dVar4 <= dVar2 && dVar2 != dVar3;
        if (bVar11) {
          bVar10 = (param_1->LowerBound).Value <= dVar5;
        }
      }
      bVar11 = true;
      if (!bVar9) {
        if ((this->LowerBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        dVar2 = (this->LowerBound).Value;
        if ((param_1->UpperBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        dVar3 = (param_1->UpperBound).Value;
        if ((this->LowerBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        dVar4 = (this->LowerBound).Value;
        if ((param_1->UpperBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        pdVar1 = &(param_1->UpperBound).Value;
        if (((this->LowerBound).Type.Value != '\x01') ||
           ((param_1->UpperBound).Type.Value != '\x01')) {
          bVar8 = false;
        }
        bVar11 = dVar2 < dVar3;
        if (bVar8) {
          bVar11 = dVar4 < *pdVar1 || dVar4 == *pdVar1;
        }
      }
      if ((bVar10) && (bVar11)) {
        return true;
      }
      return false;
    }
  }
  return false;
}

