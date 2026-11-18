// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 10

// FLiveLinkMessageBusDiscoveryManager @ 14d011660

/* WARNING: Enum "Type": Some values do not have unique names */

FLiveLinkMessageBusDiscoveryManager * __thiscall
FLiveLinkMessageBusDiscoveryManager::FLiveLinkMessageBusDiscoveryManager
          (FLiveLinkMessageBusDiscoveryManager *this)

{
  TSharedPtr<FMessageEndpoint,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *this_00;
  FEvent *pFVar8;
  FName *pFVar9;
  FModuleManager *this_01;
  IModuleInterface *pIVar10;
  undefined8 *puVar11;
  FTaskGraphInterface *pFVar12;
  TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager> *pTVar13;
  TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager> *pTVar14;
  FLiveLinkMessageBusDiscoveryManager *pFVar15;
  FRunnableThread *pFVar16;
  FThreadSafeBool FVar17;
  undefined1 auVar18 [16];
  FLLMScope local_res8 [2];
  FName local_res10;
  FName local_res18;
  TRawPtrProxy<TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>_>
  local_res20;
  TSharedPtr<IMessageHandler,1> local_e8;
  undefined1 local_d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  ForAnyElementType FStack_b8;
  int local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  bool local_98;
  FName local_94;
  Type local_8c;
  TSharedPtr<FMessageEndpoint,1> local_88;
  FMemScope local_78;
  FDestructionSentinel local_70;
  FName local_58;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  
  pTVar14 = (TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager> *)0x0;
  pTVar1 = &this->MessageEndpoint;
  this->_padding_ = (longlong)&___7FLiveLinkMessageBusDiscoveryManager__6B_;
  this->PingRequestCounter = (TAtomic<int>)0x0;
  (this->LastPingRequest).A = 0;
  (this->LastPingRequest).B = 0;
  (this->LastPingRequest).C = 0;
  (this->LastPingRequest).D = 0;
  (this->PingRequestFrequency).Ticks = 0;
  (this->LastProviderPoolResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastProviderPoolResults).ArrayNum = 0;
  (this->LastProviderPoolResults).ArrayMax = 0;
  pTVar1->Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bRunning = (FThreadSafeBool)0x1;
  this->Thread = (FRunnableThread *)0x0;
  this->PollEvent = (FEvent *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SourcesCriticalSection,4000);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_LiveLink_LiveLinkMessageBusDiscoveryManager.UniqueName,
             false,None,Default,true);
  local_res10 = LLMTagDeclaration_LiveLink_LiveLinkMessageBusDiscoveryManager.UniqueName;
  FMemScope::FMemScope(&local_78,&local_res10,true);
  LOCK();
  this->PingRequestCounter = (TAtomic<int>)0x0;
  UNLOCK();
  this_00 = ULiveLinkSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  auVar18._0_8_ =
       (double)((float)*(double *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x18 *
                __real_4b189680 + __real_3f000000);
  auVar18._8_8_ = 0;
  auVar18 = roundpd(auVar18,auVar18,1);
  (this->PingRequestFrequency).Ticks = (longlong)auVar18._0_8_;
  pFVar8 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->PollEvent = pFVar8;
  ::FName::FName(&local_res18,L"LiveLinkMessageHeartbeatManager");
  pFVar9 = ::FName::FName(&local_58,"Messaging");
  FVar4 = *pFVar9;
  this_01 = FModuleManager::Get();
  pIVar10 = FModuleManager::LoadModuleChecked(this_01,FVar4);
  puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar10 + 0x68))(pIVar10,local_50);
  local_d8._0_8_ = *puVar11;
  local_d8._8_8_ = puVar11[1];
  if ((TReferenceControllerBase<1> *)local_d8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_d8._8_8_)->WeakReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_d8._8_8_)->WeakReferenceCount + 1)
    ;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  local_94 = local_res18;
  local_d8[0x10] = false;
  local_b0 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0;
  local_98 = false;
  pFVar12 = FTaskGraphInterface::Get();
  local_8c = (**(code **)((longlong)*pFVar12 + 0x10))(pFVar12,0);
  pTVar13 = ::operator_new(0x18);
  if (pTVar13 != (TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager> *)0x0
     ) {
    pTVar13->Handler = this;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFLiveLinkPongMessage__VFLiveLinkMessageBusDiscoveryManager____6B_
    ;
    pTVar13->Func = (pmf_ff88e5d6)HandlePongMessage;
    pTVar14 = pTVar13;
  }
  local_res20.Object = pTVar14;
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>_>
            (&local_e8,&local_res20);
  if (((local_a8.Data <= &local_e8) &&
      (&local_e8 <
       (TSharedPtr<IMessageHandler,1> *)(local_a8.Data + (longlong)local_a0._4_4_ * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar15 = (FLiveLinkMessageBusDiscoveryManager *)(*pcVar5)();
    return pFVar15;
  }
  iVar7 = (int)local_a0;
  if ((int)local_a0 == local_a0._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_a8,(int *)((longlong)&local_a0 + 4));
  }
  local_a0._0_4_ = iVar7 + 1;
  *(IMessageHandler **)&local_a8.Data[(longlong)iVar7 * 0x10].field_0x0 = local_e8.Object;
  *(TReferenceControllerBase<1> **)(local_a8.Data + (longlong)iVar7 * 0x10 + 8) =
       local_e8.SharedReferenceCount.ReferenceController;
  local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e8.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FMessageEndpointBuilder::Build((FMessageEndpointBuilder *)local_d8,&local_88);
  if (pTVar1 != &local_88) {
    pTVar1->Object = local_88.Object;
    local_88.Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&local_88.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)local_a8.Data,(int)local_a0);
  if ((TSharedPtr<IMessageHandler,1> *)local_a8.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_70);
  if ((local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  if ((TReferenceControllerBase<1> *)local_d8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = (atomic<int> *)(local_d8._8_8_ + 0xc);
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_d8._8_8_ + 8))(local_d8._8_8_,1);
    }
  }
  LOCK();
  FVar17._1_3_ = 0;
  FVar17._0_1_ = pTVar1->Object != (FMessageEndpoint *)0x0;
  this->bRunning = FVar17;
  UNLOCK();
  if (this->bRunning != (FThreadSafeBool)0x0) {
    pFVar16 = FRunnableThread::Create
                        ((FRunnable *)this,L"LiveLinkMessageBusDiscoveryManager",0,TPri_Normal,
                         0xffffffffffffffff,None);
    this->Thread = pFVar16;
  }
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// ~FLiveLinkMessageBusDiscoveryManager @ 14d0160a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusDiscoveryManager::~FLiveLinkMessageBusDiscoveryManager
          (FLiveLinkMessageBusDiscoveryManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMessageEndpoint *pFVar1;
  FRunnableThread *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  lpCriticalSection = &this->SourcesCriticalSection;
  this->_padding_ = (longlong)&___7FLiveLinkMessageBusDiscoveryManager__6B_;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->MessageEndpoint).Object;
    if (pFVar1 != (FMessageEndpoint *)0x0) {
      pFVar1->Enabled = false;
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->MessageEndpoint != (TSharedPtr<FMessageEndpoint,1> *)&local_18) {
        (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->MessageEndpoint).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = this->Thread;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,1);
      this->Thread = (FRunnableThread *)0x0;
    }
    FGenericPlatformProcess::ReturnSynchEventToPool(this->PollEvent);
    this->PollEvent = (FEvent *)0x0;
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FProviderPollResult,1>,int>
              ((TSharedPtr<FProviderPollResult,1> *)
               (this->LastProviderPoolResults).AllocatorInstance.Data,
               (this->LastProviderPoolResults).ArrayNum);
    pFVar3 = (this->LastProviderPoolResults).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    this->_padding_ = (longlong)&___7FRunnable__6B_;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddDiscoveryMessageRequest @ 14d0207e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusDiscoveryManager::AddDiscoveryMessageRequest
          (FLiveLinkMessageBusDiscoveryManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<int> *pTVar1;
  int *piVar2;
  TAtomic<int> TVar3;
  int iVar4;
  TSharedPtr<FProviderPollResult,1> *pTVar5;
  
  lpCriticalSection = &this->SourcesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  LOCK();
  pTVar1 = &this->PingRequestCounter;
  TVar3 = *pTVar1;
  *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
  UNLOCK();
  if (TVar3 == (TAtomic<int>)0x0) {
    pTVar5 = (TSharedPtr<FProviderPollResult,1> *)
             (this->LastProviderPoolResults).AllocatorInstance.Data;
    iVar4 = (this->LastProviderPoolResults).ArrayNum;
    piVar2 = &(this->LastProviderPoolResults).ArrayMax;
    if ((this->LastProviderPoolResults).ArrayMax < 0) {
      DestructItems<TSharedPtr<FProviderPollResult,1>,int>(pTVar5,iVar4);
      (this->LastProviderPoolResults).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->LastProviderPoolResults).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TSharedPtr<FProviderPollResult,1>,int>(pTVar5,iVar4);
      (this->LastProviderPoolResults).ArrayNum = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d02086d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetDiscoveryResults @ 14d04b440

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<FProviderPollResult,1>,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkMessageBusDiscoveryManager::GetDiscoveryResults
          (FLiveLinkMessageBusDiscoveryManager *this,
          TArray<TSharedPtr<FProviderPollResult,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TSharedPtr<FProviderPollResult,1> *pTVar2;
  
  lpCriticalSection = &this->SourcesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar1 = (this->LastProviderPoolResults).ArrayNum;
    pTVar2 = (TSharedPtr<FProviderPollResult,1> *)
             (this->LastProviderPoolResults).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<TSharedPtr<FProviderPollResult,1>,TSharedPtr<FProviderPollResult,1>,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,pTVar2,iVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetEndpointAddress @ 14d04b800

/* WARNING: Enum "Type": Some values do not have unique names */

FMessageAddress * __thiscall
FLiveLinkMessageBusDiscoveryManager::GetEndpointAddress
          (FLiveLinkMessageBusDiscoveryManager *this,FMessageAddress *__return_storage_ptr__)

{
  FMessageEndpoint *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FMessageAddress *pFVar7;
  
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FMessageAddress *)(*pcVar2)();
      return pFVar7;
    }
  }
  pFVar1 = (this->MessageEndpoint).Object;
  uVar3 = (pFVar1->Address).UniqueId.B;
  uVar4 = (pFVar1->Address).UniqueId.C;
  uVar5 = (pFVar1->Address).UniqueId.D;
  (__return_storage_ptr__->UniqueId).A = (pFVar1->Address).UniqueId.A;
  (__return_storage_ptr__->UniqueId).B = uVar3;
  (__return_storage_ptr__->UniqueId).C = uVar4;
  (__return_storage_ptr__->UniqueId).D = uVar5;
  return __return_storage_ptr__;
}

