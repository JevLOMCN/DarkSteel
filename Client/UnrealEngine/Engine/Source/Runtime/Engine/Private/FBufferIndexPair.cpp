// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// DatumLookup<FOverlapDatum> @ 147745840

FOverlapDatum * __thiscall
_anon_4A888FDA::FBufferIndexPair::DatumLookup<FOverlapDatum>
          (FBufferIndexPair *this,
          TArray<TUniquePtr<TTraceThreadData<FOverlapDatum>,TDefaultDelete<TTraceThreadData<FOverlapDatum>_>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FOverlapDatum *pFVar4;
  
  iVar1 = this->Block;
  if (((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) && ((uint)this->Index < 0x40)) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FOverlapDatum *)(*pcVar2)();
        return pFVar4;
      }
    }
    return (FOverlapDatum *)
           ((longlong)this->Index * 0x140 +
           *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 8));
  }
  return (FOverlapDatum *)0x0;
}

// DatumLookup<FTraceDatum> @ 1477458e0

FTraceDatum * __thiscall
_anon_4A888FDA::FBufferIndexPair::DatumLookup<FTraceDatum>
          (FBufferIndexPair *this,
          TArray<TUniquePtr<TTraceThreadData<FTraceDatum>,TDefaultDelete<TTraceThreadData<FTraceDatum>_>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTraceDatum *pFVar4;
  
  iVar1 = this->Block;
  if (((-1 < iVar1) && (iVar1 < param_1->ArrayNum)) && ((uint)this->Index < 0x40)) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FTraceDatum *)(*pcVar2)();
        return pFVar4;
      }
    }
    return (FTraceDatum *)
           ((longlong)this->Index * 0x160 +
           *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 8));
  }
  return (FTraceDatum *)0x0;
}

