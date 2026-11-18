// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 29

// ~FTransactionallySafeAsyncPackageLoader @ 141f23e50

void __thiscall
FTransactionallySafeAsyncPackageLoader::~FTransactionallySafeAsyncPackageLoader
          (FTransactionallySafeAsyncPackageLoader *this)

{
  IAsyncPackageLoader *pIVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FTransactionallySafeAsyncPackageLoader__6B_;
  pIVar1 = this->WrappedPackageLoader;
  if (pIVar1 != (IAsyncPackageLoader *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  *(undefined4 *)&(this->PackageCache).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PackageCache).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PackageCache);
  DestructItems<FTransactionallySafeAsyncPackageLoader::FTransactionallyDeferredLoadPackagePayload,int>
            ((FTransactionallyDeferredLoadPackagePayload *)
             (this->TransactionallyDeferredLoadPackages).AllocatorInstance.Data,
             (this->TransactionallyDeferredLoadPackages).ArrayNum);
  pFVar3 = (this->TransactionallyDeferredLoadPackages).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IAsyncPackageLoader__6B_;
  return;
}

// operator() @ 141f26cc0

void __thiscall
`FTransactionallySafeAsyncPackageLoader::LoadAndCachePackage'::__l2::<lambda_1>::operator()
          (void *this,FName *param_1,UPackage *param_2,Type param_3)

{
  int *piVar1;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  FWeakObjectPtr *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FMapPayload *pFVar11;
  atomic<unsigned_char> *this_00;
  wchar_t *pwVar12;
  UPackage *local_res8;
  FName *local_res10;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  UPackage *local_58;
  FMapPayload local_50;
  
  local_res10 = param_1;
  if (param_3 != Canceled) {
    pwVar12 = L"";
    this_00 = (atomic<unsigned_char> *)(*(longlong *)this + 0x74);
    if ((this_00 == (atomic<unsigned_char> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    LOCK();
    FVar2.State = *this_00;
    if (FVar2.State == (atomic<unsigned_char>)0x0) {
      *this_00 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar2.State != (atomic<unsigned_char>)0x0) {
      UE::FMutex::LockSlow((FMutex *)this_00);
    }
    pFVar11 = TMapBase<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,0>_>
              ::Find((TMapBase<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,0>_>
                      *)(*(longlong *)this + 0x20),(FString *)((longlong)this + 8));
    if (pFVar11 == (FMapPayload *)0x0) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPackage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_60.ObjectIndex = 0;
      local_60.ObjectSerialNumber = 0;
      local_58 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPackage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_58);
      local_50.LoadedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.LoadedPackages.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,0,(ForAnyElementType *)&local_50,1,&local_50.LoadedPackages.ArrayMax);
      *(FWeakObjectPtr *)local_50.LoadedPackages.AllocatorInstance.Data = local_60;
      lVar5 = *(longlong *)this;
      iVar9 = *(int *)((longlong)this + 0x10) + -1;
      if (*(int *)((longlong)this + 0x10) == 0) {
        iVar9 = 0;
      }
      else {
        pwVar12 = *(wchar_t **)((longlong)this + 8);
      }
      local_50.Result = param_3;
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar12);
      pFVar11 = TMapBase<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,0>_>
                ::FindOrAddImpl<FString_const_&>
                          ((TMapBase<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload,0>_>
                            *)(lVar5 + 0x20),uVar10,(FString *)((longlong)this + 8));
      if (pFVar11 != &local_50) {
        pFVar6 = (pFVar11->LoadedPackages).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (pFVar11->LoadedPackages).AllocatorInstance.Data =
             local_50.LoadedPackages.AllocatorInstance.Data;
        local_50.LoadedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar11->LoadedPackages).ArrayNum = local_50.LoadedPackages.ArrayNum;
        (pFVar11->LoadedPackages).ArrayMax = local_50.LoadedPackages.ArrayMax;
        local_50.LoadedPackages.ArrayNum = 0;
        local_50.LoadedPackages.ArrayMax = 0;
      }
      pFVar11->Result = local_50.Result;
      if ((FWeakObjectPtr *)local_50.LoadedPackages.AllocatorInstance.Data != (FWeakObjectPtr *)0x0)
      {
        FMemory::Free(local_50.LoadedPackages.AllocatorInstance.Data);
      }
    }
    else {
      piVar1 = &(pFVar11->LoadedPackages).ArrayMax;
      (pFVar11->LoadedPackages).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,(ForAnyElementType *)pFVar11,0,piVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPackage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_68.ObjectIndex = 0;
      local_68.ObjectSerialNumber = 0;
      local_res8 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPackage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res8);
      pFVar4 = (FWeakObjectPtr *)(pFVar11->LoadedPackages).AllocatorInstance.Data;
      if (((pFVar4 <= &local_68) && (&local_68 < pFVar4 + *piVar1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (pFVar11->LoadedPackages).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)pFVar11,piVar1);
      }
      (pFVar11->LoadedPackages).ArrayNum = iVar9 + 1;
      *(FWeakObjectPtr *)((pFVar11->LoadedPackages).AllocatorInstance.Data + (longlong)iVar9 * 8) =
           local_68;
    }
    if (this_00 != (atomic<unsigned_char> *)0x0) {
      LOCK();
      aVar3 = *this_00;
      *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)this_00);
      }
    }
  }
  TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  ::ExecuteIfBound((void *)((longlong)this + 0x20),local_res10,param_2,param_3);
  return;
}

// CancelLoading @ 141f2af10

void __thiscall
FTransactionallySafeAsyncPackageLoader::CancelLoading(FTransactionallySafeAsyncPackageLoader *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f2af17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedPackageLoader + 0x48))();
  return;
}

// DrainTransactionallyDeferredLoadPackages @ 141f2dc00

/* WARNING: Removing unreachable block (ram,0x000141f2dd87) */
/* WARNING: Removing unreachable block (ram,0x000141f2dda2) */
/* WARNING: Removing unreachable block (ram,0x000141f2dda7) */
/* WARNING: Removing unreachable block (ram,0x000141f2ddcd) */
/* WARNING: Removing unreachable block (ram,0x000141f2ddd3) */
/* WARNING: Removing unreachable block (ram,0x000141f2dde4) */
/* WARNING: Removing unreachable block (ram,0x000141f2dde9) */
/* WARNING: Removing unreachable block (ram,0x000141f2ddee) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTransactionallySafeAsyncPackageLoader::DrainTransactionallyDeferredLoadPackages
          (FTransactionallySafeAsyncPackageLoader *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  EPackageFlags EVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<FTransactionallySafeAsyncPackageLoader::FTransactionallyDeferredLoadPackagePayload,TSizedDefaultAllocator<32>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  FPackagePath *pFVar10;
  FPackagePath *pFVar11;
  uint *puVar12;
  uint local_res20 [2];
  int local_e8;
  undefined1 local_e4 [4];
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  int local_d0;
  uint local_c8;
  FPackagePath *local_c0;
  TArray<FTransactionallySafeAsyncPackageLoader::FTransactionallyDeferredLoadPackagePayload,TSizedDefaultAllocator<32>_>
  *local_a0;
  FPackagePath *local_98;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  local_90;
  FDestructionSentinel local_78 [2];
  FString local_48;
  
  local_a0 = &this->TransactionallyDeferredLoadPackages;
  local_res20[0] = 0;
  local_c8 = (this->TransactionallyDeferredLoadPackages).ArrayNum;
  uVar9 = (ulonglong)(int)local_c8;
  pFVar10 = (FPackagePath *)(local_a0->AllocatorInstance).Data;
  local_98 = pFVar10 + uVar9 * 8;
  while( true ) {
    pFVar11 = local_98;
    pTVar6 = local_a0;
    local_c0 = pFVar10;
    if (local_a0->ArrayNum != (int)uVar9) {
      local_res20[0] = local_res20[0] & 0xffffff00;
      `TCheckedPointerIterator<FTransactionallySafeAsyncPackageLoader::FTransactionallyDeferredLoadPackagePayload,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar11) break;
    uVar1 = pFVar10[7].PackageName.Number;
    iVar8 = *(int *)&pFVar10[4].HeaderExtension;
    puVar12 = &pFVar10[5].PackageName.Number;
    if (pFVar10[6].HeaderExtension == Unspecified) {
      puVar12 = (uint *)0x0;
    }
    uVar2 = pFVar10[4].PackageName.Number;
    EVar3 = pFVar10[4].PackageName.ComparisonIndex.Value;
    local_e0 = (undefined1  [8])0x0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              (local_e0,(TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                         *)(local_c0 + 2));
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_90._16_4_ = 0;
    TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_90,
               (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                *)local_e0);
    pFVar10 = local_c0;
    local_e8 = LoadAndCachePackage(this,local_c0,local_c0[1].PackageName,&local_90,EVar3,uVar2,iVar8
                                   ,(FLinkerInstancingContext *)puVar12,uVar1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)local_78);
    if ((local_d0 != 0) && (local_d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,0x10);
      local_d0 = 0;
    }
    if (local_78[0].bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78[0].Accessor,local_78);
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e0);
    if (param_1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < pFVar4 + (longlong)param_1->ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar8 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_e8;
    }
    pFVar10 = pFVar10 + 8;
    uVar9 = (ulonglong)local_c8;
  }
  if (param_2) {
    iVar8 = pTVar6->ArrayNum;
    pFVar10 = (FPackagePath *)(pTVar6->AllocatorInstance).Data;
    pFVar11 = pFVar10 + (longlong)iVar8 * 8;
    while( true ) {
      if (pTVar6->ArrayNum != iVar8) {
        `TCheckedPointerIterator<FTransactionallySafeAsyncPackageLoader::FTransactionallyDeferredLoadPackagePayload,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_e4);
      }
      if (pFVar10 == pFVar11) break;
      if (3 < (byte)LogStreaming._0_1_) {
        FPackagePath::GetDebugNameWithExtension(pFVar10,&local_48);
        UE::Logging::Private::BasicLog<4>
                  (&`private:_void___cdecl_FTransactionallySafeAsyncPackageLoader::DrainTransactionallyDeferredLoadPackages(TArray<int,TSizedDefaultAllocator<32>_>*___ptr64,bool)___ptr64'
                    ::__l17::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = pFVar10 + 8;
    }
  }
  DestructItems<FTransactionallySafeAsyncPackageLoader::FTransactionallyDeferredLoadPackagePayload,int>
            ((FTransactionallyDeferredLoadPackagePayload *)(pTVar6->AllocatorInstance).Data,
             pTVar6->ArrayNum);
  pTVar6->ArrayNum = 0;
  if (pTVar6->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&pTVar6->AllocatorInstance,0,&pTVar6->ArrayMax);
  }
  return;
}

