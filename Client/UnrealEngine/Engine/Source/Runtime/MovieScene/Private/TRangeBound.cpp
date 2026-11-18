// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// GetValue @ 14605c160

FFrameNumber * __thiscall TRangeBound<FFrameNumber>::GetValue(TRangeBound<FFrameNumber> *this)

{
  code *pcVar1;
  bool bVar2;
  FFrameNumber *pFVar3;
  
  if ((this->Type).Value != '\x02') {
    return &this->Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFrameNumber *)(*pcVar1)();
    return pFVar3;
  }
  return &this->Value;
}

// GetValue @ 1460d0fe0

FFrameTime * __thiscall TRangeBound<FFrameTime>::GetValue(TRangeBound<FFrameTime> *this)

{
  code *pcVar1;
  bool bVar2;
  FFrameTime *pFVar3;
  
  if ((this->Type).Value != '\x02') {
    return &this->Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFrameTime *)(*pcVar1)();
    return pFVar3;
  }
  return &this->Value;
}

