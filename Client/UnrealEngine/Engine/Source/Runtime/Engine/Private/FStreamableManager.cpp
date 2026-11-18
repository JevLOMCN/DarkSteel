// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 39

// RequestSyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_> @ 1475a14e0

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::RequestSyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,bool param_2,FString *param_3
          ,FSourceLocation *param_4)

{
  FScriptContainerElement *pFVar1;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18.ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  RequestSyncLoadInternal(this,__return_storage_ptr__,&local_18,param_2,param_3,param_4);
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FSoftObjectPath *)local_18.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>,void> @ 147d70e30

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::
RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>,void>
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FSoftObjectPath *param_1,
          TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
          *param_2,int param_3,bool param_4,bool param_5,FString *param_6,FSourceLocation *param_7)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  size_t _Size;
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8;
  undefined1 local_b8 [16];
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  undefined1 local_98 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  int local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType FStack_68;
  int local_60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  int local_48;
  int local_40;
  undefined2 local_3c;
  FStreamableDownloadCachePin local_38;
  bool local_20;
  
  local_a0 = (param_1->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_a0;
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  local_98._0_8_ = (FSoftObjectPath *)0x0;
  local_98._8_4_ = 0;
  local_78 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c._0_1_ = false;
  local_3c._1_1_ = false;
  local_20 = false;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  local_b8._0_8_ = (param_1->AssetPath).PackageName;
  local_b8._8_8_ = (param_1->AssetPath).AssetName;
  local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_68.Data = (FScriptContainerElement *)0x0;
  if (local_a0 == 0) {
    local_9c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_a0,0,&local_a8,local_a0,&local_9c);
    memcpy(local_a8.Data,pFVar1,_Size);
  }
  local_d8 = (undefined1  [8])0x0;
  local_d0.Data._0_4_ = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)local_d8,1,(int *)((longlong)&local_d0.Data + 4));
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
            ((void *)local_d8,(FSoftObjectPath *)local_b8,1);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_98._0_8_,local_98._8_4_);
  if ((FSoftObjectPath *)local_98._0_8_ != (FSoftObjectPath *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  local_98._0_8_ = local_d8;
  local_98._8_4_ = (int)local_d0.Data;
  local_98._12_4_ = local_d0.Data._4_4_;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_d8 = (undefined1  [8])0x0;
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)0x0,0);
  if ((atomic<unsigned___int64>)local_d8 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  local_d8 = (undefined1  [8])0x0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FWriteAccessScope *)local_b8);
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  local_d0.Data = *(FScriptContainerElement **)&param_2->field_0x8;
  *(undefined8 *)&param_2->field_0x8 = 0;
  local_c8 = *(int *)&param_2->field_0x10;
  *(undefined4 *)&param_2->field_0x10 = 0;
  if (local_a8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)local_b8);
  iVar3 = local_c8;
  FVar2.Data = local_d0.Data;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  if (local_a8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)local_b8);
  if (local_78 != 0) {
    if (FStack_80.Data == (FScriptContainerElement *)0x0) goto LAB_147d71080;
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
LAB_147d71080:
  FStack_80.Data = FVar2.Data;
  local_78 = iVar3;
  if (local_a8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)local_b8);
  if ((local_c8 != 0) && (local_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_a8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  local_40 = param_3;
  local_3c._1_1_ = param_5;
  local_3c._0_1_ = param_4;
  local_d8 = (undefined1  [8])(param_6->Data).AllocatorInstance.Data;
  (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data = *(FScriptContainerElement **)&(param_6->Data).ArrayNum;
  (param_6->Data).ArrayNum = 0;
  (param_6->Data).ArrayMax = 0;
  local_b8._0_4_ = (param_7->Impl)._Line;
  local_b8._4_4_ = (param_7->Impl)._Column;
  local_b8._8_8_ = (param_7->Impl)._File;
  local_a8.Data = (FScriptContainerElement *)(param_7->Impl)._Function;
  RequestAsyncLoad(this,__return_storage_ptr__,(FStreamableAsyncLoadParams *)local_98,
                   (FString *)local_d8,(FSourceLocation *)local_b8);
  if (local_20 != false) {
    FStreamableDownloadCachePin::~FStreamableDownloadCachePin(&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)local_b8);
  if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_a8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_70,(FWriteAccessScope *)local_b8);
  if ((local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_a8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)local_b8);
  if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_a8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_98._0_8_,local_98._8_4_);
  if ((atomic<unsigned___int64>)local_98._0_8_ != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  pFVar1 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>,void> @ 147d71320

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::
RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>,void>
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
          *param_2,int param_3,bool param_4,bool param_5,FString *param_6,FSourceLocation *param_7)

{
  int iVar1;
  FSoftObjectPath *pFVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8;
  undefined1 local_b8 [16];
  char *local_a8;
  undefined1 local_98 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  int local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType FStack_68;
  int local_60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  int local_48;
  int local_40;
  undefined2 local_3c;
  FStreamableDownloadCachePin local_38;
  bool local_20;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
  local_78 = 0;
  local_60 = 0;
  local_48 = 0;
  local_98._0_8_ = (FSoftObjectPath *)0x0;
  local_98._8_4_ = 0;
  local_3c._0_1_ = false;
  local_3c._1_1_ = false;
  local_20 = false;
  local_40 = 0;
  local_d8 = (undefined1  [8])0x0;
  local_d0.Data._0_4_ = iVar1;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_68.Data = (FScriptContainerElement *)0x0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    local_d0.Data = (FScriptContainerElement *)0x0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar1,0,(ForAnyElementType *)local_d8,iVar1,
               (int *)((longlong)&local_d0.Data + 4));
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>((void *)local_d8,pFVar2,iVar1);
  }
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_98._0_8_,local_98._8_4_);
  if ((FSoftObjectPath *)local_98._0_8_ != (FSoftObjectPath *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  local_98._0_8_ = local_d8;
  local_98._8_4_ = (int)local_d0.Data;
  local_98._12_4_ = local_d0.Data._4_4_;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_d8 = (undefined1  [8])0x0;
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)0x0,0);
  if ((atomic<unsigned___int64>)local_d8 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  local_d8 = (undefined1  [8])0x0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FWriteAccessScope *)local_b8);
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  local_d0.Data = *(FScriptContainerElement **)&param_2->field_0x8;
  *(undefined8 *)&param_2->field_0x8 = 0;
  local_c8 = *(int *)&param_2->field_0x10;
  *(undefined4 *)&param_2->field_0x10 = 0;
  if (local_a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)local_b8);
  iVar1 = local_c8;
  FVar4.Data = local_d0.Data;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  if (local_a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)local_b8);
  if (local_78 != 0) {
    if (FStack_80.Data == (FScriptContainerElement *)0x0) goto LAB_147d71507;
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
LAB_147d71507:
  FStack_80.Data = FVar4.Data;
  local_78 = iVar1;
  if (local_a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)local_b8);
  if ((local_c8 != 0) && (local_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  local_40 = param_3;
  local_3c._1_1_ = param_5;
  local_3c._0_1_ = param_4;
  local_d8 = (undefined1  [8])(param_6->Data).AllocatorInstance.Data;
  (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data = *(FScriptContainerElement **)&(param_6->Data).ArrayNum;
  (param_6->Data).ArrayNum = 0;
  (param_6->Data).ArrayMax = 0;
  local_b8._0_4_ = (param_7->Impl)._Line;
  local_b8._4_4_ = (param_7->Impl)._Column;
  local_b8._8_8_ = (param_7->Impl)._File;
  local_a8 = (param_7->Impl)._Function;
  RequestAsyncLoad(this,__return_storage_ptr__,(FStreamableAsyncLoadParams *)local_98,
                   (FString *)local_d8,(FSourceLocation *)local_b8);
  if (local_20 != false) {
    FStreamableDownloadCachePin::~FStreamableDownloadCachePin(&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)local_b8);
  if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_70,(FWriteAccessScope *)local_b8);
  if ((local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)local_b8);
  if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8._8_8_,(FDestructionSentinel *)local_b8);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_98._0_8_,local_98._8_4_);
  if ((atomic<unsigned___int64>)local_98._0_8_ != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  pFVar3 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// FStreamableManager @ 14877cee0

FStreamableManager * __thiscall FStreamableManager::FStreamableManager(FStreamableManager *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  *(undefined2 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FStreamableManager__6B_;
  *(undefined8 *)&this->StreamableItems = 0;
  *(undefined8 *)&(this->StreamableItems).field_0x8 = 0;
  *(undefined8 *)&(this->StreamableItems).field_0x20 = 0;
  *(undefined4 *)&(this->StreamableItems).field_0x28 = 0;
  *(undefined4 *)&(this->StreamableItems).field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamableItems).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamableItems).field_0x34 = 0;
  *(undefined8 *)&(this->StreamableItems).field_0x40 = 0;
  *(undefined4 *)&(this->StreamableItems).field_0x48 = 0;
  *(undefined8 *)&this->StreamableRedirects = 0;
  *(undefined8 *)&(this->StreamableRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->StreamableRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->StreamableRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->StreamableRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamableRedirects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamableRedirects).field_0x34 = 0;
  *(undefined8 *)&(this->StreamableRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->StreamableRedirects).field_0x48 = 0;
  (this->ManagedActiveHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagedActiveHandles).ArrayNum = 0;
  (this->ManagedActiveHandles).ArrayMax = 0;
  (this->PendingCombinedHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCombinedHandles).ArrayNum = 0;
  (this->PendingCombinedHandles).ArrayMax = 0;
  (this->ManagerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagerName).Data.ArrayNum = 0;
  (this->ManagerName).Data.ArrayMax = 0;
  this_00 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FStreamableManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,(FStreamableManager *)&stack0x00000008,(pmf_8ae5e832)this);
  this->bForceSynchronousLoads = false;
  ::FString::operator=(&this->ManagerName,L"StreamableManager");
  return this;
}

// ~FStreamableManager @ 148780090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FStreamableManager::~FStreamableManager(FStreamableManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  TMap<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
  *pTVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  ulonglong local_1b0;
  TMap<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
  *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  int local_178;
  int local_174;
  int local_170;
  longlong *local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  uint local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  TMap<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  undefined4 local_bc;
  undefined1 local_b8 [32];
  uint *local_98;
  uint uStack_90;
  undefined4 local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this->_padding_ = (longlong)&___7FStreamableManager__6B_;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  iVar16 = *(int *)&(this->StreamableItems).field_0x28;
  puVar1 = &(this->StreamableItems).field_0x10;
  local_1a8 = &this->StreamableItems;
  iStack_1a0 = 0;
  local_1b0 = 1;
  local_188 = 0;
  uStack_19c = 1;
  iStack_18c = 0;
  if (iVar16 != 0) {
    puVar20 = *(uint **)&(this->StreamableItems).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uStack_19c = *puVar20;
    local_188 = 0;
    while (uStack_19c == 0) {
      lVar14 = (longlong)iStack_1a0;
      local_188 = local_188 + 0x20;
      iStack_1a0 = iStack_1a0 + 1;
      uStack_19c = 1;
      iStack_18c = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a0) goto LAB_14878017e;
      uStack_19c = puVar20[lVar14 + 1];
    }
    uStack_19c = -uStack_19c & uStack_19c;
    uVar2 = (ulonglong)uStack_19c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_178 = (int)lVar14;
    iStack_18c = local_188 + -1 + local_178;
    if (iVar16 < iStack_18c) {
      iStack_18c = iVar16;
    }
  }
LAB_14878017e:
  uVar18 = *(uint *)&(this->StreamableItems).field_0x28;
  uStack_184 = local_bc;
  iStack_180 = *(int *)&(this->StreamableItems).field_0x8 -
               *(int *)&(this->StreamableItems).field_0x34;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_19c,iStack_1a0);
  uStack_190 = 0xffffffff;
  TStack_130.CurrentBitIndex = iStack_18c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_130._28_4_ = local_bc;
  TStack_130.BaseBitIndex = local_188;
  uStack_110 = CONCAT44(uStack_17c,iStack_180);
  local_198 = puVar1;
  local_138 = local_1a8;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar16 < (int)uVar18)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar21 = *(uint *)&(this->StreamableItems).field_0x28;
  if (uVar18 != uVar21) {
    puVar19 = *(undefined1 **)&(this->StreamableItems).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14878028e;
      uVar18 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_174 = (int)lVar14;
    uVar18 = local_174 + -1 + uVar17;
    if ((int)uVar21 < (int)uVar18) {
      uVar18 = uVar21;
    }
  }
LAB_14878028e:
  while( true ) {
    pTVar9 = local_138;
    if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    uVar12 = local_b8._24_8_;
    uVar11 = local_b8._16_8_;
    if (((TStack_130.CurrentBitIndex == uVar18) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar9 == &this->StreamableItems)) break;
    FStreamable::FreeHandles
              (*(FStreamable **)
                (*(longlong *)pTVar9 + 0x20 + (longlong)TStack_130.CurrentBitIndex * 0x30));
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  local_98 = *(uint **)&(this->StreamableItems).field_0x20;
  uVar8 = *(undefined8 *)&(this->StreamableItems).field_0x28;
  uVar18 = (uint)uVar8;
  uStack_160 = 0;
  local_b8._0_8_ = *(undefined8 *)&this->StreamableItems;
  puVar1 = &(this->StreamableItems).field_0x8;
  iStack_140 = *(int *)puVar1;
  local_b8._8_8_ = *(undefined8 *)puVar1;
  local_148 = 0;
  local_88 = *(undefined4 *)&(this->StreamableItems).field_0x30;
  iStack_84 = *(int *)&(this->StreamableItems).field_0x34;
  uVar6 = *(undefined4 *)&(this->StreamableItems).field_0x38;
  uVar7 = *(undefined4 *)&(this->StreamableItems).field_0x3c;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  uVar2 = uStack_70;
  _uStack_90 = uVar8;
  local_b8._16_8_ = *(undefined8 *)&(this->StreamableItems).field_0x10;
  local_b8._24_8_ = *(undefined8 *)&(this->StreamableItems).field_0x18;
  local_78 = *(void **)&(this->StreamableItems).field_0x40;
  uStack_70 = *(ulonglong *)&(this->StreamableItems).field_0x48;
  *(undefined8 *)&this->StreamableItems = 0;
  *(undefined8 *)&(this->StreamableItems).field_0x8 = 0;
  *(undefined8 *)&(this->StreamableItems).field_0x10 = uVar11;
  *(undefined8 *)&(this->StreamableItems).field_0x18 = uVar12;
  *(undefined8 *)&(this->StreamableItems).field_0x20 = 0;
  *(undefined8 *)&(this->StreamableItems).field_0x28 = 0x8000000000;
  *(undefined8 *)&(this->StreamableItems).field_0x30 = 0xffffffff;
  *(ulonglong *)&(this->StreamableItems).field_0x38 = CONCAT44(uStack_7c,uStack_80);
  uStack_80 = uVar6;
  uStack_7c = uVar7;
  *(undefined8 *)&(this->StreamableItems).field_0x40 = 0;
  *(ulonglong *)&(this->StreamableItems).field_0x48 = uVar2;
  uStack_14c = local_148;
  if (uVar18 != 0) {
    puVar20 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar20 = local_98;
    }
    uVar17 = *puVar20;
    local_148 = 0;
    uStack_160 = 0;
    while (uVar17 == 0) {
      lVar14 = (longlong)(int)uStack_160;
      local_148 = local_148 + 0x20;
      uStack_160 = uStack_160 + 1;
      uStack_14c = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_160)
      goto LAB_148780404;
      uVar17 = puVar20[lVar14 + 1];
    }
    local_1b0 = (ulonglong)(-uVar17 & uVar17);
    uVar2 = local_1b0 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_170 = (int)lVar14;
    uStack_14c = (local_148 - 1) + local_170;
    if ((int)uVar18 < (int)uStack_14c) {
      uStack_14c = uVar18;
    }
  }
LAB_148780404:
  local_168 = (longlong *)local_b8;
  uVar17 = uVar18 & 0xffffffe0;
  uStack_15c = (undefined4)local_1b0;
  local_158 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
  iStack_144 = iStack_18c;
  uStack_150 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_14c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_15c,uStack_160);
  iVar16 = (int)uVar18 >> 5;
  iStack_140 = iStack_140 - iStack_84;
  TStack_100._28_4_ = iStack_18c;
  TStack_100.BaseBitIndex = local_148;
  uStack_e0 = CONCAT44(uStack_13c,iStack_140);
  uVar21 = uVar18;
  local_108 = local_168;
  TStack_100.Array = local_158;
  if ((int)uVar18 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar21 = uStack_90;
  }
  if (uVar18 != uVar21) {
    puVar20 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar20 = local_98;
    }
    uVar18 = -1 << ((byte)uVar8 & 0x1f) & puVar20[iVar16];
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar16;
      uVar17 = uVar17 + 0x20;
      iVar16 = iVar16 + 1;
      uVar18 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_148780512;
      uVar18 = puVar20[lVar14 + 1];
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar18 = (int)lVar14 + -1 + uVar17;
    if ((int)uVar21 < (int)uVar18) {
      uVar18 = uVar21;
    }
  }
LAB_148780512:
  while( true ) {
    plVar10 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      `TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b7);
    }
    if (((TStack_100.CurrentBitIndex == uVar18) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
       (plVar10 == (longlong *)local_b8)) break;
    pvVar3 = *(void **)(*plVar10 + 0x20 + (longlong)TStack_100.CurrentBitIndex * 0x30);
    if (pvVar3 != (void *)0x0) {
      DestructItems<TSharedRef<FStreamableHandle,1>,int>
                (*(TSharedRef<FStreamableHandle,1> **)((longlong)pvVar3 + 0x18),
                 *(int *)((longlong)pvVar3 + 0x20));
      if (*(void **)((longlong)pvVar3 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar3 + 0x18));
      }
      if (*(void **)((longlong)pvVar3 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar3 + 8));
      }
      ::operator_delete(pvVar3,0x30);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  pFVar4 = (this->ManagerName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TSharedRef<FStreamableHandle,1>,int>
            ((TSharedRef<FStreamableHandle,1> *)
             (this->PendingCombinedHandles).AllocatorInstance.Data,
             (this->PendingCombinedHandles).ArrayNum);
  pFVar4 = (this->PendingCombinedHandles).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TSharedRef<FStreamableHandle,1>,int>
            ((TSharedRef<FStreamableHandle,1> *)(this->ManagedActiveHandles).AllocatorInstance.Data,
             (this->ManagedActiveHandles).ArrayNum);
  pFVar4 = (this->ManagedActiveHandles).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->StreamableRedirects).field_0x48 = 0;
  pvVar3 = *(void **)&(this->StreamableRedirects).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StreamableRedirects);
  *(undefined4 *)&(this->StreamableItems).field_0x48 = 0;
  pvVar3 = *(void **)&(this->StreamableItems).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StreamableItems);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 148781a70

void __thiscall
`FStreamableManager::CreateCombinedHandle'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FStreamableHandle,1> *param_1,
          TSharedRef<FStreamableHandle,1> *param_2)