// FlushLoading @ 141f2f9c0

void __thiscall
FTransactionallySafeAsyncPackageLoader::FlushLoading
          (FTransactionallySafeAsyncPackageLoader *this,TArrayView<int_const_,int> *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  IAsyncPackageLoader *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  FScriptContainerElement *pFVar10;
  int *piVar11;
  int local_98 [2];
  ForAnyElementType local_90;
  undefined8 local_88;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  local_78 = param_1->DataPtr;
  uStack_70 = *(undefined8 *)&param_1->ArrayNum;
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  bVar4 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(this_00);
  }
  if (local_78 != local_78 + (int)uStack_70) {
    iVar5 = this->MaxFlushedRequestId;
    piVar8 = local_78;
    do {
      if (iVar5 < *piVar8) {
        iVar5 = *piVar8;
      }
      piVar8 = piVar8 + 1;
      this->MaxFlushedRequestId = iVar5;
    } while (piVar8 != local_78 + (int)uStack_70);
  }
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  piVar11 = param_1->DataPtr;
  piVar8 = piVar11 + param_1->ArrayNum;
  piVar7 = piVar11;
  piVar6 = piVar11;
  if (piVar11 == piVar8) {
LAB_141f2fad0:
    if (piVar11 == piVar8) goto LAB_141f2faf1;
  }
  else {
    do {
      if (*piVar7 == -0x7fffffff) {
        if ((int)((longlong)piVar7 - (longlong)piVar11 >> 2) == -1) goto LAB_141f2fad0;
        local_68 = 0;
        uStack_60 = 0;
        puVar9 = &local_48;
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = uStack_5c;
        goto LAB_141f2fafd;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar8);
  }
  do {
    if (*piVar6 == -0x80000000) {
      if ((int)((longlong)piVar6 - (longlong)piVar11 >> 2) != -1) {
        local_58 = (FScriptContainerElement *)0x0;
        local_90.Data = (FScriptContainerElement *)0x0;
        local_88 = 0;
        pFVar10 = local_58;
        do {
          local_98[0] = *piVar11;
          if (local_98[0] != -0x80000000) {
            iVar5 = (int)pFVar10;
            if ((local_58 <= (FScriptContainerElement *)local_98) &&
               ((FScriptContainerElement *)local_98 < local_58 + (longlong)local_88._4_4_ * 4)) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_58 = local_90.Data;
              iVar5 = (int)local_88;
            }
            if (iVar5 == local_88._4_4_) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_90,(int *)((longlong)&local_88 + 4));
              local_58 = local_90.Data;
            }
            local_88 = CONCAT44(local_88._4_4_,iVar5 + 1U);
            *(int *)(local_58 + (longlong)iVar5 * 4) = local_98[0];
            pFVar10 = (FScriptContainerElement *)(ulonglong)(iVar5 + 1U);
            local_58 = local_90.Data;
          }
          piVar11 = piVar11 + 1;
        } while (piVar11 != piVar8);
        pIVar2 = this->WrappedPackageLoader;
        pcVar3 = *(code **)((longlong)*pIVar2 + 0x60);
        iVar5 = (int)pFVar10;
        if ((iVar5 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_38 = (undefined4)local_58;
        uStack_34 = local_58._4_4_;
        uStack_2c = uStack_4c;
        iStack_50 = iVar5;
        iStack_30 = iVar5;
        (*pcVar3)(pIVar2,&local_38);
        if (local_90.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_90.Data);
        return;
      }
      break;
    }
    piVar6 = piVar6 + 1;
  } while (piVar6 != piVar8);
