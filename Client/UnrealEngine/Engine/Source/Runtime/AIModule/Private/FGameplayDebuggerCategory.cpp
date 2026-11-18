// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData> @ 146f26400

int __thiscall
FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>
          (FGameplayDebuggerCategory *this,FRepData *param_1,EGameplayDebuggerDataPack param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  size_t _Size;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  int local_b8;
  undefined4 local_b4;
  uint local_b0;
  FScriptContainerElement local_ac;
  undefined1 local_a8 [8];
  FDelegateAllocation FStack_a0;
  undefined1 local_90 [8];
  FDelegateAllocation FStack_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_b8 = (this->ReplicatedDataPacks).ArrayNum;
  uStack_bc = uStack_bc & 0xfffffffe;
  local_b0 = local_b0 & 0xfffffff8;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b4 = 0;
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_a0.DelegateSize = 0;
  local_90 = (undefined1  [8])0x0;
  FStack_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_88.DelegateSize = 0;
  local_ac = (FScriptContainerElement)param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_48);
  local_30 = &FStack_88;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&FStack_88);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_AI____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = FGameplayDebuggerCategory_AI::FRepData::Serialize;
    puVar7[3] = param_1;
    if (param_1 == (FRepData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_28);
  local_10 = &FStack_a0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&FStack_a0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_AI___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_AI__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar7[3] = param_1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 <
      pFVar9 + (longlong)(this->ReplicatedDataPacks).ArrayMax * 0x60)) {
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
  iVar5 = (this->ReplicatedDataPacks).ArrayNum;
  piVar1 = &(this->ReplicatedDataPacks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&(this->ReplicatedDataPacks).AllocatorInstance,piVar1);
  }
  _Src = local_d8;
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  (this->ReplicatedDataPacks).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x60;
  *(undefined8 *)&pFVar9->field_0x0 = 0;
  _Size = (size_t)(int)local_d0;
  *(int *)&pFVar9[8].field_0x0 = (int)local_d0;
  if ((int)local_d0 == 0) {
    *(int *)(pFVar9 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_d0,0,(ForAnyElementType *)pFVar9,(int)local_d0,(int *)(pFVar9 + 0xc));
    memcpy(*(void **)&pFVar9->field_0x0,_Src,_Size);
  }
  uVar2 = *(uint *)&pFVar9[0x28].field_0x0;
  *(undefined8 *)&pFVar9[0x10].field_0x0 = local_c8;
  *(ulonglong *)&pFVar9[0x18].field_0x0 = CONCAT44(uStack_bc,uStack_c0);
  *(int *)&pFVar9[0x20].field_0x0 = local_b8;
  *(undefined4 *)(pFVar9 + 0x24) = local_b4;
  uVar6 = local_b0 & 1;
  *(uint *)&pFVar9[0x28].field_0x0 = uVar2 & 0xfffffffe | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 2 | uVar2 & 0xfffffffc | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 4 | local_b0 & 2 | uVar2 & 0xfffffff8 | uVar6;
  pFVar9[0x2c] = local_ac;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x30),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8);
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x48),
             (TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)local_90);
  iVar5 = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if ((FStack_88.DelegateSize != 0) &&
     (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_88,0,0,0x10);
    FStack_88.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_60);
  if ((FStack_a0.DelegateSize != 0) &&
     (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_a0,0,0,0x10);
    FStack_a0.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return iVar5;
}

// SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData> @ 146f267d0