{
  int *piVar1;
  TArray<TSharedPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FStreamableHandle *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  TArray<TWeakPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  FStreamableHandle *pFVar16;
  int local_res10;
  longlong local_70;
  FStreamableHandle *local_68;
  TReferenceControllerBase<1> *local_60;
  FStreamableHandle *local_58;
  TReferenceControllerBase<1> *local_50;
  FStreamableHandle *local_48;
  FSharedReferencer<1> local_40;
  
  uVar15 = 0;
  if ((param_1->Object == (FStreamableHandle *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res10 = (param_1->Object->ParentHandles).ArrayNum;
  if (0 < local_res10) {
    local_70 = 0;
    do {
      if ((param_1->Object == (FStreamableHandle *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = param_1->Object;
      uVar11 = 0;
      if ((int)uVar15 < (pFVar16->ParentHandles).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (pFVar16->ParentHandles).AllocatorInstance.Data + local_70;
      pFVar16 = (FStreamableHandle *)0x0;
      pTVar14 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar14->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar14 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_148781bbb;
          }
          LOCK();
          aVar7 = pTVar14->SharedReferenceCount;
          bVar6 = aVar5 == aVar7;
          if (bVar6) {
            pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar7 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar7;
        } while (!bVar6);
        pFVar16 = *(FStreamableHandle **)pFVar10;
      }
      if ((pFVar16 == (FStreamableHandle *)0x0) || (pFVar16 != param_2->Object)) {
LAB_148781bbb:
        if (pFVar16 != (FStreamableHandle *)0x0) {
          pTVar2 = &pFVar16->ChildHandles;
          pFVar10 = (pTVar2->AllocatorInstance).Data;
          if (pFVar10 != pFVar10 + (longlong)(pFVar16->ChildHandles).ArrayNum * 0x10) {
            pFVar12 = pFVar10;
            do {
              if (*(FStreamableHandle **)pFVar12 == param_1->Object) {
                uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar10 >> 4);
                if ((-1 < (int)uVar11) && ((int)uVar11 < (pFVar16->ChildHandles).ArrayNum)) {
                  local_40.ReferenceController = (param_2->SharedReferenceCount).ReferenceController
                  ;
                  pFVar3 = param_2->Object;
                  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_40.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  uVar9 = 0;
                  if ((int)uVar11 < (pFVar16->ChildHandles).ArrayNum) {
                    uVar9 = ~uVar11 >> 0x1f;
                  }
                  local_48 = pFVar3;
                  if ((uVar9 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar10 = (pFVar16->ChildHandles).AllocatorInstance.Data +
                            (longlong)(int)uVar11 * 0x10;
                  if (pFVar10 == (FScriptContainerElement *)&local_48) {
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_40.ReferenceController);
                  }
                  else {
                    *(FStreamableHandle **)pFVar10 = pFVar3;
                    local_48 = (FStreamableHandle *)0x0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=
                              ((FSharedReferencer<1> *)(pFVar10 + 8),&local_40);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_40.ReferenceController);
                  }
                  goto LAB_148781cf7;
                }
                break;
              }
              pFVar12 = pFVar12 + 0x10;
            } while (pFVar12 != pFVar10 + (longlong)(pFVar16->ChildHandles).ArrayNum * 0x10);
          }
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6594131278881098078>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                             ,0x95e,"Parent->ChildHandles.IsValidIndex(FoundIndex)");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_68 = param_2->Object;
          local_60 = (param_2->SharedReferenceCount).ReferenceController;
          if (local_60 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar10 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar10 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 <
               pFVar10 + (longlong)(pFVar16->ChildHandles).ArrayMax * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (pFVar16->ChildHandles).ArrayNum;
          piVar1 = &(pFVar16->ChildHandles).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          (pFVar16->ChildHandles).ArrayNum = iVar8 + 1;
          pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
          *(FStreamableHandle **)pFVar10 = local_68;
          *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_60;
          local_60 = (TReferenceControllerBase<1> *)0x0;
          local_68 = (FStreamableHandle *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
LAB_148781cf7:
          pFVar3 = param_2->Object;
          pTVar13 = &pFVar3->ParentHandles;
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
            UNLOCK();
          }
          pFVar10 = (pTVar13->AllocatorInstance).Data;
          local_58 = pFVar16;
          local_50 = pTVar14;
          if (((pFVar10 <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 <
               pFVar10 + (longlong)(pFVar3->ParentHandles).ArrayMax * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (pFVar3->ParentHandles).ArrayNum;
          piVar1 = &(pFVar3->ParentHandles).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar13->AllocatorInstance,piVar1);
          }
          (pFVar3->ParentHandles).ArrayNum = iVar8 + 1;
          pFVar10 = (pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
          *(FStreamableHandle **)pFVar10 = local_58;
          *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_50;
          local_50 = (TReferenceControllerBase<1> *)0x0;
          local_58 = (FStreamableHandle *)0x0;
        }
        if ((param_1->Object == (FStreamableHandle *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar16 = param_1->Object;
        uVar11 = 0;
        if ((int)uVar15 < (pFVar16->ParentHandles).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<TWeakPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&pFVar16->ParentHandles,uVar15);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(pFVar16->ParentHandles).AllocatorInstance,
                   (pFVar16->ParentHandles).ArrayNum,&(pFVar16->ParentHandles).ArrayMax);
        uVar15 = uVar15 - 1;
        local_70 = local_70 + -0x10;
        local_res10 = local_res10 + -1;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      local_70 = local_70 + 0x10;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < local_res10);
  }
  return;
}

// AddReferencedObjects @ 148786d30

void __thiscall
FStreamableManager::AddReferencedObjects(FStreamableManager *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  TMap<FSoftObjectPath,FStreamableManager::FRedirectedPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<FSoftObjectPath,FStreamableManager::FRedirectedPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_148;
  undefined4 uStack_114;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<FSoftObjectPath,FStreamableManager::FRedirectedPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  iVar4 = *(int *)&(this->StreamableItems).field_0x28;
  puVar1 = &(this->StreamableItems).field_0x10;
  local_148 = 1;
  iVar13 = 0;
  iVar15 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->StreamableItems).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar8 = *puVar16;
    iVar15 = 0;
    while (uVar8 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar8 = 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148786dee;
      uVar8 = puVar16[lVar11 + 1];
    }
    uVar8 = -uVar8 & uVar8;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (int)lVar11 + -1 + iVar15;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_148786dee:
  uVar12 = *(uint *)&(this->StreamableItems).field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uVar8,iVar13);
  TStack_c0.CurrentBitIndex = iVar9;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = iVar15;
  uStack_a0 = CONCAT44(uStack_114,
                       *(int *)&(this->StreamableItems).field_0x8 -
                       *(int *)&(this->StreamableItems).field_0x34);
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->StreamableItems).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->StreamableItems).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148786f10;
      uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_148786f10:
  while( true ) {
    if (*(int *)&(this->StreamableItems).field_0x8 - *(int *)&(this->StreamableItems).field_0x34 !=
        (int)uStack_a0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_c0.CurrentBitIndex == uVar12) &&
       (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(param_1->_padding_ + 0x10))
              (param_1,*(undefined8 *)
                        (*(longlong *)&this->StreamableItems + 0x20 +
                        (longlong)TStack_c0.CurrentBitIndex * 0x30));
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  iVar13 = 0;
  iVar15 = 0;
  puVar1 = &(this->StreamableRedirects).field_0x10;
  iVar4 = *(int *)&(this->StreamableRedirects).field_0x28;
  pTVar2 = &this->StreamableRedirects;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->StreamableRedirects).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar8 = *puVar16;
    while (uVar8 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148786ff1;
      uVar8 = puVar16[lVar11 + 1];
    }
    local_148 = -uVar8 & uVar8;
    uVar3 = (ulonglong)local_148 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = iVar15 + -1 + (int)lVar11;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_148786ff1:
  uVar8 = *(uint *)&(this->StreamableRedirects).field_0x28;
  uVar12 = uVar8 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(local_148,iVar13);
  TStack_90.CurrentBitIndex = iVar10;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar8 >> 5;
  TStack_90._28_4_ = iVar9;
  TStack_90.BaseBitIndex = iVar15;
  uStack_70 = CONCAT44(uStack_cc,
                       *(int *)&(this->StreamableRedirects).field_0x8 -
                       *(int *)&(this->StreamableRedirects).field_0x34);
  local_98 = pTVar2;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar8 < 0) || (iVar4 < (int)uVar8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar17 = *(uint *)&(this->StreamableRedirects).field_0x28;
  if (uVar8 != uVar17) {
    puVar14 = *(undefined1 **)&(this->StreamableRedirects).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar8 == 0) {
      lVar11 = (longlong)iVar13;
      uVar12 = uVar12 + 0x20;
      iVar13 = iVar13 + 1;
      uVar8 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1487870f0;
      uVar8 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar8 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar17 < (int)uVar8) {
      uVar8 = uVar17;
    }
  }
LAB_1487870f0:
  while( true ) {
    pTVar6 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_90.CurrentBitIndex == uVar8) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    break;
    FReferenceCollector::AddStableReferenceFwd
              (param_1,(FObjectPtr *)
                       (*(longlong *)pTVar6 + 0x40 + (longlong)TStack_90.CurrentBitIndex * 0x50));
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// AreAllAsyncLoadsComplete @ 148788950

bool __thiscall FStreamableManager::AreAllAsyncLoadsComplete(FStreamableManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x904,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar3 = *(int *)&(this->StreamableItems).field_0x28;
  puVar1 = &(this->StreamableItems).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->StreamableItems).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148788a1e;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_148788a1e:
  uVar11 = *(uint *)&(this->StreamableItems).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->StreamableItems).field_0x8 -
                       *(int *)&(this->StreamableItems).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->StreamableItems).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->StreamableItems).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148788b20;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_148788b20:
  while( true ) {
    if (*(int *)&(this->StreamableItems).field_0x8 - *(int *)&(this->StreamableItems).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = *(longlong *)
             (*(longlong *)&this->StreamableItems + 0x20 +
             (longlong)TStack_50.CurrentBitIndex * 0x30);
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x2c) != '\0')) {
      return false;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return true;
}

// AsyncLoadCallback @ 148788f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamableManager::AsyncLoadCallback
          (FStreamableManager *this,FSoftObjectPath *param_1,UPackage *param_2,
          TOptional<UE::UnifiedError::FError> *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UObjectBaseUtility *this_00;
  FStreamableHandle *pFVar3;
  IErrorDetails *pIVar4;
  code *pcVar5;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar6;
  bool bVar7;
  bool bVar8;
  FStreamable *pFVar9;
  FText *pFVar10;
  FString *pFVar11;
  FError *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  undefined1 local_108 [8];
  FError local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FText local_90;
  FString local_80;
  FText local_70;
  FString local_60;
  FString local_50;
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x867,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar9 = FindStreamable(this,param_1);
  if (5 < (byte)LogStreamableManager._0_1_) {
    FSoftObjectPath::ToString(param_1,&local_f0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  if (pFVar9 == (FStreamable *)0x0) {
    if (1 < (byte)LogStreamableManager._0_1_) {
      FSoftObjectPath::ToString(param_1,&local_60);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_148789392;
  }
  bVar7 = pFVar9->bAsyncLoadRequestOutstanding;
  if (bVar7 == false) {
    if (5 < (byte)LogStreamableManager._0_1_) {
      FSoftObjectPath::ToString(param_1,&local_e0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar2 = (pFVar9->Target).field0_0x0.DebugPtr;
    pFVar9->bAsyncLoadRequestOutstanding = false;
    if (pUVar2 == (UObject *)0x0) {
      FindInMemory(this,param_1,pFVar9,param_2);
    }
  }
  this_00 = (UObjectBaseUtility *)(pFVar9->Target).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    pFVar9->bLoadFailed = true;
    if (GStreamableLogAsyncLoadErrorsAsErrors == false) {
      if (5 < (byte)LogStreamableManager._0_1_) {
        FSoftObjectPath::ToString(param_1,&local_b0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
        local_d0.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
        goto LAB_148789119;
      }
    }
    else if (1 < (byte)LogStreamableManager._0_1_) {
      FSoftObjectPath::ToString(param_1,&local_c0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
      local_d0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
LAB_148789119:
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (5 < (byte)LogStreamableManager._0_1_) {
    UObjectBaseUtility::GetFullName(this_00,&local_d0,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
    goto LAB_148789119;
  }
  if (param_3->bIsSet == false) {
    if ((pFVar9->Target).field0_0x0.DebugPtr == (UObject *)0x0) {
      iVar1 = (pFVar9->LoadingHandles).ArrayNum;
      pFVar13 = (pFVar9->LoadingHandles).AllocatorInstance.Data;
      pFVar14 = pFVar13 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pFVar9->LoadingHandles).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSharedRef<FStreamableHandle,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_108);
        }
        if (pFVar13 == pFVar14) break;
        pFVar3 = *(FStreamableHandle **)pFVar13;
        pFVar11 = FSoftObjectPath::ToString(param_1,&local_50);
        pFVar12 = UE::UnifiedError::StreamableManager::PackageLoadFailed::MakeError
                            (&local_100,pFVar11);
        FStreamableHandle::SetError(pFVar3,pFVar12);
        TVar6.Reference = local_100.ErrorDetails.Reference;
        local_100.ErrorCode = 0;
        local_100.ModuleId = 0;
        if (local_100.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_100.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar6.Reference + 0x10))();
          if (local_100.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_100.ErrorDetails.Reference + 0x10))();
          }
        }
        pFVar13 = pFVar13 + 0x10;
      }
    }
  }
  else {
    if (GStreamableLogAsyncLoadErrorsAsErrors == false) {
      if (5 < (byte)LogStreamableManager._0_1_) {
        pFVar10 = UE::UnifiedError::FError::GetErrorMessage(&param_3->TypedValue,&local_70,true);
        FText::ToString(pFVar10);
        FSoftObjectPath::ToString(param_1,&local_80);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        goto LAB_148789221;
      }
    }
    else if (1 < (byte)LogStreamableManager._0_1_) {
      pFVar10 = UE::UnifiedError::FError::GetErrorMessage(&param_3->TypedValue,&local_90,true);
      FText::ToString(pFVar10);
      FSoftObjectPath::ToString(param_1,&local_a0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
      local_70.TextData.Reference = local_90.TextData.Reference;
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        local_70.TextData.Reference = local_90.TextData.Reference;
      }
LAB_148789221:
      if (local_70.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
      }
    }
    iVar1 = (pFVar9->LoadingHandles).ArrayNum;
    pFVar13 = (pFVar9->LoadingHandles).AllocatorInstance.Data;
    pFVar14 = pFVar13 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar9->LoadingHandles).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FStreamableHandle,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar13 == pFVar14) break;
      pFVar3 = *(FStreamableHandle **)pFVar13;
      if ((param_3->bIsSet == false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FStreamableHandle::SetError(pFVar3,&param_3->TypedValue);
      pFVar13 = pFVar13 + 0x10;
    }
  }
  if (bVar7 != false) {
    CheckCompletedRequests(this,param_1,pFVar9);
  }
LAB_148789392:
  pFVar13 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  if (param_3->bIsSet != false) {
    (param_3->TypedValue).ErrorCode = 0;
    (param_3->TypedValue).ModuleId = 0;
    pIVar4 = (param_3->TypedValue).ErrorDetails.Reference;
    if (pIVar4 != (IErrorDetails *)0x0) {
      (param_3->TypedValue).ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    pIVar4 = (param_3->TypedValue).ErrorDetails.Reference;
    if (pIVar4 != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
  }
  return;
}

// CheckCompletedRequests @ 14878c220

void __thiscall
FStreamableManager::CheckCompletedRequests
          (FStreamableManager *this,FSoftObjectPath *param_1,FStreamable *param_2)

{
  TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  TSharedRef<FStreamableHandle,1> *pTVar10;
  TSharedRef<FStreamableHandle,1> *pTVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  if ((RecursiveCount != 0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6594131278881097913>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x8b9,"RecursiveCount == 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = (param_2->LoadingHandles).ArrayNum;
  pTVar1 = &param_2->LoadingHandles;
  RecursiveCount = RecursiveCount + 1;
  pTVar11 = (TSharedRef<FStreamableHandle,1> *)(pTVar1->AllocatorInstance).Data;
  local_50.Data = (FScriptContainerElement *)0x0;
  pTVar10 = pTVar11 + iVar3;
  local_48 = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  do {
    if ((param_2->LoadingHandles).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FStreamableHandle,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pTVar11 == pTVar10) {
      DestructItems<TSharedRef<FStreamableHandle,1>,int>
                ((TSharedRef<FStreamableHandle,1> *)(pTVar1->AllocatorInstance).Data,
                 (param_2->LoadingHandles).ArrayNum);
      piVar2 = &(param_2->LoadingHandles).ArrayMax;
      (param_2->LoadingHandles).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
      iVar3 = (int)local_48;
      uVar8 = (ulonglong)(int)local_48;
      pTVar11 = (TSharedRef<FStreamableHandle,1> *)(local_50.Data + uVar8 * 0x10);
      FVar9.Data = local_50.Data;
      while( true ) {
        if ((int)uVar8 != iVar3) {
          `TCheckedPointerIterator<TSharedRef<FStreamableHandle,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if ((TSharedRef<FStreamableHandle,1> *)FVar9.Data == pTVar11) break;
        FStreamableHandle::CompleteLoad(((TSharedRef<FStreamableHandle,1> *)FVar9.Data)->Object);
        uVar8 = local_48 & 0xffffffff;
        FVar9.Data = FVar9.Data + 0x10;
      }
      iVar3 = (int)local_58;
      pTVar11 = (TSharedRef<FStreamableHandle,1> *)(local_60.Data + (longlong)(int)local_58 * 0x10);
      FVar9.Data = local_60.Data;
      while( true ) {
        if ((int)local_58 != iVar3) {
          `TCheckedPointerIterator<TSharedRef<FStreamableHandle,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_68);
        }
        if ((TSharedRef<FStreamableHandle,1> *)FVar9.Data == pTVar11) break;
        FStreamableHandle::ReleaseHandle(((TSharedRef<FStreamableHandle,1> *)FVar9.Data)->Object);
        FVar9.Data = FVar9.Data + 0x10;
      }
      RecursiveCount = RecursiveCount + -1;
      DestructItems<TSharedRef<FStreamableHandle,1>,int>
                ((TSharedRef<FStreamableHandle,1> *)local_60.Data,(int)local_58);
      if ((TSharedRef<FStreamableHandle,1> *)local_60.Data != (TSharedRef<FStreamableHandle,1> *)0x0
         ) {
        FMemory::Free(local_60.Data);
      }
      DestructItems<TSharedRef<FStreamableHandle,1>,int>
                ((TSharedRef<FStreamableHandle,1> *)local_50.Data,(int)local_48);
      if ((TSharedRef<FStreamableHandle,1> *)local_50.Data != (TSharedRef<FStreamableHandle,1> *)0x0
         ) {
        FMemory::Free(local_50.Data);
      }
      return;
    }
    if (((pTVar11->Object->bCanceled == false) && (pTVar11->Object->OwningManager != this)) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6594131278881097923>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                           ,0x8c3,"Handle->WasCanceled() || Handle->OwningManager == this"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    piVar2 = &pTVar11->Object->StreamablesLoading;
    *piVar2 = *piVar2 + -1;
    if (pTVar11->Object->StreamablesLoading == 0) {
      if (pTVar11->Object->bReleaseWhenLoaded != false) {
        if (((local_60.Data <= pTVar11) &&
            (pTVar11 < (TSharedRef<FStreamableHandle,1> *)
                       (local_60.Data + (longlong)local_58._4_4_ * 0x10))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (int)local_58;
        if ((int)local_58 == local_58._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_60,(int *)((longlong)&local_58 + 4));
        }
        local_58 = CONCAT44(local_58._4_4_,iVar7 + 1);
        *(FStreamableHandle **)&local_60.Data[(longlong)iVar7 * 0x10].field_0x0 = pTVar11->Object;
        pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
        *(TReferenceControllerBase<1> **)(local_60.Data + (longlong)iVar7 * 0x10 + 8) = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      if (((local_50.Data <= pTVar11) &&
          (pTVar11 < (TSharedRef<FStreamableHandle,1> *)
                     (local_50.Data + (longlong)local_48._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (int)local_48;
      if ((int)local_48 == local_48._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_50,(int *)((longlong)&local_48 + 4));
      }
      local_48 = CONCAT44(local_48._4_4_,iVar7 + 1);
      *(FStreamableHandle **)&local_50.Data[(longlong)iVar7 * 0x10].field_0x0 = pTVar11->Object;
      pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(local_50.Data + (longlong)iVar7 * 0x10 + 8) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    pTVar11 = pTVar11 + 1;
  } while( true );
}

// CreateCombinedHandle @ 14878f150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::CreateCombinedHandle
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArrayView<TSharedPtr<FStreamableHandle,1>_const_,int> *param_1,FString *param_2,
          EStreamableManagerCombinedHandleOptions param_3,FStreamableAsyncLoadParams *param_4,
          FSourceLocation *param_5)

{
  int *piVar1;
  TSharedPtr<FStreamableHandle,1> *pTVar2;
  TSharedRef<FStreamableHandle,1> *pTVar3;
  code *pcVar4;
  FStreamableHandle *pFVar5;
  FStreamableHandle *pFVar6;
  FStreamableManager *pFVar7;
  EStreamableManagerCombinedHandleOptions EVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  TSharedPtr<FStreamableHandle,1> *pTVar13;
  void *pvVar14;
  FScriptContainerElement *pFVar15;
  FString *pFVar16;
  TArray<TWeakPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<TSharedPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *pTVar18;
  TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *pTVar19;
  TSharedPtr<FStreamableHandle,1> *pTVar20;
  undefined1 auStackY_348 [32];
  TSharedPtr<FStreamableHandle,1> local_2f0;
  TSharedRef<FStreamableHandle,1> local_2d8;
  FPrivateToken local_2c8;
  undefined1 local_2c7 [7];
  undefined1 local_2c0 [8];
  ForAnyElementType local_2b8;
  ulonglong local_2b0;
  FStreamableHandle *local_2a8;
  TReferenceControllerBase<1> *pTStack_2a0;
  FStreamableManager *local_298;
  FDestructionSentinel local_290;
  TSharedPtr<FStreamableHandle,1> local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_348;
  iVar12 = param_1->ArrayNum;
  local_298 = this;
  if (iVar12 == 0) {
    local_2b0 = 0;
    local_2c0 = (undefined1  [8])0x0;
    local_2b8.Data = (FScriptContainerElement *)0x0;
    local_278.Object = (FStreamableHandle *)0x0;
    local_278.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    UE::StreamableManager::Private::
    ExecuteDelegateInternal<TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>_>
              (&param_4->OnComplete,&local_278,
               (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                *)local_2c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
               (FWriteAccessScope *)&local_290);
    if (((int)local_2b0 != 0) && (local_2b8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2b8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2b8,0,0,0x10);
      local_2b0 = local_2b0 & 0xffffffff00000000;
    }
    if (local_290.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
    }
    if (local_2b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2c0);
    __return_storage_ptr__->Object = (FStreamableHandle *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    MakeShared<FStreamableHandle,1,FStreamableHandle::FPrivateToken,UE::FSourceLocation>
              (&local_2d8,&local_2c8,param_5);
    (local_2d8.Object)->OwningManager = this;
    (local_2d8.Object)->bIsCombinedHandle = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_2d8.Object)->CompleteDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_4->OnComplete);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_2d8.Object)->CancelDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_4->OnCancel);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_2d8.Object)->UpdateDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_4->OnUpdate);
    pFVar5 = local_2d8.Object;
    if ((GStreamableStripDebugName == false) &&
       (pFVar16 = &(local_2d8.Object)->DebugName, pFVar16 != param_2)) {
      pFVar15 = (pFVar16->Data).AllocatorInstance.Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (pFVar16->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
      (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->DebugName).Data.ArrayNum = (param_2->Data).ArrayNum;
      (pFVar5->DebugName).Data.ArrayMax = (param_2->Data).ArrayMax;
      (param_2->Data).ArrayNum = 0;
      (param_2->Data).ArrayMax = 0;
    }
    local_268.End = (wchar_t *)local_48;
    EVar8 = param_3 & MergeDebugNames;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.Base = local_248;
    local_268.CurPos = local_248;
    if (EVar8 != None) {
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_268,L"%s: Merged(");
    }
    pTVar13 = param_1->DataPtr;
    bVar10 = true;
    pTVar20 = pTVar13 + iVar12;
    bVar11 = true;
    while (pTVar13 != pTVar20) {
      local_2f0.SharedReferenceCount.ReferenceController =
           (pTVar13->SharedReferenceCount).ReferenceController;
      local_2f0.Object = pTVar13->Object;
      if (local_2f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_2f0.Object == (FStreamableHandle *)0x0) {
        if ((param_3 & SkipNulls) == None) {
          `FStreamableManager::CreateCombinedHandle'::__l23::<lambda_2>::operator()(local_2c7);
          __return_storage_ptr__->Object = (FStreamableHandle *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f0.SharedReferenceCount.ReferenceController);
          goto LAB_14878f927;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2f0.SharedReferenceCount.ReferenceController);
        pTVar13 = pTVar13 + 1;
      }
      else {
        if ((local_2f0.Object == (FStreamableHandle *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar4)();
          return pTVar13;
        }
        if (((local_2f0.Object)->OwningManager != local_298) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6594131278881098122>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                               ,0x98a,"ChildHandle->OwningManager == this"), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar4)();
          return pTVar13;
        }
        if (EVar8 != None) {
          if (bVar10) {
            if ((local_2f0.Object == (FStreamableHandle *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              pTVar13 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar4)();
              return pTVar13;
            }
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_268,L"%s");
            bVar11 = false;
          }
          else {
            if ((local_2f0.Object == (FStreamableHandle *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              pTVar13 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar4)();
              return pTVar13;
            }
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_268,L", %s");
          }
        }
        bVar10 = bVar11;
        if ((param_3 & RedirectParents) != None) {
          `FStreamableManager::CreateCombinedHandle'::__l2::<lambda_1>::operator()
                    (&RemapHandleParentRelationship,&local_2f0,&local_2d8);
        }
        if ((local_2f0.Object == (FStreamableHandle *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar4)();
          return pTVar13;
        }
        pFVar5 = local_2f0.Object;
        local_2a8 = local_2d8.Object;
        pTStack_2a0 = local_2d8.SharedReferenceCount.ReferenceController;
        pTVar17 = &(local_2f0.Object)->ParentHandles;
        if (local_2d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2d8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_2d8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pFVar15 = (pTVar17->AllocatorInstance).Data;
        if (((pFVar15 <= (FScriptContainerElement *)&local_2a8) &&
            ((FScriptContainerElement *)&local_2a8 <
             pFVar15 + (longlong)((local_2f0.Object)->ParentHandles).ArrayMax * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar4)();
          return pTVar13;
        }
        iVar12 = (pFVar5->ParentHandles).ArrayNum;
        piVar1 = &(pFVar5->ParentHandles).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar17->AllocatorInstance,piVar1);
        }
        pFVar6 = local_2d8.Object;
        (pFVar5->ParentHandles).ArrayNum = iVar12 + 1;
        pFVar15 = (pTVar17->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
        *(FStreamableHandle **)pFVar15 = local_2a8;
        *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTStack_2a0;
        pTVar18 = &(local_2d8.Object)->ChildHandles;
        pTStack_2a0 = (TReferenceControllerBase<1> *)0x0;
        local_2a8 = (FStreamableHandle *)0x0;
        pTVar2 = (TSharedPtr<FStreamableHandle,1> *)(pTVar18->AllocatorInstance).Data;
        if (((pTVar2 <= &local_2f0) &&
            (&local_2f0 < pTVar2 + ((local_2d8.Object)->ChildHandles).ArrayMax)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar4)();
          return pTVar13;
        }
        iVar12 = (pFVar6->ChildHandles).ArrayNum;
        piVar1 = &(pFVar6->ChildHandles).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar18->AllocatorInstance,piVar1);
        }
        (pFVar6->ChildHandles).ArrayNum = iVar12 + 1;
        pFVar15 = (pTVar18->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
        *(FStreamableHandle **)pFVar15 = local_2f0.Object;
        *(TReferenceControllerBase<1> **)(pFVar15 + 8) =
             local_2f0.SharedReferenceCount.ReferenceController;
        if (local_2f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_2f0.Object == (FStreamableHandle *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar4)();
          return pTVar13;
        }
        if ((local_2f0.Object)->bLoadCompleted != false) {
          (local_2d8.Object)->CompletedChildCount = (local_2d8.Object)->CompletedChildCount + 1;
        }
        if ((local_2f0.Object == (FStreamableHandle *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar4)();
          return pTVar13;
        }
        if ((local_2f0.Object)->bCanceled != false) {
          (local_2d8.Object)->CanceledChildCount = (local_2d8.Object)->CanceledChildCount + 1;
        }
        if ((local_2f0.Object == (FStreamableHandle *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar4)();
          return pTVar13;
        }
        if (((local_2f0.Object)->Error).bIsSet != false) {
          FStreamableHandle::SetErrorOnParents
                    (local_2f0.Object,&((local_2f0.Object)->Error).TypedValue);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2f0.SharedReferenceCount.ReferenceController);
        pTVar13 = pTVar13 + 1;
        bVar11 = bVar10;
      }
    }
    if (EVar8 != None) {
      if (local_268.End < local_268.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      }
      pvVar14 = FGenericPlatformString::Memcpy(local_268.CurPos,L")",2);
      local_268.CurPos = (wchar_t *)((longlong)pvVar14 + 2);
      if (local_268.End < (wchar_t *)((longlong)pvVar14 + 4)) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      }
      *local_268.CurPos = L'\0';
      ::FString::operator=(&(local_2d8.Object)->DebugName,local_268.Base);
    }
    pFVar7 = local_298;
    pTVar19 = &local_298->PendingCombinedHandles;
    pTVar3 = (TSharedRef<FStreamableHandle,1> *)(pTVar19->AllocatorInstance).Data;
    if (((pTVar3 <= &local_2d8) &&
        (&local_2d8 < pTVar3 + (local_298->PendingCombinedHandles).ArrayMax)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar4)();
      return pTVar13;
    }
    iVar12 = (pFVar7->PendingCombinedHandles).ArrayNum;
    piVar1 = &(pFVar7->PendingCombinedHandles).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar19->AllocatorInstance,piVar1);
    }
    pFVar15 = (pTVar19->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
    (pFVar7->PendingCombinedHandles).ArrayNum = iVar12 + 1;
    *(FStreamableHandle **)pFVar15 = local_2d8.Object;
    *(TReferenceControllerBase<1> **)(pFVar15 + 8) =
         local_2d8.SharedReferenceCount.ReferenceController;
    if (local_2d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FStreamableHandle::UpdateCombinedHandle(local_2d8.Object);
    __return_storage_ptr__->Object = local_2d8.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_2d8.SharedReferenceCount.ReferenceController;
    if (local_2d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_14878f927:
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
  }
  pFVar15 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  return __return_storage_ptr__;
}

// CreateErrorHandle @ 148790d90

/* WARNING: Type propagation algorithm not settling */

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::CreateErrorHandle
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FError *param_1,FStreamableAsyncLoadParams *param_2,FString *param_3,
          FSourceLocation *param_4)

{
  FString *pFVar1;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FOnDemandInternalContentHandle *pFVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  FOnDemandContentHandle *pFVar10;
  TSharedPtr<FStreamableHandle,1> *pTVar11;
  FStreamableHandle *this_00;
  FPrivateToken local_res8 [8];
  FOnDemandContentHandle local_98;
  TSharedRef<FStreamableHandle,1> local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FOnDemandContentHandle local_58;
  FOnDemandInternalContentHandle *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FOnDemandInternalContentHandle *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  MakeShared<FStreamableHandle,1,FStreamableHandle::FPrivateToken,UE::FSourceLocation>
            (&local_88,local_res8,param_4);
  this_00 = local_88.Object;
  (local_88.Object)->OwningManager = this;
  pTVar2 = &(local_88.Object)->RequestedAssets;
  if ((FStreamableAsyncLoadParams *)pTVar2 != param_2) {
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)(pTVar2->AllocatorInstance).Data,
               ((local_88.Object)->RequestedAssets).ArrayNum);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (param_2->TargetsToStream).AllocatorInstance.Data;
    (param_2->TargetsToStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->RequestedAssets).ArrayNum = (param_2->TargetsToStream).ArrayNum;
    (this_00->RequestedAssets).ArrayMax = (param_2->TargetsToStream).ArrayMax;
    (param_2->TargetsToStream).ArrayNum = 0;
    (param_2->TargetsToStream).ArrayMax = 0;
  }
  this_00->Priority = param_2->Priority;
  if ((GStreamableStripDebugName == false) && (pFVar1 = &this_00->DebugName, pFVar1 != param_3)) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->DebugName).Data.ArrayNum = (param_3->Data).ArrayNum;
    (this_00->DebugName).Data.ArrayMax = (param_3->Data).ArrayMax;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
  }
  if ((param_2->DownloadParams).bIsSet != false) {
    if ((param_2->DownloadParams).TypedValue.CachePin.ContentHandle.Handle.Object ==
        (FOnDemandInternalContentHandle *)0x0) {
      UE::IoStore::FOnDemandContentHandle::FOnDemandContentHandle(&local_98);
      local_78 = (param_3->Data).AllocatorInstance.Data;
      iVar3 = (param_3->Data).ArrayNum;
      iStack_70 = iVar3 + -1;
      if (iVar3 == 0) {
        iStack_70 = 0;
      }
      local_68._12_4_ = uStack_6c;
      local_68.Size = iStack_70;
      local_68.DataPtr = (wchar_t *)local_78;
      pFVar10 = UE::IoStore::FOnDemandContentHandle::Create(&local_58,&local_68);
      FVar8.ReferenceController = local_98.Handle.SharedReferenceCount.ReferenceController;
      local_98.Handle.SharedReferenceCount.ReferenceController =
           (pFVar10->Handle).SharedReferenceCount.ReferenceController;
      local_98.Handle.Object = (pFVar10->Handle).Object;
      if (local_98.Handle.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      UE::IoStore::FOnDemandContentHandle::~FOnDemandContentHandle(&local_58);
      if (((param_2->DownloadParams).bIsSet == false) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar11 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar7)();
        return pTVar11;
      }
      if (local_98.Handle.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_48 = (param_2->DownloadParams).TypedValue.CachePin.ContentHandle.Handle.Object;
      pTStack_40 = (param_2->DownloadParams).TypedValue.CachePin.ContentHandle.Handle.
                   SharedReferenceCount.ReferenceController;
      (param_2->DownloadParams).TypedValue.CachePin.ContentHandle.Handle.Object =
           local_98.Handle.Object;
      (param_2->DownloadParams).TypedValue.CachePin.ContentHandle.Handle.SharedReferenceCount.
      ReferenceController = local_98.Handle.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      UE::IoStore::FOnDemandContentHandle::~FOnDemandContentHandle(&local_98);
      this_00 = local_88.Object;
    }
    if (((param_2->DownloadParams).bIsSet == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar7)();
      return pTVar11;
    }
    pTVar5 = (param_2->DownloadParams).TypedValue.CachePin.ContentHandle.Handle.SharedReferenceCount
             .ReferenceController;
    pFVar6 = (param_2->DownloadParams).TypedValue.CachePin.ContentHandle.Handle.Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = (this_00->DownloadCachePin).ContentHandle.Handle.Object;
    pTStack_30 = (this_00->DownloadCachePin).ContentHandle.Handle.SharedReferenceCount.
                 ReferenceController;
    (this_00->DownloadCachePin).ContentHandle.Handle.Object = pFVar6;
    (this_00->DownloadCachePin).ContentHandle.Handle.SharedReferenceCount.ReferenceController =
         pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
    this_00 = local_88.Object;
  }
  FStreamableHandle::CancelHandle(this_00);
  FStreamableHandle::SetError(this_00,param_1);
  __return_storage_ptr__->Object = this_00;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  pFVar4 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return __return_storage_ptr__;
}

// FindInMemory @ 148799830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FStreamableManager::FindInMemory
          (FStreamableManager *this,FSoftObjectPath *param_1,FStreamable *param_2,UPackage *param_3)

{
  int *piVar1;
  FName FVar2;
  UObjectRedirector *pUVar3;
  UObjectBaseUtility *this_00;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  UClass *pUVar7;
  FString *pFVar8;
  size_t sVar9;
  UObject *pUVar10;
  FUObjectItem *pFVar11;
  FSoftObjectPath *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  FScriptContainerElement *local_e8;
  undefined4 uStack_dc;
  FString local_d8;
  FTopLevelAssetPath local_c8;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  FString local_98;
  FString local_88;
  FSoftObjectPath local_78;
  FSoftObjectPath local_58;
  
  if ((param_2 == (FStreamable *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Existing",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x82a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2->bAsyncLoadRequestOutstanding != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Existing->bAsyncLoadRequestOutstanding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x82b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (5 < (byte)LogStreamableManager._0_1_) {
    FSoftObjectPath::ToString(param_1,&local_d8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar13 = (FScriptContainerElement *)0x0;
  (param_2->Target).field0_0x0.DebugPtr = (UObject *)0x0;
  if ((param_1->AssetPath).AssetName == (FName)0x0) {
    if ((param_3 == (UPackage *)0x0) ||
       ((FName)param_3->_padding_ != (param_1->AssetPath).PackageName)) {
      FVar2 = (param_1->AssetPath).PackageName;
      pUVar7 = Z_Construct_UClass_UObject_NoRegister();
      param_3 = (UPackage *)
                StaticFindObjectFast(pUVar7,(UObject *)0x0,FVar2,None,RF_NoFlags,Borrowed);
      goto LAB_148799980;
    }
  }
  else {
    FVar2 = (param_1->AssetPath).PackageName;
    FVar5 = (param_1->AssetPath).AssetName;
    pUVar7 = Z_Construct_UClass_UObject_NoRegister();
    if (param_3 == (UPackage *)0x0) {
      local_c8.PackageName = FVar2;
      local_c8.AssetName = FVar5;
      param_3 = (UPackage *)StaticFindObject(pUVar7,&local_c8,None);
    }
    else {
      param_3 = (UPackage *)
                StaticFindObjectFast(pUVar7,(UObject *)param_3,FVar5,None,RF_NoFlags,Borrowed);
    }
LAB_148799980:
    if (param_3 == (UPackage *)0x0) goto LAB_148799aab;
  }
  FVar2 = (param_1->AssetPath).PackageName;
  piVar1 = &(param_1->SubPathString).Data.ArrayNum;
  if (FVar2 == (FName)0x0) goto LAB_148799aab;
  if (*piVar1 < 2) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    (param_2->Target).field0_0x0.DebugPtr = (UObject *)param_3;
    goto LAB_148799aab;
  }
  if ((FVar2 == (FName)0x0) || (*piVar1 < 2)) goto LAB_148799aab;
  iVar15 = (param_1->SubPathString).Data.ArrayNum;
  iVar14 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar14 = 0;
  }
  pFVar8 = ::FString::ConstructFromPtrSize
                     (&local_b8,(uchar *)(param_1->SubPathString).Data.AllocatorInstance.Data,iVar14
                     );
  iVar14 = 0;
  iVar15 = iVar14;
  if (&local_88 != pFVar8) {
    pFVar13 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar15 = (pFVar8->Data).ArrayNum;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (iVar15 == 0) {
    local_e8 = (FScriptContainerElement *)0x15060d16c;
LAB_148799a4e:
    sVar9 = wcslen((wchar_t *)local_e8);
    iVar14 = (int)sVar9;
  }
  else {
    local_e8 = pFVar13;
    if (pFVar13 != (FScriptContainerElement *)0x0) goto LAB_148799a4e;
  }
  pUVar7 = Z_Construct_UClass_UObject_NoRegister();
  local_a8._12_4_ = uStack_dc;
  local_a8.Size = iVar14;
  local_a8.DataPtr = (wchar_t *)local_e8;
  pUVar10 = StaticFindObject(pUVar7,(UObject *)param_3,&local_a8,None);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  (param_2->Target).field0_0x0.DebugPtr = pUVar10;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
LAB_148799aab:
  pUVar10 = (param_2->Target).field0_0x0.DebugPtr;
  if ((pUVar10 != (UObject *)0x0) &&
     (pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar10->field_0xc),
     ((pFVar11->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
    (param_2->Target).field0_0x0.DebugPtr = (UObject *)0x0;
  }
  if ((param_2->Target).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar7 = UObjectRedirector::GetPrivateStaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)param_2,pUVar7);
    if ((bVar6) &&
       (pUVar3 = (UObjectRedirector *)(param_2->Target).field0_0x0.DebugPtr,
       pUVar3 != (UObjectRedirector *)0x0)) {
      pFVar12 = FSoftObjectPath::FSoftObjectPath(&local_58,param_1);
      pFVar12 = HandleLoadedRedirector(this,&local_78,pUVar3,pFVar12,param_2);
      FSoftObjectPath::operator=(param_1,pFVar12);
      if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
  this_00 = (UObjectBaseUtility *)(param_2->Target).field0_0x0.DebugPtr;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    if (5 < (byte)LogStreamableManager._0_1_) {
      UObjectBaseUtility::GetFullName(this_00,&local_98,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    param_2->bLoadFailed = false;
  }
  return;
}

// FindStreamable @ 14879a0a0

FStreamable * __thiscall
FStreamableManager::FindStreamable(FStreamableManager *this,FSoftObjectPath *param_1)

{
  uint uVar1;
  int iVar2;
  FSoftObjectPath *pFVar3;
  FStreamable *pFVar4;
  longlong lVar5;
  FSoftObjectPath local_28;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSoftObjectPath>
                    ((TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
                      *)&this->StreamableItems,uVar1,param_1);
  if (((iVar2 == -1) ||
      (lVar5 = (longlong)iVar2 * 0x30 + *(longlong *)&this->StreamableItems, lVar5 == 0)) ||
     (pFVar4 = *(FStreamable **)(lVar5 + 0x20), pFVar4 == (FStreamable *)0x0)) {
    pFVar3 = ResolveRedirects(this,&local_28,param_1);
    uVar1 = ::GetTypeHash(pFVar3);
    iVar2 = TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FSoftObjectPath>
                      ((TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
                        *)&this->StreamableItems,uVar1,pFVar3);
    if ((iVar2 == -1) ||
       (lVar5 = (longlong)iVar2 * 0x30 + *(longlong *)&this->StreamableItems, lVar5 == 0)) {
      pFVar4 = (FStreamable *)0x0;
    }
    else {
      pFVar4 = *(FStreamable **)(lVar5 + 0x20);
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return pFVar4;
}

// GetActiveHandles @ 14879b1c0

bool __thiscall
FStreamableManager::GetActiveHandles
          (FStreamableManager *this,FSoftObjectPath *param_1,
          TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  FStreamableHandle *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  FStreamable *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  FStreamableHandle *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_48 [8];
  FScriptContainerElement *local_40;
  TSharedRef<FStreamableHandle,1> local_38;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x9de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pFVar8 = FindStreamable(this,param_1);
  if (pFVar8 != (FStreamable *)0x0) {
    iVar1 = (pFVar8->ActiveHandles).ArrayNum;
    if (0 < iVar1) {
      pFVar13 = (pFVar8->ActiveHandles).AllocatorInstance.Data;
      local_40 = pFVar13 + (longlong)iVar1 * 8;
      do {
        pFVar9 = local_40;
        if ((pFVar8->ActiveHandles).ArrayNum != iVar1) {
          local_48[0] = 0;
          `TCheckedPointerIterator<FStreamableHandle_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_48);
        }
        if (pFVar13 == pFVar9) {
          return 0 < param_2->ArrayNum;
        }
        pFVar2 = *(FStreamableHandle **)pFVar13;
        if ((pFVar2->OwningManager != this) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6594131278881098212>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                               ,0x9e4,"ActiveHandle->OwningManager == this"), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pTVar11 = (TReferenceControllerBase<1> *)pFVar2->_padding_;
        pFVar12 = (FStreamableHandle *)0x0;
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          aVar4 = pTVar11->SharedReferenceCount;
          do {
            if (aVar4 == (atomic<int>)0x0) {
              pTVar11 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14879b2d5;
            }
            LOCK();
            aVar7 = pTVar11->SharedReferenceCount;
            bVar5 = aVar4 == aVar7;
            if (bVar5) {
              pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
              aVar7 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar7;
          } while (!bVar5);
          pFVar12 = (FStreamableHandle *)pFVar2->_padding_;
        }
LAB_14879b2d5:
        if ((pFVar12 != pFVar2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("SharedThis.Get() == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x67f,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if ((pFVar12 == (FStreamableHandle *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x416,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        local_38.Object = pFVar12;
        local_38.SharedReferenceCount.ReferenceController = pTVar11;
        if ((pFVar12 == (FStreamableHandle *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x26c,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (param_3) {
          pFVar9 = (this->ManagedActiveHandles).AllocatorInstance.Data;
          pFVar10 = pFVar9 + (longlong)(this->ManagedActiveHandles).ArrayNum * 0x10;
          for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x10) {
            if (*(FStreamableHandle **)pFVar9 == local_38.Object) goto LAB_14879b3b1;
          }
        }
        else {
LAB_14879b3b1:
          TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TSharedRef<FStreamableHandle,1>_>(param_2,&local_38);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        pFVar13 = pFVar13 + 8;
      } while( true );
    }
  }
  return false;
}

// GetAsyncLoadRequestIds @ 14879c2f0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FStreamableManager::GetAsyncLoadRequestIds
          (FStreamableManager *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSharedRef<FStreamableHandle,1> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FSoftObjectPath *pFVar11;
  uint uVar12;
  FSoftObjectPath *pFVar13;
  undefined1 local_res20 [8];
  uint local_78;
  longlong local_70;
  ForAnyElementType local_60;
  int local_58 [2];
  TSharedPtr<FStreamableHandle,1> local_50;
  
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  uVar12 = (param_1->Object->ChildHandles).ArrayNum + 1;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  iVar6 = 0;
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar12,&local_60,0,local_58 + 1);
    iVar6 = local_58[0];
  }
  local_50.Object = param_1->Object;
  local_50.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    iVar6 = local_58[0];
  }
  if ((local_60.Data <= &local_50) &&
     (&local_50 < (TSharedPtr<FStreamableHandle,1> *)(local_60.Data + (longlong)local_58[1] * 0x10))
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    iVar6 = local_58[0];
  }
  if (iVar6 == local_58[1]) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_60,local_58 + 1);
  }
  local_58[0] = iVar6 + 1;
  *(FStreamableHandle **)&local_60.Data[(longlong)iVar6 * 0x10].field_0x0 = local_50.Object;
  *(TReferenceControllerBase<1> **)(local_60.Data + (longlong)iVar6 * 0x10 + 8) =
       local_50.SharedReferenceCount.ReferenceController;
  local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_50.Object = (FStreamableHandle *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_78 = 0;
  if (0 < local_58[0]) {
    local_70 = 0;
    do {
      uVar12 = 0;
      if ((int)local_78 < local_58[0]) {
        uVar12 = ~local_78 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      lVar1 = *(longlong *)(local_60.Data + local_70);
      pTVar2 = *(TReferenceControllerBase<1> **)(local_60.Data + local_70 + 8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar1 != 0) {
        if ((&local_60 == (ForAnyElementType *)(lVar1 + 0xd0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        iVar6 = *(int *)(lVar1 + 0xd8);
        if (iVar6 != 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,iVar6,&local_60,local_58,local_58 + 1);
          ConstructItems<TSharedPtr<FStreamableHandle,1>,TSharedPtr<FStreamableHandle,1>,int>
                    (local_60.Data + (longlong)iVar7 * 0x10,
                     (TSharedPtr<FStreamableHandle,1> *)((ForAnyElementType *)(lVar1 + 0xd0))->Data,
                     iVar6);
        }
        iVar6 = *(int *)(lVar1 + 200);
        pFVar11 = *(FSoftObjectPath **)(lVar1 + 0xc0);
        pFVar13 = pFVar11 + iVar6;
        while( true ) {
          if (*(int *)(lVar1 + 200) != iVar6) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar11 == pFVar13) break;
          uVar12 = ::GetTypeHash(pFVar11);
          iVar7 = TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FSoftObjectPath>
                            ((TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
                              *)&this->StreamableItems,uVar12,pFVar11);
          if ((((iVar7 != -1) &&
               (lVar9 = (longlong)iVar7 * 0x30 + *(longlong *)&this->StreamableItems, lVar9 != 0))
              && (lVar9 = *(longlong *)(lVar9 + 0x20), lVar9 != 0)) &&
             (pFVar10 = (FScriptContainerElement *)(lVar9 + 0x28), *(int *)pFVar10 != -1)) {
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar3 <= pFVar10) &&
                (pFVar10 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar8;
            }
            iVar7 = __return_storage_ptr__->ArrayNum;
            if (iVar7 == __return_storage_ptr__->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar7 + 1;
            *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
                 *(int *)pFVar10;
          }
          pFVar11 = pFVar11 + 1;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      local_70 = local_70 + 0x10;
      local_78 = local_78 + 1;
    } while ((int)local_78 < local_58[0]);
  }
  DestructItems<TSharedPtr<FStreamableHandle,1>,int>
            ((TSharedPtr<FStreamableHandle,1> *)local_60.Data,local_58[0]);
  if ((TSharedPtr<FStreamableHandle,1> *)local_60.Data != (TSharedPtr<FStreamableHandle,1> *)0x0) {
    FMemory::Free(local_60.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetManagerName @ 1487a1190

FString * __thiscall FStreamableManager::GetManagerName(FStreamableManager *this)

{
  return &this->ManagerName;
}

// GetReferencerName @ 1487a3730

FString * __thiscall
FStreamableManager::GetReferencerName(FStreamableManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->ManagerName);
  return __return_storage_ptr__;
}

// GetReferencerPropertyName @ 1487a3760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStreamableManager::GetReferencerPropertyName
          (FStreamableManager *this,UObject *param_1,FString *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  void *pvVar7;
  longlong lVar8;
  FFileAndLineAdapter *this_00;
  ulong64 uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  undefined1 auStack_8f8 [32];
  undefined8 local_8d8;
  longlong local_8d0;
  int local_8c8;
  FFileAndLineAdapter local_8c0;
  FFileAndLineAdapter local_8b8;
  TMap<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
  *local_8b0;
  int iStack_8a8;
  uint uStack_8a4;
  undefined1 *local_8a0;
  undefined4 uStack_898;
  int iStack_894;
  int local_890;
  int iStack_88c;
  TMap<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
  *local_880;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_878;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_8f8;
  if ((!GStreamableStripDebugName) && (param_1 != (UObject *)0x0)) {
    iVar13 = 0;
    local_8b0 = &this->StreamableItems;
    iVar11 = *(int *)&(this->StreamableItems).field_0x28;
    local_8a0 = &(this->StreamableItems).field_0x10;
    iStack_8a8 = 0;
    uStack_8a4 = 1;
    local_890 = iStack_8a8;
    iStack_894 = 0;
    if (iVar11 != 0) {
      puVar12 = *(uint **)&(this->StreamableItems).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_8a0;
      }
      uVar2 = *puVar12;
      local_890 = iVar13;
      iStack_8a8 = iVar13;
      while (uVar2 == 0) {
        lVar8 = (longlong)iStack_8a8;
        local_890 = local_890 + 0x20;
        iStack_8a8 = iStack_8a8 + 1;
        iStack_894 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_8a8)
        goto LAB_1487a383e;
        uVar2 = puVar12[lVar8 + 1];
      }
      uStack_8a4 = -uVar2 & uVar2;
      uVar1 = (ulonglong)uStack_8a4 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_8c8 = (int)lVar8;
      iStack_894 = local_890 + -1 + local_8c8;
      if (iVar11 < iStack_894) {
        iStack_894 = iVar11;
      }
    }
LAB_1487a383e:
    uStack_898 = 0xffffffff;
    TStack_878._padding_ = CONCAT44(uStack_8a4,iStack_8a8);
    TStack_878.UnvisitedBitMask = 0xffffffff;
    TStack_878._28_4_ = iStack_894;
    TStack_878.BaseBitIndex = local_890;
    iStack_88c = iStack_894;
    local_880 = local_8b0;
    TStack_878.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_8a0;
    TStack_878.CurrentBitIndex = iStack_894;
    if (iStack_894 < iVar11) {
      do {
        plVar3 = *(longlong **)
                  (*(longlong *)local_880 + 0x20 + (longlong)TStack_878.CurrentBitIndex * 0x30);
        if ((plVar3 == (longlong *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Existing",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                               ,0x651,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((UObject *)*plVar3 != (UObject *)0x0 && (UObject *)*plVar3 == param_1) {
          local_858.Base = local_838;
          local_858.CurPos = local_838;
          local_858.End = (wchar_t *)local_38;
          local_858.bIsDynamic = false;
          local_858.bIsExternal = false;
          if ((int)plVar3[2] < 1) {
            if (0 < (int)plVar3[4]) {
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"Loading[1/%d]:");
              if ((int)plVar3[4] < 1) {
                local_8d8 = 0;
                local_8d0 = (longlong)(int)plVar3[4];
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
              }
              iVar11 = *(int *)(*(longlong *)plVar3[3] + 0x60);
              pvVar7 = *(void **)(*(longlong *)plVar3[3] + 0x58);
              iVar10 = iVar11 + -1;
              if (iVar11 == 0) {
                iVar10 = iVar13;
              }
              uVar9 = (ulong64)iVar10;
              if (local_858.End < local_858.CurPos + uVar9) {
                TStringBuilderBase<wchar_t>::Extend(&local_858,uVar9);
              }
              if (iVar10 != 0) {
                pvVar7 = FGenericPlatformString::Memcpy(local_858.CurPos,pvVar7,uVar9 * 2);
                local_858.CurPos = (wchar_t *)((longlong)pvVar7 + uVar9 * 2);
              }
              if (local_858.End < local_858.CurPos + 3) {
                TStringBuilderBase<wchar_t>::Extend(&local_858,3);
              }
              pvVar7 = FGenericPlatformString::Memcpy(local_858.CurPos,L" @ ",6);
              local_858.CurPos = (wchar_t *)((longlong)pvVar7 + 6);
              if ((int)plVar3[4] < 1) {
                local_8d8 = 0;
                local_8d0 = (longlong)(int)plVar3[4];
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
              }
              local_8b8.Location = (FSourceLocation *)(*(longlong *)plVar3[3] + 0x68);
              this_00 = &local_8b8;
              goto LAB_1487a3b6d;
            }
          }
          else {
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"Active[1/%d]:");
            if ((int)plVar3[2] < 1) {
              local_8d8 = 0;
              local_8d0 = (longlong)(int)plVar3[2];
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            iVar11 = *(int *)(*(longlong *)plVar3[1] + 0x60);
            pvVar7 = *(void **)(*(longlong *)plVar3[1] + 0x58);
            iVar10 = iVar11 + -1;
            if (iVar11 == 0) {
              iVar10 = iVar13;
            }
            uVar9 = (ulong64)iVar10;
            if (local_858.End < local_858.CurPos + uVar9) {
              TStringBuilderBase<wchar_t>::Extend(&local_858,uVar9);
            }
            if (iVar10 != 0) {
              pvVar7 = FGenericPlatformString::Memcpy(local_858.CurPos,pvVar7,uVar9 * 2);
              local_858.CurPos = (wchar_t *)((longlong)pvVar7 + uVar9 * 2);
            }
            if (local_858.End < local_858.CurPos + 3) {
              TStringBuilderBase<wchar_t>::Extend(&local_858,3);
            }
            pvVar7 = FGenericPlatformString::Memcpy(local_858.CurPos,L" @ ",6);
            local_858.CurPos = (wchar_t *)((longlong)pvVar7 + 6);
            if ((int)plVar3[2] < 1) {
              local_8d8 = 0;
              local_8d0 = (longlong)(int)plVar3[2];
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            local_8c0.Location = (FSourceLocation *)(*(longlong *)plVar3[1] + 0x68);
            this_00 = &local_8c0;
LAB_1487a3b6d:
            UE::SourceLocation::FFileAndLineAdapter::AppendString(this_00,&local_858);
          }
          iVar11 = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
          if (0 < iVar11) {
            ::FString::AssignRange(param_2,local_858.Base,iVar11);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
            return true;
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
        }
        TStack_878.UnvisitedBitMask = TStack_878.UnvisitedBitMask & ~TStack_878._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_878);
      } while (TStack_878.CurrentBitIndex < (TStack_878.Array)->NumBits);
    }
  }
  return false;
}

// GetStreamed @ 1487a62b0

UObject * __thiscall
FStreamableManager::GetStreamed(FStreamableManager *this,FSoftObjectPath *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FStreamable *pFVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                       ,0x91a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  pFVar4 = FindStreamable(this,param_1);
  if (pFVar4 != (FStreamable *)0x0) {
    return (pFVar4->Target).field0_0x0.DebugPtr;
  }
  return (UObject *)0x0;
}

// HandleLoadedRedirector @ 1487aa130

/* WARNING: Enum "Type": Some values do not have unique names */

FSoftObjectPath * __thiscall
FStreamableManager::HandleLoadedRedirector
          (FStreamableManager *this,FSoftObjectPath *__return_storage_ptr__,
          UObjectRedirector *param_1,FSoftObjectPath *param_2,FStreamable *param_3)

{
  UObjectBaseUtility *this_00;
  UObject *pUVar1;
  FName FVar2;
  FName FVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FStreamable *pFVar7;
  FStreamable *pFVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  UClass *pUVar14;
  FString *pFVar15;
  int iVar16;
  undefined1 *puVar17;
  size_t _Size;
  longlong lVar18;
  longlong *plVar19;
  FSoftObjectPath *pFVar20;
  TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *pTVar21;
  TArray<FStreamableHandle_*,TSizedDefaultAllocator<32>_> *pTVar22;
  FSoftObjectPath local_100;
  TPairInitializer<FSoftObjectPath_const_&,FStreamableManager::FRedirectedPath_&&> local_e0;
  FName FStack_d0;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  UObjectRedirector *local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FSoftObjectPath *local_98;
  FRedirectedPath **local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  FString local_38;
  
  if (5 < (byte)LogStreamableManager._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_88,(UObject *)0x0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if ((param_3->Target).field0_0x0.DebugPtr == (UObject *)0x0) {
LAB_1487aa2c7:
    pFVar15 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)(param_3->Target).field0_0x0.DebugPtr,&local_48,
                         (UObject *)0x0);
    local_100.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_100.AssetPath.PackageName.Number = 0;
    local_100.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_100.AssetPath.AssetName.Number = 0;
    local_100.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.SubPathString.Data.ArrayNum = 0;
    local_100.SubPathString.Data.ArrayMax = 0;
    local_a8 = (pFVar15->Data).AllocatorInstance.Data;
    iVar16 = (pFVar15->Data).ArrayNum;
    iStack_a0 = iVar16 + -1;
    if (iVar16 == 0) {
      iStack_a0 = 0;
    }
    local_58._12_4_ = uStack_9c;
    local_58.Size = iStack_a0;
    local_58.DataPtr = (wchar_t *)local_a8;
    FSoftObjectPath::SetPath(&local_100,&local_58);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (5 < (byte)LogStreamableManager._0_1_) {
      FSoftObjectPath::ToString(&local_100,&local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    _Size = (size_t)local_100.SubPathString.Data.ArrayNum;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_e0.Key = (FSoftObjectPath *)local_100.SubPathString.Data.AllocatorInstance.Data;
    local_c0 = local_100.SubPathString.Data.ArrayNum;
    local_e0.Value = (FRedirectedPath *)local_100.AssetPath.PackageName;
    FStack_d0 = local_100.AssetPath.AssetName;
    if (local_100.SubPathString.Data.ArrayNum == 0) {
      local_bc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_100.SubPathString.Data.ArrayNum,0,&local_c8,
                 local_100.SubPathString.Data.ArrayNum,&local_bc);
      memcpy(local_c8.Data,local_e0.Key,_Size);
    }
    local_b8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UObjectRedirector *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_90 = &local_e0.Value;
    local_98 = param_2;
    TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FSoftObjectPath_const_&,FStreamableManager::FRedirectedPath_&&>_>
              ((TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
                *)&this->StreamableRedirects,&local_e0,(bool *)&local_98);
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
    if (*(int *)&(this->StreamableItems).field_0x8 != *(int *)&(this->StreamableItems).field_0x34) {
      FVar2 = (param_2->AssetPath).AssetName;
      uVar11 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      FVar3 = (param_2->AssetPath).PackageName;
      uVar12 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      uVar12 = uVar12 + FVar3.Number;
      iVar16 = (param_2->SubPathString).Data.ArrayNum;
      uVar12 = uVar12 * 0x40 + uVar11 + FVar2.Number + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
      if (1 < iVar16) {
        uVar11 = FCrc::Strihash_DEPRECATED<char8_t>
                           (iVar16 + -1,
                            (uchar *)(param_2->SubPathString).Data.AllocatorInstance.Data);
        uVar12 = uVar12 ^ uVar11 + 0x9e3779b9 + uVar12 * 0x40 + (uVar12 >> 2);
      }
      puVar17 = *(undefined1 **)&(this->StreamableItems).field_0x40;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->StreamableItems).field_0x38;
      }
      uVar11 = *(uint *)(puVar17 +
                        ((longlong)*(int *)&(this->StreamableItems).field_0x48 - 1U &
                        (longlong)(int)uVar12) * 4);
      while (uVar11 != 0xffffffff) {
        pFVar20 = (FSoftObjectPath *)
                  ((longlong)(int)uVar11 * 0x30 + *(longlong *)&this->StreamableItems);
        bVar10 = FSoftObjectPath::operator==(pFVar20,param_2);
        if (bVar10) {
          TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
                           *)&this->StreamableItems,uVar11);
          break;
        }
        uVar11 = pFVar20[1].AssetPath.AssetName.ComparisonIndex.Value;
      }
    }
    FVar3 = local_100.AssetPath.AssetName;
    uVar11 = ::GetTypeHash(local_100.AssetPath.AssetName.ComparisonIndex.Value);
    FVar2 = local_100.AssetPath.PackageName;
    uVar12 = ::GetTypeHash(local_100.AssetPath.PackageName.ComparisonIndex.Value);
    uVar12 = uVar12 + FVar2.Number;
    uVar12 = uVar12 * 0x40 + -0x61c88647 + uVar11 + FVar3.Number + (uVar12 >> 2) ^ uVar12;
    if (1 < local_100.SubPathString.Data.ArrayNum) {
      iVar16 = local_100.SubPathString.Data.ArrayNum + -1;
      if (local_100.SubPathString.Data.ArrayNum == 0) {
        iVar16 = 0;
      }
      uVar11 = FCrc::Strihash_DEPRECATED<char8_t>
                         (iVar16,(uchar *)local_100.SubPathString.Data.AllocatorInstance.Data);
      uVar12 = uVar12 ^ uVar11 + uVar12 * 0x40 + -0x61c88647 + (uVar12 >> 2);
    }
    if (*(int *)&(this->StreamableItems).field_0x8 != *(int *)&(this->StreamableItems).field_0x34) {
      puVar17 = *(undefined1 **)&(this->StreamableItems).field_0x40;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->StreamableItems).field_0x38;
      }
      iVar16 = *(int *)(puVar17 +
                       (ulonglong)(*(int *)&(this->StreamableItems).field_0x48 - 1U & uVar12) * 4);
      while (iVar16 != -1) {
        lVar18 = (longlong)iVar16 * 0x30;
        bVar10 = FSoftObjectPath::operator==
                           ((FSoftObjectPath *)(*(longlong *)&this->StreamableItems + lVar18),
                            &local_100);
        pFVar7 = param_3;
        if (bVar10) {
          lVar18 = lVar18 + *(longlong *)&this->StreamableItems;
          plVar19 = (longlong *)(lVar18 + 0x20);
          if (lVar18 == 0) {
            plVar19 = (longlong *)0x0;
          }
          if (plVar19 != (longlong *)0x0) {
            lVar18 = *plVar19;
            pTVar21 = &param_3->LoadingHandles;
            if ((pTVar21 ==
                 (TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *)
                 (lVar18 + 0x18)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x986,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              pFVar20 = (FSoftObjectPath *)(*pcVar6)();
              return pFVar20;
            }
            iVar16 = *(int *)(lVar18 + 0x20);
            if (iVar16 != 0) {
              iVar13 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10,8,iVar16,&pTVar21->AllocatorInstance,
                                  &(pFVar7->LoadingHandles).ArrayNum,
                                  &(pFVar7->LoadingHandles).ArrayMax);
              memmove((pTVar21->AllocatorInstance).Data + (longlong)iVar13 * 0x10,
                      *(void **)(lVar18 + 0x18),(longlong)iVar16 << 4);
              *(undefined4 *)(lVar18 + 0x20) = 0;
            }
            pFVar7 = param_3;
            lVar18 = *plVar19;
            pTVar22 = &param_3->ActiveHandles;
            if ((pTVar22 == (TArray<FStreamableHandle_*,TSizedDefaultAllocator<32>_> *)(lVar18 + 8))
               && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)this != (void*)&Source",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x986,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              pFVar20 = (FSoftObjectPath *)(*pcVar6)();
              return pFVar20;
            }
            iVar16 = *(int *)(lVar18 + 0x10);
            if (iVar16 != 0) {
              iVar13 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (8,8,iVar16,&pTVar22->AllocatorInstance,
                                  &(pFVar7->ActiveHandles).ArrayNum,
                                  &(pFVar7->ActiveHandles).ArrayMax);
              memmove((pTVar22->AllocatorInstance).Data + (longlong)iVar13 * 8,
                      *(void **)(lVar18 + 8),(longlong)iVar16 << 3);
              *(undefined4 *)(lVar18 + 0x10) = 0;
            }
            pvVar4 = (void *)*plVar19;
            if (pvVar4 != (void *)0x0) {
              DestructItems<TSharedRef<FStreamableHandle,1>,int>
                        (*(TSharedRef<FStreamableHandle,1> **)((longlong)pvVar4 + 0x18),
                         *(int *)((longlong)pvVar4 + 0x20));
              if (*(void **)((longlong)pvVar4 + 0x18) != (void *)0x0) {
                FMemory::Free(*(void **)((longlong)pvVar4 + 0x18));
              }
              if (*(void **)((longlong)pvVar4 + 8) != (void *)0x0) {
                FMemory::Free(*(void **)((longlong)pvVar4 + 8));
              }
              ::operator_delete(pvVar4,0x30);
            }
          }
          break;
        }
        iVar16 = *(int *)(lVar18 + 0x28 + *(longlong *)&this->StreamableItems);
      }
    }
    TMapBase<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
    ::Emplace<FSoftObjectPath_const_&,FStreamable_*_const_&>
              ((TMapBase<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
                *)&this->StreamableItems,&local_100,&param_3);
    FVar9.Data = local_100.SubPathString.Data.AllocatorInstance.Data;
    local_100.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->AssetPath).PackageName = local_100.AssetPath.PackageName;
    (__return_storage_ptr__->AssetPath).AssetName = local_100.AssetPath.AssetName;
    (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data = FVar9.Data;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = local_100.SubPathString.Data.ArrayNum;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = local_100.SubPathString.Data.ArrayMax;
    local_100.SubPathString.Data.ArrayNum = 0;
    local_100.SubPathString.Data.ArrayMax = 0;
  }
  else {
    do {
      pFVar7 = param_3;
      pUVar14 = UObjectRedirector::GetPrivateStaticClass();
      bVar10 = FObjectPtr::IsA((FObjectPtr *)pFVar7,pUVar14);
      pFVar8 = param_3;
      if ((!bVar10) ||
         (this_00 = (UObjectBaseUtility *)(pFVar7->Target).field0_0x0.DebugPtr,
         this_00 == (UObjectBaseUtility *)0x0)) goto LAB_1487aa2c7;
      pUVar1 = *(UObject **)(this_00 + 1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      (pFVar8->Target).field0_0x0.DebugPtr = pUVar1;
    } while ((param_3->Target).field0_0x0.DebugPtr != (UObject *)0x0);
    param_3->bLoadFailed = true;
    if (2 < (byte)LogStreamableManager._0_1_) {
      UObjectBaseUtility::GetPathName(this_00,&local_68,(UObject *)0x0);
      FSoftObjectPath::ToString(param_2,&local_78);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    FVar2 = (param_2->AssetPath).AssetName;
    (__return_storage_ptr__->AssetPath).PackageName = (param_2->AssetPath).PackageName;
    (__return_storage_ptr__->AssetPath).AssetName = FVar2;
    (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
         (param_2->SubPathString).Data.AllocatorInstance.Data;
    (param_2->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = (param_2->SubPathString).Data.ArrayNum;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = (param_2->SubPathString).Data.ArrayMax;
    (param_2->SubPathString).Data.ArrayNum = 0;
    (param_2->SubPathString).Data.ArrayMax = 0;
  }
  pFVar5 = (param_2->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// IsAsyncLoadComplete @ 1487aebf0

bool __thiscall
FStreamableManager::IsAsyncLoadComplete(FStreamableManager *this,FSoftObjectPath *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FStreamable *pFVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                       ,0x913,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar4 = FindStreamable(this,param_1);
  if ((pFVar4 != (FStreamable *)0x0) && (pFVar4->bAsyncLoadRequestOutstanding != false)) {
    return false;
  }
  return true;
}

// LoadSynchronous @ 1487afb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
FStreamableManager::LoadSynchronous
          (FStreamableManager *this,FSoftObjectPath *param_1,bool param_2,
          TSharedPtr<FStreamableHandle,1> *param_3,FSourceLocation *param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  longlong lVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FString *pFVar8;
  UObject *pUVar9;
  ulong64 uVar10;
  FWriteBuffer *pFVar11;
  size_t _Size;
  uint uVar12;
  undefined1 auStackY_978 [32];
  FStreamableManager *local_930;
  undefined8 local_928;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_920;
  TSharedPtr<FStreamableHandle,1> local_910;
  FSoftObjectPath local_900;
  FString local_8e0;
  FStreamableHandle *local_8d0;
  TReferenceControllerBase<1> *pTStack_8c8;
  FString local_8c0;
  TLogScope<1> local_8b0;
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [1035];
  wchar_t local_62 [5];
  ulonglong local_58;
  UObject *pUVar13;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_978;
  bVar5 = false;
  pUVar9 = (UObject *)0x0;
  uVar12 = 0;
  local_930 = this;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuStreamableManager_LoadSynchronousFields>
              (&local_8b0);
    local_898.bIsDynamic = false;
    local_898.bIsExternal = false;
    local_898.End = local_62;
    local_898.Base = local_878;
    local_898.CurPos = local_878;
    FSoftObjectPath::ToString(param_1,&local_898);
    if (local_898.End < local_898.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_898,1);
    }
    *local_898.CurPos = L'\0';
    wVar2 = *local_898.Base;
    pUVar13 = pUVar9;
    pwVar1 = local_898.Base;
    while (wVar2 != L'\0') {
      pwVar1 = pwVar1 + 1;
      uVar12 = (int)pUVar13 + 1;
      pUVar13 = (UObject *)(ulonglong)uVar12;
      wVar2 = *pwVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(0,local_898.Base,uVar12);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar7 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar7;
    if (lVar3 != local_8b0._8_8_) {
      *(longlong *)(lVar3 + 0x28) = lVar7;
    }
    *(undefined8 *)(local_8b0._8_8_ + 0x28) = *(undefined8 *)(local_8b0._8_8_ + 0x20);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
    bVar5 = true;
  }
  pFVar8 = ::FString::FString(&local_8e0,L"LoadSynchronous");
  local_900.SubPathString.Data.ArrayNum = (param_1->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_900.SubPathString.Data.ArrayNum;
  _Src = (param_1->SubPathString).Data.AllocatorInstance.Data;
  local_900.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_900.AssetPath.PackageName = (param_1->AssetPath).PackageName;
  local_900.AssetPath.AssetName = (param_1->AssetPath).AssetName;
  if (local_900.SubPathString.Data.ArrayNum == 0) {
    local_900.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_900.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_900.SubPathString,local_900.SubPathString.Data.ArrayNum,
               &local_900.SubPathString.Data.ArrayMax);
    memcpy(local_900.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
  }
  local_920.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_920.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_920.AllocatorInstance,1,&local_920.ArrayMax);
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>(local_920.AllocatorInstance.Data,&local_900,1)
  ;
  RequestSyncLoadInternal(local_930,&local_910,&local_920,param_2,pFVar8,param_4);
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_920.AllocatorInstance.Data,local_920.ArrayNum);
  if ((FSoftObjectPath *)local_920.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_920.AllocatorInstance.Data);
  }
  if (local_900.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_900.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
  }
  if (param_3 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
    if (local_910.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_910.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_910.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_8d0 = param_3->Object;
    pTStack_8c8 = (param_3->SharedReferenceCount).ReferenceController;
    param_3->Object = local_910.Object;
    (param_3->SharedReferenceCount).ReferenceController =
         local_910.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_8c8)
    ;
  }
  if (local_910.Object != (FStreamableHandle *)0x0) {
    if ((local_910.Object == (FStreamableHandle *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UObject *)(*pcVar4)();
      return pUVar9;
    }
    local_930 = (FStreamableManager *)0x0;
    local_928 = 0;
    FStreamableHandle::ForEachLoadedAsset<_FStreamableHandle::GetLoadedAssets_::__l2::<lambda_1>_>
              (local_910.Object,(TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&local_930);
    if ((int)local_928 < 1) {
      if (local_930 != (FStreamableManager *)0x0) {
        FMemory::Free(local_930);
      }
    }
    else {
      pUVar9 = (UObject *)local_930->_padding_;
      FMemory::Free(local_930);
      if (pUVar9 != (UObject *)0x0) goto LAB_1487afeae;
    }
    if (5 < (byte)LogStreamableManager._0_1_) {
      FSoftObjectPath::ToString(param_1,&local_8c0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
      if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_1487afeae:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_910.SharedReferenceCount.ReferenceController);
  if (bVar5) {
    uVar10 = UE::Trace::Private::TimeGetTimestamp();
    lVar7 = uVar10 - UE::Trace::Private::GStartCycle;
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar11 = *(FWriteBuffer **)(lVar3 + 0x20);
    if ((int)pFVar11 - *(int *)&pFVar11->Cursor < 8) {
      pFVar11 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar11->Cursor = lVar7 * 0x100 + 0x12;
    pFVar11->Cursor = pFVar11->Cursor + 8;
    pFVar11->Committed = pFVar11->Cursor;
  }
  return pUVar9;
}

// OnPreGarbageCollect @ 1487b1c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FStreamableManager::OnPreGarbageCollect(FStreamableManager *this)

{
  TMap<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
  *pTVar1;
  TMap<FSoftObjectPath,FStreamableManager::FRedirectedPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>_>
  *pTVar2;
  int iVar3;
  FStreamable *this_00;
  FScriptContainerElement *pFVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  bool *pbVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_2b28 [32];
  FName local_2b08;
  undefined1 auStack_2b00 [16];
  uint uStack_2af0;
  uint uStack_2aec;
  int local_2ae8;
  undefined4 uStack_2ae4;
  TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
  *pTStack_2ae0;
  TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
  *local_2ad8;
  char local_2ad0;
  char cStack_2acf;
  undefined1 local_2ac8 [16];
  ForAnyElementType FStack_2ab8;
  undefined1 local_2ab0 [16];
  int local_2aa0;
  undefined4 uStack_2a9c;
  TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
  *pTStack_2a98;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  local_2a90;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b28;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1545,"FStreamableManager::OnPreGarbageCollect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
               ,0x609);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1545);
  }
  pTVar1 = &this->StreamableItems;
  iVar5 = *(int *)&(this->StreamableRedirects).field_0x34;
  iVar3 = *(int *)&(this->StreamableRedirects).field_0x8;
  local_2a90.Elements._10240_8_ = 0;
  local_2a90.Elements._10248_4_ = 0;
  local_2a90.Elements._10252_4_ = 0x100;
  local_2a90.Elements._10288_8_ = 0;
  local_2a90.Elements._10296_8_ = ___xmm_00000000ffffffff0000010000000000;
  local_2a90.Elements._10304_8_ = _UNK_15066df58;
  local_2a90.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_2a90.HashSize = 0;
  TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)(local_2ac8 + 8),
             (TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
              *)pTVar1);
  iVar10 = 1;
  local_2ad0 = '\0';
  cStack_2acf = '\0';
  stack0xffffffffffffd508 = local_2ab0;
  local_2b08.ComparisonIndex.Value = local_2ac8._8_4_;
  local_2b08.Number = local_2ac8._12_4_;
  auStack_2b00._0_8_ = FStack_2ab8.Data;
  local_2ae8 = local_2aa0;
  uStack_2ae4 = uStack_2a9c;
  pTStack_2ae0 = pTStack_2a98;
  uVar6 = local_2ab0._8_8_ >> 0x20;
  uVar8 = local_2ab0._12_4_;
  local_2ad8 = (TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
                *)pTVar1;
  if ((int)uVar8 < *(int *)(local_2ab0._0_8_ + 0x18)) {
    do {
      pbVar9 = (bool *)((longlong)(int)uVar6 * 0x30 + *(longlong *)local_2b08);
      this_00 = *(FStreamable **)(pbVar9 + 0x20);
      if ((this_00->ActiveHandles).ArrayNum == 0) {
        if (iVar3 != iVar5) {
          TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::Emplace<FSoftObjectPath_const_&>(&local_2a90,(FSoftObjectPath *)local_2ac8,pbVar9);
        }
        FStreamable::FreeHandles(this_00);
        DestructItems<TSharedRef<FStreamableHandle,1>,int>
                  ((TSharedRef<FStreamableHandle,1> *)
                   (this_00->LoadingHandles).AllocatorInstance.Data,
                   (this_00->LoadingHandles).ArrayNum);
        pFVar4 = (this_00->LoadingHandles).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        pFVar4 = (this_00->ActiveHandles).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(this_00,0x30);
        TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_2ae0,uVar8);
        local_2ad0 = '\x01';
      }
      uStack_2af0 = uStack_2af0 & ~auStack_2b00._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2b00);
      uVar6 = (ulonglong)uStack_2aec;
      uVar8 = uStack_2aec;
    } while ((int)uStack_2aec < *(int *)(auStack_2b00._8_8_ + 0x18));
    if ((local_2ad0 != '\0') && (cStack_2acf != '\0')) {
      uVar8 = *(int *)&(local_2ad8->Elements).field_0x8 - *(int *)&(local_2ad8->Elements).field_0x34
      ;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_2ad8->HashSize < iVar5)) || (iVar5 < local_2ad8->HashSize)) {
        local_2ad8->HashSize = iVar5;
        TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
        ::Rehash(local_2ad8);
      }
    }
  }
  if (local_2a90.Elements._10248_4_ != local_2a90.Elements._10308_4_) {
    pTVar2 = &this->StreamableRedirects;
    TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)(local_2ac8 + 8),
               (TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
                *)pTVar2);
    local_2ad0 = '\0';
    cStack_2acf = '\0';
    stack0xffffffffffffd508 = local_2ab0;
    local_2b08.ComparisonIndex.Value = local_2ac8._8_4_;
    local_2b08.Number = local_2ac8._12_4_;
    auStack_2b00._0_8_ = FStack_2ab8.Data;
    local_2ae8 = local_2aa0;
    uStack_2ae4 = uStack_2a9c;
    pTStack_2ae0 = pTStack_2a98;
    uVar6 = local_2ab0._8_8_ >> 0x20;
    local_2ad8 = (TSet<TTuple<FSoftObjectPath,FStreamable_*>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>,FDefaultSetAllocator>
                  *)pTVar2;
    if (local_2ab0._12_4_ < *(int *)(local_2ab0._0_8_ + 0x18)) {
      do {
        lVar7 = (longlong)(int)uVar6 * 0x50 + *(longlong *)local_2b08;
        uVar8 = ::GetTypeHash((FSoftObjectPath *)(lVar7 + 0x20));
        iVar5 = TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                ::FindIndexByHash<FSoftObjectPath>
                          (&local_2a90,uVar8,(FSoftObjectPath *)(lVar7 + 0x20));
        if (iVar5 != -1) {
          TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
                           *)pTStack_2ae0,(int)uVar6);
          local_2ad0 = '\x01';
        }
        uStack_2af0 = uStack_2af0 & ~auStack_2b00._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2b00);
        uVar6 = (ulonglong)uStack_2aec;
      } while ((int)uStack_2aec < *(int *)(auStack_2b00._8_8_ + 0x18));
      if ((local_2ad0 != '\0') && (cStack_2acf != '\0')) {
        uVar8 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)&local_2ad8->Elements)->field_0x8 -
                *(int *)&((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)&local_2ad8->Elements)->field_0x34;
        if (3 < uVar8) {
          uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
          lVar7 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar10 = 1 << ((byte)lVar7 & 0x1f);
        }
        if (((0 < (int)uVar8) && (local_2ad8->HashSize < iVar10)) || (iVar10 < local_2ad8->HashSize)
           ) {
          local_2ad8->HashSize = iVar10;
          TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
                    *)local_2ad8);
        }
      }
    }
  }
  local_2a90.HashSize = 0;
  if (local_2a90.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2a90.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            (&local_2a90.Elements);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RemoveReferencedAsset @ 1487b9700

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FStreamableManager::RemoveReferencedAsset
          (FStreamableManager *this,FSoftObjectPath *param_1,
          TSharedRef<FStreamableHandle,1> *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  FStreamable *pFVar4;
  FStreamableHandle *local_res10;
  FSoftObjectPath *local_res20;
  
  if ((param_1->AssetPath).PackageName != (FName)0x0) {
    if (param_2->Object->OwningManager != this) {
      local_res10 = (FStreamableHandle *)param_1;
      `FStreamableManager::RemoveReferencedAsset'::__l2::<lambda_1>::operator()(&local_res10);
    }
    pFVar4 = FindStreamable(this,param_1);
    if (pFVar4 == (FStreamable *)0x0) {
      local_res10 = (FStreamableHandle *)param_1;
      bVar2 = `FStreamableManager::RemoveReferencedAsset'::__l6::<lambda_2>::operator()
                        (&local_res10);
      if (!bVar2) goto LAB_1487b97b5;
    }
    local_res10 = param_2->Object;
    iVar3 = TArray<FStreamableHandle_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                      (&pFVar4->ActiveHandles,&local_res10,No);
    if (iVar3 < 1) {
      local_res20 = param_1;
      `FStreamableManager::RemoveReferencedAsset'::__l8::<lambda_3>::operator()(&local_res20);
    }
    iVar3 = TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
                      (&pFVar4->LoadingHandles,param_2,Default);
    if ((0 < iVar3) &&
       (piVar1 = &param_2->Object->StreamablesLoading, *piVar1 = *piVar1 - iVar3,
       (pFVar4->LoadingHandles).ArrayNum == 0)) {
      pFVar4->bAsyncLoadRequestOutstanding = false;
    }
  }
LAB_1487b97b5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// RequestAsyncLoad @ 1487becf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::RequestAsyncLoad
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FStreamableAsyncLoadParams *param_1,FString *param_2,FSourceLocation *param_3)

{
  int *piVar1;
  TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<FStreamableHandle,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FOnDemandInternalContentHandle *pFVar5;
  FDownloadContext *this_00;
  longlong lVar6;
  code *pcVar7;
  FStreamableHandle *pFVar8;
  FStreamableHandle *pFVar9;
  FSharedReferencer<1> FVar10;
  FStreamableManager *this_01;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  TSharedPtr<FStreamableHandle,1> *pTVar14;
  FString *pFVar15;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar16;
  FOnDemandContentHandle *pFVar17;
  FDownloadContext *this_02;
  TUniquePtr<UE::StreamableManager::Private::FDownloadContext,TDefaultDelete<UE::StreamableManager::Private::FDownloadContext>_>
  *pTVar18;
  int iVar19;
  ForAnyElementType FVar20;
  ulonglong uVar21;
  uint uVar22;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar23;
  FSoftObjectPath *pFVar24;
  FScriptContainerElement *pFVar25;
  int iVar26;
  ulong64 uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ForElementType<unsigned_int> FVar30;
  FSoftObjectPath *pFVar31;
  undefined1 auStackY_268 [32];
  TSharedRef<FStreamableHandle,1> local_218;
  undefined1 local_208 [4];
  FLLMScope local_204;
  FPrivateToken local_200 [8];
  TSharedPtr<FStreamableHandle,1> *local_1f8;
  FString local_1f0;
  FMemScope local_1e0;
  uint local_1d8;
  uint uStack_1d4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d0;
  undefined4 local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  FOnDemandContentHandle local_1b8;
  FStreamableAsyncLoadParams *local_1a8;
  FString *local_1a0;
  FStreamableManager *local_198;
  undefined4 local_190;
  int local_18c;
  undefined1 local_188 [32];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  FString local_130;
  FString local_120;
  FOnDemandInternalContentHandle *local_110;
  TReferenceControllerBase<1> *pTStack_108;
  TStringView<wchar_t> local_f8;
  FOnDemandContentHandle local_e8;
  FOnDemandInternalContentHandle *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  TSharedRef<FStreamableHandle,1> local_c8;
  FName local_b8;
  FName FStack_b0;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1f8 = __return_storage_ptr__;
  local_1a8 = param_1;
  local_1a0 = param_2;
  local_198 = this;
  FLLMScope::FLLMScope(&local_204,StreamingManager,false,None,Default,true);
  FMemScope::FMemScope(&local_1e0,StreamingManager,true);
  MakeShared<FStreamableHandle,1,FStreamableHandle::FPrivateToken,UE::FSourceLocation>
            (&local_218,local_200,param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_218.Object)->CompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->OnComplete);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_218.Object)->CancelDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->OnCancel);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_218.Object)->UpdateDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->OnUpdate);
  pFVar8 = local_218.Object;
  uVar21 = 0;
  (local_218.Object)->OwningManager = this;
  pTVar16 = &(local_218.Object)->RequestedAssets;
  if ((FStreamableAsyncLoadParams *)pTVar16 != param_1) {
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)(pTVar16->AllocatorInstance).Data,
               ((local_218.Object)->RequestedAssets).ArrayNum);
    pFVar25 = (pTVar16->AllocatorInstance).Data;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    (pTVar16->AllocatorInstance).Data = (param_1->TargetsToStream).AllocatorInstance.Data;
    (param_1->TargetsToStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->RequestedAssets).ArrayNum = (param_1->TargetsToStream).ArrayNum;
    (pFVar8->RequestedAssets).ArrayMax = (param_1->TargetsToStream).ArrayMax;
    (param_1->TargetsToStream).ArrayNum = 0;
    (param_1->TargetsToStream).ArrayMax = 0;
  }
  pFVar8 = local_218.Object;
  if ((GStreamableStripDebugName == false) &&
     (pFVar15 = &(local_218.Object)->DebugName, pFVar15 != param_2)) {
    pFVar25 = (pFVar15->Data).AllocatorInstance.Data;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    (pFVar15->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->DebugName).Data.ArrayNum = (param_2->Data).ArrayNum;
    (pFVar8->DebugName).Data.ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  (local_218.Object)->Priority = param_1->Priority;
  uVar12 = ((local_218.Object)->RequestedAssets).ArrayNum;
  uVar27 = (ulong64)(int)uVar12;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if (uVar12 == 0) goto LAB_1487bf0f8;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar27);
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar12);
  uVar22 = 1;
  if (3 < uVar12) {
    uVar28 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_190 = (undefined4)lVar6;
    uVar22 = 1 << ((byte)lVar6 & 0x1f);
  }
  if ((local_60 != 0) && ((int)uVar22 <= (int)local_60)) goto LAB_1487bf0f8;
  local_60 = uVar22;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar22 != 0) {
    uVar12 = uVar22;
    if (uVar22 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_1487bef38;
      }
    }
    else {
LAB_1487bef38:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar12,4);
    }
    if (0 < (int)uVar22) {
      uVar29 = (ulonglong)uVar22;
      uVar28 = uVar21;
      do {
        FVar20.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_68.Data;
        }
        uVar13 = uVar28 & (longlong)(int)uVar22 - 1U;
        uVar28 = uVar28 + 1;
        *(undefined4 *)(FVar20.Data + uVar13 * 4) = 0xffffffff;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_1d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    local_1d8 = 0;
    uStack_1d4 = 1;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    if (local_80 != 0) {
      FVar30 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar30 = local_88;
      }
      uVar12 = *(uint *)FVar30;
      uVar28 = uVar21;
      while (uVar12 == 0) {
        uStack_1c0 = (int)uVar28 + 0x20;
        uVar28 = (ulonglong)uStack_1c0;
        iVar19 = (int)uVar21;
        local_1d8 = iVar19 + 1;
        uVar21 = (ulonglong)local_1d8;
        if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < (int)local_1d8)
        goto LAB_1487bf04c;
        uVar12 = ((uint *)((longlong)FVar30 + 4))[iVar19];
      }
      uStack_1d4 = -uVar12 & uVar12;
      uVar21 = (ulonglong)uStack_1d4 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_18c = (int)lVar6;
      uStack_1c4 = local_18c + -1 + uStack_1c0;
      uVar21 = (ulonglong)uStack_1c4;
      if ((int)local_80 < (int)uStack_1c4) {
LAB_1487bf04c:
        uVar21 = (ulonglong)local_80;
        uStack_1c4 = local_80;
      }
    }
    local_1c8 = 0xffffffff;
    local_188._24_8_ = local_a8;
    local_168._padding_ = CONCAT44(uStack_1d4,local_1d8);
    local_168.CurrentBitIndex = uStack_1c4;
    local_168.UnvisitedBitMask = 0xffffffff;
    local_168._28_4_ = uStack_1bc;
    local_168.BaseBitIndex = uStack_1c0;
    local_168.Array = pTStack_1d0;
    if ((int)uVar21 < (int)local_80) {
      do {
        pFVar31 = (FSoftObjectPath *)(*(longlong *)local_188._24_8_ + (longlong)(int)uVar21 * 0x28);
        uVar12 = ::GetTypeHash(pFVar31);
        uVar12 = local_60 - 1 & uVar12;
        pFVar31[1].AssetPath.PackageName.Number = uVar12;
        FVar20.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_68.Data;
        }
        uVar28 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar12;
        pFVar31[1].AssetPath.PackageName.ComparisonIndex.Value = *(uint *)(FVar20.Data + uVar28 * 4)
        ;
        *(int *)(FVar20.Data + uVar28 * 4) = (int)uVar21;
        local_168.UnvisitedBitMask = local_168.UnvisitedBitMask & ~local_168._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
        uVar21 = (ulonglong)(uint)local_168.CurrentBitIndex;
      } while (local_168.CurrentBitIndex < (local_168.Array)->NumBits);
    }
  }
LAB_1487bf0f8:
  pFVar8 = local_218.Object;
  iVar19 = ((local_218.Object)->RequestedAssets).ArrayNum;
  pFVar31 = (FSoftObjectPath *)((local_218.Object)->RequestedAssets).AllocatorInstance.Data;
  pFVar24 = pFVar31 + iVar19;
  while( true ) {
    if ((pFVar8->RequestedAssets).ArrayNum != iVar19) {
      local_208[0] = 0;
      `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_208);
    }
    pFVar9 = local_218.Object;
    iVar26 = (int)uVar27;
    if (pFVar31 == pFVar24) break;
    if ((pFVar31->AssetPath).PackageName == (FName)0x0) {
      uVar27 = (ulong64)(iVar26 - 1);
      pFVar31 = pFVar31 + 1;
    }
    else {
      local_b8 = (pFVar31->AssetPath).PackageName;
      FStack_b0 = (pFVar31->AssetPath).AssetName;
      bVar11 = FPackageName::IsShortPackageName(local_b8);
      if (bVar11) {
        if (1 < (byte)LogStreamableManager._0_1_) {
          FSoftObjectPath::ToString(pFVar31,&local_130);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager)
          ;
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
LAB_1487bf1e2:
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_218.Object)->CancelDelegate)
        ;
        FStreamableHandle::CancelHandle(local_218.Object);
        local_60 = 0;
        local_1f8->Object = (FStreamableHandle *)0x0;
        (local_1f8->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data);
        }
        TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_218.SharedReferenceCount.ReferenceController);
        FMemScope::~FMemScope(&local_1e0);
        FLLMScope::~FLLMScope(&local_204);
        pFVar25 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar25 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar25);
        }
        return local_1f8;
      }
      TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
      Emplace<FSoftObjectPath_const_&>
                ((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
                 local_a8,(FSoftObjectPath *)local_188,(bool *)pFVar31);
      pFVar31 = pFVar31 + 1;
    }
  }
  if (iVar26 != 0) {
    if (((local_218.Object)->RequestedAssets).ArrayNum != iVar26) {
      pTVar16 = &(local_218.Object)->RequestedAssets;
      local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.Data.ArrayNum = 0;
      local_1f0.Data.ArrayMax = 0;
      for (uVar12 = 0; (-1 < (int)uVar12 && ((int)uVar12 < (pFVar9->RequestedAssets).ArrayNum));
          uVar12 = uVar12 + 1) {
        if (((int)uVar12 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          pTVar14 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar7)();
          return pTVar14;
        }
        pFVar31 = (FSoftObjectPath *)
                  ((pTVar16->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x20);
        if (1 < local_1f0.Data.ArrayNum) {
          ::FString::AppendChars(&local_1f0,L", ",2);
        }
        pFVar15 = FSoftObjectPath::ToString(pFVar31,&local_120);
        iVar26 = (pFVar15->Data).ArrayNum;
        iVar19 = iVar26 + -1;
        if (iVar26 == 0) {
          iVar19 = 0;
        }
        ::FString::AppendChars(&local_1f0,(wchar_t *)(pFVar15->Data).AllocatorInstance.Data,iVar19);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if ((pFVar31->AssetPath).PackageName == (FName)0x0) {
          uVar22 = 0;
          if ((int)uVar12 < (pFVar9->RequestedAssets).ArrayNum) {
            uVar22 = ~uVar12 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            pTVar14 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar7)();
            return pTVar14;
          }
          pFVar25 = (pTVar16->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x20;
          if (*(void **)(pFVar25 + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar25 + 0x10));
          }
          iVar19 = (pFVar9->RequestedAssets).ArrayNum + ~uVar12;
          if (iVar19 != 0) {
            memmove(pFVar25,pFVar25 + 0x20,(longlong)iVar19 << 5);
          }
          piVar1 = &(pFVar9->RequestedAssets).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&pTVar16->AllocatorInstance,(pFVar9->RequestedAssets).ArrayNum,
                     &(pFVar9->RequestedAssets).ArrayMax);
          uVar12 = uVar12 - 1;
        }
      }
      if (3 < (byte)LogStreamableManager._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
      }
      param_1 = local_1a8;
      param_2 = local_1a0;
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        param_1 = local_1a8;
        param_2 = local_1a0;
      }
    }
    if (local_a8._8_4_ - local_74 != ((local_218.Object)->RequestedAssets).ArrayNum) {
      pTVar16 = TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Array
                          ((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>
                            *)local_a8,
                           (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(local_188 + 8));
      pFVar8 = local_218.Object;
      pTVar23 = &(local_218.Object)->RequestedAssets;
      if (pTVar23 != pTVar16) {
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)(pTVar23->AllocatorInstance).Data,
                   ((local_218.Object)->RequestedAssets).ArrayNum);
        pFVar25 = (pTVar23->AllocatorInstance).Data;
        if (pFVar25 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar25);
        }
        (pTVar23->AllocatorInstance).Data = (pTVar16->AllocatorInstance).Data;
        (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pFVar8->RequestedAssets).ArrayNum = pTVar16->ArrayNum;
        (pFVar8->RequestedAssets).ArrayMax = pTVar16->ArrayMax;
        pTVar16->ArrayNum = 0;
        pTVar16->ArrayMax = 0;
      }
      DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_188._8_8_,local_188._16_4_);
      if ((FName)local_188._8_8_ != (FName)0x0) {
        FMemory::Free((void *)local_188._8_8_);
      }
    }
    this_01 = local_198;
    if (param_1->bManageActiveHandle != false) {
      pTVar2 = &local_198->ManagedActiveHandles;
      pTVar3 = (TSharedRef<FStreamableHandle,1> *)(pTVar2->AllocatorInstance).Data;
      if (((pTVar3 <= &local_218) &&
          (&local_218 < pTVar3 + (local_198->ManagedActiveHandles).ArrayMax)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar7)();
        return pTVar14;
      }
      iVar19 = (this_01->ManagedActiveHandles).ArrayNum;
      piVar1 = &(this_01->ManagedActiveHandles).ArrayMax;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this_01->ManagedActiveHandles).ArrayNum = iVar19 + 1;
      pFVar25 = (pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
      *(FStreamableHandle **)pFVar25 = local_218.Object;
      *(TReferenceControllerBase<1> **)(pFVar25 + 8) =
           local_218.SharedReferenceCount.ReferenceController;
      if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    if ((param_1->DownloadParams).bIsSet == false) goto LAB_1487bf888;
    pTVar4 = (param_1->DownloadParams).TypedValue.CachePin.ContentHandle.Handle.SharedReferenceCount
             .ReferenceController;
    pFVar5 = (param_1->DownloadParams).TypedValue.CachePin.ContentHandle.Handle.Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_110 = ((local_218.Object)->DownloadCachePin).ContentHandle.Handle.Object;
    pTStack_108 = ((local_218.Object)->DownloadCachePin).ContentHandle.Handle.SharedReferenceCount.
                  ReferenceController;
    ((local_218.Object)->DownloadCachePin).ContentHandle.Handle.Object = pFVar5;
    ((local_218.Object)->DownloadCachePin).ContentHandle.Handle.SharedReferenceCount.
    ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_108)
    ;
    pFVar8 = local_218.Object;
    if (((local_218.Object)->DownloadCachePin).ContentHandle.Handle.Object ==
        (FOnDemandInternalContentHandle *)0x0) {
      UE::IoStore::FOnDemandContentHandle::FOnDemandContentHandle(&local_1b8);
      local_148 = (pFVar8->DebugName).Data.AllocatorInstance.Data;
      iVar19 = (pFVar8->DebugName).Data.ArrayNum;
      iStack_140 = iVar19 + -1;
      if (iVar19 == 0) {
        iStack_140 = 0;
      }
      local_f8._12_4_ = uStack_13c;
      local_f8.Size = iStack_140;
      local_f8.DataPtr = (wchar_t *)local_148;
      pFVar17 = UE::IoStore::FOnDemandContentHandle::Create(&local_e8,&local_f8);
      FVar10.ReferenceController = local_1b8.Handle.SharedReferenceCount.ReferenceController;
      local_1b8.Handle.SharedReferenceCount.ReferenceController =
           (pFVar17->Handle).SharedReferenceCount.ReferenceController;
      local_1b8.Handle.Object = (pFVar17->Handle).Object;
      if (local_1b8.Handle.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1b8.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1b8.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
      UE::IoStore::FOnDemandContentHandle::~FOnDemandContentHandle(&local_e8);
      if (local_1b8.Handle.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1b8.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1b8.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_d8 = ((local_218.Object)->DownloadCachePin).ContentHandle.Handle.Object;
      pTStack_d0 = ((local_218.Object)->DownloadCachePin).ContentHandle.Handle.SharedReferenceCount.
                   ReferenceController;
      ((local_218.Object)->DownloadCachePin).ContentHandle.Handle.Object = local_1b8.Handle.Object;
      ((local_218.Object)->DownloadCachePin).ContentHandle.Handle.SharedReferenceCount.
      ReferenceController = local_1b8.Handle.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_d0);
      UE::IoStore::FOnDemandContentHandle::~FOnDemandContentHandle(&local_1b8);
    }
    this_02 = ::operator_new(0x48);
    if (this_02 == (FDownloadContext *)0x0) {
      this_02 = (FDownloadContext *)0x0;
    }
    else {
      (this_02->InstallRequest)._padding_ = 0;
      (this_02->InstallRequest).IoStore.Object = (IOnDemandIoStore *)0x0;
      (this_02->InstallRequest).IoStore.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (this_02->InstallRequest).Request.Object = (FOnDemandInternalInstallRequest *)0x0;
      (this_02->InstallRequest).Request.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (this_02->InstallProgress).TotalContentSize = 0;
      (this_02->InstallProgress).TotalInstallSize = 0;
      (this_02->InstallProgress).CurrentInstallSize = 0;
      this_02->Priority = 0;
      this_02->bInstallSoftReferences = false;
      this_02->bDownloadOnly = false;
      *(undefined4 *)&this_02->field_0x44 = 0;
      UE::IoStore::FOnDemandInstallRequest::FOnDemandInstallRequest(&this_02->InstallRequest);
      (this_02->InstallProgress).TotalContentSize = 0;
      (this_02->InstallProgress).TotalInstallSize = 0;
      (this_02->InstallProgress).CurrentInstallSize = 0;
      this_02->Priority = 0;
      this_02->bInstallSoftReferences = false;
      this_02->bDownloadOnly = false;
    }
    pTVar18 = &(local_218.Object)->DownloadContext;
    if (pTVar18 ==
        (TUniquePtr<UE::StreamableManager::Private::FDownloadContext,TDefaultDelete<UE::StreamableManager::Private::FDownloadContext>_>
         *)&local_138) {
      if (this_02 != (FDownloadContext *)0x0) {
        UE::IoStore::FOnDemandInstallRequest::Cancel(&this_02->InstallRequest);
        UE::IoStore::FOnDemandInstallRequest::~FOnDemandInstallRequest(&this_02->InstallRequest);
        goto LAB_1487bf7b4;
      }
    }
    else {
      this_00 = pTVar18->Ptr;
      pTVar18->Ptr = this_02;
      if (this_00 != (FDownloadContext *)0x0) {
        UE::IoStore::FOnDemandInstallRequest::Cancel(&this_00->InstallRequest);
        UE::IoStore::FOnDemandInstallRequest::~FOnDemandInstallRequest(&this_00->InstallRequest);
        this_02 = this_00;
LAB_1487bf7b4:
        ::operator_delete(this_02,0x48);
      }
    }
    if (((param_1->DownloadParams).bIsSet == false) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar7)();
      return pTVar14;
    }
    (((local_218.Object)->DownloadContext).Ptr)->Priority =
         (param_1->DownloadParams).TypedValue.Priority;
    if (((param_1->DownloadParams).bIsSet == false) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar7)();
      return pTVar14;
    }
    (((local_218.Object)->DownloadContext).Ptr)->bInstallSoftReferences =
         (param_1->DownloadParams).TypedValue.bInstallSoftReferences;
    if (((param_1->DownloadParams).bIsSet == false) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar7)();
      return pTVar14;
    }
    (((local_218.Object)->DownloadContext).Ptr)->bDownloadOnly =
         (param_1->DownloadParams).TypedValue.bDownloadOnly;
LAB_1487bf888:
    if (param_1->bStartStalled == false) {
      local_c8.Object = local_218.Object;
      local_c8.SharedReferenceCount.ReferenceController =
           local_218.SharedReferenceCount.ReferenceController;
      if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      StartHandleRequests(this_01,&local_c8);
    }
    else {
      (local_218.Object)->bStalled = true;
    }
    pTVar14 = local_1f8;
    local_1f8->Object = local_218.Object;
    (local_1f8->SharedReferenceCount).ReferenceController =
         local_218.SharedReferenceCount.ReferenceController;
    if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60 = 0;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.SharedReferenceCount.ReferenceController);
    FMemScope::~FMemScope(&local_1e0);
    FLLMScope::~FLLMScope(&local_204);
    pFVar25 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar25 == (FScriptContainerElement *)0x0) {
      return pTVar14;
    }
    FMemory::Free(pFVar25);
    return pTVar14;
  }
  if (3 < (byte)LogStreamableManager._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
  }
  goto LAB_1487bf1e2;
}

// RequestSyncLoadInternal @ 1487bf960

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::RequestSyncLoadInternal
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,bool param_2,FString *param_3
          ,FSourceLocation *param_4)

{
  FStreamableHandle *this_00;
  code *pcVar1;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar2;
  bool bVar3;
  bool bVar4;
  TSharedPtr<FStreamableHandle,1> *pTVar5;
  FString *pFVar6;
  FError *pFVar7;
  Type local_res20 [2];
  undefined1 local_148 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  ForAnyElementType FStack_130;
  int local_128;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  ForAnyElementType FStack_118;
  int local_110;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  ForAnyElementType FStack_100;
  int local_f8;
  int local_f0;
  undefined2 local_ec;
  FOnDemandContentHandle local_e8;
  bool local_d0;
  FError local_c8;
  FString local_b8;
  TSharedPtr<FStreamableHandle,1> *local_a8;
  Type *local_a0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  source_location local_48;
  FString local_28;
  
  bVar3 = (*IsInAsyncLoadingThread)();
  if (bVar3) {
LAB_1487bf9ae:
    bVar3 = true;
  }
  else {
    bVar3 = IsEventDrivenLoaderEnabled();
    if (bVar3) goto LAB_1487bf9ae;
    bVar3 = (*IsAsyncLoading)();
    if (!bVar3) goto LAB_1487bf9ae;
    bVar3 = false;
  }
  this->bForceSynchronousLoads = bVar3;
  local_148._0_8_ = (FSoftObjectPath *)0x0;
  local_148._8_4_ = 0;
  local_148._12_4_ = 0;
  local_128 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_ec._0_1_ = false;
  local_ec._1_1_ = false;
  local_d0 = false;
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_130.Data = (FScriptContainerElement *)0x0;
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_118.Data = (FScriptContainerElement *)0x0;
  local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_100.Data = (FScriptContainerElement *)0x0;
  if ((TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)local_148 != param_1) {
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)0x0,0);
    if ((FSoftObjectPath *)local_148._0_8_ != (FSoftObjectPath *)0x0) {
      FMemory::Free((void *)local_148._0_8_);
    }
    local_148._0_8_ = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_148._8_4_ = param_1->ArrayNum;
    local_148._12_4_ = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  local_f0 = 100;
  local_ec._0_1_ = param_2;
  local_48._Line = (param_4->Impl)._Line;
  local_48._Column = (param_4->Impl)._Column;
  local_48._File = (param_4->Impl)._File;
  local_48._Function = (param_4->Impl)._Function;
  local_b8.Data.AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
  (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = (param_3->Data).ArrayNum;
  local_b8.Data.ArrayMax = (param_3->Data).ArrayMax;
  (param_3->Data).ArrayNum = 0;
  (param_3->Data).ArrayMax = 0;
  RequestAsyncLoad(this,__return_storage_ptr__,(FStreamableAsyncLoadParams *)local_148,&local_b8,
                   (FSourceLocation *)&local_48);
  this->bForceSynchronousLoads = false;
  if (__return_storage_ptr__->Object == (FStreamableHandle *)0x0) goto LAB_1487bfbea;
  local_res20[0] = FStreamableHandle::WaitUntilComplete(__return_storage_ptr__->Object,0.0,true);
  if (local_res20[0] == Complete) {
LAB_1487bfae0:
    bVar3 = false;
  }
  else {
    local_a0 = local_res20;
    local_a8 = __return_storage_ptr__;
    bVar3 = `FStreamableManager::RequestSyncLoadInternal'::__l5::<lambda_1>::operator()(&local_a8);
    if (bVar3) goto LAB_1487bfae0;
    bVar3 = true;
  }
  if (__return_storage_ptr__->Object == (FStreamableHandle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (__return_storage_ptr__->Object->bLoadCompleted == false) {
    param_4 = (FSourceLocation *)__return_storage_ptr__;
    bVar4 = `FStreamableManager::RequestSyncLoadInternal'::__l5::<lambda_2>::operator()(&param_4);
    if (bVar4) goto LAB_1487bfb35;
    bVar4 = true;
  }
  else {
LAB_1487bfb35:
    bVar4 = false;
  }
  if ((bVar3) || (bVar4)) {
    if (__return_storage_ptr__->Object == (FStreamableHandle *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    this_00 = __return_storage_ptr__->Object;
    if (this_00 == (FStreamableHandle *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    pFVar6 = ::FString::FString(&local_28,&__return_storage_ptr__->Object->DebugName);
    pFVar7 = UE::UnifiedError::StreamableManager::SyncLoadIncomplete::MakeError(&local_c8,pFVar6);
    FStreamableHandle::SetError(this_00,pFVar7);
    TVar2.Reference = local_c8.ErrorDetails.Reference;
    local_c8.ErrorCode = 0;
    local_c8.ModuleId = 0;
    if (local_c8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_c8.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar2.Reference + 0x10))();
      if (local_c8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_c8.ErrorDetails.Reference + 0x10))();
      }
    }
  }
LAB_1487bfbea:
  if (local_d0 != false) {
    UE::IoStore::FOnDemandContentHandle::~FOnDemandContentHandle(&local_e8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_108,(FWriteAccessScope *)&local_98);
  if ((local_f8 != 0) && (FStack_100.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_100.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_100,0,0,0x10);
    local_f8 = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (FStack_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_100.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_80);
  if ((local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_118.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_118,0,0,0x10);
    local_110 = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (FStack_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_118.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_68);
  if ((local_128 != 0) && (FStack_130.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_130.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_130,0,0,0x10);
    local_128 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_130.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_148._0_8_,local_148._8_4_);
  if ((FSoftObjectPath *)local_148._0_8_ != (FSoftObjectPath *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  return __return_storage_ptr__;
}

// ResolveRedirects @ 1487c02e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FSoftObjectPath * __thiscall
FStreamableManager::ResolveRedirects
          (FStreamableManager *this,FSoftObjectPath *__return_storage_ptr__,FSoftObjectPath *param_1
          )

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FSoftObjectPath *pFVar5;
  longlong lVar6;
  size_t _Size;
  FString local_48;
  FString local_38;
  FSoftObjectPath local_28;
  
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSoftObjectPath>
                    ((TSet<TTuple<FSoftObjectPath,FStreamableManager::FRedirectedPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamableManager::FRedirectedPath,0>,FDefaultSetAllocator>
                      *)&this->StreamableRedirects,uVar3,param_1);
  if (iVar4 != -1) {
    lVar6 = (longlong)iVar4 * 0x50 + *(longlong *)&(this->StreamableRedirects).field_0x0;
    pFVar5 = (FSoftObjectPath *)(lVar6 + 0x20);
    if (lVar6 == 0) {
      pFVar5 = (FSoftObjectPath *)0x0;
    }
    if (pFVar5 != (FSoftObjectPath *)0x0) {
      bVar2 = FSoftObjectPath::operator==(param_1,pFVar5);
      if ((bVar2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Target != Redir->NewPath",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                             ,0x9f9,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FSoftObjectPath *)(*pcVar1)();
        return pFVar5;
      }
      if (5 < (byte)LogStreamableManager._0_1_) {
        FSoftObjectPath::ToString(pFVar5,&local_38);
        FSoftObjectPath::ToString(param_1,&local_48);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      FSoftObjectPath::FSoftObjectPath(__return_storage_ptr__,pFVar5);
      return __return_storage_ptr__;
    }
  }
  local_28.SubPathString.Data.ArrayNum = (param_1->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_28.SubPathString.Data.ArrayNum;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.AssetPath.PackageName = (param_1->AssetPath).PackageName;
  local_28.AssetPath.AssetName = (param_1->AssetPath).AssetName;
  _Src = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (local_28.SubPathString.Data.ArrayNum == 0) {
    local_28.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_28.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_28.SubPathString,local_28.SubPathString.Data.ArrayNum,
               &local_28.SubPathString.Data.ArrayMax);
    memcpy(local_28.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
  }
  FSoftObjectPath::FixupCoreRedirects(&local_28);
  (__return_storage_ptr__->AssetPath).PackageName = local_28.AssetPath.PackageName;
  (__return_storage_ptr__->AssetPath).AssetName = local_28.AssetPath.AssetName;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       local_28.SubPathString.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = local_28.SubPathString.Data.ArrayNum;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = local_28.SubPathString.Data.ArrayMax;
  return __return_storage_ptr__;
}

// SetManagerName @ 1487c2b50

void __thiscall FStreamableManager::SetManagerName(FStreamableManager *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = &this->ManagerName;
  if (pFVar1 != param_1) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ManagerName).Data.ArrayNum = (param_1->Data).ArrayNum;
    (this->ManagerName).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ShouldStripDebugName @ 1487c3ec0

bool __cdecl FStreamableManager::ShouldStripDebugName(void)

{
  return GStreamableStripDebugName;
}

// StartHandleRequests @ 1487c4860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStreamableManager::StartHandleRequests
          (FStreamableManager *this,TSharedRef<FStreamableHandle,1> *param_1)

{
  int *piVar1;
  FDownloadContext *this_00;
  FStreamableHandle *pFVar2;
  TSharedRef<FStreamableHandle,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FStreamable *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FStreamableHandle *pFVar10;
  size_t sVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong _Size;
  wchar_t *_Str;
  undefined1 auStackY_4e8 [32];
  ForAnyElementType local_498;
  undefined8 local_490;
  FStreamable *local_488;
  FStreamableHandle *local_480;
  TSharedRef<FStreamableHandle,1> local_478;
  FStreamableManager *local_468;
  FRequestGroupScope local_458;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  this_00 = (param_1->Object->DownloadContext).Ptr;
  local_468 = this;
  if (this_00 != (FDownloadContext *)0x0) {
    UE::StreamableManager::Private::FDownloadContext::Start(this_00,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  param_1->Object->bLoadStarted = true;
  uVar16 = 0;
  if ((param_1->Object->DebugName).Data.ArrayNum == 0) {
    _Str = L"";
LAB_1487c4dfc:
    local_458.FormatArgsSize = 0;
    local_458.FormatString = L"StreamableManager - %s";
    sVar11 = wcslen(_Str);
    iVar8 = (int)sVar11 * 2 + 2;
    if (0xffff < iVar8) {
      iVar8 = 0xffff;
    }
    uVar15 = (longlong)iVar8 + 2;
    if (0x400 < uVar15) {
      uVar15 = 0;
      goto LAB_1487c4952;
    }
    local_458.FormatArgsBuffer[0] = '\x01';
    local_458.FormatArgsBuffer[1] = 0xc2;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) goto LAB_1487c4919;
    sVar11 = wcslen(_Str);
    uVar9 = (int)sVar11 * 2 + 2;
    uVar12 = (ulonglong)uVar9;
    if (0xffff < (int)uVar9) {
      uVar12 = 0xffff;
    }
    _Size = uVar12 & 0xffff;
    memcpy(local_458.FormatArgsBuffer + 2,_Str,_Size);
    if ((short)uVar12 == -1) {
      local_478.Object = (FStreamableHandle *)0x2e002e002e;
      *(undefined8 *)((longlong)&local_458 + (_Size - ((uint)_Size & 1)) + 4) = 0x2e002e002e;
    }
  }
  else {
    _Str = (wchar_t *)(param_1->Object->DebugName).Data.AllocatorInstance.Data;
    local_458.FormatArgsSize = 0;
    local_458.FormatString = L"StreamableManager - %s";
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_1487c4dfc;
    uVar15 = 4;
LAB_1487c4919:
    local_458.FormatArgsBuffer[0] = '\x01';
    local_458.FormatArgsBuffer[1] = 0xc2;
    local_458.FormatArgsBuffer[2] = '\0';
    local_458.FormatArgsBuffer[3] = '\0';
    _Size = 2;
  }
  if ((_Size + 2 != uVar15) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadBufferPtr - Buffer == FormatArgsSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                         ,0x44,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1487c4952:
  local_458.FormatArgsSize = (ushort)uVar15;
  FLoadTimeProfilerTrace::FRequestGroupScope::OutputBegin(&local_458);
  local_498.Data = (FScriptContainerElement *)0x0;
  local_490 = 0;
  uVar9 = (param_1->Object->RequestedAssets).ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&local_498,0,(int *)((longlong)&local_490 + 4));
  }
  pFVar10 = param_1->Object;
  uVar15 = uVar16;
  if (0 < (pFVar10->RequestedAssets).ArrayNum) {
    do {
      local_478.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_478.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_478.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_478.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar2 = param_1->Object;
      uVar14 = (uint)uVar15;
      iVar8 = pFVar2->Priority;
      uVar9 = 0;
      if ((int)uVar14 < (pFVar2->RequestedAssets).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      local_478.Object = pFVar10;
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_488 = StreamInternal(this,(FSoftObjectPath *)
                                      ((pFVar2->RequestedAssets).AllocatorInstance.Data +
                                      (longlong)(int)uVar14 * 0x20),iVar8,&local_478);
      if ((local_488 == (FStreamable *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Existing",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                             ,0x7d3,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((local_498.Data <= (FScriptContainerElement *)&local_488) &&
          ((FScriptContainerElement *)&local_488 < local_498.Data + (longlong)local_490._4_4_ * 8))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (int)local_490;
      if ((int)local_490 == local_490._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_498,(int *)((longlong)&local_490 + 4));
      }
      pFVar5 = local_488;
      local_490 = CONCAT44(local_490._4_4_,iVar8 + 1);
      *(FStreamable **)(local_498.Data + (longlong)iVar8 * 8) = local_488;
      local_480 = param_1->Object;
      pFVar13 = (local_488->ActiveHandles).AllocatorInstance.Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_480) &&
          ((FScriptContainerElement *)&local_480 <
           pFVar13 + (longlong)(local_488->ActiveHandles).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (pFVar5->ActiveHandles).ArrayNum;
      piVar1 = &(pFVar5->ActiveHandles).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pFVar5->ActiveHandles).AllocatorInstance,piVar1);
      }
      (pFVar5->ActiveHandles).ArrayNum = iVar8 + 1;
      *(FStreamableHandle **)((pFVar5->ActiveHandles).AllocatorInstance.Data + (longlong)iVar8 * 8)
           = local_480;
      pTVar3 = (TSharedRef<FStreamableHandle,1> *)(pFVar5->LoadingHandles).AllocatorInstance.Data;
      if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (pFVar5->LoadingHandles).ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (pFVar5->LoadingHandles).ArrayNum;
      piVar1 = &(pFVar5->LoadingHandles).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pFVar5->LoadingHandles).AllocatorInstance,piVar1);
      }
      (pFVar5->LoadingHandles).ArrayNum = iVar8 + 1;
      pFVar13 = (pFVar5->LoadingHandles).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      *(FStreamableHandle **)pFVar13 = param_1->Object;
      pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar13 + 8) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      piVar1 = &param_1->Object->StreamablesLoading;
      *piVar1 = *piVar1 + 1;
      pFVar10 = param_1->Object;
      uVar15 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < (pFVar10->RequestedAssets).ArrayNum);
  }
  uVar15 = uVar16;
  if (0 < (pFVar10->RequestedAssets).ArrayNum) {
    do {
      uVar14 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar14 < (int)local_490) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = *(FStreamable **)(local_498.Data + uVar15);
      if ((pFVar5 != (FStreamable *)0x0) &&
         (((pFVar5->Target).field0_0x0.DebugPtr != (UObject *)0x0 || (pFVar5->bLoadFailed != false))
         )) {
        pFVar5->bAsyncLoadRequestOutstanding = false;
        pFVar10 = param_1->Object;
        uVar9 = 0;
        if ((int)uVar14 < (pFVar10->RequestedAssets).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        CheckCompletedRequests
                  (local_468,
                   (FSoftObjectPath *)
                   ((pFVar10->RequestedAssets).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x20
                   ),pFVar5);
      }
      uVar16 = (ulonglong)(uVar14 + 1);
      uVar15 = uVar15 + 8;
    } while ((int)(uVar14 + 1) < (param_1->Object->RequestedAssets).ArrayNum);
  }
  if (local_498.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data);
  }
  FLoadTimeProfilerTrace::FRequestGroupScope::~FRequestGroupScope(&local_458);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StreamInternal @ 1487c5830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FStreamable * __thiscall
FStreamableManager::StreamInternal
          (FStreamableManager *this,FSoftObjectPath *param_1,int param_2,
          TSharedRef<FStreamableHandle,1> *param_3)

{
  ForAnyElementType *pFVar1;
  FUtf8String *pFVar2;
  IErrorDetails *pIVar3;
  FStreamableHandle *pFVar4;
  UObjectRedirector *pUVar5;
  UObjectBaseUtility *this_00;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FStreamable *pFVar13;
  FStreamable **ppFVar14;
  wchar_t *pwVar15;
  FString *pFVar16;
  FError *pFVar17;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar18;
  uint *puVar19;
  FTlsAutoCleanup *pFVar20;
  undefined8 *puVar21;
  ulong64 uVar22;
  UClass *pUVar23;
  UObject *pUVar24;
  FSoftObjectPath *pFVar25;
  int iVar26;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar27;
  int iVar28;
  undefined1 *puVar29;
  longlong lVar30;
  TReferenceControllerBase<1> *pTVar31;
  wchar_t *pwVar32;
  bool bVar33;
  size_t sVar34;
  TReferenceControllerBase<1> *local_res8;
  FError local_2d8;
  char local_2c8;
  FSoftObjectPath local_2c0;
  FError local_2a0;
  FString local_290;
  FPackagePath local_280;
  undefined8 local_270;
  FError local_268;
  FError local_258;
  FError local_248;
  FError local_238;
  FError local_228;
  undefined1 local_218 [8];
  FDelegateAllocation local_210;
  undefined1 local_200 [4];
  undefined1 local_1fc [4];
  FStreamable *local_1f8 [2];
  wchar_t *local_1e8;
  undefined8 uStack_1e0;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  code *local_1b8;
  TReferenceControllerBase<1> **local_1b0;
  FDestructionSentinel local_1a8;
  FDelegateAllocation *local_190;
  TStringView<wchar_t> local_188;
  FString local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FSoftObjectPath local_80;
  FSoftObjectPath local_60;
  
  bVar33 = false;
  local_res8 = (TReferenceControllerBase<1> *)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar9 = IsInGameThread();
  pwVar32 = L"";
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x67f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FStreamable *)(*pcVar6)();
    return pFVar13;
  }
  if (5 < (byte)LogStreamableManager._0_1_) {
    FSoftObjectPath::ToString(param_1,&local_100);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  ResolveRedirects(this,&local_2c0,param_1);
  FVar8 = local_2c0.AssetPath.AssetName;
  uVar10 = ::GetTypeHash(local_2c0.AssetPath.AssetName.ComparisonIndex.Value);
  FVar7 = local_2c0.AssetPath.PackageName;
  uVar11 = ::GetTypeHash(local_2c0.AssetPath.PackageName.ComparisonIndex.Value);
  uVar11 = uVar11 + FVar7.Number;
  uVar11 = uVar11 * 0x40 + uVar10 + FVar8.Number + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  if (1 < local_2c0.SubPathString.Data.ArrayNum) {
    if (local_2c0.SubPathString.Data.ArrayNum == 0) {
      iVar26 = 0;
    }
    else {
      iVar26 = local_2c0.SubPathString.Data.ArrayNum + -1;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<char8_t>
                       (iVar26,(uchar *)local_2c0.SubPathString.Data.AllocatorInstance.Data);
    uVar11 = uVar11 ^ uVar10 + uVar11 * 0x40 + -0x61c88647 + (uVar11 >> 2);
  }
  if (*(int *)&(this->StreamableItems).field_0x8 != *(int *)&(this->StreamableItems).field_0x34) {
    puVar29 = *(undefined1 **)&(this->StreamableItems).field_0x40;
    if (puVar29 == (undefined1 *)0x0) {
      puVar29 = &(this->StreamableItems).field_0x38;
    }
    iVar26 = *(int *)(puVar29 +
                     (ulonglong)(*(int *)&(this->StreamableItems).field_0x48 - 1U & uVar11) * 4);
    while (iVar26 != -1) {
      lVar30 = (longlong)iVar26 * 0x30;
      bVar9 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(*(longlong *)&this->StreamableItems + lVar30),
                         &local_2c0);
      if (bVar9) {
        lVar30 = *(longlong *)&this->StreamableItems + lVar30;
        if ((lVar30 != 0) &&
           (pFVar13 = *(FStreamable **)(lVar30 + 0x20), pFVar13 != (FStreamable *)0x0)) {
          if (pFVar13->bAsyncLoadRequestOutstanding != false) {
            if (5 < (byte)LogStreamableManager._0_1_) {
              FSoftObjectPath::ToString(&local_2c0,&local_f0);
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
              if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f0.Data.AllocatorInstance.Data);
              }
            }
            if (((pFVar13->Target).field0_0x0.DebugPtr != (UObject *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!Existing->Target",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                   ,0x689,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar13 = (FStreamable *)(*pcVar6)();
              return pFVar13;
            }
            if ((pFVar13->RequestId == -1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Existing->RequestId != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                   ,0x68a,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar13 = (FStreamable *)(*pcVar6)();
              return pFVar13;
            }
            bVar9 = (*IsAsyncLoading)();
            if ((!bVar9) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6594131278881097355>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                   ,0x68b,"IsAsyncLoading()"), bVar9)) {
              pcVar6 = (code *)swi(3);
              pFVar13 = (FStreamable *)(*pcVar6)();
              return pFVar13;
            }
          }
          if ((pFVar13->Target).field0_0x0.DebugPtr == (UObject *)0x0) goto LAB_1487c5a07;
          if (5 < (byte)LogStreamableManager._0_1_) {
            FSoftObjectPath::ToString(&local_2c0,&local_e0);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_1487c64e0;
        }
        break;
      }
      iVar26 = *(int *)(lVar30 + 0x28 + *(longlong *)&this->StreamableItems);
    }
  }
  local_1f8[0] = ::operator_new(0x30);
  if (local_1f8[0] != (FStreamable *)0x0) {
    local_1f8[0]->RequestId = -1;
    local_1f8[0]->bAsyncLoadRequestOutstanding = false;
    local_1f8[0]->bLoadFailed = false;
    *(undefined2 *)&local_1f8[0]->field_0x2e = 0;
    (local_1f8[0]->Target).field0_0x0.DebugPtr = (UObject *)0x0;
    (local_1f8[0]->ActiveHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_1f8[0]->ActiveHandles).ArrayNum = 0;
    (local_1f8[0]->ActiveHandles).ArrayMax = 0;
    (local_1f8[0]->LoadingHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_1f8[0]->LoadingHandles).ArrayNum = 0;
    (local_1f8[0]->LoadingHandles).ArrayMax = 0;
  }
  ppFVar14 = TMapBase<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
             ::Emplace<FSoftObjectPath_const_&,FStreamable_*>
                       ((TMapBase<FSoftObjectPath,FStreamable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FStreamable_*,0>_>
                         *)&this->StreamableItems,&local_2c0,local_1f8);
  pFVar13 = *ppFVar14;
LAB_1487c5a07:
  if (pFVar13->bAsyncLoadRequestOutstanding == false) {
    FindInMemory(this,&local_2c0,pFVar13,(UPackage *)0x0);
  }
  if (1 < GStreamableErrorOnRequest.Data.ArrayNum) {
    if ((param_3->Object->DebugName).Data.ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(param_3->Object->DebugName).Data.AllocatorInstance.Data;
    }
    pwVar15 = wcsstr(pwVar15,(wchar_t *)GStreamableErrorOnRequest.Data.AllocatorInstance.Data);
    if (pwVar15 != (wchar_t *)0x0) {
      local_2c8 = '\0';
      iVar12 = rand();
      iVar26 = iVar12 >> 0x1f;
      iVar12 = iVar12 / 0x1fff + iVar26;
      iVar28 = iVar12 - iVar26;
      if (iVar12 == iVar26) {
        pFVar16 = ::FString::FString(&local_a0,L"Unknown");
        pFVar17 = UE::UnifiedError::StreamableManager::PackageLoadFailed::MakeError
                            (&local_248,pFVar16);
        TVar27.Reference = local_2d8.ErrorDetails.Reference;
        if (pFVar17 != &local_2d8) {
          if ((local_2c8 != '\0') &&
             (local_2d8.ErrorCode = 0, local_2d8.ModuleId = 0,
             local_2d8.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_2d8.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar27.Reference + 0x10))();
            if (local_2d8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_2d8.ErrorDetails.Reference + 0x10))();
            }
          }
          UE::UnifiedError::FError::FError(&local_2d8,pFVar17);
          local_2c8 = '\x01';
        }
        TVar27.Reference = local_248.ErrorDetails.Reference;
        local_248.ErrorCode = 0;
        local_248.ModuleId = 0;
        if (local_248.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_248.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar27.Reference + 0x10))();
          TVar27.Reference = local_248.ErrorDetails.Reference;
LAB_1487c5e6f:
          if (TVar27.Reference != (IErrorDetails *)0x0) {
LAB_1487c5e74:
            (**(code **)((longlong)*TVar27.Reference + 0x10))();
          }
        }
      }
      else if (iVar28 == 1) {
        pFVar16 = ::FString::FString(&local_b0,L"Unknown");
        pFVar17 = UE::UnifiedError::StreamableManager::PackageLoadCanceled::MakeError
                            (&local_258,pFVar16);
        TVar27.Reference = local_2d8.ErrorDetails.Reference;
        if (pFVar17 != &local_2d8) {
          if ((local_2c8 != '\0') &&
             (local_2d8.ErrorCode = 0, local_2d8.ModuleId = 0,
             local_2d8.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_2d8.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar27.Reference + 0x10))();
            if (local_2d8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_2d8.ErrorDetails.Reference + 0x10))();
            }
          }
          UE::UnifiedError::FError::FError(&local_2d8,pFVar17);
          local_2c8 = '\x01';
        }
        TVar27.Reference = local_258.ErrorDetails.Reference;
        local_258.ErrorCode = 0;
        local_258.ModuleId = 0;
        if (local_258.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_258.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar27.Reference + 0x10))();
          TVar27.Reference = local_258.ErrorDetails.Reference;
          goto LAB_1487c5e6f;
        }
      }
      else if (iVar28 == 2) {
        TVar18 = UE::UnifiedError::StreamableManager::DownloadError::GetStaticErrorDetails();
        pIVar3 = (IErrorDetails *)(TVar18.Reference)->_padding_;
        if (pIVar3 == (IErrorDetails *)0x0) {
          local_2a0.ErrorDetails.Reference = (IErrorDetails *)0x0;
          local_2a0.ErrorCode = UE::UnifiedError::StreamableManager::DownloadError::GetErrorCodeId()
          ;
          iVar26 = UE::UnifiedError::StreamableManager::GetStaticModuleId();
          local_2a0.ModuleId = iVar26;
        }
        else {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_200);
          local_2a0.ErrorCode = UE::UnifiedError::StreamableManager::DownloadError::GetErrorCodeId()
          ;
          iVar26 = UE::UnifiedError::StreamableManager::GetStaticModuleId();
          local_2a0.ModuleId = iVar26;
          local_2a0.ErrorDetails.Reference = pIVar3;
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_1fc);
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
        TVar27.Reference = local_2d8.ErrorDetails.Reference;
        if ((local_2c8 != '\0') &&
           (local_2d8.ErrorCode = 0, local_2d8.ModuleId = 0,
           local_2d8.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
          local_2d8.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar27.Reference + 0x10))();
          if (local_2d8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_2d8.ErrorDetails.Reference + 0x10))();
          }
        }
        UE::UnifiedError::FError::FError(&local_2d8,&local_2a0);
        TVar27.Reference = local_2a0.ErrorDetails.Reference;
        local_2c8 = '\x01';
        local_2a0.ErrorCode = 0;
        local_2a0.ModuleId = 0;
        if (local_2a0.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_2a0.ErrorDetails.Reference = (IErrorDetails *)0x0;
          goto LAB_1487c5e74;
        }
      }
      else {
        pFVar16 = ::FString::FString(&local_c0,L"Unknown");
        pFVar17 = UE::UnifiedError::StreamableManager::PackageNameInvalid::MakeError
                            (&local_268,pFVar16);
        TVar27.Reference = local_2d8.ErrorDetails.Reference;
        if (pFVar17 != &local_2d8) {
          if ((local_2c8 != '\0') &&
             (local_2d8.ErrorCode = 0, local_2d8.ModuleId = 0,
             local_2d8.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_2d8.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar27.Reference + 0x10))();
            if (local_2d8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_2d8.ErrorDetails.Reference + 0x10))();
            }
          }
          UE::UnifiedError::FError::FError(&local_2d8,pFVar17);
          local_2c8 = '\x01';
        }
        TVar27.Reference = local_268.ErrorDetails.Reference;
        local_268.ErrorCode = 0;
        local_268.ModuleId = 0;
        if (local_268.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_268.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar27.Reference + 0x10))();
          TVar27.Reference = local_268.ErrorDetails.Reference;
          goto LAB_1487c5e6f;
        }
      }
      pFVar4 = param_3->Object;
      if ((local_2c8 == '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FStreamable *)(*pcVar6)();
        return pFVar13;
      }
      FStreamableHandle::SetError(pFVar4,&local_2d8);
      TVar27.Reference = local_2d8.ErrorDetails.Reference;
      pFVar13->bAsyncLoadRequestOutstanding = false;
      pFVar13->bLoadFailed = true;
      if ((local_2c8 != '\0') &&
         (local_2d8.ErrorCode = 0, local_2d8.ModuleId = 0,
         local_2d8.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        local_2d8.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar27.Reference + 0x10))();
        if (local_2d8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_2d8.ErrorDetails.Reference + 0x10))();
        }
      }
      goto LAB_1487c64e0;
    }
  }
  if ((pFVar13->Target).field0_0x0.DebugPtr != (UObject *)0x0) goto LAB_1487c64e0;
  pFVar13->bLoadFailed = false;
  puVar19 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_1b0 = &local_res8;
  local_1b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar20 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1b8,puVar19);
  if (((GIsInitialLoad == false) && (*(int *)(pFVar20 + 5) < 1)) &&
     (this->bForceSynchronousLoads == false)) {
    FSoftObjectPath::ToString(&local_2c0,&local_290);
    iVar26 = ::FString::Find(&local_290,L".",1,CaseSensitive,FromStart,-1);
    if (iVar26 != -1) {
      iVar12 = local_290.Data.ArrayNum + -1;
      if (local_290.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      iVar28 = iVar12;
      if (iVar26 < iVar12) {
        iVar28 = iVar26;
      }
      iVar26 = 0;
      if (0 < iVar28) {
        iVar26 = iVar28;
      }
      ::FString::RemoveAt(&local_290,iVar26,iVar12 - iVar26,No);
    }
    local_1c8 = local_290.Data.AllocatorInstance.Data;
    local_280.PackageName.ComparisonIndex.Value = 0;
    local_280.PackageName.Number = 0;
    local_280.HeaderExtension = Unspecified;
    iStack_1c0 = local_290.Data.ArrayNum + -1;
    if (local_290.Data.ArrayNum == 0) {
      iStack_1c0 = 0;
    }
    local_188._12_4_ = uStack_1bc;
    local_188.Size = iStack_1c0;
    local_188.DataPtr = (wchar_t *)local_290.Data.AllocatorInstance.Data;
    bVar9 = FPackagePath::TryFromPackageName(&local_188,&local_280);
    if (bVar9) {
      pFVar13->bAsyncLoadRequestOutstanding = true;
      pFVar13->bLoadFailed = false;
      local_218 = (undefined1  [8])0x0;
      local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_210.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                 (FWriteAccessScope *)&local_1a8);
      local_190 = &local_210;
      puVar21 = UE::Core::Private::DelegateAllocate(0x48,&local_210);
      pTVar31 = local_res8;
      if (puVar21 != (undefined8 *)0x0) {
        pTVar31 = (param_3->SharedReferenceCount).ReferenceController;
        pFVar4 = param_3->Object;
        if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar1 = (ForAnyElementType *)(puVar21 + 3);
        *puVar21 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy__UFSoftObjectPath____6B_
        ;
        *(FName *)(puVar21 + 1) = local_2c0.AssetPath.PackageName;
        *(FName *)(puVar21 + 2) = local_2c0.AssetPath.AssetName;
        pFVar1->Data = (FScriptContainerElement *)0x0;
        sVar34 = (size_t)local_2c0.SubPathString.Data.ArrayNum;
        local_res8 = (TReferenceControllerBase<1> *)
                     local_2c0.SubPathString.Data.AllocatorInstance.Data;
        *(int *)(puVar21 + 4) = local_2c0.SubPathString.Data.ArrayNum;
        if (local_2c0.SubPathString.Data.ArrayNum == 0) {
          *(int *)((longlong)puVar21 + 0x24) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_2c0.SubPathString.Data.ArrayNum,0,pFVar1,
                     local_2c0.SubPathString.Data.ArrayNum,(int *)((longlong)puVar21 + 0x24));
          memcpy(pFVar1->Data,local_res8,sVar34);
        }
        uVar22 = FDelegateHandle::GenerateNewID();
        puVar21[5] = uVar22;
        *puVar21 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_UFStreamableHandle___00__A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy__UFSoftObjectPath____6B_
        ;
        puVar21[6] = pFVar4;
        puVar21[7] = pTVar31;
        if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar31->WeakReferenceCount = (atomic<int>)((int)pTVar31->WeakReferenceCount + 1);
          UNLOCK();
        }
        bVar33 = true;
        puVar21[8] = FStreamableHandle::AsyncLoadCallbackWrapper;
      }
      if (bVar33) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31)
        ;
      }
      if (local_1a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
      }
      local_270 = 0;
      iVar26 = LoadPackageAsync(&local_280,(FName)0x0,
                                (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                                 *)local_218,PKG_None,-1,param_2,(FLinkerInstancingContext *)0x0,0);
      pFVar13->RequestId = iVar26;
    }
    else {
      if (1 < (byte)LogStreamableManager._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
      }
      pFVar13->bAsyncLoadRequestOutstanding = false;
      pFVar13->bLoadFailed = true;
      pFVar4 = param_3->Object;
      pFVar16 = ::FString::FString(&local_90,&local_290);
      pFVar17 = UE::UnifiedError::StreamableManager::PackageNameInvalid::MakeError
                          (&local_238,pFVar16);
      FStreamableHandle::SetError(pFVar4,pFVar17);
      TVar27.Reference = local_238.ErrorDetails.Reference;
      local_238.ErrorCode = 0;
      local_238.ModuleId = 0;
      if (local_238.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_238.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar27.Reference + 0x10))();
        if (local_238.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_238.ErrorDetails.Reference + 0x10))();
        }
      }
    }
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    goto LAB_1487c64e0;
  }
  if (5 < (byte)LogStreamableManager._0_1_) {
    FSoftObjectPath::ToString(&local_2c0,&local_178);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  uStack_1e0._0_4_ = 0;
  uStack_1e0._4_4_ = 0;
  local_1e8 = (wchar_t *)0x0;
  pFVar16 = FSoftObjectPath::ToString(&local_2c0,&local_148);
  iStack_1d0 = 0;
  if ((pFVar16->Data).ArrayNum == 0) {
    local_1d8 = (FScriptContainerElement *)0x15060d16c;
LAB_1487c629a:
    sVar34 = wcslen((wchar_t *)local_1d8);
    iStack_1d0 = (int)sVar34;
  }
  else {
    local_1d8 = (pFVar16->Data).AllocatorInstance.Data;
    if (local_1d8 != (FScriptContainerElement *)0x0) goto LAB_1487c629a;
  }
  pUVar23 = Z_Construct_UClass_UObject_NoRegister();
  local_158._12_4_ = uStack_1cc;
  local_158.Size = iStack_1d0;
  local_168.DataPtr = local_1e8;
  local_168.Size = (int)uStack_1e0;
  local_168._12_4_ = uStack_1e0._4_4_;
  local_158.DataPtr = (wchar_t *)local_1d8;
  pUVar24 = StaticLoadObject(pUVar23,(UObject *)0x0,&local_158,&local_168,0,(UPackageMap *)0x0,true,
                             (FLinkerInstancingContext *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar24);
  }
  (pFVar13->Target).field0_0x0.DebugPtr = pUVar24;
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if ((pFVar13->Target).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar23 = UObjectRedirector::GetPrivateStaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)pFVar13,pUVar23);
    if ((bVar9) &&
       (pUVar5 = (UObjectRedirector *)(pFVar13->Target).field0_0x0.DebugPtr,
       pUVar5 != (UObjectRedirector *)0x0)) {
      pFVar25 = FSoftObjectPath::FSoftObjectPath(&local_60,&local_2c0);
      pFVar25 = HandleLoadedRedirector(this,&local_80,pUVar5,pFVar25,pFVar13);
      local_2c0.AssetPath.PackageName = (pFVar25->AssetPath).PackageName;
      local_2c0.AssetPath.AssetName = (pFVar25->AssetPath).AssetName;
      pFVar2 = &pFVar25->SubPathString;
      if (&local_2c0.SubPathString != pFVar2) {
        if ((TReferenceControllerBase<1> *)local_2c0.SubPathString.Data.AllocatorInstance.Data !=
            (TReferenceControllerBase<1> *)0x0) {
          FMemory::Free(local_2c0.SubPathString.Data.AllocatorInstance.Data);
        }
        local_2c0.SubPathString.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
        (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c0.SubPathString.Data.ArrayNum = (pFVar25->SubPathString).Data.ArrayNum;
        local_2c0.SubPathString.Data.ArrayMax = (pFVar25->SubPathString).Data.ArrayMax;
        (pFVar25->SubPathString).Data.ArrayNum = 0;
        (pFVar25->SubPathString).Data.ArrayMax = 0;
      }
      if (local_80.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
  this_00 = (UObjectBaseUtility *)(pFVar13->Target).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    pFVar13->bLoadFailed = true;
    if (4 < (byte)LogStreamableManager._0_1_) {
      FSoftObjectPath::ToString(&local_2c0,&local_128);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = param_3->Object;
    pFVar16 = FSoftObjectPath::ToString(&local_2c0,&local_118);
    if ((pFVar16->Data).ArrayNum != 0) {
      pwVar32 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    pFVar16 = ::FString::FString(&local_d0,pwVar32);
    pFVar17 = UE::UnifiedError::StreamableManager::PackageLoadFailed::MakeError(&local_228,pFVar16);
    FStreamableHandle::SetError(pFVar4,pFVar17);
    TVar27.Reference = local_228.ErrorDetails.Reference;
    local_228.ErrorCode = 0;
    local_228.ModuleId = 0;
    local_138.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    if (local_228.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_228.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar27.Reference + 0x10))();
      local_138.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
      if (local_228.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_228.ErrorDetails.Reference + 0x10))();
        local_138.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
      }
    }
LAB_1487c64d2:
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  else if (5 < (byte)LogStreamableManager._0_1_) {
    UObjectBaseUtility::GetFullName(this_00,&local_138,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)&PTR_u______Static_loa_151b74868,
               (FLogCategoryBase *)&LogStreamableManager);
    goto LAB_1487c64d2;
  }
  pFVar13->bAsyncLoadRequestOutstanding = false;
LAB_1487c64e0:
  if ((TReferenceControllerBase<1> *)local_2c0.SubPathString.Data.AllocatorInstance.Data !=
      (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(local_2c0.SubPathString.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return pFVar13;
}

// Unload @ 1487cb480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamableManager::Unload(FStreamableManager *this,FSoftObjectPath *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FStreamableHandle *this_00;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  TSharedRef<FStreamableHandle,1> *pTVar6;
  undefined1 local_res18 [8];
  TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x925,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar4 = GetActiveHandles(this,param_1,&local_28,true);
  if (bVar4) {
    iVar3 = local_28.ArrayNum;
    pTVar6 = (TSharedRef<FStreamableHandle,1> *)
             (local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10);
    FVar5.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar3) {
        `TCheckedPointerIterator<TSharedRef<FStreamableHandle,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if ((TSharedRef<FStreamableHandle,1> *)FVar5.Data == pTVar6) break;
      pTVar1 = (((TSharedRef<FStreamableHandle,1> *)FVar5.Data)->SharedReferenceCount).
               ReferenceController;
      this_00 = ((TSharedRef<FStreamableHandle,1> *)FVar5.Data)->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      FStreamableHandle::ReleaseHandle(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FVar5.Data = FVar5.Data + 0x10;
    }
  }
  else if (5 < (byte)LogStreamableManager._0_1_) {
    FSoftObjectPath::ToString(param_1,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TSharedRef<FStreamableHandle,1>,int>
            ((TSharedRef<FStreamableHandle,1> *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((TSharedRef<FStreamableHandle,1> *)local_28.AllocatorInstance.Data !=
      (TSharedRef<FStreamableHandle,1> *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 150530be0

bool __thiscall
`FStreamableManager::RemoveReferencedAsset'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6594131278881097961>);
  if (bVar2) {
    FSoftObjectPath::ToString(*(FSoftObjectPath **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6594131278881097961>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150530c47;
    }
  }
  bVar2 = false;
LAB_150530c47:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150530e80

bool __thiscall
`FStreamableManager::RequestSyncLoadInternal'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6594131278881097649>);
  if (bVar2) {
    if ((**(longlong **)this == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6594131278881097649>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150531050

bool __thiscall
`FStreamableManager::RequestSyncLoadInternal'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6594131278881097653>);
  if (bVar2) {
    if ((**(longlong **)this == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6594131278881097653>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1505310e0

bool __thiscall
`FStreamableManager::RemoveReferencedAsset'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6594131278881097966>);
  if (bVar2) {
    FSoftObjectPath::ToString(*(FSoftObjectPath **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6594131278881097966>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150531147;
    }
  }
  bVar2 = false;
LAB_150531147:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150531180

bool __thiscall
`FStreamableManager::CreateCombinedHandle'::__l23::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6594131278881098117>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6594131278881098117>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505311c0

bool __thiscall
`FStreamableManager::RemoveReferencedAsset'::__l8::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6594131278881097968>);
  if (bVar2) {
    FSoftObjectPath::ToString(*(FSoftObjectPath **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6594131278881097968>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150531227;
    }
  }
  bVar2 = false;
LAB_150531227:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