LAB_141f2faf1:
  local_28 = *(undefined4 *)&param_1->DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_20 = param_1->ArrayNum;
  uStack_1c = *(undefined4 *)&param_1->field_0xc;
  puVar9 = &local_28;
LAB_141f2fafd:
  (**(code **)((longlong)*this->WrappedPackageLoader + 0x60))(this->WrappedPackageLoader,puVar9);
  return;
}

// GetAsyncLoadPercentage @ 141f33040

float __thiscall
FTransactionallySafeAsyncPackageLoader::GetAsyncLoadPercentage
          (FTransactionallySafeAsyncPackageLoader *this,FName *param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f33047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((longlong)*this->WrappedPackageLoader + 0x78))();
  return fVar1;
}

// GetLoaderType @ 141f34de0

ELoaderType __thiscall
FTransactionallySafeAsyncPackageLoader::GetLoaderType(FTransactionallySafeAsyncPackageLoader *this)

{
  ELoaderType EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f34de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*this->WrappedPackageLoader + 200))();
  return EVar1;
}

// GetNumAsyncPackages @ 141f34ec0

int __thiscall
FTransactionallySafeAsyncPackageLoader::GetNumAsyncPackages
          (FTransactionallySafeAsyncPackageLoader *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f34ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((longlong)*this->WrappedPackageLoader + 0x70))();
  return iVar1;
}

