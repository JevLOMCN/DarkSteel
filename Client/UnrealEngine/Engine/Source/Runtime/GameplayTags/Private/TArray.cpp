// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 14

// AddUniqueImpl<FGameplayTag_const_&> @ 146ac41f0

int __thiscall
TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGameplayTag_const_&>
          (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this,FGameplayTag *param_1)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  
  pFVar1 = (FName *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if (*pFVar6 == param_1->TagName) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FName *)(pFVar2 + (longlong)iVar5 * 8) = param_1->TagName;
  return iVar5;
}

// AddUniqueImpl<FGameplayTagRedirect_const_&> @ 146ac42f0

int __thiscall
TArray<FGameplayTagRedirect,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FGameplayTagRedirect_const_&>
          (TArray<FGameplayTagRedirect,TSizedDefaultAllocator<32>_> *this,
          FGameplayTagRedirect *param_1)

{
  FName *pFVar1;
  FGameplayTagRedirect *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FGameplayTagRedirect *pFVar7;
  
  pFVar2 = (FGameplayTagRedirect *)(this->AllocatorInstance).Data;
  if (pFVar2 != pFVar2 + this->ArrayNum) {
    pFVar7 = pFVar2;
    do {
      if ((pFVar7->OldTagName == param_1->OldTagName) && (pFVar7->NewTagName == param_1->NewTagName)
         ) {
        iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar2 + this->ArrayNum);
  }
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar6;
  }
  this->ArrayNum = iVar6 + 1;
  FVar4 = param_1->NewTagName;
  pFVar1 = (FName *)((this->AllocatorInstance).Data + (longlong)iVar6 * 0x10);
  *pFVar1 = param_1->OldTagName;
  pFVar1[1] = FVar4;
  return iVar6;
}

// AddUniqueImpl<FGameplayTag> @ 146ac4410

int __thiscall
TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGameplayTag>
          (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this,FGameplayTag *param_1)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  
  pFVar1 = (FName *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if (*pFVar6 == param_1->TagName) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FName *)(pFVar2 + (longlong)iVar5 * 8) = param_1->TagName;
  return iVar5;
}

// Append<FGameplayTag,TSizedDefaultAllocator<32>_> @ 146ac4510

void __thiscall
TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Append<FGameplayTag,TSizedDefaultAllocator<32>_>
          (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this,
          TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// ~TArray<FGameplayTag,TSizedDefaultAllocator<32>_> @ 146acd340

void __thiscall
TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::~TArray<FGameplayTag,TSizedDefaultAllocator<32>_>
          (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FGameplayTagQueryExpression,TSizedDefaultAllocator<32>_> @ 146acd360

void __thiscall
TArray<FGameplayTagQueryExpression,TSizedDefaultAllocator<32>_>::
~TArray<FGameplayTagQueryExpression,TSizedDefaultAllocator<32>_>
          (TArray<FGameplayTagQueryExpression,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 146acdf60

TArray<FGameplayTag,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this,
          TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// Empty @ 146ad7860

void __thiscall
TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Insert @ 146ae2460

int __thiscall
TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<FGameplayTagNode,1> *param_1,int param_2)

{
  TSharedPtr<FGameplayTagNode,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  pTVar1 = (TSharedPtr<FGameplayTagNode,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  lVar7 = (longlong)param_2 * 0x10;
  pFVar6 = pFVar6 + lVar7;
  memmove(pFVar6 + 0x10,pFVar6,(longlong)(iVar5 - param_2) << 4);
  pFVar6 = (this->AllocatorInstance).Data;
  *(FGameplayTagNode **)(pFVar6 + lVar7) = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + lVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return param_2;
}

// RemoveAtImpl @ 146aeac40

void __thiscall
TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  TSharedPtr<FGameplayTagNode,1> *_Dst;
  
  _Dst = (TSharedPtr<FGameplayTagNode,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FGameplayTagNode,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 146aeacc0

void __thiscall
TArray<FNetFieldExport,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNetFieldExport,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FNetFieldExport *_Dst;
  int iVar1;
  
  _Dst = (FNetFieldExport *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<FNetFieldExport,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSingle @ 146aeae10

int __thiscall
TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::RemoveSingle
          (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this,FGameplayTag *param_1)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  
  pFVar1 = (FName *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar3 = pFVar1;
    do {
      if (*pFVar3 == param_1->TagName) {
        iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
        if (iVar2 == -1) {
          return 0;
        }
        memmove(pFVar1 + iVar2,pFVar1 + iVar2 + 1,(longlong)((this->ArrayNum - iVar2) + -1) << 3);
        this->ArrayNum = this->ArrayNum + -1;
        return 1;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar1 + this->ArrayNum);
  }
  return 0;
}

// SetNum @ 146aed440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FGameplayTag,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1 - iVar5);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 146aed580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNetFieldExport,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FNetFieldExport,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FNetFieldExport,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x28,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

