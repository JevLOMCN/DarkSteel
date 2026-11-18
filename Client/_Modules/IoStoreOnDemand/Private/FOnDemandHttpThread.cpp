// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 24

// FOnDemandHttpThread @ 1445a3d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandHttpThread * __thiscall
UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread(FOnDemandHttpThread *this)

{
  TUniquePtr<IConsoleCommand,FConsoleCommandUnregister> *this_00;
  TUniquePtr<IConsoleCommand,FConsoleCommandUnregister> *this_01;
  FRunnableThread *pFVar1;
  IConsoleCommand *pIVar2;
  code *pcVar3;
  IConsoleManager *pIVar4;
  bool bVar5;
  int iVar6;
  FSlab *pFVar7;
  FSlab *pFVar8;
  wchar_t *pwVar9;
  FRunnableThread *pFVar10;
  FDelegateHandle FVar11;
  FHostGroupManager *pFVar12;
  FOnDemandHttpThread *pFVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  FSlab *pFVar16;
  int iVar17;
  longlong lVar18;
  FSlab *pFVar19;
  FLLMScope local_res8 [2];
  FName local_res10;
  FOnDemandHttpThread *local_res18;
  FOnDemandHttpThread *local_res20;
  ulonglong uVar20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  FDelegateAllocation local_110;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  FDelegateAllocation local_f8;
  FMemScope local_e8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  <lambda_1> local_70;
  <lambda_2> local_68;
  FConsoleCommandUnregister local_60 [8];
  FConsoleCommandUnregister local_58 [24];
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  pFVar19 = (FSlab *)0x0;
  (this->Thread).Ptr = (FRunnableThread *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  FEventRef::FEventRef(&this->TickThreadEvent,AutoReset);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnTickIdleDelegate,4000);
  *(undefined8 *)&(this->OnTickIdleDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OnTickIdleDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->OnTickIdleDelegate).field_0x38 = 2;
  (this->HttpClient).Ptr = (FMultiEndpointHttpClient *)0x0;
  (this->OnRecreateHttpClientHandle).ID = 0;
  (this->OnHostGroupDisconnectedHandle).ID = 0;
  (this->RecreateMutex).State = (atomic<unsigned_char>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HttpRequests,4000);
  (this->HttpRequests).Head = (FHttpRequest *)0x0;
  (this->HttpRequests).Tail = (FHttpRequest *)0x0;
  (this->HttpRequests).ListNum = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HttpPausedRequests,4000);
  (this->HttpPausedRequests).Head = (FHttpRequest *)0x0;
  this_00 = &this->PauseCommand;
  (this->HttpPausedRequests).Tail = (FHttpRequest *)0x0;
  this_01 = &this->UnpauseCommand;
  (this->HttpPausedRequests).ListNum = 0;
  this_00->Ptr = (IConsoleCommand *)0x0;
  this_01->Ptr = (IConsoleCommand *)0x0;
  this->PausedMutex = (atomic<unsigned_char>)0x0;
  this->PauseFilter = None;
  this->ThreadPriority = TPri_Normal;
  this->bStopRequested = (atomic<bool>)0x0;
  this->bRecreateHttpClient = (atomic<bool>)0x0;
  this->bHttpEnabled = (atomic<bool>)0x1;
  this->AllocatorMutex = (atomic<unsigned_char>)0x0;
  (this->RequestAllocator).CurrentSlab = (FSlab *)0x0;
  pFVar7 = ::operator_new(0x1010);
  pFVar16 = pFVar19;
  if (pFVar7 != (FSlab *)0x0) {
    memset(&pFVar7->field_0x4,0,0x100c);
    lVar18 = 0x20;
    pFVar7->Allocated = 0;
    pFVar7->Freed = 0;
    pFVar8 = pFVar7;
    do {
      pFVar8 = (FSlab *)&pFVar8->Elements[0].Slab;
      *(FSlab **)pFVar8 = (FSlab *)0x0;
      lVar18 = lVar18 + -1;
      pFVar16 = pFVar7;
    } while (lVar18 != 0);
  }
  (this->RequestAllocator).CurrentSlab = pFVar16;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Ias.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Ias.UniqueName;
  FMemScope::FMemScope(&local_e8,&local_res10,true);
  iVar17 = 4;
  if (GOnDemandBackendThreadPriorityIndex < 4) {
    iVar17 = GOnDemandBackendThreadPriorityIndex;
  }
  iVar6 = 0;
  if (0 < iVar17) {
    iVar6 = iVar17;
  }
  this->ThreadPriority = GOnDemandBackendThreadPriorities[iVar6];
  bVar5 = FCommandLine::IsInitialized();
  if (bVar5) {
    pwVar9 = FCommandLine::Get();
  }
  else {
    pwVar9 = L"";
  }
  bVar5 = FParse::Param(pwVar9,L"-Ias.EnableHttpThreadPreFork");
  uVar20 = 0xffffffffffffffff;
  pFVar10 = FForkProcessHelper::CreateForkableThread
                      ((FRunnable *)this,L"IoStoreOnDemand.Http",0,this->ThreadPriority,
                       0xffffffffffffffff,None,bVar5);
  pFVar1 = (this->Thread).Ptr;
  if ((pFVar1 != pFVar10) && ((this->Thread).Ptr = pFVar10, pFVar1 != (FRunnableThread *)0x0)) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  local_res18 = this;
  FVar11 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
           AddLambda<_UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread_::__l2::<lambda_1>_>
                     ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                       *)&OnRecreateHttpClient,&local_70);
                    /* WARNING: Load size is inaccurate */
  (this->OnRecreateHttpClientHandle).ID = *FVar11.ID;
  local_res20 = this;
  pFVar12 = FHostGroupManager::Get();
  FVar11 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
           AddLambda<_UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread_::__l2::<lambda_2>_>
                     ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                       *)&pFVar12->HostGroupDisconnectedDelegate,&local_68);
                    /* WARNING: Load size is inaccurate */
  (this->OnHostGroupDisconnectedHandle).ID = *FVar11.ID;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FOnDemandHttpThread *)(*pcVar3)();
    return pFVar13;
  }
  pIVar4 = IConsoleManager::Singleton;
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0x88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_b0);
  local_98 = &local_110;
  puVar14 = Core::Private::DelegateAllocate(0x20,&local_110);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread'::`2'::<lambda_3>_>
                ::_vftable_;
    puVar14[3] = this;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  uVar20 = uVar20 & 0xffffffff00000000;
  pFVar16 = (FSlab *)(*pcVar3)(pIVar4,L"iax.HttpPause",
                               L"Pause all http requests. Passing in \'IAD\' or \'IAS\' as an arg to only pause requests of that type"
                               ,&local_118,uVar20);
  if ((FConsoleCommandUnregister *)this_00 != local_60) {
    pIVar2 = this_00->Ptr;
    this_00->Ptr = (IConsoleCommand *)pFVar16;
    FConsoleCommandUnregister::operator()((FConsoleCommandUnregister *)this_00,pIVar2);
    pFVar16 = pFVar19;
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FOnDemandHttpThread *)(*pcVar3)();
    return pFVar13;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pFVar16);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_e0);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FOnDemandHttpThread *)(*pcVar3)();
    return pFVar13;
  }
  pIVar4 = IConsoleManager::Singleton;
  local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f8.DelegateSize = 0;
  pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0x88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_100,(FWriteAccessScope *)&local_90);
  local_78 = &local_f8;
  puVar14 = Core::Private::DelegateAllocate(0x20,&local_f8);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread'::`2'::<lambda_4>_>
                ::_vftable_;
    puVar14[3] = this;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  pFVar16 = (FSlab *)(*pcVar3)(pIVar4,L"iax.HttpUnpause",
                               L"Unpause all http requests. Passing in \'IAD\' or \'IAS\' as an arg to only unpause requests of that type"
                               ,&local_100,uVar20 & 0xffffffff00000000);
  if ((FConsoleCommandUnregister *)this_01 != local_58) {
    pIVar2 = this_01->Ptr;
    this_01->Ptr = (IConsoleCommand *)pFVar16;
    FConsoleCommandUnregister::operator()((FConsoleCommandUnregister *)this_01,pIVar2);
    pFVar16 = pFVar19;
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FOnDemandHttpThread *)(*pcVar3)();
    return pFVar13;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pFVar16);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_100,(FWriteAccessScope *)&local_c8);
  if ((local_f8.DelegateSize != 0) &&
     (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f8,0,0,0x10);
    local_f8.DelegateSize = 0;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
  FMemScope::~FMemScope(&local_e8);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// ~FOnDemandHttpThread @ 1445a8e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandHttpThread::~FOnDemandHttpThread(FOnDemandHttpThread *this)

{
  FDelegateHandle FVar1;
  FRunnableThread *pFVar2;
  FSlab *pFVar3;
  IConsoleCommand *pIVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  FHostGroupManager *pFVar8;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  if ((this->OnHostGroupDisconnectedHandle).ID != 0) {
    pFVar8 = FHostGroupManager::Get();
    FVar1.ID = (this->OnHostGroupDisconnectedHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                 &pFVar8->HostGroupDisconnectedDelegate,FVar1);
    }
    (this->OnHostGroupDisconnectedHandle).ID = 0;
  }
  FVar1.ID = (this->OnRecreateHttpClientHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnRecreateHttpClient,FVar1);
    (this->OnRecreateHttpClientHandle).ID = 0;
  }
  pFVar2 = (this->Thread).Ptr;
  if (pFVar2 != (FRunnableThread *)0x0) {
    (this->Thread).Ptr = (FRunnableThread *)0x0;
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
  }
  DrainHttpRequests(this);
  pFVar3 = (this->RequestAllocator).CurrentSlab;
  if (pFVar3->Allocated != pFVar3->Freed) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  ::operator_delete((this->RequestAllocator).CurrentSlab,0x1010);
  pIVar4 = (this->UnpauseCommand).Ptr;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar4,1);
  pIVar4 = (this->PauseCommand).Ptr;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar4,1);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HttpPausedRequests);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HttpRequests);
  TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>::operator()
            ((TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> *)&this->HttpClient,
             (this->HttpClient).Ptr);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTickIdleDelegate).field_0x28,*(int *)&(this->OnTickIdleDelegate).field_0x30)
  ;
  pvVar5 = *(void **)&(this->OnTickIdleDelegate).field_0x28;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnTickIdleDelegate);
  FEventRef::~FEventRef(&this->TickThreadEvent);
  pFVar2 = (this->Thread).Ptr;
  if (pFVar2 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
  }
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 1445aa770