// GetNumQueuedPackages @ 141f34ee0

int __thiscall
FTransactionallySafeAsyncPackageLoader::GetNumQueuedPackages
          (FTransactionallySafeAsyncPackageLoader *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f34ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((longlong)*this->WrappedPackageLoader + 0x68))();
  return iVar1;
}

// InitializeLoading @ 141f39d40

void __thiscall
FTransactionallySafeAsyncPackageLoader::InitializeLoading
          (FTransactionallySafeAsyncPackageLoader *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f39d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedPackageLoader + 8))();
  return;
}

// IsAsyncLoadingPackages @ 141f39fc0

bool __thiscall
FTransactionallySafeAsyncPackageLoader::IsAsyncLoadingPackages
          (FTransactionallySafeAsyncPackageLoader *this)

{
  char cVar1;
  
  if ((this->TransactionallyDeferredLoadPackages).ArrayNum == 0) {
    cVar1 = (**(code **)((longlong)*this->WrappedPackageLoader + 0x98))();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// IsAsyncLoadingSuspended @ 141f39ff0

bool __thiscall
FTransactionallySafeAsyncPackageLoader::IsAsyncLoadingSuspended
          (FTransactionallySafeAsyncPackageLoader *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f39ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->WrappedPackageLoader + 0x80))();
  return (bool)uVar1;
}

