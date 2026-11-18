// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 29

// FOnDemandIoBackend @ 1445a52b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandIoBackend * __thiscall
UE::IoStore::FOnDemandIoBackend::FOnDemandIoBackend
          (FOnDemandIoBackend *this,FOnDemandEndpointConfig *param_1,FOnDemandIoStore *param_2,
          FOnDemandHttpThread *param_3,
          TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_> *param_4)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FDistributedEndpointUrl *pFVar3;
  TUniquePtr<IConsoleCommand,FConsoleCommandUnregister> *this_00;
  FString *pFVar4;
  int iVar5;
  FImpl *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  IConsoleCommand *pIVar9;
  code *pcVar10;
  IConsoleManager *pIVar11;
  bool bVar12;
  FSlab *pFVar13;
  longlong lVar14;
  size_t sVar15;
  char *pcVar16;
  FHostGroupManager *this_01;
  FName *pFVar17;
  TIoStatusOr<UE::IoStore::FIASHostGroup> *this_02;
  FOnDemandIoBackend *pFVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  IConsoleCommand *pIVar21;
  FSlab *pFVar22;
  FSlab *pFVar23;
  ForAnyElementType FVar24;
  wchar_t *_Str;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c8;
  FDelegateAllocation local_1c0;
  FName local_1b0;
  FAnsiString local_1a8;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FString local_188;
  FString local_178;
  FDestructionSentinel local_168;
  FDestructionSentinel local_150;
  FDelegateAllocation *local_138;
  FConsoleCommandUnregister local_130 [8];
  TStringView<char> local_128;
  FImpl *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  undefined1 local_108 [32];
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this->_padding_ = (longlong)&___7FOnDemandIoBackend_IoStore_UE__6B_;
  this->IoStore = param_2;
  this->HttpClient = param_3;
  (this->Cache).Ptr = param_4->Ptr;
  param_4->Ptr = (IIasCache *)0x0;
  (this->BackendContext).Object = (FIoDispatcherBackendContext *)0x0;
  (this->BackendContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChunkRequests).Allocator.CurrentSlab = (FSlab *)0x0;
  pFVar13 = ::operator_new(0x4c08);
  pFVar23 = (FSlab *)0x0;
  if (pFVar13 != (FSlab *)0x0) {
    memset(&pFVar13->field_0x4,0,0x4c04);
    lVar14 = 0x80;
    pFVar13->Allocated = 0;
    pFVar13->Freed = 0;
    pFVar22 = pFVar13;
    do {
      pFVar22 = (FSlab *)&pFVar22->Elements[0].Slab;
      *(FSlab **)pFVar22 = (FSlab *)0x0;
      lVar14 = lVar14 + -1;
      pFVar23 = pFVar13;
    } while (lVar14 != 0);
  }
  (this->ChunkRequests).Allocator.CurrentSlab = pFVar23;
  *(undefined8 *)&(this->ChunkRequests).Inflight = 0;
  *(undefined8 *)&(this->ChunkRequests).Inflight.field_0x8 = 0;
  *(undefined8 *)&(this->ChunkRequests).Inflight.field_0x20 = 0;
  *(undefined4 *)&(this->ChunkRequests).Inflight.field_0x28 = 0;
  *(undefined4 *)&(this->ChunkRequests).Inflight.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkRequests).Inflight.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkRequests).Inflight.field_0x34 = 0;
  *(undefined8 *)&(this->ChunkRequests).Inflight.field_0x40 = 0;
  *(undefined4 *)&(this->ChunkRequests).Inflight.field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->ChunkRequests).Mutex,4000);
  (this->ChunkRequests).ChunkRequestCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CompletedRequests,4000);
  (this->CompletedRequests).Head = (FIoRequestImpl *)0x0;
  pTVar2 = &this->DefaultUrls;
  (this->CompletedRequests).Tail = (FIoRequestImpl *)0x0;
  (this->CompletedRequests).ListNum = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DefaultUrls).ArrayNum = 0;
  (this->DefaultUrls).ArrayMax = 0;
  (this->BackendStatus).Flags = (atomic<unsigned_char>)0x0;
  FOnDemandIoBackendStats::FOnDemandIoBackendStats(&this->Stats,&this->BackendStatus);
  pFVar3 = &this->DistributionUrl;
  pFVar4 = &(this->DistributionUrl).FallbackUrl;
  (pFVar3->EndpointUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistributionUrl).FallbackUrl.Data.ArrayNum = 0;
  (this->DistributionUrl).FallbackUrl.Data.ArrayMax = 0;
  (this->DistributionUrl).EndpointUrl.Data.ArrayNum = 0;
  (this->DistributionUrl).EndpointUrl.Data.ArrayMax = 0;
  FEventRef::FEventRef(&this->DistributedEndpointEvent,AutoReset);
  FIASHostGroup::FIASHostGroup(&this->DefaultHostGroup);
  (this->Lock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->HostGroupTask).Pimpl.Reference = (FTaskBase *)0x0;
  this->InflightCacheRequestCount = (atomic<unsigned_int>)0x0;
  this->bStopRequested = (atomic<bool>)0x0;
  (this->DropCacheCommand).Ptr = (IConsoleCommand *)0x0;
  if ((param_1->TocPath).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->TocPath).Data.AllocatorInstance.Data;
    local_68.Data = (FScriptContainerElement *)0x0;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_60 = (FScriptContainerElement *)0x0;
      local_58 = 0;
      goto LAB_1445a5519;
    }
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  sVar15 = wcslen(_Str);
  local_58 = (int)sVar15;
  local_1b0.ComparisonIndex.Value = local_58 + 1;
  FVar24.Data = (FScriptContainerElement *)0x0;
  if (0x80 < local_1b0.ComparisonIndex.Value) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_68,0,local_1b0.ComparisonIndex.Value,1);
    FVar24.Data = local_68.Data;
  }
  local_60 = local_e8;
  if (FVar24.Data != (FScriptContainerElement *)0x0) {
    local_60 = FVar24.Data;
  }
  pcVar16 = FGenericPlatformString::Convert<wchar_t,char>
                      ((char *)local_60,local_1b0.ComparisonIndex.Value,_Str,
                       local_1b0.ComparisonIndex.Value);
  if ((pcVar16 == (char *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                          ,0x25,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FOnDemandIoBackend *)(*pcVar10)();
    return pFVar18;
  }
LAB_1445a5519:
  FAnsiString::FAnsiString(&local_1a8,(char *)local_60);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  this_01 = FHostGroupManager::Get();
  local_198 = local_1a8.Data.AllocatorInstance.Data;
  iStack_190 = local_1a8.Data.ArrayNum + -1;
  if (local_1a8.Data.ArrayNum == 0) {
    iStack_190 = 0;
  }
  pFVar17 = ::FName::FName(&local_1b0,"DefaultOnDemand");
  local_128._12_4_ = uStack_18c;
  local_128.Size = iStack_190;
  local_128.DataPtr = (char *)local_198;
  this_02 = FHostGroupManager::Register
                      (this_01,(TIoStatusOr<UE::IoStore::FIASHostGroup> *)local_108,*pFVar17,
                       &local_128);
  if ((this_02->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this_02->StatusValue);
  }
  FIoStatus::operator=(&this_02->StatusValue,&FIoStatus::Unknown);
  pFVar6 = *(FImpl **)(this_02->Value).Pad;
  pTVar7 = *(TReferenceControllerBase<1> **)((this_02->Value).Pad + 8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118 = (this->DefaultHostGroup).Impl.Object;
  pTStack_110 = (this->DefaultHostGroup).Impl.SharedReferenceCount.ReferenceController;
  (this->DefaultHostGroup).Impl.Object = pFVar6;
  (this->DefaultHostGroup).Impl.SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FIoStatus::operator=((FIoStatus *)local_108,Unknown);
  if (local_108._8_4_ == Ok) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_108._24_8_);
  }
  FIoStatus::~FIoStatus((FIoStatus *)local_108);
  iVar5 = (param_1->DistributionUrl).Data.ArrayNum;
  if (iVar5 < 2) {
    if (pTVar2 != &param_1->ServiceUrls) {
      DestructItems<FString,int>
                ((FString *)(pTVar2->AllocatorInstance).Data,(this->DefaultUrls).ArrayNum);
      iVar5 = (param_1->ServiceUrls).ArrayNum;
      piVar1 = &(this->DefaultUrls).ArrayMax;
      pFVar8 = (param_1->ServiceUrls).AllocatorInstance.Data;
      (this->DefaultUrls).ArrayNum = iVar5;
      if ((iVar5 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar5,*piVar1,&pTVar2->AllocatorInstance,iVar5,piVar1);
        ConstructItems<FString,FString,int>
                  ((pTVar2->AllocatorInstance).Data,(FString *)pFVar8,iVar5);
      }
    }
  }
  else {
    pFVar8 = (param_1->DistributionUrl).Data.AllocatorInstance.Data;
    local_1e8.Data = (FScriptContainerElement *)0x0;
    local_1e0 = CONCAT44(local_1e0._4_4_,iVar5);
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_1e8,iVar5,(int *)((longlong)&local_1e0 + 4));
    memcpy(local_1e8.Data,pFVar8,(longlong)iVar5 * 2);
    iVar5 = (param_1->FallbackUrl).Data.ArrayNum;
    pFVar8 = (param_1->FallbackUrl).Data.AllocatorInstance.Data;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = CONCAT44(local_1d0._4_4_,iVar5);
    if (iVar5 == 0) {
      local_1d0 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,&local_1d8,iVar5,(int *)((longlong)&local_1d0 + 4));
      memcpy(local_1d8.Data,pFVar8,(longlong)iVar5 * 2);
    }
    if (pFVar3 != (FDistributedEndpointUrl *)&local_1e8) {
      pFVar8 = (pFVar3->EndpointUrl).Data.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pFVar3->EndpointUrl).Data.AllocatorInstance.Data = local_1e8.Data;
      (this->DistributionUrl).EndpointUrl.Data.ArrayNum = (int)local_1e0;
      (this->DistributionUrl).EndpointUrl.Data.ArrayMax = local_1e0._4_4_;
      local_1e0 = 0;
      local_1e8.Data = (FScriptContainerElement *)0x0;
    }
    if (pFVar4 != (FString *)&local_1d8) {
      pFVar8 = (pFVar4->Data).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pFVar4->Data).AllocatorInstance.Data = local_1d8.Data;
      (this->DistributionUrl).FallbackUrl.Data.ArrayNum = (int)local_1d0;
      local_1d8.Data = (FScriptContainerElement *)0x0;
      (this->DistributionUrl).FallbackUrl.Data.ArrayMax = local_1d0._4_4_;
      local_1d0 = 0;
    }
    if (local_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data);
    }
    if (local_1e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
  }
  FBackendStatus::AddOrRemoveFlags(&this->BackendStatus,HttpEnabled,false,L"HTTP streaming enabled")
  ;
  ::FString::FString(&local_178,L"false");
  ::FString::FString(&local_188,L"IAS.Enabled");
  FGenericCrashContext::SetEngineData(&local_188,&local_178);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  FBackendStatus::AddOrRemoveFlags
            (&this->BackendStatus,CacheEnabled,(this->Cache).Ptr != (IIasCache *)0x0,
             L"Cache enabled");
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FOnDemandIoBackend *)(*pcVar10)();
    return pFVar18;
  }
  pIVar11 = IConsoleManager::Singleton;
  local_1c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1c0.DelegateSize = 0;
  pcVar10 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c8,(FWriteAccessScope *)&local_150);
  local_138 = &local_1c0;
  puVar19 = Core::Private::DelegateAllocate(0x20,&local_1c0);
  if (puVar19 != (undefined8 *)0x0) {
    *puVar19 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar20;
    *puVar19 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandIoBackend::FOnDemandIoBackend'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar19[3] = this;
  }
  if (local_150.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
  }
  pIVar21 = (IConsoleCommand *)
            (*pcVar10)(pIVar11,L"ias.DropCache",
                       L"Resets the IAS cache and deletes the data from disk.",&local_1c8);
  this_00 = &this->DropCacheCommand;
  if ((FConsoleCommandUnregister *)this_00 != local_130) {
    pIVar9 = this_00->Ptr;
    this_00->Ptr = pIVar21;
    FConsoleCommandUnregister::operator()((FConsoleCommandUnregister *)this_00,pIVar9);
    pIVar21 = (IConsoleCommand *)0x0;
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    pFVar18 = (FOnDemandIoBackend *)(*pcVar10)();
    return pFVar18;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar21);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c8,(FWriteAccessScope *)&local_168);
  if ((local_1c0.DelegateSize != 0) &&
     (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1c0,0,0,0x10);
    local_1c0.DelegateSize = 0;
  }
  if (local_168.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
  }
  if (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c8.AccessDetector);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FOnDemandIoBackend @ 1445a9150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandIoBackend::~FOnDemandIoBackend(FOnDemandIoBackend *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  IConsoleCommand *pIVar3;
  FTaskBase *pFVar4;
  FScriptContainerElement *pFVar5;
  IIasCache *pIVar6;
  code *pcVar7;
  bool bVar8;
  BOOLEAN BVar9;
  
  this->_padding_ = (longlong)&___7FOnDemandIoBackend_IoStore_UE__6B_;
  Shutdown(this);
  pIVar3 = (this->DropCacheCommand).Ptr;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar3,1);
  pFVar4 = (this->HostGroupTask).Pimpl.Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar4->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar9 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DefaultHostGroup).Impl.SharedReferenceCount.ReferenceController);
  FEventRef::~FEventRef(&this->DistributedEndpointEvent);
  pFVar5 = (this->DistributionUrl).FallbackUrl.Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->DistributionUrl).EndpointUrl.Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FOnDemandIoBackendStats::~FOnDemandIoBackendStats(&this->Stats);
  DestructItems<FString,int>
            ((FString *)(this->DefaultUrls).AllocatorInstance.Data,(this->DefaultUrls).ArrayNum);
  pFVar5 = (this->DefaultUrls).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CompletedRequests);
  FChunkRequests::~FChunkRequests(&this->ChunkRequests);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackendContext).SharedReferenceCount.ReferenceController);
  pIVar6 = (this->Cache).Ptr;
  if (pIVar6 != (IIasCache *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  return;
}

// operator() @ 1445aabc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandIoBackend::BeginCreateDefaultHostGroup'::__l2::<lambda_1>::operator()
          (void *this)

{
  bool bVar1;
  FString local_28;
  FString local_18;
  
  bVar1 = UE::IoStore::FOnDemandIoBackend::CreateDefaultHostGroup(*(FOnDemandIoBackend **)this);
  if (bVar1) {
    UE::IoStore::FBackendStatus::AddOrRemoveFlags
              ((FBackendStatus *)(*(longlong *)this + 0xf8),HttpEnabled,true,
               L"HTTP streaming enabled");
    ::FString::FString(&local_18,L"true");
    ::FString::FString(&local_28,L"IAS.Enabled");
    FGenericCrashContext::SetEngineData(&local_28,&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1445ab800

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::__l2::<lambda_1>::operator()
          (void *this,uint param_1,TStringView<wchar_t> *param_2,FIoBuffer *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  ETaskPriority EVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  FTaskBase *this_00;
  longlong lVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar4 = *(longlong *)((longlong)this + 8);
  if (UE::IoStore::GIasEnableRequestHandleClear) {
    lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x88);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    *(undefined8 *)(lVar4 + 0x50) = 0;
    LeaveCriticalSection(lpCriticalSection);
  }
  FIoBuffer::operator=((FIoBuffer *)(*(longlong *)((longlong)this + 8) + 0x68),param_3);
  if (param_1 - 200 < 100) {
    lVar4 = *(longlong *)this;
    lVar5 = *(longlong *)((longlong)this + 8);
    lVar7 = 4;
    if ((longlong)UE::IoStore::GCompleteMaterializeTaskPriority < 4) {
      lVar7 = (longlong)UE::IoStore::GCompleteMaterializeTaskPriority;
    }
    lVar6 = 0;
    if (0 < lVar7) {
      lVar6 = lVar7;
    }
    EVar3 = UE::IoStore::GCompleteMaterializeTaskPriorities[lVar6];
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<``UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (this_00,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp(811)"
                 ,EVar3,None,None);
      this_00[1]._padding_ = lVar4;
      this_00[1]._padding_ = lVar5;
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<``UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>_>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
  }
  else {
    UE::IoStore::FOnDemandIoBackend::CompleteRequest
              (*(FOnDemandIoBackend **)this,*(FChunkRequest **)((longlong)this + 8));
  }
  return;
}

// BeginCreateDefaultHostGroup @ 1445b4710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackend::BeginCreateDefaultHostGroup(FOnDemandIoBackend *this)

{
  atomic<unsigned_int> *paVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  FTaskBase *this_00;
  longlong local_18 [2];
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::IoStore::FOnDemandIoBackend::BeginCreateDefaultHostGroup'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp(792)"
               ,Default,None,None);
    this_00[1]._padding_ = (longlong)this;
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::IoStore::FOnDemandIoBackend::BeginCreateDefaultHostGroup'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  pFVar2 = &this->HostGroupTask;
  if (pFVar2 == (FTaskHandle *)local_18) {
    if (this_00 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
  }
  else {
    pFVar4 = (pFVar2->Pimpl).Reference;
    (pFVar2->Pimpl).Reference = this_00;
    if (pFVar4 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar4->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001445b47c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar4->_padding_)(pFVar4,1);
        return;
      }
    }
  }
  return;
}

// CancelIoRequest @ 1445b6850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackend::CancelIoRequest(FOnDemandIoBackend *this,FIoRequestImpl *param_1)

{
  FIoDispatcherBackendContext *this_00;
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  bVar2 = FChunkRequests::Cancel(&this->ChunkRequests,param_1,this->HttpClient,(this->Cache).Ptr);
  if (bVar2) {
    TThreadSafeIntrusiveQueue<FIoRequestImpl>::Enqueue(&this->CompletedRequests,param_1);
    if ((this->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (this->BackendContext).Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
    if (*(int *)&(this_00->WakeUpDispatcherThreadDelegate).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this_00->WakeUpDispatcherThreadDelegate).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// CompleteCacheRead @ 1445b8dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackend::CompleteCacheRead(FOnDemandIoBackend *this,FChunkRequest *param_1)

{
  EIoErrorCode EVar1;
  BufCore *pBVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  bool bVar7;
  TStringView<char> local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId923,"IasBackend::CompleteCacheRead",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
               ,0x39b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId923);
  }
  EVar1 = param_1->CacheGetStatus;
  bVar5 = false;
  if (EVar1 == Ok) {
    if ((((param_1->Chunk).CorePtr.Reference)->DataPtr == (uchar *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChunkRequest->Chunk.GetData() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                           ,0x3a1,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (GIasPoisonCache != false) {
      pBVar2 = (param_1->Chunk).CorePtr.Reference;
      uVar6 = (ulonglong)CONCAT14(pBVar2->DataSizeHigh,pBVar2->DataSizeLow);
      while (uVar6 != 0) {
        uVar6 = uVar6 - 1;
        ((param_1->Chunk).CorePtr.Reference)->DataPtr[uVar6] = 'M';
      }
    }
    param_1->bCached = true;
  }
  else {
    if (EVar1 == Cancelled) {
      bVar5 = true;
    }
    else {
      if (EVar1 == ReadError) {
        FOnDemandIoBackendStats::OnCacheError(&this->Stats);
      }
      if (((((byte)(this->BackendStatus).Flags & 2) != 0) && (GIasHttpEnabled != false)) &&
         (bVar4 = FIASHostGroup::IsConnected(&param_1->HostGroup), bVar4)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          local_18.Size = 0x10;
          local_18.DataPtr = "Iax/HttpGetAgain";
          ScopeId = LaneTrace_NewScope(&local_18);
          _Init_thread_footer(&::_TSS0);
        }
        LaneTrace_Change((param_1->LaneScope).Lane,ScopeId);
        IssueHttpRequest(this,param_1);
        goto LAB_1445b8f60;
      }
    }
    if ((4 < (byte)LogIas._0_1_) && (!bVar5)) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
  }
  CompleteRequest(this,param_1);
LAB_1445b8f60:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CompleteRequest @ 1445bc690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackend::CompleteRequest(FOnDemandIoBackend *this,FChunkRequest *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FChunkRequestParams *this_00;
  int *piVar1;
  TThreadSafeIntrusiveQueue<FIoRequestImpl> *lpCriticalSection_00;
  atomic<unsigned_char> aVar2;
  int iVar3;
  uint uVar4;
  FLaneTrace *pFVar5;
  FIoRequestImpl *this_01;
  BufCore *pBVar6;
  IIasCache *pIVar7;
  FOnDemandChunkEntry *pFVar8;
  FIoRequestImpl *pFVar9;
  FIoDispatcherBackendContext *this_02;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TRefCountPtr<FIoBuffer::BufCore> this_03;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  ushort uVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulong64 uVar21;
  EIoDecodeFlags EVar22;
  bool bVar23;
  bool bVar24;
  FLLMScope local_res18 [2];
  TRefCountPtr<FIoBuffer::BufCore> local_res20;
  FName local_168;
  LARGE_INTEGER local_160;
  ulong64 local_158;
  FIoRequestImpl *local_150;
  FMemScope local_148 [2];
  uchar *local_138;
  ulonglong uStack_130;
  TMemoryView<void> local_128;
  TMemoryView<void_const_> local_118;
  FIoStatus local_108;
  FIoStatus local_f8;
  FReadAccessScope local_e8;
  FIoChunkDecodingParams local_c8;
  
  pFVar5 = (param_1->LaneScope).Lane;
  (param_1->LaneScope).Lane = (FLaneTrace *)0x0;
  if (pFVar5 != (FLaneTrace *)0x0) {
    LaneTrace_Leave(pFVar5);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_Ias.UniqueName,false,None,Default,true);
  local_168 = LLMTagDeclaration_Ias.UniqueName;
  FMemScope::FMemScope(local_148,&local_168,true);
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId831,"IasBackend::CompleteRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
               ,0x33f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId831);
  }
  if ((param_1 == (FChunkRequest *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ChunkRequest != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                          ,0x340,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (param_1->bCancelled == false) {
    lpCriticalSection = &(this->ChunkRequests).Mutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_1445bcf09:
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &param_1->Params;
    if (*(int *)&(this->ChunkRequests).Inflight.field_0x8 !=
        *(int *)&(this->ChunkRequests).Inflight.field_0x34) {
      TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FIoHash>
                ((TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
                  *)&(this->ChunkRequests).Inflight,*(uint *)(this_00->ChunkKey).Hash,
                 &this_00->ChunkKey);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res20.Reference = (param_1->Chunk).CorePtr.Reference;
    (param_1->Chunk).CorePtr.Reference = (BufCore *)0x0;
    FChunkRequestParams::GetDecodingParams(this_00,&local_c8);
    if ((param_1->bCached == false) &&
       ((local_res20.Reference)->DataSizeHigh != '\0' || (local_res20.Reference)->DataSizeLow != 0))
    {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    this_01 = param_1->RequestHead;
    param_1->RequestTail = (FIoRequestImpl *)0x0;
    param_1->RequestHead = (FIoRequestImpl *)0x0;
    param_1->RequestCount = 0;
    dVar13 = __real_43e0000000000000;
    dVar12 = __real_408f400000000000;
    while (this_01 != (FIoRequestImpl *)0x0) {
      bVar15 = false;
      local_150 = this_01->NextRequest;
      this_01->NextRequest = (FIoRequestImpl *)0x0;
      if ((local_res20.Reference)->DataSizeHigh != '\0' || (local_res20.Reference)->DataSizeLow != 0
         ) {
        bVar24 = -1 < CpuChannel->Enabled;
        if (bVar24) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId858,"IasBackend::DecodeBlocks",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                     ,0x35a);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId858);
        }
        uVar20 = (ulonglong)((param_1->Params).ChunkInfo.Entry)->RawSize;
        if ((this_01->Options).RequestedSize < uVar20) {
          uVar20 = (this_01->Options).RequestedSize;
        }
        FIoRequestImpl::CreateBuffer(this_01,uVar20);
        local_c8.RawOffset = (this_01->Options).RequestedOffset;
        if ((GIasEnableWriteOnlyDecoding == false) ||
           (((this_01->Options).Flags & HardwareTargetBuffer) == None)) {
          EVar22 = None;
        }
        else {
          EVar22 = WriteOnly;
        }
        if (((this_01->Buffer).bIsSet == false) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pBVar6 = (this_01->Buffer).TypedValue.CorePtr.Reference;
        local_138 = (local_res20.Reference)->DataPtr;
        local_128.Data = pBVar6->DataPtr;
        uStack_130 = (ulonglong)
                     CONCAT14((local_res20.Reference)->DataSizeHigh,
                              (local_res20.Reference)->DataSizeLow);
        local_128.Size = (ulong64)CONCAT14(pBVar6->DataSizeHigh,pBVar6->DataSizeLow);
        local_118.Data = local_138;
        local_118.Size = uStack_130;
        bVar15 = FIoChunkEncoding::Decode(&local_c8,&local_118,&local_128,EVar22);
        if (!bVar15) {
          if (param_1->bCached == false) {
            LOCK();
            GHttpDecodeErrorCount[0].Value =
                 (atomic<__int64>)((longlong)GHttpDecodeErrorCount[0].Value + 1);
            UNLOCK();
            if (-1 < CountersChannel->Enabled) {
              if (GHttpDecodeErrorCount[0].CounterId == (atomic<unsigned_int>)0x0) {
                uVar17 = FCountersTrace::OutputInitCounter
                                   (GHttpDecodeErrorCount[0].CounterName,TraceCounterType_Int,
                                    GHttpDecodeErrorCount[0].CounterFlags & 0xf);
                LOCK();
                if (GHttpDecodeErrorCount[0].CounterId == (atomic<unsigned_int>)0x0) {
                  GHttpDecodeErrorCount[0].CounterId._2_2_ = 0;
                  GHttpDecodeErrorCount[0].CounterId._0_2_ = uVar17;
                }
                UNLOCK();
              }
              FCountersTrace::OutputSetValue
                        (GHttpDecodeErrorCount[0].CounterId._0_2_,
                         (long64)GHttpDecodeErrorCount[0].Value);
            }
          }
          else {
            FOnDemandIoBackendStats::OnCacheDecodeError(&this->Stats);
            if (((this->Cache).Ptr == (IIasCache *)0x0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Cache.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                                    ,0x369,L""), bVar16)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pIVar7 = (this->Cache).Ptr;
            (**(code **)((longlong)*pIVar7 + 0x40))(pIVar7,&local_108,&param_1->Params);
            FIoStatus::~FIoStatus(&local_108);
          }
        }
        if (bVar24) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      uVar21 = 0;
      if (this_01->StartTime != 0) {
        QueryPerformanceCounter(&local_160);
        lVar18 = 0;
        dVar11 = (double)(local_160.QuadPart - this_01->StartTime) *
                 FGenericPlatformTime::SecondsPerCycle64 * dVar12;
        if ((dVar13 <= dVar11) && (dVar11 = dVar11 - dVar13, dVar11 < dVar13)) {
          lVar18 = -0x8000000000000000;
        }
        uVar21 = (longlong)dVar11 + lVar18;
      }
      if (bVar15 == false) {
        bVar14 = false;
        if (this_01->LastBackendError != Cancelled) {
          this_01->LastBackendError = ReadError;
        }
        FOnDemandIoBackendStats::OnIoRequestError(&this->Stats);
        pFVar8 = (param_1->Params).ChunkInfo.Entry;
        LogIoResult(&this_01->ChunkId,&pFVar8->Hash,uVar21,0,(this_01->Options).RequestedOffset,
                    &(param_1->Params).ChunkRange,(ulonglong)pFVar8->EncodedSize,param_1->Priority,
                    param_1->bCached);
        FIoStoreTrace::RequestFailed(this_01);
      }
      else {
        if (((this_01->Buffer).bIsSet == false) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pBVar6 = (this_01->Buffer).TypedValue.CorePtr.Reference;
        FOnDemandIoBackendStats::OnIoRequestComplete
                  (&this->Stats,(ulonglong)CONCAT14(pBVar6->DataSizeHigh,pBVar6->DataSizeLow),uVar21
                  );
        bVar15 = param_1->bCached;
        iVar3 = param_1->Priority;
        uVar4 = ((param_1->Params).ChunkInfo.Entry)->EncodedSize;
        local_158 = (this_01->Options).RequestedOffset;
        if (((this_01->Buffer).bIsSet == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pBVar6 = (this_01->Buffer).TypedValue.CorePtr.Reference;
        LogIoResult(&this_01->ChunkId,&((param_1->Params).ChunkInfo.Entry)->Hash,uVar21,
                    (ulonglong)CONCAT14(pBVar6->DataSizeHigh,pBVar6->DataSizeLow),local_158,
                    &(param_1->Params).ChunkRange,(ulonglong)uVar4,iVar3,bVar15);
        if (((this_01->Buffer).bIsSet == false) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pBVar6 = (this_01->Buffer).TypedValue.CorePtr.Reference;
        FIoStoreTrace::RequestCompleted
                  (this_01,(ulonglong)CONCAT14(pBVar6->DataSizeHigh,pBVar6->DataSizeLow));
      }
      if ((this_01->NextRequest != (FIoRequestImpl *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Request->NextRequest == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                              ,0x17,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lpCriticalSection_00 = &this->CompletedRequests;
      if (lpCriticalSection_00 == (TThreadSafeIntrusiveQueue<FIoRequestImpl> *)0x0)
      goto LAB_1445bcf09;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      pFVar9 = (this->CompletedRequests).Tail;
      if (pFVar9 == (FIoRequestImpl *)0x0) {
        if (((this->CompletedRequests).Head != (FIoRequestImpl *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Head == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\ThreadSafeIntrusiveQueue.h"
                                ,0x20,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (this->CompletedRequests).Head = this_01;
      }
      else {
        pFVar9->NextRequest = this_01;
      }
      piVar1 = &(this->CompletedRequests).ListNum;
      *piVar1 = *piVar1 + 1;
      (this->CompletedRequests).Tail = this_01;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (((this->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_02 = (this->BackendContext).Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,&local_e8);
      if (*(int *)&(this_02->WakeUpDispatcherThreadDelegate).field_0x10 == 0) {
        plVar19 = (longlong *)0x0;
      }
      else {
        plVar19 = *(longlong **)&(this_02->WakeUpDispatcherThreadDelegate).field_0x8;
      }
      (**(code **)(*plVar19 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
      this_01 = local_150;
    }
    if ((((bVar14) && (aVar2 = (this->BackendStatus).Flags, ((byte)aVar2 & 1) != 0)) &&
        (((byte)aVar2 & 2) != 0)) && (GIasHttpEnabled != false)) {
      pIVar7 = (this->Cache).Ptr;
      (**(code **)((longlong)*pIVar7 + 0x38))(pIVar7,&local_f8,&param_1->Params,&local_res20);
      FIoStatus::~FIoStatus(&local_f8);
    }
    FChunkRequests::Release(&this->ChunkRequests,param_1);
    this_03.Reference = local_res20.Reference;
    if (local_res20.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(local_res20.Reference);
      LOCK();
      piVar1 = &(this_03.Reference)->NumRefs;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore(this_03.Reference);
        ::operator_delete(this_03.Reference,0x20);
      }
    }
  }
  else {
    if ((param_1->RequestHead != (FIoRequestImpl *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkRequest->RequestHead == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                            ,0x344,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((param_1->RequestTail != (FIoRequestImpl *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkRequest->RequestTail == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                            ,0x345,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FChunkRequests::Release(&this->ChunkRequests,param_1);
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_148);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// CreateDefaultHostGroup @ 1445c1ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall UE::IoStore::FOnDemandIoBackend::CreateDefaultHostGroup(FOnDemandIoBackend *this)

{
  int iVar1;
  FImpl *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined1 auStackY_108 [32];
  LARGE_INTEGER local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  LARGE_INTEGER local_b8 [2];
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<char> local_98;
  TStringView<char> local_88;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  TStringView<char> local_68;
  TStringView<char> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1169,"IasBackend::ResolveDefaultHostGroup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
               ,0x491);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1169);
  }
  QueryPerformanceCounter(&local_c8);
  bVar5 = ResolveDefaultHostGroup(this);
  iVar4 = GIasHttpTimeOutMs;
  if (bVar5) {
    if (((this->DefaultHostGroup).Impl.Object == (FImpl *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar2 = (this->DefaultHostGroup).Impl.Object;
    local_a8 = (pFVar2->TestPath).Data.AllocatorInstance.Data;
    iVar1 = (pFVar2->TestPath).Data.ArrayNum;
    iStack_a0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_a0 = 0;
    }
    if ((pFVar2 == (FImpl *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FOnDemandHostGroup::PrimaryHost(&((this->DefaultHostGroup).Impl.Object)->HostGroup,&local_88);
    local_98.DataPtr = local_88.DataPtr;
    local_98.Size = local_88.Size;
    local_98._12_4_ = local_88._12_4_;
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId105,"IasBackend::ConnectionTest",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\LatencyTesting.cpp"
                 ,0x69);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId105);
    }
    local_68._12_4_ = uStack_9c;
    local_68.Size = iStack_a0;
    local_c8.QuadPart = (LONGLONG)&local_48;
    local_48 = 0;
    uStack_40 = 0;
    uStack_c0 = 4;
    uStack_70 = CONCAT44(uStack_bc,4);
    local_58.DataPtr = local_98.DataPtr;
    local_58.Size = local_98.Size;
    local_58._12_4_ = local_98._12_4_;
    local_68.DataPtr = (char *)local_a8;
    local_78.QuadPart = local_c8.QuadPart;
    LatencyTest(&local_58,&local_68,iVar4,(TArrayView<int,int> *)&local_78.s);
    if (((((int)local_48 < 0) && (local_48 < 0)) && ((int)uStack_40 < 0)) && (uStack_40 < 0)) {
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FIASHostGroup::Disconnect(&this->DefaultHostGroup);
    }
    else {
      if (4 < (byte)LogIas._0_1_) {
        Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char>_&,int_&,int_&,int_&,int_&>
                  ((FLogCategoryBase *)&LogIas,&::LOG_Static,&local_98,(int *)&local_48,
                   (int *)((longlong)&local_48 + 4),(int *)&uStack_40,
                   (int *)((longlong)&uStack_40 + 4));
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FOnDemandIoBackendStats::OnHttpConnected(&this->Stats);
    }
    QueryPerformanceCounter(local_b8);
    if (3 < (byte)LogIas._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// DoesChunkExist @ 1445c8b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandIoBackend::DoesChunkExist(FOnDemandIoBackend *this,FIoChunkId *param_1)

{
  undefined1 auStackY_78 [32];
  FIoOffsetAndLength local_48;
  ulong64 local_38;
  TIoStatusOr<unsigned___int64> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_38 = 0;
  local_48.OffsetAndLength[0] = '\0';
  local_48.OffsetAndLength[1] = '\0';
  local_48.OffsetAndLength[2] = '\0';
  local_48.OffsetAndLength[3] = '\0';
  local_48.OffsetAndLength[4] = '\0';
  local_48.OffsetAndLength[5] = 0xff;
  local_48.OffsetAndLength[6] = 0xff;
  local_48.OffsetAndLength[7] = 0xff;
  local_48.OffsetAndLength[8] = 0xff;
  local_48.OffsetAndLength[9] = 0xff;
  GetSizeForChunk(this,&local_30,param_1,&local_48,&local_38);
  FIoStatus::operator=(&local_30.StatusValue,Unknown);
  FIoStatus::~FIoStatus(&local_30.StatusValue);
  return local_30.StatusValue.ErrorCode == Ok;
}

// DoesChunkExist @ 1445c8b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandIoBackend::DoesChunkExist
          (FOnDemandIoBackend *this,FIoChunkId *param_1,FIoOffsetAndLength *param_2)

{
  undefined1 auStackY_68 [32];
  ulong64 local_38;
  TIoStatusOr<unsigned___int64> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  local_38 = 0;
  GetSizeForChunk(this,&local_30,param_1,param_2,&local_38);
  FIoStatus::operator=(&local_30.StatusValue,Unknown);
  FIoStatus::~FIoStatus(&local_30.StatusValue);
  return local_30.StatusValue.ErrorCode == Ok;
}

// GetCacheUsage @ 1445d2660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandStreamingCacheUsage * __thiscall
UE::IoStore::FOnDemandIoBackend::GetCacheUsage
          (FOnDemandIoBackend *this,FOnDemandStreamingCacheUsage *__return_storage_ptr__)

{
  __return_storage_ptr__->MaxSize = 0;
  __return_storage_ptr__->TotalSize = 0;
  if ((this->Cache).Ptr != (IIasCache *)0x0) {
    __return_storage_ptr__->TotalSize = (ulong64)GCacheCachedBytes.Value;
    __return_storage_ptr__->MaxSize = GCacheMaxBytes;
  }
  return __return_storage_ptr__;
}

// GetCompletedIoRequests @ 1445d3320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FIoRequestImpl * __thiscall
UE::IoStore::FOnDemandIoBackend::GetCompletedIoRequests(FOnDemandIoBackend *this)

{
  TThreadSafeIntrusiveQueue<FIoRequestImpl> *lpCriticalSection;
  void *pvVar1;
  FIoRequestImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  FIoRequestImpl *pFVar5;
  
  lpCriticalSection = &this->CompletedRequests;
  if (lpCriticalSection == (TThreadSafeIntrusiveQueue<FIoRequestImpl> *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CompletedRequests).ListNum == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (FIoRequestImpl *)0x0;
  }
  pFVar5 = (this->CompletedRequests).Head;
  (this->CompletedRequests).Tail = (FIoRequestImpl *)0x0;
  (this->CompletedRequests).Head = (FIoRequestImpl *)0x0;
  (this->CompletedRequests).ListNum = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = pFVar5;
  while( true ) {
    if (pFVar2 == (FIoRequestImpl *)0x0) {
      return pFVar5;
    }
    if ((pFVar2->BackendData == (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Request->BackendData != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                           ,0x1e2,L""), bVar4)) break;
    pvVar1 = pFVar2->BackendData;
    pFVar2->BackendData = (void *)0x0;
    ::operator_delete(pvVar1,0x14);
    pFVar2 = pFVar2->NextRequest;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FIoRequestImpl *)(*pcVar3)();
  return pFVar5;
}

// GetName @ 1445d66e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

wchar_t * __thiscall UE::IoStore::FOnDemandIoBackend::GetName(FOnDemandIoBackend *this)

{
  return L"OnDemand";
}

// GetSizeForChunk @ 1445d7a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TIoStatusOr<unsigned___int64> * __thiscall
UE::IoStore::FOnDemandIoBackend::GetSizeForChunk
          (FOnDemandIoBackend *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  ulong64 local_res10 [3];
  FIoOffsetAndLength local_18;
  
  local_res10[0] = 0;
  local_18.OffsetAndLength[0] = '\0';
  local_18.OffsetAndLength[1] = '\0';
  local_18.OffsetAndLength[2] = '\0';
  local_18.OffsetAndLength[3] = '\0';
  local_18.OffsetAndLength[4] = '\0';
  local_18.OffsetAndLength[5] = 0xff;
  local_18.OffsetAndLength[6] = 0xff;
  local_18.OffsetAndLength[7] = 0xff;
  local_18.OffsetAndLength[8] = 0xff;
  local_18.OffsetAndLength[9] = 0xff;
  GetSizeForChunk(this,__return_storage_ptr__,param_1,&local_18,local_res10);
  return __return_storage_ptr__;
}

// GetSizeForChunk @ 1445d7aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TIoStatusOr<unsigned___int64> * __thiscall
UE::IoStore::FOnDemandIoBackend::GetSizeForChunk
          (FOnDemandIoBackend *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoOffsetAndLength *param_2,ulong64 *param_3)

{
  atomic<unsigned_char> aVar1;
  uint uVar2;
  IIasCache *pIVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  TIoStatusOr<unsigned___int64> *pTVar7;
  FIoStatus *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_e8 [32];
  FIoOffsetAndLength local_c8;
  FOnDemandChunkInfo local_b8;
  FIoStatus local_a0;
  FIoStatus local_90;
  FIoStatus local_80;
  FChunkRequestParams local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  *param_3 = 0;
  FOnDemandIoStore::GetStreamingChunkInfo(this->IoStore,&local_b8,param_1);
  if (local_b8.SharedContainer.Object == (FOnDemandContainer *)0x0) {
    pFVar8 = &local_a0;
LAB_1445d7cd8:
    pFVar8 = FIoStatus::FIoStatus(pFVar8,UnknownChunkID);
    TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,pFVar8);
  }
  else {
    local_c8.OffsetAndLength[0] = param_2->OffsetAndLength[0];
    local_c8.OffsetAndLength[2] = param_2->OffsetAndLength[2];
    uVar9 = (ulonglong)(local_b8.Entry)->RawSize;
    uVar10 = (ulonglong)
             CONCAT41(CONCAT31(CONCAT21(CONCAT11(param_2->OffsetAndLength[5],
                                                 param_2->OffsetAndLength[6]),
                                        param_2->OffsetAndLength[7]),param_2->OffsetAndLength[8]),
                      param_2->OffsetAndLength[9]);
    local_c8.OffsetAndLength[1] = param_2->OffsetAndLength[1];
    if (uVar9 < uVar10) {
      uVar10 = uVar9;
    }
    local_c8.OffsetAndLength[9] = (uchar)uVar10;
    local_c8.OffsetAndLength[4] = param_2->OffsetAndLength[4];
    local_c8.OffsetAndLength[5] = (uchar)(uVar10 >> 0x20);
    local_c8.OffsetAndLength[6] = (uchar)(uVar10 >> 0x18);
    local_c8.OffsetAndLength[7] = (uchar)(uVar10 >> 0x10);
    local_c8.OffsetAndLength[3] = param_2->OffsetAndLength[3];
    *param_3 = uVar9;
    local_c8.OffsetAndLength[8] = (uchar)(uVar10 >> 8);
    aVar1 = (this->BackendStatus).Flags;
    if (((((byte)aVar1 & 2) == 0) || (GIasHttpEnabled == false)) ||
       ((param_1->Id[0xb] == '\x03' &&
        ((((byte)aVar1 & 4) != 0 || (GIasHttpOptionalBulkDataEnabled == false)))))) {
      aVar1 = (this->BackendStatus).Flags;
      if ((((byte)aVar1 & 1) == 0) || ((((byte)aVar1 & 2) != 0 && (GIasHttpEnabled != false)))) {
        pFVar8 = &local_80;
        goto LAB_1445d7cd8;
      }
      if ((this->Cache).Ptr == (IIasCache *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Cache.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                           ,0x46a,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TIoStatusOr<unsigned___int64> *)(*pcVar4)();
          return pTVar7;
        }
      }
      FChunkRequestParams::Create(&local_70,&local_c8,&local_b8);
      pIVar3 = (this->Cache).Ptr;
      cVar6 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,&local_70);
      if (cVar6 == '\0') {
        pFVar8 = FIoStatus::FIoStatus(&local_90,UnknownChunkID);
        TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,pFVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.ChunkInfo.SharedContainer.SharedReferenceCount.ReferenceController);
        goto LAB_1445d7ced;
      }
      *param_3 = (ulonglong)
                 CONCAT41(CONCAT31(CONCAT21(CONCAT11(local_c8.OffsetAndLength[5],
                                                     local_c8.OffsetAndLength[6]),
                                            local_c8.OffsetAndLength[7]),local_c8.OffsetAndLength[8]
                                  ),local_c8.OffsetAndLength[9]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.ChunkInfo.SharedContainer.SharedReferenceCount.ReferenceController);
    }
    uVar2 = (local_b8.Entry)->RawSize;
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(ulonglong *)(__return_storage_ptr__->Value).Pad = (ulonglong)uVar2;
  }
LAB_1445d7ced:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedContainer.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Initialize @ 1445da8c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackend::Initialize
          (FOnDemandIoBackend *this,TSharedRef<FIoDispatcherBackendContext_const_,1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  FTaskBase *this_00;
  undefined8 *puVar5;
  bool bVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  longlong local_38;
  FIoDispatcherBackendContext *local_30;
  FSharedReferencer<1> local_28 [2];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId760,"IasBackend::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
               ,0x2f8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId760);
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Ias.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Ias.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  if (4 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  local_28[0].ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_30 = param_1->Object;
  if (local_28[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_28[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->BackendContext != (TSharedPtr<FIoDispatcherBackendContext_const_,1> *)&local_30) {
    (this->BackendContext).Object = local_30;
    local_30 = (FIoDispatcherBackendContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackendContext).SharedReferenceCount,local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].ReferenceController);
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::IoStore::FOnDemandIoBackend::BeginCreateDefaultHostGroup'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp(792)"
               ,Default,None,None);
    this_00[1]._padding_ = (longlong)this;
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::IoStore::FOnDemandIoBackend::BeginCreateDefaultHostGroup'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  pFVar2 = &this->HostGroupTask;
  if (pFVar2 == (FTaskHandle *)&local_38) {
    if (this_00 == (FTaskBase *)0x0) goto LAB_1445daa7f;
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_1445daa7f;
    puVar5 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar4 = (pFVar2->Pimpl).Reference;
    (pFVar2->Pimpl).Reference = this_00;
    if (pFVar4 == (FTaskBase *)0x0) goto LAB_1445daa7f;
    LOCK();
    paVar1 = &pFVar4->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_1445daa7f;
    puVar5 = (undefined8 *)pFVar4->_padding_;
    this_00 = pFVar4;
  }
  (*(code *)*puVar5)(this_00,1);
LAB_1445daa7f:
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// IssueHttpRequest @ 1445de2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackend::IssueHttpRequest(FOnDemandIoBackend *this,FChunkRequest *param_1)

{
  int iVar1;
  FOnDemandHttpThread *this_00;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  undefined ***pppuVar5;
  undefined1 auStackY_98 [32];
  FOnDemandChunkInfo local_68;
  code *local_48 [2];
  undefined **local_38;
  FOnDemandIoBackend *local_30;
  FChunkRequest *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  this_00 = this->HttpClient;
  iVar1 = param_1->Priority;
  local_38 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = (undefined ***)0x0;
  local_48[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::__l2::<lambda_1>,void,unsigned_int,TStringView<wchar_t>,FIoBuffer_&&>
                ::Call;
  local_68.SharedContainer.Object = (param_1->Params).ChunkInfo.SharedContainer.Object;
  local_68.SharedContainer.SharedReferenceCount.ReferenceController =
       (param_1->Params).ChunkInfo.SharedContainer.SharedReferenceCount.ReferenceController;
  if (local_68.SharedContainer.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedContainer.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedContainer.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Entry = (param_1->Params).ChunkInfo.Entry;
  local_30 = this;
  local_28 = param_1;
  pvVar4 = FOnDemandHttpThread::IssueRequest
                     (this_00,&local_68,&(param_1->Params).ChunkRange,iVar1,
                      (TUniqueFunction<void___cdecl(unsigned_int,TStringView<wchar_t>,FIoBuffer_&&)>
                       *)local_48,Streaming);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedContainer.SharedReferenceCount.ReferenceController);
  param_1->HttpRequest = pvVar4;
  if (local_48[0] != (code *)0x0) {
    pppuVar5 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar5 = local_20;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (param_1->HttpRequest == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkRequest->HttpRequest != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                       ,0x337,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OpenMapped @ 1445e8490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TIoStatusOr<FIoMappedRegion> * __thiscall
UE::IoStore::FOnDemandIoBackend::OpenMapped
          (FOnDemandIoBackend *this,TIoStatusOr<FIoMappedRegion> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoReadOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<FIoMappedRegion> *pTVar3;
  FIoStatus local_18;
  
  local_18.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_18.ErrorCode = FIoStatus::Unknown.ErrorCode;
  local_18.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
  if (local_18.ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<FIoMappedRegion> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&local_18);
  FIoStatus::~FIoStatus(&local_18);
  return __return_storage_ptr__;
}

// ReportAnalytics @ 1445f78f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackend::ReportAnalytics
          (FOnDemandIoBackend *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  if (((GIasReportAnalyticsEnabled) &&
      (FOnDemandIoBackendStats::ReportGeneralAnalytics(&this->Stats,param_1),
      ((byte)(this->BackendStatus).Flags & 2) != 0)) && (GIasHttpEnabled != false)) {
    FOnDemandIoBackendStats::ReportEndPointAnalytics(&this->Stats,param_1);
  }
  return;
}

// Resolve @ 1445fa0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandIoBackend::Resolve(FOnDemandIoBackend *this,FIoRequestImpl *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_char> aVar3;
  ETaskPriority EVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  IIasCache *pIVar7;
  code *pcVar8;
  FOnDemandContainer *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  ushort uVar13;
  int iVar14;
  FLanePostcode FVar15;
  FTaskBase *pFVar16;
  FLaneTrace *pFVar17;
  longlong lVar18;
  FTaskBase *this_00;
  FLaneTrace *pFVar19;
  longlong lVar20;
  undefined1 auStackY_108 [32];
  bool local_d8;
  bool local_d7 [7];
  FIoOffsetAndLength local_d0;
  FOnDemandChunkInfo local_c0;
  FTaskBase *local_a8;
  TStringView<char> local_a0;
  TStringView<char> local_90;
  FChunkRequestParams local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FOnDemandIoStore::GetStreamingChunkInfo(this->IoStore,&local_c0,&param_1->ChunkId);
  if (local_c0.SharedContainer.Object == (FOnDemandContainer *)0x0) {
    bVar10 = false;
    goto LAB_1445fa77b;
  }
  if ((param_1 == (FIoRequestImpl *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Request",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                          ,0xf2,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if ((param_1->NextRequest != (FIoRequestImpl *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Request->NextRequest == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                          ,0xf3,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  uVar5 = (param_1->Options).RequestedOffset;
  uVar6 = (param_1->Options).RequestedSize;
  local_d0.OffsetAndLength[0] = (uchar)(uVar5 >> 0x20);
  local_d0.OffsetAndLength[1] = (uchar)(uVar5 >> 0x18);
  local_d0.OffsetAndLength[2] = (uchar)(uVar5 >> 0x10);
  local_d0.OffsetAndLength[3] = (uchar)(uVar5 >> 8);
  local_d0.OffsetAndLength[5] = (uchar)(uVar6 >> 0x20);
  local_d0.OffsetAndLength[6] = (uchar)(uVar6 >> 0x18);
  local_d0.OffsetAndLength[7] = (uchar)(uVar6 >> 0x10);
  local_d0.OffsetAndLength[4] = (uchar)uVar5;
  local_d0.OffsetAndLength[9] = (uchar)uVar6;
  local_d0.OffsetAndLength[8] = (uchar)(uVar6 >> 8);
  FChunkRequestParams::Create(&local_80,&local_d0,&local_c0);
  aVar3 = (this->BackendStatus).Flags;
  if (((((byte)aVar3 & 2) == 0) || (GIasHttpEnabled == false)) ||
     (((param_1->ChunkId).Id[0xb] == '\x03' &&
      ((((byte)aVar3 & 4) != 0 || (GIasHttpOptionalBulkDataEnabled == false)))))) {
LAB_1445fa2b6:
    aVar3 = (this->BackendStatus).Flags;
    if ((((byte)aVar3 & 1) != 0) &&
       (((((byte)aVar3 & 2) == 0 || (GIasHttpEnabled == false)) &&
        (pIVar7 = (this->Cache).Ptr,
        cVar12 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,&local_80), cVar12 != '\0'))))
    goto LAB_1445fa2ed;
    bVar10 = false;
  }
  else {
    if ((local_c0.SharedContainer.Object == (FOnDemandContainer *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    pFVar9 = local_c0.SharedContainer.Object;
    if ((((local_c0.SharedContainer.Object)->HostGroup).Impl.Object == (FImpl *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    iVar14 = FOnDemandHostGroup::PrimaryHostIndex(&((pFVar9->HostGroup).Impl.Object)->HostGroup);
    if (iVar14 == -1) goto LAB_1445fa2b6;
LAB_1445fa2ed:
    FIoStoreTrace::RequestStarted(param_1,(IIoDispatcherBackend *)this);
    GIoRequestCount.Value = GIoRequestCount.Value + 1;
    if (-1 < CountersChannel->Enabled) {
      if (GIoRequestCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar13 = FCountersTrace::OutputInitCounter
                           (GIoRequestCount.CounterName,TraceCounterType_Int,
                            GIoRequestCount.CounterFlags & 0xf);
        LOCK();
        if (GIoRequestCount.CounterId == (atomic<unsigned_int>)0x0) {
          GIoRequestCount.CounterId._2_2_ = 0;
          GIoRequestCount.CounterId._0_2_ = uVar13;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(GIoRequestCount.CounterId._0_2_,GIoRequestCount.Value);
    }
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameIoRequestCount.Name,_GCsvStat_FrameIoRequestCount.CategoryIndex,
               (int)GIoRequestCount.Value,Set);
    local_d8 = false;
    local_d7[0] = false;
    FVar15.Value = (ulong64)FChunkRequests::Create
                                      (&this->ChunkRequests,param_1,&local_80,&local_d8,local_d7);
    if (local_d8 == false) {
      pIVar7 = (this->Cache).Ptr;
      if (pIVar7 == (IIasCache *)0x0) {
LAB_1445fa6a1:
        if ((local_c0.SharedContainer.Object == (FOnDemandContainer *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        FIASHostGroup::operator=
                  ((FIASHostGroup *)(FVar15.Value + 0x58),
                   &(local_c0.SharedContainer.Object)->HostGroup);
        pFVar19 = LaneEstate_Lookup(GRequestLaneEstate,FVar15);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          local_90.Size = 0xb;
          local_90.DataPtr = "Iax/HttpGet";
          ScopeId = LaneTrace_NewScope(&local_90);
          _Init_thread_footer(&::_TSS1);
        }
        LaneTrace_Enter(pFVar19,ScopeId);
        pFVar17 = *(FLaneTrace **)(FVar15.Value + 0x88);
        *(FLaneTrace **)(FVar15.Value + 0x88) = pFVar19;
        if (pFVar17 != (FLaneTrace *)0x0) {
          LaneTrace_Leave(pFVar17);
        }
        IssueHttpRequest(this,(FChunkRequest *)FVar15.Value);
        bVar10 = true;
      }
      else {
        iVar14 = (**(code **)((longlong)*pIVar7 + 0x20))
                           (pIVar7,FVar15.Value + 8,FVar15.Value + 0x68);
        if (iVar14 == 0) {
          if ((**(longlong **)(FVar15.Value + 0x68) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Buffer.GetData() != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                                  ,0x3f9,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          *(undefined1 *)(FVar15.Value + 0x7e) = 1;
          lVar20 = 4;
          if ((longlong)GCompleteMaterializeTaskPriority < 4) {
            lVar20 = (longlong)GCompleteMaterializeTaskPriority;
          }
          lVar18 = 0;
          if (0 < lVar20) {
            lVar18 = lVar20;
          }
          EVar4 = GCompleteMaterializeTaskPriorities[lVar18];
          pFVar16 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                    ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                *)&Tasks::Private::SmallTaskAllocator);
          if (pFVar16 == (FTaskBase *)0x0) {
            Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
            bVar10 = true;
          }
          else {
            Tasks::Private::FTaskBase::FTaskBase(pFVar16,2,true);
            pFVar16->_padding_ =
                 (longlong)
                 &Tasks::Private::
                  TExecutableTaskBase<`UE::IoStore::FOnDemandIoBackend::Resolve'::`23'::<lambda_1>,void,void>
                  ::_vftable_;
            Tasks::Private::FTaskBase::Init
                      (pFVar16,
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp(1020)"
                       ,EVar4,None,None);
            pFVar16[1]._padding_ = (longlong)this;
            pFVar16[1]._padding_ = FVar15.Value;
            pFVar16->_padding_ =
                 (longlong)
                 &Tasks::Private::
                  TExecutableTask<`UE::IoStore::FOnDemandIoBackend::Resolve'::`23'::<lambda_1>_>::
                  _vftable_;
            Tasks::Private::FTaskBase::TryLaunch(pFVar16,0x100);
            LOCK();
            paVar1 = &pFVar16->RefCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 != (atomic<unsigned_int>)0x1) goto LAB_1445fa3b6;
            (**(code **)pFVar16->_padding_)(pFVar16,1);
            bVar10 = true;
          }
        }
        else {
          if (iVar14 != 5) {
            if ((iVar14 != 8) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("GetStatus == EIoErrorCode::NotFound",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                                    ,0x416,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            goto LAB_1445fa6a1;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_a0.Size = 0xd;
            local_a0.DataPtr = "Iax/CacheRead";
            ScopeId = LaneTrace_NewScope(&local_a0);
            _Init_thread_footer(&::_TSS0);
          }
          pFVar17 = LaneEstate_Lookup(GRequestLaneEstate,FVar15);
          LaneTrace_Enter(pFVar17,ScopeId);
          pFVar19 = *(FLaneTrace **)(FVar15.Value + 0x88);
          *(FLaneTrace **)(FVar15.Value + 0x88) = pFVar17;
          if (pFVar19 != (FLaneTrace *)0x0) {
            LaneTrace_Leave(pFVar19);
          }
          LOCK();
          this->InflightCacheRequestCount =
               (atomic<unsigned_int>)((int)this->InflightCacheRequestCount + 1);
          UNLOCK();
          pFVar16 = (FTaskBase *)Tasks::Private::FTaskEventBase::Create(L"IasCacheMaterializeDone");
          lVar20 = 4;
          if ((longlong)GCompleteMaterializeTaskPriority < 4) {
            lVar20 = (longlong)GCompleteMaterializeTaskPriority;
          }
          lVar18 = 0;
          if (0 < lVar20) {
            lVar18 = lVar20;
          }
          EVar4 = GCompleteMaterializeTaskPriorities[lVar18];
          this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                    ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                *)&Tasks::Private::SmallTaskAllocator);
          if (this_00 == (FTaskBase *)0x0) {
            this_00 = (FTaskBase *)0x0;
          }
          else {
            Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
            this_00->_padding_ =
                 (longlong)
                 &Tasks::Private::
                  TExecutableTaskBase<`UE::IoStore::FOnDemandIoBackend::Resolve'::`33'::<lambda_2>,void,void>
                  ::_vftable_;
            Tasks::Private::FTaskBase::Init
                      (this_00,
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp(1036)"
                       ,EVar4,None,None);
            this_00[1]._padding_ = (longlong)this;
            this_00[1]._padding_ = FVar15.Value;
            this_00->_padding_ =
                 (longlong)
                 &Tasks::Private::
                  TExecutableTask<`UE::IoStore::FOnDemandIoBackend::Resolve'::`33'::<lambda_2>_>::
                  _vftable_;
          }
          if (pFVar16 != (FTaskBase *)0x0) {
            Tasks::Private::FTaskBase::AddPrerequisites(this_00,pFVar16);
          }
          Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
          if (this_00 != (FTaskBase *)0x0) {
            LOCK();
            paVar1 = &this_00->RefCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<unsigned_int>)0x1) {
              (**(code **)this_00->_padding_)(this_00,1);
            }
          }
          pIVar7 = (this->Cache).Ptr;
          local_a8 = pFVar16;
          (**(code **)((longlong)*pIVar7 + 0x28))
                    (pIVar7,FVar15.Value + 8,FVar15.Value + 0x68,FVar15.Value + 0x80);
          bVar10 = true;
        }
      }
    }
    else {
      if (local_d7[0] != false) {
        FOnDemandHttpThread::ReprioritizeRequest
                  (this->HttpClient,*(void **)(FVar15.Value + 0x50),*(int *)(FVar15.Value + 0x78));
      }
LAB_1445fa3b6:
      bVar10 = true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ChunkInfo.SharedContainer.SharedReferenceCount.ReferenceController);
LAB_1445fa77b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedContainer.SharedReferenceCount.ReferenceController);
  return bVar10;
}

// ResolveDefaultHostGroup @ 1445fb450

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall UE::IoStore::FOnDemandIoBackend::ResolveDefaultHostGroup(FOnDemandIoBackend *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FIoStatus local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FString_const_,int> local_38;
  FString local_28;
  
  pTVar2 = &this->DefaultUrls;
  if (1 < (this->DistributionUrl).EndpointUrl.Data.ArrayNum) {
    DestructItems<FString,int>
              ((FString *)(pTVar2->AllocatorInstance).Data,(this->DefaultUrls).ArrayNum);
    piVar1 = &(this->DefaultUrls).ArrayMax;
    (this->DefaultUrls).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    bVar5 = ResolveDistributedEndpoint(this,&this->DistributionUrl,pTVar2);
    if (!bVar5) {
      if ((byte)LogIas._0_1_ < 2) {
        return false;
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      return false;
    }
  }
  iVar3 = (this->DefaultUrls).ArrayNum;
  if (iVar3 == 0) {
    if (1 < (byte)LogIas._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
    return false;
  }
  this_00 = (pTVar2->AllocatorInstance).Data;
  pFVar7 = this_00 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->DefaultUrls).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (this_00 == pFVar7) break;
    ::FString::ReplaceInline((FString *)this_00,L"https",L"http",IgnoreCase);
    ::FString::ToLowerInline((FString *)this_00);
    this_00 = this_00 + 0x10;
  }
  if (0 < GIasHttpPrimaryEndpoint) {
    AlgoImpl::RotateInternal<FString>
              ((FString *)(this->DefaultUrls).AllocatorInstance.Data,(this->DefaultUrls).ArrayNum,
               GIasHttpPrimaryEndpoint);
  }
  local_48 = (this->DefaultUrls).AllocatorInstance.Data;
  iVar3 = (this->DefaultUrls).ArrayNum;
  if ((iVar3 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar3;
  local_38.DataPtr = (FString *)local_48;
  iStack_40 = iVar3;
  FIASHostGroup::Resolve(&this->DefaultHostGroup,&local_58,&local_38);
  DestructItems<FString,int>
            ((FString *)(this->DefaultUrls).AllocatorInstance.Data,(this->DefaultUrls).ArrayNum);
  piVar1 = &(this->DefaultUrls).ArrayMax;
  (this->DefaultUrls).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->DefaultUrls).AllocatorInstance,0,piVar1);
  }
  if (local_58.ErrorCode == Ok) {
    bVar5 = true;
  }
  else {
    if (1 < (byte)LogIas._0_1_) {
      FIoStatus::ToString(&local_58,&local_28);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  FIoStatus::~FIoStatus(&local_58);
  return bVar5;
}

// ResolveDistributedEndpoint @ 1445fb6d0

/* WARNING: Removing unreachable block (ram,0x0001445fb935) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandIoBackend::ResolveDistributedEndpoint
          (FOnDemandIoBackend *this,FDistributedEndpointUrl *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  atomic<bool> aVar1;
  FEvent *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EResult EVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  bool bVar10;
  FDistributionEndpoints local_res8 [8];
  FString local_38;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1244,"IasBackend::ResolveDistributedEndpoint",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
               ,0x4dc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1244);
  }
  if (((param_1->EndpointUrl).Data.ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DistributedEndpointUrl.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                         ,0x4de,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((GConfig->bIsReadyForUse == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->IsReadyForUse()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                         ,0x4e4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  aVar1 = this->bStopRequested;
  iVar9 = 0;
  do {
    if (aVar1 != (atomic<bool>)0x0) {
      bVar4 = false;
LAB_1445fb861:
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return bVar4;
    }
    EVar6 = FDistributionEndpoints::ResolveEndpoints(local_res8,&param_1->EndpointUrl,param_2);
    if (EVar6 == Success) {
      GHttpDistributedEndpointResolved = true;
      bVar4 = true;
      goto LAB_1445fb861;
    }
    if ((1 < (param_1->FallbackUrl).Data.ArrayNum) &&
       (iVar9 = iVar9 + 1, iVar9 == GDistributedEndpointAttemptCount)) {
      ::FString::Replace(&param_1->FallbackUrl,&local_38,L"https",L"http",IgnoreCase);
      if (2 < (byte)LogIas._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == param_2->ArrayMax) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar9 + 1;
      pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar8 = 0;
      *(FScriptContainerElement **)pFVar8 = local_38.Data.AllocatorInstance.Data;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar8 + 8) = local_38.Data.ArrayNum;
      *(int *)(pFVar8 + 0xc) = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      bVar4 = true;
      goto LAB_1445fb861;
    }
    if (this->bStopRequested == (atomic<bool>)0x0) {
      if (1 < (byte)LogIas._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
      if (GDistributedEndpointRetryWaitTime < 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = GDistributedEndpointRetryWaitTime * 1000;
      }
      pFVar2 = (this->DistributedEndpointEvent).Event;
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,iVar7,0);
      if (1 < (byte)LogIas._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
    }
    aVar1 = this->bStopRequested;
  } while( true );
}

// ResolveIoRequests @ 1445fc660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackend::ResolveIoRequests
          (FOnDemandIoBackend *this,TIntrusiveList<UE::Private::FIoRequestListTraits> *param_1,
          TIntrusiveList<UE::Private::FIoRequestListTraits> *param_2)

{
  FIoRequestImpl *pFVar1;
  FIoRequestImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  do {
    while( true ) {
      do {
        pFVar1 = param_1->Head;
        if (pFVar1 == (FIoRequestImpl *)0x0) {
          return;
        }
        pFVar2 = pFVar1->NextRequest;
        param_1->Head = pFVar2;
        if (pFVar2 == (FIoRequestImpl *)0x0) {
          param_1->Tail = (FIoRequestImpl *)0x0;
        }
        pFVar1->NextRequest = (FIoRequestImpl *)0x0;
        bVar4 = Resolve(this,pFVar1);
      } while (bVar4);
      if (pFVar1->NextRequest != (FIoRequestImpl *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x72,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (param_2->Tail != (FIoRequestImpl *)0x0) break;
      if (param_2->Head != (FIoRequestImpl *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Head == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x7c,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      param_2->Tail = pFVar1;
      param_2->Head = pFVar1;
    }
    if (param_2->Head == (FIoRequestImpl *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Head != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,0x76,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->Tail->NextRequest = pFVar1;
    param_2->Tail = pFVar1;
  } while( true );
}

// SetBulkOptionalEnabled @ 1445ff190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackend::SetBulkOptionalEnabled(FOnDemandIoBackend *this,bool param_1)

{
  FBackendStatus::AddOrRemoveFlags
            (&this->BackendStatus,HttpBulkOptionalDisabled,!param_1,
             L"HTTP streaming of optional bulk data disabled");
  return;
}

// Shutdown @ 144600f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandIoBackend::Shutdown(FOnDemandIoBackend *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FTaskBase *this_00;
  double dVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  LARGE_INTEGER local_res8;
  undefined8 local_48;
  FSharedReferencer<1> aFStack_40 [7];
  
  if (this->bStopRequested == (atomic<bool>)0x0) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId774,"IasBackend::Shutdown",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                 ,0x306);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId774);
    }
    if (4 < (byte)LogIas._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
    this->bStopRequested = (atomic<bool>)0x1;
    (**(code **)(((this->DistributedEndpointEvent).Event)->_padding_ + 0x10))();
    this_00 = (this->HostGroupTask).Pimpl.Reference;
    if (this_00 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::Wait(this_00);
    }
    QueryPerformanceCounter(&local_res8);
    fVar4 = __real_3dcccccd;
    fVar3 = __real_40a00000;
    lpCriticalSection = &(this->ChunkRequests).Mutex;
    dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    while( true ) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar1 = (this->ChunkRequests).ChunkRequestCount;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((iVar1 < 1) ||
         (QueryPerformanceCounter(&local_res8),
         fVar3 <= (float)((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle -
                         dVar2))) break;
      FWindowsPlatformProcess::SleepNoStats(fVar4);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->ChunkRequests).ChunkRequestCount;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((2 < (byte)LogIas._0_1_) && (0 < iVar1)) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
    local_48 = 0;
    aFStack_40[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->BackendContext != (TSharedPtr<FIoDispatcherBackendContext_const_,1> *)&local_48) {
      (this->BackendContext).Object = (FIoDispatcherBackendContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BackendContext).SharedReferenceCount,aFStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_40[0].ReferenceController);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// StartAnalyticsRecording @ 1446011b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TUniquePtr<UE::IoStore::IAnalyticsRecording,TDefaultDelete<UE::IoStore::IAnalyticsRecording>_>
__thiscall UE::IoStore::FOnDemandIoBackend::StartAnalyticsRecording(FOnDemandIoBackend *this)

{
  IAnalyticsRecording *in_RDX;
  
  *in_RDX = (IAnalyticsRecording)0x0;
  return (TUniquePtr<UE::IoStore::IAnalyticsRecording,TDefaultDelete<UE::IoStore::IAnalyticsRecording>_>
          )in_RDX;
}

// UpdatePriorityForIoRequest @ 14460c8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoBackend::UpdatePriorityForIoRequest
          (FOnDemandIoBackend *this,FIoRequestImpl *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  FIoHash *pFVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1082,"IasBackend::UpdatePriorityForIoRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
               ,0x43a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1082);
  }
  lpCriticalSection = &(this->ChunkRequests).Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = param_1->BackendData;
  if (pFVar2 == (FIoHash *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    iVar3 = TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FIoHash>
                      ((TSet<TTuple<FIoHash,UE::IoStore::FChunkRequest_*>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FChunkRequest_*,0>,FDefaultSetAllocator>
                        *)&(this->ChunkRequests).Inflight,*(uint *)pFVar2->Hash,pFVar2);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->ChunkRequests).Inflight + (longlong)iVar3 * 0x28;
      plVar4 = (longlong *)(lVar1 + 0x18);
      if (lVar1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      if (plVar4 != (longlong *)0x0) {
        lVar1 = *plVar4;
        if (*(int *)(lVar1 + 0x78) < param_1->Priority) {
          *(int *)(lVar1 + 0x78) = param_1->Priority;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          FOnDemandHttpThread::ReprioritizeRequest
                    (this->HttpClient,*(void **)(lVar1 + 0x50),*(int *)(lVar1 + 0x78));
          goto LAB_14460c99e;
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
LAB_14460c99e:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// WaitForCompleteRequestTasks @ 14460ffc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

int __thiscall
UE::IoStore::FOnDemandIoBackend::WaitForCompleteRequestTasks
          (FOnDemandIoBackend *this,float param_1,float param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  lpCriticalSection = &(this->ChunkRequests).Mutex;
  dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    while( true ) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar1 = (this->ChunkRequests).ChunkRequestCount;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((iVar1 < 1) ||
         (QueryPerformanceCounter(&local_res8),
         param_1 <=
         (float)((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2)))
      break;
      FWindowsPlatformProcess::SleepNoStats(param_2);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->ChunkRequests).ChunkRequestCount;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

