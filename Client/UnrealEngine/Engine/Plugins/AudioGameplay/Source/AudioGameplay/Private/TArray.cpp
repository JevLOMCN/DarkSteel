// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 13

// AddUniqueImpl<TScriptInterface<IAudioComponentGroupExtension>_const_&> @ 14d982e70

int __thiscall
TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TScriptInterface<IAudioComponentGroupExtension>_const_&>
          (TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_> *this
          ,TScriptInterface<IAudioComponentGroupExtension> *param_1)

{
  TScriptInterface<IAudioComponentGroupExtension> *pTVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pTVar1 = (TScriptInterface<IAudioComponentGroupExtension> *)(this->AllocatorInstance).Data;
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
    this->ArrayNum = iVar5 + 1;
    pUVar2 = *(UObject **)param_1;
    pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(UObject **)pFVar6 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(undefined8 *)(pFVar6 + 8) = *(undefined8 *)&param_1->field_0x8;
  }
  return iVar5;
}

// AddUniqueImpl<FBoolParamCallback_const_&> @ 14d982f60

int __thiscall
TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FBoolParamCallback_const_&>
          (TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *this,FBoolParamCallback *param_1)

{
  FBoolParamCallback *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FReadAccessScope local_28;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (FBoolParamCallback *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
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
                        (0x818,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    lVar6 = (longlong)iVar5;
    pFVar2 = (this->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar6 * 0x18) = 0;
    *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 8) = 0;
    *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
    *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 8) = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 0x10) = *(undefined8 *)&param_1->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return iVar5;
}

// AddUniqueImpl<FSoundCallback_const_&> @ 14d983070

int __thiscall
TArray<FSoundCallback,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoundCallback_const_&>
          (TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *this,FSoundCallback *param_1)

{
  FSoundCallback *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FReadAccessScope local_28;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (FSoundCallback *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
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
                        (0x818,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    lVar6 = (longlong)iVar5;
    pFVar2 = (this->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar6 * 0x18) = 0;
    *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 8) = 0;
    *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
    *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 8) = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 0x10) = *(undefined8 *)&param_1->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return iVar5;
}

// Append<FAudioParameter,TSizedDefaultAllocator<32>_> @ 14d983180

void __thiscall
TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::
Append<FAudioParameter,TSizedDefaultAllocator<32>_>
          (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

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
                      (0xa0,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FAudioParameter,FAudioParameter,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0xa0,
               (FAudioParameter *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// operator= @ 14d988910

TArray<FAudioParameter,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FAudioParameter *pFVar3;
  
  if (this != param_1) {
    DestructItems<FAudioParameter,int>
              ((FAudioParameter *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FAudioParameter,FAudioParameter,int>((this->AllocatorInstance).Data,pFVar3,iVar2)
    ;
  }
  return this;
}

// operator== @ 14d9889b0

bool __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::operator==
          (TArray<int,TSizedDefaultAllocator<32>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 != param_1->ArrayNum) {
    return false;
  }
  if ((iVar1 != 0) &&
     (iVar1 = memcmp((this->AllocatorInstance).Data,(param_1->AllocatorInstance).Data,
                     (longlong)iVar1 << 2), iVar1 != 0)) {
    return false;
  }
  return true;
}

// operator== @ 14d9889f0

bool __thiscall
TArray<float,TSizedDefaultAllocator<32>_>::operator==
          (TArray<float,TSizedDefaultAllocator<32>_> *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 != param_1->ArrayNum) {
    return false;
  }
  if ((iVar1 != 0) &&
     (iVar1 = memcmp((this->AllocatorInstance).Data,(param_1->AllocatorInstance).Data,
                     (longlong)iVar1 << 2), iVar1 != 0)) {
    return false;
  }
  return true;
}

// operator== @ 14d988a30

bool __thiscall
TArray<bool,TSizedDefaultAllocator<32>_>::operator==
          (TArray<bool,TSizedDefaultAllocator<32>_> *this,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 != param_1->ArrayNum) {
    return false;
  }
  if ((iVar1 != 0) &&
     (iVar1 = memcmp((this->AllocatorInstance).Data,(param_1->AllocatorInstance).Data,
                     (longlong)iVar1), iVar1 != 0)) {
    return false;
  }
  return true;
}

// Find @ 14d98c920

int __thiscall
TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_> *this
          ,TScriptInterface<IAudioComponentGroupExtension> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x10) {
    pFVar2 = pFVar1;
    do {
      if (*(longlong *)pFVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(pFVar2 + 8);
      }
      if (*(longlong *)param_1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)&param_1->field_0x8;
      }
      if ((lVar4 == lVar3) && (*(longlong *)pFVar2 == *(longlong *)param_1)) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4);
      }
      pFVar2 = pFVar2 + 0x10;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x10);
  }
  return -1;
}