int __thiscall
FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>
          (FGameplayDebuggerCategory *this,FRepData *param_1,EGameplayDebuggerDataPack param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  size_t _Size;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  int local_b8;
  undefined4 local_b4;
  uint local_b0;
  FScriptContainerElement local_ac;
  undefined1 local_a8 [8];
  FDelegateAllocation FStack_a0;
  undefined1 local_90 [8];
  FDelegateAllocation FStack_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_b8 = (this->ReplicatedDataPacks).ArrayNum;
  uStack_bc = uStack_bc & 0xfffffffe;
  local_b0 = local_b0 & 0xfffffff8;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b4 = 0;
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_a0.DelegateSize = 0;
  local_90 = (undefined1  [8])0x0;
  FStack_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_88.DelegateSize = 0;
  local_ac = (FScriptContainerElement)param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_48);
  local_30 = &FStack_88;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&FStack_88);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_BehaviorTree____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = FGameplayDebuggerCategory_BehaviorTree::FRepData::Serialize;
    puVar7[3] = param_1;
    if (param_1 == (FRepData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_28);
  local_10 = &FStack_a0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&FStack_a0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_BehaviorTree___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_BehaviorTree__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar7[3] = param_1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 <
      pFVar9 + (longlong)(this->ReplicatedDataPacks).ArrayMax * 0x60)) {
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
  iVar5 = (this->ReplicatedDataPacks).ArrayNum;
  piVar1 = &(this->ReplicatedDataPacks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&(this->ReplicatedDataPacks).AllocatorInstance,piVar1);
  }
  _Src = local_d8;
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  (this->ReplicatedDataPacks).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x60;
  *(undefined8 *)&pFVar9->field_0x0 = 0;
  _Size = (size_t)(int)local_d0;
  *(int *)&pFVar9[8].field_0x0 = (int)local_d0;
  if ((int)local_d0 == 0) {
    *(int *)(pFVar9 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_d0,0,(ForAnyElementType *)pFVar9,(int)local_d0,(int *)(pFVar9 + 0xc));
    memcpy(*(void **)&pFVar9->field_0x0,_Src,_Size);
  }
  uVar2 = *(uint *)&pFVar9[0x28].field_0x0;
  *(undefined8 *)&pFVar9[0x10].field_0x0 = local_c8;
  *(ulonglong *)&pFVar9[0x18].field_0x0 = CONCAT44(uStack_bc,uStack_c0);
  *(int *)&pFVar9[0x20].field_0x0 = local_b8;
  *(undefined4 *)(pFVar9 + 0x24) = local_b4;
  uVar6 = local_b0 & 1;
  *(uint *)&pFVar9[0x28].field_0x0 = uVar2 & 0xfffffffe | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 2 | uVar2 & 0xfffffffc | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 4 | local_b0 & 2 | uVar2 & 0xfffffff8 | uVar6;
  pFVar9[0x2c] = local_ac;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x30),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8);
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x48),
             (TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)local_90);
  iVar5 = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if ((FStack_88.DelegateSize != 0) &&
     (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_88,0,0,0x10);
    FStack_88.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_60);
  if ((FStack_a0.DelegateSize != 0) &&
     (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_a0,0,0,0x10);
    FStack_a0.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return iVar5;
}

// SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData> @ 146f26ba0

int __thiscall
FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>
          (FGameplayDebuggerCategory *this,FRepData *param_1,EGameplayDebuggerDataPack param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  size_t _Size;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  int local_b8;
  undefined4 local_b4;
  uint local_b0;
  FScriptContainerElement local_ac;
  undefined1 local_a8 [8];
  FDelegateAllocation FStack_a0;
  undefined1 local_90 [8];
  FDelegateAllocation FStack_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_b8 = (this->ReplicatedDataPacks).ArrayNum;
  uStack_bc = uStack_bc & 0xfffffffe;
  local_b0 = local_b0 & 0xfffffff8;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b4 = 0;
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_a0.DelegateSize = 0;
  local_90 = (undefined1  [8])0x0;
  FStack_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_88.DelegateSize = 0;
  local_ac = (FScriptContainerElement)param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_48);
  local_30 = &FStack_88;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&FStack_88);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_EQS____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = FGameplayDebuggerCategory_EQS::FRepData::Serialize;
    puVar7[3] = param_1;
    if (param_1 == (FRepData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_28);
  local_10 = &FStack_a0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&FStack_a0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_EQS___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_EQS__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar7[3] = param_1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 <
      pFVar9 + (longlong)(this->ReplicatedDataPacks).ArrayMax * 0x60)) {
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
  iVar5 = (this->ReplicatedDataPacks).ArrayNum;
  piVar1 = &(this->ReplicatedDataPacks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&(this->ReplicatedDataPacks).AllocatorInstance,piVar1);
  }
  _Src = local_d8;
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  (this->ReplicatedDataPacks).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x60;
  *(undefined8 *)&pFVar9->field_0x0 = 0;
  _Size = (size_t)(int)local_d0;
  *(int *)&pFVar9[8].field_0x0 = (int)local_d0;
  if ((int)local_d0 == 0) {
    *(int *)(pFVar9 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_d0,0,(ForAnyElementType *)pFVar9,(int)local_d0,(int *)(pFVar9 + 0xc));
    memcpy(*(void **)&pFVar9->field_0x0,_Src,_Size);
  }
  uVar2 = *(uint *)&pFVar9[0x28].field_0x0;
  *(undefined8 *)&pFVar9[0x10].field_0x0 = local_c8;
  *(ulonglong *)&pFVar9[0x18].field_0x0 = CONCAT44(uStack_bc,uStack_c0);
  *(int *)&pFVar9[0x20].field_0x0 = local_b8;
  *(undefined4 *)(pFVar9 + 0x24) = local_b4;
  uVar6 = local_b0 & 1;
  *(uint *)&pFVar9[0x28].field_0x0 = uVar2 & 0xfffffffe | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 2 | uVar2 & 0xfffffffc | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 4 | local_b0 & 2 | uVar2 & 0xfffffff8 | uVar6;
  pFVar9[0x2c] = local_ac;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x30),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8);
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x48),
             (TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)local_90);
  iVar5 = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if ((FStack_88.DelegateSize != 0) &&
     (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_88,0,0,0x10);
    FStack_88.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_60);
  if ((FStack_a0.DelegateSize != 0) &&
     (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_a0,0,0,0x10);
    FStack_a0.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return iVar5;
}

// SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath> @ 146f26f70

int __thiscall
FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>
          (FGameplayDebuggerCategory *this,FRepDataPath *param_1,EGameplayDebuggerDataPack param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  size_t _Size;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  int local_b8;
  undefined4 local_b4;
  uint local_b0;
  FScriptContainerElement local_ac;
  undefined1 local_a8 [8];
  FDelegateAllocation FStack_a0;
  undefined1 local_90 [8];
  FDelegateAllocation FStack_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_b8 = (this->ReplicatedDataPacks).ArrayNum;
  uStack_bc = uStack_bc & 0xfffffffe;
  local_b0 = local_b0 & 0xfffffff8;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b4 = 0;
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_a0.DelegateSize = 0;
  local_90 = (undefined1  [8])0x0;
  FStack_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_88.DelegateSize = 0;
  local_ac = (FScriptContainerElement)param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_48);
  local_30 = &FStack_88;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&FStack_88);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepDataPath_FGameplayDebuggerCategory_AI____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = FGameplayDebuggerCategory_AI::FRepDataPath::Serialize;
    puVar7[3] = param_1;
    if (param_1 == (FRepDataPath *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_28);
  local_10 = &FStack_a0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&FStack_a0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepDataPath_FGameplayDebuggerCategory_AI___FGameplayDebuggerCategory__IEAAHPEAUFRepDataPath_FGameplayDebuggerCategory_AI__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar7[3] = param_1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 <
      pFVar9 + (longlong)(this->ReplicatedDataPacks).ArrayMax * 0x60)) {
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
  iVar5 = (this->ReplicatedDataPacks).ArrayNum;
  piVar1 = &(this->ReplicatedDataPacks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&(this->ReplicatedDataPacks).AllocatorInstance,piVar1);
  }
  _Src = local_d8;
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  (this->ReplicatedDataPacks).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x60;
  *(undefined8 *)&pFVar9->field_0x0 = 0;
  _Size = (size_t)(int)local_d0;
  *(int *)&pFVar9[8].field_0x0 = (int)local_d0;
  if ((int)local_d0 == 0) {
    *(int *)(pFVar9 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_d0,0,(ForAnyElementType *)pFVar9,(int)local_d0,(int *)(pFVar9 + 0xc));
    memcpy(*(void **)&pFVar9->field_0x0,_Src,_Size);
  }
  uVar2 = *(uint *)&pFVar9[0x28].field_0x0;
  *(undefined8 *)&pFVar9[0x10].field_0x0 = local_c8;
  *(ulonglong *)&pFVar9[0x18].field_0x0 = CONCAT44(uStack_bc,uStack_c0);
  *(int *)&pFVar9[0x20].field_0x0 = local_b8;
  *(undefined4 *)(pFVar9 + 0x24) = local_b4;
  uVar6 = local_b0 & 1;
  *(uint *)&pFVar9[0x28].field_0x0 = uVar2 & 0xfffffffe | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 2 | uVar2 & 0xfffffffc | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 4 | local_b0 & 2 | uVar2 & 0xfffffff8 | uVar6;
  pFVar9[0x2c] = local_ac;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x30),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8);
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x48),
             (TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)local_90);
  iVar5 = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if ((FStack_88.DelegateSize != 0) &&
     (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_88,0,0,0x10);
    FStack_88.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_60);
  if ((FStack_a0.DelegateSize != 0) &&
     (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_a0,0,0,0x10);
    FStack_a0.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return iVar5;
}

// operator() @ 146f31690

