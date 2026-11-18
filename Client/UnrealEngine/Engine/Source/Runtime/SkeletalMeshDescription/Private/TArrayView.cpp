// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 3

// operator[] @ 144395c00

TTransform<double> * __thiscall
TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
          (TArrayView<UE::Math::TTransform<double>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 144395c80

FMorphProcessContext * __thiscall
TArrayView<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,int>::operator[]
          (void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMorphProcessContext *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMorphProcessContext *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMorphProcessContext *)((longlong)param_1 * 0x60 + *(longlong *)this);
}

// operator[] @ 144395d00

FMorphProcessContext * __thiscall
TArrayView<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,int>::operator[]
          (void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMorphProcessContext *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMorphProcessContext *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMorphProcessContext *)((longlong)param_1 * 0x60 + *(longlong *)this);
}

