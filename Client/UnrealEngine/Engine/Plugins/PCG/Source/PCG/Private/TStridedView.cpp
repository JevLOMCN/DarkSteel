// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// GetElementPtr @ 149814660

int * __thiscall TStridedView<int,int>::GetElementPtr(TStridedView<int,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((longlong)this->BytesBetweenElements * (longlong)param_1 +
                (longlong)this->FirstElementPtr);
}

// GetElementPtr @ 1498146e0

float * __thiscall TStridedView<float,int>::GetElementPtr(TStridedView<float,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)((longlong)this->BytesBetweenElements * (longlong)param_1 +
                  (longlong)this->FirstElementPtr);
}

// GetElementPtr @ 149814760

TTransform<double> * __thiscall
TStridedView<UE::Math::TTransform<double>,int>::GetElementPtr
          (TStridedView<UE::Math::TTransform<double>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTransform<double> *)
         ((longlong)(this->FirstElementPtr->Rotation).XY.m128d_f64 +
         (longlong)this->BytesBetweenElements * (longlong)param_1);
}

// GetElementPtr @ 1498147e0

TVector4<double> * __thiscall
TStridedView<UE::Math::TVector4<double>,int>::GetElementPtr
          (TStridedView<UE::Math::TVector4<double>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector4<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector4<double> *)
         ((longlong)&this->FirstElementPtr->field0_0x0 +
         (longlong)this->BytesBetweenElements * (longlong)param_1);
}

// GetElementPtr @ 149814860

long64 * __thiscall
TStridedView<__int64,int>::GetElementPtr(TStridedView<__int64,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 *plVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      plVar4 = (long64 *)(*pcVar1)();
      return plVar4;
    }
  }
  return (long64 *)
         ((longlong)this->BytesBetweenElements * (longlong)param_1 + (longlong)this->FirstElementPtr
         );
}

