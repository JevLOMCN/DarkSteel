// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// Size<unsigned_int> @ 14d8a5830

uint __thiscall TRange<unsigned_int>::Size<unsigned_int>(TRange<unsigned_int> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                       ,0x1ad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if ((this->UpperBound).Type.Value == '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
  }
  uVar3 = (this->UpperBound).Value;
  if ((this->LowerBound).Type.Value == '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return uVar3 - (this->LowerBound).Value;
}

// IsEmpty @ 14d93d520

bool __thiscall TRange<unsigned_int>::IsEmpty(TRange<unsigned_int> *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    return false;
  }
  uVar1 = (this->LowerBound).Value;
  if (uVar1 <= (this->UpperBound).Value) {
    if (((this->UpperBound).Type.Value == '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (uVar1 != (this->UpperBound).Value) {
      return false;
    }
    if (((this->LowerBound).Type.Value != '\0') && ((this->UpperBound).Type.Value != '\0')) {
      return false;
    }
  }
  return true;
}

