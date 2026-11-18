// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClientDebug
// Functions: 5

// StartupModule @ 148ce4ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStorageServerClientDebugModule::StartupModule(FStorageServerClientDebugModule *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FRunnableThread *pFVar3;
  code *pcVar4;
  bool bVar5;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar6;
  FStorageServerConnectionDebug *pFVar7;
  HistoryItem *pHVar8;
  undefined8 *puVar9;
  FString *pFVar10;
  ulong64 uVar11;
  FDelegateHandle FVar12;
  FEvent *pFVar13;
  FRunnableThread *pFVar14;
  FModuleManager *pFVar15;
  FName *pFVar16;
  FStorageServerConnectionDebug *pFVar17;
  undefined1 auStackY_138 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  LARGE_INTEGER local_f0;
  FStorageServerClientDebugModule *local_e8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  wchar_t local_a8 [4];
  <lambda_1> local_a0;
  FName local_98;
  FString local_90;
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  this_00 = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::FindPlatformFile(this_00,L"StorageServer");
  if (pIVar6 != (IPlatformFile *)0x0) {
    pFVar7 = ::operator_new(0xa0);
    pFVar17 = (FStorageServerConnectionDebug *)0x0;
    if (pFVar7 != (FStorageServerConnectionDebug *)0x0) {
      pFVar7->MaxReqThroughput = 0.0;
      pFVar7->MinReqThroughput = 0.0;
      pFVar7->ReqCount = 0;
      pFVar7->Throughput = 0.0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      (pFVar7->History)._Mypair._Myval2._Myfirst = (HistoryItem *)0x0;
      (pFVar7->History)._Mypair._Myval2._Mylast = (HistoryItem *)0x0;
      (pFVar7->History)._Mypair._Myval2._Myend = (HistoryItem *)0x0;
      pHVar8 = ::operator_new(0x28);
      (pFVar7->History)._Mypair._Myval2._Myfirst = pHVar8;
      (pFVar7->History)._Mypair._Myval2._Mylast = pHVar8;
      (pFVar7->History)._Mypair._Myval2._Myend = pHVar8 + 1;
      pHVar8 = (pFVar7->History)._Mypair._Myval2._Myfirst;
      memmove(pHVar8,&local_58,0x28);
      (pFVar7->History)._Mypair._Myval2._Mylast = pHVar8 + 1;
      pFVar7->UpdateStatsTime = 0.0;
      pFVar1 = &pFVar7->HostAddress;
      pFVar7->StorageServerPlatformFile = (IStorageServerPlatformFile *)pIVar6;
      puVar9 = (undefined8 *)(**(code **)((longlong)*pIVar6 + 0x248))(pIVar6,local_80);
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar7->HostAddress).Data.ArrayNum = 0;
      (pFVar7->HostAddress).Data.ArrayMax = 0;
      local_68 = *puVar9;
      uStack_60 = puVar9[1];
      pFVar10 = ::FString::ConstructFromPtrSize(&local_90,(wchar_t *)*puVar9,(int)puVar9[1]);
      if (pFVar1 != pFVar10) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar7->HostAddress).Data.ArrayNum = (pFVar10->Data).ArrayNum;
        (pFVar7->HostAddress).Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar7->CS,4000);
      pFVar7->ZenIcon = (UTexture2D *)0x0;
      pFVar7->bDestroyZenIcon = false;
      pFVar7->IndicatorElapsedTime = 0.0;
      pFVar7->IndicatorLastTime = 0.0;
      QueryPerformanceCounter(&local_f0);
      pFVar7->IndicatorLastTime =
           (double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      pFVar17 = pFVar7;
    }
    pFVar7 = (this->ConnectionDebug).Ptr;
    if ((pFVar7 != pFVar17) &&
       ((this->ConnectionDebug).Ptr = pFVar17, pFVar7 != (FStorageServerConnectionDebug *)0x0)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar7->CS);
      pFVar2 = (pFVar7->HostAddress).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      std::
      vector<FStorageServerConnectionDebug::HistoryItem,std::allocator<FStorageServerConnectionDebug::HistoryItem>_>
      ::_Tidy(&pFVar7->History);
      ::operator_delete(pFVar7,0xa0);
    }
    pFVar17 = (this->ConnectionDebug).Ptr;
    local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_100.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_c8);
    local_b0 = &local_100;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_100);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFStorageServerConnectionDebug____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar9[4] = FStorageServerConnectionDebug::OnDraw;
      puVar9[3] = pFVar17;
      if ((pFVar17 == (FStorageServerConnectionDebug *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    FVar12 = UDebugDrawService::Register
                       (local_a8,(TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                                  *)L"Game");
                    /* WARNING: Load size is inaccurate */
    (this->OnDrawDebugHandle).ID = *FVar12.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_e0);
    if ((local_100.DelegateSize != 0) &&
       (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_100,0,0,0x10);
      local_100.DelegateSize = 0;
    }
    if (local_e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
    }
    if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_100.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
    if (((this->Thread).Ptr != (FRunnableThread *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Thread.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClientDebug\\Private\\StorageServerConnectionDebug.cpp"
                           ,0x1e3,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar13 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this->ThreadStopEvent = pFVar13;
    pFVar17 = (FStorageServerConnectionDebug *)&this->_padding_;
    if (this == (FStorageServerClientDebugModule *)0x0) {
      pFVar17 = (FStorageServerConnectionDebug *)0x0;
    }
    pFVar14 = FRunnableThread::Create
                        ((FRunnable *)pFVar17,L"StorageServerStartupDebug",0,TPri_Lowest,
                         0xffffffffffffffff,None);
    pFVar3 = (this->Thread).Ptr;
    if ((pFVar3 != pFVar14) && ((this->Thread).Ptr = pFVar14, pFVar3 != (FRunnableThread *)0x0)) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    local_e8 = this;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_FStorageServerClientDebugModule::StartupModule_::__l5::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,&local_a0);
    pFVar15 = FModuleManager::Get();
    bVar5 = FModuleManager::ModuleExists(pFVar15,L"LowLevelNetTrace",(FString *)0x0);
    if (bVar5) {
      pFVar15 = FModuleManager::Get();
      pFVar16 = ::FName::FName(&local_98,L"LowLevelNetTrace");
      FModuleManager::LoadModule(pFVar15,*pFVar16,None);
    }
  }
  return;
}

// ShutdownModule @ 148ce4f10

void __thiscall
FStorageServerClientDebugModule::ShutdownModule(FStorageServerClientDebugModule *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FRunnableThread *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FStorageServerConnectionDebug *pFVar6;
  FScriptContainerElement *pFVar7;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  undefined8 local_18 [2];
  
  if ((this->ConnectionDebug).Ptr != (FStorageServerConnectionDebug *)0x0) {
    pFVar4 = (this->Thread).Ptr;
    if (pFVar4 != (FRunnableThread *)0x0) {
      (this->Thread).Ptr = (FRunnableThread *)0x0;
      (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,1);
      FGenericPlatformProcess::ReturnSynchEventToPool(this->ThreadStopEvent);
      this->ThreadStopEvent = (FEvent *)0x0;
    }
    pTVar1 = &this->TickHandle;
    if ((((this->TickHandle).Object != (FElement *)0x0) &&
        (pTVar5 = (this->TickHandle).WeakReferenceCount.ReferenceController,
        pTVar5 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar5->SharedReferenceCount)) {
      local_28.Object = pTVar1->Object;
      local_28.WeakReferenceCount.ReferenceController =
           (this->TickHandle).WeakReferenceCount.ReferenceController;
      if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      FTSTicker::RemoveTicker(&local_28);
      if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
        pTVar5 = (this->TickHandle).WeakReferenceCount.ReferenceController;
        pTVar1->Object = (FElement *)0x0;
        (this->TickHandle).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar5->WeakReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
          }
        }
      }
    }
    UDebugDrawService::Unregister((FDelegateHandle)(this->OnDrawDebugHandle).ID);
    pFVar6 = (this->ConnectionDebug).Ptr;
    if (pFVar6 != (FStorageServerConnectionDebug *)0x0) {
      (this->ConnectionDebug).Ptr = (FStorageServerConnectionDebug *)0x0;
      DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar6->CS);
      pFVar7 = (pFVar6->HostAddress).Data.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      std::
      vector<FStorageServerConnectionDebug::HistoryItem,std::allocator<FStorageServerConnectionDebug::HistoryItem>_>
      ::_Tidy(&pFVar6->History);
      ::operator_delete(pFVar6,0xa0);
    }
  }
  return;
}

