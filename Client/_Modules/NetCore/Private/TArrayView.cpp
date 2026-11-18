// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 4

// TArrayView<UE::Net::FEscalationCounter,int> @ 1441d0d20

TArrayView<UE::Net::FEscalationCounter,int> * __thiscall
TArrayView<UE::Net::FEscalationCounter,int>::TArrayView<UE::Net::FEscalationCounter,int>
          (TArrayView<UE::Net::FEscalationCounter,int> *this)

{
  this->DataPtr = (FEscalationCounter *)0x0;
  this->ArrayNum = 0;
  return this;
}

// operator[] @ 1441d5120

FBin * __thiscall
TArrayView<UE::Net::FBinnedMovingValueBase::FBin,int>::operator[]
          (TArrayView<UE::Net::FBinnedMovingValueBase::FBin,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBin *pFVar4;
  
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
      pFVar4 = (FBin *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1441d51a0

FEscalationCounter * __thiscall
TArrayView<UE::Net::FEscalationCounter,int>::operator[]
          (TArrayView<UE::Net::FEscalationCounter,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEscalationCounter *pFVar4;
  
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
      pFVar4 = (FEscalationCounter *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1441d5220

TArrayView<int,int> * __thiscall
TArrayView<TArrayView<int,int>,int>::operator[]
          (TArrayView<TArrayView<int,int>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArrayView<int,int> *pTVar4;
  
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
      pTVar4 = (TArrayView<int,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

