// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// TMulticastScriptDelegate<FNotThreadSafeDelegateMode> @ 14215f5d0

TMulticastScriptDelegate<FNotThreadSafeDelegateMode> * __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this,
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined8 local_48 [2];
  FReadAccessScope local_38;
  
  pTVar1 = &this->InvocationList;
  this->_padding_ = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InvocationList).ArrayNum = 0;
  (this->InvocationList).ArrayMax = 0;
  iVar4 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_38);
  pTVar3 = &param_1->InvocationList;
  pFVar5 = (FScriptContainerElement *)0x0;
  iVar6 = iVar4;
  if ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *)
      local_48 != pTVar3) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar4 = (param_1->InvocationList).ArrayNum;
    iVar6 = (param_1->InvocationList).ArrayMax;
    (param_1->InvocationList).ArrayNum = 0;
    (param_1->InvocationList).ArrayMax = 0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (pTVar1 != (TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                 *)local_48) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = pFVar5;
    (this->InvocationList).ArrayNum = iVar4;
    (this->InvocationList).ArrayMax = iVar6;
    pFVar5 = (FScriptContainerElement *)0x0;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return this;
}

// operator= @ 1421637b0

TMulticastScriptDelegate<FNotThreadSafeDelegateMode> * __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::operator=
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this,
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *pTVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType local_38;
  undefined8 local_30;
  FDestructionSentinel local_28;
  
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FReadAccessScope *)&local_28);
  if ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *)
      &local_38 != &param_1->InvocationList) {
    iVar2 = (param_1->InvocationList).ArrayNum;
    pTVar3 = (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)
             (param_1->InvocationList).AllocatorInstance.Data;
    local_30 = CONCAT44(local_30._4_4_,iVar2);
    if ((iVar2 != 0) || (local_30._4_4_ != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar2,local_30._4_4_,&local_38,iVar2,(int *)((longlong)&local_30 + 4));
      ConstructItems<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,int>
                (local_38.Data,pTVar3,iVar2);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  pTVar1 = &this->InvocationList;
  if (pTVar1 != (TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                 *)&local_38) {
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_38.Data;
    (this->InvocationList).ArrayNum = (int)local_30;
    (this->InvocationList).ArrayMax = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return this;
}

// AddUnique @ 142166f10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddUnique
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  <lambda_1> local_res8 [8];
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_38;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FReadAccessScope *)&local_28);
  local_38.Object = param_1->Object;
  local_38.FunctionName = param_1->FunctionName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            (&this->InvocationList,&local_38);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            (&this->InvocationList,local_res8,Default);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Clear @ 142169720

void __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Clear
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this)

{
  int *piVar1;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  piVar1 = &(this->InvocationList).ArrayMax;
  (this->InvocationList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->InvocationList).AllocatorInstance,0,piVar1);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// ProcessMulticastDelegate<UObject> @ 1421fac20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this,void *param_1)

{
  int iVar1;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UFunction *pUVar7;
  ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_> FVar8;
  FWeakObjectPtr *pFVar9;
  uint uVar10;
  undefined1 auStackY_108 [32];
  <lambda_1> local_c6 [6];
  FDestructionSentinel local_c0;
  FReadAccessScope local_a8;
  ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_> local_88;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_a8);
  iVar1 = (this->InvocationList).ArrayNum;
  if (0 < iVar1) {
    pTVar2 = (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)
             (this->InvocationList).AllocatorInstance.Data;
    local_88.SecondaryData =
         (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)0x0;
    local_40 = iVar1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>_>
              (0x10,4,iVar1,0,&local_88,iVar1,&local_3c);
    FVar8 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)&local_88;
    if (local_88.SecondaryData !=
        (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)0x0) {
      FVar8 = local_88.SecondaryData;
    }
    ConstructItems<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((void *)FVar8,pTVar2,iVar1);
    for (uVar10 = 0; -1 < (int)uVar10; uVar10 = uVar10 + 1) {
      if (local_40 <= (int)uVar10) break;
      uVar5 = 0;
      if ((int)uVar10 < local_40) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FVar8 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)0x0) {
        FVar8 = local_88.SecondaryData;
      }
      pFVar9 = (FWeakObjectPtr *)((longlong)(int)uVar10 * 0x10 + (longlong)FVar8);
      if (pFVar9[1] != (FWeakObjectPtr)0x0) {
        pUVar6 = FWeakObjectPtr::Get(pFVar9);
        if (pUVar6 != (UObject *)0x0) {
          pUVar7 = UClass::FindFunctionByName
                             (*(UClass **)&pUVar6->field_0x10,*(FName *)(pFVar9 + 1),IncludeSuper);
          if (pUVar7 != (UFunction *)0x0) {
            uVar5 = 0;
            if ((int)uVar10 < local_40) {
              uVar5 = ~uVar10 >> 0x1f;
            }
            if (uVar5 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FVar8 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)
                    &local_88;
            if (local_88.SecondaryData !=
                (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)0x0) {
              FVar8 = local_88.SecondaryData;
            }
            pFVar9 = (FWeakObjectPtr *)((longlong)(int)uVar10 * 0x10 + (longlong)FVar8);
            bVar4 = FWeakObjectPtr::IsValid(pFVar9);
            if (!bVar4) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Object.IsValid() != false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                                 ,0x1bb,
                                 L"ProcessDelegate() called with no object bound to delegate!");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if (pFVar9[1] == (FWeakObjectPtr)0x0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("FunctionName != NAME_None",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                                 ,0x1bc,L"ProcessDelegate() called with no function name set!");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pUVar6 = FWeakObjectPtr::Get(pFVar9);
            pUVar7 = UObject::FindFunctionChecked(pUVar6,*(FName *)(pFVar9 + 1));
            (**(code **)(*(longlong *)pUVar6 + 0x260))(pUVar6,pUVar7,param_1);
          }
        }
      }
    }
    if (local_88.SecondaryData !=
        (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)0x0) {
      FMemory::Free((void *)local_88.SecondaryData);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_c0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            (&this->InvocationList,local_c6,Default);
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  return;
}