// Find @ 14d98c990

int __thiscall
TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>::Find
          (TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *this,FBoolParamCallback *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  atomic<unsigned___int64> aVar3;
  bool bVar4;
  FScriptContainerElement *this_00;
  FWeakObjectPtr local_res8;
  FReadAccessScope local_48;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 0x18) {
      return -1;
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_48);
    local_res8.ObjectIndex = *(int *)&param_1->field_0x8;
    local_res8.ObjectSerialNumber = *(int *)&param_1->field_0xc;
    aVar3 = *(atomic<unsigned___int64> *)&param_1->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
    if ((((((FWeakObjectPtr *)(this_00 + 8))->ObjectIndex == local_res8.ObjectIndex) &&
         (*(int *)(this_00 + 0xc) == local_res8.ObjectSerialNumber)) ||
        ((bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(this_00 + 8)), !bVar4 &&
         (bVar4 = FWeakObjectPtr::IsValid(&local_res8), !bVar4)))) &&
       (((FMRSWRecursiveAccessDetector *)&this_00[0x10].field_0x0)->State == aVar3)) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    this_00 = this_00 + 0x18;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  return (int)(((longlong)this_00 - (longlong)pFVar2) / 0x18);
}

// Find @ 14d98cab0

int __thiscall
TArray<FSoundCallback,TSizedDefaultAllocator<32>_>::Find
          (TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *this,FSoundCallback *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  atomic<unsigned___int64> aVar3;
  bool bVar4;
  FScriptContainerElement *this_00;
  FWeakObjectPtr local_res8;
  FReadAccessScope local_48;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 0x18) {
      return -1;
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_48);
    local_res8.ObjectIndex = *(int *)&param_1->field_0x8;
    local_res8.ObjectSerialNumber = *(int *)&param_1->field_0xc;
    aVar3 = *(atomic<unsigned___int64> *)&param_1->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
    if ((((((FWeakObjectPtr *)(this_00 + 8))->ObjectIndex == local_res8.ObjectIndex) &&
         (*(int *)(this_00 + 0xc) == local_res8.ObjectSerialNumber)) ||
        ((bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(this_00 + 8)), !bVar4 &&
         (bVar4 = FWeakObjectPtr::IsValid(&local_res8), !bVar4)))) &&
       (((FMRSWRecursiveAccessDetector *)&this_00[0x10].field_0x0)->State == aVar3)) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    this_00 = this_00 + 0x18;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  return (int)(((longlong)this_00 - (longlong)pFVar2) / 0x18);
}

// RemoveAt @ 14d98fb60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<FGameplayTag,FGameplayTagQuery>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TTuple<FGameplayTag,FGameplayTagQuery>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
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
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x50;
  if (*(void **)(_Dst + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x40));
  }
  if (*(void **)(_Dst + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x30));
  }
  if (*(void **)(_Dst + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x20));
  }
  if (*(void **)(_Dst + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x10));
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x50,(longlong)iVar4 * 0x50);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// Reset @ 14d990670

void __thiscall
TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FAudioParameter *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FAudioParameter *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<FAudioParameter,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FAudioParameter,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