// HandlePongMessage @ 14d0589b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusDiscoveryManager::HandlePongMessage
          (FLiveLinkMessageBusDiscoveryManager *this,FLiveLinkPongMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *pTVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 auStack_158 [32];
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_138;
  longlong local_e8;
  longlong lStack_e0;
  FString local_d8;
  FString local_c8;
  double local_b8;
  undefined1 local_b0;
  atomic<int> local_ac;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  lpCriticalSection = &this->SourcesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((((param_1->PollRequest).D == (this->LastPingRequest).D &&
       (param_1->PollRequest).C == (this->LastPingRequest).C) &&
      (param_1->PollRequest).B == (this->LastPingRequest).B) &&
      (param_1->PollRequest).A == (this->LastPingRequest).A) {
    dVar4 = LiveLinkMessageBusHelper::CalculateProviderMachineOffset
                      (param_1->CreationPlatformTime,param_2);
    pTVar7 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)(**(code **)*param_2->Object)();
    local_138.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_138.Elements._48_8_ = _UNK_150631d98;
    local_138.Elements._0_8_ = 0;
    local_138.Elements._8_8_ = 0;
    local_138.Elements._32_8_ = 0;
    local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_138.HashSize = 0;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    operator=(&local_138,pTVar7);
    plVar8 = (longlong *)(**(code **)((longlong)*param_2->Object + 0x48))();
    local_e8 = *plVar8;
    lStack_e0 = plVar8[1];
    ::FString::FString(&local_d8,&param_1->ProviderName);
    ::FString::FString(&local_c8,&param_1->MachineName);
    local_b0 = 1;
    local_ac = (atomic<int>)0x1;
    local_b8 = dVar4;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              (&local_a8,&local_138);
    local_138.HashSize = 0;
    if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_138.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138.Elements);
    local_ac = (atomic<int>)param_1->DiscoveryProtocolVersion;
    pTVar9 = ::operator_new(0xa0);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFProviderPollResult___00_SharedPointerInternals__6B_
      ;
      pTVar9[1]._padding_ = local_e8;
      pTVar9[1].SharedReferenceCount = (atomic<int>)(undefined4)lStack_e0;
      pTVar9[1].WeakReferenceCount = (atomic<int>)lStack_e0._4_4_;
      pTVar9[2]._padding_ = (longlong)local_d8.Data.AllocatorInstance.Data;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar9[2].SharedReferenceCount = (atomic<int>)local_d8.Data.ArrayNum;
      pTVar9[2].WeakReferenceCount = (atomic<int>)local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      pTVar9[3]._padding_ = (longlong)local_c8.Data.AllocatorInstance.Data;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar9[3].SharedReferenceCount = (atomic<int>)local_c8.Data.ArrayNum;
      pTVar9[3].WeakReferenceCount = (atomic<int>)local_c8.Data.ArrayMax;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      pTVar9[4]._padding_ = (longlong)local_b8;
      *(undefined1 *)&pTVar9[4].SharedReferenceCount = local_b0;
      pTVar9[4].WeakReferenceCount = local_ac;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  *)(pTVar9 + 5),&local_a8);
      pTVar10 = pTVar9 + 1;
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    iVar6 = (this->LastProviderPoolResults).ArrayNum;
    piVar1 = &(this->LastProviderPoolResults).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->LastProviderPoolResults).AllocatorInstance,piVar1);
    }
    (this->LastProviderPoolResults).ArrayNum = iVar6 + 1;
    pFVar2 = (this->LastProviderPoolResults).AllocatorInstance.Data;
    *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar6 * 0x10) = pTVar10;
    *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar6 * 0x10 + 8) = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// IsRunning @ 14d05fb90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkMessageBusDiscoveryManager::IsRunning(FLiveLinkMessageBusDiscoveryManager *this)