void __thiscall
`UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread'::__l2::<lambda_1>::operator()(void *this)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId271,"FOnDemandHttpThread::OnRecreateHttpClient",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
               ,0x10f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId271);
  }
  lVar3 = *(longlong *)this;
  LOCK();
  bVar5 = *(char *)(lVar3 + 0x78) == '\0';
  if (bVar5) {
    *(char *)(lVar3 + 0x78) = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow((FMutex *)(lVar3 + 0x78));
  }
  LOCK();
  *(undefined1 *)(*(longlong *)this + 0x119) = 1;
  UNLOCK();
  (**(code **)(**(longlong **)(*(longlong *)this + 0x18) + 0x10))();
  LOCK();
  pbVar1 = (byte *)(lVar3 + 0x78);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 1;
  UNLOCK();
  if ((bVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)(lVar3 + 0x78));
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1445ae840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandHttpThread::TickRequests'::__l55::<lambda_1>::operator()
          (void *this,FMultiEndpointHttpClientResponse *param_1)

{
  int *piVar1;
  EHttpRequestType EVar2;
  int iVar3;
  longlong lVar4;
  BufCore *pBVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  FIoBuffer *pFVar9;
  longlong *plVar10;
  bool bVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  FIoBuffer local_res20;
  FIASHostGroup local_b8;
  FIASHostGroup local_a8;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  undefined8 uStack_60;
  FScriptContainerElement *local_58;
  undefined8 uStack_50;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId529,"FOnDemandHttpThread::RequestCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
               ,0x211);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId529);
  }
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + -1;
  LOCK();
  UE::IoStore::GHttpNumConcurrentRequests =
       (atomic<unsigned_int>)((int)UE::IoStore::GHttpNumConcurrentRequests + -1);
  UNLOCK();
  if (param_1->RetryCount != 0) {
    UE::IoStore::FOnDemandIoBackendStats::OnHttpRetry
              (UE::IoStore::GStatistics,
               *(EHttpRequestType *)(*(longlong *)((longlong)this + 8) + 0x62));
  }
  if (param_1->StatusCode - 200 < 100) {
    lVar4 = *(longlong *)((longlong)this + 8);
    if ((*(longlong *)(lVar4 + 0x40) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x40);
    local_b8.Impl.Object = *(FImpl **)(lVar4 + 0x30);
    local_b8.Impl.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar4 + 0x38);
    if (local_b8.Impl.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (local_b8.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    UE::IoStore::FIASHostGroup::OnSuccessfulResponse(&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.Impl.SharedReferenceCount.ReferenceController);
    if (param_1->CDNCacheStatus == -1) {
      UE::IoStore::GHttpCdnCacheUnknown = UE::IoStore::GHttpCdnCacheUnknown + 1;
    }
    else if (param_1->CDNCacheStatus == '\0') {
      UE::IoStore::GHttpCdnCacheMiss = UE::IoStore::GHttpCdnCacheMiss + 1;
    }
    else {
      UE::IoStore::GHttpCdnCacheHit = UE::IoStore::GHttpCdnCacheHit + 1;
    }
    pBVar5 = (param_1->Body).CorePtr.Reference;
    UE::IoStore::FOnDemandIoBackendStats::OnHttpGet
              (UE::IoStore::GStatistics,
               *(EHttpRequestType *)(*(longlong *)((longlong)this + 8) + 0x62),
               (ulonglong)CONCAT14(pBVar5->DataSizeHigh,pBVar5->DataSizeLow),
               param_1->DurationMilliseconds);
    local_98 = (param_1->Reason).Data.AllocatorInstance.Data;
    lVar4 = *(longlong *)((longlong)this + 8);
    iVar3 = (param_1->Reason).Data.ArrayNum;
    iStack_90 = iVar3 + -1;
    local_res8[0] = param_1->StatusCode;
    if (iVar3 == 0) {
      iStack_90 = 0;
    }
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    local_68 = local_98;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar4 + 0x10));
    pcVar6 = *(code **)(lVar4 + 0x10);
    plVar10 = (longlong *)(lVar4 + 0x20);
    if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
      plVar10 = *(longlong **)(lVar4 + 0x38);
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar6)(uVar8,local_res8,&local_68,param_1);
  }
  else {
    EVar2 = *(EHttpRequestType *)(*(longlong *)((longlong)this + 8) + 0x62);
    if (param_1->bCanceled == false) {
      UE::IoStore::FOnDemandIoBackendStats::OnHttpError(UE::IoStore::GStatistics,EVar2);
      lVar4 = *(longlong *)((longlong)this + 8);
      if ((*(longlong *)(lVar4 + 0x40) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x40);
      local_a8.Impl.Object = *(FImpl **)(lVar4 + 0x30);
      local_a8.Impl.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar4 + 0x38);
      if (local_a8.Impl.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      bVar7 = UE::IoStore::FIASHostGroup::OnFailedResponse(&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.Impl.SharedReferenceCount.ReferenceController);
      if (bVar7) {
        UE::IoStore::FOnDemandIoBackendStats::OnHttpDisconnected(UE::IoStore::GStatistics);
      }
      lVar4 = *(longlong *)((longlong)this + 8);
      pFVar9 = FIoBuffer::FIoBuffer(&local_res20);
      local_78 = (param_1->Reason).Data.AllocatorInstance.Data;
      iVar3 = (param_1->Reason).Data.ArrayNum;
      local_res18[0] = param_1->StatusCode;
      iStack_70 = iVar3 + -1;
      if (iVar3 == 0) {
        iStack_70 = 0;
      }
      uStack_40 = CONCAT44(uStack_6c,iStack_70);
      local_48 = local_78;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar4 + 0x10));
      pcVar6 = *(code **)(lVar4 + 0x10);
      plVar10 = (longlong *)(lVar4 + 0x20);
      if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
        plVar10 = *(longlong **)(lVar4 + 0x38);
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar6)(uVar8,local_res18,&local_48,pFVar9);
      if (local_res20.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res20.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)local_res20.CorePtr.Reference + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)local_res20.CorePtr.Reference);
          ::operator_delete((void *)local_res20.CorePtr.Reference,0x20);
        }
      }
    }
    else {
      UE::IoStore::FOnDemandIoBackendStats::OnHttpCancel(UE::IoStore::GStatistics,EVar2);
      local_88 = (param_1->Reason).Data.AllocatorInstance.Data;
      lVar4 = *(longlong *)((longlong)this + 8);
      iVar3 = (param_1->Reason).Data.ArrayNum;
      iStack_80 = iVar3 + -1;
      local_res10[0] = param_1->StatusCode;
      if (iVar3 == 0) {
        iStack_80 = 0;
      }
      uStack_50 = CONCAT44(uStack_7c,iStack_80);
      local_58 = local_88;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar4 + 0x10));
      pcVar6 = *(code **)(lVar4 + 0x10);
      plVar10 = (longlong *)(lVar4 + 0x20);
      if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
        plVar10 = *(longlong **)(lVar4 + 0x38);
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar6)(uVar8,local_res10,&local_58,param_1);
    }
  }
  UE::IoStore::FOnDemandHttpThread::DestroyRequest
            (*(FOnDemandHttpThread **)this,*(FHttpRequest **)((longlong)this + 8));
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AllocateRequest @ 1445b3780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FHttpRequest * __thiscall
UE::IoStore::FOnDemandHttpThread::AllocateRequest
          (FOnDemandHttpThread *this,FOnDemandChunkInfo *param_1)

{
  FElement *pFVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  ushort uVar3;
  FSlab *pFVar4;
  code *pcVar5;
  FHttpRequest *pFVar6;
  FSlab *pFVar7;
  longlong lVar8;
  FSlab *pFVar9;
  FSlab *pFVar10;
  bool bVar11;
  
  this_00 = &this->AllocatorMutex;
  LOCK();
  bVar11 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar11) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar11) {
    FMutex::LockSlow(this_00);
  }
  pFVar4 = (this->RequestAllocator).CurrentSlab;
  uVar3 = pFVar4->Allocated;
  pFVar4->Allocated = uVar3 + 1;
  if ((0x1f < uVar3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementIndex < SlabSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                          ,0x36,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pFVar6 = (FHttpRequest *)(*pcVar5)();
    return pFVar6;
  }
  pFVar4 = (this->RequestAllocator).CurrentSlab;
  pFVar4->Elements[uVar3].Slab = pFVar4;
  if (((this->RequestAllocator).CurrentSlab)->Allocated == 0x20) {
    pFVar7 = ::operator_new(0x1010);
    pFVar10 = (FSlab *)0x0;
    if (pFVar7 != (FSlab *)0x0) {
      memset(&pFVar7->field_0x4,0,0x100c);
      lVar8 = 0x20;
      pFVar7->Allocated = 0;
      pFVar7->Freed = 0;
      pFVar9 = pFVar7;
      do {
        pFVar9 = (FSlab *)&pFVar9->Elements[0].Slab;
        *(FSlab **)pFVar9 = (FSlab *)0x0;
        lVar8 = lVar8 + -1;
        pFVar10 = pFVar7;
      } while (lVar8 != 0);
    }
    (this->RequestAllocator).CurrentSlab = pFVar10;
  }
  pFVar1 = pFVar4->Elements + uVar3;
  (pFVar1->Data).Pad[0] = '\0';
  (pFVar1->Data).Pad[1] = '\0';
  (pFVar1->Data).Pad[2] = '\0';
  (pFVar1->Data).Pad[3] = '\0';
  (pFVar1->Data).Pad[4] = '\0';
  (pFVar1->Data).Pad[5] = '\0';
  (pFVar1->Data).Pad[6] = '\0';
  (pFVar1->Data).Pad[7] = '\0';
  pFVar1 = pFVar4->Elements + uVar3;
  (pFVar1->Data).Pad[8] = '\0';
  (pFVar1->Data).Pad[9] = '\0';
  (pFVar1->Data).Pad[10] = '\0';
  (pFVar1->Data).Pad[0xb] = '\0';
  pFVar1 = pFVar4->Elements + uVar3;
  (pFVar1->Data).Pad[0x10] = '\0';
  (pFVar1->Data).Pad[0x11] = '\0';
  (pFVar1->Data).Pad[0x12] = '\0';
  (pFVar1->Data).Pad[0x13] = '\0';
  (pFVar1->Data).Pad[0x14] = '\0';
  (pFVar1->Data).Pad[0x15] = '\0';
  (pFVar1->Data).Pad[0x16] = '\0';
  (pFVar1->Data).Pad[0x17] = '\0';
  pFVar1 = pFVar4->Elements + uVar3;
  (pFVar1->Data).Pad[0x38] = '\0';
  (pFVar1->Data).Pad[0x39] = '\0';
  (pFVar1->Data).Pad[0x3a] = '\0';
  (pFVar1->Data).Pad[0x3b] = '\0';
  (pFVar1->Data).Pad[0x3c] = '\0';
  (pFVar1->Data).Pad[0x3d] = '\0';
  (pFVar1->Data).Pad[0x3e] = '\0';
  (pFVar1->Data).Pad[0x3f] = '\0';
  *(FOnDemandContainer **)(pFVar4->Elements[uVar3].Data.Pad + 0x40) =
       (param_1->SharedContainer).Object;
  *(TReferenceControllerBase<1> **)(pFVar4->Elements[uVar3].Data.Pad + 0x48) =
       (param_1->SharedContainer).SharedReferenceCount.ReferenceController;
  (param_1->SharedContainer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->SharedContainer).Object = (FOnDemandContainer *)0x0;
  *(FOnDemandChunkEntry **)(pFVar4->Elements[uVar3].Data.Pad + 0x50) = param_1->Entry;
  pFVar4->Elements[uVar3].Data.Pad[99] = '\0';
  pFVar1 = pFVar4->Elements + uVar3;
  (pFVar1->Data).Pad[100] = '\0';
  (pFVar1->Data).Pad[0x65] = '\0';
  (pFVar1->Data).Pad[0x66] = '\0';
  (pFVar1->Data).Pad[0x67] = '\0';
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return (FHttpRequest *)(pFVar4->Elements + uVar3);
}

// CancelRequest @ 1445b6cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandHttpThread::CancelRequest(FOnDemandHttpThread *this,void *param_1)

{
  if ((param_1 != (void *)0x0) &&
     (*(undefined1 *)((longlong)param_1 + 99) = 1, GIaxHttpEnableInflightCancellation != false)) {
    FMultiEndpointHttpClient::CancelRequest((this->HttpClient).Ptr,*(uint *)((longlong)param_1 + 8))
    ;
    return;
  }
  return;
}

// DestroyRequest @ 1445c8420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandHttpThread::DestroyRequest(FOnDemandHttpThread *this,FHttpRequest *param_1)

{
  short *psVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  longlong *plVar3;
  FHttpRequest *pFVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  
  this_00 = &this->AllocatorMutex;
  LOCK();
  bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->ChunkInfo).SharedContainer.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&param_1->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(param_1->CompletionCallback).field_0x28;
    plVar6 = (longlong *)&(param_1->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  pFVar4 = param_1[1].NextRequest;
  psVar1 = (short *)((longlong)&pFVar4->NextRequest + 2);
  *psVar1 = *psVar1 + 1;
  if (*(short *)((longlong)&pFVar4->NextRequest + 2) == 0x20) {
    if ((*(short *)&pFVar4->NextRequest != 0x20) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Slab->Freed == Slab->Allocated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                           ,0x48,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::operator_delete(pFVar4,0x1010);
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return;
}

// DrainHttpRequests @ 1445c8c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandHttpThread::DrainHttpRequests(FOnDemandHttpThread *this)

{
  int *piVar1;
  TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *lpCriticalSection;
  int iVar2;
  EHttpRequestType EVar3;
  FHttpRequest *pFVar4;
  FHttpRequest *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  FChannel *pFVar8;
  FIoBuffer this_00;
  ushort uVar9;
  FIoBuffer *pFVar10;
  undefined8 uVar11;
  atomic<unsigned_int> aVar12;
  longlong *plVar13;
  undefined4 local_res8 [2];
  FIoBuffer local_res10;
  undefined4 uStack_4c;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  OnTogglePause(this,false,All);
  lpCriticalSection = &this->HttpRequests;
  if (lpCriticalSection == (TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->HttpRequests).ListNum == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
  pFVar4 = (this->HttpRequests).Head;
  (this->HttpRequests).Tail = (FHttpRequest *)0x0;
  (this->HttpRequests).Head = (FHttpRequest *)0x0;
  (this->HttpRequests).ListNum = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar8 = CountersChannel;
  while (pFVar4 != (FHttpRequest *)0x0) {
    pFVar5 = pFVar4->NextRequest;
    EVar3 = pFVar4->Type;
    CountersChannel = pFVar8;
    GHttpInflightCount[EVar3].Value = GHttpInflightCount[EVar3].Value + 1;
    if (-1 < pFVar8->Enabled) {
      if (GHttpInflightCount[EVar3].CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (GHttpInflightCount[EVar3].CounterName,TraceCounterType_Int,
                           GHttpInflightCount[EVar3].CounterFlags & 0xf);
        LOCK();
        if (GHttpInflightCount[EVar3].CounterId == (atomic<unsigned_int>)0x0) {
          aVar12._2_2_ = 0;
          aVar12._0_2_ = uVar9;
          GHttpInflightCount[EVar3].CounterId = aVar12;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42(GHttpInflightCount[EVar3].CounterId,0),GHttpInflightCount[EVar3].Value);
    }
    pFVar10 = FIoBuffer::FIoBuffer(&local_res10);
    uStack_40 = CONCAT44(uStack_4c,0x21);
    local_48 = L"Request cancelled due to shutdown";
    local_res8[0] = 0;
    Core::Private::Function::CheckCallable(*(void **)&pFVar4->CompletionCallback);
    plVar6 = *(longlong **)&(pFVar4->CompletionCallback).field_0x28;
    pcVar7 = *(code **)&pFVar4->CompletionCallback;
    plVar13 = (longlong *)&(pFVar4->CompletionCallback).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar13 = plVar6;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar7)(uVar11,local_res8,&local_48,pFVar10);
    this_00.CorePtr.Reference = local_res10.CorePtr.Reference;
    if (local_res10.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res10.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
        ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
      }
    }
    DestroyRequest(this,pFVar4);
    FOnDemandIoBackendStats::OnHttpCancel(GStatistics,pFVar4->Type);
    pFVar4 = pFVar5;
    pFVar8 = CountersChannel;
  }
  CountersChannel = pFVar8;
  return;
}

// Exit @ 1445cd430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandHttpThread::Exit(FOnDemandHttpThread *this)

{
  FMultiEndpointHttpClient *pFVar1;
  
  pFVar1 = (this->HttpClient).Ptr;
  if (pFVar1 != (FMultiEndpointHttpClient *)0x0) {
    (this->HttpClient).Ptr = (FMultiEndpointHttpClient *)0x0;
    TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>::operator()
              ((TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> *)&this->HttpClient,pFVar1);
    return;
  }
  return;
}

// GetSingleThreadInterface @ 1445d7890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FSingleThreadRunnable * __thiscall
UE::IoStore::FOnDemandHttpThread::GetSingleThreadInterface(FOnDemandHttpThread *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->_padding_;
  if (this == (FOnDemandHttpThread *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// Init @ 1445d9610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall UE::IoStore::FOnDemandHttpThread::Init(FOnDemandHttpThread *this)

{
  bool bVar1;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_Ias.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Ias.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  bVar1 = TryCreateHttpClient(this);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return bVar1;
}

// IsPaused @ 1445de000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandHttpThread::IsPaused(FOnDemandHttpThread *this,EHttpRequestType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == Streaming) {
    return (bool)(this->PauseFilter & Streaming);
  }
  if (param_1 != Installed) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
                       ,0x2ff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  return (bool)(this->PauseFilter >> 1 & 1);
}

// IssueRequest @ 1445deb70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
UE::IoStore::FOnDemandHttpThread::IssueRequest
          (FOnDemandHttpThread *this,FOnDemandChunkInfo *param_1,FIoOffsetAndLength *param_2,
          int param_3,
          TUniqueFunction<void___cdecl(unsigned_int,TStringView<wchar_t>,FIoBuffer_&&)> *param_4,
          EHttpRequestType param_5)

{
  int *piVar1;
  FMutex *this_00;
  TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *this_01;
  atomic<unsigned_char> aVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FOnDemandIoBackendStats *this_02;
  void *pvVar12;
  FSlab *pFVar13;
  longlong lVar14;
  FSlab *pFVar15;
  FHttpRequest *pFVar16;
  bool bVar17;
  bool bVar18;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId331,"FOnDemandHttpThread::IssueRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
               ,0x14b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId331);
  }
  this_00 = &this->AllocatorMutex;
  LOCK();
  bVar18 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar18) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar18) {
    FMutex::LockSlow(this_00);
  }
  pFVar13 = (this->RequestAllocator).CurrentSlab;
  uVar3 = pFVar13->Allocated;
  pFVar13->Allocated = uVar3 + 1;
  if ((0x1f < uVar3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementIndex < SlabSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                          ,0x36,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    pvVar12 = (void *)(*pcVar4)();
    return pvVar12;
  }
  pFVar13 = (this->RequestAllocator).CurrentSlab;
  pFVar16 = (FHttpRequest *)(pFVar13->Elements + uVar3);
  pFVar16[1].NextRequest = (FHttpRequest *)pFVar13;
  if (((this->RequestAllocator).CurrentSlab)->Allocated == 0x20) {
    pFVar13 = ::operator_new(0x1010);
    if (pFVar13 == (FSlab *)0x0) {
      pFVar13 = (FSlab *)0x0;
    }
    else {
      memset(&pFVar13->field_0x4,0,0x100c);
      pFVar13->Allocated = 0;
      pFVar13->Freed = 0;
      lVar14 = 0x20;
      pFVar15 = pFVar13;
      do {
        pFVar15 = (FSlab *)&pFVar15->Elements[0].Slab;
        *(FSlab **)pFVar15 = (FSlab *)0x0;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    (this->RequestAllocator).CurrentSlab = pFVar13;
  }
  pFVar16->NextRequest = (FHttpRequest *)0x0;
  pFVar16->HttpTicketId = 0;
  *(undefined8 *)&pFVar16->CompletionCallback = 0;
  *(undefined8 *)&(pFVar16->CompletionCallback).field_0x28 = 0;
  (pFVar16->ChunkInfo).SharedContainer.Object = (param_1->SharedContainer).Object;
  (pFVar16->ChunkInfo).SharedContainer.SharedReferenceCount.ReferenceController =
       (param_1->SharedContainer).SharedReferenceCount.ReferenceController;
  (param_1->SharedContainer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->SharedContainer).Object = (FOnDemandContainer *)0x0;
  (pFVar16->ChunkInfo).Entry = param_1->Entry;
  pFVar16->bCancelled = false;
  pFVar16->Priority = 0;
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  this_02 = GStatistics;
  *(undefined8 *)(pFVar16->ChunkRange).OffsetAndLength = *(undefined8 *)param_2->OffsetAndLength;
  *(undefined2 *)((pFVar16->ChunkRange).OffsetAndLength + 8) =
       *(undefined2 *)(param_2->OffsetAndLength + 8);
  uVar5 = *(undefined8 *)&pFVar16->CompletionCallback;
  uVar6 = *(undefined8 *)&(pFVar16->CompletionCallback).field_0x8;
  uVar7 = *(undefined8 *)&(pFVar16->CompletionCallback).field_0x10;
  uVar8 = *(undefined8 *)&(pFVar16->CompletionCallback).field_0x18;
  uVar9 = *(undefined8 *)&(pFVar16->CompletionCallback).field_0x20;
  uVar10 = *(undefined8 *)&(pFVar16->CompletionCallback).field_0x28;
  uVar11 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&pFVar16->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(pFVar16->CompletionCallback).field_0x8 = uVar11;
  uVar11 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(pFVar16->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(pFVar16->CompletionCallback).field_0x18 = uVar11;
  uVar11 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&(pFVar16->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&(pFVar16->CompletionCallback).field_0x28 = uVar11;
  *(undefined8 *)param_4 = uVar5;
  *(undefined8 *)&param_4->field_0x8 = uVar6;
  *(undefined8 *)&param_4->field_0x10 = uVar7;
  *(undefined8 *)&param_4->field_0x18 = uVar8;
  *(undefined8 *)&param_4->field_0x20 = uVar9;
  *(undefined8 *)&param_4->field_0x28 = uVar10;
  pFVar16->Type = param_5;
  pFVar16->Priority = param_3;
  FOnDemandIoBackendStats::OnHttpEnqueue(this_02,param_5);
  bVar18 = PauseRequest(this,pFVar16);
  if (!bVar18) {
    this_01 = &this->HttpRequests;
    if (this_01 == (TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_01);
    TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest>::EnqueueByPriorityInternal(this_01,pFVar16)
    ;
    piVar1 = &(this->HttpRequests).ListNum;
    *piVar1 = *piVar1 + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)this_01);
  }
  (**(code **)(((this->TickThreadEvent).Event)->_padding_ + 0x10))();
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar16;
}

// IssueRequest @ 1445dedf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
UE::IoStore::FOnDemandHttpThread::IssueRequest
          (FOnDemandHttpThread *this,FOnDemandChunkInfo *param_1,FIoOffsetAndLength *param_2,
          int param_3,
          TUniqueFunction<void___cdecl(unsigned_int,TStringView<wchar_t>,FIoBuffer_&&)> *param_4,
          EHttpRequestType param_5)

{
  void *pvVar1;
  FOnDemandChunkInfo local_28;
  
  local_28.SharedContainer.Object = (param_1->SharedContainer).Object;
  local_28.SharedContainer.SharedReferenceCount.ReferenceController =
       (param_1->SharedContainer).SharedReferenceCount.ReferenceController;
  if (local_28.SharedContainer.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedContainer.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedContainer.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Entry = param_1->Entry;
  pvVar1 = IssueRequest(this,&local_28,param_2,param_3,param_4,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedContainer.SharedReferenceCount.ReferenceController);
  return pvVar1;
}

// OnPauseCommand @ 1445e5a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandHttpThread::OnPauseCommand
          (FOnDemandHttpThread *this,bool param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  EHttpRequestTypeFilter EVar7;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 2) {
    EVar7 = All;
    if (iVar4 != 0) {
      if ((iVar4 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      pwVar6 = L"";
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)pFVar1;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,L"IAD");
      if (iVar4 == 0) {
        EVar7 = Installed;
      }
      else {
        if ((param_2->ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (*(int *)(pFVar1 + 8) != 0) {
          pwVar6 = *(wchar_t **)pFVar1;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp(pwVar6,L"IAS");
        if (iVar4 != 0) {
          FOutputDevice::Log(param_3,(FName *)&LogIas.field_0x4,Error,
                             L"Invalid arg for command, expecting \'IAD\' or \'IAS\'");
          return;
        }
        EVar7 = Streaming;
      }
    }
    OnTogglePause(this,param_1,EVar7);
  }
  else {
    FOutputDevice::Log(param_3,(FName *)&LogIas.field_0x4,Error,
                       L"Too many args for command, either 0 (all) or 1 (IAD/IAS) expected");
  }
  return;
}

// OnTogglePause @ 1445e78b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandHttpThread::OnTogglePause
          (FOnDemandHttpThread *this,bool param_1,EHttpRequestTypeFilter param_2)

{
  int *piVar1;
  FMutex *this_00;
  TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *lpCriticalSection;
  atomic<unsigned_char> aVar2;
  FHttpRequest *pFVar3;
  FHttpRequest *pFVar4;
  FHttpRequest *pFVar5;
  code *pcVar6;
  EHttpRequestTypeFilter EVar7;
  LPCRITICAL_SECTION p_Var8;
  bool bVar9;
  
  this_00 = &this->PausedMutex;
  LOCK();
  bVar9 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar9) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar9) {
    FMutex::LockSlow(this_00);
  }
  if (param_1) {
    this->PauseFilter = this->PauseFilter | param_2;
  }
  else {
    this->PauseFilter = ~param_2 & this->PauseFilter;
    lpCriticalSection = &this->HttpPausedRequests;
    if (lpCriticalSection == (TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *)0x0) {
LAB_1445e7a8e:
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->HttpPausedRequests).ListNum == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      pFVar3 = (this->HttpPausedRequests).Head;
      (this->HttpPausedRequests).Tail = (FHttpRequest *)0x0;
      (this->HttpPausedRequests).Head = (FHttpRequest *)0x0;
      (this->HttpPausedRequests).ListNum = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      while (pFVar3 != (FHttpRequest *)0x0) {
        pFVar4 = pFVar3->NextRequest;
        pFVar3->NextRequest = (FHttpRequest *)0x0;
        if (pFVar3->Type == Streaming) {
          EVar7 = this->PauseFilter;
LAB_1445e7a26:
          if ((EVar7 & Streaming) == None) goto LAB_1445e79a8;
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          pFVar5 = (this->HttpPausedRequests).Tail;
          p_Var8 = (LPCRITICAL_SECTION)lpCriticalSection;
          if (pFVar5 == (FHttpRequest *)0x0) {
            if (((this->HttpPausedRequests).Head != (FHttpRequest *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Head == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                                   ,0x20,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            piVar1 = &(this->HttpPausedRequests).ListNum;
            *piVar1 = *piVar1 + 1;
            (this->HttpPausedRequests).Head = pFVar3;
            (this->HttpPausedRequests).Tail = pFVar3;
          }
          else {
            pFVar5->NextRequest = pFVar3;
            piVar1 = &(this->HttpPausedRequests).ListNum;
            *piVar1 = *piVar1 + 1;
            (this->HttpPausedRequests).Tail = pFVar3;
          }
        }
        else {
          if (pFVar3->Type == Installed) {
            EVar7 = this->PauseFilter >> 1;
            goto LAB_1445e7a26;
          }
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
                             ,0x2ff,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_1445e79a8:
          p_Var8 = (LPCRITICAL_SECTION)&this->HttpRequests;
          if ((TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *)p_Var8 ==
              (TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *)0x0) goto LAB_1445e7a8e;
          EnterCriticalSection(p_Var8);
          TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest>::EnqueueByPriorityInternal
                    ((TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *)p_Var8,pFVar3);
          piVar1 = &(this->HttpRequests).ListNum;
          *piVar1 = *piVar1 + 1;
        }
        LeaveCriticalSection(p_Var8);
        pFVar3 = pFVar4;
      }
    }
    (**(code **)(((this->TickThreadEvent).Event)->_padding_ + 0x10))();
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return;
}

// PauseRequest @ 1445e93f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandHttpThread::PauseRequest(FOnDemandHttpThread *this,FHttpRequest *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  undefined1 uVar3;
  EHttpRequestTypeFilter EVar4;
  bool bVar5;
  
  this_00 = &this->PausedMutex;
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    FMutex::LockSlow(this_00);
  }
  if (param_1->Type == Streaming) {
    EVar4 = this->PauseFilter;
LAB_1445e9493:
    if ((EVar4 & Streaming) != None) {
      TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest>::Enqueue
                (&this->HttpPausedRequests,param_1);
      bVar5 = true;
      goto LAB_1445e9457;
    }
  }
  else {
    if (param_1->Type == Installed) {
      EVar4 = this->PauseFilter >> 1;
      goto LAB_1445e9493;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
                       ,0x2ff,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
  }
  bVar5 = false;
LAB_1445e9457:
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return bVar5;
}

// ReprioritizeRequest @ 1445f8150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandHttpThread::ReprioritizeRequest
          (FOnDemandHttpThread *this,void *param_1,int param_2)

{
  FHttpRequest *pFVar1;
  code *pcVar2;
  FHttpRequest *pFVar3;
  bool bVar4;
  TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *this_00;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId362,"FOnDemandHttpThread::ReprioritizeRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
               ,0x16a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId362);
  }
  if (param_1 == (void *)0x0) goto LAB_1445f82ac;
  this_00 = &this->HttpRequests;
  if (this_00 == (TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  *(int *)((longlong)param_1 + 100) = param_2;
  pFVar1 = (this->HttpRequests).Head;
  if (pFVar1 == (FHttpRequest *)0x0) {
    if (((this->HttpRequests).Tail != (FHttpRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tail == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                           ,0x9f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (pFVar1 == param_1) {
      pFVar1 = *(FHttpRequest **)param_1;
      (this->HttpRequests).Head = pFVar1;
      if ((this->HttpRequests).Tail == param_1) {
        if ((pFVar1 != (FHttpRequest *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Head == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                               ,0xa8,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->HttpRequests).Tail = (FHttpRequest *)0x0;
      }
      *(undefined8 *)param_1 = 0;
    }
    else {
      for (pFVar3 = pFVar1->NextRequest; (pFVar3 != (FHttpRequest *)0x0 && (pFVar3 != param_1));
          pFVar3 = pFVar3->NextRequest) {
        pFVar1 = pFVar3;
      }
      if (pFVar1->NextRequest != param_1) goto LAB_1445f82a3;
      pFVar1->NextRequest = pFVar1->NextRequest->NextRequest;
      *(undefined8 *)param_1 = 0;
      if ((this->HttpRequests).Tail == param_1) {
        (this->HttpRequests).Tail = pFVar1;
      }
    }
    TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest>::EnqueueByPriorityInternal(this_00,param_1)
    ;
  }
LAB_1445f82a3:
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
LAB_1445f82ac:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Run @ 1445fd760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

uint __thiscall UE::IoStore::FOnDemandHttpThread::Run(FOnDemandHttpThread *this)

{
  atomic<bool> aVar1;
  EThreadPriority EVar2;
  FEvent *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FHostGroupManager *pFVar8;
  int iVar9;
  FLLMScope local_res8 [2];
  FName local_res10;
  wchar_t *local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Ias.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Ias.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  if (((this->HttpClient).Ptr == (FMultiEndpointHttpClient *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpClient.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
                         ,399,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  aVar1 = this->bStopRequested;
  while (aVar1 == (atomic<bool>)0x0) {
    iVar9 = 4;
    if (GOnDemandBackendThreadPriorityIndex < 4) {
      iVar9 = GOnDemandBackendThreadPriorityIndex;
    }
    iVar7 = 0;
    if (0 < iVar9) {
      iVar7 = iVar9;
    }
    EVar2 = GOnDemandBackendThreadPriorities[iVar7];
    if (EVar2 != this->ThreadPriority) {
      if (4 < (byte)LogIas._0_1_) {
        local_res18 = ::LexToString(EVar2);
        Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*>
                  ((FLogCategoryBase *)&LogIas,&::LOG_Static,&local_res18);
      }
      FWindowsPlatformProcess::SetThreadPriority(EVar2);
      this->ThreadPriority = EVar2;
    }
    if (this->bStopRequested == (atomic<bool>)0x0) {
      pFVar8 = FHostGroupManager::Get();
      FHostGroupManager::Tick(pFVar8,GIasHttpTimeOutMs,&this->bStopRequested);
      FMultiEndpointHttpClient::UpdateConnections((this->HttpClient).Ptr);
      TickRequests(this);
      TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
                (&this->OnTickIdleDelegate);
      pFVar3 = (this->TickThreadEvent).Event;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x20);
      pFVar8 = FHostGroupManager::Get();
      uVar6 = FHostGroupManager::GetNumDisconnctedHosts(pFVar8);
      iVar9 = -1;
      if (uVar6 != 0) {
        iVar9 = GIasHttpHealthCheckWaitTime;
      }
      (*pcVar4)(pFVar3,iVar9,0);
    }
    aVar1 = this->bStopRequested;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return 0;
}

// Stop @ 144601420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandHttpThread::Stop(FOnDemandHttpThread *this)

{
  LOCK();
  this->bStopRequested = (atomic<bool>)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000144601432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->TickThreadEvent).Event)->_padding_ + 0x10))();
  return;
}

// Tick @ 144601910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandHttpThread::Tick(FOnDemandHttpThread *this)

{
  FHostGroupManager *this_00;
  
  this_00 = FHostGroupManager::Get();
  FHostGroupManager::Tick(this_00,GIasHttpTimeOutMs,(atomic<bool> *)&this->PausedMutex);
  FMultiEndpointHttpClient::UpdateConnections
            (*(FMultiEndpointHttpClient **)&(this->OnTickIdleDelegate).field_0x38);
  TickRequests((FOnDemandHttpThread *)&this[-1].RequestAllocator);
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             &this->TickThreadEvent);
  return;
}

// TickRequests @ 1446043f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandHttpThread::TickRequests(FOnDemandHttpThread *this)

{
  FMutex *this_00;
  TUniquePtr<UE::IoStore::FMultiEndpointHttpClient,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>_>
  *pTVar1;
  int *piVar2;
  TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *lpCriticalSection;
  atomic<unsigned_char> aVar3;
  EHttpRequestType EVar4;
  FMultiEndpointHttpClient *pFVar5;
  FScriptContainerElement *pFVar6;
  FMultiEndpointHttpClient *pFVar7;
  longlong *plVar8;
  FOnDemandContainer *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FImpl *pFVar11;
  code *pcVar12;
  float fVar13;
  FChannel *pFVar14;
  ForAnyElementType FVar15;
  ushort uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  FIoBuffer *pFVar20;
  undefined8 uVar21;
  void *pvVar22;
  atomic<unsigned_int> aVar23;
  code **ppcVar24;
  longlong *plVar25;
  FStaticLogRecord *pFVar26;
  int iVar27;
  FIoBuffer this_01;
  FHttpRequest *pFVar28;
  FHttpRequest *pFVar29;
  uint uVar30;
  FOnDemandHttpThread *pFVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  undefined1 auStackY_238 [32];
  int local_1f4;
  int local_1f0;
  FMultiEndpointHttpClient *local_1e8;
  uint local_1dc;
  FOnDemandHttpThread *local_1d8;
  FMultiEndpointHttpClient *local_1d0;
  undefined4 local_1c8 [2];
  undefined4 local_1c0 [2];
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_1b8;
  FIoBuffer local_1a8 [2];
  FIoBuffer local_198 [2];
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  char *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  wchar_t *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  undefined8 uStack_150;
  TStringView<char> local_148;
  wchar_t *local_138;
  undefined8 uStack_130;
  code *local_128 [2];
  code *local_118 [3];
  code **local_100;
  TStringBuilderBase<char> local_f8;
  char local_d8 [128];
  ulonglong local_58 [6];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1dc = 0;
  bVar32 = -1 < CpuChannel->Enabled;
  local_1d8 = this;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId441,"FOnDemandHttpThread::TickRequests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
               ,0x1b9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId441);
  }
  if (this->bRecreateHttpClient == (atomic<bool>)0x0) goto LAB_144604764;
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId445,"FOnDemandHttpThread::RecreateHttpClient",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
               ,0x1bd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId445);
  }
  this_00 = &this->RecreateMutex;
  LOCK();
  bVar34 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar34) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar34) {
    FMutex::LockSlow(this_00);
  }
  pFVar5 = (this->HttpClient).Ptr;
  pTVar1 = &this->HttpClient;
  pTVar1->Ptr = (FMultiEndpointHttpClient *)0x0;
  local_1d0 = pFVar5;
  bVar34 = TryCreateHttpClient(this);
  if (bVar34) {
    if (pFVar5 != (FMultiEndpointHttpClient *)0x0) {
      local_1d0 = (FMultiEndpointHttpClient *)0x0;
      bVar34 = HTTP::FEventLoop::IsIdle(&pFVar5->EventLoop);
      if ((!bVar34) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("EventLoop.IsIdle()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                              ,0xad,
                              L"FMultiEndpointHttpClient still has active requests on shutdown"),
         bVar34)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((*(int *)&(pFVar5->TicketLookupMap).field_0x8 !=
           *(int *)&(pFVar5->TicketLookupMap).field_0x34) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("TicketLookupMap.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                              ,0xae,L""), bVar34)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(undefined4 *)&(pFVar5->TicketLookupMap).field_0x48 = 0;
      pvVar22 = *(void **)&(pFVar5->TicketLookupMap).field_0x40;
      if (pvVar22 != (void *)0x0) {
        FMemory::Free(pvVar22);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar5->TicketLookupMap);
      DestructItems<UE::IoStore::FMultiEndpointHttpClient::FRequest,int>
                ((FRequest *)(pFVar5->Retries).AllocatorInstance.Data,(pFVar5->Retries).ArrayNum);
      pFVar6 = (pFVar5->Retries).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      HTTP::FEventLoop::~FEventLoop(&pFVar5->EventLoop);
      DestructItems<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int>
                ((TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>
                  *)(pFVar5->Connections).AllocatorInstance.Data,(pFVar5->Connections).ArrayNum);
      pFVar6 = (pFVar5->Connections).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar5,0xb0);
    }
    if (3 < (byte)LogIas._0_1_) {
      pFVar26 = &::LOG_Static;
LAB_14460471b:
      Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord>
                ((FLogCategoryBase *)&LogIas,pFVar26);
    }
  }
  else {
    if (pTVar1 != (TUniquePtr<UE::IoStore::FMultiEndpointHttpClient,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>_>
                   *)&local_1d0) {
      pFVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar5;
      local_1d0 = (FMultiEndpointHttpClient *)0x0;
      this = local_1d8;
      if (pFVar7 != (FMultiEndpointHttpClient *)0x0) {
        bVar34 = HTTP::FEventLoop::IsIdle(&pFVar7->EventLoop);
        if ((!bVar34) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("EventLoop.IsIdle()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                                ,0xad,
                                L"FMultiEndpointHttpClient still has active requests on shutdown"),
           bVar34)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((*(int *)&(pFVar7->TicketLookupMap).field_0x8 !=
             *(int *)&(pFVar7->TicketLookupMap).field_0x34) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("TicketLookupMap.IsEmpty()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                                ,0xae,L""), bVar34)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(undefined4 *)&(pFVar7->TicketLookupMap).field_0x48 = 0;
        pvVar22 = *(void **)&(pFVar7->TicketLookupMap).field_0x40;
        if (pvVar22 != (void *)0x0) {
          FMemory::Free(pvVar22);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar7->TicketLookupMap);
        DestructItems<UE::IoStore::FMultiEndpointHttpClient::FRequest,int>
                  ((FRequest *)(pFVar7->Retries).AllocatorInstance.Data,(pFVar7->Retries).ArrayNum);
        pFVar6 = (pFVar7->Retries).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        HTTP::FEventLoop::~FEventLoop(&pFVar7->EventLoop);
        DestructItems<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int>
                  ((TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>
                    *)(pFVar7->Connections).AllocatorInstance.Data,(pFVar7->Connections).ArrayNum);
        pFVar6 = (pFVar7->Connections).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        ::operator_delete(pFVar7,0xb0);
        this = local_1d8;
      }
    }
    if (2 < (byte)LogIas._0_1_) {
      pFVar26 = &::LOG_Static;
      goto LAB_14460471b;
    }
  }
  LOCK();
  this->bRecreateHttpClient = (atomic<bool>)0x0;
  UNLOCK();
  TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>::operator()
            ((TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> *)&local_1d0,local_1d0);
  LOCK();
  aVar3 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_144604764:
  local_1f4 = 0;
  lpCriticalSection = &this->HttpRequests;
  iVar27 = 0x20;
  if (GIasHttpConcurrentRequests < 0x20) {
    iVar27 = GIasHttpConcurrentRequests;
  }
  local_1f0 = iVar27;
  if (lpCriticalSection == (TThreadSafeIntrusiveQueue<UE::IoStore::FHttpRequest> *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((iVar27 < 1) || ((this->HttpRequests).ListNum == 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    pFVar28 = (this->HttpRequests).Head;
    if (iVar27 == 0x7fffffff) {
      (this->HttpRequests).Tail = (FHttpRequest *)0x0;
      (this->HttpRequests).Head = (FHttpRequest *)0x0;
      (this->HttpRequests).ListNum = 0;
    }
    else {
      iVar19 = 1;
      if (1 < iVar27) {
        do {
          pFVar29 = pFVar28->NextRequest;
          if (pFVar29 == (FHttpRequest *)0x0) break;
          iVar19 = iVar19 + 1;
          pFVar28 = pFVar29;
        } while (iVar19 < iVar27);
      }
      pFVar29 = pFVar28->NextRequest;
      pFVar28->NextRequest = (FHttpRequest *)0x0;
      if ((this->HttpRequests).Tail == pFVar28) {
        (this->HttpRequests).Tail = (FHttpRequest *)0x0;
      }
      pFVar28 = (this->HttpRequests).Head;
      piVar2 = &(this->HttpRequests).ListNum;
      *piVar2 = *piVar2 - iVar19;
      (this->HttpRequests).Head = pFVar29;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar13 = __real_3b480190;
    pFVar31 = this;
    uVar30 = local_1dc;
    while (local_1dc = uVar30, pFVar28 != (FHttpRequest *)0x0) {
LAB_144604840:
      do {
        bVar33 = -1 < CpuChannel->Enabled;
        if (bVar33) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId475,"FOnDemandHttpThread::IssueHttpGet",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
                     ,0x1db);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId475);
        }
        pFVar29 = pFVar28->NextRequest;
        pFVar28->NextRequest = (FHttpRequest *)0x0;
        bVar34 = PauseRequest(pFVar31,pFVar28);
        pFVar14 = CountersChannel;
        if (bVar34) {
          iVar27 = local_1f0;
          if (bVar33) {
            FCpuProfilerTrace::OutputEndEvent();
            iVar27 = local_1f0;
          }
        }
        else {
          EVar4 = pFVar28->Type;
          GHttpInflightCount[EVar4].Value = GHttpInflightCount[EVar4].Value + 1;
          if (-1 < pFVar14->Enabled) {
            if (GHttpInflightCount[EVar4].CounterId == (atomic<unsigned_int>)0x0) {
              uVar16 = FCountersTrace::OutputInitCounter
                                 (GHttpInflightCount[EVar4].CounterName,TraceCounterType_Int,
                                  GHttpInflightCount[EVar4].CounterFlags & 0xf);
              LOCK();
              if (GHttpInflightCount[EVar4].CounterId == (atomic<unsigned_int>)0x0) {
                aVar23._2_2_ = 0;
                aVar23._0_2_ = uVar16;
                GHttpInflightCount[EVar4].CounterId = aVar23;
              }
              UNLOCK();
            }
            FCountersTrace::OutputSetValue
                      (SUB42(GHttpInflightCount[EVar4].CounterId,0),GHttpInflightCount[EVar4].Value)
            ;
          }
          if (pFVar28->bCancelled == false) {
            if (((pFVar28->ChunkInfo).SharedContainer.Object == (FOnDemandContainer *)0x0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar34)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar9 = (pFVar28->ChunkInfo).SharedContainer.Object;
            pTVar10 = (pFVar9->HostGroup).Impl.SharedReferenceCount.ReferenceController;
            pFVar11 = (pFVar9->HostGroup).Impl.Object;
            if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar11 == (FImpl *)0x0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar34)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar27 = FOnDemandHostGroup::PrimaryHostIndex(&pFVar11->HostGroup);
            pFVar31 = local_1d8;
            if ((iVar27 == -1) || (local_1d8->bHttpEnabled == (atomic<bool>)0x0)) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar10);
              uVar30 = uVar30 & 0xfffffffe;
              pFVar20 = FIoBuffer::FIoBuffer(local_198);
              uStack_160 = 0x19;
              local_168 = L"Hostgroup is disconnected";
              uStack_130 = CONCAT44(uStack_15c,0x19);
              local_138 = L"Hostgroup is disconnected";
              local_1c0[0] = 0;
              Core::Private::Function::CheckCallable(*(void **)&pFVar28->CompletionCallback);
              plVar8 = *(longlong **)&(pFVar28->CompletionCallback).field_0x28;
              pcVar12 = *(code **)&pFVar28->CompletionCallback;
              plVar25 = (longlong *)&(pFVar28->CompletionCallback).field_0x10;
              if (plVar8 != (longlong *)0x0) {
                plVar25 = plVar8;
              }
              uVar21 = (**(code **)(*plVar25 + 8))();
              (*pcVar12)(uVar21,local_1c0,&local_138,pFVar20);
              this_01.CorePtr.Reference = local_198[0].CorePtr.Reference;
              goto LAB_144604d0b;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar10);
            local_1f4 = local_1f4 + 1;
            local_f8.Base = local_d8;
            local_f8.CurPos = local_d8;
            local_f8.bIsDynamic = false;
            local_f8.bIsExternal = false;
            local_f8.End = (char *)local_58;
            uVar30 = uVar30 & 0xfffffffe;
            FOnDemandChunkInfo::GetUrl(&pFVar28->ChunkInfo,&local_f8);
            if ((0.0 < GIaxInvalidUrlChance) &&
               (uVar17 = rand(), (float)(uVar17 & 0x7fff) * fVar13 < GIaxInvalidUrlChance)) {
              if (local_f8.End < local_f8.CurPos + 0x10) {
                TStringBuilderBase<char>::Extend(&local_f8,0x10);
              }
              pvVar22 = FGenericPlatformString::Memcpy(local_f8.CurPos,"-DebugInvalidUrl",0x10);
              local_f8.CurPos = (char *)((longlong)pvVar22 + 0x10);
            }
            LOCK();
            GHttpNumConcurrentRequests = (atomic<unsigned_int>)((int)GHttpNumConcurrentRequests + 1)
            ;
            UNLOCK();
            local_1e8 = (pFVar31->HttpClient).Ptr;
            local_128[0] = (code *)0x0;
            local_100 = (code **)0x0;
            local_100 = FMemory::Malloc(0x20,8);
            *local_100 = (code *)&Core::Private::Function::
                                  TFunction_OwnedObject<`UE::IoStore::FOnDemandHttpThread::TickRequests'::`55'::<lambda_1>,0,1>
                                  ::_vftable_;
            local_100[1] = (code *)pFVar31;
            local_100[2] = (code *)pFVar28;
            local_100[3] = (code *)&local_1f4;
            if (local_100 + 1 != (code **)0x0) {
              local_128[0] = Core::Private::Function::
                             TFunctionRefCaller<`UE::IoStore::FOnDemandHttpThread::TickRequests'::__l55::<lambda_1>,void,UE::IoStore::FMultiEndpointHttpClientResponse_&&>
                             ::Call;
            }
            iStack_170 = (int)local_f8.CurPos - (int)local_f8.Base;
            local_178 = local_f8.Base;
            if (((pFVar28->ChunkInfo).SharedContainer.Object == (FOnDemandContainer *)0x0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar34)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar9 = (pFVar28->ChunkInfo).SharedContainer.Object;
            pTVar10 = (pFVar9->HostGroup).Impl.SharedReferenceCount.ReferenceController;
            pFVar11 = (pFVar9->HostGroup).Impl.Object;
            if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar11 == (FImpl *)0x0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar34)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_148._12_4_ = uStack_16c;
            local_148.Size = iStack_170;
            local_148.DataPtr = local_178;
            local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.ArrayNum = 0;
            local_1b8.ArrayMax = 0;
            uVar17 = FMultiEndpointHttpClient::Get
                               (local_1e8,&pFVar11->HostGroup,&local_148,&pFVar28->ChunkRange,
                                &local_1b8,None,
                                (TFunction<void___cdecl(UE::IoStore::FMultiEndpointHttpClientResponse_&&)>
                                 *)local_128);
            FVar15.Data = local_1b8.AllocatorInstance.Data;
            local_1e8 = (FMultiEndpointHttpClient *)CONCAT44(local_1e8._4_4_,uVar17);
            DestructItems<FAnsiString,int>
                      ((FAnsiString *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
            if (FVar15.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar15.Data);
            }
            pFVar28->HttpTicketId = (uint)local_1e8;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar10);
            if (local_128[0] != (code *)0x0) {
              ppcVar24 = local_128 + 2;
              if (local_100 != (code **)0x0) {
                ppcVar24 = local_100;
              }
              (**(code **)(*ppcVar24 + 0x10))();
            }
            TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_f8);
            pFVar31 = local_1d8;
          }
          else {
            pFVar20 = FIoBuffer::FIoBuffer(local_1a8);
            uStack_180 = 0x11;
            local_188 = L"Request cancelled";
            uStack_150 = CONCAT44(uStack_17c,0x11);
            local_158 = L"Request cancelled";
            local_1c8[0] = 0;
            Core::Private::Function::CheckCallable(*(void **)&pFVar28->CompletionCallback);
            plVar8 = *(longlong **)&(pFVar28->CompletionCallback).field_0x28;
            pcVar12 = *(code **)&pFVar28->CompletionCallback;
            plVar25 = (longlong *)&(pFVar28->CompletionCallback).field_0x10;
            if (plVar8 != (longlong *)0x0) {
              plVar25 = plVar8;
            }
            uVar21 = (**(code **)(*plVar25 + 8))();
            (*pcVar12)(uVar21,local_1c8,&local_158,pFVar20);
            this_01.CorePtr.Reference = local_1a8[0].CorePtr.Reference;
LAB_144604d0b:
            if (this_01.CorePtr.Reference != (BufCore *)0x0) {
              FIoBuffer::BufCore::CheckRefCount((BufCore *)this_01.CorePtr.Reference);
              LOCK();
              piVar2 = &((BufCore *)this_01.CorePtr.Reference)->NumRefs;
              iVar27 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar27 == 1) {
                FIoBuffer::BufCore::~BufCore((BufCore *)this_01.CorePtr.Reference);
                ::operator_delete((void *)this_01.CorePtr.Reference,0x20);
              }
            }
            FOnDemandIoBackendStats::OnHttpCancel(GStatistics,pFVar28->Type);
            pFVar31 = local_1d8;
            DestroyRequest(local_1d8,pFVar28);
          }
          if (bVar33) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          iVar27 = local_1f0;
          if (local_1f0 <= local_1f4) {
            bVar33 = -1 < CpuChannel->Enabled;
            if (bVar33) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId574,"FOnDemandHttpThread::TickHttpSaturated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
                         ,0x23e);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId574);
            }
            while (iVar27 <= local_1f4) {
              FMultiEndpointHttpClient::Tick
                        ((pFVar31->HttpClient).Ptr,-1,GIasHttpRateLimitKiBPerSecond);
            }
            if (bVar33) {
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
          pFVar28 = pFVar29;
          if (pFVar29 != (FHttpRequest *)0x0) goto LAB_144604840;
          if (pFVar31->bRecreateHttpClient != (atomic<bool>)0x0) break;
          iVar19 = iVar27 - local_1f4;
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if ((iVar19 < 1) || ((this->HttpRequests).ListNum == 0)) {
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            pFVar29 = (FHttpRequest *)0x0;
          }
          else {
            pFVar29 = (this->HttpRequests).Head;
            if (iVar19 == 0x7fffffff) {
              (this->HttpRequests).Tail = (FHttpRequest *)0x0;
              (this->HttpRequests).Head = (FHttpRequest *)0x0;
              (this->HttpRequests).ListNum = 0;
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            }
            else {
              iVar18 = 1;
              if (1 < iVar19) {
                do {
                  pFVar28 = pFVar29->NextRequest;
                  if (pFVar28 == (FHttpRequest *)0x0) break;
                  iVar18 = iVar18 + 1;
                  pFVar29 = pFVar28;
                } while (iVar18 < iVar19);
              }
              pFVar28 = pFVar29->NextRequest;
              pFVar29->NextRequest = (FHttpRequest *)0x0;
              if ((this->HttpRequests).Tail == pFVar29) {
                (this->HttpRequests).Tail = (FHttpRequest *)0x0;
              }
              pFVar29 = (this->HttpRequests).Head;
              piVar2 = &(this->HttpRequests).ListNum;
              *piVar2 = *piVar2 - iVar18;
              (this->HttpRequests).Head = pFVar28;
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            }
          }
        }
        pFVar28 = pFVar29;
      } while (pFVar29 != (FHttpRequest *)0x0);
      bVar33 = -1 < CpuChannel->Enabled;
      local_1dc = uVar30;
      if (bVar33) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId589,"FOnDemandHttpThread::TickHttp",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpThread.cpp"
                   ,0x24d);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId589);
      }
      bVar34 = FMultiEndpointHttpClient::Tick
                         ((pFVar31->HttpClient).Ptr,GIasHttpPollTimeoutMs,
                          GIasHttpRateLimitKiBPerSecond);
      if (bVar34) {
        do {
          if (pFVar29 != (FHttpRequest *)0x0) break;
          if (pFVar31->bRecreateHttpClient == (atomic<bool>)0x0) {
            iVar27 = iVar27 - local_1f4;
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            if ((iVar27 < 1) || ((this->HttpRequests).ListNum == 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              pFVar29 = (FHttpRequest *)0x0;
            }
            else {
              pFVar29 = (this->HttpRequests).Head;
              if (iVar27 == 0x7fffffff) {
                (this->HttpRequests).Tail = (FHttpRequest *)0x0;
                (this->HttpRequests).Head = (FHttpRequest *)0x0;
                (this->HttpRequests).ListNum = 0;
              }
              else {
                iVar19 = 1;
                if (1 < iVar27) {
                  do {
                    pFVar28 = pFVar29->NextRequest;
                    if (pFVar28 == (FHttpRequest *)0x0) break;
                    iVar19 = iVar19 + 1;
                    pFVar29 = pFVar28;
                  } while (iVar19 < iVar27);
                }
                pFVar28 = pFVar29->NextRequest;
                pFVar29->NextRequest = (FHttpRequest *)0x0;
                if ((this->HttpRequests).Tail == pFVar29) {
                  (this->HttpRequests).Tail = (FHttpRequest *)0x0;
                }
                pFVar29 = (this->HttpRequests).Head;
                piVar2 = &(this->HttpRequests).ListNum;
                *piVar2 = *piVar2 - iVar19;
                (this->HttpRequests).Head = pFVar28;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              if (pFVar29 != (FHttpRequest *)0x0) break;
            }
          }
          bVar34 = FMultiEndpointHttpClient::Tick
                             ((pFVar31->HttpClient).Ptr,GIasHttpPollTimeoutMs,
                              GIasHttpRateLimitKiBPerSecond);
          iVar27 = local_1f0;
        } while (bVar34);
      }
      pFVar28 = pFVar29;
      uVar30 = local_1dc;
      if (bVar33) {
        FCpuProfilerTrace::OutputEndEvent();
        uVar30 = local_1dc;
      }
    }
  }
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TryCreateHttpClient @ 144606620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall UE::IoStore::FOnDemandHttpThread::TryCreateHttpClient(FOnDemandHttpThread *this)

{
  TUniquePtr<UE::IoStore::FMultiEndpointHttpClient,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>_>
  *this_00;
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FMultiEndpointHttpClient *pFVar6;
  FMultiEndpointHttpClient *pFVar7;
  TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> local_48 [8];
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined5 uStack_25;
  FLogCategoryBase *local_20;
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  local_40 = GIasHttpConnectionCount;
  if (GIasHttpRecvBufKiB < 0) {
    iStack_3c = -1;
  }
  else {
    iStack_3c = GIasHttpRecvBufKiB << 10;
  }
  if (GIasHttpSendBufKiB < 0) {
    iStack_38 = -1;
  }
  else {
    iStack_38 = GIasHttpSendBufKiB << 10;
  }
  pFVar7 = (FMultiEndpointHttpClient *)0x0;
  iStack_34 = GIasHttpRetryCount;
  local_30 = GIasHttpFailTimeOutMs;
  uStack_27 = GIasHttpAllowChunkedXfer;
  local_20 = (FLogCategoryBase *)&LogIas;
  uStack_2c = 0;
  uStack_28 = 1;
  uStack_26 = 0;
  uStack_18 = 7;
  pFVar6 = ::operator_new(0xb0);
  if (pFVar6 != (FMultiEndpointHttpClient *)0x0) {
    (pFVar6->Config).MaxConnectionCount = local_40;
    (pFVar6->Config).ReceiveBufferSize = iStack_3c;
    (pFVar6->Config).SendBufferSize = iStack_38;
    (pFVar6->Config).MaxRetryCount = iStack_34;
    (pFVar6->Config).TimeoutMs = local_30;
    (pFVar6->Config).Redirects = uStack_2c;
    (pFVar6->Config).bEnableThreadSafetyChecks = (bool)uStack_28;
    (pFVar6->Config).bAllowChunkedTransfer = (bool)uStack_27;
    (pFVar6->Config).bResponseBodyOnError = (bool)uStack_26;
    *(undefined5 *)&(pFVar6->Config).field_0x1b = uStack_25;
    (pFVar6->Config).LogCategory = local_20;
    *(ulonglong *)&(pFVar6->Config).LogVerbosity = CONCAT71(uStack_17,uStack_18);
    (pFVar6->Connections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Connections).ArrayNum = 0;
    (pFVar6->Connections).ArrayMax = 0;
    HTTP::FEventLoop::FEventLoop(&pFVar6->EventLoop);
    (pFVar6->Retries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Retries).ArrayNum = 0;
    (pFVar6->Retries).ArrayMax = 0;
    (pFVar6->TicketLookupMutex).State = (atomic<unsigned_int>)0x0;
    (pFVar6->TicketLookupMutex).ThreadId = (atomic<unsigned_int>)0x0;
    *(undefined8 *)&pFVar6->TicketLookupMap = 0;
    *(undefined8 *)&(pFVar6->TicketLookupMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->TicketLookupMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->TicketLookupMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->TicketLookupMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->TicketLookupMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->TicketLookupMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->TicketLookupMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar6->TicketLookupMap).field_0x48 = 0;
    HTTP::FEventLoop::SetFailTimeout(&pFVar6->EventLoop,(pFVar6->Config).TimeoutMs);
    pFVar7 = pFVar6;
  }
  this_00 = &this->HttpClient;
  if ((TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> *)this_00 == local_48) {
    if (pFVar7 != (FMultiEndpointHttpClient *)0x0) {
      bVar4 = HTTP::FEventLoop::IsIdle(&pFVar7->EventLoop);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("EventLoop.IsIdle()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                             ,0xad,L"FMultiEndpointHttpClient still has active requests on shutdown"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((*(int *)&(pFVar7->TicketLookupMap).field_0x8 !=
           *(int *)&(pFVar7->TicketLookupMap).field_0x34) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TicketLookupMap.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                             ,0xae,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(undefined4 *)&(pFVar7->TicketLookupMap).field_0x48 = 0;
      pvVar1 = *(void **)&(pFVar7->TicketLookupMap).field_0x40;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar7->TicketLookupMap);
      DestructItems<UE::IoStore::FMultiEndpointHttpClient::FRequest,int>
                ((FRequest *)(pFVar7->Retries).AllocatorInstance.Data,(pFVar7->Retries).ArrayNum);
      pFVar2 = (pFVar7->Retries).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      HTTP::FEventLoop::~FEventLoop(&pFVar7->EventLoop);
      DestructItems<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int>
                ((TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>
                  *)(pFVar7->Connections).AllocatorInstance.Data,(pFVar7->Connections).ArrayNum);
      pFVar2 = (pFVar7->Connections).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar7,0xb0);
    }
  }
  else {
    pFVar6 = this_00->Ptr;
    this_00->Ptr = pFVar7;
    TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>::operator()
              ((TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> *)this_00,pFVar6);
  }
  return this_00->Ptr != (FMultiEndpointHttpClient *)0x0;
}

// UpdateThreadPriorityIfNeeded @ 14460d3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandHttpThread::UpdateThreadPriorityIfNeeded(FOnDemandHttpThread *this)

{
  EThreadPriority EVar1;
  int iVar2;
  int iVar3;
  wchar_t *local_res8;
  
  iVar3 = 4;
  if (GOnDemandBackendThreadPriorityIndex < 4) {
    iVar3 = GOnDemandBackendThreadPriorityIndex;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  EVar1 = GOnDemandBackendThreadPriorities[iVar2];
  if (EVar1 != this->ThreadPriority) {
    if (4 < (byte)LogIas._0_1_) {
      local_res8 = ::LexToString(EVar1);
      Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,&local_res8);
    }
    FWindowsPlatformProcess::SetThreadPriority(EVar1);
    this->ThreadPriority = EVar1;
  }
  return;
}

