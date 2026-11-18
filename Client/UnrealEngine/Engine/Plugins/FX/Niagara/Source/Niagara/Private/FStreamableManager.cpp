// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void> @ 1490a9770

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::
RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,int param_3,bool param_4
          ,bool param_5,FString *param_6,FSourceLocation *param_7)

{
  int iVar1;
  FSoftObjectPath *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  ForElementType<TAlignedBytes<16,16>_> FVar5;
  char cVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  undefined1 local_f8 [16];
  char *local_e8;
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8;
  undefined1 local_c0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  int local_a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  ForAnyElementType FStack_90;
  int local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  int local_70;
  int local_68;
  undefined2 local_64;
  FStreamableDownloadCachePin local_60;
  bool local_48;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
  local_a0 = 0;
  local_88 = 0;
  local_70 = 0;
  local_c0._0_8_ = (FSoftObjectPath *)0x0;
  local_c0._8_4_ = 0;
  local_64._0_1_ = false;
  local_64._1_1_ = false;
  local_48 = false;
  local_68 = 0;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator._0_4_ = iVar1;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_90.Data = (FScriptContainerElement *)0x0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar1,0,(ForAnyElementType *)local_118,iVar1,
               (int *)&local_110.DelegateAllocator.field_0x4);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>((void *)local_118,pFVar2,iVar1);
  }
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_c0._0_8_,local_c0._8_4_);
  if ((FSoftObjectPath *)local_c0._0_8_ != (FSoftObjectPath *)0x0) {
    FMemory::Free((void *)local_c0._0_8_);
  }
  local_c0._0_8_ = local_118;
  local_c0._8_4_ = local_110.DelegateAllocator._0_4_;
  local_c0._12_4_ = local_110.DelegateAllocator._4_4_;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118 = (undefined1  [8])0x0;
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)0x0,0);
  if ((atomic<unsigned___int64>)local_118 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_118);
  }
  local_d8 = (undefined1  [8])0x0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FWriteAccessScope *)local_f8);
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  local_d0.Data = *(FScriptContainerElement **)&param_2->field_0x8;
  *(undefined8 *)&param_2->field_0x8 = 0;
  local_c8 = *(int *)&param_2->field_0x10;
  *(undefined4 *)&param_2->field_0x10 = 0;
  if (local_e8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FReadAccessScope *)local_f8);
  if ((local_c8 == 0) || (local_d0.Data == (FScriptContainerElement *)0x0)) {
LAB_1490a98ff:
    bVar4 = false;
  }
  else {
    cVar6 = (**(code **)(*(longlong *)local_d0.Data + 0x38))();
    if (cVar6 == '\0') goto LAB_1490a98ff;
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_f8);
  if (bVar4) {
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d8);
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110._8_8_ = (ulonglong)(uint)local_110._12_4_ << 0x20;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_110;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_110);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy__V<lambda_1>__4__WrapDelegate_Private_StreamableManager_UE__YA_AV__TDelegate___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy______QEAV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar7 + 3),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
  }
  else {
    local_110._8_8_ = 0;
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)local_f8);
  FVar5 = local_110.DelegateAllocator;
  iVar1 = local_110.DelegateSize;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110._8_8_ = local_110._8_8_ & 0xffffffff00000000;
  if (local_e8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)local_f8);
  if (local_a0 != 0) {
    if (FStack_a8.Data == (FScriptContainerElement *)0x0) goto LAB_1490a9a39;
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
LAB_1490a9a39:
  FStack_a8.Data = (FScriptContainerElement *)FVar5;
  local_a0 = iVar1;
  if (local_e8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)local_f8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110._8_8_ = local_110._8_8_ & 0xffffffff00000000;
  }
  if (local_e8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)local_f8);
  if ((local_c8 != 0) && (local_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_e8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  local_68 = param_3;
  local_64._1_1_ = param_5;
  local_64._0_1_ = param_4;
  local_118 = (undefined1  [8])(param_6->Data).AllocatorInstance.Data;
  (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.DelegateAllocator = *(ForElementType<TAlignedBytes<16,16>_> *)&(param_6->Data).ArrayNum;
  (param_6->Data).ArrayNum = 0;
  (param_6->Data).ArrayMax = 0;
  local_f8._0_4_ = (param_7->Impl)._Line;
  local_f8._4_4_ = (param_7->Impl)._Column;
  local_f8._8_8_ = (param_7->Impl)._File;
  local_e8 = (param_7->Impl)._Function;
  RequestAsyncLoad(this,__return_storage_ptr__,(FStreamableAsyncLoadParams *)local_c0,
                   (FString *)local_118,(FSourceLocation *)local_f8);
  if (local_48 != false) {
    FStreamableDownloadCachePin::~FStreamableDownloadCachePin(&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)local_f8);
  if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_e8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_f8);
  if ((local_88 != 0) && (FStack_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_e8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  if (FStack_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)local_f8);
  if ((local_a0 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_a8.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_e8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_a8.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_c0._0_8_,local_c0._8_4_);
  if ((atomic<unsigned___int64>)local_c0._0_8_ != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_c0._0_8_);
  }
  pFVar3 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

