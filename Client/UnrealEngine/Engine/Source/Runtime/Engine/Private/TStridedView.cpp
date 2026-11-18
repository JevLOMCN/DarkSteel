// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetElementPtr @ 147da58d0

TMatrix<double> * __thiscall
TStridedView<UE::Math::TMatrix<double>,int>::GetElementPtr
          (TStridedView<UE::Math::TMatrix<double>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMatrix<double> *pTVar4;
  
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
      pTVar4 = (TMatrix<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TMatrix<double> *)
         ((longlong)this->FirstElementPtr->M[0] +
         (longlong)this->BytesBetweenElements * (longlong)param_1);
}

// GetElementPtr @ 148380e00

TVector<float> * __thiscall
TStridedView<UE::Math::TVector<float>_const_,int>::GetElementPtr
          (TStridedView<UE::Math::TVector<float>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float> *pTVar4;
  
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
      pTVar4 = (TVector<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float> *)
         ((longlong)&this->FirstElementPtr->field0_0x0 +
         (longlong)this->BytesBetweenElements * (longlong)param_1);
}

// GetElementPtr @ 148407db0

FColor * __thiscall
TStridedView<FColor_const_,int>::GetElementPtr(TStridedView<FColor_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FColor *pFVar4;
  
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
      pFVar4 = (FColor *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FColor *)
         ((longlong)&this->FirstElementPtr->field0_0x0 +
         (longlong)this->BytesBetweenElements * (longlong)param_1);
}

// GetElementPtr @ 14846be80

TVector2<float> * __thiscall
TStridedView<UE::Math::TVector2<float>_const_,int>::GetElementPtr
          (TStridedView<UE::Math::TVector2<float>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector2<float> *pTVar4;
  
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
      pTVar4 = (TVector2<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector2<float> *)
         ((longlong)&this->FirstElementPtr->field0_0x0 +
         (longlong)this->BytesBetweenElements * (longlong)param_1);
}

