// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// operator[] @ 14e166150

TObjectPtr<UOptimusNodePin> * __thiscall
TArrayView<TObjectPtr<UOptimusNodePin>_const_,int>::operator[]
          (TArrayView<TObjectPtr<UOptimusNodePin>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<UOptimusNodePin> *pTVar4;
  
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
      pTVar4 = (TObjectPtr<UOptimusNodePin> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14e1661d0

UOptimusNodePin ** __thiscall
TArrayView<UOptimusNodePin_*_const,int>::operator[]
          (TArrayView<UOptimusNodePin_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UOptimusNodePin **ppUVar4;
  
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
      ppUVar4 = (UOptimusNodePin **)(*pcVar1)();
      return ppUVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14e166250

FArrayShaderValue * __thiscall
TArrayView<FArrayShaderValue,int>::operator[](TArrayView<FArrayShaderValue,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FArrayShaderValue *pFVar4;
  
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
      pFVar4 = (FArrayShaderValue *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 14e1f1070

UOptimusNodePin ** __thiscall
TArrayView<UOptimusNodePin_*_const,int>::Last
          (TArrayView<UOptimusNodePin_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UOptimusNodePin **ppUVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppUVar4 = (UOptimusNodePin **)(*pcVar1)();
      return ppUVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

