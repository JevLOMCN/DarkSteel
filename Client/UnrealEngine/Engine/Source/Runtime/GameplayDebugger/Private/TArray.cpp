// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 7

// operator=<UE::Math::TVector<double>_const_,int> @ 146d3a390

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
operator=<UE::Math::TVector<double>_const_,int>
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TVector<double> *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x18);
  }
  return this;
}

// operator= @ 146d41830

TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_> *this,
          TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FGameplayDebuggerInputConfig *pFVar3;
  
  if (this != param_1) {
    DestructItems<FGameplayDebuggerInputConfig,int>
              ((FGameplayDebuggerInputConfig *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FGameplayDebuggerInputConfig *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FGameplayDebuggerInputConfig,FGameplayDebuggerInputConfig,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 146d418d0

TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *this,
          TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FGameplayDebuggerShape *pFVar3;
  
  if (this != param_1) {
    DestructItems<FGameplayDebuggerShape,int>
              ((FGameplayDebuggerShape *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FGameplayDebuggerShape *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FGameplayDebuggerShape,FGameplayDebuggerShape,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Empty @ 146d4af00

void __thiscall
TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FGameplayDebuggerShape,int>
              ((FGameplayDebuggerShape *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 146d59bc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FGameplayDebuggerPlayerData,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FGameplayDebuggerPlayerData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x18,(longlong)iVar4 * 0x18);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 146d59ca0

void __thiscall
TArray<FNetFastCategoryBaseState::FCategoryState,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNetFastCategoryBaseState::FCategoryState,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  FCategoryState *_Dst;
  int iVar1;
  
  _Dst = (FCategoryState *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FNetFastCategoryBaseState::FCategoryState,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 146d59d20

void __thiscall
TArray<FGameplayDebuggerCategoryData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FGameplayDebuggerCategoryData,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FGameplayDebuggerCategoryData *_Dst;
  
  _Dst = (FGameplayDebuggerCategoryData *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x40);
  DestructItems<FGameplayDebuggerCategoryData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