// AddInternal @ 142203600

void __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this,
          TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FWeakObjectPtr *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  pTVar1 = &this->InvocationList;
  uVar9 = 0;
  iVar7 = (this->InvocationList).ArrayNum;
  uVar11 = uVar9;
  if (0 < iVar7) {
    do {
      uVar10 = (uint)uVar11;
      uVar6 = 0;
      if ((int)uVar10 < (this->InvocationList).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>::operator==
                        ((TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)
                         ((pTVar1->AllocatorInstance).Data + uVar9),param_1);
      if ((bVar5) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8084758348211160065>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                             ,0x401,"InvocationList[ CurFunctionIndex ] != InDelegate"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 0x10;
      uVar11 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < iVar7);
  }
  pTVar3 = (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)(pTVar1->AllocatorInstance).Data
  ;
  if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->InvocationList).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->InvocationList).ArrayNum;
  piVar2 = &(this->InvocationList).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar1->AllocatorInstance,piVar2);
    (this->InvocationList).ArrayNum = iVar7;
  }
  (this->InvocationList).ArrayNum = iVar7 + 1;
  pFVar8 = (FWeakObjectPtr *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
  pFVar8->ObjectIndex = 0;
  pFVar8->ObjectSerialNumber = 0;
  pFVar8[1].ObjectIndex = 0;
  pFVar8[1].ObjectSerialNumber = 0;
  *pFVar8 = param_1->Object;
  *(FName *)(pFVar8 + 1) = param_1->FunctionName;
  return;
}

// Remove @ 14221a8c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this,UObject *param_1,FName param_2
          )

{
  int *piVar1;
  int iVar2;
  FWeakObjectPtr *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UObject *pUVar9;
  uint uVar10;
  FWeakObjectPtr *this_00;
  <lambda_1> local_res20 [8];
  FDestructionSentinel local_58;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_58);
  pFVar3 = (FWeakObjectPtr *)(this->InvocationList).AllocatorInstance.Data;
  iVar8 = (this->InvocationList).ArrayNum;
  this_00 = pFVar3;
  do {
    if (this_00 == pFVar3 + (longlong)iVar8 * 2) {
LAB_14221a9d7:
      TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                (&this->InvocationList,local_res20,Default);
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      return;
    }
    if (((*(FName *)(this_00 + 1) == param_2) && (param_1 != (UObject *)0x0)) &&
       (pUVar9 = FWeakObjectPtr::GetEvenIfUnreachable(this_00), param_1 == pUVar9)) {
      uVar10 = (uint)((longlong)this_00 - (longlong)pFVar3 >> 4);
      if (uVar10 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar10 < (this->InvocationList).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = (this->InvocationList).ArrayNum;
        pFVar4 = (this->InvocationList).AllocatorInstance.Data;
        iVar8 = iVar2 + ~uVar10;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar10 * 0x10,pFVar4 + (longlong)(iVar2 - iVar8) * 0x10,
                  (longlong)iVar8 << 4);
        }
        piVar1 = &(this->InvocationList).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      goto LAB_14221a9d7;
    }
    this_00 = this_00 + 2;
  } while( true );
}

// RemoveAll @ 14221ae20

void __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this,UObject *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  int iVar8;
  uint uVar9;
  FWeakObjectPtr *this_00;
  longlong lVar10;
  FDestructionSentinel local_58;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_58);
  uVar9 = (this->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->InvocationList).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (FWeakObjectPtr *)((this->InvocationList).AllocatorInstance.Data + lVar10);
      if ((((param_1 != (UObject *)0x0) &&
           (pUVar7 = FWeakObjectPtr::Get(this_00), param_1 == pUVar7)) ||
          (this_00[1] == (FWeakObjectPtr)0x0)) ||
         (pUVar7 = FWeakObjectPtr::Get(this_00,true), pUVar7 == (UObject *)0x0)) {
        uVar6 = 0;
        if ((int)uVar9 < (this->InvocationList).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->InvocationList).ArrayNum;
        pFVar3 = (this->InvocationList).AllocatorInstance.Data;
        iVar8 = ~uVar9 + iVar2;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar3 + lVar10,pFVar3 + (longlong)(iVar2 - iVar8) * 0x10,(longlong)iVar8 << 4);
        }
        piVar1 = &(this->InvocationList).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,&(this->InvocationList).AllocatorInstance,(this->InvocationList).ArrayNum,
                   &(this->InvocationList).ArrayMax);
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return;
}

