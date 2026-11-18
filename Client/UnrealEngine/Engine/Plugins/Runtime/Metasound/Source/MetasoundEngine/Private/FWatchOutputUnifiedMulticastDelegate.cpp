// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 3

// Add @ 14b3631e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Metasound::FMetasoundGeneratorHandle::FWatchOutputUnifiedMulticastDelegate::Add
          (FWatchOutputUnifiedMulticastDelegate *this,FWatchOutputUnifiedDelegate *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  <lambda_1> local_res10 [8];
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_38;
  FDestructionSentinel local_28;
  
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_28);
    local_38.Object.ObjectIndex = *(int *)&(param_1->WatchDelegate).field_0x8;
    local_38.Object.ObjectSerialNumber = *(int *)&(param_1->WatchDelegate).field_0xc;
    local_38.FunctionName.ComparisonIndex.Value = *(uint *)&(param_1->WatchDelegate).field_0x10;
    local_38.FunctionName.Number = *(uint *)&(param_1->WatchDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_28);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&(this->WatchDelegates).field_0x8,&local_38);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&(this->WatchDelegates).field_0x8,local_res10,Default);
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->NativeWatchDelegate
             ,(FReadAccessScope *)&local_28);
  if ((*(int *)&(param_1->NativeWatchDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_1->NativeWatchDelegate).field_0x8, plVar1 != (longlong *)0x0))
  {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_28);
      TMulticastDelegateRegistration<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>
      ::Add((TMulticastDelegateRegistration<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy>
             *)&this->NativeWatchDelegates,
            (TDelegate<void___cdecl(FName,FMetaSoundOutput_const_&),FDefaultDelegateUserPolicy> *)
            local_res10);
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  return;
}

// Broadcast @ 14b366460

void __thiscall
Metasound::FMetasoundGeneratorHandle::FWatchOutputUnifiedMulticastDelegate::Broadcast
          (FWatchOutputUnifiedMulticastDelegate *this,FName param_1,FMetaSoundOutput *param_2)

{
  undefined1 *puVar1;
  IOutputStorage *pIVar2;
  TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> TVar3;
  IOutputStorage IVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> TVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *local_res8;
  FName local_58;
  FMetaSoundOutput local_50;
  FDestructionSentinel local_40;
  
  local_50._padding_ = 0;
  local_50.Data.Ptr = (IOutputStorage *)0x0;
  local_58 = param_1;
  if (&local_50 != param_2) {
    pIVar2 = (param_2->Data).Ptr;
    local_50._padding_ = param_2->_padding_;
    if (pIVar2 != (IOutputStorage *)0x0) {
      puVar13 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,&local_res8);
      TVar9.Ptr = local_50.Data.Ptr;
      TVar3.Ptr = local_50.Data.Ptr;
      if (&local_50.Data !=
          (TUniquePtr<Metasound::IOutputStorage,TDefaultDelete<Metasound::IOutputStorage>_> *)
          puVar13) {
        TVar3.Ptr = (IOutputStorage *)*puVar13;
        *puVar13 = 0;
        if (local_50.Data.Ptr != (IOutputStorage *)0x0) {
          IVar4 = *local_50.Data.Ptr;
          local_50.Data.Ptr = TVar3.Ptr;
          (**(code **)IVar4)(TVar9.Ptr,1);
          TVar3.Ptr = local_50.Data.Ptr;
        }
      }
      local_50.Data.Ptr = TVar3.Ptr;
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_58);
  if (local_50.Data.Ptr != (IOutputStorage *)0x0) {
    (**(code **)*local_50.Data.Ptr)(local_50.Data.Ptr,1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->NativeWatchDelegates,
             (FWriteAccessScope *)&local_40);
  puVar1 = &(this->NativeWatchDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar8 = false;
  uVar14 = *(int *)&(this->NativeWatchDelegates).field_0x10 - 1;
  if (-1 < (int)uVar14) {
    lVar15 = (longlong)(int)uVar14 << 4;
    bVar8 = false;
    do {
      uVar12 = 0;
      if ((int)uVar14 < *(int *)&(this->NativeWatchDelegates).field_0x10) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *(longlong *)&(this->NativeWatchDelegates).field_0x8;
      if (((*(int *)(lVar15 + 8 + lVar5) == 0) ||
          (plVar6 = *(longlong **)(lVar15 + lVar5), plVar6 == (longlong *)0x0)) ||
         (cVar11 = (**(code **)(*plVar6 + 0x68))(plVar6,param_1,param_2), cVar11 == '\0')) {
        bVar8 = true;
      }
      lVar15 = lVar15 + -0x10;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  puVar1 = &(this->NativeWatchDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->NativeWatchDelegates,
               false);
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  return;
}

// Remove @ 14b3d4390

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Metasound::FMetasoundGeneratorHandle::FWatchOutputUnifiedMulticastDelegate::Remove
          (FWatchOutputUnifiedMulticastDelegate *this,FWatchOutputUnifiedDelegate *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  <lambda_1> local_res10 [8];
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_58;
  FDestructionSentinel local_48;
  FReadAccessScope local_30;
  
  bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  if (bVar6) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_30);
    local_58.Object.ObjectIndex = *(int *)&(param_1->WatchDelegate).field_0x8;
    local_58.Object.ObjectSerialNumber = *(int *)&(param_1->WatchDelegate).field_0xc;
    local_58.FunctionName.ComparisonIndex.Value = *(uint *)&(param_1->WatchDelegate).field_0x10;
    local_58.FunctionName.Number = *(uint *)&(param_1->WatchDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_48);
    uVar7 = TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
            ::Find((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                    *)&(this->WatchDelegates).field_0x8,&local_58);
    if (uVar7 != 0xffffffff) {
      uVar8 = 0;
      if ((int)(uVar7 + 1) <= *(int *)&(this->WatchDelegates).field_0x10) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar2 = *(int *)&(this->WatchDelegates).field_0x10;
      lVar3 = *(longlong *)&(this->WatchDelegates).field_0x8;
      iVar9 = iVar2 + ~uVar7;
      if (1 < iVar9) {
        iVar9 = 1;
      }
      if (iVar9 != 0) {
        memmove((void *)((longlong)(int)uVar7 * 0x10 + lVar3),
                (void *)((longlong)(iVar2 - iVar9) * 0x10 + lVar3),(longlong)iVar9 << 4);
      }
      puVar1 = &(this->WatchDelegates).field_0x10;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,(ForAnyElementType *)&(this->WatchDelegates).field_0x8,
                 *(int *)&(this->WatchDelegates).field_0x10,
                 (int *)&(this->WatchDelegates).field_0x14);
    }
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&(this->WatchDelegates).field_0x8,local_res10,Default);
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  FVar4.ID = (param_1->NativeWatchDelegateHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->NativeWatchDelegates,
               FVar4);
  }
  return;
}

