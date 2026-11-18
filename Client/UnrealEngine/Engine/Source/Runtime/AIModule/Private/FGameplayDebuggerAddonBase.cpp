// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// BindKeyPress<FGameplayDebuggerCategory_EQS> @ 146f165c0

bool __thiscall
FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerCategory_EQS>
          (FGameplayDebuggerAddonBase *this,FGameplayDebuggerInputHandlerConfig *param_1,
          FGameplayDebuggerCategory_EQS *param_2,pmf_faa310ff *param_3,
          EGameplayDebuggerInputMode param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FName *pFVar11;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  FDelegateAllocation FStack_38;
  EGameplayDebuggerInputMode local_28;
  
  local_50._0_8_ = param_1->KeyName;
  uVar4 = *(undefined8 *)param_3;
  uVar5 = *(undefined8 *)&param_3->field_0x8;
  local_50._8_4_ = param_1->Modifier;
  FStack_38.DelegateSize = 0;
  local_40 = (undefined1  [8])0x0;
  FStack_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_28 = Local;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_70);
  local_58 = &FStack_38;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&FStack_38);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayDebuggerCategory_EQS____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = param_2;
    puVar9[4] = uVar4;
    puVar9[5] = uVar5;
    if ((param_2 == (FGameplayDebuggerCategory_EQS *)0x0) || (puVar9[4] == 0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  local_28 = param_4;
  bVar6 = FGameplayDebuggerInputHandler::IsValid((FGameplayDebuggerInputHandler *)local_50);
  if (bVar6) {
    pFVar2 = (this->InputHandlers).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_50) &&
       ((FScriptContainerElement *)local_50 <
        pFVar2 + (longlong)(this->InputHandlers).ArrayMax * 0x30)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    iVar8 = (this->InputHandlers).ArrayNum;
    piVar1 = &(this->InputHandlers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->InputHandlers).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->InputHandlers).AllocatorInstance.Data;
    (this->InputHandlers).ArrayNum = iVar8 + 1;
    pFVar11 = (FName *)(pFVar2 + (longlong)iVar8 * 0x30);
    pFVar11->ComparisonIndex = (FNameEntryId)local_50._0_4_;
    pFVar11->Number = local_50._4_4_;
    pFVar11[1].ComparisonIndex.Value = local_50._8_4_;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar11 + 2),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_40);
    *(EGameplayDebuggerInputMode *)&pFVar11[5].ComparisonIndex.Value = local_28;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_88);
  if ((FStack_38.DelegateSize != 0) &&
     (FStack_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_38,0,0,0x10);
    FStack_38.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_38.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  return bVar6;
}

// BindKeyPress<FGameplayDebuggerCategory_Navmesh> @ 146f878c0

bool __thiscall
FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerCategory_Navmesh>
          (FGameplayDebuggerAddonBase *this,FGameplayDebuggerInputHandlerConfig *param_1,
          FGameplayDebuggerCategory_Navmesh *param_2,pmf_b2ed2628 *param_3,
          EGameplayDebuggerInputMode param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FName *pFVar11;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  FDelegateAllocation FStack_38;
  EGameplayDebuggerInputMode local_28;
  
  local_50._0_8_ = param_1->KeyName;
  uVar4 = *(undefined8 *)param_3;
  uVar5 = *(undefined8 *)&param_3->field_0x8;
  local_50._8_4_ = param_1->Modifier;
  FStack_38.DelegateSize = 0;
  local_40 = (undefined1  [8])0x0;
  FStack_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_28 = Local;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_70);
  local_58 = &FStack_38;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&FStack_38);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayDebuggerCategory_Navmesh____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = param_2;
    puVar9[4] = uVar4;
    puVar9[5] = uVar5;
    if ((param_2 == (FGameplayDebuggerCategory_Navmesh *)0x0) || (puVar9[4] == 0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  local_28 = param_4;
  bVar6 = FGameplayDebuggerInputHandler::IsValid((FGameplayDebuggerInputHandler *)local_50);
  if (bVar6) {
    pFVar2 = (this->InputHandlers).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_50) &&
       ((FScriptContainerElement *)local_50 <
        pFVar2 + (longlong)(this->InputHandlers).ArrayMax * 0x30)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    iVar8 = (this->InputHandlers).ArrayNum;
    piVar1 = &(this->InputHandlers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->InputHandlers).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->InputHandlers).AllocatorInstance.Data;
    (this->InputHandlers).ArrayNum = iVar8 + 1;
    pFVar11 = (FName *)(pFVar2 + (longlong)iVar8 * 0x30);
    pFVar11->ComparisonIndex = (FNameEntryId)local_50._0_4_;
    pFVar11->Number = local_50._4_4_;
    pFVar11[1].ComparisonIndex.Value = local_50._8_4_;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar11 + 2),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_40);
    *(EGameplayDebuggerInputMode *)&pFVar11[5].ComparisonIndex.Value = local_28;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_88);
  if ((FStack_38.DelegateSize != 0) &&
     (FStack_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_38,0,0,0x10);
    FStack_38.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_38.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  return bVar6;
}

