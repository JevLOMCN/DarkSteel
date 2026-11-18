// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// TArrayView<enum_ESlatePostRT,int><TArray<enum_ESlatePostRT,TSizedDefaultAllocator<32>_>_&,TArray<enum_ESlatePostRT,TSizedDefaultAllocator<32>_>_> @ 14696e040

TArrayView<ESlatePostRT,int> * __thiscall
TArrayView<enum_ESlatePostRT,int>::
TArrayView<enum_ESlatePostRT,int><TArray<enum_ESlatePostRT,TSizedDefaultAllocator<32>_>_&,TArray<enum_ESlatePostRT,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<ESlatePostRT,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<ESlatePostRT,int> *pTVar4;
  
  *(FScriptContainerElement **)this = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    *(int *)((longlong)this + 8) = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<ESlatePostRT,int> *)(*pcVar2)();
    return pTVar4;
  }
  *(int *)((longlong)this + 8) = iVar1;
  return this;
}

// operator[] @ 146995e70

UObject ** __thiscall
TArrayView<UObject_*_const,int>::operator[](TArrayView<UObject_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject **ppUVar4;
  
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
      ppUVar4 = (UObject **)(*pcVar1)();
      return ppUVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 1469e3e60

FName * __thiscall
TArrayView<FName_const_,int>::Last(TArrayView<FName_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
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
      pFVar4 = (FName *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// Last @ 1469e3ef0

UObject ** __thiscall
TArrayView<UObject_*_const,int>::Last(TArrayView<UObject_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject **ppUVar4;
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
      ppUVar4 = (UObject **)(*pcVar1)();
      return ppUVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

