// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CopyFrom<IBaseDelegateInstance<void___cdecl(FBodyInstance_*),FDefaultDelegateUserPolicy>_> @ 147d64850

/* WARNING: Removing unreachable block (ram,0x000147d649aa) */

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
CopyFrom<IBaseDelegateInstance<void___cdecl(FBodyInstance_*),FDefaultDelegateUserPolicy>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TMulticastDelegateBase<FDefaultDelegateUserPolicy> *param_1)

{
  TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
  *pTVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  undefined1 local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> local_78;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_50);
  iVar2 = (param_1->InvocationList).ArrayNum;
  pFVar8 = (param_1->InvocationList).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_1->InvocationList).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if ((*(int *)(pFVar8 + 8) != 0) && (plVar3 = *(longlong **)pFVar8, plVar3 != (longlong *)0x0)) {
      local_78._0_8_ = 0;
      local_78._8_4_ = 0;
      (**(code **)(*plVar3 + 0x48))(plVar3,&local_78);
      if ((local_88.Data <= &local_78) &&
         ((&local_78 <
           (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
           (local_88.Data + (longlong)local_80._4_4_ * 0x10) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar6 + 1);
      pFVar7 = local_88.Data + (longlong)iVar6 * 0x10;
      local_res10 = 0;
      *(undefined8 *)pFVar7 = 0;
      *(undefined4 *)(pFVar7 + 8) = 0;
      *(undefined8 *)pFVar7 = local_78._0_8_;
      local_78._0_8_ = 0;
      *(undefined4 *)(pFVar7 + 8) = local_78._8_4_;
      local_78._8_4_ = 0;
      local_res18 = 0;
    }
    pFVar8 = pFVar8 + 0x10;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_68);
  iVar2 = (this->InvocationList).ArrayNum;
  pTVar1 = &this->InvocationList;
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->InvocationList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar9) break;
    if ((*(int *)&pFVar8[8].field_0x0 != 0) &&
       (*(undefined8 **)&pFVar8->field_0x0 != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)&pFVar8->field_0x0)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[8].field_0x0 = 0;
    }
    pFVar8 = pFVar8 + 0x10;
  }
  CompactInvocationList(this,false);
  if (pTVar1 != (TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
                 *)&local_88) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               (pTVar1->AllocatorInstance).Data,(this->InvocationList).ArrayNum);
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar1->AllocatorInstance).Data = local_88.Data;
    (this->InvocationList).ArrayNum = (int)local_80;
    (this->InvocationList).ArrayMax = local_80._4_4_;
    local_80 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_88.Data,(int)local_80);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_88.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// Broadcast<IBaseDelegateInstance<void___cdecl(UWorld_*,UNetDriver_*,FString),FDefaultDelegateUserPolicy>,UWorld_*,UNetDriver_*,FString> @ 14800aed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(UWorld_*,UNetDriver_*,FString),FDefaultDelegateUserPolicy>,UWorld_*,UNetDriver_*,FString>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,UWorld *param_1,
          UNetDriver *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FDestructionSentinel local_68;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_68);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar10 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
         (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) {
LAB_14800b036:
        bVar4 = true;
      }
      else {
        local_70 = (param_3->Data).ArrayNum;
        lVar9 = (longlong)local_70;
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        local_78.Data = (FScriptContainerElement *)0x0;
        pcVar3 = *(code **)(*plVar2 + 0x68);
        if (local_70 == 0) {
          local_6c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_70,0,&local_78,local_70,&local_6c);
          memcpy(local_78.Data,pFVar1,lVar9 * 2);
        }
        cVar6 = (*pcVar3)(plVar2,param_1,param_2);
        if (cVar6 == '\0') goto LAB_14800b036;
      }
      lVar10 = lVar10 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this->InvocationListLockCount = this->InvocationListLockCount + -1;
  if (bVar4) {
    CompactInvocationList(this,false);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Broadcast<IBaseDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>,UWorld_*,FWorldInitializationValues> @ 1489a1880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>,UWorld_*,FWorldInitializationValues>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,UWorld *param_1,
          FWorldInitializationValues *param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint local_58 [2];
  UClass *local_50;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar5 = false;
  uVar9 = (this->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->InvocationList).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar2 + lVar10 + 8) == 0) ||
         (plVar3 = *(longlong **)(pFVar2 + lVar10), plVar3 == (longlong *)0x0)) {
LAB_1489a1a1e:
        bVar5 = true;
      }
      else {
        uVar1 = *(undefined4 *)param_2;
        pcVar4 = *(code **)(*plVar3 + 0x68);
        local_58[0] = (((undefined4 *)param_2)->bInitializeScenes ^ local_58[0]) & 1 ^ local_58[0];
        local_58[0] = (local_58[0] ^ uVar1) & 2 ^ local_58[0];
        local_58[0] = (local_58[0] ^ uVar1) & 4 ^ local_58[0];
        local_58[0] = (local_58[0] ^ uVar1) & 8 ^ local_58[0];
        local_58[0] = (local_58[0] ^ uVar1) & 0x10 ^ local_58[0];
        local_58[0] = (local_58[0] ^ uVar1) & 0x20 ^ local_58[0];
        local_58[0] = (local_58[0] ^ uVar1) & 0x40 ^ local_58[0];
        local_58[0] = (local_58[0] ^ uVar1) & 0x80 ^ local_58[0];
        local_58[0] = (local_58[0] ^ uVar1) & 0x100 ^ local_58[0];
        local_58[0] = (local_58[0] ^ uVar1) & 0x200 ^ local_58[0];
        local_58[0] = (local_58[0] ^ uVar1) & 0x400 ^ local_58[0];
        local_58[0] = (local_58[0] ^ uVar1) & 0x800 ^ local_58[0];
        local_50 = (param_2->DefaultGameMode).Class.field0_0x0.DebugPtr;
        local_58[0] = (local_58[0] ^ uVar1) & 0x1000 ^ local_58[0];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_50);
        }
        cVar7 = (*pcVar4)(plVar3,param_1,local_58);
        if (cVar7 == '\0') goto LAB_1489a1a1e;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  this->InvocationListLockCount = this->InvocationListLockCount + -1;
  if (bVar5) {
    CompactInvocationList(this,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// Broadcast<IBaseDelegateInstance<void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>,UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>_> @ 148a76380

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>,UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          UWorldPartitionRuntimeCell *param_1,
          TFunction<void___cdecl(IWorldPartitionHLODObject_*)> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_80;
  longlong local_68 [2];
  undefined1 local_58 [24];
  undefined8 local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_80);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar3 = false;
  uVar9 = (this->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->InvocationList).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
         (plVar8 = *(longlong **)(pFVar1 + lVar10), plVar8 == (longlong *)0x0)) {
LAB_148a76497:
        bVar3 = true;
      }
      else {
        local_40 = 0;
        pcVar2 = *(code **)(*plVar8 + 0x68);
        local_68[0] = *(longlong *)param_2;
        if (local_68[0] != 0) {
          puVar7 = *(undefined8 **)&param_2->field_0x28;
          if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)&param_2->field_0x10;
          }
          (**(code **)*puVar7)(puVar7,local_58);
        }
        cVar5 = (*pcVar2)(plVar8,param_1,local_68);
        if (cVar5 == '\0') goto LAB_148a76497;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  this->InvocationListLockCount = this->InvocationListLockCount + -1;
  if (bVar3) {
    CompactInvocationList(this,false);
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (*(longlong *)param_2 != 0) {
    plVar8 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

