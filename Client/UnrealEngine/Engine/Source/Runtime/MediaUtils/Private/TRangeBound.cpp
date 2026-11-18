// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 1

// GetValue @ 146c014b0

FMediaTimeStamp * __thiscall
TRangeBound<FMediaTimeStamp>::GetValue(TRangeBound<FMediaTimeStamp> *this)

{
  code *pcVar1;
  bool bVar2;
  FMediaTimeStamp *pFVar3;
  
  if ((this->Type).Value != '\x02') {
    return &this->Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMediaTimeStamp *)(*pcVar1)();
    return pFVar3;
  }
  return &this->Value;
}