{
  return this->bRunning != (FThreadSafeBool)0x0;
}

// RemoveDiscoveryMessageRequest @ 14d078e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusDiscoveryManager::RemoveDiscoveryMessageRequest
          (FLiveLinkMessageBusDiscoveryManager *this)

{
  LOCK();
  this->PingRequestCounter = (TAtomic<int>)((int)this->PingRequestCounter + -1);
  UNLOCK();
  return;
}

// Run @ 14d07acf0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FLiveLinkMessageBusDiscoveryManager::Run(FLiveLinkMessageBusDiscoveryManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  TSharedPtr<FProviderPollResult,1> *pTVar3;
  FMessageEndpoint *this_00;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  FGuid *pFVar11;
  undefined8 *puVar12;
  UScriptStruct *pUVar13;
  FDateTime local_res8;
  FTimespan local_res10;
  FGuid local_48 [2];
  
  dVar8 = __real_3f1a36e2eb1c432d;
  if (this->bRunning != (FThreadSafeBool)0x0) {
    lpCriticalSection = &this->SourcesCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (0 < (int)this->PingRequestCounter) {
        piVar1 = &(this->LastProviderPoolResults).ArrayMax;
        pTVar3 = (TSharedPtr<FProviderPollResult,1> *)
                 (this->LastProviderPoolResults).AllocatorInstance.Data;
        iVar2 = (this->LastProviderPoolResults).ArrayNum;
        if (*piVar1 < 0) {
          DestructItems<TSharedPtr<FProviderPollResult,1>,int>(pTVar3,iVar2);
          (this->LastProviderPoolResults).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&(this->LastProviderPoolResults).AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<TSharedPtr<FProviderPollResult,1>,int>(pTVar3,iVar2);
          (this->LastProviderPoolResults).ArrayNum = 0;
        }
        pFVar11 = FGuid::NewGuid(local_48);
        uVar10 = pFVar11->B;
        uVar6 = pFVar11->C;
        uVar7 = pFVar11->D;
        (this->LastPingRequest).A = pFVar11->A;
        (this->LastPingRequest).B = uVar10;
        (this->LastPingRequest).C = uVar6;
        (this->LastPingRequest).D = uVar7;
        if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return uVar10;
        }
        this_00 = (this->MessageEndpoint).Object;
        puVar12 = FMemory::Malloc(0x18,0);
        uVar5 = *(undefined8 *)&(this->LastPingRequest).C;
        local_res8.Ticks = 0x2bca2875f4373fff;
        local_res10.Ticks = 0;
        *puVar12 = *(undefined8 *)&this->LastPingRequest;
        puVar12[1] = uVar5;
        *(undefined4 *)(puVar12 + 2) = 2;
        *(undefined4 *)((longlong)puVar12 + 0x14) = 2;
        pUVar13 = FLiveLinkPingMessage::StaticStruct();
        FMessageEndpoint::Publish(this_00,puVar12,pUVar13,Network,&local_res10,&local_res8);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      (**(code **)(this->PollEvent->_padding_ + 0x20))
                (this->PollEvent,(longlong)((double)(this->PingRequestFrequency).Ticks * dVar8));
    } while (this->bRunning != (FThreadSafeBool)0x0);
  }
  return 0;
}

// Stop @ 14d0808e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkMessageBusDiscoveryManager::Stop(FLiveLinkMessageBusDiscoveryManager *this)

{
  LOCK();
  this->bRunning = (FThreadSafeBool)0x0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00014d0808ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->PollEvent->_padding_ + 0x10))();
  return;
}