void __thiscall
`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::
<lambda_1>::operator()(void *this)

{
  FRepData local_f8;
  
  local_f8.bIsUsingGameplayTasks = 0;
  local_f8.bIsUsingBehaviorTree = 0;
  local_f8.bIsUsingCharacter = 0;
  local_f8.bIsUsingPathFollowing = 0;
  local_f8.bPathHasGoalActor = 0;
  local_f8.bHasController = 0;
  local_f8.ControllerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ControllerName.Data.ArrayNum = 0;
  local_f8.ControllerName.Data.ArrayMax = 0;
  local_f8.PawnName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.PawnName.Data.ArrayNum = 0;
  local_f8.PawnName.Data.ArrayMax = 0;
  local_f8.MovementBaseInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.MovementBaseInfo.Data.ArrayNum = 0;
  local_f8.MovementBaseInfo.Data.ArrayMax = 0;
  local_f8.MovementModeInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.MovementModeInfo.Data.ArrayNum = 0;
  local_f8.MovementModeInfo.Data.ArrayMax = 0;
  local_f8.PathFollowingInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.PathFollowingInfo.Data.ArrayNum = 0;
  local_f8.PathFollowingInfo.Data.ArrayMax = 0;
  local_f8.NextPathPointIndex = 0;
  local_f8.CurrentAITask.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.CurrentAITask.Data.ArrayNum = 0;
  local_f8.CurrentAITask.Data.ArrayMax = 0;
  local_f8.CurrentAIState.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.CurrentAIState.Data.ArrayNum = 0;
  local_f8.CurrentAIState.Data.ArrayMax = 0;
  local_f8.CurrentAIAssets.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.CurrentAIAssets.Data.ArrayNum = 0;
  local_f8.CurrentAIAssets.Data.ArrayMax = 0;
  local_f8.NavDataInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.NavDataInfo.Data.ArrayNum = 0;
  local_f8.NavDataInfo.Data.ArrayMax = 0;
  local_f8.MontageInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.MontageInfo.Data.ArrayNum = 0;
  local_f8.MontageInfo.Data.ArrayMax = 0;
  local_f8.TaskQueueInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.TaskQueueInfo.Data.ArrayNum = 0;
  local_f8.TaskQueueInfo.Data.ArrayMax = 0;
  local_f8.TickingTaskInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.TickingTaskInfo.Data.ArrayNum = 0;
  local_f8.TickingTaskInfo.Data.ArrayMax = 0;
  local_f8.NumTasksInQueue = 0;
  local_f8.NumTickingTasks = 0;
  FGameplayDebuggerCategory_AI::FRepData::operator=(*(FRepData **)this,&local_f8);
  if (local_f8.TickingTaskInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.TickingTaskInfo.Data.AllocatorInstance.Data);
  }
  if (local_f8.TaskQueueInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.TaskQueueInfo.Data.AllocatorInstance.Data);
  }
  if (local_f8.MontageInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.MontageInfo.Data.AllocatorInstance.Data);
  }
  if (local_f8.NavDataInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.NavDataInfo.Data.AllocatorInstance.Data);
  }
  if (local_f8.CurrentAIAssets.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.CurrentAIAssets.Data.AllocatorInstance.Data);
  }
  if (local_f8.CurrentAIState.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.CurrentAIState.Data.AllocatorInstance.Data);
  }
  if (local_f8.CurrentAITask.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.CurrentAITask.Data.AllocatorInstance.Data);
  }
  if (local_f8.PathFollowingInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.PathFollowingInfo.Data.AllocatorInstance.Data);
  }
  if (local_f8.MovementModeInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.MovementModeInfo.Data.AllocatorInstance.Data);
  }
  if (local_f8.MovementBaseInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.MovementBaseInfo.Data.AllocatorInstance.Data);
  }
  if (local_f8.PawnName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.PawnName.Data.AllocatorInstance.Data);
  }
  if (local_f8.ControllerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.ControllerName.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 146f317e0

void __thiscall
`FGameplayDebuggerCategory::
SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>::
operator()(void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_38 [2];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != local_38) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  puVar2 = puVar1 + 2;
  if (puVar2 != local_28) {
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
    *puVar2 = 0;
    puVar1[3] = 0;
  }
  puVar2 = puVar1 + 4;
  if (puVar2 != local_18) {
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
    *puVar2 = 0;
    puVar1[5] = 0;
  }
  return;
}

// SetDataPackReplication<FNavMeshSceneProxyData> @ 146f8ebf0

