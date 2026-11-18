// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 4

// AddRaw<FSourceControlModule> @ 146af66b0

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::AddRaw<FSourceControlModule>
          (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,FSourceControlModule *param_1,pmf_7be9fdc7 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  longlong in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_78);
  local_60 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSourceControlModule____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(pmf_7be9fdc7 *)(puVar5 + 3) = param_2;
    puVar5[4] = in_R9;
    if (((param_2 == (pmf_7be9fdc7)0x0) || (in_R9 == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_a8);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_58);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_40);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    iVar4 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)&this->field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_c0);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_90);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 146b03cd0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TDelegate<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
  *in_R8;
  undefined1 local_res10 [8];
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  
  TDelegate<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
              *)local_68,in_R8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar4 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FReadAccessScope *)&local_50);
  if (((local_58 == 0) || (local_60.Data == (FScriptContainerElement *)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.Data + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FReadAccessScope *)&local_50);
    if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.Data + 0x40))(local_60.Data,local_res10);
      uVar4 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar4;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    puVar3 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((void *)*puVar3 != (void *)0x0) {
      FMemory::Free((void *)*puVar3);
    }
    *puVar3 = local_60.Data;
    local_60.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar3 + 1) = local_58;
    local_58 = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 146b03ec0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  *in_R8;
  undefined1 local_res10 [8];
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_68,in_R8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar4 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FReadAccessScope *)&local_50);
  if (((local_58 == 0) || (local_60.Data == (FScriptContainerElement *)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.Data + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FReadAccessScope *)&local_50);
    if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.Data + 0x40))(local_60.Data,local_res10);
      uVar4 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar4;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    puVar3 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((void *)*puVar3 != (void *)0x0) {
      FMemory::Free((void *)*puVar3);
    }
    *puVar3 = local_60.Data;
    local_60.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar3 + 1) = local_58;
    local_58 = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 146b040b0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *in_R8;
  undefined1 local_res10 [8];
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&,TArray<FText,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
              *)local_68,in_R8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar4 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FReadAccessScope *)&local_50);
  if (((local_58 == 0) || (local_60.Data == (FScriptContainerElement *)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.Data + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FReadAccessScope *)&local_50);
    if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.Data + 0x40))(local_60.Data,local_res10);
      uVar4 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar4;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    puVar3 = (undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((void *)*puVar3 != (void *)0x0) {
      FMemory::Free((void *)*puVar3);
    }
    *puVar3 = local_60.Data;
    local_60.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar3 + 1) = local_58;
    local_58 = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return (FDelegateHandle)(ulong64)param_1;
}

