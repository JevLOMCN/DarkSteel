// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// GetValue @ 141c02140

float __thiscall TRangeBound<float>::GetValue(TRangeBound<float> *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->Type).Value != '\x02') {
    return this->Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return this->Value;
}

// GetValue @ 141c02190

FTimespan * __thiscall TRangeBound<FTimespan>::GetValue(TRangeBound<FTimespan> *this)

{
  code *pcVar1;
  bool bVar2;
  FTimespan *pFVar3;
  
  if ((this->Type).Value != '\x02') {
    return &this->Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTimespan *)(*pcVar1)();
    return pFVar3;
  }
  return &this->Value;
}