// IsInAsyncLoadThread @ 141f3a3e0

bool __thiscall
FTransactionallySafeAsyncPackageLoader::IsInAsyncLoadThread
          (FTransactionallySafeAsyncPackageLoader *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f3a3e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->WrappedPackageLoader + 0x88))();
  return (bool)uVar1;
}

// IsMultithreaded @ 141f3a480

bool __thiscall
FTransactionallySafeAsyncPackageLoader::IsMultithreaded
          (FTransactionallySafeAsyncPackageLoader *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f3a487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->WrappedPackageLoader + 0x90))();
  return (bool)uVar1;
}

// LoadAndCachePackage @ 141f3ba50

int __thiscall
FTransactionallySafeAsyncPackageLoader::LoadAndCachePackage
          (FTransactionallySafeAsyncPackageLoader *this,FPackagePath *param_1,FName param_2,
          TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
          *param_3,EPackageFlags param_4,int param_5,int param_6,FLinkerInstancingContext *param_7,
          uint param_8)

{
  IAsyncPackageLoader *pIVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  ForAnyElementType local_d0;
  int local_c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  FDelegateAllocation local_b8;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType local_80;
  int local_78;
  FTransactionallySafeAsyncPackageLoader *local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  FName local_58;
  TDelegateBase<FNotThreadSafeDelegateMode> local_50;
  FString local_38;
  
  FPackagePath::GetDebugNameWithExtension(param_1,&local_38);
  FVar3.Data = local_38.Data.AllocatorInstance.Data;
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b8.DelegateSize = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  iVar4 = local_38.Data.ArrayNum;
  local_60 = CONCAT44(local_60._4_4_,iVar4);
  local_70 = this;
  if (iVar4 == 0) {
    local_60 = local_38.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,&local_68,iVar4,(int *)((longlong)&local_60 + 4));
    memcpy(local_68.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  local_58 = param_2;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_50,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_a8);
  local_90 = &local_b8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x50,&local_b8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__LoadAndCachePackage_FTransactionallySafeAsyncPackageLoader__AEAAHAEBVFPackagePath__V1_V__TDelegate___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____W4EPackageFlags__HHPEBVFLinkerInstancingContext__I_Z___V__6B_
    ;
    puVar5[4] = 0;
    puVar5[3] = local_70;
    puVar5[4] = local_68.Data;
    local_68.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar5 + 5) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = local_60._4_4_;
    local_60 = 0;
    *(FName *)(puVar5 + 6) = local_58;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar5 + 7),&local_50);
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_50);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  pIVar1 = this->WrappedPackageLoader;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x30);
  local_c8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_c0,(FReadAccessScope *)&local_a8);
  if ((local_b8.DelegateSize != 0) &&
     (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_b8.DelegateAllocator + 0x50))
              (local_b8.DelegateAllocator,&local_d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_a8);
  iVar4 = local_c8;
  FVar3.Data = local_d0.Data;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_a8);
  if (local_78 != 0) {
    if (local_80.Data == (FScriptContainerElement *)0x0) goto LAB_141f3bc90;
    (*(code *)**(undefined8 **)local_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
LAB_141f3bc90:
  local_80.Data = FVar3.Data;
  local_78 = iVar4;
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_a8);
  if ((local_c8 != 0) && (local_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  iVar4 = (*pcVar2)(pIVar1,param_1,param_2,&local_88,param_4,param_5,param_6,param_7,param_8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_a8);
  if ((local_b8.DelegateSize != 0) &&
     (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b8,0,0,0x10);
    local_b8.DelegateSize = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return iVar4;
}

// LoadPackage @ 141f3cd90

int __thiscall
FTransactionallySafeAsyncPackageLoader::LoadPackage
          (FTransactionallySafeAsyncPackageLoader *this,FPackagePath *param_1,
          FLoadPackageAsyncOptionalParams *param_2)

{
  uint uVar1;
  int iVar2;
  EPackageFlags EVar3;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  *pTVar4;
  FLinkerInstancingContext *pFVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  FName FVar9;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  int local_98;
  undefined1 local_90 [8];
  ForAnyElementType local_88;
  int local_80;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  ForAnyElementType local_58;
  int local_50;
  
  pTVar4 = (param_2->CompletionDelegate).Ptr;
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (pTVar4 != (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                 *)0x0) {
    TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>(&local_60,pTVar4);
  }
  iVar8 = param_2->PIEInstanceID;
  uVar1 = param_2->LoadFlags;
  pFVar5 = param_2->InstancingContext;
  iVar2 = param_2->PackagePriority;
  EVar3 = param_2->PackageFlags;
  local_90 = (undefined1  [8])0x0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_a8 = (undefined1  [8])0x0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_60,(FReadAccessScope *)&local_78);
  if ((local_50 != 0) && (local_58.Data != (FScriptContainerElement *)0x0)) {
    (**(code **)(*(longlong *)local_58.Data + 0x50))(local_58.Data,local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_78);
  iVar7 = local_98;
  FVar6.Data = local_a0.Data;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if (local_80 != 0) {
    if (local_88.Data == (FScriptContainerElement *)0x0) goto LAB_141f3ceb0;
    (*(code *)**(undefined8 **)local_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
LAB_141f3ceb0:
  local_88.Data = FVar6.Data;
  local_80 = iVar7;
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_78);
  if ((local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
    local_98 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  FVar9 = param_2->CustomPackageName;
  if (FVar9 == (FName)0x0) {
    FVar9 = FPackagePath::GetPackageFName(param_1);
    FVar9 = *(FName *)FVar9;
  }
  local_a8 = (undefined1  [8])0x0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (local_a8,(TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                       *)local_90);
  iVar8 = LoadAndCachePackage(this,param_1,FVar9,
                              (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                               *)local_a8,EVar3,iVar8,iVar2,pFVar5,uVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if ((local_80 != 0) && (local_88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_78);
  if ((local_50 != 0) && (local_58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ProgressDelegate).SharedReferenceCount.ReferenceController);
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(param_2->CompletionDelegate).Ptr;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this_00);
    ::operator_delete(this_00,0x18);
  }
  return iVar8;
}

// LoadPackage @ 141f3d0c0

int __thiscall
FTransactionallySafeAsyncPackageLoader::LoadPackage
          (FTransactionallySafeAsyncPackageLoader *this,FPackagePath *param_1,FName param_2,
          TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
          *param_3,EPackageFlags param_4,int param_5,int param_6,FLinkerInstancingContext *param_7,
          uint param_8)

{
  int iVar1;
  FName FVar2;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  local_20;
  
  if (param_2 == (FName)0x0) {
    FVar2 = FPackagePath::GetPackageFName(param_1);
    param_2 = *(FName *)FVar2;
  }
  local_20._0_8_ = 0;
  local_20._8_8_ = 0;
  local_20._16_4_ = 0;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&local_20,param_3);
  iVar1 = LoadAndCachePackage(this,param_1,param_2,&local_20,param_4,param_5,param_6,param_7,param_8
                             );
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return iVar1;
}

// NotifyConstructedDuringAsyncLoading @ 141f3ea40

void __thiscall
FTransactionallySafeAsyncPackageLoader::NotifyConstructedDuringAsyncLoading
          (FTransactionallySafeAsyncPackageLoader *this,UObject *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141f3ea47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedPackageLoader + 0xa0))();
  return;
}

// NotifyRegistrationComplete @ 141f3eb40

void __thiscall
FTransactionallySafeAsyncPackageLoader::NotifyRegistrationComplete
          (FTransactionallySafeAsyncPackageLoader *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f3eb47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedPackageLoader + 0xc0))();
  return;
}

// NotifyRegistrationEvent @ 141f3ed50

void __thiscall
FTransactionallySafeAsyncPackageLoader::NotifyRegistrationEvent
          (FTransactionallySafeAsyncPackageLoader *this,FName param_1,FName param_2,
          ENotifyRegistrationType param_3,ENotifyRegistrationPhase param_4,
          _func___cdecl_UObject_ptr *param_5,bool param_6,UObject *param_7)

{
                    /* WARNING: Could not recover jumptable at 0x000141f3ed67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedPackageLoader + 0xb0))();
  return;
}

// NotifyScriptVersePackage @ 141f3edd0

void __thiscall
FTransactionallySafeAsyncPackageLoader::NotifyScriptVersePackage
          (FTransactionallySafeAsyncPackageLoader *this,VPackage *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141f3edd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedPackageLoader + 0xb8))();
  return;
}

// NotifyUnreachableObjects @ 141f3ee90

void __thiscall
FTransactionallySafeAsyncPackageLoader::NotifyUnreachableObjects
          (FTransactionallySafeAsyncPackageLoader *this,TArrayView<FUObjectItem_*,int> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141f3ee97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedPackageLoader + 0xa8))();
  return;
}

// ProcessLoading @ 141f40550

Type __thiscall
FTransactionallySafeAsyncPackageLoader::ProcessLoading
          (FTransactionallySafeAsyncPackageLoader *this,bool param_1,bool param_2,double param_3)

{
  Type TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f40557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)((longlong)*this->WrappedPackageLoader + 0x38))();
  return TVar1;
}

// ProcessLoadingUntilComplete @ 141f40570

Type __thiscall
FTransactionallySafeAsyncPackageLoader::ProcessLoadingUntilComplete
          (FTransactionallySafeAsyncPackageLoader *this,TFunctionRef<bool___cdecl(void)> *param_1,
          double param_2)

{
  Type TVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_1;
  local_10 = *(undefined8 *)&param_1->field_0x8;
  TVar1 = (**(code **)((longlong)*this->WrappedPackageLoader + 0x40))
                    (this->WrappedPackageLoader,&local_18);
  return TVar1;
}

// ResumeLoading @ 141f43f60

void __thiscall
FTransactionallySafeAsyncPackageLoader::ResumeLoading(FTransactionallySafeAsyncPackageLoader *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f43f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedPackageLoader + 0x58))();
  return;
}

// ShouldAlwaysLoadPackageAsync @ 141f4d970

bool __thiscall
FTransactionallySafeAsyncPackageLoader::ShouldAlwaysLoadPackageAsync
          (FTransactionallySafeAsyncPackageLoader *this,FPackagePath *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*this->WrappedPackageLoader + 0x20))();
  return cVar1 != '\0';
}

// ShutdownLoading @ 141f4dc40

void __thiscall
FTransactionallySafeAsyncPackageLoader::ShutdownLoading
          (FTransactionallySafeAsyncPackageLoader *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f4dc47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedPackageLoader + 0x10))();
  return;
}

// StartThread @ 141f4dcf0

void __thiscall
FTransactionallySafeAsyncPackageLoader::StartThread(FTransactionallySafeAsyncPackageLoader *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f4dcf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedPackageLoader + 0x18))();
  return;
}

// SuspendLoading @ 141f4df20

void __thiscall
FTransactionallySafeAsyncPackageLoader::SuspendLoading(FTransactionallySafeAsyncPackageLoader *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f4df27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WrappedPackageLoader + 0x50))();
  return;
}

