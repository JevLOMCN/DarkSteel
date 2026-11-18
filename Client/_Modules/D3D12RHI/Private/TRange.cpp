// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// IsEmpty @ 1459c7420

bool __thiscall TRange<__int64>::IsEmpty(TRange<__int64> *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    return false;
  }
  lVar1 = (this->LowerBound).Value;
  if (lVar1 <= (this->UpperBound).Value) {
    if (((this->UpperBound).Type.Value == '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (lVar1 != (this->UpperBound).Value) {
      return false;
    }
    if (((this->LowerBound).Type.Value != '\0') && ((this->UpperBound).Type.Value != '\0')) {
      return false;
    }
  }
  return true;
}

// Overlaps @ 1459c8de0

bool __thiscall TRange<__int64>::Overlaps(TRange<__int64> *this,TRange<__int64> *param_1)

{
  uchar uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  
  bVar9 = IsEmpty(this);
  if (!bVar9) {
    bVar9 = IsEmpty(param_1);
    if (!bVar9) {
      uVar1 = (this->UpperBound).Type.Value;
      if ((uVar1 == '\x02') || ((param_1->LowerBound).Type.Value == '\x02')) {
        bVar9 = true;
      }
      if (((this->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
      {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      bVar6 = true;
      bVar8 = true;
      if (bVar9 == false) {
        if (uVar1 == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        lVar2 = (this->UpperBound).Value;
        if ((param_1->LowerBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        lVar3 = (param_1->LowerBound).Value;
        if ((this->UpperBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        lVar4 = (this->UpperBound).Value;
        if ((param_1->LowerBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        if (((this->UpperBound).Type.Value == '\x01') &&
           ((param_1->LowerBound).Type.Value == '\x01')) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        bVar8 = lVar3 < lVar2;
        if (bVar9) {
          bVar8 = (param_1->LowerBound).Value <= lVar4;
        }
      }
      bVar9 = true;
      if (!bVar7) {
        if ((this->LowerBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        lVar2 = (this->LowerBound).Value;
        if ((param_1->UpperBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        lVar3 = (param_1->UpperBound).Value;
        if ((this->LowerBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        lVar4 = (this->LowerBound).Value;
        if ((param_1->UpperBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        if (((this->LowerBound).Type.Value != '\x01') ||
           ((param_1->UpperBound).Type.Value != '\x01')) {
          bVar6 = false;
        }
        bVar9 = lVar2 < lVar3;
        if (bVar6) {
          bVar9 = lVar4 <= (param_1->UpperBound).Value;
        }
      }
      if ((bVar8) && (bVar9)) {
        return true;
      }
      return false;
    }
  }
  return false;
}

