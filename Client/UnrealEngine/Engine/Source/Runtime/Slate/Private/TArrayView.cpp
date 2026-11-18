// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// operator[] @ 1427bb970

TSharedPtr<SWidget,1> * __thiscall
TArrayView<TSharedPtr<SWidget,1>_const_,int>::operator[]
          (TArrayView<TSharedPtr<SWidget,1>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<SWidget,1> *pTVar4;
  
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
      pTVar4 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1427bb9f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotProxy * __thiscall
TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>::operator[]
          (TArrayView<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotProxy *pFVar4;
  
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
      pFVar4 = (FSlotProxy *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 14281faa0

TSharedPtr<SWidget,1> * __thiscall
TArrayView<TSharedPtr<SWidget,1>_const_,int>::Last
          (TArrayView<TSharedPtr<SWidget,1>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<SWidget,1> *pTVar4;
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
      pTVar4 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// operator[] @ 1428c61d0

TSharedPtr<FString,1> * __thiscall
TArrayView<TSharedPtr<FString,1>_const_,int>::operator[]
          (TArrayView<TSharedPtr<FString,1>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
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
      pTVar4 = (TSharedPtr<FString,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 142957d70

TSharedPtr<FString,1> * __thiscall
TArrayView<TSharedPtr<FString,1>_const_,int>::Last
          (TArrayView<TSharedPtr<FString,1>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FString,1> *pTVar4;
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
      pTVar4 = (TSharedPtr<FString,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

