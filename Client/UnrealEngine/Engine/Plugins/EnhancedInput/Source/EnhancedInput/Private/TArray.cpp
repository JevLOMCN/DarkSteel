// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 11

// AddUniqueImpl<FEnhancedActionKeyMapping_const_&> @ 14a6bc830

int __thiscall
TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FEnhancedActionKeyMapping_const_&>
          (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *this,
          FEnhancedActionKeyMapping *param_1)

{
  FEnhancedActionKeyMapping *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FEnhancedActionKeyMapping *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
              ((FEnhancedActionKeyMapping *)
               ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x50),param_1);
  }
  return iVar4;
}

// AddUniqueImpl<UInputModifier_*> @ 14a6bc910

int __thiscall
TArray<UInputModifier_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UInputModifier_*>
          (TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *this,UInputModifier **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UInputModifier **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UInputModifier **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<UInputAction_const_*> @ 14a6bca10

int __thiscall
TArray<UInputAction_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UInputAction_const_*>
          (TArray<UInputAction_const_*,TSizedDefaultAllocator<32>_> *this,UInputAction **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UInputAction **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UInputAction **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// operator= @ 14a6cfd20

TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UInputModifier>,TObjectPtr<UInputModifier>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UInputModifier> *)pFVar2,iVar1);
  }
  return this;
}

// operator= @ 14a6cfdb0

TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UInputTrigger>,TObjectPtr<UInputTrigger>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UInputTrigger> *)pFVar2,iVar1);
  }
  return this;
}

// Empty @ 14a6d9230

void __thiscall
TArray<UE::EnhancedInput::FKeyMappingSaveData,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::EnhancedInput::FKeyMappingSaveData,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x2c,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a6d9280

void __thiscall
TArray<UE::EnhancedInput::FMappableKeysHeader,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::EnhancedInput::FMappableKeysHeader,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::EnhancedInput::FMappableKeysHeader,int>
              ((FMappableKeysHeader *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 14a6dc930

int __thiscall
TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>::Find
          (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *this,
          FEnhancedActionKeyMapping *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UInputAction *pUVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x50) {
    pUVar3 = (param_1->Action).field0_0x0.DebugPtr;
    pFVar5 = pFVar2;
    do {
      if ((((*(UInputAction **)(pFVar5 + 0x20) == pUVar3) &&
           (*(FName *)(pFVar5 + 0x28) == (param_1->Key).KeyName)) &&
          (*(int *)(pFVar5 + 8) == (param_1->Triggers).ArrayNum)) &&
         (((bVar4 = CompareItems<TObjectPtr<UInputTrigger>,int>
                              (*(TObjectPtr<UInputTrigger> **)pFVar5,
                               (TObjectPtr<UInputTrigger> *)
                               (param_1->Triggers).AllocatorInstance.Data,*(int *)(pFVar5 + 8)),
           bVar4 && (*(int *)(pFVar5 + 0x18) == (param_1->Modifiers).ArrayNum)) &&
          (bVar4 = CompareItems<TObjectPtr<UInputModifier>,int>
                             (*(TObjectPtr<UInputModifier> **)(pFVar5 + 0x10),
                              (TObjectPtr<UInputModifier> *)
                              (param_1->Modifiers).AllocatorInstance.Data,*(int *)(pFVar5 + 0x18)),
          bVar4)))) {
        return (int)(((longlong)pFVar5 - (longlong)pFVar2) / 0x50);
      }
      pFVar5 = pFVar5 + 0x50;
    } while (pFVar5 != pFVar2 + (longlong)iVar1 * 0x50);
  }
  return -1;
}

// RemoveAt @ 14a6f2660

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

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
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtSwapImpl @ 14a6f2730

void __thiscall
TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x50;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 0x38));
  if (*(void **)(_Dst + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x10));
  }
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x50,(longlong)iVar2 * 0x50);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14a6f27e0

void __thiscall
TArray<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>,TSizedDefaultAllocator<32>_>
                   *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  
  pFVar1 = (this->AllocatorInstance).Data;
  puVar2 = *(undefined8 **)(pFVar1 + (longlong)param_1 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar3) * 8,
            (longlong)iVar3 << 3);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