int __thiscall
FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>
          (FGameplayDebuggerCategory *this,FNavMeshSceneProxyData *param_1,
          EGameplayDebuggerDataPack param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  size_t _Size;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  int local_b8;
  undefined4 local_b4;
  uint local_b0;
  FScriptContainerElement local_ac;
  undefined1 local_a8 [8];
  FDelegateAllocation FStack_a0;
  undefined1 local_90 [8];
  FDelegateAllocation FStack_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_b8 = (this->ReplicatedDataPacks).ArrayNum;
  uStack_bc = uStack_bc & 0xfffffffe;
  local_b0 = local_b0 & 0xfffffff8;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b4 = 0;
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_a0.DelegateSize = 0;
  local_90 = (undefined1  [8])0x0;
  FStack_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_88.DelegateSize = 0;
  local_ac = (FScriptContainerElement)param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_48);
  local_30 = &FStack_88;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&FStack_88);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNavMeshSceneProxyData____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = FNavMeshSceneProxyData::Serialize;
    puVar7[3] = param_1;
    if (param_1 == (FNavMeshSceneProxyData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_28);
  local_10 = &FStack_a0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&FStack_a0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFNavMeshSceneProxyData___FGameplayDebuggerCategory__IEAAHPEAUFNavMeshSceneProxyData__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar7[3] = param_1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 <
      pFVar9 + (longlong)(this->ReplicatedDataPacks).ArrayMax * 0x60)) {
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
  iVar5 = (this->ReplicatedDataPacks).ArrayNum;
  piVar1 = &(this->ReplicatedDataPacks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&(this->ReplicatedDataPacks).AllocatorInstance,piVar1);
  }
  _Src = local_d8;
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  (this->ReplicatedDataPacks).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x60;
  *(undefined8 *)&pFVar9->field_0x0 = 0;
  _Size = (size_t)(int)local_d0;
  *(int *)&pFVar9[8].field_0x0 = (int)local_d0;
  if ((int)local_d0 == 0) {
    *(int *)(pFVar9 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_d0,0,(ForAnyElementType *)pFVar9,(int)local_d0,(int *)(pFVar9 + 0xc));
    memcpy(*(void **)&pFVar9->field_0x0,_Src,_Size);
  }
  uVar2 = *(uint *)&pFVar9[0x28].field_0x0;
  *(undefined8 *)&pFVar9[0x10].field_0x0 = local_c8;
  *(ulonglong *)&pFVar9[0x18].field_0x0 = CONCAT44(uStack_bc,uStack_c0);
  *(int *)&pFVar9[0x20].field_0x0 = local_b8;
  *(undefined4 *)(pFVar9 + 0x24) = local_b4;
  uVar6 = local_b0 & 1;
  *(uint *)&pFVar9[0x28].field_0x0 = uVar2 & 0xfffffffe | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 2 | uVar2 & 0xfffffffc | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 4 | local_b0 & 2 | uVar2 & 0xfffffff8 | uVar6;
  pFVar9[0x2c] = local_ac;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x30),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8);
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x48),
             (TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)local_90);
  iVar5 = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if ((FStack_88.DelegateSize != 0) &&
     (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_88,0,0,0x10);
    FStack_88.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_60);
  if ((FStack_a0.DelegateSize != 0) &&
     (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_a0,0,0,0x10);
    FStack_a0.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return iVar5;
}

// SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData> @ 146f8efc0

