// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// operator[] @ 14ca6c220

TVector<float> * __thiscall
UE::Geometry::TDenseGrid2<UE::Math::TVector<float>_>::operator[]
          (TDenseGrid2<UE::Math::TVector<float>_> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Buffer).ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float> *)((this->Buffer).AllocatorInstance.Data + param_1 * 0xc);
}

// operator[] @ 14ca6c2a0

FSampleStats * __thiscall
UE::Geometry::TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::operator[]
          (TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *this,
          long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSampleStats *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Buffer).ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSampleStats *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSampleStats *)((this->Buffer).AllocatorInstance.Data + param_1 * 4);
}

// operator[] @ 14cb658f0

float * __thiscall
UE::Geometry::TDenseGrid2<float>::operator[](TDenseGrid2<float> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Buffer).ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)((this->Buffer).AllocatorInstance.Data + param_1 * 4);
}

// operator[] @ 14cb65970

float * __thiscall
UE::Geometry::TDenseGrid2<float>::operator[](TDenseGrid2<float> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Buffer).ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)((this->Buffer).AllocatorInstance.Data + param_1 * 4);
}