// Run @ 148ce5030

uint __thiscall FStorageServerClientDebugModule::Run(FStorageServerClientDebugModule *this)

{
  FRunnableThread *pFVar1;
  char cVar2;
  
  pFVar1 = (this->Thread).Ptr;
  cVar2 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,10,0);
  while (cVar2 == '\0') {
    FStorageServerConnectionDebug::OnTick((FStorageServerConnectionDebug *)this->_padding_,0.0);
    pFVar1 = (this->Thread).Ptr;
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,10,0);
  }
  return 0;
}

// Stop @ 148ce5080

void __thiscall FStorageServerClientDebugModule::Stop(FStorageServerClientDebugModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148ce5087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Thread).Ptr)->_padding_ + 0x10))();
  return;
}

// StartTick @ 148ce7910

void __thiscall FStorageServerClientDebugModule::StartTick(FStorageServerClientDebugModule *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FStorageServerConnectionDebug *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTSTicker *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  TWeakPtr<FTSTicker::FElement,1> *pTVar9;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if ((((this->TickHandle).Object != (FElement *)0x0) &&
      (pTVar3 = (this->TickHandle).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TickHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClientDebug\\Private\\StorageServerConnectionDebug.cpp"
                       ,500,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = FTSTicker::GetCoreTicker();
  pFVar4 = (this->ConnectionDebug).Ptr;
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFStorageServerConnectionDebug____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = FStorageServerConnectionDebug::OnTick;
    puVar7[3] = pFVar4;
    if (pFVar4 == (FStorageServerConnectionDebug *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar9 = FTSTicker::AddTicker
                     (this_00,&local_78,
                      (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
  if (&this->TickHandle != pTVar9) {
    (this->TickHandle).Object = pTVar9->Object;
    pTVar9->Object = (FElement *)0x0;
    pTVar3 = (this->TickHandle).WeakReferenceCount.ReferenceController;
    (this->TickHandle).WeakReferenceCount.ReferenceController =
         (pTVar9->WeakReferenceCount).ReferenceController;
    (pTVar9->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

