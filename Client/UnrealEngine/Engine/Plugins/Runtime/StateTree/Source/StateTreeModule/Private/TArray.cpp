// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 14

// TArray<FStateTreeStateHandle,TSizedDefaultAllocator<32>_><unsigned_short_const_,int> @ 14d4a8a50

TArray<FStateTreeStateHandle,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FStateTreeStateHandle,TSizedDefaultAllocator<32>_>::
TArray<FStateTreeStateHandle,TSizedDefaultAllocator<32>_><unsigned_short_const_,int>
          (TArray<FStateTreeStateHandle,TSizedDefaultAllocator<32>_> *this,
          TArrayView<unsigned_short_const_,int> *param_1)

{
  int iVar1;
  ushort *puVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  puVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<FStateTreeStateHandle,unsigned_short,int>
            ((this->AllocatorInstance).Data,puVar2,iVar1);
  return this;
}

// operator=<FStateTreeExternalDataDesc_const_,int> @ 14d4a8ae0

TArray<FStateTreeExternalDataDesc,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FStateTreeExternalDataDesc,TSizedDefaultAllocator<32>_>::
operator=<FStateTreeExternalDataDesc_const_,int>
          (TArray<FStateTreeExternalDataDesc,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FStateTreeExternalDataDesc_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FStateTreeExternalDataDesc *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FStateTreeExternalDataDesc,FStateTreeExternalDataDesc,int>
            ((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// RemoveAtSwapImpl @ 14d4ce300

void __thiscall
TArray<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwapImpl(TArray<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1)

{
  ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext> FVar1;
  int iVar2;
  ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)this;
  if (FVar1 != (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)0x0) {
    FVar3 = FVar1;
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove((void *)((longlong)param_1 * 0x20 + (longlong)FVar3),
            (void *)((longlong)(this->ArrayNum - iVar2) * 0x20 + (longlong)FVar3),
            (longlong)iVar2 << 5);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// AddUniqueImpl<FStateTreeDelegateDispatcher_const_&> @ 14d4dc750

int __thiscall
TArray<FStateTreeDelegateDispatcher,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FStateTreeDelegateDispatcher_const_&>
          (TArray<FStateTreeDelegateDispatcher,TSizedDefaultAllocator<32>_> *this,
          FStateTreeDelegateDispatcher *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    uVar3 = *(undefined8 *)&(param_1->ID).C;
    pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar1 = *(undefined8 *)&param_1->ID;
    *(undefined8 *)(pFVar1 + 8) = uVar3;
  }
  return iVar5;
}

// operator= @ 14d4ecac0

TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *this,
          TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FStateTreeExecutionFrame *pFVar3;
  
  if (this != param_1) {
    DestructItems<FStateTreeExecutionFrame,int>
              ((FStateTreeExecutionFrame *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FStateTreeExecutionFrame *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FStateTreeExecutionFrame,FStateTreeExecutionFrame,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Empty @ 14d4f4280

void __thiscall
TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 14d4f8be0

int __thiscall
TArray<FStateTreeDelegateDispatcher,TSizedDefaultAllocator<32>_>::Find
          (TArray<FStateTreeDelegateDispatcher,TSizedDefaultAllocator<32>_> *this,
          FStateTreeDelegateDispatcher *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x10) {
    pFVar2 = pFVar1;
    do {
      if ((((param_1->ID).D == *(uint *)(pFVar2 + 0xc) && (param_1->ID).C == *(uint *)(pFVar2 + 8))
          && (param_1->ID).B == *(uint *)(pFVar2 + 4)) && (param_1->ID).A == *(uint *)pFVar2) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4);
      }
      pFVar2 = pFVar2 + 0x10;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x10);
  }
  return -1;
}

// Pop @ 14d502bc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FActiveFrameID __thiscall
TArray<UE::StateTree::FActiveFrameID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Pop
          (TArray<UE::StateTree::FActiveFrameID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,EAllowShrinking param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  ForElementType<UE::StateTree::FActiveFrameID> FVar6;
  undefined7 in_register_00000011;
  char in_R8B;
  int iVar7;
  
  if (this->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (FActiveFrameID)uVar4;
    }
  }
  iVar7 = this->ArrayNum;
  FVar6 = (this->AllocatorInstance).SecondaryData;
  uVar4 = iVar7 - 1;
  lVar1 = (longlong)(int)uVar4 * 4;
  if (FVar6 == (ForElementType<UE::StateTree::FActiveFrameID>)0x0) {
    uVar5 = *(undefined4 *)((this->AllocatorInstance).InlineData + lVar1);
    FVar6 = (ForElementType<UE::StateTree::FActiveFrameID>)this;
  }
  else {
    uVar5 = *(undefined4 *)((longlong)FVar6 + lVar1);
  }
  *(undefined4 *)CONCAT71(in_register_00000011,param_1) = uVar5;
  iVar7 = ~uVar4 + iVar7;
  if (iVar7 != 0) {
    memmove((void *)((longlong)FVar6 + lVar1),(void *)((longlong)FVar6 + lVar1 + 4),
            (longlong)iVar7 << 2);
  }
  iVar7 = this->ArrayNum + -1;
  this->ArrayNum = iVar7;
  if (in_R8B == '\x01') {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::FActiveFrameID>_>
              (4,4,&this->AllocatorInstance,iVar7,&this->ArrayMax);
  }
  return (FActiveFrameID)(uint)(undefined4 *)CONCAT71(in_register_00000011,param_1);
}

// RemoveAtSwapImpl @ 14d5039c0

void __thiscall
TArray<FStateTreeDelegateActiveListeners::FActiveListener,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<FStateTreeDelegateActiveListeners::FActiveListener,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x40;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(_Dst + 0x18));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x40,(longlong)iVar2 << 6);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14d503a40

void __thiscall
TArray<FStateTreeSharedEvent,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FStateTreeSharedEvent,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14d503ac0

void __thiscall
TArray<FStateTreeTransitionDelayedState,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FStateTreeTransitionDelayedState,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x30;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 0x18));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x30,(longlong)iVar2 * 0x30);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// Reset @ 14d506330

void __thiscall
TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FStateTreeExecutionFrame *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FStateTreeExecutionFrame *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<FStateTreeExecutionFrame,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FStateTreeExecutionFrame,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// SetNum @ 14d514ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FStateTreeDataView,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FStateTreeDataView,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FStateTreeDataView,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_><UE::StateTree::FActiveState_const_,int> @ 14d52a430

TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_>::
TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_><UE::StateTree::FActiveState_const_,int>
          (TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::StateTree::FActiveState_const_,int> *param_1)

{
  int iVar1;
  FActiveState *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
  return this;
}