int __thiscall
FGameplayDebuggerCategory::
SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>
          (FGameplayDebuggerCategory *this,FRepAgentData *param_1,EGameplayDebuggerDataPack param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  size_t _Size;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  int local_b8;
  undefined4 local_b4;
  uint local_b0;
  FScriptContainerElement local_ac;
  undefined1 local_a8 [8];
  FDelegateAllocation FStack_a0;
  undefined1 local_90 [8];
  FDelegateAllocation FStack_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_b8 = (this->ReplicatedDataPacks).ArrayNum;
  uStack_bc = uStack_bc & 0xfffffffe;
  local_b0 = local_b0 & 0xfffffff8;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b4 = 0;
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_a0.DelegateSize = 0;
  local_90 = (undefined1  [8])0x0;
  FStack_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_88.DelegateSize = 0;
  local_ac = (FScriptContainerElement)param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_48);
  local_30 = &FStack_88;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&FStack_88);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData::Serialize;
    puVar7[3] = param_1;
    if (param_1 == (FRepAgentData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_28);
  local_10 = &FStack_a0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&FStack_a0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid___FGameplayDebuggerCategory__IEAAHPEAUFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar7[3] = param_1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 <
      pFVar9 + (longlong)(this->ReplicatedDataPacks).ArrayMax * 0x60)) {
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
  iVar5 = (this->ReplicatedDataPacks).ArrayNum;
  piVar1 = &(this->ReplicatedDataPacks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&(this->ReplicatedDataPacks).AllocatorInstance,piVar1);
  }
  _Src = local_d8;
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  (this->ReplicatedDataPacks).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x60;
  *(undefined8 *)&pFVar9->field_0x0 = 0;
  _Size = (size_t)(int)local_d0;
  *(int *)&pFVar9[8].field_0x0 = (int)local_d0;
  if ((int)local_d0 == 0) {
    *(int *)(pFVar9 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_d0,0,(ForAnyElementType *)pFVar9,(int)local_d0,(int *)(pFVar9 + 0xc));
    memcpy(*(void **)&pFVar9->field_0x0,_Src,_Size);
  }
  uVar2 = *(uint *)&pFVar9[0x28].field_0x0;
  *(undefined8 *)&pFVar9[0x10].field_0x0 = local_c8;
  *(ulonglong *)&pFVar9[0x18].field_0x0 = CONCAT44(uStack_bc,uStack_c0);
  *(int *)&pFVar9[0x20].field_0x0 = local_b8;
  *(undefined4 *)(pFVar9 + 0x24) = local_b4;
  uVar6 = local_b0 & 1;
  *(uint *)&pFVar9[0x28].field_0x0 = uVar2 & 0xfffffffe | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 2 | uVar2 & 0xfffffffc | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 4 | local_b0 & 2 | uVar2 & 0xfffffff8 | uVar6;
  pFVar9[0x2c] = local_ac;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x30),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8);
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x48),
             (TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)local_90);
  iVar5 = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if ((FStack_88.DelegateSize != 0) &&
     (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_88,0,0,0x10);
    FStack_88.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_60);
  if ((FStack_a0.DelegateSize != 0) &&
     (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_a0,0,0,0x10);
    FStack_a0.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return iVar5;
}

// SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData> @ 146f8f390

int __thiscall
FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>
          (FGameplayDebuggerCategory *this,FRepData *param_1,EGameplayDebuggerDataPack param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  size_t _Size;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  int local_b8;
  undefined4 local_b4;
  uint local_b0;
  FScriptContainerElement local_ac;
  undefined1 local_a8 [8];
  FDelegateAllocation FStack_a0;
  undefined1 local_90 [8];
  FDelegateAllocation FStack_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_b8 = (this->ReplicatedDataPacks).ArrayNum;
  uStack_bc = uStack_bc & 0xfffffffe;
  local_b0 = local_b0 & 0xfffffff8;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b4 = 0;
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_a0.DelegateSize = 0;
  local_90 = (undefined1  [8])0x0;
  FStack_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_88.DelegateSize = 0;
  local_ac = (FScriptContainerElement)param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_48);
  local_30 = &FStack_88;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&FStack_88);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_NavLocalGrid____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = FGameplayDebuggerCategory_NavLocalGrid::FRepData::Serialize;
    puVar7[3] = param_1;
    if (param_1 == (FRepData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_28);
  local_10 = &FStack_a0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&FStack_a0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_NavLocalGrid___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_NavLocalGrid__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar7[3] = param_1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 <
      pFVar9 + (longlong)(this->ReplicatedDataPacks).ArrayMax * 0x60)) {
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
  iVar5 = (this->ReplicatedDataPacks).ArrayNum;
  piVar1 = &(this->ReplicatedDataPacks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&(this->ReplicatedDataPacks).AllocatorInstance,piVar1);
  }
  _Src = local_d8;
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  (this->ReplicatedDataPacks).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x60;
  *(undefined8 *)&pFVar9->field_0x0 = 0;
  _Size = (size_t)(int)local_d0;
  *(int *)&pFVar9[8].field_0x0 = (int)local_d0;
  if ((int)local_d0 == 0) {
    *(int *)(pFVar9 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_d0,0,(ForAnyElementType *)pFVar9,(int)local_d0,(int *)(pFVar9 + 0xc));
    memcpy(*(void **)&pFVar9->field_0x0,_Src,_Size);
  }
  uVar2 = *(uint *)&pFVar9[0x28].field_0x0;
  *(undefined8 *)&pFVar9[0x10].field_0x0 = local_c8;
  *(ulonglong *)&pFVar9[0x18].field_0x0 = CONCAT44(uStack_bc,uStack_c0);
  *(int *)&pFVar9[0x20].field_0x0 = local_b8;
  *(undefined4 *)(pFVar9 + 0x24) = local_b4;
  uVar6 = local_b0 & 1;
  *(uint *)&pFVar9[0x28].field_0x0 = uVar2 & 0xfffffffe | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 2 | uVar2 & 0xfffffffc | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 4 | local_b0 & 2 | uVar2 & 0xfffffff8 | uVar6;
  pFVar9[0x2c] = local_ac;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x30),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8);
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x48),
             (TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)local_90);
  iVar5 = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if ((FStack_88.DelegateSize != 0) &&
     (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_88,0,0,0x10);
    FStack_88.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_60);
  if ((FStack_a0.DelegateSize != 0) &&
     (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_a0,0,0,0x10);
    FStack_a0.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return iVar5;
}

// SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData> @ 146f8f760

int __thiscall
FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>
          (FGameplayDebuggerCategory *this,FRepData *param_1,EGameplayDebuggerDataPack param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  size_t _Size;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  int local_b8;
  undefined4 local_b4;
  uint local_b0;
  FScriptContainerElement local_ac;
  undefined1 local_a8 [8];
  FDelegateAllocation FStack_a0;
  undefined1 local_90 [8];
  FDelegateAllocation FStack_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_b8 = (this->ReplicatedDataPacks).ArrayNum;
  uStack_bc = uStack_bc & 0xfffffffe;
  local_b0 = local_b0 & 0xfffffff8;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b4 = 0;
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_a0.DelegateSize = 0;
  local_90 = (undefined1  [8])0x0;
  FStack_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_88.DelegateSize = 0;
  local_ac = (FScriptContainerElement)param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_48);
  local_30 = &FStack_88;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&FStack_88);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_Navmesh____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = FGameplayDebuggerCategory_Navmesh::FRepData::Serialize;
    puVar7[3] = param_1;
    if (param_1 == (FRepData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_28);
  local_10 = &FStack_a0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&FStack_a0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_Navmesh___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_Navmesh__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar7[3] = param_1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 <
      pFVar9 + (longlong)(this->ReplicatedDataPacks).ArrayMax * 0x60)) {
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
  iVar5 = (this->ReplicatedDataPacks).ArrayNum;
  piVar1 = &(this->ReplicatedDataPacks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&(this->ReplicatedDataPacks).AllocatorInstance,piVar1);
  }
  _Src = local_d8;
  pFVar9 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  (this->ReplicatedDataPacks).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x60;
  *(undefined8 *)&pFVar9->field_0x0 = 0;
  _Size = (size_t)(int)local_d0;
  *(int *)&pFVar9[8].field_0x0 = (int)local_d0;
  if ((int)local_d0 == 0) {
    *(int *)(pFVar9 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_d0,0,(ForAnyElementType *)pFVar9,(int)local_d0,(int *)(pFVar9 + 0xc));
    memcpy(*(void **)&pFVar9->field_0x0,_Src,_Size);
  }
  uVar2 = *(uint *)&pFVar9[0x28].field_0x0;
  *(undefined8 *)&pFVar9[0x10].field_0x0 = local_c8;
  *(ulonglong *)&pFVar9[0x18].field_0x0 = CONCAT44(uStack_bc,uStack_c0);
  *(int *)&pFVar9[0x20].field_0x0 = local_b8;
  *(undefined4 *)(pFVar9 + 0x24) = local_b4;
  uVar6 = local_b0 & 1;
  *(uint *)&pFVar9[0x28].field_0x0 = uVar2 & 0xfffffffe | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 2 | uVar2 & 0xfffffffc | uVar6;
  *(uint *)&pFVar9[0x28].field_0x0 = local_b0 & 4 | local_b0 & 2 | uVar2 & 0xfffffff8 | uVar6;
  pFVar9[0x2c] = local_ac;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x30),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8);
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)(pFVar9 + 0x48),
             (TDelegate<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *)local_90);
  iVar5 = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if ((FStack_88.DelegateSize != 0) &&
     (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_88,0,0,0x10);
    FStack_88.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_60);
  if ((FStack_a0.DelegateSize != 0) &&
     (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_a0,0,0,0x10);
    FStack_a0.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (FStack_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return iVar5;
}

// operator() @ 146f977b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>::
operator()(void *this)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FNavMeshSceneProxyData local_138;
  
  local_138.bNeedsNewData = 1;
  local_138.bDataGathered = 0;
  local_138.MeshBuilders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.MeshBuilders.ArrayNum = 0;
  local_138.MeshBuilders.ArrayMax = 0;
  local_138.ThickLineItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ThickLineItems.ArrayNum = 0;
  local_138.ThickLineItems.ArrayMax = 0;
  local_138.TileEdgeLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.TileEdgeLines.ArrayNum = 0;
  local_138.TileEdgeLines.ArrayMax = 0;
  local_138.NavMeshEdgeLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.NavMeshEdgeLines.ArrayNum = 0;
  local_138.NavMeshEdgeLines.ArrayMax = 0;
  local_138.NavLinkLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.NavLinkLines.ArrayNum = 0;
  local_138.NavLinkLines.ArrayMax = 0;
  local_138.ClusterLinkLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ClusterLinkLines.ArrayNum = 0;
  local_138.ClusterLinkLines.ArrayMax = 0;
  local_138.AuxLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.AuxLines.ArrayNum = 0;
  local_138.AuxLines.ArrayMax = 0;
  local_138.AuxPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.AuxPoints.ArrayNum = 0;
  local_138.AuxPoints.ArrayMax = 0;
  local_138.AuxBoxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.AuxBoxes.ArrayNum = 0;
  local_138.AuxBoxes.ArrayMax = 0;
  local_138.Meshes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Meshes.ArrayNum = 0;
  local_138.Meshes.ArrayMax = 0;
  local_138.DebugLabels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.DebugLabels.ArrayNum = 0;
  local_138.DebugLabels.ArrayMax = 0;
  local_138.OctreeBounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.OctreeBounds.ArrayNum = 0;
  local_138.OctreeBounds.ArrayMax = 0;
  local_138.Bounds.IsValid = '\0';
  local_138.NavDetailFlags = 0;
  local_138.NavMeshDrawOffset.field0_0x0._s_0.X = 0.0;
  local_138._padding_ = 0;
  local_138._padding_ = 0;
  local_138.NavMeshDrawOffset.field0_0x0._s_0.Y = ___xmm_40240000000000000000000000000000;
  local_138.NavMeshDrawOffset.field0_0x0._s_0.Z = _UNK_15076bd28;
  FNavMeshSceneProxyData::operator=(*(FNavMeshSceneProxyData **)this,&local_138);
  if (local_138.OctreeBounds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.OctreeBounds.AllocatorInstance.Data);
  }
  FVar3.Data = local_138.DebugLabels.AllocatorInstance.Data;
  DestructItems<FNavMeshSceneProxyData::FDebugText,int>
            ((FDebugText *)local_138.DebugLabels.AllocatorInstance.Data,
             local_138.DebugLabels.ArrayNum);
  if ((FDebugText *)FVar3.Data != (FDebugText *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  FVar3.Data = local_138.Meshes.AllocatorInstance.Data;
  DestructItems<FDebugRenderSceneProxy::FMesh,int>
            ((FMesh *)local_138.Meshes.AllocatorInstance.Data,local_138.Meshes.ArrayNum);
  if ((FMesh *)FVar3.Data != (FMesh *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (local_138.AuxBoxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AuxBoxes.AllocatorInstance.Data);
  }
  if (local_138.AuxPoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AuxPoints.AllocatorInstance.Data);
  }
  if (local_138.AuxLines.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AuxLines.AllocatorInstance.Data);
  }
  if (local_138.ClusterLinkLines.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ClusterLinkLines.AllocatorInstance.Data);
  }
  if (local_138.NavLinkLines.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.NavLinkLines.AllocatorInstance.Data);
  }
  if (local_138.NavMeshEdgeLines.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.NavMeshEdgeLines.AllocatorInstance.Data);
  }
  if (local_138.TileEdgeLines.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.TileEdgeLines.AllocatorInstance.Data);
  }
  if (local_138.ThickLineItems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ThickLineItems.AllocatorInstance.Data);
  }
  FVar3.Data = local_138.MeshBuilders.AllocatorInstance.Data;
  DestructItems<FNavMeshSceneProxyData::FDebugMeshData,int>
            ((FDebugMeshData *)local_138.MeshBuilders.AllocatorInstance.Data,
             local_138.MeshBuilders.ArrayNum);
  if ((FDebugMeshData *)FVar3.Data != (FDebugMeshData *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if ((longlong *)local_138._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_138._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_138._padding_ + 8))(local_138._padding_,1);
    }
  }
  return;
}

// operator() @ 146f97980

void __thiscall
`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::
__l2::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_68 [2];
  undefined8 local_58 [2];
  undefined8 local_48 [8];
  
  uVar5 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  uVar4 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  uVar3 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  puVar2 = *(undefined8 **)this;
  if (puVar2 != local_68) {
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  puVar1 = puVar2 + 2;
  if (puVar1 != local_58) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    puVar2[3] = 0;
  }
  puVar1 = puVar2 + 4;
  if (puVar1 != local_48) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    puVar2[5] = 0;
  }
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[6] = uVar3;
  puVar2[7] = uVar4;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  *(undefined2 *)((longlong)puVar2 + 0x5c) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x5e) = 0;
  puVar2[8] = uVar5;
  return;
}

