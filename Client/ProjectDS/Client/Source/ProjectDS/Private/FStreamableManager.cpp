// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// RequestAsyncLoad<FString,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void> @ 14b7d5a40

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::
RequestAsyncLoad<FString,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FString *param_1,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          int param_3,bool param_4,bool param_5,FString *param_6,FSourceLocation *param_7)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_f8 [16];
  ForAnyElementType local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  ForAnyElementType FStack_d0;
  int local_c8;
  undefined1 local_b8 [8];
  ForAnyElementType FStack_b0;
  int local_a8;
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
  
  local_d8 = (undefined1  [8])(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_98._0_8_ = (FSoftObjectPath *)0x0;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_98._8_4_ = 0;
  FStack_b0.Data._0_4_ = iVar1 + -1;
  if (iVar1 == 0) {
    FStack_b0.Data._0_4_ = 0;
  }
  local_78 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  FStack_b0.Data._4_4_ = FStack_d0.Data._4_4_;
  local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c._0_1_ = false;
  local_3c._1_1_ = false;
  local_20 = false;
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 0;
  local_f8._8_4_ = 0;
  local_f8._12_4_ = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0._0_4_ = 0;
  local_e0._4_4_ = 0;
  local_b8 = local_d8;
  FStack_d0.Data._0_4_ = (int)FStack_b0.Data;
  FSoftObjectPath::SetPath((FSoftObjectPath *)local_f8,(TStringView<wchar_t> *)local_b8);
  local_d8 = (undefined1  [8])0x0;
  FStack_d0.Data._0_4_ = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)local_d8,1,(int *)((longlong)&FStack_d0.Data + 4));
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
            ((void *)local_d8,(FSoftObjectPath *)local_f8,1);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_98._0_8_,local_98._8_4_);
  if ((FSoftObjectPath *)local_98._0_8_ != (FSoftObjectPath *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  local_98._0_8_ = local_d8;
  local_98._8_4_ = (int)FStack_d0.Data;
  local_98._12_4_ = FStack_d0.Data._4_4_;
  FStack_d0.Data = (FScriptContainerElement *)0x0;
  local_d8 = (undefined1  [8])0x0;
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)0x0,0);
  if ((atomic<unsigned___int64>)local_d8 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  local_b8 = (undefined1  [8])0x0;
  FStack_b0.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FWriteAccessScope *)local_f8);
  if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data);
  }
  FStack_b0.Data = *(FScriptContainerElement **)&param_2->field_0x8;
  *(undefined8 *)&param_2->field_0x8 = 0;
  local_a8 = *(int *)&param_2->field_0x10;
  *(undefined4 *)&param_2->field_0x10 = 0;
  if (local_e8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  this_00 = UE::StreamableManager::Private::WrapDelegate
                      ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                        *)local_d8,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)local_f8);
  pFVar2 = *(FScriptContainerElement **)&this_00->field_0x8;
  *(undefined8 *)&this_00->field_0x8 = 0;
  iVar1 = *(int *)&this_00->field_0x10;
  *(undefined4 *)&this_00->field_0x10 = 0;
  if (local_e8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)local_f8);
  if (local_78 != 0) {
    if (FStack_80.Data == (FScriptContainerElement *)0x0) goto LAB_14b7d5c80;
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
LAB_14b7d5c80:
  FStack_80.Data = pFVar2;
  local_78 = iVar1;
  if (local_e8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)local_f8);
  if ((local_c8 != 0) && (FStack_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_e8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  if (FStack_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)local_f8);
  if ((local_a8 != 0) && (FStack_b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b0,0,0,0x10);
    local_a8 = 0;
  }
  if (local_e8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
  local_40 = param_3;
  local_3c._1_1_ = param_5;
  local_3c._0_1_ = param_4;
  local_d8 = (undefined1  [8])(param_6->Data).AllocatorInstance.Data;
  (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_d0.Data = *(FScriptContainerElement **)&(param_6->Data).ArrayNum;
  (param_6->Data).ArrayNum = 0;
  (param_6->Data).ArrayMax = 0;
  local_f8._0_4_ = (param_7->Impl)._Line;
  local_f8._4_4_ = (param_7->Impl)._Column;
  local_f8._8_8_ = (param_7->Impl)._File;
  local_e8.Data = (FScriptContainerElement *)(param_7->Impl)._Function;
  RequestAsyncLoad(this,__return_storage_ptr__,(FStreamableAsyncLoadParams *)local_98,
                   (FString *)local_d8,(FSourceLocation *)local_f8);
  if (local_20 != false) {
    FStreamableDownloadCachePin::~FStreamableDownloadCachePin(&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)local_f8);
  if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_e8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_70,(FWriteAccessScope *)local_f8);
  if ((local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_e8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)local_f8);
  if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_e8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_98._0_8_,local_98._8_4_);
  if ((atomic<unsigned___int64>)local_98._0_8_ != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  pFVar2 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void> @ 14b996630

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::
RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FSoftObjectPath *param_1,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2
          ,int param_3,bool param_4,bool param_5,FString *param_6,FSourceLocation *param_7)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *this_00;
  size_t _Size;
  undefined1 local_e8 [16];
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  undefined1 local_c8 [8];
  ForAnyElementType local_c0;
  int local_b8;
  undefined1 local_b0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  int local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  int local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType FStack_68;
  int local_60;
  int local_58;
  undefined2 local_54;
  FStreamableDownloadCachePin local_50;
  bool local_38;
  undefined1 local_30 [8];
  ForAnyElementType local_28;
  int local_20;
  
  local_d0 = (param_1->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_d0;
  pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  local_b0._0_8_ = (FSoftObjectPath *)0x0;
  local_b0._8_4_ = 0;
  local_90 = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54._0_1_ = false;
  local_54._1_1_ = false;
  local_38 = false;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_68.Data = (FScriptContainerElement *)0x0;
  local_e8._0_8_ = (param_1->AssetPath).PackageName;
  local_e8._8_8_ = (param_1->AssetPath).AssetName;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  if (local_d0 == 0) {
    local_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_d0,0,&local_d8,local_d0,&local_cc);
    memcpy(local_d8.Data,pFVar2,_Size);
  }
  local_c8 = (undefined1  [8])0x0;
  local_c0.Data._0_4_ = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)local_c8,1,(int *)((longlong)&local_c0.Data + 4));
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
            ((void *)local_c8,(FSoftObjectPath *)local_e8,1);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_b0._0_8_,local_b0._8_4_);
  if ((FSoftObjectPath *)local_b0._0_8_ != (FSoftObjectPath *)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  local_b0._0_8_ = local_c8;
  local_b0._8_4_ = (int)local_c0.Data;
  local_b0._12_4_ = local_c0.Data._4_4_;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_c8 = (undefined1  [8])0x0;
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)0x0,0);
  if ((atomic<unsigned___int64>)local_c8 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  local_c8 = (undefined1  [8])0x0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FWriteAccessScope *)local_e8);
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  local_c0.Data = *(FScriptContainerElement **)&param_2->field_0x8;
  *(undefined8 *)&param_2->field_0x8 = 0;
  local_b8 = *(int *)&param_2->field_0x10;
  *(undefined4 *)&param_2->field_0x10 = 0;
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  this_00 = UE::StreamableManager::Private::WrapDelegate
                      ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                        *)local_30,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)local_e8);
  pFVar2 = *(FScriptContainerElement **)&this_00->field_0x8;
  *(undefined8 *)&this_00->field_0x8 = 0;
  iVar1 = *(int *)&this_00->field_0x10;
  *(undefined4 *)&this_00->field_0x10 = 0;
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)local_e8);
  if (local_90 != 0) {
    if (FStack_98.Data == (FScriptContainerElement *)0x0) goto LAB_14b996893;
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = 0;
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
LAB_14b996893:
  FStack_98.Data = pFVar2;
  local_90 = iVar1;
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)local_e8);
  if ((local_20 != 0) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)local_e8);
  if ((local_b8 != 0) && (local_c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  local_58 = param_3;
  local_54._1_1_ = param_5;
  local_54._0_1_ = param_4;
  local_c8 = (undefined1  [8])(param_6->Data).AllocatorInstance.Data;
  (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data = *(FScriptContainerElement **)&(param_6->Data).ArrayNum;
  (param_6->Data).ArrayNum = 0;
  (param_6->Data).ArrayMax = 0;
  local_e8._0_4_ = (param_7->Impl)._Line;
  local_e8._4_4_ = (param_7->Impl)._Column;
  local_e8._8_8_ = (param_7->Impl)._File;
  local_d8.Data = (FScriptContainerElement *)(param_7->Impl)._Function;
  RequestAsyncLoad(this,__return_storage_ptr__,(FStreamableAsyncLoadParams *)local_b0,
                   (FString *)local_c8,(FSourceLocation *)local_e8);
  if (local_38 != false) {
    FStreamableDownloadCachePin::~FStreamableDownloadCachePin(&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_70,(FWriteAccessScope *)local_e8);
  if ((local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)local_e8);
  if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)local_e8);
  if ((local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_b0._0_8_,local_b0._8_4_);
  if ((atomic<unsigned___int64>)local_b0._0_8_ != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  pFVar2 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void> @ 14b996bb0

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::
RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FSoftObjectPath *param_1,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2
          ,int param_3,bool param_4,bool param_5,FString *param_6,FSourceLocation *param_7)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *this_00;
  size_t _Size;
  undefined1 local_e8 [16];
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  undefined1 local_c8 [8];
  ForAnyElementType local_c0;
  int local_b8;
  undefined1 local_b0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  int local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  int local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType FStack_68;
  int local_60;
  int local_58;
  undefined2 local_54;
  FStreamableDownloadCachePin local_50;
  bool local_38;
  undefined1 local_30 [8];
  ForAnyElementType local_28;
  int local_20;
  
  local_d0 = (param_1->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_d0;
  pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  local_b0._0_8_ = (FSoftObjectPath *)0x0;
  local_b0._8_4_ = 0;
  local_90 = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54._0_1_ = false;
  local_54._1_1_ = false;
  local_38 = false;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_68.Data = (FScriptContainerElement *)0x0;
  local_e8._0_8_ = (param_1->AssetPath).PackageName;
  local_e8._8_8_ = (param_1->AssetPath).AssetName;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  if (local_d0 == 0) {
    local_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_d0,0,&local_d8,local_d0,&local_cc);
    memcpy(local_d8.Data,pFVar2,_Size);
  }
  local_c8 = (undefined1  [8])0x0;
  local_c0.Data._0_4_ = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,(ForAnyElementType *)local_c8,1,(int *)((longlong)&local_c0.Data + 4));
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
            ((void *)local_c8,(FSoftObjectPath *)local_e8,1);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_b0._0_8_,local_b0._8_4_);
  if ((FSoftObjectPath *)local_b0._0_8_ != (FSoftObjectPath *)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  local_b0._0_8_ = local_c8;
  local_b0._8_4_ = (int)local_c0.Data;
  local_b0._12_4_ = local_c0.Data._4_4_;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_c8 = (undefined1  [8])0x0;
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)0x0,0);
  if ((atomic<unsigned___int64>)local_c8 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  local_c8 = (undefined1  [8])0x0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FWriteAccessScope *)local_e8);
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  local_c0.Data = *(FScriptContainerElement **)&param_2->field_0x8;
  *(undefined8 *)&param_2->field_0x8 = 0;
  local_b8 = *(int *)&param_2->field_0x10;
  *(undefined4 *)&param_2->field_0x10 = 0;
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  this_00 = UE::StreamableManager::Private::WrapDelegate
                      ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                        *)local_30,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)local_e8);
  pFVar2 = *(FScriptContainerElement **)&this_00->field_0x8;
  *(undefined8 *)&this_00->field_0x8 = 0;
  iVar1 = *(int *)&this_00->field_0x10;
  *(undefined4 *)&this_00->field_0x10 = 0;
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)local_e8);
  if (local_90 != 0) {
    if (FStack_98.Data == (FScriptContainerElement *)0x0) goto LAB_14b996e13;
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = 0;
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
LAB_14b996e13:
  FStack_98.Data = pFVar2;
  local_90 = iVar1;
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)local_e8);
  if ((local_20 != 0) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)local_e8);
  if ((local_b8 != 0) && (local_c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  local_58 = param_3;
  local_54._1_1_ = param_5;
  local_54._0_1_ = param_4;
  local_c8 = (undefined1  [8])(param_6->Data).AllocatorInstance.Data;
  (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data = *(FScriptContainerElement **)&(param_6->Data).ArrayNum;
  (param_6->Data).ArrayNum = 0;
  (param_6->Data).ArrayMax = 0;
  local_e8._0_4_ = (param_7->Impl)._Line;
  local_e8._4_4_ = (param_7->Impl)._Column;
  local_e8._8_8_ = (param_7->Impl)._File;
  local_d8.Data = (FScriptContainerElement *)(param_7->Impl)._Function;
  RequestAsyncLoad(this,__return_storage_ptr__,(FStreamableAsyncLoadParams *)local_b0,
                   (FString *)local_c8,(FSourceLocation *)local_e8);
  if (local_38 != false) {
    FStreamableDownloadCachePin::~FStreamableDownloadCachePin(&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_70,(FWriteAccessScope *)local_e8);
  if ((local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)local_e8);
  if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)local_e8);
  if ((local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_d8.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_b0._0_8_,local_b0._8_4_);
  if ((atomic<unsigned___int64>)local_b0._0_8_ != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  pFVar2 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// RequestSyncLoad<FSoftObjectPath_&> @ 14bb4b2e0

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableManager::RequestSyncLoad<FSoftObjectPath_&>
          (FStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FSoftObjectPath *param_1,bool param_2,FString *param_3,FSourceLocation *param_4)

{
  FScriptContainerElement *pFVar1;
  size_t _Size;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_38;
  FSoftObjectPath local_28;
  
  local_28.SubPathString.Data.ArrayNum = (param_1->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_28.SubPathString.Data.ArrayNum;
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.AssetPath.PackageName = (param_1->AssetPath).PackageName;
  local_28.AssetPath.AssetName = (param_1->AssetPath).AssetName;
  if (local_28.SubPathString.Data.ArrayNum == 0) {
    local_28.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_28.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_28.SubPathString,local_28.SubPathString.Data.ArrayNum,
               &local_28.SubPathString.Data.ArrayMax);
    memcpy(local_28.SubPathString.Data.AllocatorInstance.Data,pFVar1,_Size);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  ConstructItems<FSoftObjectPath,FSoftObjectPath,int>(local_38.AllocatorInstance.Data,&local_28,1);
  RequestSyncLoadInternal(this,__return_storage_ptr__,&local_38,param_2,param_3,param_4);
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FSoftObjectPath *)local_38.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

