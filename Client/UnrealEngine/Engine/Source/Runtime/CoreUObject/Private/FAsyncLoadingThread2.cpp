// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 69

// FAsyncLoadingThread2 @ 142307550

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncLoadingThread2 * __thiscall
FAsyncLoadingThread2::FAsyncLoadingThread2(FAsyncLoadingThread2 *this,FIoDispatcher *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<int,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAsyncPackage2_*,0>_>
  *this_00;
  TArray<FAsyncLoadEventSpec,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FAsyncLoadEventQueue2 *pFVar5;
  TUniquePtr<FAsyncLoadingThreadState2,TDefaultDelete<FAsyncLoadingThreadState2>_> *pTVar6;
  int *piVar7;
  undefined1 *puVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar13;
  TStripedMap<32,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
  *pTVar14;
  FPackageStore *pFVar15;
  atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*> aVar16;
  ulonglong uVar17;
  FAsyncLoadingThread2 *pFVar18;
  FEvent *pFVar19;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  FAsyncLoadingThreadState2 *pFVar20;
  FAsyncLoadingThreadState2 *pFVar21;
  undefined1 *puVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  FAsyncLoadingThreadState2 *pFVar26;
  uint *puVar27;
  uint uVar28;
  uint uStack_a4;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  longlong local_40;
  
  pFVar21 = (FAsyncLoadingThreadState2 *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->Thread = (FRunnableThread *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPackageLoader__;
  this->bStopRequested = (atomic<bool>)0x0;
  this->SuspendRequestedCount = (atomic<int>)0x0;
  this->bHasRegisteredAllScriptObjects = false;
  this->bThreadStarted = (atomic<bool>)0x0;
  this->FileOpenLogWrapper = (FPlatformFileOpenLog *)0x0;
  (this->LoadedPackagesToProcess).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedPackagesToProcess).ArrayNum = 0;
  (this->LoadedPackagesToProcess).ArrayMax = 0;
  (this->MainThreadWakeEvent).State = (atomic<unsigned_char>)0x0;
  (this->DeferredDeletePackages).Head = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0;
  aVar13 = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar13 = 0;
  (this->DeferredDeletePackages).Head = aVar13;
  (this->DeferredDeletePackages).Tail = (FNode *)aVar13;
  (this->DeferredDeletePackagesLock).State = (atomic<unsigned_char>)0x0;
  (this->CompletedPackageRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompletedPackageRequests).ArrayNum = 0;
  (this->CompletedPackageRequests).ArrayMax = 0;
  (this->FailedPackageRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FailedPackageRequests).ArrayNum = 0;
  (this->FailedPackageRequests).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->FailedPackageRequestsCritical,4000);
  pTVar14 = &this->AsyncPackageLookup;
  lVar23 = 0x20;
  do {
    *(undefined8 *)pTVar14 = 0;
    *(undefined8 *)&pTVar14->field_0x8 = 0;
    *(undefined8 *)&pTVar14->field_0x10 = 0;
    *(undefined8 *)&pTVar14->field_0x28 = 0;
    *(undefined4 *)&pTVar14->field_0x30 = 0;
    *(undefined4 *)&pTVar14->field_0x34 = 0x80;
    *(undefined4 *)&pTVar14->field_0x38 = 0xffffffff;
    *(undefined4 *)&pTVar14->field_0x3c = 0;
    *(undefined8 *)&pTVar14->field_0x48 = 0;
    *(undefined4 *)&pTVar14->field_0x50 = 0;
    pTVar14 = (TStripedMap<32,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
               *)&pTVar14->field_0x58;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  (this->ExternalReadQueue).Head = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0;
  aVar13 = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar13 = 0;
  (this->ExternalReadQueue).Head = aVar13;
  (this->ExternalReadQueue).Tail = (FNode *)aVar13;
  this->PendingIoRequestsCounter = (atomic<int>)0x0;
  *(undefined8 *)&(this->PendingRequests).Elements = 0;
  *(undefined8 *)&(this->PendingRequests).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingRequests).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingRequests).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingRequests).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingRequests).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingRequests).Elements.field_0x34 = 0;
  (this->PendingRequests).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingRequests).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PendingRequestsCritical,4000);
  this_00 = &this->RequestIdToPackageMap;
  *(undefined8 *)&this_00->field_0x0 = 0;
  puVar1 = &(this->RequestIdToPackageMap).field_0x48;
  *(undefined8 *)&(this->RequestIdToPackageMap).field_0x8 = 0;
  *(undefined8 *)&(this->RequestIdToPackageMap).field_0x20 = 0;
  *(undefined4 *)&(this->RequestIdToPackageMap).field_0x28 = 0;
  *(undefined4 *)&(this->RequestIdToPackageMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestIdToPackageMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestIdToPackageMap).field_0x34 = 0;
  *(undefined8 *)&(this->RequestIdToPackageMap).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  this->QueuedPackagesCounter = (atomic<int>)0x0;
  this->LoadingPackagesCounter = (atomic<int>)0x0;
  (this->PackagesWithRemainingWorkCounter).WakeEvent = (FManualResetEvent *)0x0;
  (this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter = (atomic<int>)0x0;
  this->AsyncThreadReady = (atomic<int>)0x0;
  (this->QueuedPackagesToCancel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedPackagesToCancel).ArrayNum = 0;
  (this->QueuedPackagesToCancel).ArrayMax = 0;
  *(undefined8 *)&(this->PackagesToCancel).Elements = 0;
  *(undefined8 *)&(this->PackagesToCancel).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PackagesToCancel).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x34 = 0;
  (this->PackagesToCancel).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PackagesToCancel).HashSize = 0;
  this->AsyncLoadingThreadID = (atomic<unsigned_int>)0x0;
  this->IoDispatcher = param_1;
  pFVar15 = FPackageStore::Get();
  this->PackageStore = pFVar15;
  FGlobalImportStore::FGlobalImportStore(&this->GlobalImportStore,this);
  (this->PackageRequestQueue).Head = (atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*>)0x0;
  aVar16 = (atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*>)FMemory::Malloc(0x68,8);
  *(undefined8 *)aVar16 = 0;
  (this->PackageRequestQueue).Head = aVar16;
  (this->PackageRequestQueue).Tail = (FNode *)aVar16;
  (this->PendingPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingPackages).ArrayNum = 0;
  (this->PendingPackages).ArrayMax = 0;
  *(undefined8 *)&this->PendingCDOs = 0;
  *(undefined8 *)&(this->PendingCDOs).field_0x8 = 0;
  *(undefined8 *)&(this->PendingCDOs).field_0x20 = 0;
  *(undefined4 *)&(this->PendingCDOs).field_0x28 = 0;
  *(undefined4 *)&(this->PendingCDOs).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingCDOs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingCDOs).field_0x34 = 0;
  *(undefined8 *)&(this->PendingCDOs).field_0x40 = 0;
  *(undefined4 *)&(this->PendingCDOs).field_0x48 = 0;
  (this->PendingCDOsRecursiveStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCDOsRecursiveStack).ArrayNum = 0;
  (this->PendingCDOsRecursiveStack).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->UnreachableObjectsCritical,4000);
  (this->UnreachableObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnreachableObjects).ArrayNum = 0;
  (this->UnreachableObjects).ArrayMax = 0;
  (this->GameThreadState).Ptr = (FAsyncLoadingThreadState2 *)0x0;
  (this->AsyncLoadingThreadState).Ptr = (FAsyncLoadingThreadState2 *)0x0;
  this->ConditionalBeginProcessExportsTick = 0;
  this->ConditionalBeginResolveImportsTick = 0;
  this->ConditionalBeginPostLoadTick = 0;
  this->ConditionalFinishLoadingTick = 0;
  FZenaphore::FZenaphore(&this->AltZenaphore);
  (this->GraphAllocator).TotalArcCount = (atomic<__int64>)0x0;
  (this->GraphAllocator).TotalAllocated = (atomic<__int64>)0x0;
  FAsyncLoadEventQueue2::FAsyncLoadEventQueue2(&this->EventQueue);
  FAsyncLoadEventQueue2::FAsyncLoadEventQueue2(&this->MainThreadEventQueue);
  pTVar3 = &this->EventSpecs;
  (this->EventQueue).Zenaphore = &this->AltZenaphore;
  piVar7 = &(this->EventSpecs).ArrayNum;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar4 = &(this->PendingPackages).ArrayMax;
  *piVar7 = 0;
  (this->EventSpecs).ArrayMax = 0;
  if (*piVar4 < 0x200) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x200,&(this->PendingPackages).AllocatorInstance,(this->PendingPackages).ArrayNum
               ,piVar4);
  }
  if ((uint)(*(int *)&(this->RequestIdToPackageMap).field_0x8 -
            *(int *)&(this->RequestIdToPackageMap).field_0x34) < 0x200) {
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,0x200);
    for (lVar23 = 0x3f; 0x20fUL >> lVar23 == 0; lVar23 = lVar23 + -1) {
    }
    uVar28 = 1 << ((byte)lVar23 & 0x1f);
    if ((*(int *)puVar1 == 0) || (*(int *)puVar1 < (int)uVar28)) {
      puVar2 = &(this->RequestIdToPackageMap).field_0x38;
      *(uint *)puVar1 = uVar28;
      if (*(longlong *)&(this->RequestIdToPackageMap).field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->RequestIdToPackageMap).field_0x40,0,0,4);
      }
      if (uVar28 != 0) {
        uVar24 = uVar28;
        if (uVar28 < 2) {
          if (*(longlong *)&(this->RequestIdToPackageMap).field_0x40 != 0) {
            uVar24 = 0;
            goto LAB_142307956;
          }
        }
        else {
LAB_142307956:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->RequestIdToPackageMap).field_0x40,0,uVar24,4);
        }
        if (0 < (int)uVar28) {
          uVar25 = (ulonglong)uVar28;
          pFVar20 = pFVar21;
          do {
            puVar8 = *(undefined1 **)&(this->RequestIdToPackageMap).field_0x40;
            puVar22 = puVar2;
            if (puVar8 != (undefined1 *)0x0) {
              puVar22 = puVar8;
            }
            uVar17 = (longlong)(int)uVar28 - 1U & (ulonglong)pFVar20;
            pFVar20 = (FAsyncLoadingThreadState2 *)
                      ((longlong)&(pFVar20->NodesToFire).AllocatorInstance.Data + 1);
            *(undefined4 *)(puVar22 + uVar17 * 4) = 0xffffffff;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
      }
      if (*(int *)puVar1 != 0) {
        uVar28 = *(uint *)&(this->RequestIdToPackageMap).field_0x28;
        local_60.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->RequestIdToPackageMap).field_0x10;
        local_98 = 0;
        uStack_94 = 1;
        uStack_84 = 0;
        uStack_80 = 0;
        pFVar20 = pFVar21;
        if (uVar28 != 0) {
          puVar27 = *(uint **)&(this->RequestIdToPackageMap).field_0x20;
          if (puVar27 == (uint *)0x0) {
            puVar27 = (uint *)local_60.Array;
          }
          uVar24 = *puVar27;
          pFVar26 = pFVar21;
          while (uVar24 == 0) {
            uStack_80 = (int)pFVar26 + 0x20;
            pFVar26 = (FAsyncLoadingThreadState2 *)(ulonglong)uStack_80;
            iVar12 = (int)pFVar20;
            local_98 = iVar12 + 1;
            pFVar20 = (FAsyncLoadingThreadState2 *)(ulonglong)local_98;
            if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_98)
            goto LAB_142307a4d;
            uVar24 = puVar27[(longlong)iVar12 + 1];
          }
          uStack_94 = -uVar24 & uVar24;
          uVar25 = (ulonglong)uStack_94 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          uStack_84 = (uStack_80 - 1) + (int)lVar23;
          if ((int)uVar28 < (int)uStack_84) {
LAB_142307a4d:
            uStack_84 = uVar28;
          }
          pFVar20 = (FAsyncLoadingThreadState2 *)(ulonglong)uStack_84;
        }
        local_60._padding_ = CONCAT44(uStack_94,local_98);
        local_60.CurrentBitIndex = uStack_84;
        local_60.UnvisitedBitMask = 0xffffffff;
        local_60._28_4_ = uStack_7c;
        local_60.BaseBitIndex = uStack_80;
        if ((int)pFVar20 < *(int *)&(this->RequestIdToPackageMap).field_0x28) {
          do {
            iVar12 = (int)pFVar20;
            uVar28 = *(int *)puVar1 - 1U &
                     *(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x18);
            lVar23 = *(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x18;
            *(uint *)(lVar23 + 0x14) = uVar28;
            puVar8 = *(undefined1 **)&(this->RequestIdToPackageMap).field_0x40;
            puVar22 = puVar2;
            if (puVar8 != (undefined1 *)0x0) {
              puVar22 = puVar8;
            }
            uVar25 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar28;
            *(undefined4 *)(lVar23 + 0x10) = *(undefined4 *)(puVar22 + uVar25 * 4);
            *(int *)(puVar22 + uVar25 * 4) = iVar12;
            local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
            pFVar20 = (FAsyncLoadingThreadState2 *)(ulonglong)(uint)local_60.CurrentBitIndex;
          } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
        }
      }
    }
  }
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x20,8,10,&pTVar3->AllocatorInstance,piVar7,&(this->EventSpecs).ArrayMax);
  DefaultConstructItems<FAsyncLoadEventSpec,int>
            ((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x20,10);
  pFVar5 = &this->EventQueue;
  if ((*piVar7 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FAsyncLoadingThread2 *)(*pcVar10)();
    return pFVar18;
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  *(code **)pFVar9 = FAsyncPackage2::Event_ProcessPackageSummary;
  *(FAsyncLoadEventQueue2 **)(pFVar9 + 8) = pFVar5;
  *(ulonglong *)(pFVar9 + 0x10) = CONCAT44(uStack_a4,2);
  *(wchar_t **)(pFVar9 + 0x18) = L"ProcessSummary";
  if ((*piVar7 < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FAsyncLoadingThread2 *)(*pcVar10)();
    return pFVar18;
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  *(code **)(pFVar9 + 0x20) = FAsyncPackage2::Event_ProcessDependencies;
  *(FAsyncLoadEventQueue2 **)(pFVar9 + 0x28) = pFVar5;
  *(ulonglong *)(pFVar9 + 0x30) = (ulonglong)uStack_a4 << 0x20;
  *(wchar_t **)(pFVar9 + 0x38) = L"ProcessDependencies";
  if ((*piVar7 < 3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FAsyncLoadingThread2 *)(*pcVar10)();
    return pFVar18;
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  *(code **)(pFVar9 + 0x40) = FAsyncPackage2::Event_DependenciesReady;
  *(FAsyncLoadEventQueue2 **)(pFVar9 + 0x48) = pFVar5;
  *(ulonglong *)(pFVar9 + 0x50) = (ulonglong)uStack_a4 << 0x20;
  *(wchar_t **)(pFVar9 + 0x58) = L"DependenciesReady";
  if ((*piVar7 < 4) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FAsyncLoadingThread2 *)(*pcVar10)();
    return pFVar18;
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  *(code **)(pFVar9 + 0x60) = FAsyncPackage2::Event_CreateLinkerLoadExports;
  *(FAsyncLoadEventQueue2 **)(pFVar9 + 0x68) = pFVar5;
  *(ulonglong *)(pFVar9 + 0x70) = (ulonglong)uStack_a4 << 0x20;
  *(wchar_t **)(pFVar9 + 0x78) = L"CreateLinkerLoadExports";
  if ((*piVar7 < 5) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FAsyncLoadingThread2 *)(*pcVar10)();
    return pFVar18;
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  *(code **)(pFVar9 + 0x80) = FAsyncPackage2::Event_ResolveLinkerLoadImports;
  *(FAsyncLoadEventQueue2 **)(pFVar9 + 0x88) = pFVar5;
  *(ulonglong *)(pFVar9 + 0x90) = (ulonglong)uStack_a4 << 0x20;
  *(wchar_t **)(pFVar9 + 0x98) = L"ResolveLinkerLoadImports";
  if ((*piVar7 < 6) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FAsyncLoadingThread2 *)(*pcVar10)();
    return pFVar18;
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  *(code **)(pFVar9 + 0xa0) = FAsyncPackage2::Event_PreloadLinkerLoadExports;
  *(FAsyncLoadEventQueue2 **)(pFVar9 + 0xa8) = pFVar5;
  *(ulonglong *)(pFVar9 + 0xb0) = CONCAT44(uStack_a4,2);
  *(wchar_t **)(pFVar9 + 0xb8) = L"PreloadLinkerLoadExports";
  if ((*piVar7 < 7) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FAsyncLoadingThread2 *)(*pcVar10)();
    return pFVar18;
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  *(code **)(pFVar9 + 0xc0) = FAsyncPackage2::Event_ExportsDone;
  *(FAsyncLoadEventQueue2 **)(pFVar9 + 200) = pFVar5;
  *(ulonglong *)(pFVar9 + 0xd0) = (ulonglong)uStack_a4 << 0x20;
  *(wchar_t **)(pFVar9 + 0xd8) = L"ExportsSerialized";
  if ((*piVar7 < 8) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FAsyncLoadingThread2 *)(*pcVar10)();
    return pFVar18;
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  *(code **)(pFVar9 + 0xe0) = FAsyncPackage2::Event_ProcessExportBundle;
  *(FAsyncLoadEventQueue2 **)(pFVar9 + 0xe8) = pFVar5;
  *(ulonglong *)(pFVar9 + 0xf0) = (ulonglong)uStack_a4 << 0x20;
  *(wchar_t **)(pFVar9 + 0xf8) = L"ExportBundle_Process";
  if ((*piVar7 < 9) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FAsyncLoadingThread2 *)(*pcVar10)();
    return pFVar18;
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  *(code **)(pFVar9 + 0x100) = FAsyncPackage2::Event_PostLoadExportBundle;
  *(FAsyncLoadEventQueue2 **)(pFVar9 + 0x108) = pFVar5;
  *(ulonglong *)(pFVar9 + 0x110) = (ulonglong)uStack_a4 << 0x20;
  *(wchar_t **)(pFVar9 + 0x118) = L"ExportBundle_PostLoad";
  if ((*piVar7 < 10) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FAsyncLoadingThread2 *)(*pcVar10)();
    return pFVar18;
  }
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  *(code **)(pFVar9 + 0x120) = FAsyncPackage2::Event_DeferredPostLoadExportBundle;
  *(FAsyncLoadEventQueue2 **)(pFVar9 + 0x128) = &this->MainThreadEventQueue;
  *(ulonglong *)(pFVar9 + 0x130) = (ulonglong)uStack_a4 << 0x20;
  *(wchar_t **)(pFVar9 + 0x138) = L"ExportBundle_DeferredPostLoad";
  pFVar19 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->CancelLoadingEvent = pFVar19;
  pFVar19 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->ThreadSuspendedEvent = pFVar19;
  pFVar19 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->ThreadResumedEvent = pFVar19;
  this->AsyncLoadingTickCounter = 0;
  this_01 = FCoreUObjectDelegates::GetGarbageCollectStartedDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FAsyncLoadingThread2>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_01,(FAsyncLoadingThread2 *)&stack0x00000018,(pmf_fded8c1a *)this);
  FAsyncLoadingThreadState2::TlsSlot = TlsAlloc();
  pFVar20 = ::operator_new(0x80);
  if (pFVar20 != (FAsyncLoadingThreadState2 *)0x0) {
    (pFVar20->NodesToFire).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->NodesToFire).ArrayNum = 0;
    (pFVar20->NodesToFire).ArrayMax = 0;
    (pFVar20->CurrentlyExecutingEventNodeStack).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar20->CurrentlyExecutingEventNodeStack).ArrayNum = 0;
    (pFVar20->CurrentlyExecutingEventNodeStack).ArrayMax = 0;
    (pFVar20->SyncLoadContextStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->SyncLoadContextStack).ArrayNum = 0;
    (pFVar20->SyncLoadContextStack).ArrayMax = 0;
    (pFVar20->PackagesOnStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->PackagesOnStack).ArrayNum = 0;
    (pFVar20->PackagesOnStack).ArrayMax = 0;
    (pFVar20->SyncLoadContextsCreatedOnOtherThreads).Head =
         (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)0x0;
    (pFVar20->SyncLoadContextsCreatedOnOtherThreads).Tail = (FNode *)0x0;
    (pFVar20->PackagesToReprioritize).Head =
         (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0;
    (pFVar20->PackagesToReprioritize).Tail = (FNode *)0x0;
    pFVar20->bIsAsyncLoadingThread = false;
    pFVar20->bCanAccessAsyncLoadingThreadData = false;
    pFVar20->bIsActive = (atomic<bool>)0x0;
    pFVar20->bShouldFireNodes = false;
    pFVar20->bUseTimeLimit = false;
    *(undefined3 *)&pFVar20->field_0x65 = 0;
    pFVar20->TimeLimit = 0.0;
    pFVar20->StartTime = 0.0;
    pFVar20->LastTestTime = 0.0;
    pFVar21 = FAsyncLoadingThreadState2::FAsyncLoadingThreadState2(pFVar20);
  }
  pTVar6 = &this->GameThreadState;
  if (pTVar6 == (TUniquePtr<FAsyncLoadingThreadState2,TDefaultDelete<FAsyncLoadingThreadState2>_> *)
                &local_40) {
    if (pFVar21 == (FAsyncLoadingThreadState2 *)0x0) goto LAB_142308082;
    FAsyncLoadingThreadState2::~FAsyncLoadingThreadState2(pFVar21);
  }
  else {
    pFVar20 = pTVar6->Ptr;
    pTVar6->Ptr = pFVar21;
    if (pFVar20 == (FAsyncLoadingThreadState2 *)0x0) goto LAB_142308082;
    FAsyncLoadingThreadState2::~FAsyncLoadingThreadState2(pFVar20);
    pFVar21 = pFVar20;
  }
  ::operator_delete(pFVar21,0x80);
LAB_142308082:
  pTVar6->Ptr->bCanAccessAsyncLoadingThreadData = true;
  pFVar21 = pTVar6->Ptr;
  pFVar5->OwnerThread = pFVar21;
  (this->MainThreadEventQueue).OwnerThread = pFVar21;
  FAsyncLoadingThreadState2::Set(pFVar21);
  if (4 < (byte)LogStreaming._0_1_) {
    FAsyncLoadingThreadSettings::Get();
    FAsyncLoadingThreadSettings::Get();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  return this;
}

// ~FAsyncLoadingThread2 @ 142309d10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncLoadingThread2::~FAsyncLoadingThread2(FAsyncLoadingThread2 *this)

{
  FRunnableThread *pFVar1;
  FScriptContainerElement *pFVar2;
  FAsyncLoadingThreadState2 *pFVar3;
  void *pvVar4;
  ForElementType<FSetElementId> FVar5;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar6;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPackageLoader__;
  if (this->Thread != (FRunnableThread *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
    FGenericPlatformProcess::ReturnSynchEventToPool(this->CancelLoadingEvent);
    this->CancelLoadingEvent = (FEvent *)0x0;
    FGenericPlatformProcess::ReturnSynchEventToPool(this->ThreadSuspendedEvent);
    this->ThreadSuspendedEvent = (FEvent *)0x0;
    FGenericPlatformProcess::ReturnSynchEventToPool(this->ThreadResumedEvent);
    this->ThreadResumedEvent = (FEvent *)0x0;
  }
  pFVar2 = (this->EventSpecs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MainThreadEventQueue).ExternalQueue.InternalQueues.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->MainThreadEventQueue).ExternalCritical);
  pFVar2 = (this->MainThreadEventQueue).LocalQueue.InternalQueues.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EventQueue).ExternalQueue.InternalQueues.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->EventQueue).ExternalCritical);
  pFVar2 = (this->EventQueue).LocalQueue.InternalQueues.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FZenaphore::~FZenaphore(&this->AltZenaphore);
  pFVar3 = (this->AsyncLoadingThreadState).Ptr;
  if (pFVar3 != (FAsyncLoadingThreadState2 *)0x0) {
    FAsyncLoadingThreadState2::~FAsyncLoadingThreadState2(pFVar3);
    ::operator_delete(pFVar3,0x80);
  }
  pFVar3 = (this->GameThreadState).Ptr;
  if (pFVar3 != (FAsyncLoadingThreadState2 *)0x0) {
    FAsyncLoadingThreadState2::~FAsyncLoadingThreadState2(pFVar3);
    ::operator_delete(pFVar3,0x80);
  }
  pFVar2 = (this->UnreachableObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UnreachableObjectsCritical);
  pFVar2 = (this->PendingCDOsRecursiveStack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PendingCDOs).field_0x48 = 0;
  pvVar4 = *(void **)&(this->PendingCDOs).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingCDOs);
  pFVar2 = (this->PendingPackages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TMpscQueue<FPackageRequest,FMemory>::~TMpscQueue<FPackageRequest,FMemory>
            (&this->PackageRequestQueue);
  FGlobalImportStore::~FGlobalImportStore(&this->GlobalImportStore);
  (this->PackagesToCancel).HashSize = 0;
  FVar5 = (this->PackagesToCancel).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FAsyncPackage2_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FAsyncPackage2_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PackagesToCancel).Elements);
  pFVar2 = (this->QueuedPackagesToCancel).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->RequestIdToPackageMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->RequestIdToPackageMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RequestIdToPackageMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingRequestsCritical);
  (this->PendingRequests).HashSize = 0;
  FVar5 = (this->PendingRequests).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingRequests).Elements);
  aVar6 = ((this->ExternalReadQueue).Tail)->Next;
  FMemory::Free((this->ExternalReadQueue).Tail);
  while (aVar6 != (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
    (this->ExternalReadQueue).Tail = (FNode *)aVar6;
    aVar6 = *(atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> *)aVar6;
    FMemory::Free((this->ExternalReadQueue).Tail);
  }
  TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
  ::
  ~TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
            ((TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
              *)&this->AsyncPackageLookup);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FailedPackageRequestsCritical);
  DestructItems<FAsyncLoadingThread2::FCompletedPackageRequest,int>
            ((FCompletedPackageRequest *)(this->FailedPackageRequests).AllocatorInstance.Data,
             (this->FailedPackageRequests).ArrayNum);
  pFVar2 = (this->FailedPackageRequests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FAsyncLoadingThread2::FCompletedPackageRequest,int>
            ((FCompletedPackageRequest *)(this->CompletedPackageRequests).AllocatorInstance.Data,
             (this->CompletedPackageRequests).ArrayNum);
  pFVar2 = (this->CompletedPackageRequests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  aVar6 = ((this->DeferredDeletePackages).Tail)->Next;
  FMemory::Free((this->DeferredDeletePackages).Tail);
  while (aVar6 != (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
    (this->DeferredDeletePackages).Tail = (FNode *)aVar6;
    aVar6 = *(atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> *)aVar6;
    FMemory::Free((this->DeferredDeletePackages).Tail);
  }
  pFVar2 = (this->LoadedPackagesToProcess).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IAsyncPackageLoader__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 14230e560

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncPackage2 * __thiscall
`FAsyncLoadingThread2::FindOrInsertPackage'::__l3::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  FAsyncLoadingThread2 *pFVar2;
  FAsyncPackageDesc2 *pFVar3;
  FAsyncLoadingThreadState2 *pFVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  FAsyncPackage2 *pFVar9;
  atomic<__int64> aVar10;
  ForElementType<FSetElementId> FVar11;
  FString local_18;
  
  pFVar2 = *(FAsyncLoadingThread2 **)((longlong)this + 8);
  pFVar3 = *(FAsyncPackageDesc2 **)((longlong)this + 0x18);
  pFVar4 = *(FAsyncLoadingThreadState2 **)((longlong)this + 0x10);
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar11 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar11 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar8 = *(int *)((longlong)FVar11 +
                    (ulonglong)
                    (GAsyncLoading2_DebugPackageIds.HashSize - 1U & (uint)(pFVar3->UPackageId).Id) *
                    4);
    if (iVar8 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar8 * 0x10) ==
            (pFVar3->UPackageId).Id) {
          bVar6 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FAsyncPackage2 *)(*pcVar5)();
            return pFVar9;
          }
          break;
        }
        iVar8 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 + (longlong)iVar8 * 0x10)
        ;
      } while (iVar8 != -1);
    }
  }
  pFVar9 = ::operator_new(0x610);
  if (pFVar9 == (FAsyncPackage2 *)0x0) {
    pFVar9 = (FAsyncPackage2 *)0x0;
  }
  else {
    pFVar9 = FAsyncPackage2::FAsyncPackage2
                       (pFVar9,pFVar4,pFVar3,pFVar2,&pFVar2->GraphAllocator,
                        (FAsyncLoadEventSpec *)(pFVar2->EventSpecs).AllocatorInstance.Data);
  }
  **(undefined8 **)this = pFVar9;
  if (**(longlong **)this == 0) {
    ::FName::ToString((FName *)(*(longlong *)((longlong)this + 0x18) + 0x30),&local_18);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x152c,L"Failed to create async package %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FAsyncPackage2 *)(*pcVar5)();
      return pFVar9;
    }
  }
  LOCK();
  *(int *)(**(longlong **)this + 0x478) = *(int *)(**(longlong **)this + 0x478) + 1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0xca4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  aVar10 = (atomic<__int64>)(longlong)*(int *)(*(longlong *)((longlong)this + 8) + 0xca4);
  if (__GTraceCounterAsyncLoadingLoadingPackages.Value != aVar10) {
    LOCK();
    UNLOCK();
    __GTraceCounterAsyncLoadingLoadingPackages.Value = aVar10;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterAsyncLoadingLoadingPackages.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterAsyncLoadingLoadingPackages.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterAsyncLoadingLoadingPackages.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterAsyncLoadingLoadingPackages.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterAsyncLoadingLoadingPackages.CounterId._2_2_ = 0;
          __GTraceCounterAsyncLoadingLoadingPackages.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterAsyncLoadingLoadingPackages.CounterId._0_2_,
                 (long64)__GTraceCounterAsyncLoadingLoadingPackages.Value);
    }
  }
  **(undefined1 **)((longlong)this + 0x20) = 1;
  return (FAsyncPackage2 *)**(undefined8 **)this;
}

// operator() @ 14230e760

void __thiscall
`FAsyncLoadingThread2::CollectUnreachableObjects'::__l10::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  UObjectBase *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FUObjectItem **ppFVar6;
  FLinkerLoad *pFVar7;
  
  ppFVar6 = TArrayView<FUObjectItem_*,int>::operator[]
                      (*(TArrayView<FUObjectItem_*,int> **)this,param_1);
  plVar2 = *(longlong **)((longlong)this + 8);
  this_00 = ((*ppFVar6)->field1_0x8).Object;
  uVar5 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  puVar1 = (undefined8 *)(*plVar2 + (longlong)param_1 * 0x18);
  *(int *)(puVar1 + 1) = this_00->InternalIndex;
  *(FName *)((longlong)puVar1 + 0xc) = (this_00->NamePrivate).Name;
  if (((this_00->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr == (UObject *)0x0) &&
     ((this_00[1]._padding_ & 4) != 0)) {
    *puVar1 = *(undefined8 *)&this_00[1].ObjectFlags;
  }
  if (*(char *)((longlong)this + 0x10) != '\0') {
    pFVar7 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00);
    if (pFVar7 != (FLinkerLoad *)0x0) {
      UObject::SetLinker((UObject *)this_00,(FLinkerLoad *)0x0,-1,true,false);
    }
  }
  return;
}

// operator() @ 14230eb70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FAsyncLoadingThread2::FindOrInsertPackage'::__l3::<lambda_2>::operator()
          (void *this,FAsyncPackage2 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  FAsyncPackage2 *pFVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
  *pFVar9;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> *pFVar10;
  bool bVar11;
  
  **(undefined8 **)this = param_1;
  if (0 < **(int **)((longlong)this + 8)) {
    FAsyncPackage2::AddRequestID
              ((FAsyncPackage2 *)**(undefined8 **)this,
               *(FAsyncLoadingThreadState2 **)((longlong)this + 0x10),**(int **)((longlong)this + 8)
              );
  }
  if (*(int *)(**(longlong **)this + 0x1e4) < *(int *)(*(longlong *)((longlong)this + 8) + 4)) {
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5437,"UpdatePackagePriority",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x153d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5437);
    }
    FAsyncLoadingThread2::UpdatePackagePriorityRecursive
              (*(FAsyncLoadingThread2 **)((longlong)this + 0x18),
               *(FAsyncLoadingThreadState2 **)((longlong)this + 0x10),
               (FAsyncPackage2 *)**(undefined8 **)this,
               *(int *)(*(longlong *)((longlong)this + 8) + 4));
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  plVar2 = *(longlong **)((longlong)this + 0x20);
  if (*plVar2 != 0) {
    lVar3 = **(longlong **)this;
    iVar8 = *(int *)(lVar3 + 0x5d8);
    if (iVar8 == *(int *)(lVar3 + 0x5dc)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>_>
                        (0x808,(ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                                *)(lVar3 + 0x5c0),(int *)(lVar3 + 0x5dc));
    }
    *(int *)(lVar3 + 0x5d8) = iVar8 + 1;
    pFVar9 = (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
              *)(lVar3 + 0x5c0);
    if (*(ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
          **)(lVar3 + 0x5d0) !=
        (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
         *)0x0) {
      pFVar9 = *(ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                 **)(lVar3 + 0x5d0);
    }
    *(longlong *)(pFVar9->InlineData + (longlong)iVar8 * 8) = *plVar2;
    *plVar2 = 0;
  }
  puVar1 = (undefined8 *)((longlong)this + 0x28);
  if (**(longlong **)((longlong)this + 0x28) != 0) {
    if (*(char *)(**(longlong **)this + 0x494) != '\0') {
      plVar2 = (longlong *)*puVar1;
      pFVar4 = (FAsyncPackage2 *)**(undefined8 **)this;
      if ((*plVar2 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FAsyncPackage2::CallProgressCallback
                (pFVar4,(FLoadPackageAsyncProgressDelegate *)*plVar2,Started);
    }
    if (1 < *(byte *)(**(longlong **)this + 0x494)) {
      plVar2 = (longlong *)*puVar1;
      pFVar4 = (FAsyncPackage2 *)**(undefined8 **)this;
      if ((*plVar2 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FAsyncPackage2::CallProgressCallback(pFVar4,(FLoadPackageAsyncProgressDelegate *)*plVar2,Read)
      ;
    }
    if (0xb < *(byte *)(**(longlong **)this + 0x494)) {
      plVar2 = (longlong *)*puVar1;
      pFVar4 = (FAsyncPackage2 *)**(undefined8 **)this;
      if ((*plVar2 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FAsyncPackage2::CallProgressCallback
                (pFVar4,(FLoadPackageAsyncProgressDelegate *)*plVar2,Serialized);
    }
    lVar3 = **(longlong **)this;
    lVar5 = (*(undefined8 **)((longlong)this + 0x28))[1];
    uVar6 = **(undefined8 **)((longlong)this + 0x28);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    iVar8 = *(int *)(lVar3 + 0x608);
    if (iVar8 == *(int *)(lVar3 + 0x60c)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>_>
                        (0x810,(ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> *)
                               (lVar3 + 0x5e0),(int *)(lVar3 + 0x60c));
    }
    *(int *)(lVar3 + 0x608) = iVar8 + 1;
    pFVar10 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> *)(lVar3 + 0x5e0);
    if (*(ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> **)(lVar3 + 0x600) !=
        (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> *)0x0) {
      pFVar10 = *(ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> **)
                 (lVar3 + 0x600);
    }
    *(undefined8 *)(pFVar10->InlineData + (longlong)iVar8 * 0x10) = uVar6;
    *(longlong *)(pFVar10->InlineData + (longlong)iVar8 * 0x10 + 8) = lVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return;
}

// operator() @ 14230f660

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FAsyncLoadingThread2::CollectUnreachableObjects'::__l13::<lambda_2>::operator()
          (void *this,int param_1)

{
  UObjectBase *pUVar1;
  longlong lVar2;
  FPackageId FVar3;
  FUObjectItem **ppFVar4;
  FLoadedPackageRef *pFVar5;
  
  ppFVar4 = TArrayView<FUObjectItem_*,int>::operator[]
                      (*(TArrayView<FUObjectItem_*,int> **)((longlong)this + 8),param_1);
  pUVar1 = ((*ppFVar4)->field1_0x8).Object;
  if (((pUVar1->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr == (UObject *)0x0) &&
     ((pUVar1[1]._padding_ & 4) != 0)) {
    lVar2 = *(longlong *)this;
    FVar3.Id._0_4_ = pUVar1[1].ObjectFlags;
    FVar3.Id._4_4_ = pUVar1[1].InternalIndex;
    AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0xd40));
    pFVar5 = FGlobalImportStore::FindPackageRefNoLock((FGlobalImportStore *)(lVar2 + 0xd38),FVar3);
    ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0xd40));
    if (pFVar5 != (FLoadedPackageRef *)0x0) {
      lVar2 = *(longlong *)this;
      AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0xd40));
      FGlobalImportStore::VerifyPackageForRemovalNoLock
                ((FGlobalImportStore *)(lVar2 + 0xd38),pFVar5);
      ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0xd40));
    }
  }
  lVar2 = *(longlong *)this;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0xd40));
  FGlobalImportStore::VerifyObjectForRemovalNoLock
            ((FGlobalImportStore *)(lVar2 + 0xd38),(UObject *)pUVar1);
                    /* WARNING: Could not recover jumptable at 0x00014230f738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0xd40));
  return;
}

// AddPendingCDOs @ 142310a00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::AddPendingCDOs
          (FAsyncLoadingThread2 *this,FAsyncPackage2 *param_1,
          TArray<UClass_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  TMap<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ForElementType<UClass_*> FVar5;
  undefined1 *puVar6;
  FEventLoadNode2 *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ulonglong *puVar13;
  undefined1 *puVar14;
  FEventLoadNode2 *pFVar15;
  undefined1 local_res18 [8];
  int local_res20 [2];
  FEventLoadNode2 *local_58;
  ulonglong local_50;
  ulonglong *local_48 [2];
  
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x121d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar5 = (param_2->AllocatorInstance).SecondaryData;
  piVar1 = &param_2->ArrayNum;
  iVar4 = *piVar1;
  if (FVar5 != (ForElementType<UClass_*>)0x0) {
    param_2 = (TArray<UClass_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar5;
  }
  FVar5 = (ForElementType<UClass_*>)((longlong)param_2 + (longlong)iVar4 * 8);
  do {
    if (*piVar1 != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((ForElementType<UClass_*>)param_2 == FVar5) {
      return;
    }
    pFVar11 = (this->PendingCDOsRecursiveStack).AllocatorInstance.Data;
    local_50 = *(ulonglong *)param_2;
    pFVar3 = pFVar11 + (longlong)(this->PendingCDOsRecursiveStack).ArrayNum * 8;
    for (; pFVar11 != pFVar3; pFVar11 = pFVar11 + 8) {
      if (*(ulonglong *)pFVar11 == local_50) goto LAB_142310ca7;
    }
    this_00 = &this->PendingCDOs;
    uVar12 = ((uint)(local_50 >> 0x14) & 0xffff ^ (uint)(local_50 >> 4)) * -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    uVar12 = uVar12 >> 0x10 ^ uVar12;
    if (*(int *)&(this->PendingCDOs).field_0x8 != *(int *)&(this->PendingCDOs).field_0x34) {
      puVar6 = *(undefined1 **)&(this->PendingCDOs).field_0x40;
      puVar14 = &(this->PendingCDOs).field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar14 = puVar6;
      }
      iVar10 = *(int *)(puVar14 +
                       (ulonglong)(*(int *)&(this->PendingCDOs).field_0x48 - 1U & uVar12) * 4);
      if (iVar10 != -1) {
        do {
          puVar13 = (ulonglong *)((longlong)iVar10 * 0x20 + *(longlong *)&this_00->field_0x0);
          if (*puVar13 == local_50) {
            if (puVar13 != (ulonglong *)0x0) goto LAB_142310b88;
            break;
          }
          iVar10 = (int)puVar13[3];
        } while (iVar10 != -1);
      }
    }
    local_48[0] = &local_50;
    TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
              ((TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_res20,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)uVar12,
               (bool *)local_48);
    puVar13 = (ulonglong *)((longlong)local_res20[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_142310b88:
    pFVar2 = (ForAnyElementType *)(puVar13 + 1);
    if (((param_1->PackageNodes).ArrayNum < 3) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (param_1->PackageNodes).DataPtr;
    pFVar15 = pFVar7 + 2;
    if ((pFVar7[2].bIsDone != (atomic<bool>)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsDone.load(std::memory_order_relaxed)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x16e9,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    LOCK();
    pFVar7[2].BarrierCount = (atomic<int>)((int)pFVar7[2].BarrierCount + 1);
    UNLOCK();
    local_58 = pFVar15;
    if (((pFVar2->Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar2->Data + (longlong)*(int *)((longlong)puVar13 + 0x14) * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (int)puVar13[2];
    if (iVar10 == *(int *)((longlong)puVar13 + 0x14)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar2,(int *)((longlong)puVar13 + 0x14));
    }
    *(int *)(puVar13 + 2) = iVar10 + 1;
    *(FEventLoadNode2 **)(pFVar2->Data + (longlong)iVar10 * 8) = local_58;
LAB_142310ca7:
    param_2 = (TArray<UClass_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
              ((longlong)param_2 + 8);
  } while( true );
}

// CancelLoading @ 142311a30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncLoadingThread2::CancelLoading(FAsyncLoadingThread2 *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                     ,0x296b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CleanupSyncLoadContext @ 142311c50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::CleanupSyncLoadContext
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1)

{
  FManualResetEvent *pFVar1;
  atomic<int> *paVar2;
  int *piVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *_Dst;
  atomic<unsigned_char> aVar4;
  atomic<int> aVar5;
  int iVar6;
  FAsyncLoadingSyncLoadContext *this_00;
  ForElementType<int> FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  ForElementType<int> FVar11;
  uint uVar12;
  undefined4 local_38;
  undefined4 uStack_34;
  TArrayView<int_const_,int> local_28;
  
  if ((param_1->bIsAsyncLoadingThread != false) && ((param_1->SyncLoadContextStack).ArrayNum != 0))
  {
    lpCriticalSection = &this->PendingRequestsCritical;
    do {
      iVar6 = (param_1->SyncLoadContextStack).ArrayNum;
      uVar12 = iVar6 - 1;
      uVar10 = 0;
      if ((int)uVar12 < iVar6) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_00 = *(FAsyncLoadingSyncLoadContext **)
                 ((param_1->SyncLoadContextStack).AllocatorInstance.Data +
                 (longlong)(param_1->SyncLoadContextStack).ArrayNum * 8 + -8);
      FVar7 = (this_00->RequestIDs).AllocatorInstance.SecondaryData;
      iVar6 = (this_00->RequestIDs).ArrayNum;
      FVar11 = (ForElementType<int>)&this_00->RequestIDs;
      if (FVar7 != (ForElementType<int>)0x0) {
        FVar11 = FVar7;
      }
      if ((iVar6 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_38 = FVar11._0_4_;
      uStack_34 = FVar11._4_4_;
      local_28.DataPtr._0_4_ = local_38;
      local_28.DataPtr._4_4_ = uStack_34;
      local_28.ArrayNum = iVar6;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      bVar9 = Algo::
              NoneOf<TArrayView<int_const_,int>,_FAsyncLoadingThread2::ContainsAnyRequestID_::__l2::<lambda_1>_>
                        (&local_28,(<lambda_1>)this);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (!bVar9) {
        return;
      }
      if (6 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      pFVar1 = &this_00->DoneEvent;
      LOCK();
      aVar4 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)0x1;
      UNLOCK();
      if (((byte)aVar4 & 3) == 2) {
        UE::ParkingLot::WakeAll(pFVar1);
      }
      LOCK();
      paVar2 = &this_00->RefCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if ((int)aVar5 + -1 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewRefCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0xff2,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else if ((aVar5 == (atomic<int>)0x1) && (this_00 != (FAsyncLoadingSyncLoadContext *)0x0)) {
        FAsyncLoadingSyncLoadContext::_scalar_deleting_destructor_(this_00,1);
      }
      if (((param_1->SyncLoadContextStack).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar6 = (param_1->SyncLoadContextStack).ArrayNum;
      uVar10 = iVar6 - 1;
      _Dst = (param_1->SyncLoadContextStack).AllocatorInstance.Data + (longlong)(int)uVar10 * 8;
      iVar6 = ~uVar10 + iVar6;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
      }
      piVar3 = &(param_1->SyncLoadContextStack).ArrayNum;
      *piVar3 = *piVar3 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(param_1->SyncLoadContextStack).AllocatorInstance,
                 (param_1->SyncLoadContextStack).ArrayNum,&(param_1->SyncLoadContextStack).ArrayMax)
      ;
    } while ((param_1->SyncLoadContextStack).ArrayNum != 0);
  }
  return;
}

// CollectUnreachableObjects @ 1423128e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::CollectUnreachableObjects
          (FAsyncLoadingThread2 *this,TArrayView<FUObjectItem_*,int> *param_1,
          TArray<FUnreachableObject,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FAsyncLoadingThreadSettings *pFVar7;
  uint uVar8;
  <lambda_1> local_res10;
  TArrayView<std::nullptr_t,int> local_88;
  code *local_78;
  TArrayView<FUObjectItem_*,int> **local_70;
  FAsyncLoadingThread2 *local_68;
  TArrayView<FUObjectItem_*,int> *local_60;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  FAsyncLoadingThread2 **local_40;
  TArrayView<FUObjectItem_*,int> *local_38;
  TArray<FUnreachableObject,TSizedDefaultAllocator<32>_> *local_30;
  undefined1 local_28;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x29e8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  uVar2 = param_1->ArrayNum;
  if (iVar6 < (int)uVar2) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar2 - iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<FUnreachableObject,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x18,uVar2 - iVar6);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar6) {
      uVar8 = iVar6 - uVar2;
      if (((int)(uVar8 | uVar2) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x18;
        iVar6 = (*piVar1 - uVar2) - uVar8;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0x18,(longlong)iVar6 * 0x18);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId10733,"CollectUnreachableObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x29ed);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10733);
  }
  pFVar7 = FAsyncLoadingThreadSettings::Get();
  local_88.DataPtr = (void **)0x0;
  local_28 = pFVar7->bLooseFileLoadingEnabled;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAsyncLoadingThread2::CollectUnreachableObjects'::__l10::<lambda_1>,void,int>
             ::Call;
  local_70 = &local_38;
  local_88.ArrayNum = 0;
  local_38 = param_1;
  local_30 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"CollectUnreachableObjectsTask",param_1->ArrayNum,0x800,
             (TFunctionRef<void___cdecl(int)> *)&local_78,local_res10,None,&local_88);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (GVerifyUnreachableObjects != false) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId10767,"VerifyUnreachableObjects",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x2a0f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10767);
    }
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAsyncLoadingThread2::CollectUnreachableObjects'::__l13::<lambda_2>,void,int>
               ::Call;
    local_40 = &local_68;
    local_58.DataPtr = (void **)0x0;
    local_58.ArrayNum = 0;
    local_68 = this;
    local_60 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"VerifyUnreachableObjectsDebugTask",param_1->ArrayNum,0x200,
               (TFunctionRef<void___cdecl(int)> *)&local_48,local_res10,None,&local_58);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// ConditionalBeginDeferredPostLoad @ 142312bf0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::ConditionalBeginDeferredPostLoad
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,
          FAsyncLoadingPostLoadGroup *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FEventLoadNode2 *this_00;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5338,"ConditionalBeginDeferredPostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x14da);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5338);
  }
  if ((param_2 == (FAsyncLoadingPostLoadGroup *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DeferredPostLoadGroup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x14db,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->bCanAccessAsyncLoadingThreadData == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThreadState.bCanAccessAsyncLoadingThreadData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x14dc,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_2->PackagesWithExportsToPostLoadCount == 0) {
    uVar9 = (param_2->Packages).ArrayNum - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 * 8;
      do {
        uVar8 = 0;
        if ((int)uVar9 < (param_2->Packages).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FAsyncPackage2::MoveConstructedObjectsToPhase2
                  (*(FAsyncPackage2 **)((param_2->Packages).AllocatorInstance.Data + lVar10));
        lVar10 = lVar10 + -8;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    uVar9 = (param_2->Packages).ArrayNum - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 * 8;
      do {
        uVar8 = 0;
        if ((int)uVar9 < (param_2->Packages).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)((param_2->Packages).AllocatorInstance.Data + lVar10);
        if ((*(FAsyncLoadingPostLoadGroup **)(lVar3 + 0x468) != param_2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Package->DeferredPostLoadGroup == DeferredPostLoadGroup",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x14ec,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(char *)(lVar3 + 0x494) != '\r') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::PostLoad"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x14ed,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined8 *)(lVar3 + 0x468) = 0;
        LOCK();
        *(undefined1 *)(lVar3 + 0x494) = 0xe;
        UNLOCK();
        uVar8 = 0;
        if (0 < *(int *)(lVar3 + 0x288)) {
          iVar7 = 2;
          bVar6 = *(int *)(lVar3 + 0x288) != 0;
          do {
            if ((!bVar6) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ExportBundleIndex < uint32(Data.TotalExportBundleCount)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                   ,0x25bb,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            this_00 = TArrayView<FEventLoadNode2,int>::operator[]
                                ((TArrayView<FEventLoadNode2,int> *)(lVar3 + 0x268),iVar7);
            if (((int)this_00->BarrierCount < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("BarrierCount > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                   ,0x16f5,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            LOCK();
            paVar1 = &this_00->BarrierCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              FEventLoadNode2::Fire(this_00,param_1);
            }
            uVar8 = uVar8 + 1;
            iVar7 = iVar7 + 3;
            bVar6 = uVar8 < *(uint *)(lVar3 + 0x288);
          } while ((int)uVar8 < (int)*(uint *)(lVar3 + 0x288));
        }
        lVar10 = lVar10 + -8;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    pFVar4 = (param_2->Packages).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(param_2,0x20);
  }
  if (!bVar11) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ConditionalBeginPostLoad @ 142312f90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::ConditionalBeginPostLoad
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,
          FAsyncLoadingPostLoadGroup *param_2)

{
  int iVar1;
  FAsyncPackage2 *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  FAsyncLoadingThreadState2 *local_res18 [2];
  code *local_48;
  FAsyncLoadingThreadState2 **local_40;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5309,"ConditionalBeginPostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x14bd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5309);
  }
  if ((param_2 == (FAsyncLoadingPostLoadGroup *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostLoadGroup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x14be,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1->bCanAccessAsyncLoadingThreadData == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThreadState.bCanAccessAsyncLoadingThreadData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x14bf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2->PackagesWithExportsToSerializeCount == 0) {
    iVar1 = (param_2->Packages).ArrayNum;
    param_2->PackagesWithExportsToPostLoadCount = iVar1;
    uVar6 = iVar1 - 1;
    if (-1 < (int)uVar6) {
      lVar5 = (longlong)(int)uVar6 * 8;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (param_2->Packages).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(FAsyncPackage2 **)((param_2->Packages).AllocatorInstance.Data + lVar5);
        if ((this_00->PostLoadGroup != param_2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Package->PostLoadGroup == PostLoadGroup",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x14c9,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((this_00->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0xc) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::ExportsDone"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x14ca,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00->PostLoadGroup = (FAsyncLoadingPostLoadGroup *)0x0;
        this_00->DeferredPostLoadGroup = param_2;
        LOCK();
        this_00->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0xd;
        UNLOCK();
        bVar3 = -1 < CpuChannel->Enabled;
        if (bVar3) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId7629,"ConditionalBeginPostLoadPhase",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                     ,0x1dcd);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7629);
        }
        local_40 = local_res18;
        local_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FAsyncPackage2::ConditionalBeginPostLoadPhase'::__l2::<lambda_1>,void,FAsyncPackage2_*>
                   ::Call;
        local_res18[0] = param_1;
        FAsyncPackage2::WaitForAllDependenciesToReachState
                  (this_00,param_1,(pdm_72c38f00)0x508,PostLoad,
                   &this_00->AsyncLoadingThread->ConditionalBeginPostLoadTick,
                   (TFunctionRef<void___cdecl(FAsyncPackage2_*)> *)&local_48);
        if (bVar3) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        lVar5 = lVar5 + -8;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
  }
  if (!bVar7) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ContainsAnyPendingRequests @ 142313ea0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAsyncLoadingThread2::ContainsAnyPendingRequests(FAsyncLoadingThread2 *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  
  lpCriticalSection = &this->PendingRequestsCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = *(int *)&(this->PendingRequests).Elements.field_0x34;
    iVar2 = *(int *)&(this->PendingRequests).Elements.field_0x8;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar2 != iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CreateAsyncPackagesFromQueue @ 1423140a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAsyncLoadingThread2::CreateAsyncPackagesFromQueue
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,bool param_2)

{
  int *piVar1;
  TArray<FAsyncPackage2_*,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<int> *paVar3;
  FManualResetEvent FVar4;
  atomic<int> aVar5;
  double dVar6;
  EPackageExtension EVar7;
  wchar_t wVar8;
  EPackageFlags EVar9;
  atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*> aVar10;
  FSharedLinkerInstancingContextData *pFVar11;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  FPlatformFileOpenLog *this_01;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  atomic<unsigned_char> *paVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  char cVar19;
  FName FVar20;
  FNameEntryId FVar21;
  FName FVar22;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  TVar23;
  FLoadPackageAsyncProgressDelegate *pFVar24;
  FAsyncLoadingThread2 *this_02;
  bool bVar25;
  undefined1 uVar26;
  bool bVar27;
  ushort uVar28;
  EPackageStoreEntryStatus EVar29;
  uint *puVar30;
  FEventLoadNode2 *this_03;
  FString *pFVar31;
  FLoadedPackageRef *this_04;
  UPackage *pUVar32;
  FAsyncPackage2 **ppFVar33;
  FName FVar34;
  longlong lVar35;
  ulong64 uVar36;
  FWriteBuffer *pFVar37;
  atomic<__int64> aVar38;
  ForAnyElementType FVar39;
  wchar_t *pwVar40;
  ForElementType<FSetElementId> FVar41;
  byte bVar42;
  uint uVar43;
  PSRWLOCK SRWLock;
  FAsyncPackage2 *pFVar44;
  uint uVar45;
  int iVar46;
  int iVar47;
  EPackageLoader EVar48;
  undefined1 auStackY_f98 [32];
  FScopedStampedLogScope local_f48;
  byte local_f47;
  char local_f46;
  bool local_f45 [5];
  FName local_f40;
  FAsyncLoadingThreadState2 *local_f38;
  int local_f30;
  FName local_f28;
  FAsyncPackage2 *local_f20;
  undefined1 local_f18 [8];
  int local_f10;
  FString local_f08;
  FString local_ef8;
  undefined4 local_ee8;
  FName local_ee0;
  FName local_ed8;
  int local_ec8;
  int local_ec4;
  EPackageFlags local_ec0;
  FSharedLinkerInstancingContextData *local_eb8;
  TReferenceControllerBase<1> *local_eb0;
  FName local_ea8;
  FPackagePath local_ea0;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  local_e90;
  FLoadPackageAsyncProgressDelegate *local_e88;
  TReferenceControllerBase<1> *local_e80;
  FName local_e78;
  char local_e68;
  undefined1 local_e58 [32];
  FName local_e38;
  FPackageId local_e30;
  FName local_e28;
  FPackagePath local_e20;
  bool local_e13;
  EPackageLoader local_e12;
  FString local_e08;
  FString local_df8;
  FName local_de8;
  undefined8 local_de0;
  FName local_dd8;
  FPackageStoreEntry local_dd0;
  FIoBatch local_da8;
  FAsyncLoadingThread2 *local_d90;
  TReferenceControllerBase<1> *local_d88;
  FName local_d80;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_d78;
  FLoadPackageAsyncProgressDelegate *local_d70;
  TReferenceControllerBase<1> *local_d68;
  FName local_d60;
  FName local_d58;
  FPackageStoreReadScope local_d50;
  FTlsAutoCleanup *local_d48;
  LARGE_INTEGER local_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  wchar_t *local_d18;
  uint uStack_d10;
  undefined4 uStack_d0c;
  undefined1 local_d08 [16];
  undefined8 local_cf8;
  undefined4 local_cf0;
  undefined8 local_ce8;
  undefined4 local_ce0;
  code *local_cd8;
  undefined1 *local_cd0;
  wchar_t *local_cc8;
  uint uStack_cc0;
  undefined4 uStack_cbc;
  TSharedPtr<FLoadPackageAsyncProgressDelegate,1> local_cb8;
  undefined4 *local_ca8;
  FAsyncPackage2 **local_ca0;
  TSharedPtr<FLoadPackageAsyncProgressDelegate,1> local_c98;
  FPackageStoreEntry local_c88;
  TStringView<wchar_t> local_c58;
  FString local_c48;
  TStringView<wchar_t> local_c38;
  TStringView<wchar_t> local_c28;
  TStringView<wchar_t> local_c18;
  FString local_c08;
  FString local_bf8;
  FString local_be8;
  FString local_bd8;
  FString local_bc8;
  FString local_bb8;
  FString local_ba8;
  FString local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68 [2];
  undefined1 local_b48 [16];
  int local_b38;
  int local_b34;
  EPackageFlags local_b30;
  FSharedLinkerInstancingContextData *local_b28;
  TReferenceControllerBase<1> *local_b20;
  FName local_b18;
  FName local_b10;
  undefined4 local_b08;
  FLogScope local_ac8;
  undefined8 *local_ab8;
  longlong local_ab0;
  TStringBuilderBase<wchar_t> local_aa8;
  wchar_t local_a88 [256];
  wchar_t local_888;
  wchar_t local_886 [1039];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_f98;
  local_f38 = param_1;
  local_d90 = this;
  if (CpuChannel->Enabled < 0) {
    local_f46 = '\0';
  }
  else {
    local_f46 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5586,"CreateAsyncPackagesFromQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x15d2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5586);
  }
  puVar30 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_cd0 = local_f18;
  local_cd8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  local_d48 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_cd8,puVar30);
  uVar43 = 0;
  local_f47 = 0;
  local_ee8 = *(undefined4 *)(local_d48 + 10);
  *(undefined4 *)(local_d48 + 10) = 0;
  if ((param_1->bUseTimeLimit != false) || (param_2)) {
    local_f10 = 4;
  }
  else {
    local_f10 = 0x7fffffff;
  }
  FIoDispatcher::NewBatch(this->IoDispatcher,&local_da8);
  FPackageStoreReadScope::FPackageStoreReadScope(&local_d50,this->PackageStore);
  while ((dVar18 = __real_4170000000000000, -1 < (int)uVar43 &&
         ((int)uVar43 < (this->PendingPackages).ArrayNum))) {
    param_1->bIsActive = (atomic<bool>)0x1;
    uVar45 = 0;
    if ((int)uVar43 < (this->PendingPackages).ArrayNum) {
      uVar45 = ~uVar43 >> 0x1f;
    }
    if ((uVar45 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar15 = (code *)swi(3);
      uVar26 = (*pcVar15)();
      return (bool)uVar26;
    }
    pFVar44 = *(FAsyncPackage2 **)
               ((this->PendingPackages).AllocatorInstance.Data + (longlong)(int)uVar43 * 8);
    local_d08._8_2_ = 0x200;
    local_cf8 = 0;
    local_cf0 = 0;
    local_ce8 = 0;
    local_ce0 = 0;
    EVar29 = FPackageStore::GetPackageStoreEntry
                       (this->PackageStore,(FPackageId)(pFVar44->Desc).PackageIdToLoad.Id,
                        (pFVar44->Desc).UPackageName,(FPackageStoreEntry *)(local_d08 + 8));
    param_1 = local_f38;
    if (EVar29 == Ok) {
      local_f48.bActive = false;
      if (-1 < LoadTimeChannel->Enabled) {
        UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuCreateAsyncPackageFields>
                  ((TLogScope<1> *)&local_ac8);
        if (local_f48.bActive == false) {
          local_f48.bActive = true;
        }
        *(ulong64 *)local_ac8.Ptr = (pFVar44->Desc).UPackageId.Id;
        local_aa8.Base = local_a88;
        local_aa8.CurPos = local_a88;
        local_aa8.bIsDynamic = false;
        local_aa8.bIsExternal = false;
        local_aa8.End = &local_888;
        ::FName::AppendString(&(pFVar44->Desc).UPackageName,&local_aa8);
        if (local_aa8.End < local_aa8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_aa8,1);
        }
        *local_aa8.CurPos = L'\0';
        wVar8 = *local_aa8.Base;
        uVar45 = 0;
        pwVar40 = local_aa8.Base;
        while (wVar8 != L'\0') {
          pwVar40 = pwVar40 + 1;
          uVar45 = uVar45 + 1;
          wVar8 = *pwVar40;
        }
        UE::Trace::Private::Field_WriteStringWide(1,local_aa8.Base,uVar45);
        UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_ac8,&local_ac8);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_aa8);
      }
      param_1 = local_f38;
      InitializeAsyncPackageFromPackageStore
                (this,local_f38,&local_da8,pFVar44,(FPackageStoreEntry *)(local_d08 + 8));
      FAsyncPackage2::StartLoading(pFVar44,param_1,&local_da8);
      TArray<FAsyncPackage2_*,TSizedDefaultAllocator<32>_>::RemoveAt
                (&this->PendingPackages,uVar43,Default);
      UE::Trace::Private::FScopedStampedLogScope::Deinit(&local_f48);
    }
    else {
      if (EVar29 == Missing) {
        local_c88.PackageExtension = Unspecified;
        local_c88.LoaderType = Zen;
        local_c88.ImportedPackageIds.DataPtr = (FPackageId *)0x0;
        local_c88.ImportedPackageIds.ArrayNum = 0;
        local_c88.ShaderMapHashes.DataPtr = (FSHAHash *)0x0;
        local_c88.ShaderMapHashes.ArrayNum = 0;
        InitializeAsyncPackageFromPackageStore(this,local_f38,&local_da8,pFVar44,&local_c88);
        LOCK();
        pFVar44->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x1;
        UNLOCK();
        pFVar44->LoadStatus = FailedMissing;
        this_03 = TArrayView<FEventLoadNode2,int>::operator[](&pFVar44->PackageNodes,0);
        FEventLoadNode2::ReleaseBarrier(this_03,param_1);
        TArray<FAsyncPackage2_*,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->PendingPackages,uVar43,Default);
        uVar43 = uVar43 - 1;
      }
      uVar43 = uVar43 + 1;
    }
  }
  do {
    this_02 = local_d90;
    local_f30 = 0;
    do {
      param_1->bIsActive = (atomic<bool>)0x1;
      aVar10 = ((this_02->PackageRequestQueue).Tail)->Next;
      if (aVar10 == (atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*>)0x0) break;
      local_d88 = *(TReferenceControllerBase<1> **)((longlong)aVar10 + 0x20);
      iVar47 = *(int *)((longlong)aVar10 + 8);
      iVar46 = *(int *)((longlong)aVar10 + 0xc);
      EVar9 = *(EPackageFlags *)((longlong)aVar10 + 0x10);
      pFVar11 = *(FSharedLinkerInstancingContextData **)((longlong)aVar10 + 0x18);
      *(undefined8 *)((longlong)aVar10 + 0x20) = 0;
      *(undefined8 *)((longlong)aVar10 + 0x18) = 0;
      FVar34 = *(FName *)((longlong)aVar10 + 0x30);
      local_d80 = *(FName *)((longlong)aVar10 + 0x28);
      local_f18._4_4_ = *(undefined4 *)((longlong)aVar10 + 0x38);
      local_d78 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)aVar10 + 0x40);
      local_d70 = *(FLoadPackageAsyncProgressDelegate **)((longlong)aVar10 + 0x48);
      local_d68 = *(TReferenceControllerBase<1> **)((longlong)aVar10 + 0x50);
      *(undefined8 *)((longlong)aVar10 + 0x40) = 0;
      *(undefined8 *)((longlong)aVar10 + 0x50) = 0;
      *(undefined8 *)((longlong)aVar10 + 0x48) = 0;
      local_ed8 = *(FName *)((longlong)aVar10 + 0x58);
      local_b38 = iVar47;
      local_b34 = iVar46;
      local_b30 = EVar9;
      local_b28 = pFVar11;
      local_b20 = local_d88;
      local_b18 = local_d80;
      local_b10 = FVar34;
      local_b08 = local_f18._4_4_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      this_00 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)aVar10 + 0x40);
      if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  (this_00);
        ::operator_delete(this_00,0x18);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)aVar10 + 0x20));
      FMemory::Free((this_02->PackageRequestQueue).Tail);
      local_eb0 = local_d88;
      local_ea8 = local_d80;
      local_ea0._8_4_ = local_f18._4_4_;
      local_e90.Ptr =
           (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
            *)local_d78;
      local_e88 = local_d70;
      local_e80 = local_d68;
      local_e78 = local_ed8;
      (this_02->PackageRequestQueue).Tail = (FNode *)aVar10;
      local_e68 = '\x01';
      local_ec8 = iVar47;
      local_ec4 = iVar46;
      local_ec0 = EVar9;
      local_eb8 = pFVar11;
      local_ea0.PackageName = FVar34;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      param_1 = local_f38;
      if (local_e68 == '\0') break;
      LOCK();
      this_02->QueuedPackagesCounter = (atomic<int>)((int)this_02->QueuedPackagesCounter + -1);
      UNLOCK();
      aVar38 = (atomic<__int64>)(longlong)(int)this_02->QueuedPackagesCounter;
      local_f30 = local_f30 + 1;
      if (__GTraceCounterAsyncLoadingQueuedPackages.Value != aVar38) {
        LOCK();
        UNLOCK();
        __GTraceCounterAsyncLoadingQueuedPackages.Value = aVar38;
        if (-1 < CountersChannel->Enabled) {
          if (__GTraceCounterAsyncLoadingQueuedPackages.CounterId == (atomic<unsigned_int>)0x0) {
            uVar28 = FCountersTrace::OutputInitCounter
                               (__GTraceCounterAsyncLoadingQueuedPackages.CounterName,
                                TraceCounterType_Int,
                                __GTraceCounterAsyncLoadingQueuedPackages.CounterFlags & 0xf);
            LOCK();
            if (__GTraceCounterAsyncLoadingQueuedPackages.CounterId == (atomic<unsigned_int>)0x0) {
              __GTraceCounterAsyncLoadingQueuedPackages.CounterId._2_2_ = 0;
              __GTraceCounterAsyncLoadingQueuedPackages.CounterId._0_2_ = uVar28;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (__GTraceCounterAsyncLoadingQueuedPackages.CounterId._0_2_,
                     (long64)__GTraceCounterAsyncLoadingQueuedPackages.Value);
        }
      }
      if ((local_e68 == '\0') &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar25)) {
        pcVar15 = (code *)swi(3);
        uVar26 = (*pcVar15)();
        return (bool)uVar26;
      }
      iVar47 = 0;
      pFVar44 = (FAsyncPackage2 *)0x0;
      local_dd0.PackageExtension = Unspecified;
      local_dd0.LoaderType = Zen;
      local_dd0.ImportedPackageIds.DataPtr = (FPackageId *)0x0;
      local_dd0.ImportedPackageIds.ArrayNum = 0;
      local_dd0.ShaderMapHashes.DataPtr = (FSHAHash *)0x0;
      EVar48 = Zen;
      local_dd0.ShaderMapHashes.ArrayNum = 0;
      FPackagePath::GetPackageFName(&local_ea0);
      local_d18 = &local_888;
      uVar43 = ::FName::ToStringInternal(&local_f40,&local_888,0x40b);
      uStack_d10 = uVar43;
      local_c58.DataPtr = local_d18;
      local_c58.Size = uVar43;
      local_c58._12_4_ = uStack_d0c;
      bVar25 = FPackageName::IsValidLongPackageName(&local_c58,false,(EErrorCode *)0x0);
      if (!bVar25) {
        local_df8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_df8.Data.ArrayNum = 0;
        local_df8.Data.ArrayMax = 0;
        local_f08.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f08.Data.ArrayNum = 0;
        local_f08.Data.ArrayMax = 0;
        pFVar31 = ::FString::ConstructFromPtrSize(&local_c48,&local_888,uVar43);
        if (&local_f08 != pFVar31) {
          if (local_f08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f08.Data.AllocatorInstance.Data);
          }
          local_f08.Data.AllocatorInstance.Data = (pFVar31->Data).AllocatorInstance.Data;
          (pFVar31->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f08.Data.ArrayNum = (pFVar31->Data).ArrayNum;
          local_f08.Data.ArrayMax = (pFVar31->Data).ArrayMax;
          (pFVar31->Data).ArrayNum = 0;
          (pFVar31->Data).ArrayMax = 0;
        }
        if (local_c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c48.Data.AllocatorInstance.Data);
        }
        bVar25 = FPackageName::TryConvertFilenameToLongPackageName
                           (&local_f08,&local_df8,(FString *)0x0,None);
        if (local_f08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f08.Data.AllocatorInstance.Data);
        }
        if (bVar25) {
          FVar39.Data = (FScriptContainerElement *)L"";
          if (local_df8.Data.ArrayNum != 0) {
            FVar39.Data = local_df8.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_d60,(wchar_t *)FVar39.Data);
          local_f40 = local_d60;
        }
        if (local_df8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_df8.Data.AllocatorInstance.Data);
        }
      }
      FVar34 = local_f40;
      local_f40 = ApplyLooseFileLocalizationPackageNameRedirects((FName)local_b48);
      local_f40 = *(FName *)local_f40;
      FPackageId::FromName(&local_f28);
      local_ee0.ComparisonIndex.Value = 0;
      local_ee0.Number = 0;
      local_de8.ComparisonIndex.Value = 0;
      local_de8.Number = 0;
      bVar25 = FPackageStore::GetPackageRedirectInfo
                         (this_02->PackageStore,(FPackageId)local_f28,&local_ee0,
                          (FPackageId *)&local_de8);
      if (bVar25) {
        local_f28 = local_de8;
        FPackagePath::Empty(&local_ea0);
        local_f40.ComparisonIndex.Value = 0;
        local_f40.Number = 0;
        local_de0 = 0;
        FVar34 = local_ee0;
      }
      FPackagePath::TryFromPackageName(local_f40,&local_ea0);
      FVar22 = local_f28;
      FVar20 = local_f40;
      if (local_f40 == (FName)0x0) {
LAB_1423149b5:
        EVar29 = FPackageStore::GetPackageStoreEntry
                           (this_02->PackageStore,(FPackageId)local_f28,local_f40,&local_dd0);
        if (EVar29 == Missing) {
LAB_142314ab3:
          if (EVar29 == Missing) {
            FVar21.Value = local_f28.ComparisonIndex.Value;
            SRWLock = (PSRWLOCK)
                      ((longlong)&this_02->FailedPackageRequestsCritical +
                      (ulonglong)(local_f28.ComparisonIndex.Value & 0x1f) * 0x58 + 0x28);
            if ((SRWLock == (PSRWLOCK)0x0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Mutex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                                    ,0x1c,L""), bVar25)) {
              pcVar15 = (code *)swi(3);
              uVar26 = (*pcVar15)();
              return (bool)uVar26;
            }
            AcquireSRWLockShared(SRWLock);
            ppFVar33 = TMapBase<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
                       ::FindByHash<FPackageId>
                                 ((TMapBase<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
                                   *)(SRWLock + 1),FVar21.Value,(FPackageId *)&local_f28);
            if (ppFVar33 != (FAsyncPackage2 **)0x0) {
              pFVar44 = *ppFVar33;
            }
            if (SRWLock != (PSRWLOCK)0x0) {
              ReleaseSRWLockShared(SRWLock);
            }
            if (pFVar44 == (FAsyncPackage2 *)0x0) goto LAB_142314c8d;
            local_f28 = (FName)(pFVar44->Desc).PackageIdToLoad.Id;
            local_f40 = FPackagePath::GetPackageFName(&local_ea0);
            local_f40 = *(FName *)local_f40;
            EVar29 = FPackageStore::GetPackageStoreEntry
                               (this_02->PackageStore,(FPackageId)local_f28,local_f40,&local_dd0);
            if (EVar29 != Missing) {
              if (local_dd0.LoaderType == LinkerLoad) {
                LOCK();
                __GTraceCounterAsyncLoadingFileSystemLoads.Value =
                     (atomic<__int64>)
                     ((longlong)__GTraceCounterAsyncLoadingFileSystemLoads.Value + 1);
                UNLOCK();
                if (-1 < CountersChannel->Enabled) {
                  if (__GTraceCounterAsyncLoadingFileSystemLoads.CounterId ==
                      (atomic<unsigned_int>)0x0) {
                    uVar28 = FCountersTrace::OutputInitCounter
                                       (__GTraceCounterAsyncLoadingFileSystemLoads.CounterName,
                                        TraceCounterType_Int,
                                        __GTraceCounterAsyncLoadingFileSystemLoads.CounterFlags &
                                        0xf);
                    LOCK();
                    if (__GTraceCounterAsyncLoadingFileSystemLoads.CounterId ==
                        (atomic<unsigned_int>)0x0) {
                      __GTraceCounterAsyncLoadingFileSystemLoads.CounterId._2_2_ = 0;
                      __GTraceCounterAsyncLoadingFileSystemLoads.CounterId._0_2_ = uVar28;
                    }
                    UNLOCK();
                  }
                  uVar28 = __GTraceCounterAsyncLoadingFileSystemLoads.CounterId._0_2_;
                  aVar38 = __GTraceCounterAsyncLoadingFileSystemLoads.Value;
code_r0x000142314c42:
                  FCountersTrace::OutputSetValue(uVar28,(long64)aVar38);
                }
              }
              else {
                LOCK();
                __GTraceCounterAsyncLoadingIoStoreLoads.Value =
                     (atomic<__int64>)((longlong)__GTraceCounterAsyncLoadingIoStoreLoads.Value + 1);
                UNLOCK();
                if (-1 < CountersChannel->Enabled) {
                  if (__GTraceCounterAsyncLoadingIoStoreLoads.CounterId == (atomic<unsigned_int>)0x0
                     ) {
                    uVar28 = FCountersTrace::OutputInitCounter
                                       (__GTraceCounterAsyncLoadingIoStoreLoads.CounterName,
                                        TraceCounterType_Int,
                                        __GTraceCounterAsyncLoadingIoStoreLoads.CounterFlags & 0xf);
                    LOCK();
                    if (__GTraceCounterAsyncLoadingIoStoreLoads.CounterId ==
                        (atomic<unsigned_int>)0x0) {
                      __GTraceCounterAsyncLoadingIoStoreLoads.CounterId._2_2_ = 0;
                      __GTraceCounterAsyncLoadingIoStoreLoads.CounterId._0_2_ = uVar28;
                    }
                    UNLOCK();
                  }
                  uVar28 = __GTraceCounterAsyncLoadingIoStoreLoads.CounterId._0_2_;
                  aVar38 = __GTraceCounterAsyncLoadingIoStoreLoads.Value;
                  goto code_r0x000142314c42;
                }
              }
            }
            if (EVar29 == Missing) goto LAB_142314c8d;
          }
        }
        else if (local_dd0.LoaderType == LinkerLoad) {
          LOCK();
          __GTraceCounterAsyncLoadingFileSystemLoads.Value =
               (atomic<__int64>)((longlong)__GTraceCounterAsyncLoadingFileSystemLoads.Value + 1);
          UNLOCK();
          if (-1 < CountersChannel->Enabled) {
            if (__GTraceCounterAsyncLoadingFileSystemLoads.CounterId == (atomic<unsigned_int>)0x0) {
              uVar28 = FCountersTrace::OutputInitCounter
                                 (__GTraceCounterAsyncLoadingFileSystemLoads.CounterName,
                                  TraceCounterType_Int,
                                  __GTraceCounterAsyncLoadingFileSystemLoads.CounterFlags & 0xf);
              LOCK();
              if (__GTraceCounterAsyncLoadingFileSystemLoads.CounterId == (atomic<unsigned_int>)0x0)
              {
                __GTraceCounterAsyncLoadingFileSystemLoads.CounterId._2_2_ = 0;
                __GTraceCounterAsyncLoadingFileSystemLoads.CounterId._0_2_ = uVar28;
              }
              UNLOCK();
            }
            FCountersTrace::OutputSetValue
                      (__GTraceCounterAsyncLoadingFileSystemLoads.CounterId._0_2_,
                       (long64)__GTraceCounterAsyncLoadingFileSystemLoads.Value);
          }
        }
        else {
          LOCK();
          __GTraceCounterAsyncLoadingIoStoreLoads.Value =
               (atomic<__int64>)((longlong)__GTraceCounterAsyncLoadingIoStoreLoads.Value + 1);
          UNLOCK();
          if (CountersChannel->Enabled < 0) goto LAB_142314ab3;
          if (__GTraceCounterAsyncLoadingIoStoreLoads.CounterId == (atomic<unsigned_int>)0x0) {
            uVar28 = FCountersTrace::OutputInitCounter
                               (__GTraceCounterAsyncLoadingIoStoreLoads.CounterName,
                                TraceCounterType_Int,
                                __GTraceCounterAsyncLoadingIoStoreLoads.CounterFlags & 0xf);
            LOCK();
            if (__GTraceCounterAsyncLoadingIoStoreLoads.CounterId == (atomic<unsigned_int>)0x0) {
              __GTraceCounterAsyncLoadingIoStoreLoads.CounterId._2_2_ = 0;
              __GTraceCounterAsyncLoadingIoStoreLoads.CounterId._0_2_ = uVar28;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (__GTraceCounterAsyncLoadingIoStoreLoads.CounterId._0_2_,
                     (long64)__GTraceCounterAsyncLoadingIoStoreLoads.Value);
        }
        uStack_d20 = 0;
        local_d28 = 0;
        local_c28.DataPtr = (wchar_t *)0x0;
        local_c28.Size = 0;
        local_c28._12_4_ = 0;
        FPackagePath::SetHeaderExtension(&local_ea0,local_dd0.PackageExtension,&local_c28);
        EVar48 = local_dd0.LoaderType;
      }
      else {
        AcquireSRWLockShared((PSRWLOCK)&(this_02->GlobalImportStore).PackagesLock);
        this_04 = FGlobalImportStore::FindPackageRefNoLock
                            (&this_02->GlobalImportStore,(FPackageId)FVar22);
        ReleaseSRWLockShared((PSRWLOCK)&(this_02->GlobalImportStore).PackagesLock);
        if (((((this_04 == (FLoadedPackageRef *)0x0) || (this_04->bHasFailed != false)) ||
             (this_04->bIsMissing != false)) || (this_04->PackageLoader == Unknown)) ||
           ((pUVar32 = FLoadedPackageRef::GetPackage(this_04), pUVar32 != (UPackage *)0x0 &&
            (pUVar32 = FLoadedPackageRef::GetPackage(this_04),
            ((uint)pUVar32->_padding_ >> 0xe & 1) != 0)))) goto LAB_1423149b5;
        EVar48 = this_04->PackageLoader;
        EVar7 = this_04->PackageHeaderExtension;
        if (EVar48 == Zen) {
          FPackageStore::GetPackageStoreEntry
                    (this_02->PackageStore,(FPackageId)FVar22,FVar20,&local_dd0);
        }
        uStack_d30 = 0;
        local_d38 = 0;
        local_c38.DataPtr = (wchar_t *)0x0;
        local_c38.Size = 0;
        local_c38._12_4_ = 0;
        FPackagePath::SetHeaderExtension(&local_ea0,EVar7,&local_c38);
        EVar29 = Ok;
      }
LAB_142314c8d:
      if (local_ea8 != (FName)0x0) {
        local_cc8 = &local_888;
        uVar43 = ::FName::ToStringInternal(&local_ea8,&local_888,0x40b);
        uStack_d0c = uStack_cbc;
        uStack_d10 = uVar43;
        local_d18 = local_cc8;
        local_c18.DataPtr = local_cc8;
        uStack_cc0 = uVar43;
        local_c18._8_8_ = _uStack_d10;
        bVar25 = FPackageName::IsValidLongPackageName(&local_c18,false,(EErrorCode *)0x0);
        FVar34 = local_ea8;
        if (!bVar25) {
          local_e08.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e08.Data.ArrayNum = 0;
          local_e08.Data.ArrayMax = 0;
          local_ef8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_ef8.Data.ArrayNum = 0;
          local_ef8.Data.ArrayMax = 0;
          pFVar31 = ::FString::ConstructFromPtrSize(&local_c08,&local_888,uVar43);
          if (&local_ef8 != pFVar31) {
            if (local_ef8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ef8.Data.AllocatorInstance.Data);
            }
            local_ef8.Data.AllocatorInstance.Data = (pFVar31->Data).AllocatorInstance.Data;
            (pFVar31->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_ef8.Data.ArrayNum = (pFVar31->Data).ArrayNum;
            local_ef8.Data.ArrayMax = (pFVar31->Data).ArrayMax;
            (pFVar31->Data).ArrayNum = 0;
            (pFVar31->Data).ArrayMax = 0;
          }
          if (local_c08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c08.Data.AllocatorInstance.Data);
          }
          bVar25 = FPackageName::TryConvertFilenameToLongPackageName
                             (&local_ef8,&local_e08,(FString *)0x0,None);
          if (local_ef8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ef8.Data.AllocatorInstance.Data);
          }
          if (bVar25) {
            FVar39.Data = (FScriptContainerElement *)L"";
            if (local_e08.Data.ArrayNum != 0) {
              FVar39.Data = local_e08.Data.AllocatorInstance.Data;
            }
            ::FName::FName(&local_d58,(wchar_t *)FVar39.Data);
            local_ea8 = local_d58;
          }
          FVar34 = local_ea8;
          if (local_e08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e08.Data.AllocatorInstance.Data);
            FVar34 = local_ea8;
          }
        }
      }
      FVar20 = local_f28;
      local_e58._0_4_ = local_ec8;
      local_e58._4_4_ = local_ec4;
      local_e58._8_4_ = local_ec0;
      local_e58._16_8_ = local_eb8;
      local_e58._24_8_ = local_eb0;
      local_ed8 = local_f28;
      local_eb0 = (TReferenceControllerBase<1> *)0x0;
      local_eb8 = (FSharedLinkerInstancingContextData *)0x0;
      local_dd8 = FVar34;
      FPackageId::FromName(&local_e38);
      pFVar24 = local_e88;
      param_1 = local_f38;
      local_e13 = local_ea8 == (FName)0x0;
      local_e30.Id._4_4_ = local_ed8.Number;
      local_e28 = local_dd8;
      local_e20.HeaderExtension = local_ea0.HeaderExtension;
      local_e20._9_3_ = local_ea0._9_3_;
      local_e30.Id._0_4_ = FVar20.ComparisonIndex.Value;
      local_e88 = (FLoadPackageAsyncProgressDelegate *)0x0;
      local_e20.PackageName = local_ea0.PackageName;
      local_e12 = EVar48;
      if (EVar29 - Missing < 2) {
        local_c98.Object = pFVar24;
        local_c98.SharedReferenceCount.ReferenceController = local_e80;
        local_e80 = (TReferenceControllerBase<1> *)0x0;
        QueueUnresolvedPackage
                  (this_02,local_f38,EVar29,(FAsyncPackageDesc2 *)local_e58,&local_e90,&local_c98);
      }
      else {
        local_cb8.Object = pFVar24;
        local_cb8.SharedReferenceCount.ReferenceController = local_e80;
        local_e80 = (TReferenceControllerBase<1> *)0x0;
        local_f20 = FindOrInsertPackage(this_02,local_f38,(FAsyncPackageDesc2 *)local_e58,local_f45,
                                        (FAsyncPackage2 *)0x0,&local_e90,&local_cb8);
        if (local_f20 == (FAsyncPackage2 *)0x0) {
          ::FName::ToString(&local_e28,&local_bf8);
          bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Package",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x166c,L"Failed to find or insert package %s");
          if (local_bf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_bf8.Data.AllocatorInstance.Data);
          }
          if (bVar25) {
            pcVar15 = (code *)swi(3);
            uVar26 = (*pcVar15)();
            return (bool)uVar26;
          }
        }
        if (local_f45[0] == false) {
          if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_1423154f0:
            if (5 < (byte)LogStreaming._0_1_) {
              ::LexToString(local_b68,&local_e30);
              FVar34 = FPackagePath::GetPackageFName(&local_e20);
              ::FName::ToString((FName *)FVar34,&local_b78);
              ::LexToString(&local_b88,(FPackageId *)&local_e38);
              ::FName::ToString(&local_e28,&local_b98);
              UE::Logging::Private::BasicLog<6>
                        ((FStaticBasicLogRecord *)&PTR_u_CreateAsyncPack_1508afe70,
                         (FLogCategoryBase *)&LogStreaming);
              if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b98.Data.AllocatorInstance.Data);
              }
              if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b88.Data.AllocatorInstance.Data);
              }
              if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b78.Data.AllocatorInstance.Data);
              }
              param_1 = local_f38;
              if (local_b68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b68[0].Data.AllocatorInstance.Data);
                param_1 = local_f38;
              }
            }
          }
          else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
                  (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
                   GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
            FVar41 = (ForElementType<FSetElementId>)0x154ba3ce8;
            if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
                (ForElementType<FSetElementId>)0x0) {
              FVar41 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
            }
            iVar47 = *(int *)((longlong)FVar41 +
                             (ulonglong)
                             (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                             local_e38.ComparisonIndex.Value) * 4);
            if (iVar47 != -1) {
              do {
                if (*(longlong *)
                     (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar47 * 0x10) ==
                    CONCAT44(local_e38.Number,local_e38.ComparisonIndex.Value)) goto LAB_1423154f0;
                iVar47 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                                 (longlong)iVar47 * 0x10);
              } while (iVar47 != -1);
            }
          }
          LOCK();
          paVar3 = &(this_02->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter;
          aVar5 = *paVar3;
          *paVar3 = (atomic<int>)((int)*paVar3 + -1);
          UNLOCK();
          if ((aVar5 == (atomic<int>)0x1) &&
             (paVar14 = &((this_02->PackagesWithRemainingWorkCounter).WakeEvent)->State,
             paVar14 != (atomic<unsigned_char> *)0x0)) {
            LOCK();
            FVar4.State = *paVar14;
            *paVar14 = (atomic<unsigned_char>)0x1;
            UNLOCK();
            if (((byte)FVar4.State & 3) == 2) {
              UE::ParkingLot::WakeAll(paVar14);
            }
          }
          aVar38 = (atomic<__int64>)
                   (longlong)
                   (int)(this_02->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter
          ;
          if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value != aVar38) {
            LOCK();
            UNLOCK();
            __GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value = aVar38;
            if (-1 < CountersChannel->Enabled) {
              if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
                  (atomic<unsigned_int>)0x0) {
                uVar28 = FCountersTrace::OutputInitCounter
                                   (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterName
                                    ,TraceCounterType_Int,
                                    __GTraceCounterAsyncLoadingPackagesWithRemainingWork.
                                    CounterFlags & 0xf);
                LOCK();
                if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
                    (atomic<unsigned_int>)0x0) {
                  __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._2_2_ = 0;
                  __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_ = uVar28;
                }
                UNLOCK();
              }
              FCountersTrace::OutputSetValue
                        (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_,
                         (long64)__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value);
            }
          }
        }
        else {
          if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_142314fb0:
            if (5 < (byte)LogStreaming._0_1_) {
              ::LexToString(&local_bb8,&local_e30);
              FVar34 = FPackagePath::GetPackageFName(&local_e20);
              ::FName::ToString((FName *)FVar34,&local_bc8);
              ::LexToString(&local_bd8,(FPackageId *)&local_e38);
              ::FName::ToString(&local_e28,&local_be8);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_be8.Data.AllocatorInstance.Data);
              }
              if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
              }
              if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
              }
              param_1 = local_f38;
              if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
                param_1 = local_f38;
              }
            }
          }
          else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
                  (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
                   GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
            FVar41 = (ForElementType<FSetElementId>)0x154ba3ce8;
            if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
                (ForElementType<FSetElementId>)0x0) {
              FVar41 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
            }
            iVar46 = *(int *)((longlong)FVar41 +
                             (ulonglong)
                             (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                             local_e38.ComparisonIndex.Value) * 4);
            if (iVar46 != -1) {
              do {
                if (*(longlong *)
                     (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar46 * 0x10) ==
                    CONCAT44(local_e38.Number,local_e38.ComparisonIndex.Value)) goto LAB_142314fb0;
                iVar46 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                                 (longlong)iVar46 * 0x10);
              } while (iVar46 != -1);
            }
          }
          this_01 = this_02->FileOpenLogWrapper;
          if (this_01 != (FPlatformFileOpenLog *)0x0) {
            pFVar31 = ::FName::ToString(&local_e28,&local_ba8);
            if ((pFVar31->Data).ArrayNum == 0) {
              pwVar40 = L"";
            }
            else {
              pwVar40 = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
            }
            FPlatformFileOpenLog::AddToOpenLog(this_01,pwVar40);
            if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
            }
          }
          if (EVar29 == Pending) {
            pTVar2 = &this_02->PendingPackages;
            pFVar12 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar12 <= (FScriptContainerElement *)&local_f20) &&
                ((FScriptContainerElement *)&local_f20 <
                 pFVar12 + (longlong)(this_02->PendingPackages).ArrayMax * 8)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar25)) {
              pcVar15 = (code *)swi(3);
              uVar26 = (*pcVar15)();
              return (bool)uVar26;
            }
            iVar47 = (this_02->PendingPackages).ArrayNum;
            piVar1 = &(this_02->PendingPackages).ArrayMax;
            if (iVar47 == *piVar1) {
              iVar47 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar2->AllocatorInstance,piVar1);
            }
            (this_02->PendingPackages).ArrayNum = iVar47 + 1;
            *(FAsyncPackage2 **)((pTVar2->AllocatorInstance).Data + (longlong)iVar47 * 8) =
                 local_f20;
          }
          else {
            bVar25 = false;
            if (-1 < LoadTimeChannel->Enabled) {
              UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuCreateAsyncPackageFields>
                        ((TLogScope<1> *)&local_ab8);
              *local_ab8 = CONCAT44(local_e38.Number,local_e38.ComparisonIndex.Value);
              pwVar40 = &local_888;
              wVar8 = local_888;
              while (wVar8 != L'\0') {
                pwVar40 = pwVar40 + 1;
                iVar47 = iVar47 + 1;
                wVar8 = *pwVar40;
              }
              UE::Trace::Private::Field_WriteStringWide(1,&local_888,iVar47);
              lVar13 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              if (*(char *)(lVar13 + 0x9d48) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar13 = *(longlong *)(lVar13 + 0x20);
              **(undefined1 **)(lVar13 + 0x20) = 6;
              lVar35 = *(longlong *)(lVar13 + 0x20) + 1;
              *(longlong *)(lVar13 + 0x20) = lVar35;
              if (lVar13 != local_ab0) {
                *(longlong *)(lVar13 + 0x28) = lVar35;
              }
              bVar25 = true;
              *(undefined8 *)(local_ab0 + 0x28) = *(undefined8 *)(local_ab0 + 0x20);
            }
            if ((EVar29 != Ok) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PackageStatus == EPackageStoreEntryStatus::Ok",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x1682,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              uVar26 = (*pcVar15)();
              return (bool)uVar26;
            }
            pFVar44 = local_f20;
            if (EVar48 == Unknown) {
              bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PackageLoader != EPackageLoader::Unknown",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                  ,0x1683,L"");
              if (bVar27) {
                pcVar15 = (code *)swi(3);
                uVar26 = (*pcVar15)();
                return (bool)uVar26;
              }
LAB_1423153a4:
              bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PackageLoader == EPackageLoader::Zen",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                  ,0x168c,L"");
              if (bVar27) {
                pcVar15 = (code *)swi(3);
                uVar26 = (*pcVar15)();
                return (bool)uVar26;
              }
LAB_1423153ca:
              InitializeAsyncPackageFromPackageStore
                        (this_02,param_1,&local_da8,local_f20,&local_dd0);
            }
            else {
              if (EVar48 != LinkerLoad) {
                if (EVar48 != Zen) goto LAB_1423153a4;
                goto LAB_1423153ca;
              }
              if ((local_f20->LinkerLoadState).bIsSet != false) {
                pFVar12 = (local_f20->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.
                          AllocatorInstance.Data;
                if (pFVar12 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar12);
                }
                pFVar12 = (pFVar44->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.
                          AllocatorInstance.Data;
                if (pFVar12 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar12);
                }
                pFVar12 = (pFVar44->LinkerLoadState).TypedValue.LinkerLoadHeaderData.
                          ImportedPublicExportHashes.AllocatorInstance.Data;
                if (pFVar12 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar12);
                }
              }
              (pFVar44->LinkerLoadState).TypedValue.PostLoadExportIndex = 0;
              (pFVar44->LinkerLoadState).TypedValue.bIsCurrentlyResolvingImports = false;
              (pFVar44->LinkerLoadState).TypedValue.bIsCurrentlyCreatingExports = false;
              (pFVar44->LinkerLoadState).TypedValue.bContainsClasses = false;
              (pFVar44->LinkerLoadState).TypedValue.field_0x1f = 0;
              (pFVar44->LinkerLoadState).TypedValue.Linker = (FLinkerLoad *)0x0;
              (pFVar44->LinkerLoadState).TypedValue.ProcessingImportedPackageIndex = 0;
              (pFVar44->LinkerLoadState).TypedValue.CreateImportIndex = 0;
              (pFVar44->LinkerLoadState).TypedValue.CreateExportIndex = 0;
              (pFVar44->LinkerLoadState).TypedValue.SerializeExportIndex = 0;
              (pFVar44->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportedPublicExportHashes.
              AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pFVar44->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportedPublicExportHashes.
              ArrayNum = 0;
              (pFVar44->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportedPublicExportHashes.
              ArrayMax = 0;
              (pFVar44->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.AllocatorInstance
              .Data = (FScriptContainerElement *)0x0;
              (pFVar44->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.ArrayNum = 0;
              (pFVar44->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.ArrayMax = 0;
              (pFVar44->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.AllocatorInstance
              .Data = (FScriptContainerElement *)0x0;
              (pFVar44->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.ArrayNum = 0;
              (pFVar44->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.ArrayMax = 0;
              (pFVar44->LinkerLoadState).bIsSet = true;
              FAsyncPackage2::CreateUPackage(pFVar44);
              FAsyncPackage2::CreateLinker(pFVar44,(FLinkerInstancingContext *)(local_e58 + 0x10));
            }
            FAsyncPackage2::StartLoading(local_f20,param_1,&local_da8);
            if (bVar25) {
              uVar36 = UE::Trace::Private::TimeGetTimestamp();
              lVar35 = uVar36 - UE::Trace::Private::GStartCycle;
              lVar13 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              if (*(char *)(lVar13 + 0x9d48) == '\0') {
                __dyn_tls_on_demand_init();
              }
              pFVar37 = *(FWriteBuffer **)(lVar13 + 0x20);
              if ((int)pFVar37 - *(int *)&pFVar37->Cursor < 8) {
                pFVar37 = UE::Trace::Private::Writer_NextBuffer();
              }
              *(longlong *)pFVar37->Cursor = lVar35 * 0x100 + 0x12;
              pFVar37->Cursor = pFVar37->Cursor + 8;
              pFVar37->Committed = pFVar37->Cursor;
            }
          }
        }
        local_ca8 = (undefined4 *)local_e58;
        local_ca0 = &local_f20;
        TSet<TTuple<int,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<int,FAsyncPackage2_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,FAsyncPackage2_*_const_&>_>
                  ((TSet<TTuple<int,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<int,FAsyncPackage2_*,0>,FDefaultSetAllocator>
                    *)&this_02->RequestIdToPackageMap,
                   (TPairInitializer<int_const_&,FAsyncPackage2_*_const_&> *)local_d08,
                   (bool *)&local_ca8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_e58._24_8_);
      if (local_e68 != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e80);
        TVar23.Ptr = local_e90.Ptr;
        if (local_e90.Ptr !=
            (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
             *)0x0) {
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e90.Ptr);
          ::operator_delete(TVar23.Ptr,0x18);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_eb0);
      }
    } while (local_f30 < local_f10);
    cVar19 = local_f46;
    bVar42 = local_f47 | 0 < local_f30;
    local_f47 = bVar42;
    if (local_f30 == 0) goto LAB_14231582d;
    if (param_1->bUseTimeLimit != false) {
      QueryPerformanceCounter(&local_d40);
      dVar6 = param_1->TimeLimit;
      dVar17 = (double)local_d40.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar18;
      dVar16 = dVar17 - param_1->StartTime;
      if ((dVar6 < dVar16) && (GWarnIfTimeLimitExceeded != 0)) {
        IsTimeLimitExceededPrint
                  (param_1->StartTime,dVar17,param_1->LastTestTime,dVar6,
                   L"CreateAsyncPackagesFromQueue",(UObject *)0x0);
        param_1->LastTestTime = dVar17;
        goto LAB_14231582d;
      }
      param_1->LastTestTime = dVar17;
      if (dVar6 < dVar16) goto LAB_14231582d;
    }
  } while (((GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) ||
           ((param_1->SyncLoadContextStack).ArrayNum != 0)) ||
          (bVar25 = IsInParallelLoadingThread(), bVar25));
  if (5 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
LAB_14231582d:
  FIoBatch::Issue(&local_da8);
  FPackageStoreReadScope::~FPackageStoreReadScope(&local_d50);
  FIoBatch::~FIoBatch(&local_da8);
  *(undefined4 *)(local_d48 + 10) = local_ee8;
  if (cVar19 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)bVar42;
}

// DeleteAsyncPackage @ 142317bb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::DeleteAsyncPackage(FAsyncLoadingThread2 *this,FAsyncPackage2 *param_1)

{
  undefined1 *puVar1;
  TMap<int,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAsyncPackage2_*,0>_>
  *this_00;
  atomic<int> *paVar2;
  FScriptContainerElement *pFVar3;
  FManualResetEvent FVar4;
  atomic<int> aVar5;
  atomic<unsigned_char> *paVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  ushort uVar10;
  int iVar11;
  atomic<__int64> aVar12;
  ForElementType<FSetElementId> FVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_FAsyncLoadingThread2::DeleteAsyncPackage(FAsyncPackage2*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId5033,"DeleteAsyncPackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x13a9);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_FAsyncLoadingThread2::DeleteAsyncPackage(FAsyncPackage2*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId5033);
  }
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar13 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar13 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar11 = *(int *)((longlong)FVar13 +
                     (ulonglong)
                     (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                     (uint)(param_1->Desc).UPackageId.Id) * 4);
    if (iVar11 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar11 * 0x10) ==
            (param_1->Desc).UPackageId.Id) {
          bVar9 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          break;
        }
        iVar11 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 +
                         (longlong)iVar11 * 0x10);
      } while (iVar11 != -1);
    }
  }
  pFVar14 = (param_1->RequestIDs).AllocatorInstance.Data;
  this_00 = &this->RequestIdToPackageMap;
  iVar11 = (param_1->RequestIDs).ArrayNum;
  pFVar3 = pFVar14 + (longlong)iVar11 * 4;
  while( true ) {
    if ((param_1->RequestIDs).ArrayNum != iVar11) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar3) break;
    local_res10[0] = *(uint *)pFVar14;
    if (*(int *)&(this->RequestIdToPackageMap).field_0x8 !=
        *(int *)&(this->RequestIdToPackageMap).field_0x34) {
      TSet<TTuple<int,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<int,FAsyncPackage2_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<int,FAsyncPackage2_*,0>,FDefaultSetAllocator>
                         *)this_00,local_res10[0],(int *)local_res10);
    }
    pFVar14 = pFVar14 + 4;
  }
  if (*(int *)&(this->RequestIdToPackageMap).field_0x8 ==
      *(int *)&(this->RequestIdToPackageMap).field_0x34) {
    for (lVar7 = 0x3f; 0x20fUL >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
    iVar15 = 1 << ((byte)lVar7 & 0x1f);
    iVar11 = *(int *)&(this->RequestIdToPackageMap).field_0x48;
    if ((iVar11 < iVar15) || (iVar15 < iVar11)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
      TSet<TTuple<int,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<int,FAsyncPackage2_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<int,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<int,FAsyncPackage2_*,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar1 = &(this->RequestIdToPackageMap).field_0xc;
    *(undefined4 *)&(this->RequestIdToPackageMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0x200) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0x200,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->RequestIdToPackageMap).field_0x34 = 0;
    *(undefined4 *)&(this->RequestIdToPackageMap).field_0x28 = 0;
    *(undefined4 *)&(this->RequestIdToPackageMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->RequestIdToPackageMap).field_0x2c = 0x200;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RequestIdToPackageMap).field_0x10,0);
    if (bVar9) {
      *(int *)&(this->RequestIdToPackageMap).field_0x48 = iVar15;
      TSet<TTuple<int,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<int,FAsyncPackage2_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<int,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<int,FAsyncPackage2_*,0>,FDefaultSetAllocator>
                *)this_00);
    }
  }
  if (param_1 != (FAsyncPackage2 *)0x0) {
    (**(code **)param_1->_padding_)(param_1,1);
  }
  LOCK();
  paVar2 = &(this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter;
  aVar5 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + -1);
  UNLOCK();
  if ((aVar5 == (atomic<int>)0x1) &&
     (paVar6 = &((this->PackagesWithRemainingWorkCounter).WakeEvent)->State,
     paVar6 != (atomic<unsigned_char> *)0x0)) {
    LOCK();
    FVar4.State = *paVar6;
    *paVar6 = (atomic<unsigned_char>)0x1;
    UNLOCK();
    if (((byte)FVar4.State & 3) == 2) {
      UE::ParkingLot::WakeAll(paVar6);
    }
  }
  aVar12 = (atomic<__int64>)
           (longlong)(int)(this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter;
  if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value != aVar12) {
    LOCK();
    UNLOCK();
    __GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value = aVar12;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
          (atomic<unsigned_int>)0x0) {
        uVar10 = FCountersTrace::OutputInitCounter
                           (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterName,
                            TraceCounterType_Int,
                            __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterFlags & 0xf)
        ;
        LOCK();
        if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
            (atomic<unsigned_int>)0x0) {
          __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._2_2_ = 0;
          __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_ = uVar10;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_,
                 (long64)__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value);
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// FindOrInsertPackage @ 1423230e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncPackage2 * __thiscall
FAsyncLoadingThread2::FindOrInsertPackage
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,FAsyncPackageDesc2 *param_2
          ,bool *param_3,FAsyncPackage2 *param_4,
          TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
          *param_5,TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *param_6)

{
  FPackageId *pFVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *pTVar6;
  bool bVar7;
  int iVar8;
  FAsyncPackage2 *pFVar9;
  FAsyncPackage2 **ppFVar10;
  FAsyncLoadingPostLoadGroup *pFVar11;
  PSRWLOCK SRWLock;
  FAsyncLoadingPostLoadGroup *pFVar12;
  bool bVar13;
  FAsyncPackage2 *local_98;
  FPackageId *local_90;
  TSharedPtr<FLoadPackageAsyncProgressDelegate,1> **local_88;
  FAsyncPackage2 **local_80;
  FAsyncLoadingThread2 *local_78;
  FAsyncLoadingThreadState2 *local_70;
  FAsyncPackageDesc2 *local_68;
  bool *local_60;
  FAsyncPackage2 **local_58;
  FAsyncPackageDesc2 *local_50;
  FAsyncLoadingThreadState2 *local_48;
  FAsyncLoadingThread2 *local_40;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  *local_38;
  TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *local_30;
  
  bVar13 = -1 < CpuChannel->Enabled;
  local_38 = param_5;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5412,"FindOrInsertPackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1524);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5412);
    local_38 = param_5;
  }
  pTVar6 = param_6;
  local_58 = &local_98;
  local_80 = &local_98;
  pFVar1 = &param_2->UPackageId;
  *param_3 = false;
  uVar3 = (uint)pFVar1->Id;
  local_98 = (FAsyncPackage2 *)0x0;
  local_30 = param_6;
  SRWLock = (PSRWLOCK)
            ((longlong)&this->FailedPackageRequestsCritical +
            (ulonglong)(uVar3 & 0x1f) * 0x58 + 0x28);
  local_78 = this;
  local_70 = param_1;
  local_68 = param_2;
  local_60 = param_3;
  local_50 = param_2;
  local_48 = param_1;
  local_40 = this;
  param_5 = local_38;
  if (SRWLock == (PSRWLOCK)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FAsyncPackage2 *)(*pcVar5)();
      return pFVar9;
    }
  }
  AcquireSRWLockExclusive(SRWLock);
  ppFVar10 = TMapBase<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
             ::FindByHash<FPackageId>
                       ((TMapBase<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
                         *)(SRWLock + 1),uVar3,pFVar1);
  if (ppFVar10 == (FAsyncPackage2 **)0x0) {
    param_6 = (TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *)
              `FAsyncLoadingThread2::FindOrInsertPackage'::__l3::<lambda_1>::operator()(&local_80);
    local_88 = &param_6;
    local_90 = pFVar1;
    TSet<TTuple<FPackageId,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<FPackageId_const_&,FAsyncPackage2_*_&&>_>
              ((TSet<TTuple<FPackageId,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FDefaultSetAllocator>
                *)(SRWLock + 1),(uint)&param_5,
               (TPairInitializer<FPackageId_const_&,FAsyncPackage2_*_&&> *)(ulonglong)uVar3,
               (bool *)&local_90);
    `FAsyncLoadingThread2::FindOrInsertPackage'::__l3::<lambda_2>::operator()
              (&local_58,
               *(FAsyncPackage2 **)((longlong)SRWLock[1].Ptr + (longlong)(int)param_5 * 0x18 + 8));
  }
  else {
    `FAsyncLoadingThread2::FindOrInsertPackage'::__l3::<lambda_2>::operator()(&local_58,*ppFVar10);
  }
  pFVar12 = (FAsyncLoadingPostLoadGroup *)0x0;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if (*param_3 != false) {
    pFVar11 = ::operator_new(0x20);
    if (pFVar11 != (FAsyncLoadingPostLoadGroup *)0x0) {
      pFVar11->SyncLoadContextId = 0;
      (pFVar11->Packages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->Packages).ArrayNum = 0;
      (pFVar11->Packages).ArrayMax = 0;
      pFVar11->PackagesWithExportsToSerializeCount = 0;
      pFVar11->PackagesWithExportsToPostLoadCount = 0;
      pFVar12 = pFVar11;
    }
    pFVar12->PackagesWithExportsToSerializeCount = pFVar12->PackagesWithExportsToSerializeCount + 1;
    pFVar4 = (pFVar12->Packages).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_98) &&
       ((FScriptContainerElement *)&local_98 < pFVar4 + (longlong)(pFVar12->Packages).ArrayMax * 8))
    {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FAsyncPackage2 *)(*pcVar5)();
        return pFVar9;
      }
    }
    iVar8 = (pFVar12->Packages).ArrayNum;
    piVar2 = &(pFVar12->Packages).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar12->Packages).AllocatorInstance,piVar2);
    }
    (pFVar12->Packages).ArrayNum = iVar8 + 1;
    *(FAsyncPackage2 **)((pFVar12->Packages).AllocatorInstance.Data + (longlong)iVar8 * 8) =
         local_98;
    if (local_98->PostLoadGroup != (FAsyncLoadingPostLoadGroup *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Package->PostLoadGroup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1572,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FAsyncPackage2 *)(*pcVar5)();
        return pFVar9;
      }
    }
    local_98->PostLoadGroup = pFVar12;
  }
  pFVar9 = local_98;
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar6->SharedReferenceCount).ReferenceController);
  return pFVar9;
}

// FinishInitializeAsyncPackage @ 142323a00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::FinishInitializeAsyncPackage
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  FExportObject *pFVar7;
  FExportCell *pFVar8;
  FExportObject *pFVar9;
  FExportCell *pFVar10;
  FExportBundleEntry *_Dst;
  uint uVar11;
  uchar *puVar12;
  longlong lVar13;
  undefined4 uStack_3c;
  
  iVar2 = (int)(param_2->HeaderData)._padding_;
  lVar13 = (longlong)(int)(param_2->HeaderData)._padding_;
  lVar1 = (longlong)(int)(param_2->HeaderData)._padding_ * 8;
  puVar12 = (uchar *)(lVar13 * 0x10 + (longlong)iVar2 * 0x20 + lVar1);
  pFVar7 = FMemory::Malloc((ulong64)puVar12,0);
  (param_2->Data).MemoryBuffer1 = (uchar *)pFVar7;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (param_2->Data).Exports.DataPtr = pFVar7;
  *(ulonglong *)&(param_2->Data).Exports.ArrayNum = CONCAT44(uStack_3c,iVar2);
  iVar3 = (int)(param_2->HeaderData)._padding_;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  _Dst = (FExportBundleEntry *)(&pFVar7[iVar2].Object + lVar13 * 2);
  (param_2->Data).CellExports.DataPtr = (FExportCell *)(pFVar7 + iVar2);
  *(ulonglong *)&(param_2->Data).CellExports.ArrayNum = CONCAT44(uStack_3c,iVar3);
  iVar2 = (int)(param_2->HeaderData)._padding_;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar13 = (param_2->HeaderData)._padding_;
  _Src = (void *)(param_2->HeaderData)._padding_;
  (param_2->HeaderData).ExportBundleEntriesCopyForPostLoad.DataPtr = _Dst;
  *(ulonglong *)&(param_2->HeaderData).ExportBundleEntriesCopyForPostLoad.ArrayNum =
       CONCAT44(uStack_3c,iVar2);
  memcpy(_Dst,_Src,(longlong)(int)lVar13 << 3);
  iVar2 = (param_2->Data).Exports.ArrayNum;
  uVar5 = *(undefined4 *)&(param_2->Data).Exports.field_0xc;
  (param_2->HeaderData).ExportsView.DataPtr = (param_2->Data).Exports.DataPtr;
  (param_2->HeaderData).ExportsView.ArrayNum = iVar2;
  *(undefined4 *)&(param_2->HeaderData).ExportsView.field_0xc = uVar5;
  iVar2 = (param_2->Data).CellExports.ArrayNum;
  uVar5 = *(undefined4 *)&(param_2->Data).CellExports.field_0xc;
  (param_2->HeaderData).CellExportsView.DataPtr = (param_2->Data).CellExports.DataPtr;
  (param_2->HeaderData).CellExportsView.ArrayNum = iVar2;
  *(undefined4 *)&(param_2->HeaderData).CellExportsView.field_0xc = uVar5;
  if (((uchar *)((longlong)_Dst + (lVar1 - (longlong)(param_2->Data).MemoryBuffer1)) != puVar12) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataPtr - Data.MemoryBuffer1 == MemoryBufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,5000,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar11 = (param_2->Data).Exports.ArrayNum + 1;
  if (-1 < (int)uVar11) {
    if ((param_2->ConstructedObjects).ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&(param_2->ConstructedObjects).AllocatorInstance,
                 (param_2->ConstructedObjects).ArrayNum,&(param_2->ConstructedObjects).ArrayMax);
    }
    pFVar7 = (param_2->Data).Exports.DataPtr;
    pFVar9 = pFVar7 + (param_2->Data).Exports.ArrayNum;
    for (; pFVar7 != pFVar9; pFVar7 = pFVar7 + 1) {
      pFVar7->Object = (UObject *)0x0;
      pFVar7->TemplateObject = (UObject *)0x0;
      pFVar7->SuperObject = (UObject *)0x0;
      pFVar7->bFiltered = false;
      pFVar7->bExportLoadFailed = false;
      pFVar7->bWasFoundInMemory = false;
      *(undefined5 *)&pFVar7->field_0x1b = 0;
    }
    pFVar8 = (param_2->Data).CellExports.DataPtr;
    pFVar10 = pFVar8 + (param_2->Data).CellExports.ArrayNum;
    for (; pFVar8 != pFVar10; pFVar8 = pFVar8 + 1) {
      pFVar8->Cell = (VCell *)0x0;
      *(undefined8 *)&pFVar8->bSerialized = 0;
    }
    (param_2->Data).bCellExportsInitialized = (atomic<bool>)0x1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
}

// FlushLoading @ 142324020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::FlushLoading(FAsyncLoadingThread2 *this,TArrayView<int_const_,int> *param_1)

{
  TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory> *pTVar1;
  atomic<int> *paVar2;
  void *_Dst;
  int *piVar3;
  atomic<int> aVar4;
  atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> aVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<FAsyncPackage2_*> FVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  TArray<FAsyncPackage2_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  FAsyncLoadingThread2 *pFVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  DWORD DVar24;
  uint uVar25;
  int iVar26;
  uint *puVar27;
  FTlsAutoCleanup *pFVar28;
  FThreadManager *this_00;
  FAsyncLoadingThreadState2 *pFVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread> FVar31;
  longlong *plVar32;
  FAsyncLoadingPostLoadGroup *pFVar33;
  FAsyncLoadingSyncLoadContext *this_01;
  FAsyncLoadingSyncLoadContext *pFVar34;
  atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> aVar35;
  FThreadHeartBeat *this_02;
  FMonotonicTimePoint FVar36;
  FOutputDeviceRedirector *this_03;
  FWriteBuffer *pFVar37;
  FNameEntryId FVar38;
  FScriptContainerElement *pFVar39;
  uint uVar40;
  FAsyncPackage2 *pFVar41;
  TStatIdData *pTVar42;
  longlong *plVar43;
  ForElementType<FAsyncPackage2_*> FVar44;
  void **SRWLock;
  FColor_u_0 FVar45;
  FName FVar46;
  ForAnyElementType FVar47;
  FName FVar48;
  FName FVar49;
  int iVar50;
  char cVar51;
  int iVar52;
  longlong lVar53;
  TArrayView<int_const_,int> *pTVar54;
  bool bVar55;
  bool bVar56;
  undefined1 auStackY_2c8 [32];
  bool local_265 [5];
  FAsyncPackage2 *local_260;
  byte local_258;
  undefined1 local_257;
  undefined1 local_256 [6];
  FAsyncLoadingSyncLoadContext *local_250;
  FAsyncLoadingThread2 *local_248;
  FName local_240;
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236 [6];
  TArrayView<int_const_,int> *local_230;
  undefined4 local_228;
  FLLMScope local_224;
  FColor_u_0 local_220;
  uint uStack_21c;
  longlong *local_218;
  FColor_u_0 local_210 [2];
  FColor_u_0 local_208;
  uint local_204;
  FName local_200;
  FName local_1f8;
  undefined1 *local_1f0;
  FName local_1e8;
  FName local_1d8;
  LARGE_INTEGER local_1c8;
  LARGE_INTEGER local_1c0;
  LARGE_INTEGER local_1b8;
  LARGE_INTEGER local_1b0;
  FTlsAutoCleanup *local_1a8;
  FMemScope local_1a0;
  LARGE_INTEGER local_198;
  FAsyncLoadingPostLoadGroup *local_190;
  FString local_188;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  FName local_158;
  FName local_150 [3];
  TArrayView<int_const_,int> local_138;
  TArrayView<int_const_,int> local_128;
  TArrayView<int_const_,int> local_118;
  TArrayView<int_const_,int> local_108;
  TArrayView<int_const_,int> local_f8;
  TArrayView<int_const_,int> local_e8;
  FString local_d8;
  TLogScope<0> local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if (*(int *)&(this->PackagesWithRemainingWorkCounter).WakeEvent == 0) {
    return;
  }
  local_248 = this;
  local_230 = param_1;
  FLLMScope::FLLMScope(&local_224,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_1a0,AsyncLoading,true);
  bVar55 = -1 < MetadataChannel->Enabled;
  if (bVar55) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_c8);
    *(undefined8 *)(local_c8._8_8_ + 0x28) = *(undefined8 *)(local_c8._8_8_ + 0x20);
  }
  puVar27 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_170 = &local_238;
  local_178 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar28 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_178,puVar27);
  local_228 = *(undefined4 *)(pFVar28 + 10);
  *(undefined4 *)(pFVar28 + 10) = 0x400000;
  local_1a8 = pFVar28;
  bVar22 = IsInGameThread();
  if (!bVar22) {
    DVar24 = GetCurrentThreadId();
    lVar53 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar53 + 0x9d4c) <
         `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                          ::__l2::GameThreadName,L"GameThread");
      atexit(`FThreadManager::GetThreadName'::__l2::_dynamic_atexit_destructor_for__GameThreadName__
            );
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if ((*(int *)(lVar53 + 0x9d4c) <
         `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
         ::__l2::_thread_safe_static_guard_1__) &&
       (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                             ::__l2::_thread_safe_static_guard_1__),
       `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
       ::__l2::_thread_safe_static_guard_1__ == -1)) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                          ::__l2::RenderThreadName,L"RenderThread");
      atexit(`FThreadManager::GetThreadName'::__l2::
             _dynamic_atexit_destructor_for__RenderThreadName__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
    if ((DVar24 != GGameThreadId) && (DVar24 != GRenderThreadId)) {
      this_00 = FThreadManager::Get();
      FThreadManager::GetThreadNameInternal(this_00,DVar24);
    }
    ::LexToString(ZenLoader);
    ::FString::PrintfImpl
              (&local_188,
               L"The current loader \'%s\' is unable to FlushAsyncLoading from the current thread \'%s\'. Flush will be ignored."
              );
    FVar47.Data = (FScriptContainerElement *)L"";
    if (local_188.Data.ArrayNum != 0) {
      FVar47.Data = local_188.Data.AllocatorInstance.Data;
    }
    ::FDebug::DumpStackTraceToLog((wchar_t *)FVar47.Data,Error);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
      *(undefined4 *)(pFVar28 + 10) = local_228;
      goto LAB_1423254d9;
    }
LAB_142324314:
    *(undefined4 *)(pFVar28 + 10) = local_228;
    goto LAB_1423254d9;
  }
  if (0 < *(int *)((longlong)&this->Thread + 4)) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  iVar26 = param_1->ArrayNum;
  if (iVar26 != 0) {
    local_138.DataPtr._0_4_ = *(undefined4 *)&param_1->DataPtr;
    local_138.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    local_138.ArrayNum = param_1->ArrayNum;
    local_138._12_4_ = *(undefined4 *)&param_1->field_0xc;
    piVar3 = &(this->PendingRequests).HashSize;
    if (piVar3 == (int *)0x0) {
LAB_1423255c2:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)piVar3);
    bVar22 = Algo::
             NoneOf<TArrayView<int_const_,int>,_FAsyncLoadingThread2::ContainsAnyRequestID_::__l2::<lambda_1>_>
                       (&local_138,(<lambda_1>)&this[-1].AsyncLoadingTickCounter);
    LeaveCriticalSection((LPCRITICAL_SECTION)piVar3);
    param_1 = local_230;
    if (bVar22) goto LAB_142324314;
  }
  pFVar29 = FAsyncLoadingThreadState2::Get();
  if (pFVar29 != (FAsyncLoadingThreadState2 *)0x0) {
    if (pFVar29->bIsAsyncLoadingThread != false) {
      local_128.DataPtr = param_1->DataPtr;
      local_128.ArrayNum = param_1->ArrayNum;
      local_128._12_4_ = *(undefined4 *)&param_1->field_0xc;
      FlushLoadingFromLoadingThread
                ((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,pFVar29,&local_128);
      *(undefined4 *)(pFVar28 + 10) = local_228;
      goto LAB_1423254d9;
    }
    bVar22 = IsInParallelLoadingThread();
    if (bVar22) {
      local_118.DataPtr = param_1->DataPtr;
      local_118.ArrayNum = param_1->ArrayNum;
      local_118._12_4_ = *(undefined4 *)&param_1->field_0xc;
      FlushLoadingFromParallelLoadingThread
                ((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,pFVar29,&local_118);
      goto LAB_142324314;
    }
  }
  pTVar42 = &TStatId::TStatId_NAME_None;
  if (iVar26 == 0) {
    FVar31 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)
             &TStatId::TStatId_NAME_None;
  }
  else {
    FVar31 = StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread;
    if (StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread ==
        (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)0x0) {
      pFVar30 = ::FName::FName(&local_158,"STAT_FAsyncPackage_FlushAsyncLoadingGameThread");
      FVar31 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread,*pFVar30,
                          L"Flush Async Loading GT","STATGROUP_AsyncLoadGameThread",
                          "STATCAT_Advanced",L"Async Load Game Thread",true,true,ST_int64,true,false
                          ,MCR_Invalid);
    }
  }
  FVar46 = *(FName *)FVar31;
  bVar22 = false;
  bVar14 = false;
  local_1e8.ComparisonIndex.Value = 0;
  local_1e8.Number = 0;
  bVar21 = false;
  bVar12 = false;
  FVar45.Bits = (uint)FVar46.ComparisonIndex.Value;
  uVar25 = FVar46.Number;
  if ((FVar45.Bits == 0) && (uVar25 == 0)) {
LAB_142324463:
    bVar14 = bVar12;
    bVar22 = bVar21;
    bVar21 = false;
    local_1f8 = local_1e8;
    FVar46 = local_1e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_210[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_210[0]._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar22 = false;
      bVar14 = true;
      bVar21 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.Bits = FVar45.Bits;
        local_204 = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_208._s_0,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x2e3b);
        bVar22 = true;
        bVar14 = true;
        bVar21 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142324463;
    local_220.Bits = FVar45.Bits;
    uStack_21c = uVar25;
    local_1f8 = FVar46;
    FThreadStats::AddMessage(FVar46,CycleScopeStart);
    bVar21 = true;
  }
  if ((iVar26 == 0) &&
     (pTVar42 = (TStatIdData *)StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread,
     StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread ==
     (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread>)0x0)) {
    pFVar30 = ::FName::FName(local_150,"STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread");
    pTVar42 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread,*pFVar30,
                         L"Flush All Async Loads GT","STATGROUP_AsyncLoadGameThread",
                         "STATCAT_Advanced",L"Async Load Game Thread",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar48 = *(FName *)pTVar42;
  bVar12 = false;
  bVar13 = false;
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  bVar20 = false;
  bVar56 = false;
  if ((FVar48.ComparisonIndex.Value.Value == 0) && (FVar48.Number == 0)) {
LAB_142324599:
    bVar13 = bVar56;
    bVar12 = bVar20;
    bVar20 = false;
    FVar48 = local_1d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_220.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_220._s_0,(char *)*(FName *)((longlong)pTVar42 + 0x10));
      bVar12 = false;
      bVar13 = true;
      bVar20 = false;
      bVar56 = true;
      if (-1 < CpuChannel->Enabled) {
        local_200.ComparisonIndex.Value = FVar48.ComparisonIndex.Value.Value;
        local_200.Number = FVar48.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_200,(wchar_t *)*(FName *)((longlong)pTVar42 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x2e3c);
        bVar12 = true;
        bVar13 = true;
        bVar20 = true;
        bVar56 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142324599;
    local_240 = FVar48;
    FThreadStats::AddMessage(FVar48,CycleScopeStart);
    bVar20 = true;
  }
  puVar27 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_160 = &local_237;
  local_168 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar28 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_168,puVar27);
  if (*(int *)&pFVar28[4].field_0x4 == 0) {
    if (CpuChannel->Enabled < 0) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&FCoreDelegates::OnAsyncLoadingFlush);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId11842,"FCoreDelegates::OnAsyncLoadingFlush",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x2e42);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11842);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&FCoreDelegates::OnAsyncLoadingFlush);
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  QueryPerformanceCounter(&local_198);
  dVar17 = __real_4170000000000000;
  local_260 = (FAsyncPackage2 *)0x0;
  dVar11 = (double)local_198.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if (0 < *(int *)(*(longlong *)&(this->UnreachableObjects).ArrayNum + 0x18)) {
    bVar56 = -1 < CpuChannel->Enabled;
    if (bVar56) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId11852,"HandleCurrentlyExecutingEventNode",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x2e4c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11852);
    }
    if (local_230->ArrayNum == 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    lVar53 = *(longlong *)&(this->UnreachableObjects).ArrayNum;
    uVar40 = *(int *)(lVar53 + 0x18) - 1;
    uVar25 = 0;
    if ((int)uVar40 < *(int *)(lVar53 + 0x18)) {
      uVar25 = ~uVar40 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar6 = *(longlong *)&(this->UnreachableObjects).ArrayNum;
    local_260 = *(FAsyncPackage2 **)
                 (*(longlong *)
                   (*(longlong *)(lVar53 + 0x10) + -8 + (longlong)*(int *)(lVar53 + 0x18) * 8) + 8);
    if (((*(FAsyncPackage2 ***)(lVar6 + 0x30) <= &local_260) &&
        (&local_260 < *(FAsyncPackage2 ***)(lVar6 + 0x30) + *(int *)(lVar6 + 0x3c))) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar26 = *(int *)(lVar6 + 0x38);
    if (iVar26 == *(int *)(lVar6 + 0x3c)) {
      iVar26 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)(lVar6 + 0x30),(int *)(lVar6 + 0x3c));
    }
    *(int *)(lVar6 + 0x38) = iVar26 + 1;
    *(FAsyncPackage2 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar26 * 8) = local_260;
    pFVar41 = (local_260->AllDependenciesFullyLoadedState).PackagesWaitingForThisHead;
    while (pFVar41 != (FAsyncPackage2 *)0x0) {
      FAsyncPackage2::FAllDependenciesState::RemoveFromWaitList
                ((pdm_72c38f00)0x540,local_260,pFVar41);
      FAsyncPackage2::ConditionalFinishLoading
                (pFVar41,*(FAsyncLoadingThreadState2 **)&(this->UnreachableObjects).ArrayNum);
      pFVar41 = (local_260->AllDependenciesFullyLoadedState).PackagesWaitingForThisHead;
    }
    if ((*(char *)(*(longlong *)&(this->UnreachableObjects).ArrayNum + 0x61) != '\0') &&
       (pFVar33 = local_260->PostLoadGroup, local_190 = pFVar33,
       pFVar33 != (FAsyncLoadingPostLoadGroup *)0x0)) {
      pFVar39 = (pFVar33->Packages).AllocatorInstance.Data;
      pFVar7 = pFVar39 + (longlong)(pFVar33->Packages).ArrayNum * 8;
      for (; pFVar39 != pFVar7; pFVar39 = pFVar39 + 8) {
        if (*(FAsyncPackage2 **)pFVar39 == local_260) goto LAB_14232488a;
      }
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("PostLoadGroup->Packages.Contains(CurrentlyExecutingPackage)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x2e5c,L"");
      if (bVar23) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
LAB_14232488a:
      if ((pFVar33->PackagesWithExportsToSerializeCount < 1) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("PostLoadGroup->PackagesWithExportsToSerializeCount > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x2e5d,L""), bVar23)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (1 < (pFVar33->Packages).ArrayNum) {
        pFVar7 = (pFVar33->Packages).AllocatorInstance.Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_260) &&
            ((FScriptContainerElement *)&local_260 <
             pFVar7 + (longlong)(pFVar33->Packages).ArrayMax * 8)) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar26 = (pFVar33->Packages).ArrayNum;
        plVar32 = (longlong *)(longlong)iVar26;
        if (iVar26 != 0) {
          FVar49 = (FName)(pFVar33->Packages).AllocatorInstance.Data;
          iVar52 = 0;
          local_258 = *(FAsyncPackage2 **)FVar49 != local_260;
          lVar53 = 0;
          pFVar41 = local_260;
          iVar26 = 0;
          local_240 = FVar49;
          local_218 = plVar32;
          do {
            iVar50 = iVar26;
            do {
              lVar53 = lVar53 + 1;
              iVar50 = iVar50 + 1;
              if ((longlong)plVar32 <= lVar53) break;
            } while ((bool)local_258 ==
                     (*(FAsyncPackage2 **)((longlong)FVar49 + lVar53 * 8) != pFVar41));
            if (local_258 != 0) {
              if (iVar52 != iVar26) {
                memmove((void *)((longlong)FVar49 + (longlong)iVar52 * 8),
                        (void *)((longlong)FVar49 + (longlong)iVar26 * 8),
                        (longlong)(iVar50 - iVar26) << 3);
                plVar32 = local_218;
                pFVar41 = local_260;
                FVar49 = local_240;
              }
              iVar52 = iVar52 + (iVar50 - iVar26);
            }
            local_258 = local_258 ^ 1;
            iVar26 = iVar50;
          } while (lVar53 < (longlong)plVar32);
          (local_190->Packages).ArrayNum = iVar52;
          this = local_248;
          pFVar33 = local_190;
        }
        pFVar33->PackagesWithExportsToSerializeCount =
             pFVar33->PackagesWithExportsToSerializeCount + -1;
        ConditionalBeginPostLoad
                  ((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,
                   *(FAsyncLoadingThreadState2 **)&(this->UnreachableObjects).ArrayNum,pFVar33);
        pFVar33 = ::operator_new(0x20);
        if (pFVar33 == (FAsyncLoadingPostLoadGroup *)0x0) {
          pFVar33 = (FAsyncLoadingPostLoadGroup *)0x0;
        }
        else {
          pFVar33->SyncLoadContextId = 0;
          (pFVar33->Packages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar33->Packages).ArrayNum = 0;
          (pFVar33->Packages).ArrayMax = 0;
          pFVar33->PackagesWithExportsToSerializeCount = 0;
          pFVar33->PackagesWithExportsToPostLoadCount = 0;
        }
        local_260->PostLoadGroup = pFVar33;
        local_260->PostLoadGroup->SyncLoadContextId = (ulong64)local_260->SyncLoadContextId;
        pFVar33 = local_260->PostLoadGroup;
        pFVar7 = (pFVar33->Packages).AllocatorInstance.Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_260) &&
            ((FScriptContainerElement *)&local_260 <
             pFVar7 + (longlong)(pFVar33->Packages).ArrayMax * 8)) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar26 = (pFVar33->Packages).ArrayNum;
        piVar3 = &(pFVar33->Packages).ArrayMax;
        if (iVar26 == *piVar3) {
          iVar26 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(pFVar33->Packages).AllocatorInstance,piVar3);
        }
        (pFVar33->Packages).ArrayNum = iVar26 + 1;
        *(FAsyncPackage2 **)((pFVar33->Packages).AllocatorInstance.Data + (longlong)iVar26 * 8) =
             local_260;
        local_260->PostLoadGroup->PackagesWithExportsToSerializeCount = 1;
      }
    }
    if (bVar56) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  pTVar54 = local_230;
  local_250 = (FAsyncLoadingSyncLoadContext *)0x0;
  if ((local_230->ArrayNum != 0) && (GOnlyProcessRequiredPackagesWhenSyncLoading != false)) {
    this_01 = ::operator_new(0x70);
    pFVar34 = (FAsyncLoadingSyncLoadContext *)0x0;
    if (this_01 != (FAsyncLoadingSyncLoadContext *)0x0) {
      local_108.DataPtr = pTVar54->DataPtr;
      local_108.ArrayNum = pTVar54->ArrayNum;
      local_108._12_4_ = *(undefined4 *)&pTVar54->field_0xc;
      pFVar34 = FAsyncLoadingSyncLoadContext::FAsyncLoadingSyncLoadContext
                          (this_01,&local_108,local_260);
    }
    local_250 = pFVar34;
    if (6 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    lVar53 = *(longlong *)&(this->UnreachableObjects).ArrayNum;
    if (((*(FAsyncLoadingSyncLoadContext ***)(lVar53 + 0x20) <= &local_250) &&
        (&local_250 < *(FAsyncLoadingSyncLoadContext ***)(lVar53 + 0x20) + *(int *)(lVar53 + 0x2c)))
       && (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar56)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar26 = *(int *)(lVar53 + 0x28);
    if (iVar26 == *(int *)(lVar53 + 0x2c)) {
      iVar26 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)(lVar53 + 0x20),(int *)(lVar53 + 0x2c));
    }
    *(int *)(lVar53 + 0x28) = iVar26 + 1;
    *(FAsyncLoadingSyncLoadContext **)(*(longlong *)(lVar53 + 0x20) + (longlong)iVar26 * 8) =
         local_250;
    if ((this->GameThreadState).Ptr != (FAsyncLoadingThreadState2 *)0x0) {
      LOCK();
      local_250->RefCount = (atomic<int>)((int)local_250->RefCount + 1);
      UNLOCK();
      pFVar29 = (this->GameThreadState).Ptr;
      aVar35 = (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)
               FMemory::Malloc(0x10,8);
      *(undefined8 *)aVar35 = 0;
      *(FAsyncLoadingSyncLoadContext **)((longlong)aVar35 + 8) = local_250;
      LOCK();
      pTVar1 = &pFVar29->SyncLoadContextsCreatedOnOtherThreads;
      aVar5 = pTVar1->Head;
      pTVar1->Head = aVar35;
      UNLOCK();
      *(atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> *)aVar5 = aVar35;
      FZenaphore::NotifyOne((FZenaphore *)&this->ConditionalBeginPostLoadTick);
    }
  }
  dVar18 = __real_3f90624dd2f1a9fc;
  dVar16 = __real_3ff0000000000000;
  local_240 = (FName)((ulonglong)local_240 & 0xffffffff00000000);
  dVar10 = 0.0;
  iVar26 = *(int *)&(this->PackagesWithRemainingWorkCounter).WakeEvent;
  while (iVar26 != 0) {
    local_f8.DataPtr = pTVar54->DataPtr;
    local_f8.ArrayNum = pTVar54->ArrayNum;
    local_f8._12_4_ = *(undefined4 *)&pTVar54->field_0xc;
    local_265[0] = false;
    TickAsyncLoadingFromGameThread
              ((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,
               *(FAsyncLoadingThreadState2 **)&(this->UnreachableObjects).ArrayNum,false,false,0.0,
               &local_f8,local_265);
    iVar26 = pTVar54->ArrayNum;
    if (iVar26 != 0) {
      local_e8.DataPtr._0_4_ = *(undefined4 *)&pTVar54->DataPtr;
      local_e8.DataPtr._4_4_ = *(undefined4 *)((longlong)&pTVar54->DataPtr + 4);
      local_e8.ArrayNum = pTVar54->ArrayNum;
      local_e8._12_4_ = *(undefined4 *)&pTVar54->field_0xc;
      piVar3 = &(this->PendingRequests).HashSize;
      if (piVar3 == (int *)0x0) goto LAB_1423255c2;
      EnterCriticalSection((LPCRITICAL_SECTION)piVar3);
      bVar56 = Algo::
               NoneOf<TArrayView<int_const_,int>,_FAsyncLoadingThread2::ContainsAnyRequestID_::__l2::<lambda_1>_>
                         (&local_e8,(<lambda_1>)&this[-1].AsyncLoadingTickCounter);
      LeaveCriticalSection((LPCRITICAL_SECTION)piVar3);
      this = local_248;
      pTVar54 = local_230;
      if (bVar56) break;
    }
    pFVar19 = local_248;
    cVar51 = local_265[0];
    if (local_265[0] == false) {
      if (iVar26 == 0) {
        piVar3 = &(local_248->PendingRequests).HashSize;
        if (piVar3 == (int *)0x0) goto LAB_1423255c2;
        EnterCriticalSection((LPCRITICAL_SECTION)piVar3);
        iVar26 = *(int *)&(pFVar19->PendingRequests).Elements;
        iVar52 = *(int *)&(pFVar19->PendingRequests).Elements.field_0x2c;
        LeaveCriticalSection((LPCRITICAL_SECTION)piVar3);
        this = local_248;
        pTVar54 = local_230;
        if (iVar26 == iVar52) break;
      }
      this = local_248;
      if (dVar10 == 0.0) {
        QueryPerformanceCounter(&local_1c8);
        local_240 = (FName)((ulonglong)local_240 & 0xffffffff00000000);
        pFVar29 = (local_248->GameThreadState).Ptr;
        dVar10 = (double)local_1c8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17;
        this = local_248;
        if (pFVar29 != (FAsyncLoadingThreadState2 *)0x0) {
          pFVar29->bIsActive = (atomic<bool>)0x0;
        }
      }
      else if (((GStallDetectorTimeout != 0.0) &&
               (*(int *)&(local_248->ExternalReadQueue).Tail == 0)) &&
              (QueryPerformanceCounter(&local_1c0),
              (double)GStallDetectorTimeout <
              ((double)local_1c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17) - dVar10
              )) {
        FVar38.Value = local_240.ComparisonIndex.Value + 1;
        local_240.ComparisonIndex.Value = FVar38.Value;
        if (GStallDetectorIdleLoops < (int)FVar38.Value) {
          if (0 < *(int *)(*(longlong *)&(this->UnreachableObjects).ArrayNum + 0x18)) {
            if (2 < (byte)LogStreaming._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            }
            lVar53 = *(longlong *)&(this->UnreachableObjects).ArrayNum;
            plVar43 = *(longlong **)(lVar53 + 0x10);
            iVar26 = *(int *)(lVar53 + 0x18);
            plVar32 = plVar43 + iVar26;
            local_218 = plVar32;
            while( true ) {
              if (*(int *)(lVar53 + 0x18) != iVar26) {
                local_257 = 0;
                `TCheckedPointerIterator<FEventLoadNode2_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_257);
              }
              FVar46 = local_1f8;
              if (plVar43 == plVar32) break;
              if (2 < (byte)LogStreaming._0_1_) {
                ::FName::ToString((FName *)(*(longlong *)(*plVar43 + 8) + 0x210),&local_d8);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                plVar32 = local_218;
                if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                  plVar32 = local_218;
                }
              }
              plVar43 = plVar43 + 1;
            }
            this = local_248;
            if (2 < (byte)LogStreaming._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              this = local_248;
            }
          }
          if (local_250 == (FAsyncLoadingSyncLoadContext *)0x0) {
            local_1f0 = local_236;
            for (SRWLock = (this->FailedPackageRequestsCritical).CriticalSection.Opaque3 + 2;
                SRWLock != (void **)&(this->AsyncPackageLookup).field_0xaf8; SRWLock = SRWLock + 0xb
                ) {
              if ((SRWLock == (void **)0x0) &&
                 (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Mutex",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                                      ,0x43,L""), bVar56)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
              `TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
              ::ForEach<`FAsyncLoadingThread2::FlushLoading'::__l218::<lambda_1>_>'::__l2::
              <lambda_1>::operator()
                        (&local_1f0,
                         (TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
                          *)(SRWLock + 1));
              if (SRWLock != (void **)0x0) {
                ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
              }
            }
          }
          else {
            FVar8 = (local_250->RequestedPackages).AllocatorInstance.SecondaryData;
            FVar44 = (ForElementType<FAsyncPackage2_*>)&local_250->RequestedPackages;
            iVar26 = (local_250->RequestedPackages).ArrayNum;
            pTVar15 = &local_250->RequestedPackages;
            if (FVar8 != (ForElementType<FAsyncPackage2_*>)0x0) {
              FVar44 = FVar8;
            }
            FVar8 = (ForElementType<FAsyncPackage2_*>)((longlong)FVar44 + (longlong)iVar26 * 8);
            while( true ) {
              if (pTVar15->ArrayNum != iVar26) {
                local_256[0] = 0;
                `TCheckedPointerIterator<FAsyncPackage2_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_256);
              }
              this = local_248;
              if (FVar44 == FVar8) break;
              if (*(FAsyncPackage2 **)FVar44 != (FAsyncPackage2 *)0x0) {
                FAsyncPackage2::DumpState(*(FAsyncPackage2 **)FVar44);
              }
              FVar44 = (ForElementType<FAsyncPackage2_*>)((longlong)FVar44 + 8);
            }
          }
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          cVar51 = local_265[0];
        }
      }
    }
    else {
      dVar10 = 0.0;
      this = local_248;
    }
    if (this->field_0x19 != '\0') {
      this_02 = FThreadHeartBeat::Get();
      FThreadHeartBeat::HeartBeat(this_02);
      if (cVar51 == '\0') {
        bVar56 = -1 < CpuChannel->Enabled;
        if (bVar56) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId11994,"MainThreadWaitingOnAsyncLoadingThread",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                     ,0x2eda);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11994);
        }
        FVar36 = UE::FMonotonicTimePoint::Now();
                    /* WARNING: Load size is inaccurate */
        UE::FManualResetEvent::WaitUntil
                  ((FManualResetEvent *)&(this->LoadedPackagesToProcess).ArrayNum,
                   (FMonotonicTimePoint)(*FVar36.Time + dVar18));
        LOCK();
        piVar3 = &(this->LoadedPackagesToProcess).ArrayNum;
        *(byte *)piVar3 = (byte)*piVar3 & 0xfe;
        UNLOCK();
        pFVar29 = (this->GameThreadState).Ptr;
        if ((pFVar29 != (FAsyncLoadingThreadState2 *)0x0) &&
           (pFVar29->bIsActive != (atomic<bool>)0x0)) {
          dVar10 = 0.0;
        }
        if (bVar56) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      bVar56 = IsRunningCookOnTheFly();
      if ((bVar56) &&
         (QueryPerformanceCounter(&local_1b8),
         dVar16 < ((double)local_1b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17) -
                  dVar11)) {
        this_03 = GetGlobalLogSingleton();
        FOutputDeviceRedirector::FlushThreadedLogs(this_03,Async);
        QueryPerformanceCounter(&local_1b0);
        dVar11 = (double)local_1b0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17;
      }
    }
    pTVar54 = local_230;
    iVar26 = *(int *)&(this->PackagesWithRemainingWorkCounter).WakeEvent;
  }
  if (local_250 != (FAsyncLoadingSyncLoadContext *)0x0) {
    lVar53 = *(longlong *)&(this->UnreachableObjects).ArrayNum;
    uVar40 = *(int *)(lVar53 + 0x28) - 1;
    uVar25 = 0;
    if ((int)uVar40 < *(int *)(lVar53 + 0x28)) {
      uVar25 = ~uVar40 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar56)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((*(FAsyncLoadingSyncLoadContext **)
          (*(longlong *)(lVar53 + 0x20) + -8 + (longlong)*(int *)(lVar53 + 0x28) * 8) != local_250)
       && (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                              ("GameThreadState->SyncLoadContextStack.Top() == SyncLoadContext",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x2ef7,L""), bVar56)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (6 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    LOCK();
    paVar2 = &local_250->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if ((int)aVar4 + -1 < 0) {
      bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewRefCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0xff2,L"");
      if (bVar56) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else if ((aVar4 == (atomic<int>)0x1) && (local_250 != (FAsyncLoadingSyncLoadContext *)0x0)) {
      FAsyncLoadingSyncLoadContext::_scalar_deleting_destructor_(local_250,1);
    }
    TArray<FAsyncLoadingSyncLoadContext_*,TSizedDefaultAllocator<32>_>::Pop
              ((TArray<FAsyncLoadingSyncLoadContext_*,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&(this->UnreachableObjects).ArrayNum + 0x20),Default);
    FZenaphore::NotifyOne((FZenaphore *)&this->ConditionalBeginPostLoadTick);
  }
  if (local_260 != (FAsyncPackage2 *)0x0) {
    lVar53 = *(longlong *)&(this->UnreachableObjects).ArrayNum;
    uVar40 = *(int *)(lVar53 + 0x38) - 1;
    uVar25 = 0;
    if ((int)uVar40 < *(int *)(lVar53 + 0x38)) {
      uVar25 = ~uVar40 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar56)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((*(FAsyncPackage2 **)
          (*(longlong *)(lVar53 + 0x30) + -8 + (longlong)*(int *)(lVar53 + 0x38) * 8) != local_260)
       && (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                              ("GameThreadState->PackagesOnStack.Top() == CurrentlyExecutingPackage"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x2f02,L""), bVar56)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar53 = *(longlong *)&(this->UnreachableObjects).ArrayNum;
    if ((*(int *)(lVar53 + 0x38) < 1) &&
       (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar56)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar25 = *(int *)(lVar53 + 0x38) - 1;
    _Dst = (void *)(*(longlong *)(lVar53 + 0x30) + (longlong)(int)uVar25 * 8);
    iVar26 = ~uVar25 + *(int *)(lVar53 + 0x38);
    if (iVar26 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar26 << 3);
    }
    *(int *)(lVar53 + 0x38) = *(int *)(lVar53 + 0x38) + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)(lVar53 + 0x30),*(int *)(lVar53 + 0x38),
               (int *)(lVar53 + 0x3c));
  }
  if ((((pTVar54->ArrayNum == 0) &&
       (*(int *)&(this->PackagesWithRemainingWorkCounter).WakeEvent != 0)) &&
      (bVar56 = ContainsAnyPendingRequests
                          ((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter), bVar56)) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("RequestIDs.Num() != 0 || !IsAsyncLoadingPackages() || !ContainsAnyPendingRequests()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x2f0b,L""), bVar56)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar20) {
    FThreadStats::AddMessage(FVar48,CycleScopeEnd);
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar46,CycleScopeEnd);
  }
  *(undefined4 *)(local_1a8 + 10) = local_228;
LAB_1423254d9:
  if (bVar55) {
    lVar53 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar53 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar37 = *(FWriteBuffer **)(lVar53 + 0x20);
    if ((int)pFVar37 - *(int *)&pFVar37->Cursor < 1) {
      pFVar37 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar37->Cursor = '\n';
    pFVar37->Cursor = pFVar37->Cursor + 1;
    pFVar37->Committed = pFVar37->Cursor;
  }
  FMemScope::~FMemScope(&local_1a0);
  FLLMScope::~FLLMScope(&local_224);
  return;
}

// FlushLoadingFromLoadingThread @ 142325660

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::FlushLoadingFromLoadingThread
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,
          TArrayView<int_const_,int> *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FAsyncLoadingThreadState2 *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<int> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FAsyncLoadingSyncLoadContext *this_00;
  FAsyncPackage2 *pFVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  FAsyncLoadingSyncLoadContext *local_58 [2];
  ForElementType<int> local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<int_const_,int> local_38;
  TArrayView<int_const_,int> local_28;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId11732,"FlushLoadingFromLoadingThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2dd4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11732);
  }
  if (param_2->ArrayNum == 0) {
LAB_142325a68:
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  this_00 = ::operator_new(0x70);
  local_58[0] = (FAsyncLoadingSyncLoadContext *)0x0;
  if (this_00 != (FAsyncLoadingSyncLoadContext *)0x0) {
    pFVar8 = FAsyncPackage2::GetCurrentlyExecutingPackage(param_1,(FAsyncPackage2 *)0x0);
    local_38.DataPtr = param_2->DataPtr;
    local_38.ArrayNum = param_2->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_58[0] = FAsyncLoadingSyncLoadContext::FAsyncLoadingSyncLoadContext
                            (this_00,&local_38,pFVar8);
  }
  if (6 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  pFVar2 = (this->AsyncLoadingThreadState).Ptr;
  pFVar3 = (pFVar2->SyncLoadContextStack).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_58) &&
      ((FScriptContainerElement *)local_58 <
       pFVar3 + (longlong)(pFVar2->SyncLoadContextStack).ArrayMax * 8)) &&
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
  iVar7 = (pFVar2->SyncLoadContextStack).ArrayNum;
  piVar1 = &(pFVar2->SyncLoadContextStack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar2->SyncLoadContextStack).AllocatorInstance,piVar1);
  }
  (pFVar2->SyncLoadContextStack).ArrayNum = iVar7 + 1;
  *(FAsyncLoadingSyncLoadContext **)
   ((pFVar2->SyncLoadContextStack).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_58[0];
  UpdateSyncLoadContext(this,param_1,false);
  lpCriticalSection = &this->PendingRequestsCritical;
  do {
    lVar11 = 0;
    while( true ) {
      FVar4 = (local_58[0]->RequestIDs).AllocatorInstance.SecondaryData;
      iVar7 = (local_58[0]->RequestIDs).ArrayNum;
      local_48 = (ForElementType<int>)&local_58[0]->RequestIDs;
      if (FVar4 != (ForElementType<int>)0x0) {
        local_48 = FVar4;
      }
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_28.DataPtr._0_4_ = local_48._0_4_;
      local_28.DataPtr._4_4_ = local_48._4_4_;
      local_28._12_4_ = uStack_3c;
      iStack_40 = iVar7;
      local_28.ArrayNum = iVar7;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      bVar6 = Algo::
              NoneOf<TArrayView<int_const_,int>,_FAsyncLoadingThread2::ContainsAnyRequestID_::__l2::<lambda_1>_>
                        (&local_28,(<lambda_1>)this);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (bVar6) {
        pFVar2 = (this->AsyncLoadingThreadState).Ptr;
        iVar7 = (pFVar2->SyncLoadContextStack).ArrayNum;
        uVar10 = iVar7 - 1;
        uVar9 = 0;
        if ((int)uVar10 < iVar7) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(FAsyncLoadingSyncLoadContext **)
              ((pFVar2->SyncLoadContextStack).AllocatorInstance.Data +
              (longlong)(pFVar2->SyncLoadContextStack).ArrayNum * 8 + -8) != local_58[0]) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AsyncLoadingThreadState->SyncLoadContextStack.Top() == SyncLoadContext"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x2df2,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (6 < (byte)LogStreaming._0_1_) {
          iVar7 = (((this->AsyncLoadingThreadState).Ptr)->SyncLoadContextStack).ArrayNum;
          uVar10 = iVar7 - 1;
          uVar9 = 0;
          if ((int)uVar10 < iVar7) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        }
        pFVar2 = (this->AsyncLoadingThreadState).Ptr;
        if (((pFVar2->SyncLoadContextStack).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (pFVar2->SyncLoadContextStack).ArrayNum;
        uVar9 = iVar7 - 1;
        pFVar3 = (pFVar2->SyncLoadContextStack).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
        iVar7 = ~uVar9 + iVar7;
        if (iVar7 != 0) {
          memmove(pFVar3,pFVar3 + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(pFVar2->SyncLoadContextStack).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(pFVar2->SyncLoadContextStack).AllocatorInstance,
                   (pFVar2->SyncLoadContextStack).ArrayNum,&(pFVar2->SyncLoadContextStack).ArrayMax)
        ;
        if (local_58[0] != (FAsyncLoadingSyncLoadContext *)0x0) {
          FAsyncLoadingSyncLoadContext::_scalar_deleting_destructor_(local_58[0],1);
        }
        goto LAB_142325a68;
      }
      bVar6 = FAsyncLoadEventQueue2::ExecuteSyncLoadEvents(&this->EventQueue,param_1);
      if (bVar6) break;
      lVar12 = lVar11 + 1;
      bVar6 = lVar11 == 100;
      lVar11 = lVar12;
      if (bVar6) {
        WarnAboutPotentialSyncLoadStall(this,local_58[0]);
      }
    }
  } while( true );
}

// FlushLoadingFromParallelLoadingThread @ 142325ab0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::FlushLoadingFromParallelLoadingThread
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,
          TArrayView<int_const_,int> *param_2)

{
  TArray<FAsyncLoadingSyncLoadContext_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory> *pTVar3;
  int *piVar4;
  atomic<int> *paVar5;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar6;
  atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> aVar7;
  FScriptContainerElement *pFVar8;
  FAsyncLoadingThreadState2 *pFVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  FAsyncLoadingSyncLoadContext *this_00;
  FAsyncPackage2 *pFVar13;
  atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> aVar14;
  TArrayView<int_const_,int> *pTVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  FAsyncLoadingSyncLoadContext *local_58 [2];
  TArrayView<int_const_,int> local_48;
  TArrayView<int_const_,int> local_38;
  TArrayView<int_const_,int> local_28;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId11703,"FlushLoadingFromParallelLoadingThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2db7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11703);
  }
  if (param_2->ArrayNum != 0) {
    this_00 = ::operator_new(0x70);
    local_58[0] = (FAsyncLoadingSyncLoadContext *)0x0;
    if (this_00 != (FAsyncLoadingSyncLoadContext *)0x0) {
      pFVar13 = FAsyncPackage2::GetCurrentlyExecutingPackage(param_1,(FAsyncPackage2 *)0x0);
      local_48.DataPtr = param_2->DataPtr;
      local_48.ArrayNum = param_2->ArrayNum;
      local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_58[0] = FAsyncLoadingSyncLoadContext::FAsyncLoadingSyncLoadContext
                              (this_00,&local_48,pFVar13);
    }
    if (6 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    pFVar8 = (param_1->SyncLoadContextStack).AllocatorInstance.Data;
    pTVar1 = &param_1->SyncLoadContextStack;
    if (((pFVar8 <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 <
         pFVar8 + (longlong)(param_1->SyncLoadContextStack).ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar12 = (param_1->SyncLoadContextStack).ArrayNum;
    piVar2 = &(param_1->SyncLoadContextStack).ArrayMax;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (param_1->SyncLoadContextStack).ArrayNum = iVar12 + 1;
    *(FAsyncLoadingSyncLoadContext **)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) =
         local_58[0];
    LOCK();
    local_58[0]->RefCount = (atomic<int>)((int)local_58[0]->RefCount + 1);
    UNLOCK();
    pFVar9 = (this->AsyncLoadingThreadState).Ptr;
    aVar14 = (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)
             FMemory::Malloc(0x10,8);
    *(undefined8 *)aVar14 = 0;
    *(FAsyncLoadingSyncLoadContext **)((longlong)aVar14 + 8) = local_58[0];
    LOCK();
    pTVar3 = &pFVar9->SyncLoadContextsCreatedOnOtherThreads;
    aVar7 = pTVar3->Head;
    pTVar3->Head = aVar14;
    UNLOCK();
    *(atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> *)aVar7 = aVar14;
    FZenaphore::NotifyOne(&this->AltZenaphore);
    FCpuProfilerTrace::FlushThreadBuffer();
    UE::FManualResetEvent::WaitUntil(&local_58[0]->DoneEvent,__real_7ff0000000000000);
    pTVar15 = TArrayView<int_const_,int>::
              TArrayView<int_const_,int><TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_28,&local_58[0]->RequestIDs);
    lpCriticalSection = &this->PendingRequestsCritical;
    local_38.DataPtr._0_4_ = *(undefined4 *)&pTVar15->DataPtr;
    local_38.DataPtr._4_4_ = *(undefined4 *)((longlong)&pTVar15->DataPtr + 4);
    local_38.ArrayNum = pTVar15->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar11 = Algo::
             NoneOf<TArrayView<int_const_,int>,_FAsyncLoadingThread2::ContainsAnyRequestID_::__l2::<lambda_1>_>
                       (&local_38,(<lambda_1>)this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((!bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ContainsAnyRequestID(SyncLoadContext->RequestIDs)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x2dc9,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar12 = (param_1->SyncLoadContextStack).ArrayNum;
    uVar17 = iVar12 - 1;
    uVar16 = 0;
    if ((int)uVar17 < iVar12) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((*(FAsyncLoadingSyncLoadContext **)
          ((pTVar1->AllocatorInstance).Data +
          (longlong)(param_1->SyncLoadContextStack).ArrayNum * 8 + -8) != local_58[0]) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ThreadState.SyncLoadContextStack.Top() == SyncLoadContext",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x2dcb,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (6 < (byte)LogStreaming._0_1_) {
      iVar12 = (param_1->SyncLoadContextStack).ArrayNum;
      uVar17 = iVar12 - 1;
      uVar16 = 0;
      if ((int)uVar17 < iVar12) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    if (((param_1->SyncLoadContextStack).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar12 = (param_1->SyncLoadContextStack).ArrayNum;
    uVar16 = iVar12 - 1;
    pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar16 * 8;
    iVar12 = ~uVar16 + iVar12;
    if (iVar12 != 0) {
      memmove(pFVar8,pFVar8 + 8,(longlong)iVar12 << 3);
    }
    piVar4 = &(param_1->SyncLoadContextStack).ArrayNum;
    *piVar4 = *piVar4 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar1->AllocatorInstance,(param_1->SyncLoadContextStack).ArrayNum,piVar2);
    LOCK();
    paVar5 = &local_58[0]->RefCount;
    aVar6 = *paVar5;
    *paVar5 = (atomic<int>)((int)*paVar5 + -1);
    UNLOCK();
    if ((int)aVar6 + -1 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewRefCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0xff2,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else if ((aVar6 == (atomic<int>)0x1) && (local_58[0] != (FAsyncLoadingSyncLoadContext *)0x0)) {
      FAsyncLoadingSyncLoadContext::_scalar_deleting_destructor_(local_58[0],1);
    }
    FZenaphore::NotifyOne(&this->AltZenaphore);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetAsyncLoadPercentage @ 1423267f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

float __thiscall
FAsyncLoadingThread2::GetAsyncLoadPercentage(FAsyncLoadingThread2 *this,FName *param_1)

{
  return __real_bf800000;
}

// GetLoaderType @ 142326c50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

ELoaderType __thiscall FAsyncLoadingThread2::GetLoaderType(FAsyncLoadingThread2 *this)

{
  return ZenLoader;
}

// GetNumAsyncPackages @ 142326fc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall FAsyncLoadingThread2::GetNumAsyncPackages(FAsyncLoadingThread2 *this)

{
  return *(int *)&(this->RequestIdToPackageMap).field_0x4c;
}

// GetNumQueuedPackages @ 142326fd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall FAsyncLoadingThread2::GetNumQueuedPackages(FAsyncLoadingThread2 *this)

{
  return *(int *)&(this->RequestIdToPackageMap).field_0x48;
}

// IncludePackageInSyncLoadContextRecursive @ 1423297d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::IncludePackageInSyncLoadContextRecursive
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,ulong64 param_2,
          FAsyncPackage2 *param_3)

{
  FScriptContainerElement *pFVar1;
  FAsyncPackage2 **ppFVar2;
  FAsyncPackage2 *pFVar3;
  int iVar4;
  FName this_00;
  ForElementType<FSetElementId> FVar5;
  FScriptContainerElement *pFVar6;
  FAsyncPackage2 **ppFVar7;
  FAsyncLoadingPostLoadGroup *pFVar8;
  undefined1 local_res18 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (((ulonglong)param_3->SyncLoadContextId < param_2) &&
     ((byte)param_3->AsyncPackageLoadingState < 0x13)) {
    if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_14232989e:
      if (6 < (byte)LogStreaming._0_1_) {
        ::LexToString(&local_38,&(param_3->Desc).PackageIdToLoad);
        this_00 = FPackagePath::GetPackageFName(&(param_3->Desc).PackagePathToLoad);
        ::FName::ToString((FName *)this_00,&local_48);
        ::LexToString(&local_58,&(param_3->Desc).UPackageId);
        ::FName::ToString(&(param_3->Desc).UPackageName,&local_68);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
            (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
             GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
      FVar5 = (ForElementType<FSetElementId>)0x154ba3ce8;
      if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
      {
        FVar5 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)
                      (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                      (uint)(param_3->Desc).UPackageId.Id) * 4);
      if (iVar4 != -1) {
        do {
          if (*(ulong64 *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar4 * 0x10)
              == (param_3->Desc).UPackageId.Id) goto LAB_14232989e;
          iVar4 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                          (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    LOCK();
    param_3->SyncLoadContextId = (atomic<unsigned___int64>)param_2;
    UNLOCK();
    if ((param_3->Desc).Priority < 0x7fffffff) {
      (param_3->Desc).Priority = 0x7fffffff;
      UpdatePackagePriority(this,param_1,param_3);
    }
    pFVar8 = param_3->PostLoadGroup;
    if (((pFVar8 != (FAsyncLoadingPostLoadGroup *)0x0) ||
        (pFVar8 = param_3->DeferredPostLoadGroup, pFVar8 != (FAsyncLoadingPostLoadGroup *)0x0)) &&
       (pFVar8->SyncLoadContextId < param_2)) {
      pFVar8->SyncLoadContextId = param_2;
      pFVar6 = (pFVar8->Packages).AllocatorInstance.Data;
      iVar4 = (pFVar8->Packages).ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar4 * 8;
      while( true ) {
        if ((pFVar8->Packages).ArrayNum != iVar4) {
          `TCheckedPointerIterator<FAsyncPackage2_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar6 == pFVar1) break;
        if ((ulonglong)(*(FAsyncPackage2 **)pFVar6)->SyncLoadContextId < param_2) {
          IncludePackageInSyncLoadContextRecursive(this,param_1,param_2,*(FAsyncPackage2 **)pFVar6);
        }
        pFVar6 = pFVar6 + 8;
      }
    }
    if (((param_3->LinkerLoadState).bIsSet == false) ||
       (2 < (byte)param_3->AsyncPackageLoadingState)) {
      ppFVar7 = (param_3->Data).ImportedAsyncPackages.DataPtr;
      ppFVar2 = ppFVar7 + (param_3->Data).ImportedAsyncPackages.ArrayNum;
      for (; ppFVar7 != ppFVar2; ppFVar7 = ppFVar7 + 1) {
        pFVar3 = *ppFVar7;
        if ((pFVar3 != (FAsyncPackage2 *)0x0) && ((ulonglong)pFVar3->SyncLoadContextId < param_2)) {
          IncludePackageInSyncLoadContextRecursive(this,param_1,param_2,pFVar3);
        }
      }
    }
  }
  return;
}

// Init @ 142329ac0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAsyncLoadingThread2::Init(FAsyncLoadingThread2 *this)

{
  return true;
}

// InitializeAsyncPackageFromPackageStore @ 14232a120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::InitializeAsyncPackageFromPackageStore
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,FIoBatch *param_2,
          FAsyncPackage2 *param_3,FPackageStoreEntry *param_4)

{
  FEventLoadNode2 *pFVar1;
  size_t _Size;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  FPackageStoreEntry *pFVar6;
  FIoBatch *pFVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  TEventRef<unsigned_int> TVar11;
  FWriteBuffer *pFVar12;
  ForElementType<FSetElementId> FVar13;
  longlong lVar14;
  ulonglong uVar15;
  FAsyncPackage2 **_Dst;
  FPackageId *pFVar16;
  bool bVar17;
  undefined1 auStack_e8 [40];
  FEventLoadNode2 *local_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  FAsyncLoadingThread2 *local_a8;
  size_t local_a0;
  FPackageStoreEntry *local_98;
  uchar *local_90;
  FIoBatch *local_88;
  FAsyncLoadingThreadState2 *local_80;
  FName local_78;
  ulong64 *local_70;
  longlong local_68;
  ulong64 *local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_a8 = this;
  local_88 = param_2;
  local_80 = param_1;
  local_98 = param_4;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_FAsyncLoadingThread2::InitializeAsyncPackageFromPackageStore(FAsyncLoadingThreadState2&___ptr64,FIoBatch*___ptr64,FAsyncPackage2*___ptr64,FPackageStoreEntry_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId4842,"InitializeAsyncPackageFromPackageStore",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x12ea);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_FAsyncLoadingThread2::InitializeAsyncPackageFromPackageStore(FAsyncLoadingThreadState2&___ptr64,FIoBatch*___ptr64,FAsyncPackage2*___ptr64,FPackageStoreEntry_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId4842);
  }
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar13 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar13 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar10 = *(int *)((longlong)FVar13 +
                     (ulonglong)
                     (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                     (uint)(param_3->Desc).UPackageId.Id) * 4);
    if (iVar10 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar10 * 0x10) ==
            (param_3->Desc).UPackageId.Id) {
          bVar8 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        iVar10 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 +
                         (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
    }
  }
  bVar8 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataPackageIdFields>((TLogScope<0> *)&local_70);
    bVar8 = true;
    *local_70 = (param_3->Desc).UPackageId.Id;
    *(undefined8 *)(local_68 + 0x28) = *(undefined8 *)(local_68 + 0x20);
  }
  if ((param_3->Desc).UPackageName != (FName)0x0) {
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_b0 = 0;
      TVar11 = (TEventRef<unsigned_int>)&local_b0;
    }
    else {
      TVar11 = FStringTrace::GetNameRef(&local_78);
    }
    uVar3 = *(undefined8 *)TVar11;
    if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FPackagePackageMappingFields>((TLogScope<0> *)&local_60);
      *local_60 = (param_3->Desc).UPackageId.Id;
      *(int *)(local_60 + 1) = (int)uVar3;
      *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_58 + 0x20);
    }
  }
  iVar10 = (param_4->ShaderMapHashes).ArrayNum;
  iVar2 = (param_4->ImportedPackageIds).ArrayNum;
  lVar14 = (longlong)iVar2;
  local_a0 = (longlong)iVar10 * 0x14;
  _Size = lVar14 * 8;
  uVar15 = local_a0 + 7 & 0xfffffffffffffff8;
  local_90 = (uchar *)(lVar14 * 0x10 + 0xc0 + uVar15);
  local_c0 = FMemory::Malloc((ulong64)local_90,0);
  (param_3->Data).MemoryBuffer0 = (uchar *)local_c0;
  (param_3->Data).TotalExportBundleCount = 1;
  pFVar1 = local_c0 + 3;
  iStack_b8 = 3;
  (param_3->Data).ExportBundleNodes.DataPtr = local_c0;
  *(ulonglong *)&(param_3->Data).ExportBundleNodes.ArrayNum = CONCAT44(uStack_b4,3);
  FAsyncPackage2::CreateExportBundleNodes
            (param_3,(FAsyncLoadEventSpec *)(local_a8->EventSpecs).AllocatorInstance.Data);
  local_c0 = pFVar1;
  iStack_b8 = iVar10;
  if ((iVar10 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = local_98;
  (param_3->Data).ShaderMapHashes.DataPtr = (FSHAHash *)local_c0;
  *(ulonglong *)&(param_3->Data).ShaderMapHashes.ArrayNum = CONCAT44(uStack_b4,iStack_b8);
  memcpy((param_3->Data).ShaderMapHashes.DataPtr,(local_98->ShaderMapHashes).DataPtr,local_a0);
  _Dst = (FAsyncPackage2 **)((longlong)&pFVar1->Spec + uVar15);
  local_c0 = (FEventLoadNode2 *)_Dst;
  iStack_b8 = iVar2;
  if ((iVar2 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (param_3->Data).ImportedAsyncPackages.DataPtr = (FAsyncPackage2 **)local_c0;
  *(ulonglong *)&(param_3->Data).ImportedAsyncPackages.ArrayNum = CONCAT44(uStack_b4,iStack_b8);
  memset(_Dst,0,_Size);
  pFVar16 = (FPackageId *)(_Dst + lVar14);
  local_c0 = (FEventLoadNode2 *)pFVar16;
  iStack_b8 = iVar2;
  if ((iVar2 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (param_3->HeaderData).ImportedPackageIds.DataPtr = (FPackageId *)local_c0;
  *(ulonglong *)&(param_3->HeaderData).ImportedPackageIds.ArrayNum = CONCAT44(uStack_b4,iStack_b8);
  memcpy((param_3->HeaderData).ImportedPackageIds.DataPtr,(pFVar6->ImportedPackageIds).DataPtr,_Size
        );
  iVar10 = (param_3->Data).ImportedAsyncPackages.ArrayNum;
  uVar5 = *(undefined4 *)&(param_3->Data).ImportedAsyncPackages.field_0xc;
  (param_3->HeaderData).ImportedAsyncPackagesView.DataPtr =
       (param_3->Data).ImportedAsyncPackages.DataPtr;
  (param_3->HeaderData).ImportedAsyncPackagesView.ArrayNum = iVar10;
  *(undefined4 *)&(param_3->HeaderData).ImportedAsyncPackagesView.field_0xc = uVar5;
  if (((uchar *)((_Size - (longlong)(param_3->Data).MemoryBuffer0) + (longlong)pFVar16) != local_90)
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("DataPtr - Data.MemoryBuffer0 == MemoryBufferSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x133a,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = local_88;
  if ((param_3->LinkerLoadState).bIsSet == false) {
    if ((local_88 == (FIoBatch *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IoBatch",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x1346,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FAsyncPackage2::ImportPackagesRecursive(param_3,local_80,pFVar7,local_a8->PackageStore);
  }
  if (bVar8) {
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar14 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar12 = *(FWriteBuffer **)(lVar14 + 0x20);
    if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
      pFVar12 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar12->Cursor = '\n';
    pFVar12->Cursor = pFVar12->Cursor + 1;
    pFVar12->Committed = pFVar12->Cursor;
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitializeLoading @ 14232a890

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncLoadingThread2::InitializeLoading(FAsyncLoadingThread2 *this)

{
  atomic<int> *paVar1;
  wchar_t *pwVar2;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar3;
  FPendingEntriesAddedEvent *this_01;
  <lambda_1> local_res10;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pwVar2 = FCommandLine::Get();
  FParse::Value(pwVar2,L"-s.DebugPackageNames=",&local_28,true,(wchar_t **)0x0);
  ParsePackageNames(&local_28,&GAsyncLoading2_DebugPackageIds);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pwVar2 = FCommandLine::Get();
  FParse::Value(pwVar2,L"-s.VerbosePackageNames=",&local_18,true,(wchar_t **)0x0);
  ParsePackageNames(&local_18,&GAsyncLoading2_VerbosePackageIds);
  ParsePackageNames(&local_28,&GAsyncLoading2_VerbosePackageIds);
  GAsyncLoading2_VerboseLogFilter =
       ((int)(GAsyncLoading2_VerbosePackageIds.Elements._8_4_ -
             GAsyncLoading2_VerbosePackageIds.Elements._52_4_) < 1) + 1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this_00 = FPlatformFileManager::Get();
  pIVar3 = FPlatformFileManager::FindPlatformFile(this_00,L"FileOpenLog");
  *(IPlatformFile **)&this->bHasRegisteredAllScriptObjects = pIVar3;
  this_01 = FPackageStore::OnPendingEntriesAdded((FPackageStore *)this->IoDispatcher);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FAsyncLoadingThread2::InitializeLoading_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_01,&local_res10);
  LOCK();
  paVar1 = &(this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (4 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  return;
}

// IsAsyncLoadingPackages @ 14232a9e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAsyncLoadingThread2::IsAsyncLoadingPackages(FAsyncLoadingThread2 *this)

{
  return *(int *)&(this->PackagesWithRemainingWorkCounter).WakeEvent != 0;
}

// IsAsyncLoadingSuspended @ 14232aa00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAsyncLoadingThread2::IsAsyncLoadingSuspended(FAsyncLoadingThread2 *this)

{
  return 0 < *(int *)((longlong)&this->Thread + 4);
}

// IsInAsyncLoadThread @ 14232aed0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAsyncLoadingThread2::IsInAsyncLoadThread(FAsyncLoadingThread2 *this)

{
  bool bVar1;
  DWORD DVar2;
  
  if (this->field_0x19 == '\0') {
    bVar1 = IsInGameThread();
    if ((bVar1) && ((this->EventSpecs).ArrayNum != 0)) {
      return true;
    }
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (DVar2 == (this->PackagesToCancel).HashSize) {
      return true;
    }
    bVar1 = IsInGameThread();
    if (bVar1) {
      return (this->EventSpecs).ArrayNum != 0;
    }
  }
  return false;
}

// IsMultithreaded @ 14232af40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAsyncLoadingThread2::IsMultithreaded(FAsyncLoadingThread2 *this)

{
  return (bool)this->field_0x19;
}

// LoadPackage @ 14232b760

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
FAsyncLoadingThread2::LoadPackage
          (FAsyncLoadingThread2 *this,FPackagePath *param_1,FLoadPackageAsyncOptionalParams *param_2
          )

{
  uint uVar1;
  int iVar2;
  EPackageFlags EVar3;
  FLinkerInstancingContext *pFVar4;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  int iVar5;
  TSharedPtr<FLoadPackageAsyncProgressDelegate,1> local_18;
  
  uVar1 = param_2->LoadFlags;
  local_18.Object = (param_2->ProgressDelegate).Object;
  pFVar4 = param_2->InstancingContext;
  iVar5 = param_2->PackagePriority;
  iVar2 = param_2->PIEInstanceID;
  EVar3 = param_2->PackageFlags;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->ProgressDelegate).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar5 = LoadPackageInternal((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,param_1,
                              param_2->CustomPackageName,&param_2->CompletionDelegate,&local_18,
                              EVar3,iVar2,iVar5,pFVar4,uVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ProgressDelegate).SharedReferenceCount.ReferenceController);
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(param_2->CompletionDelegate).Ptr;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this_00);
    ::operator_delete(this_00,0x18);
  }
  return iVar5;
}

// LoadPackage @ 14232b820

/* WARNING: Removing unreachable block (ram,0x00014232b8ed) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
FAsyncLoadingThread2::LoadPackage
          (FAsyncLoadingThread2 *this,FPackagePath *param_1,FName param_2,
          TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
          *param_3,EPackageFlags param_4,int param_5,int param_6,FLinkerInstancingContext *param_7,
          uint param_8)

{
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  TVar1;
  char cVar2;
  int iVar3;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  local_res8;
  FReadAccessScope local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_48);
  if (((*(int *)&param_3->field_0x10 == 0) || (*(longlong **)&param_3->field_0x8 == (longlong *)0x0)
      ) || (cVar2 = (**(code **)(**(longlong **)&param_3->field_0x8 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    local_res8.Ptr =
         (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
          *)0x0;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    local_res8.Ptr = ::operator_new(0x18);
    if (local_res8.Ptr ==
        (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
         *)0x0) {
      local_res8.Ptr =
           (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
            *)0x0;
    }
    else {
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_res8.Ptr,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    }
  }
  local_48.DestructionSentinel._0_8_ = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_48.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  iVar3 = LoadPackageInternal((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,param_1,
                              param_2,&local_res8,
                              (TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *)&local_48,param_4,
                              param_5,param_6,param_7,param_8);
  TVar1.Ptr = local_res8.Ptr;
  if (local_res8.Ptr !=
      (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
       *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_res8.Ptr);
    ::operator_delete(TVar1.Ptr,0x18);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return iVar3;
}

// LoadPackageInternal @ 14232b9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
FAsyncLoadingThread2::LoadPackageInternal
          (FAsyncLoadingThread2 *this,FPackagePath *param_1,FName param_2,
          TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
          *param_3,TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *param_4,EPackageFlags param_5,
          int param_6,int param_7,FLinkerInstancingContext *param_8,uint param_9)

{
  wchar_t *pwVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar2;
  atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*> aVar3;
  wchar_t wVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  *pTVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  FAsyncLoadingThread2 *pFVar11;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar12;
  FSharedReferencer<1> FVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  char cVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  TMulticastDelegate<void___cdecl(TStringView<wchar_t>),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection_00;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FString *pFVar21;
  FLinkerInstancingContext *pFVar22;
  atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*> aVar23;
  ulong64 uVar24;
  FWriteBuffer *pFVar25;
  atomic<__int64> aVar26;
  uint uVar27;
  longlong *plVar28;
  FName FVar29;
  longlong *plVar30;
  longlong lVar31;
  bool bVar32;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  longlong local_3a0;
  char local_398;
  undefined1 local_397 [7];
  int local_390 [4];
  FName local_380;
  FName local_378;
  ulonglong local_370;
  FAsyncLoadingThread2 *local_368;
  TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *local_360;
  int local_358;
  int local_354;
  EPackageFlags local_350;
  FSharedLinkerInstancingContextData *local_348;
  TReferenceControllerBase<1> *local_340;
  FName local_338;
  FPackagePath local_330;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_320;
  FLoadPackageAsyncProgressDelegate *local_318;
  TReferenceControllerBase<1> *local_310;
  undefined8 local_308;
  int local_2f8 [2];
  FName local_2f0;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  *local_2e8;
  FPackagePath *local_2e0;
  FLinkerInstancingContext local_2d8;
  FScriptContainerElement *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  FScriptContainerElement *local_2b8;
  undefined8 uStack_2b0;
  FString local_2a8;
  FLinkerInstancingContext local_298;
  TLogScope<1> local_288;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_3c8;
  FVar29.ComparisonIndex.Value = 0;
  FVar29.Number = 0;
  local_360 = param_4;
  bVar32 = -1 < CpuChannel->Enabled;
  local_368 = this;
  local_2e8 = param_3;
  local_2e0 = param_1;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId11543,"LoadPackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2d17);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11543);
  }
  FPackagePath::GetPackageFName(param_1);
  if (param_2 == local_380) {
    param_2 = FVar29;
  }
  local_370 = 1;
  bVar10 = false;
  local_378 = param_2;
  if (-1 < LoadTimeChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuLoadAsyncPackageInternalFields>
              (&local_288);
    local_278.Base = local_258;
    local_278.bIsDynamic = false;
    local_278.bIsExternal = false;
    local_278.CurPos = local_258;
    local_278.End = (wchar_t *)local_58;
    ::FName::AppendString(&local_380,&local_278);
    if (local_278.End < local_278.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_278,1);
    }
    *local_278.CurPos = L'\0';
    wVar4 = *local_278.Base;
    uVar27 = 0;
    pwVar1 = local_278.Base;
    while (wVar4 != L'\0') {
      pwVar1 = pwVar1 + 1;
      FVar29.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value + 1;
      FVar29.Number = 0;
      uVar27 = FVar29.ComparisonIndex.Value;
      wVar4 = *pwVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(0,local_278.Base,uVar27);
    lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar31 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar31 = *(longlong *)(lVar31 + 0x20);
    **(undefined1 **)(lVar31 + 0x20) = 6;
    lVar20 = *(longlong *)(lVar31 + 0x20) + 1;
    *(longlong *)(lVar31 + 0x20) = lVar20;
    if (lVar31 != local_288._8_8_) {
      *(longlong *)(lVar31 + 0x28) = lVar20;
    }
    *(undefined8 *)(local_288._8_8_ + 0x28) = *(undefined8 *)(local_288._8_8_ + 0x20);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
    bVar10 = true;
  }
  lpCriticalSection_00 = FCoreDelegates::GetOnAsyncLoadPackage();
  if ((lpCriticalSection_00 ==
       (TMulticastDelegate<void___cdecl(TStringView<wchar_t>),FDefaultTSDelegateUserPolicy> *)0x0)
     && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    iVar18 = (*pcVar8)();
    return iVar18;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  iVar18 = *(int *)&lpCriticalSection_00->field_0x30;
  plVar28 = *(longlong **)&lpCriticalSection_00->field_0x28;
  plVar30 = plVar28 + (longlong)iVar18 * 2;
  while( true ) {
    if (*(int *)&lpCriticalSection_00->field_0x30 != iVar18) {
      local_397[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_397);
    }
    if (plVar28 == plVar30) {
      if (lpCriticalSection_00 !=
          (TMulticastDelegate<void___cdecl(TStringView<wchar_t>),FDefaultTSDelegateUserPolicy> *)0x0
         ) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      }
      goto LAB_14232bd80;
    }
    if (((int)plVar28[1] != 0) && (*plVar28 != 0)) break;
    plVar28 = plVar28 + 2;
  }
  if (lpCriticalSection_00 !=
      (TMulticastDelegate<void___cdecl(TStringView<wchar_t>),FDefaultTSDelegateUserPolicy> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  local_2f0 = param_2;
  if (param_2 == (FName)0x0) {
    local_2f0 = local_380;
  }
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::GetOnAsyncLoadPackage();
  pFVar21 = ::FName::ToString(&local_2f0,&local_2a8);
  local_2c8 = (pFVar21->Data).AllocatorInstance.Data;
  iVar18 = (pFVar21->Data).ArrayNum;
  iStack_2c0 = iVar18 + -1;
  if (iVar18 == 0) {
    iStack_2c0 = 0;
  }
  if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    iVar18 = (*pcVar8)();
    return iVar18;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  pFVar14 = local_2c8;
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  uVar27 = (this_00->InvocationList).ArrayNum - 1;
  local_398 = '\0';
  if (-1 < (int)uVar27) {
    lVar20 = (longlong)(int)uVar27;
    uVar9 = CONCAT44(uStack_2bc,iStack_2c0);
    lVar31 = lVar20 << 4;
    do {
      iVar18 = (this_00->InvocationList).ArrayNum;
      uVar19 = 0;
      if ((int)uVar27 < iVar18) {
        uVar19 = ~uVar27 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (local_3a8 = lVar20, local_3a0 = (longlong)iVar18,
         bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        iVar18 = (*pcVar8)();
        return iVar18;
      }
      pFVar5 = (this_00->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar5 + lVar31 + 8) == 0) ||
         (plVar28 = *(longlong **)(pFVar5 + lVar31), plVar28 == (longlong *)0x0)) {
LAB_14232bd1d:
        local_398 = '\x01';
      }
      else {
        local_2b8 = pFVar14;
        uStack_2b0 = uVar9;
        cVar16 = (**(code **)(*plVar28 + 0x68))();
        if (cVar16 == '\0') goto LAB_14232bd1d;
      }
      lVar20 = lVar20 + -1;
      lVar31 = lVar31 + -0x10;
      uVar27 = uVar27 - 1;
      param_2 = local_378;
    } while (-1 < (int)uVar27);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (local_398 != '\0') {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
LAB_14232bd80:
  iVar18 = IAsyncPackageLoader::GetNextRequestId();
  FLoadTimeProfilerTracePrivate::OutputBeginRequest((longlong)iVar18);
  pFVar11 = local_368;
  lpCriticalSection = &local_368->PendingRequestsCritical;
  local_390[0] = iVar18;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&pFVar11->PendingRequests,local_2f8,(bool *)local_390);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_378 = (FName)local_360->Object;
    pTVar6 = (local_360->SharedReferenceCount).ReferenceController;
    (local_360->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_360->Object = (FLoadPackageAsyncProgressDelegate *)0x0;
    pTVar7 = local_2e8->Ptr;
    local_2e8->Ptr =
         (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
          *)0x0;
    local_354 = param_7;
    local_350 = param_5;
    local_358 = iVar18;
    if (param_8 == (FLinkerInstancingContext *)0x0) {
      pFVar22 = FLinkerInstancingContext::FLinkerInstancingContext(&local_298);
      local_370 = local_370 & 0xffffffff00000000;
      local_390[0] = 2;
      local_348 = (pFVar22->SharedData).Object;
    }
    else {
      local_348 = (param_8->SharedData).Object;
      local_2d8.SharedData.SharedReferenceCount.ReferenceController =
           (param_8->SharedData).SharedReferenceCount.ReferenceController;
      if (local_2d8.SharedData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_2d8.SharedData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2d8.SharedData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar22 = &local_2d8;
      local_390[0] = 0;
      local_2d8.SharedData.Object = local_348;
    }
    FVar13.ReferenceController = local_2d8.SharedData.SharedReferenceCount.ReferenceController;
    local_340 = (pFVar22->SharedData).SharedReferenceCount.ReferenceController;
    if (local_340 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_340->SharedReferenceCount = (atomic<int>)((int)local_340->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_338 = param_2;
    FPackagePath::FPackagePath(&local_330,local_2e0);
    local_318 = (FLoadPackageAsyncProgressDelegate *)local_378;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_308 = 0;
    local_320 = (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar7;
    local_310 = pTVar6;
    if (local_390[0] != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_298.SharedData.SharedReferenceCount.ReferenceController);
    }
    if ((int)local_370 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar13.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    aVar23 = (atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*>)FMemory::Malloc(0x68,8);
    pFVar11 = local_368;
    *(undefined8 *)aVar23 = 0;
    *(int *)((longlong)aVar23 + 8) = local_358;
    *(int *)((longlong)aVar23 + 0xc) = local_354;
    *(EPackageFlags *)((longlong)aVar23 + 0x10) = local_350;
    *(FSharedLinkerInstancingContextData **)((longlong)aVar23 + 0x18) = local_348;
    *(TReferenceControllerBase<1> **)((longlong)aVar23 + 0x20) = local_340;
    local_340 = (TReferenceControllerBase<1> *)0x0;
    local_348 = (FSharedLinkerInstancingContextData *)0x0;
    *(FName *)((longlong)aVar23 + 0x28) = local_338;
    *(FName *)((longlong)aVar23 + 0x30) = local_330.PackageName;
    *(undefined4 *)((longlong)aVar23 + 0x38) = local_330._8_4_;
    *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)aVar23 + 0x40) = local_320;
    local_320 = (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0;
    *(FLoadPackageAsyncProgressDelegate **)((longlong)aVar23 + 0x48) = local_318;
    *(TReferenceControllerBase<1> **)((longlong)aVar23 + 0x50) = local_310;
    local_310 = (TReferenceControllerBase<1> *)0x0;
    local_318 = (FLoadPackageAsyncProgressDelegate *)0x0;
    *(undefined8 *)((longlong)aVar23 + 0x58) = local_308;
    LOCK();
    aVar3 = (local_368->PackageRequestQueue).Head;
    (local_368->PackageRequestQueue).Head = aVar23;
    UNLOCK();
    *(atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*> *)aVar3 = aVar23;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar12 = local_320;
    if (local_320 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (local_320);
      ::operator_delete(pTVar12,0x18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_340);
    LOCK();
    pFVar11->QueuedPackagesCounter = (atomic<int>)((int)pFVar11->QueuedPackagesCounter + 1);
    UNLOCK();
    LOCK();
    paVar2 = &(pFVar11->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter;
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
    aVar26 = (atomic<__int64>)(longlong)(int)pFVar11->QueuedPackagesCounter;
    if (__GTraceCounterAsyncLoadingQueuedPackages.Value != aVar26) {
      LOCK();
      UNLOCK();
      __GTraceCounterAsyncLoadingQueuedPackages.Value = aVar26;
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterAsyncLoadingQueuedPackages.CounterId == (atomic<unsigned_int>)0x0) {
          uVar17 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterAsyncLoadingQueuedPackages.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterAsyncLoadingQueuedPackages.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterAsyncLoadingQueuedPackages.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterAsyncLoadingQueuedPackages.CounterId._2_2_ = 0;
            __GTraceCounterAsyncLoadingQueuedPackages.CounterId._0_2_ = uVar17;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterAsyncLoadingQueuedPackages.CounterId._0_2_,
                   (long64)__GTraceCounterAsyncLoadingQueuedPackages.Value);
      }
    }
    aVar26 = (atomic<__int64>)
             (longlong)
             (int)(pFVar11->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter;
    if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value != aVar26) {
      LOCK();
      UNLOCK();
      __GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value = aVar26;
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
            (atomic<unsigned_int>)0x0) {
          uVar17 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterFlags &
                              0xf);
          LOCK();
          if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._2_2_ = 0;
            __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_ = uVar17;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_,
                   (long64)__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value);
      }
    }
    FZenaphore::NotifyOne(&pFVar11->AltZenaphore);
    if (bVar10) {
      uVar24 = UE::Trace::Private::TimeGetTimestamp();
      lVar20 = uVar24 - UE::Trace::Private::GStartCycle;
      lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar31 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar25 = *(FWriteBuffer **)(lVar31 + 0x20);
      if ((int)pFVar25 - *(int *)&pFVar25->Cursor < 8) {
        pFVar25 = UE::Trace::Private::Writer_NextBuffer();
      }
      *(longlong *)pFVar25->Cursor = lVar20 * 0x100 + 0x12;
      pFVar25->Cursor = pFVar25->Cursor + 8;
      pFVar25->Committed = pFVar25->Cursor;
    }
    if (bVar32) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((local_360->SharedReferenceCount).ReferenceController);
    return iVar18;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// MergePostLoadGroups @ 14232c250

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::MergePostLoadGroups
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,
          FAsyncLoadingPostLoadGroup *param_2,FAsyncLoadingPostLoadGroup *param_3,bool param_4)

{
  TArray<FAsyncPackage2_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FAsyncPackage2 *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  atomic<unsigned___int64> aVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 local_res18 [8];
  FAsyncLoadingPostLoadGroup *local_res20;
  undefined1 local_58 [24];
  
  if (param_2 != param_3) {
    bVar11 = -1 < CpuChannel->Enabled;
    local_res20 = param_3;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5376,"MergePostLoadGroups",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x1500);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5376);
    }
    if ((param_1->bCanAccessAsyncLoadingThreadData == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ThreadState.bCanAccessAsyncLoadingThreadData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x1501,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar10 = (param_3->Packages).AllocatorInstance.Data;
    iVar3 = (param_3->Packages).ArrayNum;
    pFVar2 = pFVar10 + (longlong)iVar3 * 8;
    while( true ) {
      if ((param_3->Packages).ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FAsyncPackage2_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar10 == pFVar2) break;
      lVar4 = *(longlong *)pFVar10;
      if ((*(FAsyncLoadingPostLoadGroup **)(lVar4 + 0x460) != param_3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Package->PostLoadGroup == Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x1504,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(FAsyncLoadingPostLoadGroup **)(lVar4 + 0x460) = param_2;
      pFVar10 = pFVar10 + 8;
    }
    pTVar1 = &param_2->Packages;
    if ((pTVar1 == &param_3->Packages) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar3 = (param_3->Packages).ArrayNum;
    if (iVar3 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar3,&pTVar1->AllocatorInstance,&(param_2->Packages).ArrayNum,
                         &(param_2->Packages).ArrayMax);
      memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8,
              (param_3->Packages).AllocatorInstance.Data,(longlong)iVar3 << 3);
      (param_3->Packages).ArrayNum = 0;
    }
    param_2->PackagesWithExportsToSerializeCount =
         param_2->PackagesWithExportsToSerializeCount + param_3->PackagesWithExportsToSerializeCount
    ;
    if (((param_2->PackagesWithExportsToPostLoadCount != 0) ||
        (param_3->PackagesWithExportsToPostLoadCount != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Target->PackagesWithExportsToPostLoadCount == 0 && Source->PackagesWithExportsToPostLoadCount == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x1509,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_4) {
      aVar9 = (atomic<unsigned___int64>)param_2->SyncLoadContextId;
      if (param_2->SyncLoadContextId < param_3->SyncLoadContextId) {
        aVar9 = (atomic<unsigned___int64>)param_3->SyncLoadContextId;
      }
      if (aVar9 != (atomic<unsigned___int64>)0x0) {
        param_2->SyncLoadContextId = (ulong64)aVar9;
        pFVar10 = (pTVar1->AllocatorInstance).Data;
        iVar3 = (param_2->Packages).ArrayNum;
        pFVar2 = pFVar10 + (longlong)iVar3 * 8;
        while( true ) {
          if ((param_2->Packages).ArrayNum != iVar3) {
            `TCheckedPointerIterator<FAsyncPackage2_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_58);
          }
          param_3 = local_res20;
          if (pFVar10 == pFVar2) break;
          pFVar5 = *(FAsyncPackage2 **)pFVar10;
          LOCK();
          pFVar5->SyncLoadContextId = aVar9;
          UNLOCK();
          if ((pFVar5->Desc).Priority < 0x7fffffff) {
            (pFVar5->Desc).Priority = 0x7fffffff;
            UpdatePackagePriority(this,param_1,pFVar5);
          }
          pFVar10 = pFVar10 + 8;
        }
      }
    }
    pFVar2 = (param_3->Packages).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_3,0x20);
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// NotifyCompiledVersePackage @ 14232cdc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::NotifyCompiledVersePackage(FAsyncLoadingThread2 *this,VPackage *param_1)

{
  return;
}

// NotifyConstructedDuringAsyncLoading @ 14232cdd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::NotifyConstructedDuringAsyncLoading
          (FAsyncLoadingThread2 *this,UObject *param_1,bool param_2)

{
  atomic<unsigned_char> *this_00;
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  FTlsAutoCleanup FVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  FTlsAutoCleanup *pFVar10;
  UPackage *this_01;
  FString *pFVar11;
  EInternalObjectFlags EVar12;
  ForAnyElementType *pFVar13;
  undefined4 local_res10 [2];
  char local_res18;
  UObject *local_d8;
  code *local_d0;
  undefined4 *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar7 = false;
  local_res10[0] = 0;
  local_res18 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2a7b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar9 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_c8 = local_res10;
  local_d0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar10 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d0,puVar9);
  FVar3 = pFVar10[8];
  this_01 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  if ((FVar3 == (FTlsAutoCleanup)0x0) || (this_01 == (UPackage *)0x0)) {
    if ((byte)LogStreaming._0_1_ < 7) {
      return;
    }
    if (this_01 != (UPackage *)0x0) {
      pFVar11 = UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_01,&local_50,(UObject *)0x0,None);
      if ((pFVar11->Data).ArrayNum == 0) {
        bVar7 = true;
      }
      else {
        bVar7 = true;
      }
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_60,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      return;
    }
  }
  else {
    if (*(byte *)((longlong)FVar3 + 0x494) < 0xf) {
      if (((6 < (byte)LogStreaming._0_1_) && (uVar4 = (this_01->PackageId).Id, uVar4 != 0)) &&
         (*(ulong64 *)((longlong)FVar3 + 0x200) != uVar4)) {
        ::LexToString(*(EAsyncPackageLoadingState2 *)((longlong)FVar3 + 0x494));
        ::FName::ToString((FName *)((longlong)FVar3 + 0x210),&local_a0);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_b0,(UObject *)0x0,None)
        ;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_c0,(UObject *)0x0,None)
        ;
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        param_2 = (bool)local_res18;
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          param_2 = (bool)local_res18;
        }
      }
      this_00 = (atomic<unsigned_char> *)((longlong)FVar3 + 0x590);
      LOCK();
      FVar1.State = *this_00;
      if (FVar1.State == (atomic<unsigned_char>)0x0) {
        *this_00 = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      local_d8 = param_1;
      if (FVar1.State != (atomic<unsigned_char>)0x0) {
        UE::FMutex::LockSlow((FMutex *)this_00);
      }
      FMRSWRecursiveAccessDetector::AcquireWriteAccess
                ((FMRSWRecursiveAccessDetector *)((longlong)FVar3 + 0x5a8));
      if (param_2 == false) {
        EVar12 = AsyncLoadingPhase2|Async;
        if (*(char *)((longlong)FVar3 + 0x495) == '\0') {
          EVar12 = Async|AsyncLoadingPhase1;
        }
        UObjectBaseUtility::SetInternalFlags((UObjectBaseUtility *)local_d8,EVar12);
        pFVar13 = (ForAnyElementType *)((longlong)FVar3 + 0x598);
        if (((pFVar13->Data <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 <
             pFVar13->Data + (longlong)*(int *)((longlong)FVar3 + 0x5a4) * 8)) &&
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
        iVar8 = *(int *)((longlong)FVar3 + 0x5a0);
        if (iVar8 == *(int *)((longlong)FVar3 + 0x5a4)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar13,(int *)((longlong)FVar3 + 0x5a4));
        }
        *(int *)((longlong)FVar3 + 0x5a0) = iVar8 + 1;
        *(UObject **)(pFVar13->Data + (longlong)iVar8 * 8) = local_d8;
      }
      else {
        TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*_const_&>
                  ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)((longlong)FVar3 + 0x598),
                   &local_d8);
      }
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)((longlong)FVar3 + 0x5a8));
      LOCK();
      aVar2 = *this_00;
      *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) == 0) {
        return;
      }
      UE::FMutex::WakeWaitingThread((FMutex *)this_00);
      return;
    }
    if ((byte)LogStreaming._0_1_ < 2) {
      return;
    }
    ::LexToString(&local_70,(FPackageId *)((longlong)FVar3 + 0x200));
    ::FName::ToString((FName *)((longlong)FVar3 + 0x210),&local_80);
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_90,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    local_50.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
      local_50.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    }
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// NotifyRegistrationComplete @ 14232d1f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncLoadingThread2::NotifyRegistrationComplete(FAsyncLoadingThread2 *this)

{
  FGlobalImportStore::RegistrationComplete((FGlobalImportStore *)&this->PackageStore);
  this->bStopRequested = (atomic<bool>)0x1;
  if (4 < (byte)LogStreaming._0_1_) {
    AcquireSRWLockShared((PSRWLOCK)&(this->GlobalImportStore).ScriptCells.field_0x48);
    ReleaseSRWLockShared((PSRWLOCK)&(this->GlobalImportStore).ScriptCells.field_0x48);
    AcquireSRWLockShared((PSRWLOCK)&(this->GlobalImportStore).ScriptCells.field_0x48);
    ReleaseSRWLockShared((PSRWLOCK)&(this->GlobalImportStore).ScriptCells.field_0x48);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  return;
}

// NotifyRegistrationEvent @ 14232d310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::NotifyRegistrationEvent
          (FAsyncLoadingThread2 *this,FName param_1,FName param_2,ENotifyRegistrationType param_3,
          ENotifyRegistrationPhase param_4,_func___cdecl_UObject_ptr *param_5,bool param_6,
          UObject *param_7)

{
  undefined1 *SRWLock;
  FPackageObjectIndex *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  ulong64 uVar7;
  longlong lVar8;
  undefined1 auStackY_21b8 [32];
  undefined1 local_2188 [8];
  FName local_2180;
  undefined1 local_2178 [16];
  TPairInitializer<FPackageObjectIndex_const_&,UObject_*_const_&> local_2168;
  undefined1 local_2158 [8];
  undefined1 local_2150 [24];
  TStringBuilderBase<wchar_t> local_2138;
  UObject local_2118 [51];
  wchar_t local_1902 [5];
  TStringBuilderBase<wchar_t> local_18f8;
  wchar_t local_18d8 [1035];
  wchar_t local_10c2 [5];
  TStringBuilderBase<wchar_t> local_10b8;
  wchar_t local_1098 [1035];
  wchar_t local_882 [5];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14232d329;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_21b8;
  if (param_4 == NRP_Finished) {
    if (param_7 == (UObject *)0x0) {
      `FAsyncLoadingThread2::NotifyRegistrationEvent'::__l5::<lambda_1>::operator()(local_2188);
    }
    local_10b8.Base = local_1098;
    local_10b8.CurPos = local_1098;
    local_10b8.bIsDynamic = false;
    local_10b8.bIsExternal = false;
    local_10b8.End = local_882;
    local_2180 = param_1;
    ::FName::AppendString(&local_2180,&local_10b8);
    local_18f8.Base = local_18d8;
    local_18f8.CurPos = local_18d8;
    local_18f8.bIsDynamic = false;
    local_18f8.bIsExternal = false;
    local_18f8.End = local_10c2;
    local_2180 = param_2;
    ::FName::AppendString(&local_2180,&local_18f8);
    pwVar3 = local_10b8.Base;
    pwVar2 = local_18f8.Base;
    local_2168.Key = (FPackageObjectIndex *)&this->PackageStore;
    SRWLock = &(this->GlobalImportStore).ScriptCells.field_0x48;
    lVar6 = (longlong)local_18f8.CurPos - (longlong)local_18f8.Base;
    lVar8 = (longlong)local_10b8.CurPos - (longlong)local_10b8.Base;
    local_2180 = (FName)param_7;
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_2138.Base = (wchar_t *)local_2118;
    iVar5 = (int)(lVar8 >> 1);
    local_2138.End = local_1902;
    local_2138.bIsDynamic = false;
    local_2138.bIsExternal = false;
    local_2138.CurPos = (wchar_t *)local_2118;
    uVar7 = (longlong)iVar5 * 2;
    if (local_1902 < &local_2118[0].field_0x0 + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_2138,(longlong)iVar5);
    }
    if (iVar5 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy(local_2138.CurPos,pwVar3,uVar7);
      local_2138.CurPos = (wchar_t *)((longlong)pvVar4 + uVar7);
    }
    if ((((int)((longlong)local_2138.CurPos - (longlong)local_2138.Base >> 1) != 0) &&
        (*(short *)&((UObject *)((longlong)local_2138.CurPos + -0x28))->field_0x26 != 0x2f)) &&
       (*(short *)&((UObject *)((longlong)local_2138.CurPos + -0x28))->field_0x26 != 0x5c)) {
      if (local_2138.End < (undefined1 *)((longlong)local_2138.CurPos + 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_2138,1);
      }
      *local_2138.CurPos = 0x2f;
      local_2138.CurPos = (wchar_t *)((longlong)local_2138.CurPos + 2);
    }
    iVar5 = (int)(lVar6 >> 1);
    uVar7 = (ulong64)iVar5;
    if (local_2138.End < local_2138.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_2138,uVar7);
    }
    if (iVar5 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy(local_2138.CurPos,pwVar2,uVar7 * 2);
      local_2138.CurPos = (wchar_t *)((longlong)pvVar4 + uVar7 * 2);
    }
    local_2178._0_8_ = local_2138.Base;
    local_2178._8_4_ = (int)((longlong)local_2138.CurPos - (longlong)local_2138.Base >> 1);
    uVar7 = FPackageObjectIndex::GenerateImportHashFromObjectPath
                      ((TStringView<wchar_t> *)local_2178);
    pFVar1 = local_2168.Key;
    local_2158 = (undefined1  [8])(uVar7 | 0x4000000000000000);
    local_2178._0_8_ = local_2158;
    local_2178._8_8_ = &local_2180;
    TSet<TTuple<FPackageObjectIndex,UObject_*>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FPackageObjectIndex_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<FPackageObjectIndex,UObject_*>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>,FDefaultSetAllocator>
                *)&((UObject *)((longlong)local_2168.Key + 0xa0))->field_0x18,&local_2168,
               (bool *)local_2178);
    local_878.Base = local_858;
    local_878.CurPos = local_858;
    local_878.bIsDynamic = false;
    local_878.bIsExternal = false;
    local_878.End = local_42;
    local_2178._0_8_ = pFVar1;
    local_2178._8_8_ = &local_878;
    local_2168.Key =
         (FPackageObjectIndex *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FGlobalImportStore::AddScriptObject'::__l2::<lambda_1>,void,UObject_*>
         ::Call;
    local_2168.Value = (UObject **)local_2178;
    local_2150._8_8_ = &local_2168;
    local_2150._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
    ForEachObjectWithOuterBreakable
              ((UObjectBase *)local_2180,(TFunctionRef<bool___cdecl(UObject_*)> *)local_2150,true,
               RF_NoFlags,Borrowed);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2138);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_18f8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10b8);
  }
  return;
}

// NotifyScriptVersePackage @ 14232d6b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::NotifyScriptVersePackage(FAsyncLoadingThread2 *this,VPackage *param_1)

{
  return;
}

// NotifyUnreachableObjects @ 14232d6c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::NotifyUnreachableObjects
          (FAsyncLoadingThread2 *this,TArrayView<FUObjectItem_*,int> *param_1)

{
  int *lpCriticalSection;
  bool bVar1;
  bool bVar2;
  undefined4 local_res18;
  undefined4 local_res1c;
  TArrayView<std::nullptr_t,int> local_38;
  undefined1 local_28 [16];
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId10838,"NotifyUnreachableObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2a56);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10838);
  }
  if (GExitPurge == false) {
    lpCriticalSection = &(this->PendingCDOsRecursiveStack).ArrayNum;
    if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    RemoveUnreachableObjects
              ((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,
               (TArray<FUnreachableObject,TSizedDefaultAllocator<32>_> *)
               ((this->UnreachableObjectsCritical).CriticalSection.Opaque3 + 2));
    local_28._0_8_ = param_1->DataPtr;
    local_28._8_8_ = *(undefined8 *)&param_1->ArrayNum;
    CollectUnreachableObjects
              ((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,
               (TArrayView<FUObjectItem_*,int> *)local_28,
               (TArray<FUnreachableObject,TSizedDefaultAllocator<32>_> *)
               ((this->UnreachableObjectsCritical).CriticalSection.Opaque3 + 2));
    if ((GVerifyObjectLoadFlags != false) && (bVar1 = (*IsAsyncLoading)(), !bVar1)) {
      FGlobalImportStore::VerifyLoadedPackages((FGlobalImportStore *)&this->PackageStore);
      bVar1 = -1 < CpuChannel->Enabled;
      if (bVar1) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId10664,"VerifyObjectLoadFlagsWhenFinishedLoading",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x29a8);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10664);
      }
      local_28._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>,void,int>
           ::Call;
      local_28._8_8_ = &local_res18;
      local_res18 = 0x8400000;
      local_38.DataPtr = (void **)0x0;
      local_38.ArrayNum = 0;
      local_res1c = 0x8003400;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"VerifyObjectLoadFlagsDebugTask",GUObjectArray.ObjObjects.NumElements,0x200,
                 (TFunctionRef<void___cdecl(int)> *)local_28,(<lambda_1>)0x0,None,&local_38);
      if (4 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_Verified_load_f_1508b57e0,
                   (FLogCategoryBase *)&LogStreaming);
      }
      if (bVar1) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (GRemoveUnreachableObjectsOnGT != false) {
      RemoveUnreachableObjects
                ((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,
                 (TArray<FUnreachableObject,TSizedDefaultAllocator<32>_> *)
                 ((this->UnreachableObjectsCritical).CriticalSection.Opaque3 + 2));
    }
    FZenaphore::NotifyAll((FZenaphore *)&this->ConditionalBeginPostLoadTick);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnGarbageCollectStarted @ 14232de00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncLoadingThread2::OnGarbageCollectStarted(FAsyncLoadingThread2 *this)

{
  if (CpuChannel->Enabled < 0) {
    ProcessDeferredDeletePackagesQueue(this,0x7fffffff);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId10793,"FAsyncLoadingThread2::OnGarbageCollectStarted",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
             ,0x2a29);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10793);
  ProcessDeferredDeletePackagesQueue(this,0x7fffffff);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ProcessAsyncLoadingFromGameThread @ 142330460

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread2::ProcessAsyncLoadingFromGameThread
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,bool *param_2)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  Type TVar13;
  uint uVar14;
  uint *puVar15;
  FThreadHeartBeat *this_00;
  FAsyncPackage2 *pFVar16;
  uint uVar17;
  longlong lVar18;
  int *piVar19;
  FAsyncPackage2 *pFVar20;
  undefined1 local_res10 [8];
  bool *local_res18;
  uint local_res20;
  LARGE_INTEGER local_a0;
  FTlsAutoCleanup *local_98;
  code *local_90;
  undefined1 *local_88;
  FWriteAccessScope local_80 [2];
  FAsyncPackage2 *pFVar21;
  
  local_res18 = param_2;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId9811,"AsyncLoadingTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2653);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9811);
  }
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2655,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    TVar13 = (*pcVar5)();
    return TVar13;
  }
  puVar15 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_88 = local_res10;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_98 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar15);
  uVar2 = *(undefined4 *)(local_98 + 10);
  *(undefined4 *)(local_98 + 10) = 0x400000;
  bVar9 = IsInGameThread();
  if (bVar9) {
    this->AsyncLoadingTickCounter = this->AsyncLoadingTickCounter + 1;
  }
  dVar8 = __real_4170000000000000;
  pFVar21 = (FAsyncPackage2 *)0x0;
  pFVar20 = (FAsyncPackage2 *)0x0;
  pFVar16 = pFVar21;
LAB_1423305a0:
  local_res20 = (int)pFVar16 + 1;
  if (((byte)local_res20 & 0x1f) == 0x1f) {
    this_00 = FThreadHeartBeat::Get();
    FThreadHeartBeat::HeartBeat(this_00);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnAsyncLoadingFlushUpdate,local_80);
    bVar12 = false;
    FCoreDelegates::OnAsyncLoadingFlushUpdate._28_4_ =
         FCoreDelegates::OnAsyncLoadingFlushUpdate._28_4_ + 1;
    uVar17 = FCoreDelegates::OnAsyncLoadingFlushUpdate._16_4_ - 1;
    if (-1 < (int)uVar17) {
      lVar18 = (longlong)(int)uVar17 << 4;
      do {
        uVar14 = 0;
        if ((int)uVar17 < (int)FCoreDelegates::OnAsyncLoadingFlushUpdate._16_4_) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          TVar13 = (*pcVar5)();
          return TVar13;
        }
        if (((*(int *)(FCoreDelegates::OnAsyncLoadingFlushUpdate._8_8_ + 8 + lVar18) == 0) ||
            (*(longlong **)(FCoreDelegates::OnAsyncLoadingFlushUpdate._8_8_ + lVar18) ==
             (longlong *)0x0)) ||
           (cVar11 = (**(code **)(**(longlong **)
                                    (FCoreDelegates::OnAsyncLoadingFlushUpdate._8_8_ + lVar18) +
                                 0x68))(), cVar11 == '\0')) {
          bVar12 = true;
        }
        lVar18 = lVar18 + -0x10;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
    FCoreDelegates::OnAsyncLoadingFlushUpdate._28_4_ =
         FCoreDelegates::OnAsyncLoadingFlushUpdate._28_4_ + -1;
    if (bVar12) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnAsyncLoadingFlushUpdate,false);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::~FWriteAccessScope
              (local_80);
    param_2 = local_res18;
  }
  if (param_1->bUseTimeLimit != false) {
    QueryPerformanceCounter(&local_a0);
    dVar1 = param_1->TimeLimit;
    dVar6 = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
    bVar12 = dVar1 < dVar6 - param_1->StartTime;
    if ((bVar12) && (GWarnIfTimeLimitExceeded != 0)) {
      IsTimeLimitExceededPrint
                (param_1->StartTime,dVar6,param_1->LastTestTime,dVar1,
                 L"ProcessAsyncLoadingFromGameThread",(UObject *)0x0);
      param_1->LastTestTime = dVar6;
      pFVar21 = pFVar20;
      goto LAB_142330905;
    }
    param_1->LastTestTime = dVar6;
    if (bVar12) goto LAB_142330905;
  }
  piVar19 = &(param_1->SyncLoadContextStack).ArrayNum;
  if (((GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) && (*piVar19 == 0)) &&
     (bVar12 = IsInParallelLoadingThread(), !bVar12)) {
    pFVar21 = pFVar20;
    if (5 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    goto LAB_142330905;
  }
  if (0 < (int)this->SuspendRequestedCount) goto LAB_142330905;
  if ((this->QueuedPackagesCounter == (atomic<int>)0x0) && ((this->PendingPackages).ArrayNum == 0))
  {
    iVar3 = *piVar19;
    if (iVar3 != 0) {
      uVar17 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar17 = ~(iVar3 - 1U) >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        TVar13 = (*pcVar5)();
        return TVar13;
      }
      if (**(longlong **)
            ((param_1->SyncLoadContextStack).AllocatorInstance.Data +
            (longlong)(param_1->SyncLoadContextStack).ArrayNum * 8 + -8) == 0) goto LAB_1423307eb;
      bVar12 = FAsyncLoadEventQueue2::ExecuteSyncLoadEvents(&this->EventQueue,param_1);
      if (!bVar12) goto LAB_142330802;
      pFVar16 = (FAsyncPackage2 *)(ulonglong)local_res20;
      *param_2 = true;
      goto LAB_1423305a0;
    }
LAB_1423307eb:
    bVar12 = FAsyncLoadEventQueue2::PopAndExecute(&this->EventQueue,param_1);
    if (!bVar12) {
LAB_142330802:
      if (((this->ExternalReadQueue).Tail)->Next ==
          (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
        bVar12 = ProcessDeferredDeletePackagesQueue(this,1);
        if (bVar12) goto LAB_1423309c1;
        pFVar21 = (FAsyncPackage2 *)0x2;
LAB_142330905:
        if (bVar9) {
          piVar19 = &this->AsyncLoadingTickCounter;
          *piVar19 = *piVar19 + -1;
          if ((*piVar19 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AsyncLoadingTickCounter >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                 ,0x1128,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            TVar13 = (*pcVar5)();
            return TVar13;
          }
        }
        *(undefined4 *)(local_98 + 10) = uVar2;
        if (bVar7) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return (Type)pFVar21;
      }
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId9872,"WaitingForExternalReads",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x2690);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9872);
      }
      aVar4 = ((this->ExternalReadQueue).Tail)->Next;
      pFVar16 = pFVar21;
      if (aVar4 != (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
        pFVar16 = *(FAsyncPackage2 **)((longlong)aVar4 + 8);
        FMemory::Free((this->ExternalReadQueue).Tail);
        (this->ExternalReadQueue).Tail = (FNode *)aVar4;
      }
      TVar13 = FAsyncPackage2::ProcessExternalReads(pFVar16,param_1,ExternalReadAction_Wait);
      if ((TVar13 != Complete) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result == EAsyncPackageState::Complete",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x2696,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        TVar13 = (*pcVar5)();
        return TVar13;
      }
      *local_res18 = true;
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      pFVar16 = (FAsyncPackage2 *)(ulonglong)local_res20;
      param_2 = local_res18;
      goto LAB_1423305a0;
    }
  }
  else {
    bVar12 = CreateAsyncPackagesFromQueue(this,param_1,false);
    if (!bVar12) goto LAB_142330905;
  }
LAB_1423309c1:
  pFVar16 = (FAsyncPackage2 *)(ulonglong)local_res20;
  *param_2 = true;
  goto LAB_1423305a0;
}

// ProcessDeferredDeletePackagesQueue @ 142330a30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FAsyncLoadingThread2::ProcessDeferredDeletePackagesQueue(FAsyncLoadingThread2 *this,int param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar3;
  FAsyncPackage2 *pFVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  
  bVar6 = false;
  if (((this->DeferredDeletePackages).Tail)->Next ==
      (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
    return false;
  }
  iVar7 = 1;
  LOCK();
  bVar8 = (this->DeferredDeletePackagesLock).State == (atomic<unsigned_char>)0x0;
  if (bVar8) {
    (this->DeferredDeletePackagesLock).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar8) {
    UE::FMutex::LockSlow(&this->DeferredDeletePackagesLock);
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_FAsyncLoadingThread2::ProcessDeferredDeletePackagesQueue(int)___ptr64'
                ::__l5::__CpuProfilerEventSpecId4726,"ProcessDeferredDeletePackagesQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1276);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_FAsyncLoadingThread2::ProcessDeferredDeletePackagesQueue(int)___ptr64'
               ::__l5::__CpuProfilerEventSpecId4726);
  }
  bVar5 = false;
  if (0 < param_1) {
    do {
      bVar6 = bVar5;
      aVar3 = ((this->DeferredDeletePackages).Tail)->Next;
      if (aVar3 == (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) break;
      pFVar4 = *(FAsyncPackage2 **)((longlong)aVar3 + 8);
      FMemory::Free((this->DeferredDeletePackages).Tail);
      (this->DeferredDeletePackages).Tail = (FNode *)aVar3;
      DeleteAsyncPackage(this,pFVar4);
      iVar7 = iVar7 + 1;
      bVar6 = true;
      bVar5 = bVar6;
    } while (iVar7 <= param_1);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  LOCK();
  pFVar1 = &this->DeferredDeletePackagesLock;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->DeferredDeletePackagesLock);
  }
  return bVar6;
}

// ProcessLoadedPackagesFromGameThread @ 1423339b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread2::ProcessLoadedPackagesFromGameThread
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,bool *param_2,
          TArrayView<int_const_,int> *param_3)

{
  undefined1 *puVar1;
  FManualResetEvent *pFVar2;
  atomic<int> *paVar3;
  FScriptContainerElement *pFVar4;
  int *piVar5;
  atomic<unsigned_char> aVar6;
  FManualResetEvent FVar7;
  atomic<int> aVar8;
  double dVar9;
  UObject *this_00;
  UPackage *pUVar10;
  FLinkerLoad *pFVar11;
  FAsyncPackage2 *pFVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_01;
  longlong *plVar13;
  atomic<unsigned_char> *paVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  ForElementType<int> *pFVar18;
  double dVar19;
  FAsyncLoadingThread2 *pFVar20;
  undefined4 uVar21;
  char cVar22;
  bool bVar23;
  bool bVar24;
  ushort uVar25;
  Type TVar26;
  int iVar27;
  uint uVar28;
  FTaskGraphInterface *pFVar29;
  FUObjectItem *pFVar30;
  FName *pFVar31;
  TStatId TVar32;
  FLinkerLoadState *pFVar33;
  ForElementType<FAsyncPackage2_*> FVar34;
  FName FVar35;
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar36;
  ForElementType<int> FVar37;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> FVar38;
  ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
  FVar39;
  atomic<__int64> aVar40;
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar41;
  TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *pTVar42;
  ulonglong uVar43;
  ForElementType<FSetElementId> FVar44;
  FAsyncLoadEventQueue2 *this_02;
  FWindowsRecursiveMutex *pFVar45;
  ForElementType<FAsyncPackage2_*> FVar46;
  FCompletedPackageRequest *pFVar47;
  int iVar48;
  undefined1 auVar49 [8];
  FScriptContainerElement *pFVar50;
  FAsyncPackage2 **ppFVar51;
  PSRWLOCK SRWLock;
  longlong lVar52;
  FAsyncLoadingThread2 *pFVar53;
  FAsyncPackage2 **ppFVar54;
  ulong64 uVar55;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar56;
  TArray<FAsyncLoadingThread2::FCompletedPackageRequest,TSizedDefaultAllocator<32>_> *pTVar57;
  ulonglong uVar58;
  int *piVar59;
  uint uVar60;
  FExportObject *pFVar61;
  FExportObject *pFVar62;
  atomic<unsigned___int64> aVar63;
  longlong lVar64;
  TArray<FAsyncPackage2_*,TSizedDefaultAllocator<32>_> *pTVar65;
  int iVar66;
  uint uVar67;
  FAsyncLoadEventQueue2 *pFVar68;
  atomic<unsigned___int64> aVar69;
  undefined1 auStackY_3f8 [32];
  bool local_397;
  FName local_390;
  FAsyncLoadingThread2 *local_388;
  FAsyncLoadEventQueue2 *local_380;
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376;
  undefined1 local_375;
  undefined1 local_374;
  undefined1 local_373 [3];
  Type local_370;
  atomic<unsigned___int64> local_368;
  uint local_360;
  ForElementType<FAsyncPackage2_*> local_358;
  ForAnyElementType local_350;
  uint local_348 [2];
  FAsyncLoadingThreadState2 *local_340;
  undefined1 local_338 [8];
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> local_330;
  uint local_328;
  FCycleCounter local_320;
  FCycleCounter local_310;
  ForElementType<FAsyncPackage2_*> local_300;
  uint local_2f8 [2];
  uint local_2f0 [2];
  int *local_2e8;
  TArrayView<int_const_,int> *local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  int *local_2d0;
  LARGE_INTEGER local_2c8;
  bool *local_2c0;
  FSourceLocation local_2b8;
  FSourceLocation local_298;
  FScriptContainerElement *local_278;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> local_270;
  uint local_268;
  TOptional<FAsyncPackage2_*> local_260;
  FAsyncPackage2 **local_250;
  undefined4 uStack_248;
  uint uStack_244;
  FName local_240;
  FName local_238 [2];
  FString local_228;
  FString local_218;
  FString local_208;
  TArrayView<int_const_,int> local_1f8;
  FString local_1e8;
  FReadAccessScope local_1d8;
  FAsyncPackage2 **local_1c0;
  undefined8 uStack_1b8;
  FName local_1b0;
  Type local_1a8;
  UPackage *local_1a0;
  FAsyncPackage2 *local_198;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  local_190;
  uchar auStack_188 [8];
  ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
  local_180;
  int local_178;
  int local_174;
  TSharedPtr<FLoadPackageAsyncProgressDelegate,1> local_170;
  int local_160;
  int iStack_15c;
  uchar auStack_158 [8];
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> local_150;
  int local_148;
  int local_144;
  ForElementType<int> local_140;
  int local_130;
  int local_12c;
  ForElementType<FAsyncPackage2_*> local_128;
  uint local_100;
  uint local_fc;
  undefined1 local_f8 [40];
  uchar auStack_d0 [8];
  ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
  local_c8;
  int local_c0;
  int local_bc;
  uchar local_b8 [8];
  ForElementType<int> FStack_b0;
  int local_a8;
  int iStack_a4;
  uchar auStack_a0 [8];
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> local_98;
  int local_90;
  int local_8c;
  uchar local_88 [8];
  ForElementType<int> local_80;
  int local_78;
  int local_74;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_370 = Complete;
  local_388 = this;
  local_340 = param_1;
  local_2e0 = param_3;
  local_2c0 = param_2;
  if ((this->bThreadStarted != (atomic<bool>)0x0) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    pFVar29 = FTaskGraphInterface::Get();
    cVar22 = (**(code **)((longlong)*pFVar29 + 0x38))(pFVar29,1);
    if (cVar22 == '\0') {
      pFVar29 = FTaskGraphInterface::Get();
      (**(code **)((longlong)*pFVar29 + 0x48))(pFVar29,1);
      bVar23 = FAsyncLoadingThreadState2::IsTimeLimitExceeded
                         (param_1,L"ProcessLoadedPackagesFromGameThread",(UObject *)0x0);
      if (bVar23) {
        return TimeOut;
      }
    }
  }
  dVar19 = __real_4170000000000000;
  local_2e8 = &(param_1->SyncLoadContextStack).ArrayNum;
  pFVar68 = &this->MainThreadEventQueue;
  local_128.SecondaryData = (ForElementType<FAsyncPackage2_*>)0x0;
  local_100 = 0;
  local_fc = 4;
  local_380 = pFVar68;
  local_2d0 = local_2e8;
  do {
    piVar5 = local_2d0;
    piVar59 = local_2e8;
    if (param_1->bUseTimeLimit != false) {
      QueryPerformanceCounter(&local_2c8);
      dVar9 = param_1->TimeLimit;
      dVar17 = (double)local_2c8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar19;
      dVar16 = dVar17 - param_1->StartTime;
      if ((dVar16 <= dVar9) || (GWarnIfTimeLimitExceeded == 0)) {
        param_1->LastTestTime = dVar17;
        piVar59 = piVar5;
        local_380 = pFVar68;
        local_2e8 = piVar5;
        if (dVar16 <= dVar9) goto LAB_142333b3b;
LAB_142333b7f:
        TVar26 = TimeOut;
      }
      else {
        IsTimeLimitExceededPrint
                  (param_1->StartTime,dVar17,param_1->LastTestTime,dVar9,
                   L"ProcessAsyncLoadingFromGameThread",(UObject *)0x0);
        param_1->LastTestTime = dVar17;
        TVar26 = TimeOut;
      }
      goto LAB_142335a56;
    }
LAB_142333b3b:
    this_02 = local_380;
    local_2e8 = piVar59;
    if (((GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) &&
        (this_02 = pFVar68, *piVar59 == 0)) && (bVar23 = IsInParallelLoadingThread(), !bVar23)) {
      if (5 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                    ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      goto LAB_142333b7f;
    }
    while (TMpscQueue<FAsyncPackage2_*,FMemory>::Dequeue
                     (&param_1->PackagesToReprioritize,&local_260), local_260.bIsSet != false) {
      FAsyncLoadEventQueue2::UpdatePackagePriority(this_02,local_260.TypedValue);
      FAsyncPackage2::Release(local_260.TypedValue);
      this_02 = pFVar68;
    }
    iVar66 = *piVar59;
    if (iVar66 == 0) {
      local_368 = (atomic<unsigned___int64>)0x0;
LAB_142333c5a:
      aVar63 = local_368;
      local_380 = this_02;
      local_397 = FAsyncLoadEventQueue2::PopAndExecute(this_02,param_1);
    }
    else {
      uVar60 = 0;
      if ((int)(iVar66 - 1U) < iVar66) {
        uVar60 = ~(iVar66 - 1U) >> 0x1f;
      }
      if ((uVar60 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar15 = (code *)swi(3);
        TVar26 = (*pcVar15)();
        return TVar26;
      }
      aVar63 = **(atomic<unsigned___int64> **)
                 ((param_1->SyncLoadContextStack).AllocatorInstance.Data +
                 (longlong)(param_1->SyncLoadContextStack).ArrayNum * 8 + -8);
      local_368 = aVar63;
      if (aVar63 == (atomic<unsigned___int64>)0x0) goto LAB_142333c5a;
      local_380 = this_02;
      local_397 = FAsyncLoadEventQueue2::ExecuteSyncLoadEvents(this_02,param_1);
      local_368 = aVar63;
    }
    local_328 = 0;
    local_358 = (ForElementType<FAsyncPackage2_*>)0x0;
    if (0 < (this->LoadedPackagesToProcess).ArrayNum) {
      pTVar65 = &this->LoadedPackagesToProcess;
      pFVar53 = local_388;
      do {
        uVar60 = local_328;
        FVar46 = local_358;
        if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId9944,"ProcessLoadedPackagesTime",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                     ,0x26d8);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9944);
        }
        local_360 = ~uVar60;
        local_300._0_4_ = local_360 >> 0x1f;
        uVar67 = 0;
        if ((int)uVar60 < pTVar65->ArrayNum) {
          uVar67 = local_360 >> 0x1f;
        }
        if ((uVar67 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar15 = (code *)swi(3);
          TVar26 = (*pcVar15)();
          return TVar26;
        }
        local_390 = *(FName *)((pTVar65->AllocatorInstance).Data + (longlong)FVar46 * 8);
        if ((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_390 + 0x458) <
            (ulonglong)aVar63) {
          if (bVar23) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        else {
          local_397 = true;
          if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
              GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
            FVar44 = (ForElementType<FSetElementId>)0x154ba3c98;
            if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData !=
                (ForElementType<FSetElementId>)0x0) {
              FVar44 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
            }
            iVar66 = *(int *)((longlong)FVar44 +
                             (ulonglong)
                             (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                             (uint)((FPackageId *)((longlong)local_390 + 0x200))->Id) * 4);
            if (iVar66 != -1) {
              do {
                if (*(ulong64 *)
                     (GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar66 * 0x10) ==
                    ((FPackageId *)((longlong)local_390 + 0x200))->Id) {
                  bVar24 = FWindowsPlatformMisc::IsDebuggerPresent();
                  if (bVar24) {
                    pcVar15 = (code *)swi(3);
                    TVar26 = (*pcVar15)();
                    return TVar26;
                  }
                  break;
                }
                iVar66 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 +
                                 (longlong)iVar66 * 0x10);
              } while (iVar66 != -1);
            }
          }
          if ((((byte)*(atomic<EAsyncPackageLoadingState2> *)((longlong)local_390 + 0x494) < 0x10)
              || (0x12 < (byte)*(atomic<EAsyncPackageLoadingState2> *)((longlong)local_390 + 0x494))
              ) && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Package->AsyncPackageLoadingState >= EAsyncPackageLoadingState2::Finalize && Package->AsyncPackageLoadingState <= EAsyncPackageLoadingState2::CreateClusters"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                        ,0x26e1,L""), bVar24)) {
            pcVar15 = (code *)swi(3);
            TVar26 = (*pcVar15)();
            return TVar26;
          }
          if (*(atomic<EAsyncPackageLoadingState2> *)((longlong)local_390 + 0x494) ==
              (atomic<EAsyncPackageLoadingState2>)0x10) {
            local_338 = (undefined1  [8])0x0;
            local_330 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0;
            pFVar61 = ((TArrayView<FExportObject,int> *)((longlong)local_390 + 0x238))->DataPtr;
            pFVar62 = pFVar61 + *(int *)((longlong)local_390 + 0x240);
            for (; pFVar61 != pFVar62; pFVar61 = pFVar61 + 1) {
              if (((pFVar61->bFiltered == false) && (pFVar61->bExportLoadFailed == false)) &&
                 ((this_00 = pFVar61->Object, this_00 != (UObject *)0x0 &&
                  ((*(uint *)&this_00->field_0x8 & 0x10) != 0)))) {
                UObject::GetDefaultSubobjects
                          (this_00,(TArray<UObject_*,TSizedDefaultAllocator<32>_> *)local_338);
                uVar21 = local_330._0_4_;
                pFVar50 = (FScriptContainerElement *)
                          ((longlong)local_338 + (longlong)(int)local_330._0_4_ * 8);
                auVar49 = local_338;
                while( true ) {
                  if (local_330._0_4_ != uVar21) {
                    local_378 = 0;
                    `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_378);
                  }
                  FVar38 = local_330;
                  if (auVar49 == (undefined1  [8])pFVar50) break;
                  lVar52 = *(longlong *)auVar49;
                  if ((lVar52 != 0) &&
                     (pFVar30 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar52 + 0xc)),
                     ((pFVar30->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
                    pFVar30 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar52 + 0xc));
                    FUObjectItem::ThisThreadAtomicallyClearedFlag
                              (pFVar30,AsyncLoadingPhase2|AsyncLoadingPhase1);
                  }
                  auVar49 = (undefined1  [8])((longlong)auVar49 + 8);
                }
                uVar21 = local_330._4_4_;
                local_330 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)
                            ((ulonglong)(uint)local_330._4_4_ << 0x20);
                if (((longlong)FVar38 < 0) && (uVar21 != 0)) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,0,(ForAnyElementType *)local_338,0,(int *)(local_338 + 0xc));
                }
              }
            }
            LOCK();
            *(atomic<EAsyncPackageLoadingState2> *)((longlong)local_390 + 0x494) =
                 (atomic<EAsyncPackageLoadingState2>)0x11;
            UNLOCK();
            param_1 = local_340;
            if (local_338 != (undefined1  [8])0x0) {
              FMemory::Free((void *)local_338);
              param_1 = local_340;
            }
          }
          if (*(atomic<EAsyncPackageLoadingState2> *)((longlong)local_390 + 0x494) ==
              (atomic<EAsyncPackageLoadingState2>)0x11) {
            TVar32.StatIdPtr = (TStatIdData *)StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread
            ;
            if (StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread ==
                (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadInstancesGameThread>)0x0) {
              pFVar31 = ::FName::FName(&local_240,"STAT_FAsyncPackage_PostLoadInstancesGameThread");
              TVar32.StatIdPtr =
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread,*pFVar31,
                              L"PostLoadInstances GT","STATGROUP_AsyncLoadGameThread",
                              "STATCAT_Advanced",L"Async Load Game Thread",true,true,ST_int64,true,
                              false,MCR_Invalid);
            }
            local_310.StatId.ComparisonIndex.Value = 0;
            local_310.StatId.Number = 0;
            local_310.EmittedEvent = 0;
            local_2b8.Impl._Line = 0x2707;
            local_2b8.Impl._Column = 5;
            local_2b8.Impl._File =
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
            ;
            local_2b8.Impl._Function =
                 "enum EAsyncPackageState::Type __cdecl FAsyncLoadingThread2::ProcessLoadedPackagesFromGameThread(struct FAsyncLoadingThreadState2 &,bool &,class TArrayView<int const ,int>)"
            ;
            FCycleCounter::Start
                      (&local_310,TVar32,Verbose|CycleStat|ClearEveryFrame,false,&local_2b8);
            TVar26 = FAsyncPackage2::PostLoadInstances((FAsyncPackage2 *)local_390,param_1);
            if (TVar26 == Complete) {
              LOCK();
              *(atomic<EAsyncPackageLoadingState2> *)((longlong)local_390 + 0x494) =
                   (atomic<EAsyncPackageLoadingState2>)0x12;
              UNLOCK();
            }
            else {
              local_370 = TimeOut;
            }
            if ((local_310.EmittedEvent & 1) != 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if ((local_310.EmittedEvent & 2) != 0) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((local_310.EmittedEvent & 4) != 0) {
              FThreadStats::AddMessage(local_310.StatId,CycleScopeEnd);
            }
            local_310.EmittedEvent = '\0';
          }
          if (*(atomic<EAsyncPackageLoadingState2> *)((longlong)local_390 + 0x494) ==
              (atomic<EAsyncPackageLoadingState2>)0x12) {
            TVar32.StatIdPtr = (TStatIdData *)StatPtr_STAT_FAsyncPackage_CreateClustersGameThread;
            if (StatPtr_STAT_FAsyncPackage_CreateClustersGameThread ==
                (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateClustersGameThread>)0x0) {
              pFVar31 = ::FName::FName(local_238,"STAT_FAsyncPackage_CreateClustersGameThread");
              TVar32.StatIdPtr =
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_FAsyncPackage_CreateClustersGameThread,*pFVar31,
                              L"CreateClusters GT","STATGROUP_AsyncLoadGameThread",
                              "STATCAT_Advanced",L"Async Load Game Thread",true,true,ST_int64,true,
                              false,MCR_Invalid);
            }
            local_320.StatId.ComparisonIndex.Value = 0;
            local_320.StatId.Number = 0;
            local_320.EmittedEvent = 0;
            local_298.Impl._Line = 0x2716;
            local_298.Impl._Column = 5;
            local_298.Impl._File =
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
            ;
            local_298.Impl._Function =
                 "enum EAsyncPackageState::Type __cdecl FAsyncLoadingThread2::ProcessLoadedPackagesFromGameThread(struct FAsyncLoadingThreadState2 &,bool &,class TArrayView<int const ,int>)"
            ;
            FCycleCounter::Start
                      (&local_320,TVar32,Verbose|CycleStat|ClearEveryFrame,false,&local_298);
            if ((*(Type *)((longlong)local_390 + 0x578) == Succeeded) &&
               (bVar24 = CanCreateObjectClusters(), FVar35 = local_390, bVar24)) {
              iVar66 = *(int *)((longlong)local_390 + 0x240);
              uVar60 = *(int *)((longlong)local_390 + 0x48c);
              while ((int)uVar60 < iVar66) {
                *(uint *)((longlong)FVar35 + 0x48c) = uVar60 + 1;
                uVar67 = 0;
                if ((int)uVar60 < *(int *)((longlong)FVar35 + 0x240)) {
                  uVar67 = ~uVar60 >> 0x1f;
                }
                if ((uVar67 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar24)) {
                  pcVar15 = (code *)swi(3);
                  TVar26 = (*pcVar15)();
                  return TVar26;
                }
                pFVar61 = ((TArrayView<FExportObject,int> *)((longlong)FVar35 + 0x238))->DataPtr;
                if ((((pFVar61[(int)uVar60].bFiltered == false) &&
                     (pFVar61[(int)uVar60].bExportLoadFailed == false)) &&
                    (cVar22 = (**(code **)(*(longlong *)pFVar61[(int)uVar60].Object + 0x20))(),
                    cVar22 != '\0')) &&
                   (((**(code **)(*(longlong *)pFVar61[(int)uVar60].Object + 0x30))(),
                    *(int *)((longlong)FVar35 + 0x48c) < iVar66 &&
                    (bVar24 = FAsyncLoadingThreadState2::IsTimeLimitExceeded
                                        (param_1,L"CreateClusters",(UObject *)0x0), bVar24))))
                break;
                uVar60 = *(int *)((longlong)FVar35 + 0x48c);
              }
              if (*(int *)((longlong)FVar35 + 0x48c) == iVar66) goto LAB_142334297;
              local_370 = TimeOut;
            }
            else {
LAB_142334297:
              LOCK();
              *(atomic<EAsyncPackageLoadingState2> *)((longlong)local_390 + 0x494) =
                   (atomic<EAsyncPackageLoadingState2>)0x13;
              UNLOCK();
            }
            if ((local_320.EmittedEvent & 1) != 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if ((local_320.EmittedEvent & 2) != 0) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((local_320.EmittedEvent & 4) != 0) {
              FThreadStats::AddMessage(local_320.StatId,CycleScopeEnd);
            }
            local_320.EmittedEvent = '\0';
          }
          if (local_370 == TimeOut) {
            this = local_388;
            if (bVar23) {
              FCpuProfilerTrace::OutputEndEvent();
              this = local_388;
            }
            break;
          }
          if ((*(atomic<EAsyncPackageLoadingState2> *)((longlong)local_390 + 0x494) !=
               (atomic<EAsyncPackageLoadingState2>)0x13) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::Complete"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                  ,0x272f,L""), bVar24)) {
            pcVar15 = (code *)swi(3);
            TVar26 = (*pcVar15)();
            return TVar26;
          }
          FVar35 = local_390;
          if ((*(UPackage **)((longlong)local_390 + 0x450) != (UPackage *)0x0) &&
             (*(Type *)((longlong)local_390 + 0x578) == Succeeded)) {
            (*(UPackage **)((longlong)local_390 + 0x450))->bHasBeenFullyLoaded = '\x01';
            UObjectBaseUtility::SetFlags
                      ((UObjectBaseUtility *)*(UPackage **)((longlong)local_390 + 0x450),
                       RF_WasLoaded);
            UObjectBaseUtility::ClearFlags
                      ((UObjectBaseUtility *)*(UPackage **)((longlong)FVar35 + 0x450),
                       RF_WillBeLoaded);
            pUVar10 = *(UPackage **)((longlong)FVar35 + 0x450);
            dVar9 = *(double *)((longlong)FVar35 + 0x470);
            dVar16 = FWindowsPlatformTime::Seconds();
            pUVar10->LoadTime = (float)(dVar16 - dVar9);
          }
          pFVar53 = local_388;
          FVar35 = local_390;
          uVar60 = (uint)((FPackageId *)((longlong)local_390 + 0x200))->Id;
          SRWLock = (PSRWLOCK)
                    ((longlong)&local_388->FailedPackageRequestsCritical +
                    (ulonglong)(uVar60 & 0x1f) * 0x58 + 0x28);
          if ((SRWLock == (PSRWLOCK)0x0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                                  ,0x43,L""), bVar24)) {
            pcVar15 = (code *)swi(3);
            TVar26 = (*pcVar15)();
            return TVar26;
          }
          AcquireSRWLockExclusive(SRWLock);
          if (*(int *)&SRWLock[2].Ptr != *(int *)((longlong)&SRWLock[7].Ptr + 4)) {
            TSet<TTuple<FPackageId,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<FPackageId>
                      ((TSet<TTuple<FPackageId,FAsyncPackage2_*>,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FDefaultSetAllocator>
                        *)(SRWLock + 1),uVar60,(FPackageId *)((longlong)FVar35 + 0x200));
          }
          ReleaseSRWLockExclusive(SRWLock);
          FAsyncPackage2::ClearConstructedObjects((FAsyncPackage2 *)local_390);
          FVar35 = local_390;
          if ((*(bool *)((longlong)local_390 + 0x430) != false) &&
             (pFVar33 = TOptional<FAsyncPackage2::FLinkerLoadState>::operator->
                                  ((TOptional<FAsyncPackage2::FLinkerLoadState> *)
                                   ((longlong)local_390 + 0x3e0)),
             pFVar33->Linker != (FLinkerLoad *)0x0)) {
            pFVar33 = TOptional<FAsyncPackage2::FLinkerLoadState>::operator->
                                ((TOptional<FAsyncPackage2::FLinkerLoadState> *)
                                 ((longlong)FVar35 + 0x3e0));
            pFVar11 = pFVar33->Linker;
            iVar66 = (int)pFVar11->_padding_;
            lVar52 = pFVar11->_padding_;
            lVar64 = (longlong)iVar66 * 0x38 + lVar52;
            while( true ) {
              if ((int)pFVar11->_padding_ != iVar66) {
                local_377 = 0;
                `TCheckedPointerIterator<FObjectImport,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_377);
              }
              if (lVar52 == lVar64) break;
              *(undefined4 *)(lVar52 + 0x1c) = 0xffffffff;
              *(undefined8 *)(lVar52 + 0x28) = 0;
              *(undefined8 *)(lVar52 + 0x30) = 0;
              lVar52 = lVar52 + 0x38;
            }
            pFVar33 = TOptional<FAsyncPackage2::FLinkerLoadState>::operator->
                                ((TOptional<FAsyncPackage2::FLinkerLoadState> *)
                                 ((longlong)FVar35 + 0x3e0));
            if (((FName)pFVar33->Linker->AsyncRoot != FVar35) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("LinkerLoadState->Linker->AsyncRoot == this",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x1afa,L""), bVar24)) {
              pcVar15 = (code *)swi(3);
              TVar26 = (*pcVar15)();
              return TVar26;
            }
            pFVar33 = TOptional<FAsyncPackage2::FLinkerLoadState>::operator->
                                ((TOptional<FAsyncPackage2::FLinkerLoadState> *)
                                 ((longlong)FVar35 + 0x3e0));
            pFVar33->Linker->AsyncRoot = (void *)0x0;
            pFVar33 = TOptional<FAsyncPackage2::FLinkerLoadState>::operator->
                                ((TOptional<FAsyncPackage2::FLinkerLoadState> *)
                                 ((longlong)FVar35 + 0x3e0));
            pFVar33->Linker = (FLinkerLoad *)0x0;
          }
          lVar52 = (longlong)(int)local_328;
          pTVar65 = &pFVar53->LoadedPackagesToProcess;
          FVar46 = (ForElementType<FAsyncPackage2_*>)((longlong)local_358 + -1);
          uVar60 = local_328 - 1;
          iVar66 = 0;
          if ((int)local_328 < (pFVar53->LoadedPackagesToProcess).ArrayNum) {
            iVar66 = local_300._0_4_;
          }
          if ((iVar66 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar15 = (code *)swi(3);
            TVar26 = (*pcVar15)();
            return TVar26;
          }
          pFVar50 = (pTVar65->AllocatorInstance).Data + lVar52 * 8;
          iVar66 = local_360 + (pFVar53->LoadedPackagesToProcess).ArrayNum;
          if (iVar66 != 0) {
            memmove(pFVar50,pFVar50 + 8,(longlong)iVar66 << 3);
          }
          piVar5 = &(pFVar53->LoadedPackagesToProcess).ArrayNum;
          *piVar5 = *piVar5 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar65->AllocatorInstance,(pFVar53->LoadedPackagesToProcess).ArrayNum,
                     &(pFVar53->LoadedPackagesToProcess).ArrayMax);
          LOCK();
          pFVar53->LoadingPackagesCounter = (atomic<int>)((int)pFVar53->LoadingPackagesCounter + -1)
          ;
          UNLOCK();
          aVar40 = (atomic<__int64>)(longlong)(int)pFVar53->LoadingPackagesCounter;
          if (__GTraceCounterAsyncLoadingLoadingPackages.Value != aVar40) {
            LOCK();
            UNLOCK();
            __GTraceCounterAsyncLoadingLoadingPackages.Value = aVar40;
            if (-1 < CountersChannel->Enabled) {
              if (__GTraceCounterAsyncLoadingLoadingPackages.CounterId == (atomic<unsigned_int>)0x0)
              {
                uVar25 = FCountersTrace::OutputInitCounter
                                   (__GTraceCounterAsyncLoadingLoadingPackages.CounterName,
                                    TraceCounterType_Int,
                                    __GTraceCounterAsyncLoadingLoadingPackages.CounterFlags & 0xf);
                LOCK();
                if (__GTraceCounterAsyncLoadingLoadingPackages.CounterId ==
                    (atomic<unsigned_int>)0x0) {
                  __GTraceCounterAsyncLoadingLoadingPackages.CounterId._2_2_ = 0;
                  __GTraceCounterAsyncLoadingLoadingPackages.CounterId._0_2_ = uVar25;
                }
                UNLOCK();
              }
              FCountersTrace::OutputSetValue
                        (__GTraceCounterAsyncLoadingLoadingPackages.CounterId._0_2_,
                         (long64)__GTraceCounterAsyncLoadingLoadingPackages.Value);
            }
          }
          FVar34 = (ForElementType<FAsyncPackage2_*>)&local_128;
          if (local_128.SecondaryData != (ForElementType<FAsyncPackage2_*>)0x0) {
            FVar34 = local_128.SecondaryData;
          }
          if ((ulonglong)FVar34 <= &local_390) {
            FVar34 = (ForElementType<FAsyncPackage2_*>)&local_128;
            if (local_128.SecondaryData != (ForElementType<FAsyncPackage2_*>)0x0) {
              FVar34 = local_128.SecondaryData;
            }
            if ((&local_390 < (FName *)((longlong)FVar34 + (longlong)(int)local_fc * 8)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar24)) {
              pcVar15 = (code *)swi(3);
              TVar26 = (*pcVar15)();
              return TVar26;
            }
          }
          if (local_100 == local_fc) {
            local_100 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncPackage2_*>_>
                                  (0x808,&local_128,(int *)&local_fc);
          }
          FVar34 = (ForElementType<FAsyncPackage2_*>)&local_128;
          if (local_128.SecondaryData != (ForElementType<FAsyncPackage2_*>)0x0) {
            FVar34 = local_128.SecondaryData;
          }
          lVar52 = (longlong)(int)local_100;
          local_100 = local_100 + 1;
          *(FName *)((longlong)FVar34 + lVar52 * 8) = local_390;
          pFVar53 = local_388;
          aVar63 = local_368;
          param_1 = local_340;
          if (bVar23) {
            FCpuProfilerTrace::OutputEndEvent();
            pFVar53 = local_388;
            aVar63 = local_368;
            param_1 = local_340;
          }
        }
        local_328 = uVar60 + 1;
        local_358 = (ForElementType<FAsyncPackage2_*>)((longlong)FVar46 + 1);
        this = local_388;
      } while ((int)local_328 < (pFVar53->LoadedPackagesToProcess).ArrayNum);
    }
    pFVar45 = &this->FailedPackageRequestsCritical;
    if (pFVar45 == (FWindowsRecursiveMutex *)0x0) {
LAB_142335abd:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar45);
    aVar63 = (atomic<unsigned___int64>)&this->CompletedPackageRequests;
    pTVar57 = &this->FailedPackageRequests;
    local_368 = aVar63;
    if ((aVar63 == (atomic<unsigned___int64>)pTVar57) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar23)) {
      pcVar15 = (code *)swi(3);
      TVar26 = (*pcVar15)();
      return TVar26;
    }
    iVar66 = (this->FailedPackageRequests).ArrayNum;
    if (iVar66 != 0) {
      iVar27 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x88,8,iVar66,(ForAnyElementType *)aVar63,
                          &(this->CompletedPackageRequests).ArrayNum,
                          &(this->CompletedPackageRequests).ArrayMax);
      memmove((((TArray<FAsyncLoadingThread2::FCompletedPackageRequest,TSizedDefaultAllocator<32>_>
                 *)aVar63)->AllocatorInstance).Data + (longlong)iVar27 * 0x88,
              (pTVar57->AllocatorInstance).Data,(longlong)iVar66 * 0x88);
      (this->FailedPackageRequests).ArrayNum = 0;
    }
    piVar5 = &(this->FailedPackageRequests).ArrayMax;
    pFVar47 = (FCompletedPackageRequest *)(pTVar57->AllocatorInstance).Data;
    if ((this->FailedPackageRequests).ArrayMax < 0) {
      DestructItems<FAsyncLoadingThread2::FCompletedPackageRequest,int>(pFVar47,0);
      (this->FailedPackageRequests).ArrayNum = 0;
      if (*piVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,0,&pTVar57->AllocatorInstance,0,piVar5);
      }
    }
    else {
      DestructItems<FAsyncLoadingThread2::FCompletedPackageRequest,int>(pFVar47,0);
      (this->FailedPackageRequests).ArrayNum = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar45);
    uVar43 = (ulonglong)(int)local_100;
    local_360 = local_100;
    FVar46 = (ForElementType<FAsyncPackage2_*>)&local_128;
    if (local_128.SecondaryData != (ForElementType<FAsyncPackage2_*>)0x0) {
      FVar46 = local_128.SecondaryData;
    }
    local_300 = (ForElementType<FAsyncPackage2_*>)((longlong)FVar46 + uVar43 * 8);
    uVar58 = uVar43;
    while( true ) {
      FVar34 = local_300;
      iVar66 = 0;
      local_358 = FVar46;
      if ((int)uVar43 != (int)uVar58) {
        local_376 = 0;
        `TCheckedPointerIterator<FAsyncPackage2_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_376);
      }
      if (FVar46 == FVar34) break;
      pFVar12 = *(FAsyncPackage2 **)FVar46;
      if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
          GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
        FVar44 = (ForElementType<FSetElementId>)0x154ba3c98;
        if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
        {
          FVar44 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
        }
        iVar27 = *(int *)((longlong)FVar44 +
                         (ulonglong)
                         (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                         (uint)(pFVar12->Desc).UPackageId.Id) * 4);
        if (iVar27 != -1) {
          do {
            if (*(ulong64 *)
                 (GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar27 * 0x10) ==
                (pFVar12->Desc).UPackageId.Id) {
              bVar23 = FWindowsPlatformMisc::IsDebuggerPresent();
              if (bVar23) {
                pcVar15 = (code *)swi(3);
                TVar26 = (*pcVar15)();
                return TVar26;
              }
              break;
            }
            iVar27 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 +
                             (longlong)iVar27 * 0x10);
          } while (iVar27 != -1);
        }
      }
      if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_142334979:
        if (5 < (byte)LogStreaming._0_1_) {
          ::LexToString(&local_208,&(pFVar12->Desc).PackageIdToLoad);
          FVar35 = FPackagePath::GetPackageFName(&(pFVar12->Desc).PackagePathToLoad);
          ::FName::ToString((FName *)FVar35,&local_218);
          ::LexToString(&local_228,&(pFVar12->Desc).UPackageId);
          ::FName::ToString(&(pFVar12->Desc).UPackageName,&local_1e8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
        }
      }
      else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
              (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
               GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
        FVar44 = (ForElementType<FSetElementId>)0x154ba3ce8;
        if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar44 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
        }
        iVar27 = *(int *)((longlong)FVar44 +
                         (ulonglong)
                         (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                         (uint)(pFVar12->Desc).UPackageId.Id) * 4);
        if (iVar27 != -1) {
          do {
            if (*(ulong64 *)
                 (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar27 * 0x10) ==
                (pFVar12->Desc).UPackageId.Id) goto LAB_142334979;
            iVar27 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                             (longlong)iVar27 * 0x10);
          } while (iVar27 != -1);
        }
      }
      if ((pFVar12->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0x13) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::Complete"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x2765,L""), bVar23)) {
        pcVar15 = (code *)swi(3);
        TVar26 = (*pcVar15)();
        return TVar26;
      }
      LOCK();
      pFVar12->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x14;
      UNLOCK();
      bVar23 = -1 < CpuChannel->Enabled;
      if (bVar23) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId11137,"ClearImportedPackages",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x2b81);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11137);
      }
      ppFVar54 = (pFVar12->Data).ImportedAsyncPackages.DataPtr;
      uStack_1b8 = *(undefined8 *)&(pFVar12->Data).ImportedAsyncPackages.ArrayNum;
      local_250 = (pFVar12->Data).ImportedAsyncPackages.DataPtr;
      uStack_248 = 0;
      (pFVar12->Data).ImportedAsyncPackages.DataPtr = local_250;
      *(ulonglong *)&(pFVar12->Data).ImportedAsyncPackages.ArrayNum = (ulonglong)uStack_244 << 0x20;
      ppFVar51 = ppFVar54 + (int)uStack_1b8;
      local_1c0 = ppFVar54;
      for (; ppFVar54 != ppFVar51; ppFVar54 = ppFVar54 + 1) {
        if (*ppFVar54 != (FAsyncPackage2 *)0x0) {
          FAsyncPackage2::Release(*ppFVar54);
        }
      }
      if (bVar23) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((pFVar12->CompletionCallbacks).ArrayNum == 0) &&
         ((pFVar12->ProgressCallbacks).ArrayNum == 0)) {
        iVar27 = (pFVar12->RequestIDs).ArrayNum;
        pFVar50 = (pFVar12->RequestIDs).AllocatorInstance.Data;
        if ((iVar27 < 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar23)) {
          pcVar15 = (code *)swi(3);
          TVar26 = (*pcVar15)();
          return TVar26;
        }
        pFVar45 = &local_388->PendingRequestsCritical;
        if (pFVar45 == (FWindowsRecursiveMutex *)0x0) goto LAB_142335abd;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar45);
        pFVar20 = local_388;
        pFVar4 = pFVar50 + (longlong)iVar27 * 4;
        pFVar53 = local_388;
        for (; local_388 = pFVar53, pFVar50 != pFVar4; pFVar50 = pFVar50 + 4) {
          local_2f8[0] = *(uint *)pFVar50;
          uVar55 = (ulong64)(int)local_2f8[0];
          if (*(int *)&(pFVar20->PendingRequests).Elements.field_0x8 ==
              *(int *)&(pFVar20->PendingRequests).Elements.field_0x34) {
            iVar27 = 0;
          }
          else {
            iVar27 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                               (&pFVar20->PendingRequests,local_2f8[0],(int *)local_2f8);
          }
          iVar66 = iVar66 + iVar27;
          FLoadTimeProfilerTracePrivate::OutputEndRequest(uVar55);
          aVar63 = local_368;
          pFVar53 = local_388;
        }
        if (*(int *)&(pFVar53->PendingRequests).Elements.field_0x8 ==
            *(int *)&(pFVar53->PendingRequests).Elements.field_0x34) {
          pTVar56 = &pFVar53->PendingRequests;
          for (lVar52 = 0x3f; 0x20fUL >> lVar52 == 0; lVar52 = lVar52 + -1) {
          }
          iVar48 = 1 << ((byte)lVar52 & 0x1f);
          local_2d8 = (undefined4)lVar52;
          iVar27 = (pFVar53->PendingRequests).HashSize;
          if ((iVar27 < iVar48) || (iVar48 < iVar27)) {
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty(&pTVar56->Elements,0x200);
            (pFVar53->PendingRequests).HashSize = iVar48;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar56);
          }
          else {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(pTVar56);
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty(&pTVar56->Elements,0x200);
          }
        }
        pFVar53 = local_388;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar45);
        if (0 < iVar66) {
          if (local_340->bIsAsyncLoadingThread == false) {
            if (pFVar53->bThreadStarted != (atomic<bool>)0x0) {
              FZenaphore::NotifyOne(&pFVar53->AltZenaphore);
            }
          }
          else {
            pFVar2 = &pFVar53->MainThreadWakeEvent;
            LOCK();
            aVar6 = pFVar2->State;
            pFVar2->State = (atomic<unsigned_char>)0x1;
            UNLOCK();
            if (((byte)aVar6 & 3) == 2) {
              UE::ParkingLot::WakeAll(pFVar2);
              FAsyncPackage2::Release(pFVar12);
              goto LAB_14233517e;
            }
          }
        }
        FAsyncPackage2::Release(pFVar12);
      }
      else {
        local_1b0 = (pFVar12->Desc).UPackageName;
        local_1a8 = pFVar12->LoadStatus;
        local_1a0 = pFVar12->LinkerRoot;
        local_180 = (pFVar12->CompletionCallbacks).AllocatorInstance.SecondaryData;
        if (local_180 ==
            (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
             )0x0) {
          local_190.Ptr =
               *(TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                 **)(pFVar12->CompletionCallbacks).AllocatorInstance.InlineData;
          auStack_188 = *(uchar (*) [8])
                         ((pFVar12->CompletionCallbacks).AllocatorInstance.InlineData + 8);
        }
        (pFVar12->CompletionCallbacks).AllocatorInstance.SecondaryData =
             (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
              )0x0;
        local_178 = (pFVar12->CompletionCallbacks).ArrayNum;
        local_174 = (pFVar12->CompletionCallbacks).ArrayMax;
        (pFVar12->CompletionCallbacks).ArrayMax = 2;
        (pFVar12->CompletionCallbacks).ArrayNum = 0;
        local_150 = (pFVar12->ProgressCallbacks).AllocatorInstance.SecondaryData;
        if (local_150 == (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
          local_170.Object =
               *(FLoadPackageAsyncProgressDelegate **)
                (pFVar12->ProgressCallbacks).AllocatorInstance.InlineData;
          local_170.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)
                ((pFVar12->ProgressCallbacks).AllocatorInstance.InlineData + 8);
          _local_160 = *(undefined8 *)
                        ((pFVar12->ProgressCallbacks).AllocatorInstance.InlineData + 0x10);
          auStack_158 = *(uchar (*) [8])
                         ((pFVar12->ProgressCallbacks).AllocatorInstance.InlineData + 0x18);
        }
        (pFVar12->ProgressCallbacks).AllocatorInstance.SecondaryData =
             (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0;
        local_148 = (pFVar12->ProgressCallbacks).ArrayNum;
        local_144 = (pFVar12->ProgressCallbacks).ArrayMax;
        (pFVar12->ProgressCallbacks).ArrayNum = 0;
        (pFVar12->ProgressCallbacks).ArrayMax = 2;
        local_140.SecondaryData = (ForElementType<int>)0x0;
        local_130 = 0;
        local_12c = 2;
        local_198 = pFVar12;
        if (((TArray<int,TSizedDefaultAllocator<32>_> *)&local_140 == &pFVar12->RequestIDs) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar23)) {
          pcVar15 = (code *)swi(3);
          TVar26 = (*pcVar15)();
          return TVar26;
        }
        iVar66 = (pFVar12->RequestIDs).ArrayNum;
        if (iVar66 != 0) {
          iVar27 = UE::Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (4,4,iVar66,&local_140,&local_130,&local_12c);
          FVar37 = (ForElementType<int>)&local_140;
          if (local_140.SecondaryData != (ForElementType<int>)0x0) {
            FVar37 = local_140.SecondaryData;
          }
          memcpy((void *)((longlong)FVar37 + (longlong)iVar27 * 4),
                 (pFVar12->RequestIDs).AllocatorInstance.Data,(longlong)iVar66 << 2);
        }
        local_f8._0_4_ = local_1b0.ComparisonIndex.Value;
        local_f8._4_4_ = local_1b0.Number;
        local_f8[8] = local_1a8;
        local_f8._16_8_ = local_1a0;
        local_f8._24_8_ = local_198;
        if (local_180 ==
            (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
             )0x0) {
          local_f8._32_8_ = local_190.Ptr;
          auStack_d0[0] = auStack_188[0];
          auStack_d0[1] = auStack_188[1];
          auStack_d0[2] = auStack_188[2];
          auStack_d0[3] = auStack_188[3];
          auStack_d0[4] = auStack_188[4];
          auStack_d0[5] = auStack_188[5];
          auStack_d0[6] = auStack_188[6];
          auStack_d0[7] = auStack_188[7];
        }
        local_c8 = local_180;
        local_c0 = local_178;
        local_bc = local_174;
        local_174 = 2;
        local_180 = (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                     )0x0;
        local_178 = 0;
        if (local_150 == (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
          local_b8 = (uchar  [8])local_170.Object;
          FStack_b0 = (ForElementType<int>)local_170.SharedReferenceCount.ReferenceController;
          local_a8 = local_160;
          iStack_a4 = iStack_15c;
          auStack_a0[0] = auStack_158[0];
          auStack_a0[1] = auStack_158[1];
          auStack_a0[2] = auStack_158[2];
          auStack_a0[3] = auStack_158[3];
          auStack_a0[4] = auStack_158[4];
          auStack_a0[5] = auStack_158[5];
          auStack_a0[6] = auStack_158[6];
          auStack_a0[7] = auStack_158[7];
        }
        local_98 = local_150;
        local_90 = local_148;
        local_8c = local_144;
        local_144 = 2;
        local_150 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0;
        local_148 = 0;
        if (local_140.SecondaryData == (ForElementType<int>)0x0) {
          local_88[0] = local_140.InlineData[0];
          local_88[1] = local_140.InlineData[1];
          local_88[2] = local_140.InlineData[2];
          local_88[3] = local_140.InlineData[3];
          local_88[4] = local_140.InlineData[4];
          local_88[5] = local_140.InlineData[5];
          local_88[6] = local_140.InlineData[6];
          local_88[7] = local_140.InlineData[7];
        }
        local_80 = local_140.SecondaryData;
        local_78 = local_130;
        local_74 = local_12c;
        local_12c = 2;
        local_140.SecondaryData = (ForElementType<int>)0x0;
        local_130 = 0;
        DestructItems<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int>(&local_170,0);
        if (local_150 != (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
          FMemory::Free((void *)local_150);
        }
        FVar39 = (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                  )&local_190;
        if (local_180 !=
            (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
             )0x0) {
          FVar39 = local_180;
        }
        DestructItems<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>,int>
                  ((TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
                    *)FVar39,local_178);
        if (local_180 !=
            (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
             )0x0) {
          FMemory::Free((void *)local_180);
        }
        if (((*(undefined1 **)aVar63 <= local_f8) &&
            (local_f8 < *(undefined1 **)aVar63 + (longlong)*(int *)((longlong)aVar63 + 0xc) * 0x88))
           && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar23)) {
          pcVar15 = (code *)swi(3);
          TVar26 = (*pcVar15)();
          return TVar26;
        }
        iVar66 = *(int *)((longlong)aVar63 + 8);
        if (iVar66 == *(int *)((longlong)aVar63 + 0xc)) {
          iVar66 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x888,(ForAnyElementType *)aVar63,(int *)((longlong)aVar63 + 0xc));
        }
        *(int *)((longlong)aVar63 + 8) = iVar66 + 1;
        FCompletedPackageRequest::FCompletedPackageRequest
                  ((FCompletedPackageRequest *)((longlong)iVar66 * 0x88 + *(longlong *)aVar63),
                   (FCompletedPackageRequest *)local_f8);
        if (local_80 != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_80);
        }
        FVar38 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)local_b8;
        if (local_98 != (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
          FVar38 = local_98;
        }
        DestructItems<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int>
                  ((TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *)FVar38,local_90);
        if (local_98 != (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
          FMemory::Free((void *)local_98);
        }
        FVar39 = (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                  )((longlong)local_f8 + 0x20);
        if (local_c8 !=
            (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
             )0x0) {
          FVar39 = local_c8;
        }
        DestructItems<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>,int>
                  ((TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
                    *)FVar39,local_c0);
        if (local_c8 !=
            (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
             )0x0) {
          FMemory::Free((void *)local_c8);
        }
      }
LAB_14233517e:
      uVar43 = (ulonglong)local_100;
      FVar46 = (ForElementType<FAsyncPackage2_*>)((longlong)local_358 + 8);
      uVar58 = (ulonglong)local_360;
    }
    local_100 = 0;
    if (((int)local_fc < 0) && (local_fc != 0)) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncPackage2_*>_>
                (8,8,0,&local_128,0,(int *)&local_fc);
    }
    local_350.Data = (FScriptContainerElement *)0x0;
    local_348 = (uint  [2])0x0;
    uVar60 = (local_388->CompletedPackageRequests).ArrayNum - 1;
    this = local_388;
    if (-1 < (int)uVar60) {
      pTVar57 = &local_388->CompletedPackageRequests;
      FVar46 = (ForElementType<FAsyncPackage2_*>)((longlong)(int)uVar60 * 0x88);
      do {
        uVar67 = 0;
        uVar28 = uVar67;
        if ((int)uVar60 < pTVar57->ArrayNum) {
          uVar28 = ~uVar60 >> 0x1f;
        }
        local_358 = FVar46;
        if ((uVar28 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar15 = (code *)swi(3);
          TVar26 = (*pcVar15)();
          return TVar26;
        }
        aVar63 = (atomic<unsigned___int64>)((pTVar57->AllocatorInstance).Data + (longlong)FVar46);
        local_368 = aVar63;
        if (local_2e0->ArrayNum == 0) {
LAB_1423352c2:
          pTVar41 = *(TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> **)
                     &((ForElementType<int> *)((longlong)aVar63 + 0x78))->field_0x0;
          iVar66 = *(int *)((longlong)aVar63 + 0x80);
          pTVar36 = (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                    ((longlong)aVar63 + 0x70);
          if (pTVar41 != (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)0x0
             ) {
            pTVar36 = pTVar41;
          }
          if ((iVar66 < 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar23)) {
            pcVar15 = (code *)swi(3);
            TVar26 = (*pcVar15)();
            return TVar26;
          }
          pFVar45 = &this->PendingRequestsCritical;
          if (pFVar45 == (FWindowsRecursiveMutex *)0x0) goto LAB_142335abd;
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar45);
          pFVar20 = local_388;
          pFVar18 = &pTVar36->AllocatorInstance;
          pFVar53 = local_388;
          for (; local_388 = pFVar53,
              pTVar36 !=
              (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
              (pFVar18->InlineData + (longlong)iVar66 * 4);
              pTVar36 = (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                        ((pTVar36->AllocatorInstance).InlineData + 4)) {
            local_2f0[0] = *(uint *)(pTVar36->AllocatorInstance).InlineData;
            uVar55 = (ulong64)(int)local_2f0[0];
            if (*(int *)&(pFVar20->PendingRequests).Elements.field_0x8 ==
                *(int *)&(pFVar20->PendingRequests).Elements.field_0x34) {
              iVar27 = 0;
            }
            else {
              iVar27 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                                 (&pFVar20->PendingRequests,local_2f0[0],(int *)local_2f0);
            }
            uVar67 = uVar67 + iVar27;
            FLoadTimeProfilerTracePrivate::OutputEndRequest(uVar55);
            aVar63 = local_368;
            pFVar53 = local_388;
          }
          if (*(int *)&(pFVar53->PendingRequests).Elements.field_0x8 ==
              *(int *)&(pFVar53->PendingRequests).Elements.field_0x34) {
            pTVar56 = &pFVar53->PendingRequests;
            for (lVar52 = 0x3f; 0x20fUL >> lVar52 == 0; lVar52 = lVar52 + -1) {
            }
            iVar27 = 1 << ((byte)lVar52 & 0x1f);
            local_2d4 = (undefined4)lVar52;
            iVar66 = (pFVar53->PendingRequests).HashSize;
            if ((iVar66 < iVar27) || (iVar27 < iVar66)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(pTVar56);
            }
            puVar1 = &(pFVar53->PendingRequests).Elements.field_0xc;
            iVar66 = *(int *)puVar1;
            *(undefined4 *)&(pFVar53->PendingRequests).Elements.field_0x8 = 0;
            if (iVar66 != 0x200) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0x200,(ForAnyElementType *)pTVar56,0,(int *)puVar1);
            }
            *(undefined4 *)&(pFVar53->PendingRequests).Elements.field_0x34 = 0;
            *(undefined4 *)&(pFVar53->PendingRequests).Elements.field_0x28 = 0;
            *(undefined4 *)&(pFVar53->PendingRequests).Elements.field_0x30 = 0xffffffff;
            *(undefined4 *)&(pFVar53->PendingRequests).Elements.field_0x2c = 0x200;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)
                       &(pFVar53->PendingRequests).Elements.field_0x10,0);
            if (bVar23) {
              (pFVar53->PendingRequests).HashSize = iVar27;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar56);
            }
          }
          this = local_388;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar45);
          if (0 < (int)uVar67) {
            if (local_340->bIsAsyncLoadingThread == false) {
              if (this->bThreadStarted != (atomic<bool>)0x0) {
                FZenaphore::NotifyOne(&this->AltZenaphore);
              }
            }
            else {
              pFVar2 = &this->MainThreadWakeEvent;
              LOCK();
              aVar6 = pFVar2->State;
              pFVar2->State = (atomic<unsigned_char>)0x1;
              UNLOCK();
              if (((byte)aVar6 & 3) == 2) {
                UE::ParkingLot::WakeAll(pFVar2);
              }
            }
          }
          uVar67 = local_348[0];
          if (local_348[0] == local_348[1]) {
            uVar67 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x888,&local_350,(int *)(local_348 + 1));
          }
          local_348[0] = uVar67 + 1;
          FCompletedPackageRequest::FCompletedPackageRequest
                    ((FCompletedPackageRequest *)(local_350.Data + (longlong)(int)uVar67 * 0x88),
                     (FCompletedPackageRequest *)aVar63);
          pTVar57 = &this->CompletedPackageRequests;
          uVar67 = 0;
          if ((int)uVar60 < (this->CompletedPackageRequests).ArrayNum) {
            uVar67 = ~uVar60 >> 0x1f;
          }
          if ((uVar67 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar15 = (code *)swi(3);
            TVar26 = (*pcVar15)();
            return TVar26;
          }
          pFVar47 = (FCompletedPackageRequest *)
                    ((pTVar57->AllocatorInstance).Data + (ulonglong)uVar60 * 0x88);
          FCompletedPackageRequest::~FCompletedPackageRequest(pFVar47);
          iVar66 = (this->CompletedPackageRequests).ArrayNum + ~uVar60;
          if (iVar66 != 0) {
            memmove(pFVar47,pFVar47 + 1,(longlong)iVar66 * 0x88);
          }
          iVar66 = (this->CompletedPackageRequests).ArrayNum + -1;
          (this->CompletedPackageRequests).ArrayNum = iVar66;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x88,8,&pTVar57->AllocatorInstance,iVar66,
                     &(this->CompletedPackageRequests).ArrayMax);
          local_397 = true;
        }
        else {
          piVar59 = local_2e0->DataPtr;
          piVar5 = piVar59 + local_2e0->ArrayNum;
          if (piVar59 != piVar5) {
            pTVar41 = *(TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> **)
                       &((ForElementType<int> *)((longlong)aVar63 + 0x78))->field_0x0;
            do {
              pTVar36 = (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                        ((longlong)aVar63 + 0x70);
              if (pTVar41 !=
                  (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
                pTVar36 = pTVar41;
              }
              pFVar18 = &pTVar36->AllocatorInstance;
              for (; pTVar36 !=
                     (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                     (pFVar18->InlineData + (longlong)*(int *)((longlong)aVar63 + 0x80) * 4);
                  pTVar36 = (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                            ((pTVar36->AllocatorInstance).InlineData + 4)) {
                if (*(int *)(pTVar36->AllocatorInstance).InlineData == *piVar59) goto LAB_1423352c2;
              }
              piVar59 = piVar59 + 1;
            } while (piVar59 != piVar5);
          }
        }
        FVar46 = (ForElementType<FAsyncPackage2_*>)((longlong)local_358 + -0x88);
        uVar60 = uVar60 - 1;
      } while (-1 < (int)uVar60);
    }
    uVar43 = (ulonglong)(int)local_348[0];
    local_360 = local_348[0];
    aVar63 = (atomic<unsigned___int64>)(local_350.Data + 0x38);
    local_358 = (ForElementType<FAsyncPackage2_*>)(uVar43 * 0x88 + (longlong)local_350.Data);
    while( true ) {
      FVar46 = local_358;
      local_368 = aVar63;
      if (local_348[0] != (uint)uVar43) {
        local_375 = 0;
        `TCheckedPointerIterator<FAsyncLoadingThread2::FCompletedPackageRequest,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_375);
      }
      if ((ForElementType<FAsyncPackage2_*>)
          ((longlong)
           (((FCompletedPackageRequest *)((longlong)aVar63 + -0x88))->ProgressCallbacks).
           AllocatorInstance.InlineData + 0x10) == FVar46) break;
      aVar40 = (atomic<__int64>)
               (longlong)
               (int)(this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter;
      if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value != aVar40) {
        LOCK();
        UNLOCK();
        __GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value = aVar40;
        if (-1 < CountersChannel->Enabled) {
          if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
              (atomic<unsigned_int>)0x0) {
            uVar25 = FCountersTrace::OutputInitCounter
                               (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterName,
                                TraceCounterType_Int,
                                __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterFlags &
                                0xf);
            LOCK();
            if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
                (atomic<unsigned_int>)0x0) {
              __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._2_2_ = 0;
              __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_ = uVar25;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_,
                     (long64)__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value);
        }
      }
      if (*(int *)aVar63 != 0) {
        bVar23 = -1 < CpuChannel->Enabled;
        if (bVar23) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`public:_void___cdecl_FAsyncLoadingThread2::FCompletedPackageRequest::CallCompletionCallbacks(void)___ptr64'
                      ::__l6::__CpuProfilerEventSpecId4248,"PackageCompletionCallbacks",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                     ,0x1098);
          FCpuProfilerTrace::OutputBeginEvent
                    (`public:_void___cdecl_FAsyncLoadingThread2::FCompletedPackageRequest::CallCompletionCallbacks(void)___ptr64'
                     ::__l6::__CpuProfilerEventSpecId4248);
        }
        pTVar41 = *(TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> **)
                   &(((FCompletedPackageRequest *)((longlong)aVar63 + -0x88))->RequestIDs).ArrayNum;
        iVar66 = *(int *)aVar63;
        if (pTVar41 == (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)0x0)
        {
          pTVar41 = &((FCompletedPackageRequest *)((longlong)aVar63 + -0x88))->RequestIDs;
        }
        pFVar18 = &pTVar41->AllocatorInstance;
        aVar69 = aVar63;
        while( true ) {
          if (*(int *)aVar63 != iVar66) {
            local_374 = 0;
            `TCheckedPointerIterator<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_374);
          }
          if (pTVar41 ==
              (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
              (pFVar18->InlineData + (longlong)iVar66 * 8)) break;
          this_01 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)
                     (pTVar41->AllocatorInstance).InlineData;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    (this_01,&local_1d8);
          if ((*(int *)&this_01[2].AccessDetector.State != 0) &&
             (aVar69 = this_01[1].AccessDetector.State, aVar69 != (atomic<unsigned___int64>)0x0)) {
            (**(code **)(*(longlong *)aVar69 + 0x68))
                      (aVar69,(((FCompletedPackageRequest *)((longlong)local_368 + -0x88))->
                              ProgressCallbacks).AllocatorInstance.InlineData + 0x10);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_1d8);
          pTVar41 = (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                    &(pTVar41->AllocatorInstance).SecondaryData;
          aVar69 = local_368;
        }
        pTVar41 = *(TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> **)
                   &(((FCompletedPackageRequest *)((longlong)aVar69 + -0x88))->RequestIDs).ArrayNum;
        if (pTVar41 == (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)0x0)
        {
          pTVar41 = &((FCompletedPackageRequest *)((longlong)aVar69 + -0x88))->RequestIDs;
        }
        DestructItems<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>,int>
                  ((TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
                    *)pTVar41,*(int *)aVar69);
        *(int *)aVar69 = 0;
        if (*(uint *)((longlong)aVar69 + 4) != 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>_>
                    (8,8,0,(ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                            *)&((FCompletedPackageRequest *)((longlong)aVar69 + -0x88))->RequestIDs,
                     0,(int *)((longlong)aVar69 + 4));
        }
        aVar63 = aVar69;
        if (bVar23) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      uVar60 = 0;
      if (*(int *)&((ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                     *)((longlong)aVar63 + 0x30))->field_0x0 != 0) {
        bVar23 = -1 < CpuChannel->Enabled;
        if (bVar23) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`public:_void___cdecl_FAsyncLoadingThread2::FCompletedPackageRequest::CallCompletionCallbacks(void)___ptr64'
                      ::__l13::__CpuProfilerEventSpecId4258,"PackageProgressCallbacks_Completion",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                     ,0x10a2);
          FCpuProfilerTrace::OutputBeginEvent
                    (`public:_void___cdecl_FAsyncLoadingThread2::FCompletedPackageRequest::CallCompletionCallbacks(void)___ptr64'
                     ::__l13::__CpuProfilerEventSpecId4258);
        }
        ppFVar51 = *(FAsyncPackage2 ***)((longlong)aVar63 + 0x28);
        if ((((FCompletedPackageRequest *)((longlong)aVar63 + -0x88))->ProgressCallbacks).
            AllocatorInstance.InlineData[0x18] == '\x04') {
          uVar60 = 4;
        }
        iVar66 = *(int *)&((ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                            *)((longlong)aVar63 + 0x30))->field_0x0;
        if (ppFVar51 == (FAsyncPackage2 **)0x0) {
          ppFVar51 = (FAsyncPackage2 **)((longlong)aVar63 + 8);
        }
        ppFVar54 = ppFVar51 + (longlong)iVar66 * 2;
        while( true ) {
          if (*(int *)&((ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                         *)((longlong)aVar63 + 0x30))->field_0x0 != iVar66) {
            local_373[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_373);
          }
          if (ppFVar51 == ppFVar54) break;
          local_278 = *(FScriptContainerElement **)
                       ((((FCompletedPackageRequest *)((longlong)aVar63 + -0x88))->ProgressCallbacks
                        ).AllocatorInstance.InlineData + 0x10);
          local_270 = (((FCompletedPackageRequest *)((longlong)aVar63 + -0x88))->ProgressCallbacks).
                      AllocatorInstance.SecondaryData;
          local_268 = uVar60;
          if ((*ppFVar51 == (FAsyncPackage2 *)0x0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar24)) {
            pcVar15 = (code *)swi(3);
            TVar26 = (*pcVar15)();
            return TVar26;
          }
          pFVar12 = *ppFVar51;
          if ((*(uint *)((longlong)pFVar12->PackageNodesMemory + 0x28) >> (local_268 & 0x1f) & 1) !=
              0) {
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar12);
            if ((*(int *)((longlong)pFVar12->PackageNodesMemory + 0x20) != 0) &&
               (plVar13 = *(longlong **)((longlong)pFVar12->PackageNodesMemory + 0x18),
               plVar13 != (longlong *)0x0)) {
              (**(code **)(*plVar13 + 0x68))(plVar13,&local_278);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar12);
          }
          ppFVar51 = ppFVar51 + 2;
        }
        pTVar42 = *(TSharedPtr<FLoadPackageAsyncProgressDelegate,1> **)((longlong)aVar63 + 0x28);
        if (pTVar42 == (TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *)0x0) {
          pTVar42 = (TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *)((longlong)aVar63 + 8);
        }
        DestructItems<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int>
                  (pTVar42,*(int *)&((ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                                      *)((longlong)aVar63 + 0x30))->field_0x0);
        *(int *)&((ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                   *)((longlong)aVar63 + 0x30))->field_0x0 = 0;
        if (*(int *)((longlong)aVar63 + 0x34) != 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>_>
                    (0x10,8,0,(ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> *)
                              ((longlong)aVar63 + 8),0,(int *)((longlong)aVar63 + 0x34));
        }
        if (bVar23) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      this = local_388;
      pFVar12 = *(FAsyncPackage2 **)
                 &(((FCompletedPackageRequest *)((longlong)aVar63 + -0x88))->ProgressCallbacks).
                  ArrayNum;
      if (pFVar12 == (FAsyncPackage2 *)0x0) {
        LOCK();
        paVar3 = &(local_388->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter;
        aVar8 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if ((aVar8 == (atomic<int>)0x1) &&
           (paVar14 = &((local_388->PackagesWithRemainingWorkCounter).WakeEvent)->State,
           paVar14 != (atomic<unsigned_char> *)0x0)) {
          LOCK();
          FVar7.State = *paVar14;
          *paVar14 = (atomic<unsigned_char>)0x1;
          UNLOCK();
          if (((byte)FVar7.State & 3) == 2) {
            UE::ParkingLot::WakeAll(paVar14);
          }
        }
        aVar63 = (atomic<unsigned___int64>)((longlong)aVar63 + 0x88);
        uVar43 = (ulonglong)local_360;
      }
      else {
        FAsyncPackage2::Release(pFVar12);
        uVar43 = (ulonglong)local_360;
        aVar63 = (atomic<unsigned___int64>)((longlong)aVar63 + 0x88);
        this = local_388;
      }
    }
    if (local_397 == false) goto LAB_142335a39;
    iVar66 = local_2e0->ArrayNum;
    *local_2c0 = true;
    if (iVar66 != 0) {
      local_1f8.DataPtr._0_4_ = *(undefined4 *)&local_2e0->DataPtr;
      local_1f8.DataPtr._4_4_ = *(undefined4 *)((longlong)&local_2e0->DataPtr + 4);
      local_1f8.ArrayNum = local_2e0->ArrayNum;
      local_1f8._12_4_ = *(undefined4 *)&local_2e0->field_0xc;
      pFVar45 = &this->PendingRequestsCritical;
      if (pFVar45 == (FWindowsRecursiveMutex *)0x0) goto LAB_142335abd;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar45);
      bVar23 = Algo::
               NoneOf<TArrayView<int_const_,int>,_FAsyncLoadingThread2::ContainsAnyRequestID_::__l2::<lambda_1>_>
                         (&local_1f8,(<lambda_1>)this);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar45);
      if (bVar23) {
LAB_142335a39:
        DestructItems<FAsyncLoadingThread2::FCompletedPackageRequest,int>
                  ((FCompletedPackageRequest *)local_350.Data,local_348[0]);
        TVar26 = local_370;
        if ((FCompletedPackageRequest *)local_350.Data != (FCompletedPackageRequest *)0x0) {
          FMemory::Free(local_350.Data);
          TVar26 = local_370;
        }
LAB_142335a56:
        if (local_128.SecondaryData != (ForElementType<FAsyncPackage2_*>)0x0) {
          FMemory::Free((void *)local_128.SecondaryData);
        }
        return TVar26;
      }
    }
    DestructItems<FAsyncLoadingThread2::FCompletedPackageRequest,int>
              ((FCompletedPackageRequest *)local_350.Data,local_348[0]);
    if ((FCompletedPackageRequest *)local_350.Data != (FCompletedPackageRequest *)0x0) {
      FMemory::Free(local_350.Data);
    }
    pFVar68 = &this->MainThreadEventQueue;
    param_1 = local_340;
  } while( true );
}

// ProcessLoading @ 142335ad0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread2::ProcessLoading
          (FAsyncLoadingThread2 *this,bool param_1,bool param_2,double param_3)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  FAsyncLoadingThreadState2 *pFVar4;
  
  if (FAsyncLoadingThreadState2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0xc89,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
  pFVar4 = TlsGetValue(FAsyncLoadingThreadState2::TlsSlot);
  TVar3 = ProcessLoadingFromGameThread
                    ((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,pFVar4,param_1,
                     param_2,param_3);
  return TVar3;
}

// ProcessLoadingFromGameThread @ 142335b70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread2::ProcessLoadingFromGameThread
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,bool param_2,bool param_3,
          double param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_AsyncLoadingTime> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FNameEntryId FVar9;
  FName FVar10;
  Type TVar11;
  LARGE_INTEGER local_res8;
  FAsyncLoadingThreadState2 *local_res10;
  undefined1 local_58 [12];
  uint uStack_4c;
  FName local_48;
  
  FVar8.Value = 0;
  FVar6 = StatPtr_STAT_AsyncLoadingTime;
  local_res10 = param_1;
  if (StatPtr_STAT_AsyncLoadingTime == (FThreadSafeStaticStat<FStat_STAT_AsyncLoadingTime>)0x0) {
    pFVar5 = ::FName::FName((FName *)local_58,"STAT_AsyncLoadingTime");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_AsyncLoadingTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncLoadingTime,*pFVar5,
                       L"Async Loading Time","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",
                       false,true,ST_int64,true,false,MCR_Invalid);
  }
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar7 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x2d98);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar7;
      local_48 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar8.Value = local_48.ComparisonIndex.Value;
      goto LAB_142335cdb;
    }
  }
  bVar3 = false;
  FVar10 = local_48;
LAB_142335cdb:
  if (__CsvProfilerStat11673 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("AsyncLoading");
    __CsvProfilerStat11673 = true;
  }
  FCsvProfiler::BeginExclusiveStat("AsyncLoading","CSV_AsyncLoading");
  if (__CsvProfilerStat11676 == false) {
    FCsvProfilerTrace::OutputInlineStat("QueuedPackagesQueueDepth",_GCsvCategory_FileIO.Index);
    __CsvProfilerStat11676 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("QueuedPackagesQueueDepth",_GCsvCategory_FileIO.Index,(int)this->QueuedPackagesCounter,
             Set);
  FCsvProfiler::RecordCustomStatMinimal
            ("ExistingQueuedPackagesQueueDepth",_GCsvCategory_FileIO.Index,
             (int)this->LoadingPackagesCounter,Set);
  stack0xffffffffffffffb0 = (FStatNameAndInfo)((ulonglong)uStack_4c << 0x20);
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_res8.s.LowPart = local_res8.s.LowPart & 0xffffff00;
  TickAsyncLoadingFromGameThread
            (this,local_res10,param_2,param_3,param_4,(TArrayView<int_const_,int> *)local_58,
             (bool *)&local_res8);
  TVar11 = Complete;
  if ((this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter != (atomic<int>)0x0)
  {
    TVar11 = TimeOut;
  }
  FCsvProfiler::EndExclusiveStat("AsyncLoading");
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      stack0xffffffffffffffb0 =
           (FStatNameAndInfo)
           (CONCAT44(FVar10.Number,FVar8.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_58._4_4_ = 0;
      local_58._0_4_ = local_res8.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return TVar11;
}

// ProcessLoadingUntilComplete @ 142335ee0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread2::ProcessLoadingUntilComplete
          (FAsyncLoadingThread2 *this,TFunctionRef<bool___cdecl(void)> *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  FAsyncLoadingThreadState2 *pFVar4;
  TFunctionRef<bool___cdecl(void)> local_28 [2];
  
  if (FAsyncLoadingThreadState2::TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0xc89,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
  pFVar4 = TlsGetValue(FAsyncLoadingThreadState2::TlsSlot);
  local_28[0]._0_8_ = *(undefined8 *)param_1;
  local_28[0]._8_8_ = *(undefined8 *)&param_1->field_0x8;
  TVar3 = ProcessLoadingUntilCompleteFromGameThread
                    ((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,pFVar4,local_28,
                     param_2);
  return TVar3;
}

// ProcessLoadingUntilCompleteFromGameThread @ 142335f70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread2::ProcessLoadingUntilCompleteFromGameThread
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,
          TFunctionRef<bool___cdecl(void)> *param_2,double param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  Type TVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread> FVar16;
  FThreadHeartBeat *pFVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FNameEntryId FVar20;
  FName FVar21;
  undefined8 *puVar22;
  bool bVar23;
  double dVar24;
  ulonglong local_res8;
  FAsyncLoadingThreadState2 *local_res10;
  LARGE_INTEGER local_f8;
  FName local_f0;
  FName local_e8;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FName local_a0;
  undefined8 local_98 [12];
  
  if ((this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter == (atomic<int>)0x0)
  {
    return Complete;
  }
  bVar23 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId12054,"ProcessLoadingUntilComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2f16);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId12054);
  }
  FVar16 = StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread;
  if (StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)0x0) {
    pFVar15 = ::FName::FName(&local_a0,"STAT_FAsyncPackage_FlushAsyncLoadingGameThread");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread,*pFVar15,
                        L"Flush Async Loading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced"
                        ,L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar6 = false;
  bVar8 = false;
  FVar21 = *(FName *)FVar16;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar13 = FVar21.Number;
  if ((FVar20.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8 = local_res8 & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = FVar20.Value;
        local_f0.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x2f17);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8.s.LowPart = FVar20.Value;
      local_f8.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar7 = true;
      goto LAB_142336130;
    }
  }
  bVar7 = false;
  FVar21 = local_e8;
LAB_142336130:
  if (0 < (int)this->SuspendRequestedCount) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  iVar2 = (param_1->SyncLoadContextStack).ArrayNum;
  dVar5 = 0.0;
  if (iVar2 == 0) {
    puVar22 = local_98;
    local_res8 = 0;
  }
  else {
    uVar13 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar13 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      TVar14 = (*pcVar3)();
      return TVar14;
    }
    puVar22 = *(undefined8 **)
               ((param_1->SyncLoadContextStack).AllocatorInstance.Data +
               (longlong)(param_1->SyncLoadContextStack).ArrayNum * 8 + -8);
    local_res8 = *puVar22;
  }
  *puVar22 = 0;
  if ((this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter != (atomic<int>)0x0)
  {
    cVar11 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
    fVar9 = __real_38d1b717;
    dVar4 = param_3;
    while (cVar11 == '\0') {
      if ((0.0 < param_3) && (bVar12 = 0, dVar4 <= 0.0)) goto LAB_1423362d2;
      QueryPerformanceCounter(&local_f8);
      dVar24 = (double)CONCAT44(local_f8.s.HighPart,local_f8.s.LowPart) *
               FGenericPlatformTime::SecondsPerCycle;
      TVar14 = ProcessLoadingFromGameThread(this,local_res10,0.0 < param_3,0.0 < param_3,dVar4);
      if (TVar14 == Complete) {
        *puVar22 = local_res8;
        if (bVar8) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar7) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
           && (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar18 == (FThreadStats *)0x0) {
            pFVar19 = FThreadStatsPool::Get();
            pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
          }
          if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
            local_c0.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
            local_c0.NameAndInfo.Index.Value = FVar21.ComparisonIndex.Value.Value;
            QueryPerformanceCounter(&local_d0);
            local_c0.StatData.Pad[4] = '\0';
            local_c0.StatData.Pad[5] = '\0';
            local_c0.StatData.Pad[6] = '\0';
            local_c0.StatData.Pad[7] = '\0';
            local_c0.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
            local_c0.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
            local_c0.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
            local_c0.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar18,&local_c0);
            piVar1 = &pFVar18->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar18,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar18,false,false);
            }
          }
        }
        if (!bVar23) {
          return Complete;
        }
        FCpuProfilerTrace::OutputEndEvent();
        return Complete;
      }
      if (this->bThreadStarted != (atomic<bool>)0x0) {
        pFVar17 = FThreadHeartBeat::Get();
        if (dVar5 < pFVar17->ConfigHangDuration) {
          pFVar17 = FThreadHeartBeat::Get();
          FThreadHeartBeat::HeartBeat(pFVar17);
        }
        FWindowsPlatformProcess::SleepNoStats(fVar9);
      }
      QueryPerformanceCounter(&local_d8);
      dVar24 = (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar24;
      dVar4 = dVar4 - dVar24;
      dVar5 = dVar5 + dVar24;
      if ((this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter ==
          (atomic<int>)0x0) break;
      cVar11 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
    }
  }
  bVar12 = 1;
LAB_1423362d2:
  *puVar22 = local_res8;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_b0.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      local_b0.NameAndInfo.Index.Value = FVar21.ComparisonIndex.Value.Value;
      QueryPerformanceCounter(&local_c8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_b0);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (uint)bVar12 * 2;
}

// ProcessPendingCDOs @ 1423364e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAsyncLoadingThread2::ProcessPendingCDOs
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1)

{
  int *piVar1;
  int *piVar2;
  atomic<int> *paVar3;
  TMap<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar4;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  atomic<int> aVar7;
  longlong lVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  UObject *pUVar11;
  FEventLoadNode2 *this_00;
  code *pcVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  UClass *pUVar18;
  ForAnyElementType FVar19;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UClass *local_108;
  TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_> local_100;
  ulonglong local_f0;
  longlong *local_e8;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_b8;
  undefined2 local_b0;
  undefined4 local_a8;
  UClass **local_a0;
  FString local_98;
  FString local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_bool___cdecl_FAsyncLoadingThread2::ProcessPendingCDOs(FAsyncLoadingThreadState2&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId4748,"ProcessPendingCDOs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x128c);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_bool___cdecl_FAsyncLoadingThread2::ProcessPendingCDOs(FAsyncLoadingThreadState2&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId4748);
  }
  iVar15 = (param_1->SyncLoadContextStack).ArrayNum;
  local_108 = (UClass *)0x0;
  if (iVar15 < 1) {
    local_f0 = 0;
  }
  else {
    uVar21 = 0;
    if ((int)(iVar15 - 1U) < iVar15) {
      uVar21 = ~(iVar15 - 1U) >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return (bool)uVar14;
    }
    local_f0 = **(ulonglong **)
                 ((param_1->SyncLoadContextStack).AllocatorInstance.Data +
                 (longlong)(param_1->SyncLoadContextStack).ArrayNum * 8 + -8);
  }
  pTVar4 = &this->PendingCDOs;
  TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)pTVar4);
  local_b0 = 0;
  stack0xffffffffffffff28 = local_78._16_16_;
  local_e8 = (longlong *)local_78._0_8_;
  auStack_e0._0_8_ = local_78._8_8_;
  local_c8 = local_58;
  pTStack_c0 = pTStack_50;
  uVar17 = local_78._24_8_ >> 0x20;
  uVar21 = local_78._28_4_;
  local_b8 = (TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)pTVar4;
  if ((int)uVar21 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar8 = *local_e8;
      pUVar9 = *(UClass **)((longlong)(int)uVar17 * 0x20 + lVar8);
      iVar15 = (this->PendingCDOsRecursiveStack).ArrayNum;
      if ((0 < iVar15) && (pUVar9 != (UClass *)0x0)) {
        pFVar10 = (this->PendingCDOsRecursiveStack).AllocatorInstance.Data;
        pUVar18 = pUVar9;
        do {
          for (pFVar16 = pFVar10; pFVar16 != pFVar10 + (longlong)iVar15 * 8; pFVar16 = pFVar16 + 8)
          {
            if (*(UClass **)pFVar16 == pUVar18) goto LAB_142336706;
          }
          pUVar18 = (UClass *)pUVar18->_padding_;
        } while (pUVar18 != (UClass *)0x0);
      }
      lVar22 = (longlong)(int)uVar21 * 0x20;
      plVar20 = *(longlong **)(lVar22 + 8 + lVar8);
      iVar15 = *(int *)(lVar22 + 0x10 + lVar8);
      plVar6 = plVar20 + iVar15;
      while( true ) {
        if (*(int *)(lVar22 + 0x10 + lVar8) != iVar15) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FEventLoadNode2_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        pUVar18 = local_108;
        if ((plVar20 == plVar6) ||
           (pUVar18 = pUVar9, local_f0 <= *(ulonglong *)(*(longlong *)(*plVar20 + 8) + 0x458)))
        break;
        plVar20 = plVar20 + 1;
      }
      local_108 = pUVar18;
      if (local_108 != (UClass *)0x0) break;
LAB_142336706:
      uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
      uVar17 = (ulonglong)uStack_cc;
      uVar21 = uStack_cc;
    } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
    if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
      uVar21 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
      if (uVar21 < 4) {
        iVar15 = 1;
      }
      else {
        uVar17 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_a8 = (undefined4)lVar8;
        iVar15 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar21) && (local_b8->HashSize < iVar15)) || (iVar15 < local_b8->HashSize)) {
        local_b8->HashSize = iVar15;
        TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_b8);
      }
    }
  }
  bVar13 = false;
  if (local_108 != (UClass *)0x0) {
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    TMap<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>_>
    ::RemoveAndCopyValue(&this->PendingCDOs,local_108,&local_100);
    if (4 < (byte)LogStreaming._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)local_108,&local_98,(UObject *)0x0,None)
      ;
      UE::Logging::Private::BasicLog<5>
                (&`private:_bool___cdecl_FAsyncLoadingThread2::ProcessPendingCDOs(FAsyncLoadingThreadState2&___ptr64)___ptr64'
                  ::__l29::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    pTVar5 = &this->PendingCDOsRecursiveStack;
    pFVar10 = (pTVar5->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&local_108) &&
        ((FScriptContainerElement *)&local_108 <
         pFVar10 + (longlong)(this->PendingCDOsRecursiveStack).ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return (bool)uVar14;
    }
    iVar15 = (this->PendingCDOsRecursiveStack).ArrayNum;
    piVar1 = &(this->PendingCDOsRecursiveStack).ArrayNum;
    piVar2 = &(this->PendingCDOsRecursiveStack).ArrayMax;
    if (iVar15 == *piVar2) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar5->AllocatorInstance,piVar2);
    }
    pUVar9 = local_108;
    *piVar1 = iVar15 + 1;
    *(UClass **)((pTVar5->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_108;
    if ((local_108->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(local_108);
    }
    pUVar11 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((*piVar1 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return (bool)uVar14;
    }
    pUVar9 = *(UClass **)((pTVar5->AllocatorInstance).Data + (longlong)*piVar1 * 8 + -8);
    iVar15 = *piVar1 + -1;
    *piVar1 = iVar15;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar5->AllocatorInstance,iVar15,piVar2);
    if ((pUVar9 != local_108) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("PendingCDOsRecursiveStack.Pop() == Class",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x12c2,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return (bool)uVar14;
    }
    if (pUVar11 == (UObject *)0x0) {
      local_a0 = &local_108;
      `FAsyncLoadingThread2::ProcessPendingCDOs'::__l28::<lambda_1>::operator()(&local_a0);
    }
    if (5 < (byte)LogStreaming._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)local_108,&local_88,(UObject *)0x0,None)
      ;
      UE::Logging::Private::BasicLog<6>
                (&`private:_bool___cdecl_FAsyncLoadingThread2::ProcessPendingCDOs(FAsyncLoadingThreadState2&___ptr64)___ptr64'
                  ::__l54::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    iVar15 = local_100.ArrayNum;
    pFVar10 = local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 8;
    FVar19.Data = local_100.AllocatorInstance.Data;
    while( true ) {
      if (local_100.ArrayNum != iVar15) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FEventLoadNode2_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar19.Data == pFVar10) break;
      this_00 = *(FEventLoadNode2 **)FVar19.Data;
      if (((int)this_00->BarrierCount < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("BarrierCount > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x16f5,L""), bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      LOCK();
      paVar3 = &this_00->BarrierCount;
      aVar7 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar7 == (atomic<int>)0x1) {
        FEventLoadNode2::Fire(this_00,param_1);
      }
      FVar19.Data = FVar19.Data + 8;
    }
    bVar13 = true;
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

// QueueUnresolvedPackage @ 142336ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::QueueUnresolvedPackage
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,
          EPackageStoreEntryStatus param_2,FAsyncPackageDesc2 *param_3,
          TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
          *param_4,TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *param_5)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FAsyncLoadingThread2::FCompletedPackageRequest,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<int> *paVar3;
  FManualResetEvent FVar4;
  atomic<int> aVar5;
  FLoadPackageAsyncProgressDelegate *lpCriticalSection_00;
  longlong *plVar6;
  FCompletedPackageRequest *pFVar7;
  atomic<unsigned_char> *paVar8;
  code *pcVar9;
  bool bVar10;
  ushort uVar11;
  int iVar12;
  FCompletedPackageRequest *pFVar13;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> FVar14;
  ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
  FVar15;
  atomic<__int64> aVar16;
  longlong lVar17;
  Type TVar18;
  bool bVar19;
  undefined1 auStack_a28 [32];
  FCompletedPackageRequest *local_a08;
  FCompletedPackageRequest *local_a00;
  longlong local_9f8;
  longlong local_9f0;
  undefined8 local_9e8;
  char local_9d8;
  FName local_9d0;
  FName local_9c8;
  FAsyncLoadingThreadState2 *local_9c0;
  FName local_9b8;
  undefined8 local_9b0;
  uint local_9a8;
  wchar_t *local_998;
  int iStack_990;
  undefined4 uStack_98c;
  FAsyncPackageDesc2 *local_988;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  TStringView<wchar_t> local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  TArrayView<int_const_,int> local_928;
  FCompletedPackageRequest local_918;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a28;
  local_9d0 = param_3->UPackageName;
  local_9c0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FAsyncLoadingThread2::QueueUnresolvedPackage'::__l2::
           _dynamic_atexit_destructor_for__SkippedPackages__);
    _Init_thread_footer(&::_TSS0);
  }
  local_9d8 = '\0';
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&SkippedPackages,&local_9c8,(bool *)&local_9d0);
  bVar19 = local_9d8 == '\0';
  if (local_9d8 == '\0') {
    local_888.Base = local_868;
    local_888.bIsDynamic = false;
    local_888.bIsExternal = false;
    local_888.CurPos = local_868;
    local_888.End = local_52;
    ::FName::AppendString(&local_9d0,&local_888);
    local_998 = local_888.Base;
    iStack_990 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
    local_978._12_4_ = uStack_98c;
    local_978.Size = iStack_990;
    local_978.DataPtr = local_888.Base;
    bVar19 = FPackageName::IsScriptPackage(&local_978);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
    bVar19 = !bVar19;
  }
  if (param_2 == NotInstalled) {
    if (((byte)LogStreaming._0_1_ < 3) || (!bVar19)) goto LAB_1423370dc;
    ::LexToString(&local_958,&param_3->PackageIdToLoad);
    ::FName::ToString(&local_9d0,&local_968);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    local_938.Data.AllocatorInstance.Data = local_958.Data.AllocatorInstance.Data;
    if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_968.Data.AllocatorInstance.Data);
      local_938.Data.AllocatorInstance.Data = local_958.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (((byte)LogStreaming._0_1_ < 3) || (!bVar19)) goto LAB_1423370dc;
    ::LexToString(&local_938,&param_3->PackageIdToLoad);
    ::FName::ToString(&local_9d0,&local_948);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.Data.AllocatorInstance.Data);
    }
  }
  if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.Data.AllocatorInstance.Data);
  }
LAB_1423370dc:
  if (param_5->Object != (FLoadPackageAsyncProgressDelegate *)0x0) {
    bVar19 = -1 < CpuChannel->Enabled;
    if (bVar19) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId11638,"PackageProgressCallback_Failed",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x2d76);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11638);
    }
    local_9b8 = local_9d0;
    local_9b0 = 0;
    local_9a8 = 0;
    if ((param_5->Object == (FLoadPackageAsyncProgressDelegate *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lpCriticalSection_00 = param_5->Object;
    if ((lpCriticalSection_00->Mask >> (local_9a8 & 0x1f) & 1) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if ((*(int *)&(lpCriticalSection_00->Delegate).field_0x30 != 0) &&
         (plVar6 = *(longlong **)&(lpCriticalSection_00->Delegate).field_0x28,
         plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x68))(plVar6,&local_9b8);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    }
    if (bVar19) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (param_4->Ptr ==
      (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
       *)0x0) {
    uStack_980 = 1;
    local_928._12_4_ = uStack_97c;
    local_928.ArrayNum = 1;
    local_988 = param_3;
    local_928.DataPtr = &param_3->RequestID;
    RemovePendingRequests(this,local_9c0,&local_928);
    LOCK();
    paVar3 = &(this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter;
    aVar5 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if ((aVar5 == (atomic<int>)0x1) &&
       (paVar8 = &((this->PackagesWithRemainingWorkCounter).WakeEvent)->State,
       paVar8 != (atomic<unsigned_char> *)0x0)) {
      LOCK();
      FVar4.State = *paVar8;
      *paVar8 = (atomic<unsigned_char>)0x1;
      UNLOCK();
      if (((byte)FVar4.State & 3) == 2) {
        UE::ParkingLot::WakeAll(paVar8);
      }
    }
    aVar16 = (atomic<__int64>)
             (longlong)
             (int)(this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter;
    if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value != aVar16) {
      LOCK();
      UNLOCK();
      __GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value = aVar16;
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
            (atomic<unsigned_int>)0x0) {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterFlags &
                              0xf);
          LOCK();
          if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._2_2_ = 0;
            __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_,
                   (long64)__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value);
      }
    }
  }
  else {
    lpCriticalSection = &this->FailedPackageRequestsCritical;
    TVar18 = FailedNotInstalled;
    if (param_2 != NotInstalled) {
      TVar18 = FailedMissing;
    }
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = &this->FailedPackageRequests;
    pFVar13 = FCompletedPackageRequest::FromUnreslovedPackage(&local_918,param_3,TVar18,param_4);
    pFVar7 = (FCompletedPackageRequest *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar7 <= pFVar13) &&
       (lVar17 = (longlong)(this->FailedPackageRequests).ArrayMax, pFVar13 < pFVar7 + lVar17)) {
      local_9f0 = (longlong)(this->FailedPackageRequests).ArrayNum;
      local_9e8 = 0x88;
      local_a08 = pFVar13;
      local_a00 = pFVar7;
      local_9f8 = lVar17;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar19) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar12 = (this->FailedPackageRequests).ArrayNum;
    piVar1 = &(this->FailedPackageRequests).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x888,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->FailedPackageRequests).ArrayNum = iVar12 + 1;
    FCompletedPackageRequest::FCompletedPackageRequest
              ((FCompletedPackageRequest *)
               ((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x88),pFVar13);
    if (local_918.RequestIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_918.RequestIDs.AllocatorInstance.SecondaryData);
    }
    FVar14 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)
             &local_918.ProgressCallbacks;
    if (local_918.ProgressCallbacks.AllocatorInstance.SecondaryData !=
        (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
      FVar14 = local_918.ProgressCallbacks.AllocatorInstance.SecondaryData;
    }
    DestructItems<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int>
              ((TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *)FVar14,
               local_918.ProgressCallbacks.ArrayNum);
    if (local_918.ProgressCallbacks.AllocatorInstance.SecondaryData !=
        (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
      FMemory::Free((void *)local_918.ProgressCallbacks.AllocatorInstance.SecondaryData);
    }
    FVar15 = (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
              )&local_918.CompletionCallbacks;
    if (local_918.CompletionCallbacks.AllocatorInstance.SecondaryData !=
        (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
         )0x0) {
      FVar15 = local_918.CompletionCallbacks.AllocatorInstance.SecondaryData;
    }
    DestructItems<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>,int>
              ((TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
                *)FVar15,local_918.CompletionCallbacks.ArrayNum);
    if (local_918.CompletionCallbacks.AllocatorInstance.SecondaryData !=
        (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
         )0x0) {
      FMemory::Free((void *)local_918.CompletionCallbacks.AllocatorInstance.SecondaryData);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return;
}

// RemovePendingRequests @ 142339da0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::RemovePendingRequests
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,
          TArrayView<int_const_,int> *param_2)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  uint *puVar2;
  atomic<unsigned_char> aVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint local_res8 [2];
  FAsyncLoadingThreadState2 *local_res10;
  
  iVar8 = 0;
  lpCriticalSection = &this->PendingRequestsCritical;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar10 = (uint *)param_2->DataPtr;
  puVar2 = puVar10 + param_2->ArrayNum;
  for (; puVar10 != puVar2; puVar10 = puVar10 + 1) {
    local_res8[0] = *puVar10;
    uVar7 = (ulong64)(int)local_res8[0];
    if (*(int *)&(this->PendingRequests).Elements.field_0x8 ==
        *(int *)&(this->PendingRequests).Elements.field_0x34) {
      iVar6 = 0;
    }
    else {
      iVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                        (&this->PendingRequests,local_res8[0],(int *)local_res8);
    }
    iVar8 = iVar8 + iVar6;
    FLoadTimeProfilerTracePrivate::OutputEndRequest(uVar7);
  }
  this_00 = &this->PendingRequests;
  if (*(int *)&(this->PendingRequests).Elements.field_0x8 ==
      *(int *)&(this->PendingRequests).Elements.field_0x34) {
    for (lVar4 = 0x3f; 0x20fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    iVar9 = 1 << ((byte)lVar4 & 0x1f);
    iVar6 = (this->PendingRequests).HashSize;
    if ((iVar6 < iVar9) || (iVar9 < iVar6)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    }
    puVar1 = &(this->PendingRequests).Elements.field_0xc;
    iVar6 = *(int *)puVar1;
    *(undefined4 *)&(this->PendingRequests).Elements.field_0x8 = 0;
    if (iVar6 != 0x200) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0x200,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PendingRequests).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PendingRequests).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->PendingRequests).Elements.field_0x28 = 0;
    *(undefined4 *)&(this->PendingRequests).Elements.field_0x2c = 0x200;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingRequests).Elements.field_0x10,
               0);
    if (bVar5) {
      (this->PendingRequests).HashSize = iVar9;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (0 < iVar8) {
    if (local_res10->bIsAsyncLoadingThread == false) {
      if (this->bThreadStarted != (atomic<bool>)0x0) {
        FZenaphore::NotifyOne(&this->AltZenaphore);
      }
    }
    else {
      LOCK();
      aVar3 = (this->MainThreadWakeEvent).State;
      (this->MainThreadWakeEvent).State = (atomic<unsigned_char>)0x1;
      UNLOCK();
      if (((byte)aVar3 & 3) == 2) {
        UE::ParkingLot::WakeAll(&this->MainThreadWakeEvent);
      }
    }
  }
  return;
}

// RemoveUnreachableObjects @ 14233a5f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::RemoveUnreachableObjects
          (FAsyncLoadingThread2 *this,
          TArray<FUnreachableObject,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  LARGE_INTEGER local_res10;
  int local_res18;
  int local_res20;
  
  if (param_1->ArrayNum != 0) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId10805,"RemoveUnreachableObjects",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x2a35);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10805);
    }
    AcquireSRWLockShared((PSRWLOCK)&(this->GlobalImportStore).PackagesLock);
    local_res20 = *(int *)&(this->GlobalImportStore).Packages.field_0x8 -
                  *(int *)&(this->GlobalImportStore).Packages.field_0x34;
    ReleaseSRWLockShared((PSRWLOCK)&(this->GlobalImportStore).PackagesLock);
    local_res18 = *(int *)&(this->GlobalImportStore).ObjectIndexToPublicExport.field_0x8 -
                  *(int *)&(this->GlobalImportStore).ObjectIndexToPublicExport.field_0x34;
    QueryPerformanceCounter(&local_res10);
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_void___cdecl_FGlobalImportStore::RemovePackages(TArray<FUnreachableObject,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l2::__CpuProfilerEventSpecId1952,"RemovePackages",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x7a0);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_void___cdecl_FGlobalImportStore::RemovePackages(TArray<FUnreachableObject,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                 ::__l2::__CpuProfilerEventSpecId1952);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&(this->GlobalImportStore).PackagesLock);
    iVar2 = param_1->ArrayNum;
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FUnreachableObject_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar3 == pFVar1) break;
      if (*(ulong64 *)pFVar3 != 0) {
        FGlobalImportStore::RemovePackageNoLock
                  (&this->GlobalImportStore,(FPackageId)*(ulong64 *)pFVar3);
      }
      pFVar3 = pFVar3 + 0x18;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&(this->GlobalImportStore).PackagesLock);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGlobalImportStore::RemovePublicExports(&this->GlobalImportStore,param_1);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    AcquireSRWLockShared((PSRWLOCK)&(this->GlobalImportStore).PackagesLock);
    ReleaseSRWLockShared((PSRWLOCK)&(this->GlobalImportStore).PackagesLock);
    QueryPerformanceCounter(&local_res10);
    if (4 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// ResumeLoading @ 14233c3d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncLoadingThread2::ResumeLoading(FAsyncLoadingThread2 *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId10630,"ResumeLoading",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2986);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10630);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) || (bVar3 = IsInSlateThread(), bVar3)) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  LOCK();
  piVar1 = (int *)((longlong)&this->Thread + 4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 1) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  else if (iVar2 == 1) {
    if (4 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    if (this->field_0x19 != '\0') {
      (**(code **)(this->ThreadSuspendedEvent->_padding_ + 0x20))
                (this->ThreadSuspendedEvent,0xffffffff,0);
      FLoadTimeProfilerTracePrivate::OutputResumeAsyncLoading();
    }
    goto LAB_14233c48b;
  }
  if (5 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
LAB_14233c48b:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Run @ 14233c4f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

uint __thiscall FAsyncLoadingThread2::Run(FAsyncLoadingThread2 *this)

{
  FMutex *pFVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<unsigned_char> aVar2;
  atomic<bool> aVar3;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar4;
  code *pcVar5;
  bool bVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  atomic<unsigned_int> aVar11;
  uint uVar12;
  Type TVar13;
  FAsyncLoadingThreadState2 *pFVar14;
  char cVar15;
  FAsyncPackage2 *pFVar16;
  longlong *plVar17;
  FNode **ppFVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  char local_res18;
  FGCScopeGuard local_res20 [8];
  FLLMScope local_94;
  FMemScope local_90;
  FTaskTagScope local_88;
  FZenaphoreWaiter local_78;
  
  FTaskTagScope::FTaskTagScope(&local_88,EAsyncLoadingThread);
  FLLMScope::FLLMScope(&local_94,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_90,AsyncLoading,true);
  aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->AsyncLoadingThreadID = aVar11;
  UNLOCK();
  FAsyncLoadingThreadState2::Set((this->AsyncLoadingThreadState).Ptr);
  FLoadTimeProfilerTracePrivate::OutputStartAsyncLoading();
  FWindowsPlatformProcess::SetThreadAffinityMask(0xffffffffffffffff);
  FMemory::SetupTLSCachesOnCurrentThread();
  if ((FAsyncLoadingThreadState2::TlsSlot == 0xffffffff) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0xc89,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return uVar12;
  }
  pFVar14 = TlsGetValue(FAsyncLoadingThreadState2::TlsSlot);
  fVar7 = __real_3a83126f;
  local_78.Outer = &this->AltZenaphore;
  local_78.WaiterNode.Next = (FZenaphoreWaiterNode *)0x0;
  cVar15 = '\x01';
  aVar3 = this->bStopRequested;
  local_78.WaiterNode.bTriggered = false;
  local_78.SpinCount = 0;
  local_res18 = '\x01';
  do {
    if (aVar3 != (atomic<bool>)0x0) {
      FZenaphoreWaiter::~FZenaphoreWaiter(&local_78);
      FMemScope::~FMemScope(&local_90);
      FLLMScope::~FLLMScope(&local_94);
      FTaskTagScope::~FTaskTagScope(&local_88);
      return 0;
    }
    if (cVar15 == '\0') {
      aVar3 = this->bStopRequested;
      while (aVar3 == (atomic<bool>)0x0) {
        if ((this->SuspendRequestedCount == (atomic<int>)0x0) &&
           (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0)) {
          (**(code **)(this->ThreadResumedEvent->_padding_ + 0x10))();
          local_res18 = '\x01';
          cVar15 = '\x01';
          break;
        }
        FWindowsPlatformProcess::Sleep(fVar7);
        aVar3 = this->bStopRequested;
      }
    }
    else if (cVar15 == '\x02') {
      FZenaphoreWaiter::Wait(&local_78);
      local_res18 = '\x01';
      cVar15 = '\x01';
    }
    else if (cVar15 == '\x01') {
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId10409,"AsyncLoadingTime",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x28a9);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10409);
      }
      bVar20 = false;
      bVar6 = false;
      bVar9 = false;
      aVar3 = this->bStopRequested;
      while (aVar3 == (atomic<bool>)0x0) {
        pFVar14->bIsActive = (atomic<bool>)0x1;
        if (((bVar6) || (0 < (int)this->SuspendRequestedCount)) ||
           (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0)) {
          if (CpuChannel->Enabled < 0) {
            (**(code **)(this->ThreadSuspendedEvent->_padding_ + 0x10))();
            local_res18 = '\0';
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId10438,"SuspendAsyncLoading",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x28c6);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10438);
            (**(code **)(this->ThreadSuspendedEvent->_padding_ + 0x10))();
            local_res18 = '\0';
            FCpuProfilerTrace::OutputEndEvent();
          }
          break;
        }
        FGCScopeGuard::FGCScopeGuard(local_res20);
        lpCriticalSection = &this->UnreachableObjectsCritical;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        RemoveUnreachableObjects(this,&this->UnreachableObjects);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (bVar20) {
          bVar20 = -1 < CpuChannel->Enabled;
          if (bVar20) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId10463,"WaitingForExternalReads",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x28df);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10463);
          }
          pFVar16 = (FAsyncPackage2 *)0x0;
          aVar4 = ((this->ExternalReadQueue).Tail)->Next;
          if (aVar4 == (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
LAB_14233c7e2:
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Package",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x28e2,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return uVar12;
            }
          }
          else {
            pFVar16 = *(FAsyncPackage2 **)((longlong)aVar4 + 8);
            FMemory::Free((this->ExternalReadQueue).Tail);
            (this->ExternalReadQueue).Tail = (FNode *)aVar4;
            if (pFVar16 == (FAsyncPackage2 *)0x0) goto LAB_14233c7e2;
          }
          TVar13 = FAsyncPackage2::ProcessExternalReads(pFVar16,pFVar14,ExternalReadAction_Wait);
          if ((TVar13 != Complete) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result == EAsyncPackageState::Complete",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                 ,0x28e4,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar12 = (*pcVar5)();
            return uVar12;
          }
          bVar9 = false;
          if (bVar20) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          FGCScopeGuard::~FGCScopeGuard(local_res20);
          bVar20 = false;
        }
        else if (((this->QueuedPackagesCounter == (atomic<int>)0x0) &&
                 ((this->PendingPackages).ArrayNum == 0)) ||
                ((bVar20 = CreateAsyncPackagesFromQueue
                                     (this,pFVar14,GAsyncLoading2_AllowPreemptingPackagesDuringGC),
                 !bVar20 ||
                 (((int)this->SuspendRequestedCount < 1 &&
                  (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0)))))) {
          bVar21 = false;
          do {
            bVar10 = false;
            UpdateSyncLoadContext(this,pFVar14,true);
            iVar19 = (pFVar14->SyncLoadContextStack).ArrayNum;
            if (iVar19 == 0) {
LAB_14233c966:
              bVar20 = FAsyncLoadEventQueue2::PopAndExecute(&this->EventQueue,pFVar14);
              if (bVar20) {
LAB_14233c979:
                bVar10 = true;
                bVar21 = true;
              }
            }
            else {
              uVar12 = 0;
              if ((int)(iVar19 - 1U) < iVar19) {
                uVar12 = ~(iVar19 - 1U) >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar5 = (code *)swi(3);
                uVar12 = (*pcVar5)();
                return uVar12;
              }
              if (**(longlong **)
                    ((pFVar14->SyncLoadContextStack).AllocatorInstance.Data +
                    (longlong)(pFVar14->SyncLoadContextStack).ArrayNum * 8 + -8) == 0)
              goto LAB_14233c966;
              bVar20 = FAsyncLoadEventQueue2::ExecuteSyncLoadEvents(&this->EventQueue,pFVar14);
              if (bVar20) {
                CleanupSyncLoadContext(this,pFVar14);
                goto LAB_14233c979;
              }
            }
            bVar20 = bVar9;
            if ((0 < (int)this->SuspendRequestedCount) ||
               (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0)) {
              bVar6 = true;
              goto LAB_14233cc55;
            }
          } while (bVar10);
          if (bVar21) {
LAB_14233cc55:
            FGCScopeGuard::~FGCScopeGuard(local_res20);
          }
          else {
            aVar4 = ((this->ExternalReadQueue).Tail)->Next;
            plVar17 = (longlong *)0x0;
            if (aVar4 != (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
              plVar17 = (longlong *)((longlong)aVar4 + 8);
            }
            if (plVar17 == (longlong *)0x0) {
LAB_14233cab4:
              bVar21 = false;
              if (((this->DeferredDeletePackages).Tail)->Next !=
                  (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
                LOCK();
                bVar10 = (this->DeferredDeletePackagesLock).State == (atomic<unsigned_char>)0x0;
                if (bVar10) {
                  (this->DeferredDeletePackagesLock).State = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (!bVar10) {
                  UE::FMutex::LockSlow(&this->DeferredDeletePackagesLock);
                }
                bVar10 = -1 < CpuChannel->Enabled;
                if (bVar10) {
                  FCpuProfilerTrace::GetOrCreateSpecId
                            (&`public:_bool___cdecl_FAsyncLoadingThread2::ProcessDeferredDeletePackagesQueue(int)___ptr64'
                              ::__l5::__CpuProfilerEventSpecId4726,
                             "ProcessDeferredDeletePackagesQueue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x1276);
                  FCpuProfilerTrace::OutputBeginEvent
                            (`public:_bool___cdecl_FAsyncLoadingThread2::ProcessDeferredDeletePackagesQueue(int)___ptr64'
                             ::__l5::__CpuProfilerEventSpecId4726);
                }
                iVar19 = 1;
                do {
                  aVar4 = ((this->DeferredDeletePackages).Tail)->Next;
                  if (aVar4 == (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) break;
                  pFVar16 = *(FAsyncPackage2 **)((longlong)aVar4 + 8);
                  FMemory::Free((this->DeferredDeletePackages).Tail);
                  (this->DeferredDeletePackages).Tail = (FNode *)aVar4;
                  DeleteAsyncPackage(this,pFVar16);
                  iVar19 = iVar19 + 1;
                  bVar21 = true;
                } while (iVar19 < 0x65);
                if (bVar10) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
                LOCK();
                pFVar1 = &this->DeferredDeletePackagesLock;
                aVar2 = pFVar1->State;
                pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
                UNLOCK();
                if (((byte)aVar2 & 2) != 0) {
                  UE::FMutex::WakeWaitingThread(&this->DeferredDeletePackagesLock);
                }
                if (bVar21) goto LAB_14233ca85;
              }
              FGCScopeGuard::~FGCScopeGuard(local_res20);
              if ((int)this->PendingIoRequestsCounter < 1) {
                if (((this->ExternalReadQueue).Tail)->Next ==
                    (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
                  local_res18 = '\x02';
                  break;
                }
                bVar9 = true;
                bVar20 = true;
              }
              else if (CpuChannel->Enabled < 0) {
                FZenaphoreWaiter::Wait(&local_78);
              }
              else {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId10549,"WaitingForIo",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x2935);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10549);
                FZenaphoreWaiter::Wait(&local_78);
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
            else {
              bVar21 = -1 < CpuChannel->Enabled;
              if (bVar21) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId10530,"PollExternalReads",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x2922);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10530);
              }
              ppFVar18 = &(this->ExternalReadQueue).Tail;
              if ((*plVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("*Package",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                      ,0x2923,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                uVar12 = (*pcVar5)();
                return uVar12;
              }
              TVar13 = FAsyncPackage2::ProcessExternalReads
                                 ((FAsyncPackage2 *)*plVar17,pFVar14,ExternalReadAction_Poll);
              if (TVar13 != Complete) {
                if (bVar21) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
                goto LAB_14233cab4;
              }
              aVar4 = (*ppFVar18)->Next;
              if (aVar4 != (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
                FMemory::Free(*ppFVar18);
                *ppFVar18 = (FNode *)aVar4;
              }
              if (bVar21) {
                FCpuProfilerTrace::OutputEndEvent();
              }
LAB_14233ca85:
              FGCScopeGuard::~FGCScopeGuard(local_res20);
            }
          }
        }
        else {
          bVar6 = true;
          FGCScopeGuard::~FGCScopeGuard(local_res20);
          bVar20 = false;
        }
        aVar3 = this->bStopRequested;
      }
      cVar15 = local_res18;
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    aVar3 = this->bStopRequested;
  } while( true );
}

// ShouldAlwaysLoadPackageAsync @ 14233d5b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FAsyncLoadingThread2::ShouldAlwaysLoadPackageAsync(FAsyncLoadingThread2 *this,FPackagePath *param_1)

{
  return true;
}

// ShutdownLoading @ 14233d630

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncLoadingThread2::ShutdownLoading(FAsyncLoadingThread2 *this)

{
  longlong *plVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            (this_00,&this[-1].AsyncLoadingTickCounter);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  this->_padding_ = 0;
  FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->FileOpenLogWrapper);
  this->FileOpenLogWrapper = (FPlatformFileOpenLog *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->CancelLoadingEvent);
  this->CancelLoadingEvent = (FEvent *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->ThreadSuspendedEvent);
  this->ThreadSuspendedEvent = (FEvent *)0x0;
  return;
}

// StartThread @ 14233db70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncLoadingThread2::StartThread(FAsyncLoadingThread2 *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TUniquePtr<FAsyncLoadingThreadState2,TDefaultDelete<FAsyncLoadingThreadState2>_> *pTVar3;
  int iVar4;
  atomic<__int64> aVar5;
  code *pcVar6;
  bool bVar7;
  FAsyncLoadingThreadSettings *pFVar8;
  FAsyncLoadingThreadState2 *pFVar9;
  FAsyncLoadingThreadState2 *this_00;
  FRunnableThread *pFVar10;
  longlong local_18 [2];
  
  FGCCSyncObject::Create();
  if ((*(int *)&this->PendingCDOs != *(int *)&(this->PendingCDOs).field_0x2c) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingCDOs.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x284e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar2 = &(this->PendingPackages).ArrayNum;
  bVar7 = 1 < *(int *)&(this->PendingCDOs).field_0x40;
  if (!bVar7) {
    TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)piVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)piVar2,0,*(int *)&this->PendingCDOs);
  this_00 = (FAsyncLoadingThreadState2 *)0x0;
  puVar1 = &(this->PendingCDOs).field_0x4;
  *(undefined4 *)&this->PendingCDOs = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)piVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PendingCDOs).field_0x28 = 0xffffffff;
  *(undefined4 *)&(this->PendingCDOs).field_0x2c = 0;
  iVar4 = *(int *)&(this->PendingCDOs).field_0x24;
  *(undefined4 *)&(this->PendingCDOs).field_0x20 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->PendingCDOs).field_0x24 = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingCDOs).field_0x8,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->PendingCDOs).field_0x40 = 1;
    TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)piVar2);
  }
  if ((*(int *)&(this->PendingCDOsRecursiveStack).AllocatorInstance.Data != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingCDOsRecursiveStack.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2850,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar2 = (int *)((longlong)&(this->PendingCDOsRecursiveStack).AllocatorInstance.Data + 4);
  *(undefined4 *)&(this->PendingCDOsRecursiveStack).AllocatorInstance.Data = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&(this->PendingCDOs).field_0x48,0,piVar2);
  }
  pFVar8 = FAsyncLoadingThreadSettings::Get();
  if ((pFVar8->bAsyncLoadingThreadEnabled == false) || (this->_padding_ != 0)) goto LAB_14233dddc;
  pFVar9 = ::operator_new(0x80);
  if (pFVar9 != (FAsyncLoadingThreadState2 *)0x0) {
    (pFVar9->NodesToFire).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->NodesToFire).ArrayNum = 0;
    (pFVar9->NodesToFire).ArrayMax = 0;
    (pFVar9->CurrentlyExecutingEventNodeStack).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar9->CurrentlyExecutingEventNodeStack).ArrayNum = 0;
    (pFVar9->CurrentlyExecutingEventNodeStack).ArrayMax = 0;
    (pFVar9->SyncLoadContextStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->SyncLoadContextStack).ArrayNum = 0;
    (pFVar9->SyncLoadContextStack).ArrayMax = 0;
    (pFVar9->PackagesOnStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->PackagesOnStack).ArrayNum = 0;
    (pFVar9->PackagesOnStack).ArrayMax = 0;
    (pFVar9->SyncLoadContextsCreatedOnOtherThreads).Head =
         (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)0x0;
    (pFVar9->SyncLoadContextsCreatedOnOtherThreads).Tail = (FNode *)0x0;
    (pFVar9->PackagesToReprioritize).Head =
         (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0;
    (pFVar9->PackagesToReprioritize).Tail = (FNode *)0x0;
    pFVar9->bIsAsyncLoadingThread = false;
    pFVar9->bCanAccessAsyncLoadingThreadData = false;
    pFVar9->bIsActive = (atomic<bool>)0x0;
    pFVar9->bShouldFireNodes = false;
    pFVar9->bUseTimeLimit = false;
    *(undefined3 *)&pFVar9->field_0x65 = 0;
    pFVar9->TimeLimit = 0.0;
    pFVar9->StartTime = 0.0;
    pFVar9->LastTestTime = 0.0;
    this_00 = FAsyncLoadingThreadState2::FAsyncLoadingThreadState2(pFVar9);
  }
  pTVar3 = &this->GameThreadState;
  if (pTVar3 == (TUniquePtr<FAsyncLoadingThreadState2,TDefaultDelete<FAsyncLoadingThreadState2>_> *)
                local_18) {
    if (this_00 != (FAsyncLoadingThreadState2 *)0x0) {
      FAsyncLoadingThreadState2::~FAsyncLoadingThreadState2(this_00);
      goto LAB_14233dd43;
    }
  }
  else {
    pFVar9 = pTVar3->Ptr;
    pTVar3->Ptr = this_00;
    if (pFVar9 != (FAsyncLoadingThreadState2 *)0x0) {
      FAsyncLoadingThreadState2::~FAsyncLoadingThreadState2(pFVar9);
      this_00 = pFVar9;
LAB_14233dd43:
      ::operator_delete(this_00,0x80);
    }
  }
  aVar5 = (atomic<__int64>)pTVar3->Ptr;
  piVar2 = &(this->LoadedPackagesToProcess).ArrayNum;
  (this->MainThreadEventQueue).Zenaphore = (FZenaphore *)piVar2;
  *(int **)&this->QueuedPackagesCounter = piVar2;
  (this->GraphAllocator).TotalAllocated = aVar5;
  *(bool *)((longlong)aVar5 + 0x60) = true;
  pTVar3->Ptr->bCanAccessAsyncLoadingThreadData = true;
  *(undefined1 *)(*(longlong *)&(this->UnreachableObjects).ArrayNum + 0x61) = 0;
  if (4 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  this->field_0x19 = 1;
  UE::Trace::ThreadGroupBegin(L"AsyncLoading");
  pFVar10 = FRunnableThread::Create
                      ((FRunnable *)&this[-1].AsyncLoadingTickCounter,L"FAsyncLoadingThread",0,
                       TPri_Normal,0xffffffffffffffff,None);
  this->_padding_ = (longlong)pFVar10;
  UE::Trace::ThreadGroupEnd();
LAB_14233dddc:
  if (4 < (byte)LogStreaming._0_1_) {
    FAsyncLoadingThreadSettings::Get();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  return;
}

// Stop @ 14233de50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncLoadingThread2::Stop(FAsyncLoadingThread2 *this)

{
  LOCK();
  this->SuspendRequestedCount = (atomic<int>)((int)this->SuspendRequestedCount + 1);
  UNLOCK();
  LOCK();
  this->bStopRequested = (atomic<bool>)0x1;
  UNLOCK();
  FZenaphore::NotifyAll(&this->AltZenaphore);
  return;
}

// SuspendLoading @ 14233eba0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncLoadingThread2::SuspendLoading(FAsyncLoadingThread2 *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId10609,"SuspendLoading",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2971);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId10609);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) || (bVar3 = IsInSlateThread(), bVar3)) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  LOCK();
  piVar1 = (int *)((longlong)&this->Thread + 4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    if (4 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    if (this->field_0x19 != '\0') {
      FLoadTimeProfilerTracePrivate::OutputSuspendAsyncLoading();
      FZenaphore::NotifyAll((FZenaphore *)&this->ConditionalBeginPostLoadTick);
      (**(code **)(this->CancelLoadingEvent->_padding_ + 0x20))
                (this->CancelLoadingEvent,0xffffffff,0);
    }
  }
  else if (5 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TickAsyncLoadingFromGameThread @ 14233ecd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread2::TickAsyncLoadingFromGameThread
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,bool param_2,bool param_3,
          double param_4,TArrayView<int_const_,int> *param_5,bool *param_6)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  atomic<bool> aVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  Type TVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread> FVar15;
  uint *puVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar17;
  undefined1 local_e8 [4];
  FColor_u_0 local_e4;
  undefined4 local_e0;
  FName local_d8;
  FName local_d0;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  FTlsAutoCleanup *local_b0;
  LARGE_INTEGER local_a8;
  FStatMessage local_a0;
  code *local_90;
  undefined1 *local_88;
  FName local_80;
  TArrayView<int_const_,int> local_78 [4];
  
  FVar15 = StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread;
  if (StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread>)0x0) {
    pFVar14 = ::FName::FName(&local_80,"STAT_FAsyncPackage_TickAsyncLoadingGameThread");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread,*pFVar14,
                        L"TickAsyncLoading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
                        L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar15;
  bVar7 = false;
  bVar9 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
LAB_14233ee1d:
    bVar8 = false;
    FVar17 = local_d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e4._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_d8.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x27af);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14233ee1d;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar8 = true;
  }
  bVar11 = IsInGameThread();
  if (!bVar11) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInGameThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                        ,0x27b5,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      TVar13 = (*pcVar5)();
      return TVar13;
    }
  }
  if (GIsGarbageCollecting != false) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsGarbageCollecting()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                        ,0x27b6,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      TVar13 = (*pcVar5)();
      return TVar13;
    }
  }
  puVar16 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_88 = local_e8;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_b0 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar16);
  local_e0 = *(undefined4 *)(local_b0 + 10);
  *(undefined4 *)(local_b0 + 10) = 0x400000;
  dVar10 = __real_4170000000000000;
  TVar13 = ((int)this->SuspendRequestedCount < 1) + PendingImports;
  if (0 < (int)this->SuspendRequestedCount) goto LAB_14233f0de;
  bVar11 = param_1->bUseTimeLimit;
  dVar2 = param_1->TimeLimit;
  dVar3 = param_1->StartTime;
  param_1->TimeLimit = param_4;
  param_1->bUseTimeLimit = param_2;
  if (param_2) {
    QueryPerformanceCounter(&local_c0);
    dVar6 = (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar10;
  }
  else {
    dVar6 = 0.0;
  }
  param_1->StartTime = dVar6;
  aVar4 = this->bThreadStarted;
  if (aVar4 == (atomic<bool>)0x0) {
    RemoveUnreachableObjects(this,&this->UnreachableObjects);
  }
  UpdateSyncLoadContext(this,param_1,true);
  local_78[0].DataPtr = param_5->DataPtr;
  local_78[0].ArrayNum = param_5->ArrayNum;
  local_78[0]._12_4_ = *(undefined4 *)&param_5->field_0xc;
  TVar13 = ProcessLoadedPackagesFromGameThread(this,param_1,param_6,local_78);
  if (param_2) {
    QueryPerformanceCounter(&local_b8);
    if ((2 < (byte)LogStreaming._0_1_) &&
       (__real_3fb999999999999a <
        ((double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar10) -
        param_1->StartTime)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
  }
  if (aVar4 == (atomic<bool>)0x0) {
    if (TVar13 != TimeOut) {
      bVar12 = IsInGameThread();
      if (!bVar12) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x2950,L"");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          TVar13 = (*pcVar5)();
          return TVar13;
        }
      }
      TVar13 = Complete;
      if (this->AsyncThreadReady != (atomic<int>)0x0) {
        bVar12 = FAsyncLoadingThreadState2::IsTimeLimitExceeded
                           (param_1,L"TickAsyncThreadFromGameThread",(UObject *)0x0);
        if (bVar12) {
          TVar13 = TimeOut;
        }
        else {
          TVar13 = ProcessAsyncLoadingFromGameThread(this,param_1,param_6);
        }
      }
      goto LAB_14233f06e;
    }
  }
  else {
LAB_14233f06e:
    if (TVar13 != TimeOut) {
      if ((*param_6 == false) &&
         (0 < *(int *)&(this->PendingCDOs).field_0x8 - *(int *)&(this->PendingCDOs).field_0x34)) {
        bVar12 = ProcessPendingCDOs(this,param_1);
        *param_6 = bVar12;
      }
      if ((this->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter ==
          (atomic<int>)0x0) {
        FDeferredMessageLog::Flush();
      }
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&FCoreDelegates::OnAsyncLoadingFlushUpdate);
  param_1->bUseTimeLimit = bVar11;
  param_1->TimeLimit = dVar2;
  param_1->StartTime = dVar3;
LAB_14233f0de:
  *(undefined4 *)(local_b0 + 10) = local_e0;
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a0.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_a0.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return TVar13;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return TVar13;
}

// TickAsyncThreadFromGameThread @ 14233f1f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread2::TickAsyncThreadFromGameThread
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x2950,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
  if (this->AsyncThreadReady != (atomic<int>)0x0) {
    bVar2 = FAsyncLoadingThreadState2::IsTimeLimitExceeded
                      (param_1,L"TickAsyncThreadFromGameThread",(UObject *)0x0);
    if (bVar2) {
      return TimeOut;
    }
    TVar3 = ProcessAsyncLoadingFromGameThread(this,param_1,param_2);
    return TVar3;
  }
  return Complete;
}

// UpdatePackagePriority @ 142341970

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::UpdatePackagePriority
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2)

{
  TMpscQueue<FAsyncPackage2_*,FMemory> *pTVar1;
  FManualResetEvent *pFVar2;
  atomic<unsigned_char> aVar3;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar4;
  atomic<EAsyncPackageLoadingState2> aVar5;
  atomic<int> aVar6;
  FAsyncLoadingThreadState2 *pFVar7;
  bool bVar8;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar9;
  bool bVar10;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5236,"UpdatePackagePriority",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1474);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5236);
  }
  aVar5 = param_2->AsyncPackageLoadingState;
  if ((byte)aVar5 < 2) {
    FIoRequest::UpdatePriority(&(param_2->SerializationState).IoRequest,(param_2->Desc).Priority);
    FAsyncLoadEventQueue2::UpdatePackagePriority(&this->EventQueue,param_2);
  }
  else if ((byte)aVar5 < 0xe) {
    FAsyncLoadEventQueue2::UpdatePackagePriority(&this->EventQueue,param_2);
  }
  else if (aVar5 == (atomic<EAsyncPackageLoadingState2>)0xe) {
    if ((param_1->bIsAsyncLoadingThread != false) || (bVar8 = IsInParallelLoadingThread(), bVar8)) {
      aVar6 = param_2->RefCount;
      while (aVar6 != (atomic<int>)0x0) {
        LOCK();
        bVar8 = aVar6 == param_2->RefCount;
        if (bVar8) {
          param_2->RefCount = (atomic<int>)((int)aVar6 + 1);
        }
        UNLOCK();
        if (bVar8) {
          pFVar7 = (this->GameThreadState).Ptr;
          aVar9 = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
          *(undefined8 *)aVar9 = 0;
          *(FAsyncPackage2 **)((longlong)aVar9 + 8) = param_2;
          LOCK();
          pTVar1 = &pFVar7->PackagesToReprioritize;
          aVar4 = pTVar1->Head;
          pTVar1->Head = aVar9;
          UNLOCK();
          *(atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> *)aVar4 = aVar9;
          pFVar2 = &this->MainThreadWakeEvent;
          LOCK();
          aVar3 = pFVar2->State;
          pFVar2->State = (atomic<unsigned_char>)0x1;
          UNLOCK();
          if (((byte)aVar3 & 3) == 2) {
            UE::ParkingLot::WakeAll(pFVar2);
          }
          break;
        }
        aVar6 = param_2->RefCount;
      }
    }
    else {
      FAsyncLoadEventQueue2::UpdatePackagePriority(&this->MainThreadEventQueue,param_2);
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdatePackagePriorityRecursive @ 142341ad0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::UpdatePackagePriorityRecursive
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2,
          int param_3)

{
  FAsyncPackage2 **ppFVar1;
  FAsyncPackage2 **ppFVar2;
  
  if ((param_2->Desc).Priority < param_3) {
    (param_2->Desc).Priority = param_3;
    UpdatePackagePriority(this,param_1,param_2);
    if (((param_2->LinkerLoadState).bIsSet == false) ||
       (2 < (byte)param_2->AsyncPackageLoadingState)) {
      ppFVar2 = (param_2->Data).ImportedAsyncPackages.DataPtr;
      ppFVar1 = ppFVar2 + (param_2->Data).ImportedAsyncPackages.ArrayNum;
      for (; ppFVar2 != ppFVar1; ppFVar2 = ppFVar2 + 1) {
        if (*ppFVar2 != (FAsyncPackage2 *)0x0) {
          UpdatePackagePriorityRecursive(this,param_1,*ppFVar2,param_3);
        }
      }
    }
  }
  return;
}

// UpdateSyncLoadContext @ 142341b80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::UpdateSyncLoadContext
          (FAsyncLoadingThread2 *this,FAsyncLoadingThreadState2 *param_1,bool param_2)

{
  TArray<FAsyncLoadingSyncLoadContext_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar3;
  atomic<int> aVar4;
  atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> aVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  FAsyncPackage2 *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  TArrayView<int_const_,int> *pTVar16;
  ulong64 *puVar17;
  ulong64 *puVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  ulong64 *puVar25;
  int iVar26;
  bool local_res18;
  int local_res20 [2];
  undefined8 local_b8;
  ulong64 *local_b0;
  ulong64 *local_a0;
  int *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  TArrayView<int_const_,int> local_88;
  FString local_78;
  TArrayView<int_const_,int> local_68;
  TArrayView<int_const_,int> local_58;
  
  if ((param_1->bIsAsyncLoadingThread == false) || (!param_2)) {
    local_res18 = false;
  }
  else {
    CleanupSyncLoadContext(this,param_1);
    bVar11 = false;
    while (aVar5 = ((param_1->SyncLoadContextsCreatedOnOtherThreads).Tail)->Next,
          aVar5 != (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)0x0) {
      uVar6 = *(undefined8 *)((longlong)aVar5 + 8);
      FMemory::Free((param_1->SyncLoadContextsCreatedOnOtherThreads).Tail);
      pTVar1 = &param_1->SyncLoadContextStack;
      (param_1->SyncLoadContextsCreatedOnOtherThreads).Tail = (FNode *)aVar5;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      local_b8 = uVar6;
      if (((pFVar7 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 <
           pFVar7 + (longlong)(param_1->SyncLoadContextStack).ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = (param_1->SyncLoadContextStack).ArrayNum;
      piVar2 = &(param_1->SyncLoadContextStack).ArrayMax;
      if (iVar13 == *piVar2) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      bVar11 = true;
      (param_1->SyncLoadContextStack).ArrayNum = iVar13 + 1;
      *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_b8;
      if (6 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
    }
    local_res18 = param_2;
    if (bVar11) {
      CleanupSyncLoadContext(this,param_1);
    }
  }
  iVar13 = (param_1->SyncLoadContextStack).ArrayNum;
  if (iVar13 != 0) {
    uVar22 = 0;
    if ((int)(iVar13 - 1U) < iVar13) {
      uVar22 = ~(iVar13 - 1U) >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    puVar18 = *(ulong64 **)
               ((param_1->SyncLoadContextStack).AllocatorInstance.Data +
               (longlong)(param_1->SyncLoadContextStack).ArrayNum * 8 + -8);
    local_b0 = puVar18;
    if (local_res18 == false) {
      pTVar16 = TArrayView<int_const_,int>::
                TArrayView<int_const_,int><TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                          (&local_58,
                           (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                           (puVar18 + 1));
      lpCriticalSection = &this->PendingRequestsCritical;
      local_88.DataPtr._0_4_ = *(undefined4 *)&pTVar16->DataPtr;
      local_88.DataPtr._4_4_ = *(undefined4 *)((longlong)&pTVar16->DataPtr + 4);
      local_88.ArrayNum = pTVar16->ArrayNum;
      local_88._12_4_ = *(undefined4 *)&pTVar16->field_0xc;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      bVar11 = Algo::
               NoneOf<TArrayView<int_const_,int>,_FAsyncLoadingThread2::ContainsAnyRequestID_::__l2::<lambda_1>_>
                         (&local_88,(<lambda_1>)this);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (bVar11) {
        return;
      }
    }
    puVar17 = puVar18 + 1;
    puVar25 = puVar18;
    local_a0 = puVar17;
    if ((param_1->bCanAccessAsyncLoadingThreadData != false) && ((char)puVar18[5] == '\0')) {
      CreateAsyncPackagesFromQueue(this,param_1,false);
      iVar13 = (int)puVar18[4];
      iVar26 = 0;
      uVar22 = 0;
      if (0 < iVar13) {
        lVar23 = 0;
        lVar24 = 0;
LAB_142341e10:
        uVar21 = ~uVar22 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar22 < (int)puVar17[3]) {
          uVar14 = uVar21;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((ulong64 *)puVar17[2] != (ulong64 *)0x0) {
          puVar17 = (ulong64 *)puVar17[2];
        }
        uVar14 = *(uint *)((longlong)puVar17 + lVar24);
        uVar15 = 0;
        if ((int)uVar22 < (int)puVar18[0xb]) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        puVar17 = puVar18 + 6;
        if ((ulong64 *)puVar18[10] != (ulong64 *)0x0) {
          puVar17 = (ulong64 *)puVar18[10];
        }
        if (*(longlong *)(lVar23 + (longlong)puVar17) != 0) goto LAB_142341fef;
        if (*(int *)&(this->RequestIdToPackageMap).field_0x8 !=
            *(int *)&(this->RequestIdToPackageMap).field_0x34) {
          puVar8 = *(undefined1 **)&(this->RequestIdToPackageMap).field_0x40;
          puVar20 = &(this->RequestIdToPackageMap).field_0x38;
          if (puVar8 != (undefined1 *)0x0) {
            puVar20 = puVar8;
          }
          iVar13 = *(int *)(puVar20 +
                           (ulonglong)
                           (*(int *)&(this->RequestIdToPackageMap).field_0x48 - 1U & uVar14) * 4);
          if (iVar13 != -1) {
            do {
              lVar3 = *(longlong *)&this->RequestIdToPackageMap + (longlong)iVar13 * 0x18;
              if (*(uint *)(*(longlong *)&this->RequestIdToPackageMap + (longlong)iVar13 * 0x18) ==
                  uVar14) {
                if ((lVar3 != 0) &&
                   (pFVar9 = *(FAsyncPackage2 **)(lVar3 + 8), pFVar9 != (FAsyncPackage2 *)0x0)) {
                  aVar4 = pFVar9->RefCount;
                  goto joined_r0x000142341f5b;
                }
                break;
              }
              iVar13 = *(int *)(lVar3 + 0x10);
            } while (iVar13 != -1);
          }
        }
        goto LAB_142341ff2;
      }
LAB_14234201e:
      if (iVar26 == iVar13) {
        *(undefined1 *)(puVar25 + 5) = 1;
      }
    }
    if ((char)puVar25[5] != '\0') {
      bVar11 = false;
      uVar22 = 0;
      if (0 < (int)puVar25[4]) {
        lVar23 = 0;
        lVar24 = 0;
        bVar11 = false;
        do {
          uVar14 = 0;
          if ((int)uVar22 < (int)puVar25[4]) {
            uVar14 = ~uVar22 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          puVar18 = puVar25 + 1;
          if ((ulong64 *)puVar25[3] != (ulong64 *)0x0) {
            puVar18 = (ulong64 *)puVar25[3];
          }
          iVar13 = *(int *)(lVar24 + (longlong)puVar18);
          uVar14 = 0;
          if ((int)uVar22 < (int)puVar25[0xb]) {
            uVar14 = ~uVar22 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          puVar18 = puVar25 + 6;
          if ((ulong64 *)puVar25[10] != (ulong64 *)0x0) {
            puVar18 = (ulong64 *)puVar25[10];
          }
          lVar3 = *(longlong *)(lVar23 + (longlong)puVar18);
          if (lVar3 != 0) {
            pFVar19 = (param_1->PackagesOnStack).AllocatorInstance.Data;
            pFVar7 = pFVar19 + (longlong)(param_1->PackagesOnStack).ArrayNum * 8;
            for (; pFVar19 != pFVar7; pFVar19 = pFVar19 + 8) {
              if (*(longlong *)pFVar19 == lVar3) {
                if ((2 < (byte)LogStreaming._0_1_) && (*(byte *)(lVar3 + 0x494) < 0xe)) {
                  ::FName::ToString((FName *)(lVar3 + 0x210),&local_78);
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                  ;
                  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  }
                }
                local_98 = local_res20;
                uStack_90 = 1;
                local_68._12_4_ = uStack_8c;
                local_68.ArrayNum = 1;
                local_res20[0] = iVar13;
                local_68.DataPtr = local_98;
                RemovePendingRequests(this,param_1,&local_68);
                bVar11 = true;
                break;
              }
            }
          }
          uVar22 = uVar22 + 1;
          lVar24 = lVar24 + 4;
          lVar23 = lVar23 + 8;
        } while ((int)uVar22 < (int)local_b0[4]);
      }
      if ((local_res18 != false) && (bVar11)) {
        CleanupSyncLoadContext(this,param_1);
      }
    }
  }
  return;
joined_r0x000142341f5b:
  if (aVar4 == (atomic<int>)0x0) goto LAB_142341fd9;
  LOCK();
  bVar11 = aVar4 == pFVar9->RefCount;
  if (bVar11) {
    pFVar9->RefCount = (atomic<int>)((int)aVar4 + 1);
  }
  UNLOCK();
  if (bVar11) {
    uVar14 = 0;
    if ((int)uVar22 < (int)puVar18[0xb]) {
      uVar14 = uVar21;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    puVar17 = puVar18 + 6;
    if ((ulong64 *)puVar18[10] != (ulong64 *)0x0) {
      puVar17 = (ulong64 *)puVar18[10];
    }
    *(FAsyncPackage2 **)(lVar23 + (longlong)puVar17) = pFVar9;
    goto LAB_142341fd9;
  }
  aVar4 = pFVar9->RefCount;
  goto joined_r0x000142341f5b;
LAB_142341fd9:
  IncludePackageInSyncLoadContextRecursive(this,param_1,*local_b0,pFVar9);
LAB_142341fef:
  iVar26 = iVar26 + 1;
LAB_142341ff2:
  uVar22 = uVar22 + 1;
  lVar24 = lVar24 + 4;
  lVar23 = lVar23 + 8;
  iVar13 = (int)local_b0[4];
  puVar17 = local_a0;
  puVar25 = local_b0;
  if (iVar13 <= (int)uVar22) goto LAB_14234201e;
  goto LAB_142341e10;
}

// WarnAboutPotentialSyncLoadStall @ 142343330

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::WarnAboutPotentialSyncLoadStall
          (FAsyncLoadingThread2 *this,FAsyncLoadingSyncLoadContext *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ForElementType<int> FVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ForElementType<FAsyncPackage2_*> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<int> FVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  int iVar11;
  ForElementType<FAsyncPackage2_*> FVar12;
  longlong lVar13;
  longlong local_res10;
  FString local_38;
  
  uVar10 = 0;
  if (0 < (param_1->RequestIDs).ArrayNum) {
    lpCriticalSection = &this->PendingRequestsCritical;
    lVar13 = 0;
    local_res10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (param_1->RequestIDs).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar1 = (param_1->RequestIDs).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<int>)&param_1->RequestIDs;
      if (FVar1 != (ForElementType<int>)0x0) {
        FVar8 = FVar1;
      }
      uVar7 = *(uint *)(local_res10 + (longlong)FVar8);
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(this->PendingRequests).Elements.field_0x8 ==
          *(int *)&(this->PendingRequests).Elements.field_0x34) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      else {
        FVar2 = (this->PendingRequests).Hash.SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&(this->PendingRequests).Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        iVar11 = *(int *)((longlong)FVar9 +
                         (ulonglong)((this->PendingRequests).HashSize - 1U & uVar7) * 4);
        if (iVar11 != -1) {
          lVar3 = *(longlong *)&(this->PendingRequests).Elements;
          do {
            if (*(uint *)(lVar3 + (longlong)iVar11 * 0xc) == uVar7) {
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              if (iVar11 != -1) {
                uVar7 = 0;
                if ((int)uVar10 < (param_1->RequestedPackages).ArrayNum) {
                  uVar7 = ~uVar10 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                FVar4 = (param_1->RequestedPackages).AllocatorInstance.SecondaryData;
                FVar12 = (ForElementType<FAsyncPackage2_*>)&param_1->RequestedPackages;
                if (FVar4 != (ForElementType<FAsyncPackage2_*>)0x0) {
                  FVar12 = FVar4;
                }
                lVar3 = *(longlong *)(lVar13 + (longlong)FVar12);
                if (2 < (byte)LogStreaming._0_1_) {
                  ::LexToString((EAsyncPackageLoadingState2)
                                param_1->RequestingPackage->AsyncPackageLoadingState);
                  ::LexToString(*(EAsyncPackageLoadingState2 *)(lVar3 + 0x494));
                  ::FName::ToString((FName *)(lVar3 + 0x210),&local_38);
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                  ;
                  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_38.Data.AllocatorInstance.Data);
                  }
                }
              }
              goto LAB_142343463;
            }
            iVar11 = *(int *)(lVar3 + 4 + (longlong)iVar11 * 0xc);
          } while (iVar11 != -1);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
LAB_142343463:
      uVar10 = uVar10 + 1;
      local_res10 = local_res10 + 4;
      lVar13 = lVar13 + 8;
    } while ((int)uVar10 < (param_1->RequestIDs).ArrayNum);
  }
  return;
}

// operator() @ 15048a7a0

bool __thiscall
`FAsyncLoadingThread2::NotifyRegistrationEvent'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4516523828209243444>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209243444>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048aaa0

bool __thiscall
`FAsyncLoadingThread2::ProcessPendingCDOs'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4516523828209249596>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209249596>,
                       &`public:___cdecl_`private:_bool___cdecl_FAsyncLoadingThread2::ProcessPendingCDOs(FAsyncLoadingThreadState2&___ptr64)___ptr64'::`28'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048ab10;
    }
  }
  bVar2 = false;
LAB_15048ab10:
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

