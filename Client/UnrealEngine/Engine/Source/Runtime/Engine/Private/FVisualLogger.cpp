// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 70

// FVisualLogger @ 1489b5b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVisualLogger * __thiscall FVisualLogger::FVisualLogger(FVisualLogger *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  wchar_t *pwVar7;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar8;
  undefined ***pppuVar9;
  bool bVar10;
  undefined1 auStackY_98 [32];
  TWeakPtr<FTSTicker::FElement,1> local_68;
  code *local_58 [2];
  undefined **local_48;
  FVisualLogger *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  FOutputDevice::FOutputDevice((FOutputDevice *)this);
  this->_padding_ = (longlong)&___7FVisualLogger__6B_;
  pTVar1 = &this->TickerHandle;
  pTVar1->Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OutputDevices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDevices).ArrayNum = 0;
  (this->OutputDevices).ArrayMax = 0;
  (this->ClassAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassAllowList).ArrayNum = 0;
  (this->ClassAllowList).ArrayMax = 0;
  *(undefined8 *)&(this->ObjectAllowList).Elements = 0;
  *(undefined8 *)&(this->ObjectAllowList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ObjectAllowList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ObjectAllowList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ObjectAllowList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectAllowList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectAllowList).Elements.field_0x34 = 0;
  (this->ObjectAllowList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ObjectAllowList).HashSize = 0;
  (this->CategoryAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryAllowList).ArrayNum = 0;
  (this->CategoryAllowList).ArrayMax = 0;
  *(undefined8 *)&this->AllExtensions = 0;
  *(undefined8 *)&(this->AllExtensions).field_0x8 = 0;
  *(undefined8 *)&(this->AllExtensions).field_0x20 = 0;
  *(undefined4 *)&(this->AllExtensions).field_0x28 = 0;
  *(undefined4 *)&(this->AllExtensions).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllExtensions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllExtensions).field_0x34 = 0;
  *(undefined8 *)&(this->AllExtensions).field_0x40 = 0;
  *(undefined4 *)&(this->AllExtensions).field_0x48 = 0;
  *(undefined8 *)&this->LastUniqueIds = 0;
  *(undefined8 *)&(this->LastUniqueIds).field_0x8 = 0;
  *(undefined8 *)&(this->LastUniqueIds).field_0x20 = 0;
  *(undefined4 *)&(this->LastUniqueIds).field_0x28 = 0;
  *(undefined4 *)&(this->LastUniqueIds).field_0x2c = 0x80;
  *(undefined4 *)&(this->LastUniqueIds).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LastUniqueIds).field_0x34 = 0;
  *(undefined8 *)&(this->LastUniqueIds).field_0x40 = 0;
  *(undefined4 *)&(this->LastUniqueIds).field_0x48 = 0;
  (this->CurrentEntryPerObject)._padding_ = 0;
  (this->CurrentEntryPerObject)._padding_ = 0;
  (this->CurrentEntryPerObject)._padding_ = 0;
  *(undefined4 *)&(this->CurrentEntryPerObject)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->CurrentEntryPerObject)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->CurrentEntryPerObject)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->CurrentEntryPerObject)._padding_ + 4) = 0;
  (this->CurrentEntryPerObject)._padding_ = 0;
  *(undefined4 *)&(this->CurrentEntryPerObject)._padding_ = 0;
  (this->CurrentEntryPerObject).EntriesAccessDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0
  ;
  (this->ThreadCurrentEntryMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadCurrentEntryMaps).ArrayNum = 0;
  (this->ThreadCurrentEntryMaps).ArrayMax = 0;
  (this->ThreadLocalMapListAccessDetector).AtomicValue = (atomic<unsigned_int>)0x0;
  (this->EntryRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->ObjectToNamesMap = 0;
  *(undefined8 *)&(this->ObjectToNamesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToNamesMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToNamesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToNamesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToNamesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToNamesMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToNamesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToNamesMap).field_0x48 = 0;
  *(undefined8 *)&this->ObjectToWorldMap = 0;
  *(undefined8 *)&(this->ObjectToWorldMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToWorldMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToWorldMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToWorldMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToWorldMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToWorldMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToWorldMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToWorldMap).field_0x48 = 0;
  *(undefined8 *)&this->ChildToOwnerMap = 0;
  *(undefined8 *)&(this->ChildToOwnerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChildToOwnerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChildToOwnerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChildToOwnerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildToOwnerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildToOwnerMap).field_0x34 = 0;
  *(undefined8 *)&(this->ChildToOwnerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChildToOwnerMap).field_0x48 = 0;
  (this->RedirectRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->LogFileNameGetter = 0;
  *(undefined8 *)&(this->LogFileNameGetter).field_0x8 = 0;
  *(undefined4 *)&(this->LogFileNameGetter).field_0x10 = 0;
  *(undefined8 *)&this->GetTimeStampFunc = 0;
  *(undefined8 *)&(this->GetTimeStampFunc).field_0x28 = 0;
  puVar4 = &this->field_0x2b0;
  this->bBlockedAllCategories = false;
  this->bIsFlushRequired = false;
  this->bForceUniqueLogNames = true;
  this->bIsRecordingToTrace = false;
  this->bIsRecordingToFile = false;
  local_68.Object = (FElement *)FVisualLoggerBinaryFileDevice::Get();
  TArray<FVisualLogDevice_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVisualLogDevice_*_const_&>
            (&this->OutputDevices,(FVisualLogDevice **)&local_68);
  if (GEngine == (UEngine *)0x0) {
    bVar10 = false;
  }
  else {
    bVar10 = GEngine->bEnableVisualLogRecordingOnStart != 0;
  }
  SetIsRecording(this,bVar10);
  this->bIsRecordingOnServer = false;
  pwVar7 = FCommandLine::Get();
  bVar10 = FParse::Param(pwVar7,L"EnableAILogging");
  if (bVar10) {
    if (this->bIsRecordingToFile) {
      SetIsRecordingToFile(this,false);
    }
    bIsRecording = 1;
    SetIsRecordingToFile(this,true);
  }
  this_00 = FTSTicker::GetCoreTicker();
  local_30 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FVisualLogger::FVisualLogger'::`2'::<lambda_1>,1,0>::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FVisualLogger::FVisualLogger'::__l2::<lambda_1>,bool,float>::
                Call;
  local_40 = this;
  pTVar8 = FTSTicker::AddTicker
                     (this_00,&local_68,L"VisualLogger",0.0,
                      (TUniqueFunction<bool___cdecl(float)> *)local_58);
  if (pTVar1 != pTVar8) {
    pTVar1->Object = pTVar8->Object;
    pTVar8->Object = (FElement *)0x0;
    pTVar6 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
    (this->TickerHandle).WeakReferenceCount.ReferenceController =
         (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar6->WeakReferenceCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar5 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar9 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar9 = local_30;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  return this;
}

// ~FVisualLogger @ 1489ba2b0

void __thiscall FVisualLogger::~FVisualLogger(FVisualLogger *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FSetElementId> FVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  BOOLEAN BVar9;
  bool bVar10;
  longlong *plVar11;
  
  this->_padding_ = (longlong)&___7FVisualLogger__6B_;
  if (*(longlong *)&this->GetTimeStampFunc != 0) {
    plVar3 = *(longlong **)&(this->GetTimeStampFunc).field_0x28;
    plVar11 = (longlong *)&(this->GetTimeStampFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar11 = plVar3;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LogFileNameGetter);
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RedirectRWLock);
  if (BVar9 == '\0') {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RedirectRWLock);
  }
  *(undefined4 *)&(this->ChildToOwnerMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ChildToOwnerMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildToOwnerMap);
  *(undefined4 *)&(this->ObjectToWorldMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ObjectToWorldMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectToWorldMap);
  *(undefined4 *)&(this->ObjectToNamesMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ObjectToNamesMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,FVisualLogger::FObjectNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FVisualLogger::FObjectNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FVisualLogger::FObjectNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectToNamesMap);
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->EntryRWLock);
  if (BVar9 == '\0') {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->EntryRWLock);
  }
  if ((this->ThreadLocalMapListAccessDetector).AtomicValue != (atomic<unsigned_int>)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("AtomicValue.load(std::memory_order_relaxed) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                        ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar5 = (this->ThreadCurrentEntryMaps).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if ((this->CurrentEntryPerObject).EntriesAccessDetector !=
      (FRWFallbackSafeAccessDetectorDefinition)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("AtomicValue.load(std::memory_order_relaxed) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                        ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  *(undefined4 *)&(this->CurrentEntryPerObject)._padding_ = 0;
  pvVar4 = (void *)(this->CurrentEntryPerObject)._padding_;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,FVisualLogEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FVisualLogEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FVisualLogEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentEntryPerObject);
  *(undefined4 *)&(this->LastUniqueIds).field_0x48 = 0;
  pvVar4 = *(void **)&(this->LastUniqueIds).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<double,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<double,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<double,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LastUniqueIds);
  *(undefined4 *)&(this->AllExtensions).field_0x48 = 0;
  pvVar4 = *(void **)&(this->AllExtensions).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVisualLogExtensionInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVisualLogExtensionInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVisualLogExtensionInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllExtensions);
  pFVar5 = (this->CategoryAllowList).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  (this->ObjectAllowList).HashSize = 0;
  FVar6 = (this->ObjectAllowList).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ObjectAllowList).Elements);
  pFVar5 = (this->ClassAllowList).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->OutputDevices).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar7 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  return;
}

// operator() @ 1489be710

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FVisualLogger::FVisualLogger'::__l2::<lambda_1>::operator()(void *this,float param_1)

{
  int *piVar1;
  FVisualLogger *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:___cdecl__private:___cdecl_FVisualLogger::FVisualLogger(void)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FVisualLogger_Tick>
  FVar7;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_28;
  
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FVisualLogger_Tick ==
          (FThreadSafeStaticStat<_public:___cdecl__private:___cdecl_FVisualLogger::FVisualLogger(void)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FVisualLogger_Tick>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_FVisualLogger_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FVisualLogger_Tick,*pFVar6,
                   L"STAT_FVisualLogger_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_FVisualLogger_Tick;
  if (StatPtr_STAT_FVisualLogger_Tick ==
      (FThreadSafeStaticStat<_public:___cdecl__private:___cdecl_FVisualLogger::FVisualLogger(void)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FVisualLogger_Tick>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_FVisualLogger_Tick");
    FVar7 = (FThreadSafeStaticStat<_public:___cdecl__private:___cdecl_FVisualLogger::FVisualLogger(void)_::_2_::<lambda_1>::operator()(float)const_::_2_::FStat_STAT_FVisualLogger_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FVisualLogger_Tick,*pFVar6,
                         L"STAT_FVisualLogger_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                   ,0x342);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_1489be895;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_1489be895:
  this_00 = *(FVisualLogger **)this;
  bVar5 = this_00->field_0x2b0;
  if (this_00->bIsFlushRequired) {
    (**(code **)(this_00->_padding_ + 0x20))(this_00);
    this_00->bIsFlushRequired = false;
    bVar5 = this_00->field_0x2b0;
  }
  if ((bVar5 & 0x40) != 0) {
    FVisualLogger::CleanupRedirects(this_00);
    this_00->bContainsInvalidRedirects = false;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_28);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return true;
}

// operator() @ 1489bea60

/* WARNING: Removing unreachable block (ram,0x0001489bec0a) */

void __thiscall
`FVisualLogger::CategorizedLogfImpl'::__l2::<lambda_1>::operator()
          (void *this,FVisualLogEntry *param_1,wchar_t *param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined8 local_48;
  FScriptContainerElement local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  FColor_u_0 local_28;
  FScriptContainerElement local_24;
  
  puVar3 = *(undefined8 **)this;
  FVar2 = **(FScriptContainerElement **)((longlong)this + 8);
  ::FString::FString(&local_68,param_2);
  _Src.Data = local_68.Data.AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  iVar6 = local_68.Data.ArrayNum;
  local_50 = CONCAT44(local_50._4_4_,iVar6);
  if (iVar6 == 0) {
    local_50 = local_68.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,&local_58,iVar6,(int *)((longlong)&local_50 + 4));
    memcpy(local_58.Data,_Src.Data,(longlong)iVar6 * 2);
  }
  local_48 = *puVar3;
  pFVar7 = (param_1->LogLines).AllocatorInstance.Data;
  local_28 = FColor::White.field0_0x0;
  local_3c = 0xffffffff;
  local_38 = 0;
  local_30 = 0;
  local_24 = (FScriptContainerElement)0x0;
  local_40 = FVar2;
  if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < pFVar7 + (longlong)(param_1->LogLines).ArrayMax * 0x38
      )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (param_1->LogLines).ArrayNum;
  piVar1 = &(param_1->LogLines).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(param_1->LogLines).AllocatorInstance,piVar1);
  }
  (param_1->LogLines).ArrayNum = iVar6 + 1;
  pFVar7 = (param_1->LogLines).AllocatorInstance.Data + (longlong)iVar6 * 0x38;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_58.Data;
  *(undefined4 *)(pFVar7 + 8) = (undefined4)local_50;
  *(undefined4 *)(pFVar7 + 0xc) = local_50._4_4_;
  *(undefined8 *)(pFVar7 + 0x10) = local_48;
  pFVar7[0x18] = local_40;
  *(undefined4 *)(pFVar7 + 0x1c) = local_3c;
  *(undefined8 *)(pFVar7 + 0x20) = local_38;
  *(undefined8 *)(pFVar7 + 0x28) = local_30;
  ((FColor_u_0 *)(pFVar7 + 0x30))->_s_0 = (FColor_u_0_s_0)local_28;
  pFVar7[0x34] = local_24;
  local_50 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// AddClassToAllowList @ 1489c3a50

void __thiscall FVisualLogger::AddClassToAllowList(FVisualLogger *this,UClass *param_1)

{
  UClass *local_res8 [4];
  
  local_res8[0] = param_1;
  TArray<UClass_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UClass_*>
            (&this->ClassAllowList,local_res8);
  return;
}

// AddObjectToAllowList @ 1489c5a50

void __thiscall FVisualLogger::AddObjectToAllowList(FVisualLogger *this,UObject *param_1)

{
  undefined1 *puVar1;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  FRWAccessDetector *pFVar3;
  FScriptContainerElement *pFVar4;
  FRWFallbackSafeAccessDetectorDefinition FVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  longlong *plVar8;
  code *pcVar9;
  longlong lVar10;
  bool bVar11;
  FVisualLogEntry *pFVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res10 [8];
  FObjectKey local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_88;
  FWeakObjectPtr local_80;
  FWeakObjectPtr local_78;
  FObjectKey local_70;
  UObject *local_68;
  UObject *local_60;
  UObject *local_58 [3];
  
  if ((&this->EntryRWLock == (FPlatformRWLock *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->EntryRWLock);
  local_80.ObjectIndex = 0;
  local_80.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_88.ObjectIndex = 0;
    local_88.ObjectSerialNumber = 0;
    local_68 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_68);
    local_80 = local_88;
  }
  TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::Emplace<FObjectKey>
            (&this->ObjectAllowList,&local_res18,(bool *)&local_80);
  LOCK();
  pFVar2 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
  FVar5 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
  UNLOCK();
  if (((FVar5 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x72,
                          L"Acquiring a write access while there are ongoing read or write access"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_70.ObjectIndex = 0;
  local_70.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_78.ObjectIndex = 0;
    local_78.ObjectSerialNumber = 0;
    local_60 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_60);
    local_70.ObjectIndex = local_78.ObjectIndex;
    local_70.ObjectSerialNumber = local_78.ObjectSerialNumber;
  }
  pFVar12 = TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
            ::Find((TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
                    *)&this->CurrentEntryPerObject,&local_70);
  if (pFVar12 != (FVisualLogEntry *)0x0) {
    pFVar12->bPassedObjectAllowList = '\x01';
    pFVar12->bIsAllowedToLog = '\x01';
  }
  LOCK();
  pFVar2 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
  FVar5 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
  UNLOCK();
  if (((FVar5 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x7d,
                          L"Another thread asked to have a read or write access during this write access"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  LOCK();
  pFVar3 = &this->ThreadLocalMapListAccessDetector;
  aVar6 = pFVar3->AtomicValue;
  pFVar3->AtomicValue = (atomic<unsigned_int>)((int)pFVar3->AtomicValue + 1);
  UNLOCK();
  if (((((uint)aVar6 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar22 = (this->ThreadCurrentEntryMaps).AllocatorInstance.Data;
  iVar7 = (this->ThreadCurrentEntryMaps).ArrayNum;
  pFVar4 = pFVar22 + (longlong)iVar7 * 8;
  do {
    if ((this->ThreadCurrentEntryMaps).ArrayNum != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FVisualLogger::FVisualLoggerObjectEntryMap_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar22 == pFVar4) {
      LOCK();
      pFVar3 = &this->ThreadLocalMapListAccessDetector;
      aVar6 = pFVar3->AtomicValue;
      pFVar3->AtomicValue = (atomic<unsigned_int>)((int)pFVar3->AtomicValue + -1);
      UNLOCK();
      if (((((uint)aVar6 & 0xfff00000) != 0) &&
          (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                              ,0x67,
                              L"Another thread asked to have a write access during this read access"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (&this->EntryRWLock != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)&this->EntryRWLock);
      }
      return;
    }
    plVar8 = *(longlong **)pFVar22;
    if ((plVar8 == (longlong *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ThreadCurrentEntryMap",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                            ,0x15a,L"Unexpected null map entry pointer"), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    LOCK();
    plVar17 = plVar8 + 10;
    lVar10 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + 0x100000;
    UNLOCK();
    if ((((int)lVar10 != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x72,
                            L"Acquiring a write access while there are ongoing read or write access"
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    piVar13 = (int *)0x0;
    iVar21 = 0;
    if (param_1 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_58[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_58);
      piVar13 = (int *)((ulonglong)local_res20 >> 0x20);
      iVar21 = local_res20.ObjectIndex;
    }
    iVar20 = (int)piVar13;
    uVar16 = iVar21 - iVar20 ^ (uint)((ulonglong)piVar13 >> 0xd);
    uVar14 = (-0x61c88647 - uVar16) - iVar20 ^ uVar16 << 8;
    uVar18 = (iVar20 - uVar14) - uVar16 ^ uVar14 >> 0xd;
    uVar16 = (uVar16 - uVar18) - uVar14 ^ uVar18 >> 0xc;
    uVar14 = (uVar14 - uVar18) - uVar16 ^ uVar16 << 0x10;
    uVar18 = (uVar18 - uVar14) - uVar16 ^ uVar14 >> 5;
    uVar16 = (uVar16 - uVar18) - uVar14 ^ uVar18 >> 3;
    uVar14 = (uVar14 - uVar16) - uVar18 ^ uVar16 << 10;
    if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
      plVar17 = plVar8 + 7;
      if ((longlong *)plVar8[8] != (longlong *)0x0) {
        plVar17 = (longlong *)plVar8[8];
      }
      iVar19 = *(int *)((longlong)plVar17 +
                       (ulonglong)
                       ((int)plVar8[9] - 1U & ((uVar18 - uVar14) - uVar16 ^ uVar14 >> 0xf)) * 4);
      if (iVar19 != -1) {
        do {
          piVar13 = (int *)((longlong)iVar19 * 0xa0 + *plVar8);
          if ((*piVar13 == iVar21) && (piVar13[1] == iVar20)) {
            if (iVar19 != -1) {
              piVar15 = piVar13 + 2;
              if (piVar13 == (int *)0x0) {
                piVar15 = (int *)0x0;
              }
              if (piVar15 != (int *)0x0) {
                *(byte *)(piVar15 + 10) = *(byte *)(piVar15 + 10) | 6;
              }
            }
            break;
          }
          iVar19 = piVar13[0x26];
        } while (iVar19 != -1);
      }
    }
    LOCK();
    plVar8 = plVar8 + 10;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -0x100000;
    UNLOCK();
    if ((((int)lVar10 != 0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x7d,
                            L"Another thread asked to have a read or write access during this write access"
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar22 = pFVar22 + 8;
  } while( true );
}

// ArrowLineLogfImpl @ 1489cb7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::ArrowLineLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TVector<double> *param_4,
          TVector<double> *param_5,FColor *param_6,ushort param_7,wchar_t *param_8)

{
  Type local_res18 [16];
  <lambda_1> local_38;
  
  local_38.End = param_5;
  local_38.Verbosity = local_res18;
  local_38.Color = param_6;
  local_38.Mag = &param_7;
  local_res18[0] = param_3;
  local_38.Start = param_4;
  local_38.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::ArrowLineLogfImpl_::__l2::<lambda_1>_>
            (&local_38,param_1,param_2,param_3,param_8,&stack0x00000048);
  return;
}

// ArrowLogfImpl @ 1489cb850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::ArrowLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TVector<double> *param_4,
          TVector<double> *param_5,FColor *param_6,wchar_t *param_7)

{
  Type local_res18 [16];
  <lambda_1> local_38;
  
  local_38.End = param_5;
  local_38.Verbosity = local_res18;
  local_38.Color = param_6;
  local_res18[0] = param_3;
  local_38.Start = param_4;
  local_38.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::ArrowLogfImpl_::__l2::<lambda_1>_>
            (&local_38,param_1,param_2,param_3,param_7,&stack0x00000040);
  return;
}

// BoxLogfImpl @ 1489cd340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::BoxLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TBox<double> *param_4,
          TMatrix<double> *param_5,FColor *param_6,bool param_7,wchar_t *param_8)

{
  Type local_res18 [16];
  <lambda_1> local_38;
  
  local_38.Matrix = param_5;
  local_38.Verbosity = local_res18;
  local_38.Color = param_6;
  local_38.bWireframe = &param_7;
  local_res18[0] = param_3;
  local_38.Box = param_4;
  local_38.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::BoxLogfImpl_::__l2::<lambda_1>_>
            (&local_38,param_1,param_2,param_3,param_8,&stack0x00000048);
  return;
}

// CalculateEntryAllowLogging @ 1489ce580

void __thiscall
FVisualLogger::CalculateEntryAllowLogging
          (FVisualLogger *this,FVisualLogEntry *param_1,UObject *param_2,UObject *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  byte bVar3;
  
  if ((this->ClassAllowList).ArrayNum != 0) {
    bVar2 = IsClassAllowed(this,*(UClass **)&param_2->field_0x10);
    if (!bVar2) {
      bVar2 = IsClassAllowed(this,*(UClass **)&param_3->field_0x10);
      if (!bVar2) {
        bVar3 = 0;
        goto LAB_1489ce5c9;
      }
    }
  }
  bVar3 = 1;
LAB_1489ce5c9:
  param_1->bPassedClassAllowList = '\0';
  param_1->field_0x28 = param_1->field_0x28 | bVar3;
  bVar2 = IsObjectAllowed(this,param_2);
  param_1->bPassedObjectAllowList = bVar2;
  param_1->bIsAllowedToLog = (byte)-(bVar2 || param_1->bPassedClassAllowList != 0) >> 2;
  return;
}

// CapsuleLogfImpl @ 1489cefb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::CapsuleLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TVector<double> *param_4,float param_5,
          float param_6,TQuat<double> *param_7,FColor *param_8,bool param_9,wchar_t *param_10)

{
  Type local_res18 [16];
  <lambda_1> local_48;
  
  local_48.HalfHeight = &param_5;
  local_48.Radius = &param_6;
  local_48.Rotation = param_7;
  local_48.Verbosity = local_res18;
  local_48.Color = param_8;
  local_48.bWireframe = &param_9;
  local_res18[0] = param_3;
  local_48.Base = param_4;
  local_48.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::CapsuleLogfImpl_::__l2::<lambda_1>_>
            (&local_48,param_1,param_2,param_3,param_10,&stack0x00000058);
  return;
}

// CategorizedLogfImpl @ 1489cf030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::CategorizedLogfImpl(UObject *param_1,FName *param_2,Type param_3,wchar_t *param_4)

{
  Type local_res18 [8];
  wchar_t *local_res20;
  <lambda_1> local_18;
  
  local_18.Verbosity = local_res18;
  local_res18[0] = param_3;
  local_res20 = param_4;
  local_18.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::CategorizedLogfImpl_::__l2::<lambda_1>_>
            (&local_18,param_1,param_2,param_3,param_4,&stack0x00000028);
  return;
}

// CheckVisualLogInputInternal @ 1489cf080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FVisualLogger::CheckVisualLogInputInternal
          (UObject *param_1,FName *param_2,Type param_3,UWorld **param_4,FVisualLogEntry **param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FVisualLogger *this;
  UWorld *pUVar4;
  FVisualLogEntry *pFVar5;
  double dVar6;
  
  if ((((bIsRecording == 0) || (param_1 == (UObject *)0x0)) || (GEngine == (UEngine *)0x0)) ||
     ((GEngine->bDisableAILogging != 0 || ((*(uint *)&param_1->field_0x8 & 0x10) != 0)))) {
LAB_1489cf12d:
    bVar2 = false;
  }
  else {
    this = Get();
    if (this->bBlockedAllCategories) {
      bVar2 = IsCategoryAllowed(this,param_2);
      if (!bVar2) goto LAB_1489cf12d;
    }
    if (param_4 != (UWorld **)0x0) {
      pUVar4 = ::`anonymous_namespace'::GetWorldForVisualLogger(param_1);
      *param_4 = pUVar4;
      if (pUVar4 == (UWorld *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1331245518784823539>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                           ,0xf3,"*OutWorld != nullptr");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        goto LAB_1489cf12d;
      }
    }
    if (param_5 != (FVisualLogEntry **)0x0) {
      dVar6 = GetTimeStampForObject(this,param_1);
      pFVar5 = GetEntryToWrite(this,param_1,dVar6,Create);
      *param_5 = pFVar5;
      if (pFVar5 == (FVisualLogEntry *)0x0) goto LAB_1489cf12d;
    }
    bVar2 = true;
  }
  return bVar2;
}

// CircleLogfImpl @ 1489cf180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::CircleLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TVector<double> *param_4,
          TVector<double> *param_5,float param_6,FColor *param_7,ushort param_8,wchar_t *param_9)

{
  Type local_res18 [16];
  <lambda_1> local_48;
  
  local_48.UpAxis = param_5;
  local_48.Radius = &param_6;
  local_48.Verbosity = local_res18;
  local_48.Color = param_7;
  local_48.Thickness = &param_8;
  local_res18[0] = param_3;
  local_48.Center = param_4;
  local_48.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::CircleLogfImpl_::__l2::<lambda_1>_>
            (&local_48,param_1,param_2,param_3,param_9,&stack0x00000050);
  return;
}

// Cleanup @ 1489cf2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FVisualLogger::Cleanup(FVisualLogger *this,UWorld *param_1,bool param_2)

{
  TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
  *pTVar1;
  TMap<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>_>
  *pTVar2;
  TMap<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  FRWFallbackSafeAccessDetectorDefinition *pFVar5;
  FRWFallbackSafeAccessDetectorDefinition FVar6;
  int iVar7;
  TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
  *pTVar8;
  longlong lVar9;
  code *pcVar10;
  longlong *plVar11;
  bool bVar12;
  int iVar13;
  FVisualLogger *pFVar14;
  UObject *pUVar15;
  UWorld *pUVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  undefined1 local_res20 [8];
  undefined1 local_148;
  undefined1 local_147;
  byte local_146;
  FObjectKey local_140;
  FWeakObjectPtr local_138 [2];
  longlong *local_128;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_f8;
  undefined2 local_f0;
  longlong *local_e8;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_b8;
  undefined2 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  UWorld *local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  local_146 = this->field_0x2b0;
  local_res10 = param_1;
  if (this->bIsRecordingToFile) {
    SetIsRecordingToFile(this,false);
  }
  (**(code **)(this->_padding_ + 0x20))(this);
  pFVar14 = Get();
  pFVar22 = (pFVar14->OutputDevices).AllocatorInstance.Data;
  iVar13 = (pFVar14->OutputDevices).ArrayNum;
  pFVar4 = pFVar22 + (longlong)iVar13 * 8;
  while( true ) {
    if ((pFVar14->OutputDevices).ArrayNum != iVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVisualLogDevice_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar22 == pFVar4) break;
    (**(code **)(**(longlong **)pFVar22 + 0x18))(*(longlong **)pFVar22,param_2);
    pFVar22 = pFVar22 + 8;
  }
  if (param_1 == (UWorld *)0x0) {
    TSet<TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
             *)&WorldToRedirectionMap);
    TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
             *)&this->ObjectToWorldMap);
    TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
             *)&this->ChildToOwnerMap);
    LOCK();
    pFVar5 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
    FVar6 = *pFVar5;
    *pFVar5 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar5 + 0x100000);
    UNLOCK();
    if (((FVar6 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x72,
                            L"Acquiring a write access while there are ongoing read or write access"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
             *)&this->CurrentEntryPerObject);
    pFVar22 = (this->ThreadCurrentEntryMaps).AllocatorInstance.Data;
    iVar13 = (this->ThreadCurrentEntryMaps).ArrayNum;
    pFVar4 = pFVar22 + (longlong)iVar13 * 8;
    while( true ) {
      if ((this->ThreadCurrentEntryMaps).ArrayNum != iVar13) {
        local_147 = 0;
        `TCheckedPointerIterator<FVisualLogger::FVisualLoggerObjectEntryMap_*,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_147);
      }
      if (pFVar22 == pFVar4) break;
      pTVar8 = *(TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                 **)pFVar22;
      if ((pTVar8 == (TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                      *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ThreadCurrentEntryMap",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                              ,0x3d1,L"Unexpected null map entry pointer"), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      LOCK();
      pTVar1 = pTVar8 + 1;
      iVar21 = *(int *)&pTVar1->Elements;
      *(int *)&pTVar1->Elements = *(int *)&pTVar1->Elements + 0x100000;
      UNLOCK();
      if (((iVar21 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                 ,0x72,
                                 L"Acquiring a write access while there are ongoing read or write access"
                                ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
      ::Reset(pTVar8);
      LOCK();
      pTVar8 = pTVar8 + 1;
      iVar21 = *(int *)&pTVar8->Elements;
      *(int *)&pTVar8->Elements = *(int *)&pTVar8->Elements + -0x100000;
      UNLOCK();
      if (((iVar21 != 0x100000) &&
          (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                              ,0x7d,
                              L"Another thread asked to have a read or write access during this write access"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar22 = pFVar22 + 8;
    }
    TSet<TTuple<FObjectKey,FVisualLogger::FObjectNames>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FObjectKey,FVisualLogger::FObjectNames>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>,FDefaultSetAllocator>
             *)&this->ObjectToNamesMap);
    LOCK();
    pFVar5 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
    FVar6 = *pFVar5;
    *pFVar5 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar5 + -0x100000);
    UNLOCK();
    if (((FVar6 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x7d,
                            L"Another thread asked to have a read or write access during this write access"
                           ), bVar12)) goto code_r0x0001489cfd99;
  }
  else {
    local_a0 = param_1;
    if ((WorldToRedirectionMap._8_4_ != WorldToRedirectionMap._52_4_) &&
       (uVar17 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                 -0x7a143595, uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb,
       iVar13 = TSet<TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
                ::RemoveImpl<UWorld_const_*>
                          ((TSet<TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
                            *)&WorldToRedirectionMap,uVar17 >> 0x10 ^ uVar17,&local_a0), iVar13 != 0
       )) {
      if (WorldToRedirectionMap._8_4_ == WorldToRedirectionMap._52_4_) {
        TSet<TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
                 *)&WorldToRedirectionMap);
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                 *)&this->ObjectToWorldMap);
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                 *)&this->ChildToOwnerMap);
        LOCK();
        pFVar5 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
        FVar6 = *pFVar5;
        *pFVar5 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar5 + 0x100000);
        UNLOCK();
        if (((FVar6 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
            (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                ,0x72,
                                L"Acquiring a write access while there are ongoing read or write access"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                 *)&this->CurrentEntryPerObject);
        pFVar22 = (this->ThreadCurrentEntryMaps).AllocatorInstance.Data;
        iVar13 = (this->ThreadCurrentEntryMaps).ArrayNum;
        pFVar4 = pFVar22 + (longlong)iVar13 * 8;
        while( true ) {
          if ((this->ThreadCurrentEntryMaps).ArrayNum != iVar13) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FVisualLogger::FVisualLoggerObjectEntryMap_*,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (pFVar22 == pFVar4) break;
          pTVar8 = *(TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                     **)pFVar22;
          if ((pTVar8 == (TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                          *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ThreadCurrentEntryMap",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                                  ,0x3a0,L"Unexpected null map entry pointer"), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          LOCK();
          pTVar1 = pTVar8 + 1;
          iVar21 = *(int *)&pTVar1->Elements;
          *(int *)&pTVar1->Elements = *(int *)&pTVar1->Elements + 0x100000;
          UNLOCK();
          if (((iVar21 != 0) &&
              (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                  ,0x72,
                                  L"Acquiring a write access while there are ongoing read or write access"
                                 ), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
          ::Reset(pTVar8);
          LOCK();
          pTVar8 = pTVar8 + 1;
          iVar21 = *(int *)&pTVar8->Elements;
          *(int *)&pTVar8->Elements = *(int *)&pTVar8->Elements + -0x100000;
          UNLOCK();
          if (((iVar21 != 0x100000) &&
              (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                  ,0x7d,
                                  L"Another thread asked to have a read or write access during this write access"
                                 ), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar22 = pFVar22 + 8;
        }
        TSet<TTuple<FObjectKey,FVisualLogger::FObjectNames>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FObjectKey,FVisualLogger::FObjectNames>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>,FDefaultSetAllocator>
                 *)&this->ObjectToNamesMap);
        LOCK();
        pFVar5 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
        FVar6 = *pFVar5;
        *pFVar5 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar5 + -0x100000);
        UNLOCK();
        if (((FVar6 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
            (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                ,0x7d,
                                L"Another thread asked to have a read or write access during this write access"
                               ), bVar12)) {
code_r0x0001489cfd99:
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      else {
        LOCK();
        pFVar5 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
        FVar6 = *pFVar5;
        *pFVar5 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar5 + 0x100000);
        UNLOCK();
        if (((FVar6 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
            (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                ,0x72,
                                L"Acquiring a write access while there are ongoing read or write access"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar2 = &this->ObjectToWorldMap;
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_98,
                   (TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)pTVar2);
        local_b0 = 0;
        stack0xffffffffffffff28 = local_98._16_16_;
        local_e8 = (longlong *)local_98._0_8_;
        auStack_e0._0_8_ = local_98._8_8_;
        local_c8 = local_78;
        pTStack_c0 = pTStack_70;
        uVar19 = local_98._24_8_ >> 0x20;
        uVar17 = local_98._28_4_;
        local_b8 = (TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)pTVar2;
        if ((int)uVar17 < *(int *)(local_98._16_8_ + 0x18)) {
          do {
            plVar11 = local_e8;
            bVar12 = TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>::UEOpEquals<UWorld,bool>
                               ((TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)
                                (*local_e8 + ((longlong)(int)uVar19 * 3 + 1) * 8),param_1);
            if (bVar12) {
              local_140 = *(FObjectKey *)(*plVar11 + (longlong)(int)uVar17 * 0x18);
              uVar17 = local_140.ObjectSerialNumber;
              uVar23 = local_140.ObjectIndex - uVar17;
              if (*(int *)&(this->ObjectToWorldMap).field_0x8 !=
                  *(int *)&(this->ObjectToWorldMap).field_0x34) {
                uVar18 = uVar23 ^ uVar17 >> 0xd;
                uVar24 = (-0x61c88647 - uVar17) - uVar18 ^ uVar18 << 8;
                uVar20 = (uVar17 - uVar24) - uVar18 ^ uVar24 >> 0xd;
                uVar18 = (uVar18 - uVar20) - uVar24 ^ uVar20 >> 0xc;
                uVar24 = (uVar24 - uVar18) - uVar20 ^ uVar18 << 0x10;
                uVar20 = (uVar20 - uVar24) - uVar18 ^ uVar24 >> 5;
                uVar18 = (uVar18 - uVar20) - uVar24 ^ uVar20 >> 3;
                uVar24 = (uVar24 - uVar18) - uVar20 ^ uVar18 << 10;
                TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                ::RemoveImpl<FObjectKey>
                          ((TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                            *)&this->ObjectToWorldMap,(uVar20 - uVar24) - uVar18 ^ uVar24 >> 0xf,
                           &local_140);
              }
              if ((int)(this->CurrentEntryPerObject)._padding_ !=
                  *(int *)((longlong)&(this->CurrentEntryPerObject)._padding_ + 4)) {
                uVar23 = uVar17 >> 0xd ^ uVar23;
                uVar18 = (-0x61c88647 - uVar17) - uVar23 ^ uVar23 << 8;
                uVar20 = (uVar17 - uVar18) - uVar23 ^ uVar18 >> 0xd;
                uVar24 = (uVar23 - uVar20) - uVar18 ^ uVar20 >> 0xc;
                uVar17 = (uVar18 - uVar24) - uVar20 ^ uVar24 << 0x10;
                uVar23 = (uVar20 - uVar17) - uVar24 ^ uVar17 >> 5;
                uVar18 = (uVar24 - uVar23) - uVar17 ^ uVar23 >> 3;
                uVar17 = (uVar17 - uVar18) - uVar23 ^ uVar18 << 10;
                TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                ::RemoveImpl<FObjectKey>
                          ((TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                            *)&this->CurrentEntryPerObject,
                           (uVar23 - uVar17) - uVar18 ^ uVar17 >> 0xf,&local_140);
              }
              pFVar22 = (this->ThreadCurrentEntryMaps).AllocatorInstance.Data;
              iVar13 = (this->ThreadCurrentEntryMaps).ArrayNum;
              iVar21 = local_140.ObjectSerialNumber;
              pFVar4 = pFVar22 + (longlong)iVar13 * 8;
              while( true ) {
                if ((this->ThreadCurrentEntryMaps).ArrayNum != iVar13) {
                  local_148 = 0;
                  `TCheckedPointerIterator<FVisualLogger::FVisualLoggerObjectEntryMap_*,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_148);
                }
                if (pFVar22 == pFVar4) break;
                pTVar8 = *(TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                           **)pFVar22;
                if ((pTVar8 == (TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                                *)0x0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ThreadCurrentEntryMap",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                                        ,0x3b3,L"Unexpected null map entry pointer"), bVar12)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                LOCK();
                pTVar1 = pTVar8 + 1;
                iVar7 = *(int *)&pTVar1->Elements;
                *(int *)&pTVar1->Elements = *(int *)&pTVar1->Elements + 0x100000;
                UNLOCK();
                if (((iVar7 != 0) &&
                    (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                        ,0x72,
                                        L"Acquiring a write access while there are ongoing read or write access"
                                       ), bVar12)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                if (*(int *)&(pTVar8->Elements).field_0x8 != *(int *)&(pTVar8->Elements).field_0x34)
                {
                  uVar18 = local_140.ObjectIndex - iVar21 ^ (uint)iVar21 >> 0xd;
                  uVar17 = (-0x61c88647 - iVar21) - uVar18 ^ uVar18 << 8;
                  uVar23 = (iVar21 - uVar17) - uVar18 ^ uVar17 >> 0xd;
                  uVar18 = (uVar18 - uVar23) - uVar17 ^ uVar23 >> 0xc;
                  uVar17 = (uVar17 - uVar18) - uVar23 ^ uVar18 << 0x10;
                  uVar23 = (uVar23 - uVar17) - uVar18 ^ uVar17 >> 5;
                  uVar18 = (uVar18 - uVar23) - uVar17 ^ uVar23 >> 3;
                  uVar17 = (uVar17 - uVar18) - uVar23 ^ uVar18 << 10;
                  TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                  ::RemoveImpl<FObjectKey>
                            (pTVar8,(uVar23 - uVar17) - uVar18 ^ uVar17 >> 0xf,&local_140);
                }
                LOCK();
                pTVar8 = pTVar8 + 1;
                iVar7 = *(int *)&pTVar8->Elements;
                *(int *)&pTVar8->Elements = *(int *)&pTVar8->Elements + -0x100000;
                UNLOCK();
                if (((iVar7 != 0x100000) &&
                    (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                        ,0x7d,
                                        L"Another thread asked to have a read or write access during this write access"
                                       ), bVar12)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pFVar22 = pFVar22 + 8;
              }
              param_1 = local_res10;
              if (*(int *)&(this->ObjectToNamesMap).field_0x8 !=
                  *(int *)&(this->ObjectToNamesMap).field_0x34) {
                uVar18 = local_140.ObjectIndex - iVar21 ^ (uint)iVar21 >> 0xd;
                uVar17 = (-0x61c88647 - iVar21) - uVar18 ^ uVar18 << 8;
                uVar23 = (iVar21 - uVar17) - uVar18 ^ uVar17 >> 0xd;
                uVar18 = (uVar18 - uVar23) - uVar17 ^ uVar23 >> 0xc;
                uVar17 = (uVar17 - uVar18) - uVar23 ^ uVar18 << 0x10;
                uVar23 = (uVar23 - uVar17) - uVar18 ^ uVar17 >> 5;
                uVar18 = (uVar18 - uVar23) - uVar17 ^ uVar23 >> 3;
                uVar17 = (uVar17 - uVar18) - uVar23 ^ uVar18 << 10;
                TSet<TTuple<FObjectKey,FVisualLogger::FObjectNames>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>,FDefaultSetAllocator>
                ::RemoveImpl<FObjectKey>
                          ((TSet<TTuple<FObjectKey,FVisualLogger::FObjectNames>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>,FDefaultSetAllocator>
                            *)&this->ObjectToNamesMap,(uVar23 - uVar17) - uVar18 ^ uVar17 >> 0xf,
                           &local_140);
                param_1 = local_res10;
              }
            }
            uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
            uVar19 = (ulonglong)uStack_cc;
            uVar17 = uStack_cc;
          } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
          if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
            uVar17 = *(int *)&(local_b8->Elements).field_0x8 -
                     *(int *)&(local_b8->Elements).field_0x34;
            iVar13 = 1;
            if (3 < uVar17) {
              uVar19 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
              lVar9 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              local_a8 = (undefined4)lVar9;
              iVar13 = 1 << ((byte)lVar9 & 0x1f);
            }
            if (((0 < (int)uVar17) && (local_b8->HashSize < iVar13)) ||
               (iVar13 < local_b8->HashSize)) {
              local_b8->HashSize = iVar13;
              TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::Rehash(local_b8);
            }
          }
        }
        iVar13 = 1;
        pTVar3 = &this->ChildToOwnerMap;
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_68,
                   (TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)pTVar3);
        local_f0 = 0;
        stack0xfffffffffffffee8 = local_68._16_16_;
        local_128 = (longlong *)local_68._0_8_;
        auStack_120._0_8_ = local_68._8_8_;
        local_108 = local_48;
        pTStack_100 = pTStack_40;
        uVar19 = local_68._24_8_ >> 0x20;
        local_f8 = (TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)pTVar3;
        if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
          do {
            iVar21 = (int)uVar19;
            local_138[0].ObjectIndex = *(int *)(*local_128 + (longlong)iVar21 * 0x18);
            local_138[0].ObjectSerialNumber = *(int *)(*local_128 + 4 + (longlong)iVar21 * 0x18);
            pUVar15 = FWeakObjectPtr::Get(local_138,true);
            if ((pUVar15 == (UObject *)0x0) ||
               (pUVar16 = (UWorld *)(**(code **)(*(longlong *)pUVar15 + 0x180))(pUVar15),
               pUVar16 == param_1)) {
              TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_100,iVar21);
              local_f0 = CONCAT11(local_f0._1_1_,1);
            }
            uStack_110 = uStack_110 & ~auStack_120._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
            uVar19 = (ulonglong)uStack_10c;
          } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
          if (((char)local_f0 != '\0') && (local_f0._1_1_ != '\0')) {
            uVar17 = *(int *)&(local_f8->Elements).field_0x8 -
                     *(int *)&(local_f8->Elements).field_0x34;
            if (3 < uVar17) {
              uVar19 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
              lVar9 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              local_a4 = (undefined4)lVar9;
              iVar13 = 1 << ((byte)lVar9 & 0x1f);
            }
            if (((0 < (int)uVar17) && (local_f8->HashSize < iVar13)) ||
               (iVar13 < local_f8->HashSize)) {
              local_f8->HashSize = iVar13;
              TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::Rehash(local_f8);
            }
          }
        }
        LOCK();
        pFVar5 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
        FVar6 = *pFVar5;
        *pFVar5 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar5 + -0x100000);
        UNLOCK();
        if (((FVar6 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
            (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                                ,0x7d,
                                L"Another thread asked to have a read or write access during this write access"
                               ), bVar12)) goto code_r0x0001489cfd99;
      }
    }
  }
  TSet<TTuple<double,int>,TDefaultMapHashableKeyFuncs<double,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<double,int>,TDefaultMapHashableKeyFuncs<double,int,0>,FDefaultSetAllocator>
              *)&this->LastUniqueIds);
  if ((local_146 & 2) != 0) {
    SetIsRecordingToFile(this,true);
  }
  return;
}

// CleanupRedirects @ 1489cfe20

void __thiscall FVisualLogger::CleanupRedirects(FVisualLogger *this)

{
  FPlatformRWLock *SRWLock;
  TMap<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
  *this_00;
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  SRWLock = &this->RedirectRWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this_00 = &this->ChildToOwnerMap;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_00);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar8 = local_88._24_8_ >> 0x20;
  uVar10 = local_88._28_4_;
  local_28 = (TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_00;
  if ((int)uVar10 < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      plVar5 = local_58;
      bVar6 = FWeakObjectPtr::IsValid
                        ((FWeakObjectPtr *)(*local_58 + ((longlong)(int)uVar8 * 3 + 1) * 8));
      if ((!bVar6) &&
         (uVar1 = *(undefined8 *)(*plVar5 + (longlong)(int)uVar10 * 0x18),
         *(int *)&(this->ChildToOwnerMap).field_0x8 != *(int *)&(this->ChildToOwnerMap).field_0x34))
      {
        uVar13 = (uint)((ulonglong)uVar1 >> 0x20);
        iVar7 = (int)uVar1;
        uVar11 = iVar7 - uVar13 ^ uVar13 >> 0xd;
        uVar10 = (-0x61c88647 - uVar11) - uVar13 ^ uVar11 << 8;
        uVar14 = (uVar13 - uVar10) - uVar11 ^ uVar10 >> 0xd;
        uVar11 = (uVar11 - uVar14) - uVar10 ^ uVar14 >> 0xc;
        uVar10 = (uVar10 - uVar11) - uVar14 ^ uVar11 << 0x10;
        uVar14 = (uVar14 - uVar10) - uVar11 ^ uVar10 >> 5;
        uVar11 = (uVar11 - uVar14) - uVar10 ^ uVar14 >> 3;
        uVar10 = (uVar10 - uVar11) - uVar14 ^ uVar11 << 10;
        puVar2 = *(undefined1 **)&(this->ChildToOwnerMap).field_0x40;
        puVar12 = &(this->ChildToOwnerMap).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar12 = puVar2;
        }
        iVar15 = *(int *)(puVar12 +
                         ((longlong)*(int *)&(this->ChildToOwnerMap).field_0x48 - 1U &
                         (longlong)(int)((uVar14 - uVar10) - uVar11 ^ uVar10 >> 0xf)) * 4);
        if (iVar15 != -1) {
          lVar3 = *(longlong *)&this_00->field_0x0;
          do {
            lVar9 = (longlong)iVar15;
            if ((*(int *)(lVar3 + lVar9 * 0x18) == iVar7) &&
               (*(uint *)(lVar3 + 4 + lVar9 * 0x18) == uVar13)) {
              TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                               *)this_00,iVar15);
              break;
            }
            iVar15 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
          } while (iVar15 != -1);
        }
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar8 = (ulonglong)uStack_3c;
      uVar10 = uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_28->HashSize < iVar7)) || (iVar7 < local_28->HashSize)) {
        local_28->HashSize = iVar7;
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// ClearObjectAllowList @ 1489d0ee0

void __thiscall FVisualLogger::ClearObjectAllowList(FVisualLogger *this)

{
  FPlatformRWLock *SRWLock;
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWAccessDetector *pFVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  FRWFallbackSafeAccessDetectorDefinition FVar5;
  atomic<unsigned_int> aVar6;
  undefined8 uVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  longlong *plVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *this_00;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  uint uStack_e4;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  SRWLock = &this->EntryRWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar17 = *(int *)&(this->ObjectAllowList).Elements.field_0x28;
  iVar19 = 0;
  uVar11 = 1;
  iVar21 = 0;
  iVar12 = 0;
  if (iVar17 != 0) {
    puVar22 = *(uint **)&(this->ObjectAllowList).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)&(this->ObjectAllowList).Elements.field_0x10;
    }
    uVar18 = *puVar22;
    iVar21 = 0;
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar19;
      iVar21 = iVar21 + 0x20;
      iVar19 = iVar19 + 1;
      iVar12 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1489d0fc2;
      uVar18 = puVar22[lVar14 + 1];
    }
    uVar11 = -uVar18 & uVar18;
    uVar4 = (ulonglong)uVar11 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    iVar12 = iVar21 + -1 + local_res20;
    if (iVar17 < iVar12) {
      iVar12 = iVar17;
    }
  }
LAB_1489d0fc2:
  TStack_98.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->ObjectAllowList).Elements.field_0x10;
  uVar18 = *(uint *)&(this->ObjectAllowList).Elements.field_0x28;
  uVar23 = uVar18 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar11,iVar19);
  TStack_98.CurrentBitIndex = iVar12;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar21;
  uStack_78 = CONCAT44(uStack_a4,
                       *(int *)&(this->ObjectAllowList).Elements.field_0x8 -
                       *(int *)&(this->ObjectAllowList).Elements.field_0x34);
  local_res18 = uVar18;
  if ((((int)uVar18 < 0) || (iVar17 < (int)uVar18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar11 = *(uint *)&(this->ObjectAllowList).Elements.field_0x28;
  if (uVar18 != uVar11) {
    puVar20 = *(undefined1 **)&(this->ObjectAllowList).Elements.field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->ObjectAllowList).Elements.field_0x10;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar14 = (longlong)iVar19;
      uVar23 = uVar23 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar11;
      local_res18 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_1489d10e0;
      uVar18 = *(uint *)(puVar20 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar18 = (int)lVar14 + -1 + uVar23;
    local_res18 = uVar18;
    if ((int)uVar11 < (int)uVar18) {
      uVar18 = uVar11;
      local_res18 = uVar11;
    }
  }
LAB_1489d10e0:
  do {
    this_00 = &this->ObjectAllowList;
    if (*(int *)&(this->ObjectAllowList).Elements.field_0x8 -
        *(int *)&(this->ObjectAllowList).Elements.field_0x34 != (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_98.CurrentBitIndex == uVar18) &&
       (TStack_98.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->ObjectAllowList).Elements.field_0x10)) {
      bVar10 = 1 < (this->ObjectAllowList).HashSize;
      if (!bVar10) {
        TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::UnhashElements(this_00)
        ;
      }
      puVar20 = &(this->ObjectAllowList).Elements.field_0xc;
      *(undefined4 *)&(this->ObjectAllowList).Elements.field_0x8 = 0;
      if (*(int *)puVar20 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar20);
      }
      *(undefined4 *)&(this->ObjectAllowList).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ObjectAllowList).Elements.field_0x34 = 0;
      iVar17 = *(int *)&(this->ObjectAllowList).Elements.field_0x2c;
      *(undefined4 *)&(this->ObjectAllowList).Elements.field_0x28 = 0;
      if ((iVar17 < 0) || (0x80 < iVar17)) {
        *(undefined4 *)&(this->ObjectAllowList).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->ObjectAllowList).Elements.field_0x10,0);
      }
      if (bVar10) {
        (this->ObjectAllowList).HashSize = 1;
        TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::Rehash(this_00);
      }
      if (SRWLock != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      return;
    }
    uVar7 = *(undefined8 *)
             (*(longlong *)&(this->ObjectAllowList).Elements +
             (longlong)TStack_98.CurrentBitIndex * 0x10);
    LOCK();
    pFVar1 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
    FVar5 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
    UNLOCK();
    if (((FVar5 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x72,
                            L"Acquiring a write access while there are ongoing read or write access"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_e4 = (uint)((ulonglong)uVar7 >> 0x20);
    iVar17 = (int)uVar7;
    uVar18 = iVar17 - uStack_e4 ^ uStack_e4 >> 0xd;
    uVar11 = (-0x61c88647 - uStack_e4) - uVar18 ^ uVar18 << 8;
    uVar23 = (uStack_e4 - uVar11) - uVar18 ^ uVar11 >> 0xd;
    uVar18 = (uVar18 - uVar23) - uVar11 ^ uVar23 >> 0xc;
    uVar11 = (uVar11 - uVar18) - uVar23 ^ uVar18 << 0x10;
    uVar23 = (uVar23 - uVar11) - uVar18 ^ uVar11 >> 5;
    uVar18 = (uVar18 - uVar23) - uVar11 ^ uVar23 >> 3;
    uVar11 = (uVar11 - uVar18) - uVar23 ^ uVar18 << 10;
    uVar11 = (uVar23 - uVar11) - uVar18 ^ uVar11 >> 0xf;
    if ((int)(this->CurrentEntryPerObject)._padding_ !=
        *(int *)((longlong)&(this->CurrentEntryPerObject)._padding_ + 4)) {
      plVar8 = (longlong *)(this->CurrentEntryPerObject)._padding_;
      plVar15 = &(this->CurrentEntryPerObject)._padding_;
      if (plVar8 != (longlong *)0x0) {
        plVar15 = plVar8;
      }
      iVar21 = *(int *)((longlong)plVar15 +
                       (ulonglong)((int)(this->CurrentEntryPerObject)._padding_ - 1U & uVar11) * 4);
      if (iVar21 != -1) {
        do {
          piVar13 = (int *)((longlong)iVar21 * 0xa0 + (this->CurrentEntryPerObject)._padding_);
          if ((*piVar13 == iVar17) && (piVar13[1] == uStack_e4)) {
            if (iVar21 != -1) {
              piVar16 = piVar13 + 2;
              if (piVar13 == (int *)0x0) {
                piVar16 = (int *)0x0;
              }
              if (piVar16 != (int *)0x0) {
                *(byte *)(piVar16 + 10) =
                     (*(byte *)(piVar16 + 10) & 1) << 2 | *(byte *)(piVar16 + 10) & 0xf9;
              }
            }
            break;
          }
          iVar21 = piVar13[0x26];
        } while (iVar21 != -1);
      }
    }
    LOCK();
    pFVar1 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
    FVar5 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
    UNLOCK();
    if (((FVar5 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x7d,
                            L"Another thread asked to have a read or write access during this write access"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    LOCK();
    pFVar2 = &this->ThreadLocalMapListAccessDetector;
    aVar6 = pFVar2->AtomicValue;
    pFVar2->AtomicValue = (atomic<unsigned_int>)((int)pFVar2->AtomicValue + 1);
    UNLOCK();
    if (((((uint)aVar6 & 0xfff00000) != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x5c,L"Acquiring a read access while there is already a write access"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar24 = (this->ThreadCurrentEntryMaps).AllocatorInstance.Data;
    iVar21 = (this->ThreadCurrentEntryMaps).ArrayNum;
    pFVar3 = pFVar24 + (longlong)iVar21 * 8;
    while( true ) {
      if ((this->ThreadCurrentEntryMaps).ArrayNum != iVar21) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FVisualLogger::FVisualLoggerObjectEntryMap_*,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar24 == pFVar3) break;
      plVar8 = *(longlong **)pFVar24;
      if ((plVar8 == (longlong *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ThreadCurrentEntryMap",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                              ,0x175,L"Unexpected null map entry pointer"), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      plVar15 = plVar8 + 10;
      lVar14 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + 0x100000;
      UNLOCK();
      if ((((int)lVar14 != 0) &&
          (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                              ,0x72,
                              L"Acquiring a write access while there are ongoing read or write access"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
        plVar15 = plVar8 + 7;
        if ((longlong *)plVar8[8] != (longlong *)0x0) {
          plVar15 = (longlong *)plVar8[8];
        }
        iVar19 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar8[9] - 1U & uVar11) * 4);
        if (iVar19 != -1) {
          do {
            piVar13 = (int *)((longlong)iVar19 * 0xa0 + *plVar8);
            if ((*piVar13 == iVar17) && (piVar13[1] == uStack_e4)) {
              if (iVar19 != -1) {
                piVar16 = piVar13 + 2;
                if (piVar13 == (int *)0x0) {
                  piVar16 = (int *)0x0;
                }
                if (piVar16 != (int *)0x0) {
                  *(byte *)(piVar16 + 10) =
                       (*(byte *)(piVar16 + 10) & 1) << 2 | *(byte *)(piVar16 + 10) & 0xf9;
                }
              }
              break;
            }
            iVar19 = piVar13[0x26];
          } while (iVar19 != -1);
        }
      }
      LOCK();
      plVar8 = plVar8 + 10;
      lVar14 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -0x100000;
      UNLOCK();
      if ((((int)lVar14 != 0x100000) &&
          (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                              ,0x7d,
                              L"Another thread asked to have a read or write access during this write access"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar24 = pFVar24 + 8;
    }
    LOCK();
    pFVar2 = &this->ThreadLocalMapListAccessDetector;
    aVar6 = pFVar2->AtomicValue;
    pFVar2->AtomicValue = (atomic<unsigned_int>)((int)pFVar2->AtomicValue + -1);
    UNLOCK();
    if (((((uint)aVar6 & 0xfff00000) != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x67,
                            L"Another thread asked to have a write access during this read access"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    uVar18 = local_res18;
  } while( true );
}

// ConeLogfImpl @ 1489d2260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::ConeLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TVector<double> *param_4,
          TVector<double> *param_5,float param_6,float param_7,FColor *param_8,bool param_9,
          wchar_t *param_10)

{
  Type local_res18 [16];
  <lambda_1> local_48;
  
  local_48.Direction = param_5;
  local_48.Length = &param_6;
  local_48.Angle = &param_7;
  local_48.Verbosity = local_res18;
  local_48.Color = param_8;
  local_48.bWireframe = &param_9;
  local_res18[0] = param_3;
  local_48.Origin = param_4;
  local_48.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::ConeLogfImpl_::__l2::<lambda_1>_>
            (&local_48,param_1,param_2,param_3,param_10,&stack0x00000058);
  return;
}

// ConvexLogfImpl @ 1489d2f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::ConvexLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,FColor *param_5,
          wchar_t *param_6)

{
  Type local_res18 [16];
  <lambda_1> local_28;
  
  local_28.Verbosity = local_res18;
  local_28.Color = param_5;
  local_res18[0] = param_3;
  local_28.Points = param_4;
  local_28.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::ConvexLogfImpl_::__l2::<lambda_1>_>
            (&local_28,param_1,param_2,param_3,param_6,&stack0x00000038);
  return;
}

// CoordinateSystemLogfImpl @ 1489d2fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::CoordinateSystemLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TVector<double> *param_4,
          TRotator<double> *param_5,float param_6,FColor *param_7,ushort param_8,wchar_t *param_9)

{
  Type local_res18 [16];
  <lambda_1> local_48;
  
  local_48.AxisRot = param_5;
  local_48.Scale = &param_6;
  local_48.Verbosity = local_res18;
  local_48.Color = param_7;
  local_48.Thickness = &param_8;
  local_res18[0] = param_3;
  local_48.AxisLoc = param_4;
  local_48.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::CoordinateSystemLogfImpl_::__l2::<lambda_1>_>
            (&local_48,param_1,param_2,param_3,param_9,&stack0x00000050);
  return;
}

// CylinderLogfImpl @ 1489d58f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::CylinderLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TVector<double> *param_4,
          TVector<double> *param_5,float param_6,FColor *param_7,bool param_8,wchar_t *param_9)

{
  Type local_res18 [16];
  <lambda_1> local_48;
  
  local_48.End = param_5;
  local_48.Radius = &param_6;
  local_48.Verbosity = local_res18;
  local_48.Color = param_7;
  local_48.bWireframe = &param_8;
  local_res18[0] = param_3;
  local_48.Start = param_4;
  local_48.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::CylinderLogfImpl_::__l2::<lambda_1>_>
            (&local_48,param_1,param_2,param_3,param_9,&stack0x00000050);
  return;
}

// DiscLogfImpl @ 1489d6540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::DiscLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TVector<double> *param_4,
          TVector<double> *param_5,float param_6,FColor *param_7,ushort param_8,bool param_9,
          wchar_t *param_10)

{
  Type local_res18 [16];
  <lambda_1> local_48;
  
  local_48.UpAxis = param_5;
  local_48.Radius = &param_6;
  local_48.Verbosity = local_res18;
  local_48.Color = param_7;
  local_48.Thickness = &param_8;
  local_48.bWireframe = &param_9;
  local_res18[0] = param_3;
  local_48.Center = param_4;
  local_48.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::DiscLogfImpl_::__l2::<lambda_1>_>
            (&local_48,param_1,param_2,param_3,param_10,&stack0x00000058);
  return;
}

// DiscardRecordingToFile @ 1489d6620

void __thiscall FVisualLogger::DiscardRecordingToFile(FVisualLogger *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->bIsRecordingToFile) {
    pFVar5 = (this->OutputDevices).AllocatorInstance.Data;
    iVar2 = (this->OutputDevices).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->OutputDevices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FVisualLogDevice_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      plVar3 = *(longlong **)pFVar5;
      cVar4 = (**(code **)(*plVar3 + 0x48))(plVar3,1);
      if (cVar4 != '\0') {
        (**(code **)(*plVar3 + 0x30))(plVar3);
      }
      pFVar5 = pFVar5 + 8;
    }
    this->bIsRecordingToFile = false;
  }
  return;
}

// EventLog @ 1489da000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::EventLog
          (UObject *param_1,FVisualLogEventBase *param_2,FName param_3,FName param_4,FName param_5,
          FName param_6,FName param_7,FName param_8)

{
  EventLog(param_1,param_3,param_2,param_4,param_5,param_6,param_7,param_8);
  return;
}

// EventLog @ 1489da020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FVisualLogger::EventLog
          (UObject *param_1,FName param_2,FVisualLogEventBase *param_3,FName param_4,FName param_5,
          FName param_6,FName param_7,FName param_8)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  FName FVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VisualLog> FVar15;
  FVisualLogger *this;
  UWorld *pUVar16;
  FVisualLogEntry *this_00;
  int *piVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  wchar_t *pwVar18;
  FName *pFVar19;
  FName FVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  uint uVar23;
  double dVar24;
  FName local_res10 [2];
  FName local_res20;
  undefined1 auStackY_1b8 [32];
  FColor_u_0 local_148 [2];
  FName local_140;
  undefined8 local_138;
  FName local_130;
  FName local_120;
  FName local_118;
  LARGE_INTEGER local_110;
  FStatMessage local_108;
  FName local_f8 [2];
  FString local_e8;
  FString local_d8;
  Type local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  TBitArray<FDefaultBitArrayAllocator> local_b0;
  undefined8 uStack_90;
  void *local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  FVar15 = StatPtr_STAT_VisualLog;
  local_res10[0] = param_2;
  local_res20 = param_4;
  if (StatPtr_STAT_VisualLog == (FThreadSafeStaticStat<FStat_STAT_VisualLog>)0x0) {
    pFVar14 = ::FName::FName(local_f8,"STAT_VisualLog");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_VisualLog>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VisualLog,*pFVar14,
                        L"Visual Logging time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar15;
  bVar5 = false;
  bVar6 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_140.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                   ,0x2f8);
        bVar5 = true;
        bVar6 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar9 = true;
      goto LAB_1489da197;
    }
  }
  bVar6 = bVar10;
  bVar5 = bVar9;
  bVar9 = false;
  FVar20 = local_130;
LAB_1489da197:
  if ((param_3->Name).Data.ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(param_3->Name).Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_120,pwVar18);
  if ((((bIsRecording != 0) && (param_1 != (UObject *)0x0)) && (GEngine != (UEngine *)0x0)) &&
     ((GEngine->bDisableAILogging == 0 && ((*(uint *)&param_1->field_0x8 & 0x10) == 0)))) {
    this = Get();
    if (this->bBlockedAllCategories) {
      pFVar14 = (FName *)(this->CategoryAllowList).AllocatorInstance.Data;
      for (pFVar19 = pFVar14; pFVar19 != pFVar14 + (this->CategoryAllowList).ArrayNum;
          pFVar19 = pFVar19 + 1) {
        if (*pFVar19 == local_120) {
          if ((int)((longlong)pFVar19 - (longlong)pFVar14 >> 3) != -1) goto LAB_1489da248;
          break;
        }
      }
    }
    else {
LAB_1489da248:
      pUVar16 = ::`anonymous_namespace'::GetWorldForVisualLogger(param_1);
      if (pUVar16 == (UWorld *)0x0) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1331245518784823539>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                            ,0xf3,"*OutWorld != nullptr");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        dVar24 = GetTimeStampForObject(this,param_1);
        this_00 = GetEntryToWrite(this,param_1,dVar24,Create);
        if (this_00 != (FVisualLogEntry *)0x0) {
          ::FString::FString(&local_e8,&param_3->Name);
          ::FString::FString(&local_d8,&param_3->FriendlyDesc);
          local_c8 = param_3->Verbosity;
          local_80 = (void *)0x0;
          local_c0.Data = (FScriptContainerElement *)0x0;
          local_b8 = 0;
          local_b0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_78 = 0;
          local_70 = 1;
          local_68 = 0;
          local_60 = 0;
          pFVar3 = (this_00->Events).AllocatorInstance.Data;
          iVar1 = (this_00->Events).ArrayNum;
          local_b0._24_8_ = ___xmm_00000000ffffffff0000008000000000;
          uStack_90 = _UNK_150631d98;
          iVar11 = local_e8.Data.ArrayNum;
          for (pFVar21 = pFVar3; pFVar21 != pFVar3 + (longlong)iVar1 * 0x90;
              pFVar21 = pFVar21 + 0x90) {
            iVar2 = *(int *)(pFVar21 + 8);
            if (iVar2 == iVar11) {
              if (1 < iVar2) {
                iVar11 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)pFVar21,
                                    (wchar_t *)local_e8.Data.AllocatorInstance.Data);
                bVar10 = iVar11 == 0;
                iVar11 = local_e8.Data.ArrayNum;
                goto LAB_1489da358;
              }
LAB_1489da482:
              lVar22 = ((longlong)pFVar21 - (longlong)pFVar3) / 0x12 +
                       ((longlong)pFVar21 - (longlong)pFVar3 >> 0x3f);
              uVar13 = (int)(lVar22 >> 3) - (int)(lVar22 >> 0x3f);
              goto LAB_1489da379;
            }
            bVar10 = iVar2 + iVar11 == 1;
LAB_1489da358:
            if (bVar10) goto LAB_1489da482;
          }
          uVar13 = 0xffffffff;
LAB_1489da379:
          local_78 = 0;
          if (local_80 != (void *)0x0) {
            FMemory::Free(local_80);
          }
          uVar7 = local_b8 >> 0x20;
          local_b8 = local_b8 & 0xffffffff00000000;
          if ((int)uVar7 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,0,&local_c0,0,(int *)((longlong)&local_b8 + 4));
          }
          iVar1 = local_b0.MaxBits;
          uStack_90 = 0xffffffff;
          local_b0._24_8_ = (ulonglong)(uint)local_b0.MaxBits << 0x20;
          if (0x80 < (uint)iVar1) {
            local_b0.NumBits = 0;
            local_b0.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b0,0);
          }
          if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
          }
          if (local_c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (uVar13 == 0xffffffff) {
            uVar13 = FVisualLogEntry::AddEvent(this_00,param_3);
          }
          else {
            uVar12 = 0;
            if ((int)uVar13 < (this_00->Events).ArrayNum) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this_00->Events).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x90 + 0x78;
            *(int *)pFVar3 = *(int *)pFVar3 + 1;
          }
          uVar23 = ~uVar13 >> 0x1f;
          uVar12 = 0;
          if ((int)uVar13 < (this_00->Events).ArrayNum) {
            uVar12 = uVar23;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar8 = local_res10[0];
          pFVar3 = (this_00->Events).AllocatorInstance.Data;
          uVar12 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
          lVar22 = (longlong)(int)uVar13 * 0x90;
          piVar17 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)(pFVar3 + lVar22 + 0x28),uVar12 + FVar8.Number,local_res10);
          *piVar17 = *piVar17 + 1;
          uVar12 = 0;
          if ((int)uVar13 < (this_00->Events).ArrayNum) {
            uVar12 = uVar23;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar8 = local_res20;
          pFVar3 = (this_00->Events).AllocatorInstance.Data;
          uVar12 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
          piVar17 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)(pFVar3 + lVar22 + 0x28),uVar12 + FVar8.Number,&local_res20);
          *piVar17 = *piVar17 + 1;
          uVar12 = 0;
          if ((int)uVar13 < (this_00->Events).ArrayNum) {
            uVar12 = uVar23;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar8 = param_5;
          pFVar3 = (this_00->Events).AllocatorInstance.Data;
          uVar12 = ::GetTypeHash(param_5.ComparisonIndex.Value);
          piVar17 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)(pFVar3 + lVar22 + 0x28),uVar12 + FVar8.Number,&param_5);
          *piVar17 = *piVar17 + 1;
          uVar12 = 0;
          if ((int)uVar13 < (this_00->Events).ArrayNum) {
            uVar12 = uVar23;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar8 = param_6;
          pFVar3 = (this_00->Events).AllocatorInstance.Data;
          uVar12 = ::GetTypeHash(param_6.ComparisonIndex.Value);
          piVar17 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)(pFVar3 + lVar22 + 0x28),uVar12 + FVar8.Number,&param_6);
          *piVar17 = *piVar17 + 1;
          uVar12 = 0;
          if ((int)uVar13 < (this_00->Events).ArrayNum) {
            uVar12 = uVar23;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar8 = param_7;
          pFVar3 = (this_00->Events).AllocatorInstance.Data;
          uVar12 = ::GetTypeHash(param_7.ComparisonIndex.Value);
          piVar17 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)(pFVar3 + lVar22 + 0x28),uVar12 + FVar8.Number,&param_7);
          *piVar17 = *piVar17 + 1;
          uVar12 = 0;
          if ((int)uVar13 < (this_00->Events).ArrayNum) {
            uVar12 = uVar23;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar8 = param_8;
          pFVar3 = (this_00->Events).AllocatorInstance.Data;
          uVar12 = ::GetTypeHash(param_8.ComparisonIndex.Value);
          piVar17 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)(pFVar3 + lVar22 + 0x28),uVar12 + FVar8.Number,&param_8);
          *piVar17 = *piVar17 + 1;
          uVar12 = 0;
          if ((int)uVar13 < (this_00->Events).ArrayNum) {
            uVar12 = uVar23;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this_00->Events).AllocatorInstance.Data;
          local_118.ComparisonIndex.Value = 0;
          local_118.Number = 0;
          local_138 = 0;
          if (*(int *)(pFVar3 + lVar22 + 0x30) != *(int *)(pFVar3 + lVar22 + 0x5c)) {
            uVar13 = ::GetTypeHash((FNameEntryId)0x0);
            TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                               *)(pFVar3 + lVar22 + 0x28),uVar13,&local_118);
          }
        }
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_108.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_108.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_108.StatData.Pad[4] = '\0';
      local_108.StatData.Pad[5] = '\0';
      local_108.StatData.Pad[6] = '\0';
      local_108.StatData.Pad[7] = '\0';
      local_108.StatData.Pad[0] = local_110.s.LowPart._0_1_;
      local_108.StatData.Pad[1] = local_110.s.LowPart._1_1_;
      local_108.StatData.Pad[2] = local_110.s.LowPart._2_1_;
      local_108.StatData.Pad[3] = local_110.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_108);
      piVar17 = &this_01->ScopeCount;
      *piVar17 = *piVar17 + -1;
      if (*piVar17 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// EventLog @ 1489da920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::EventLog
          (UObject *param_1,FName param_2,FVisualLogEventBase *param_3,FVisualLogEventBase *param_4,
          FVisualLogEventBase *param_5,FVisualLogEventBase *param_6,FVisualLogEventBase *param_7,
          FVisualLogEventBase *param_8)

{
  EventLog(param_1,param_2,param_3,param_4);
  EventLog(param_1,param_2,param_5,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  EventLog(param_1,param_2,param_6,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  EventLog(param_1,param_2,param_7,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  EventLog(param_1,param_2,param_8,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  return;
}

// EventLog @ 1489daa80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::EventLog
          (UObject *param_1,FName param_2,FVisualLogEventBase *param_3,FVisualLogEventBase *param_4,
          FVisualLogEventBase *param_5,FVisualLogEventBase *param_6,FVisualLogEventBase *param_7)

{
  EventLog(param_1,param_2,param_3,param_4);
  EventLog(param_1,param_2,param_5,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  EventLog(param_1,param_2,param_6,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  EventLog(param_1,param_2,param_7,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  return;
}

// EventLog @ 1489dab90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::EventLog
          (UObject *param_1,FName param_2,FVisualLogEventBase *param_3,FVisualLogEventBase *param_4,
          FVisualLogEventBase *param_5,FVisualLogEventBase *param_6)

{
  EventLog(param_1,param_2,param_3,param_4);
  EventLog(param_1,param_2,param_5,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  EventLog(param_1,param_2,param_6,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  return;
}

// EventLog @ 1489dac50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::EventLog
          (UObject *param_1,FName param_2,FVisualLogEventBase *param_3,FVisualLogEventBase *param_4,
          FVisualLogEventBase *param_5)

{
  EventLog(param_1,param_2,param_3,param_4);
  EventLog(param_1,param_2,param_5,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  return;
}

// EventLog @ 1489dacc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::EventLog
          (UObject *param_1,FName param_2,FVisualLogEventBase *param_3,FVisualLogEventBase *param_4)

{
  EventLog(param_1,param_2,param_3,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  EventLog(param_1,param_2,param_4,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
  return;
}

// ExecuteOnLastEntryForObject @ 1489dce50

bool __thiscall
FVisualLogger::ExecuteOnLastEntryForObject
          (FVisualLogger *this,UObject *param_1,
          TFunctionRef<void___cdecl(FVisualLogEntry_&)> *param_2)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FPlatformRWLock *SRWLock;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FVisualLoggerObjectEntryMap *this_00;
  FVisualLogEntry *pFVar7;
  FWeakObjectPtr local_res8;
  UObject *local_res20;
  FWeakObjectPtr local_28 [2];
  
  SRWLock = &this->RedirectRWLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pUVar6 = FindRedirectionInternal(this,param_1);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (pUVar6 != (UObject *)0x0) {
    this_00 = GetThreadCurrentEntryMap(this);
    LOCK();
    pFVar1 = &this_00->EntriesAccessDetector;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
    UNLOCK();
    if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = pUVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    local_28[0] = local_res8;
    pFVar7 = TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
             ::Find((TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
                     *)this_00,(FObjectKey *)local_28);
    if (pFVar7 != (FVisualLogEntry *)0x0) {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar7);
      LOCK();
      pFVar1 = &this_00->EntriesAccessDetector;
      FVar2 = *pFVar1;
      *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
      UNLOCK();
      if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
         (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x7d,
                           L"Another thread asked to have a read or write access during this write access"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      return true;
    }
    LOCK();
    pFVar1 = &this_00->EntriesAccessDetector;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
    UNLOCK();
    if ((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
  }
  return false;
}

// FindRedirection @ 1489e2b20

UObject * __cdecl FVisualLogger::FindRedirection(UObject *param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  FVisualLogger *this;
  UObject *pUVar3;
  
  this = Get();
  SRWLock = &this->RedirectRWLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pUVar3 = FindRedirectionInternal(this,param_1);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pUVar3;
}

// FindRedirectionInternal @ 1489e2bd0

UObject * __thiscall FVisualLogger::FindRedirectionInternal(FVisualLogger *this,UObject *param_1)

{
  bool bVar1;
  FObjectKey FVar2;
  FWeakObjectPtr *this_00;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FObjectKey local_res20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  while( true ) {
    FVar2 = (FObjectKey)FWeakObjectPtr::Get(&local_res10,true);
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    if (FVar2 != (FObjectKey)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar2);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res20 = FVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
      local_res20.ObjectIndex = local_res18.ObjectIndex;
      local_res20.ObjectSerialNumber = local_res18.ObjectSerialNumber;
    }
    this_00 = &TMapBase<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
               ::Find((TMapBase<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
                       *)&this->ChildToOwnerMap,&local_res20)->WeakPtr;
    if (this_00 == (FWeakObjectPtr *)0x0) goto LAB_1489e2ccb;
    bVar1 = FWeakObjectPtr::IsValid(this_00);
    if (!bVar1) break;
    local_res10 = *this_00;
  }
  this->bContainsInvalidRedirects = true;
LAB_1489e2ccb:
  pUVar3 = FWeakObjectPtr::Get(&local_res10,true);
  return pUVar3;
}

// Flush @ 1489e30b0

void __thiscall FVisualLogger::Flush(FVisualLogger *this)

{
  FPlatformRWLock *SRWLock;
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  longlong *plVar2;
  ulonglong uVar3;
  FRWFallbackSafeAccessDetectorDefinition FVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  FObjectKey *pFVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  SRWLock = &this->EntryRWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  FlushThreadsEntries(this);
  LOCK();
  pFVar1 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
  FVar4 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  if (((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar11 = 0;
  plVar2 = &(this->CurrentEntryPerObject)._padding_;
  iVar5 = (int)(this->CurrentEntryPerObject)._padding_;
  uVar8 = 1;
  iVar14 = 0;
  iVar9 = 0;
  if (iVar5 != 0) {
    plVar12 = (longlong *)(this->CurrentEntryPerObject)._padding_;
    if (plVar12 == (longlong *)0x0) {
      plVar12 = plVar2;
    }
    uVar15 = (uint)*plVar12;
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      iVar9 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1489e31df;
      uVar15 = *(uint *)((longlong)plVar12 + lVar10 * 4 + 4);
    }
    uVar8 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar14;
    if (iVar5 < iVar9) {
      iVar9 = iVar5;
    }
  }
LAB_1489e31df:
  uVar15 = (uint)(this->CurrentEntryPerObject)._padding_;
  uVar16 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar11);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar15 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       (int)(this->CurrentEntryPerObject)._padding_ -
                       *(int *)((longlong)&(this->CurrentEntryPerObject)._padding_ + 4));
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar2;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = (uint)(this->CurrentEntryPerObject)._padding_;
  if (uVar15 != uVar8) {
    plVar12 = (longlong *)(this->CurrentEntryPerObject)._padding_;
    if (plVar12 == (longlong *)0x0) {
      plVar12 = plVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)((longlong)plVar12 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1489e3300;
      uVar15 = *(uint *)((longlong)plVar12 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar15 = local_res18 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_1489e3300:
  while( true ) {
    if ((int)(this->CurrentEntryPerObject)._padding_ -
        *(int *)((longlong)&(this->CurrentEntryPerObject)._padding_ + 4) != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FObjectKey,FVisualLogEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar2)) break;
    pFVar13 = (FObjectKey *)
              ((longlong)TStack_60.CurrentBitIndex * 0xa0 + (this->CurrentEntryPerObject)._padding_)
    ;
    if ((pFVar13[6].ObjectIndex & 0x10) != 0) {
      FlushEntry(this,(FVisualLogEntry *)(pFVar13 + 1),pFVar13);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  LOCK();
  pFVar1 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
  FVar4 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if ((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
     ((UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false &&
      (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x7d,
                          L"Another thread asked to have a read or write access during this write access"
                         ), bVar7)))) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// FlushEntry @ 1489e3770

void __thiscall
FVisualLogger::FlushEntry(FVisualLogger *this,FVisualLogEntry *param_1,FObjectKey *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined1 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  UObject *pUVar7;
  ulonglong uVar8;
  FObjectNames *pFVar9;
  FObjectNames *pFVar10;
  FObjectNames *pFVar11;
  byte bVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  FObjectKey *local_res18;
  FWeakObjectPtr local_res20;
  
  local_res18 = param_2;
  if (param_1->bIsInitialized == '\0') {
    `FVisualLogger::FlushEntry'::__l2::<lambda_1>::operator()(local_res8);
  }
  local_res20.ObjectIndex = param_2->ObjectIndex;
  local_res20.ObjectSerialNumber = param_2->ObjectSerialNumber;
  pUVar7 = FWeakObjectPtr::Get(&local_res20,true);
  pFVar13 = (this->OutputDevices).AllocatorInstance.Data;
  local_res10 = (this->OutputDevices).ArrayNum;
  uVar8 = (ulonglong)(int)local_res10;
  pFVar2 = pFVar13 + uVar8 * 8;
  while( true ) {
    if ((this->OutputDevices).ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<FVisualLogDevice_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar13 == pFVar2) break;
    plVar4 = *(longlong **)pFVar13;
    pcVar5 = *(code **)(*plVar4 + 8);
    pFVar9 = TMapBase<FObjectKey,FVisualLogger::FObjectNames,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>_>
             ::FindChecked((TMapBase<FObjectKey,FVisualLogger::FObjectNames,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>_>
                            *)&this->ObjectToNamesMap,param_2);
    pFVar10 = TMapBase<FObjectKey,FVisualLogger::FObjectNames,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>_>
              ::FindChecked((TMapBase<FObjectKey,FVisualLogger::FObjectNames,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>_>
                             *)&this->ObjectToNamesMap,param_2);
    pFVar11 = TMapBase<FObjectKey,FVisualLogger::FObjectNames,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>_>
              ::FindChecked((TMapBase<FObjectKey,FVisualLogger::FObjectNames,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>_>
                             *)&this->ObjectToNamesMap,local_res18);
    (*pcVar5)(plVar4,pUVar7,pFVar11,&pFVar10->DisplayName,&pFVar9->ClassName,param_1);
    uVar8 = (ulonglong)local_res10;
    pFVar13 = pFVar13 + 8;
    param_2 = local_res18;
  }
  uVar3 = param_1->field_0x28;
  (param_1->Location).field0_0x0._s_0.X = 0.0;
  (param_1->Location).field0_0x0._s_0.Y = 0.0;
  (param_1->Location).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&param_1->field_0x28 = 0;
  (param_1->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->Events).ArrayNum = 0;
  (param_1->Events).ArrayMax = 0;
  (param_1->LogLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->LogLines).ArrayNum = 0;
  (param_1->LogLines).ArrayMax = 0;
  (param_1->Status).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->Status).ArrayNum = 0;
  (param_1->Status).ArrayMax = 0;
  (param_1->ElementsToDraw).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->ElementsToDraw).ArrayNum = 0;
  (param_1->ElementsToDraw).ArrayMax = 0;
  (param_1->HistogramSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->HistogramSamples).ArrayNum = 0;
  (param_1->HistogramSamples).ArrayMax = 0;
  (param_1->DataBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->DataBlocks).ArrayNum = 0;
  (param_1->DataBlocks).ArrayMax = 0;
  param_1->TimeStamp = -1.0;
  param_1->WorldTimeStamp = -1.0;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->Location).field0_0x0._s_0.Y = (double)uVar6;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_1->bPassedClassAllowList = '\0';
  param_1->bIsInitialized = '\0';
  param_1->bIsLocationValid = '\0';
  param_1->bIsAllowedToLog = '\0';
  param_1->bPassedObjectAllowList = '\0';
  (param_1->Location).field0_0x0._s_0.Z = (double)uVar6;
  (param_1->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->Events).ArrayNum = 0;
  (param_1->Events).ArrayMax = 0;
  (param_1->LogLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->LogLines).ArrayNum = 0;
  (param_1->LogLines).ArrayMax = 0;
  (param_1->Status).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->Status).ArrayNum = 0;
  (param_1->Status).ArrayMax = 0;
  (param_1->ElementsToDraw).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->ElementsToDraw).ArrayNum = 0;
  (param_1->ElementsToDraw).ArrayMax = 0;
  (param_1->HistogramSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->HistogramSamples).ArrayNum = 0;
  (param_1->HistogramSamples).ArrayMax = 0;
  (param_1->DataBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->DataBlocks).ArrayNum = 0;
  (param_1->DataBlocks).ArrayMax = 0;
  bVar12 = (param_1->bPassedClassAllowList ^ param_1->bPassedClassAllowList) & 1 ^
           param_1->field_0x28;
  bVar12 = (bVar12 ^ uVar3) & 2 ^ bVar12;
  param_1->field_0x28 = (bVar12 ^ uVar3) & 4 ^ bVar12;
  return;
}

// FlushThreadsEntries @ 1489e3c40

void __thiscall FVisualLogger::FlushThreadsEntries(FVisualLogger *this)

{
  uint *puVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  FRWAccessDetector *pFVar3;
  FRWFallbackSafeAccessDetectorDefinition *pFVar4;
  atomic<unsigned_int> aVar5;
  FRWFallbackSafeAccessDetectorDefinition FVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  code *pcVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  bool bVar13;
  UObject *pUVar14;
  FVisualLogEntry *pFVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  uint uVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  FWeakObjectPtr local_e8;
  FScriptContainerElement *local_e0;
  int local_d8;
  FScriptContainerElement *local_d0;
  longlong *local_c8;
  int iStack_c0;
  uint uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  LOCK();
  pFVar3 = &this->ThreadLocalMapListAccessDetector;
  aVar5 = pFVar3->AtomicValue;
  pFVar3->AtomicValue = (atomic<unsigned_int>)((int)pFVar3->AtomicValue + 1);
  UNLOCK();
  if (((((uint)aVar5 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  LOCK();
  pFVar4 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
  FVar6 = *pFVar4;
  *pFVar4 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar4 + 0x100000);
  UNLOCK();
  if (((FVar6 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x72,
                          L"Acquiring a write access while there are ongoing read or write access"),
     bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_res18 = (this->ThreadCurrentEntryMaps).ArrayNum;
  uVar16 = (ulonglong)(int)local_res18;
  pFVar20 = (this->ThreadCurrentEntryMaps).AllocatorInstance.Data;
  local_d0 = pFVar20 + uVar16 * 8;
  do {
    pFVar11 = local_d0;
    local_e0 = pFVar20;
    if ((this->ThreadCurrentEntryMaps).ArrayNum != (int)uVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVisualLogger::FVisualLoggerObjectEntryMap_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar20 == pFVar11) {
      LOCK();
      pFVar4 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
      FVar6 = *pFVar4;
      *pFVar4 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar4 + -0x100000);
      UNLOCK();
      if (((FVar6 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
          (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                              ,0x7d,
                              L"Another thread asked to have a read or write access during this write access"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      LOCK();
      pFVar3 = &this->ThreadLocalMapListAccessDetector;
      aVar5 = pFVar3->AtomicValue;
      pFVar3->AtomicValue = (atomic<unsigned_int>)((int)pFVar3->AtomicValue + -1);
      UNLOCK();
      if (((((uint)aVar5 & 0xfff00000) != 0) &&
          (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                              ,0x67,
                              L"Another thread asked to have a write access during this read access"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      return;
    }
    plVar9 = *(longlong **)pFVar20;
    if ((plVar9 == (longlong *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ThreadCurrentEntryMap",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                            ,0x292,L"Unexpected null map entry pointer"), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    LOCK();
    puVar1 = (uint *)(plVar9 + 10);
    uVar22 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((((uVar22 & 0xfff00000) != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x5c,L"Acquiring a read access while there is already a write access"),
       bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar7 = (int)plVar9[5];
    pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar9 + 2);
    iStack_c0 = 0;
    local_a8 = 0;
    uStack_bc = 1;
    iStack_ac = 0;
    if (iVar7 != 0) {
      pTVar23 = pTVar2;
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
      }
      uVar22 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
      while (uVar22 == 0) {
        lVar17 = (longlong)iStack_c0;
        local_a8 = local_a8 + 0x20;
        iStack_c0 = iStack_c0 + 1;
        iStack_ac = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_1489e3e1d;
        uVar22 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar17 * 4 + 4);
      }
      uStack_bc = -uVar22 & uVar22;
      uVar16 = (ulonglong)uStack_bc * 2 + 1;
      lVar17 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_res20 = (int)lVar17;
      iStack_ac = local_res20 + -1 + local_a8;
      if (iVar7 < iStack_ac) {
        iStack_ac = iVar7;
      }
    }
LAB_1489e3e1d:
    uVar22 = *(uint *)(plVar9 + 5);
    uStack_a4 = local_4c;
    uVar21 = uVar22 & 0xffffffe0;
    iStack_a0 = (int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34);
    TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
    uStack_b0 = 0xffffffff;
    TStack_90.CurrentBitIndex = iStack_ac;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar22 >> 5;
    TStack_90._28_4_ = local_4c;
    TStack_90.BaseBitIndex = local_a8;
    uStack_70 = CONCAT44(uStack_9c,iStack_a0);
    local_c8 = plVar9;
    local_b8 = pTVar2;
    local_98 = plVar9;
    TStack_90.Array = pTVar2;
    if ((((int)uVar22 < 0) || (iVar7 < (int)uVar22)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar8 = *(uint *)(plVar9 + 5);
    if (uVar22 != uVar8) {
      pTVar23 = pTVar2;
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) &
               *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
      while (uVar22 == 0) {
        lVar17 = (longlong)iVar19;
        uVar21 = uVar21 + 0x20;
        iVar19 = iVar19 + 1;
        uVar22 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_1489e3f20;
        uVar22 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar17 * 4 + 4);
      }
      uVar16 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_d8 = (int)lVar17;
      uVar22 = local_d8 + -1 + uVar21;
      if ((int)uVar8 < (int)uVar22) {
        uVar22 = uVar8;
      }
    }
LAB_1489e3f20:
    while( true ) {
      plVar12 = local_98;
      if ((int)local_98[1] - *(int *)((longlong)local_98 + 0x34) != (int)uStack_70) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FObjectKey,FVisualLogEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_90.CurrentBitIndex == uVar22) && (TStack_90.Array == pTVar2)) &&
         (plVar12 == plVar9)) break;
      lVar17 = *plVar12;
      lVar18 = (longlong)TStack_90.CurrentBitIndex * 0xa0;
      if ((*(byte *)(lVar18 + 0x30 + lVar17) & 0x10) != 0) {
        local_e8.ObjectIndex = *(int *)(lVar18 + lVar17);
        local_e8.ObjectSerialNumber = *(int *)(lVar18 + 4 + lVar17);
        pUVar14 = FWeakObjectPtr::Get(&local_e8,true);
        pFVar15 = GetEntryToWriteInternal(this,pUVar14,*(double *)(lVar18 + lVar17 + 8),Create);
        if (pFVar15 != (FVisualLogEntry *)0x0) {
          FVisualLogEntry::MoveTo((FVisualLogEntry *)(lVar18 + lVar17 + 8),pFVar15);
        }
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
    LOCK();
    puVar1 = (uint *)(plVar9 + 10);
    uVar22 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((((uVar22 & 0xfff00000) != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x67,
                            L"Another thread asked to have a write access during this read access"),
       bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar16 = (ulonglong)local_res18;
    pFVar20 = local_e0 + 8;
  } while( true );
}

// Get @ 1489e58d0

FVisualLogger * __cdecl FVisualLogger::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVisualLogger(&GVisLog);
      atexit(`FVisualLogger::Get'::__l2::_dynamic_atexit_destructor_for__GVisLog__);
      _Init_thread_footer(&::_TSS0);
      return &GVisLog;
    }
  }
  return &GVisLog;
}

// GetEntryToWrite @ 1489e84c0

FVisualLogEntry * __thiscall
FVisualLogger::GetEntryToWrite
          (FVisualLogger *this,UObject *param_1,double param_2,ECreateIfNeeded param_3)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FPlatformRWLock *pFVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  byte bVar7;
  FVisualLogEntry *pFVar8;
  UObject *pUVar9;
  FVisualLoggerObjectEntryMap *this_00;
  FVisualLogEntry *pFVar10;
  ECreateIfNeeded EVar11;
  TKeyInitializer<FObjectKey_&&> local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  FWeakObjectPtr local_98;
  FVisualLoggerObjectEntryMap *local_90;
  UObject *local_88;
  FWeakObjectPtr local_80;
  UObject *local_78;
  FWeakObjectPtr local_70;
  UObject *local_68;
  FWeakObjectPtr local_60;
  FWeakObjectPtr *local_58 [4];
  
  pFVar2 = &this->RedirectRWLock;
  local_res10 = param_1;
  if ((pFVar2 == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FVisualLogEntry *)(*pcVar4)();
    return pFVar8;
  }
  AcquireSRWLockShared((PSRWLOCK)pFVar2);
  pUVar9 = FindRedirectionInternal(this,param_1);
  if (pFVar2 != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)pFVar2);
  }
  if (pUVar9 == (UObject *)0x0) {
    return (FVisualLogEntry *)0x0;
  }
  this_00 = GetThreadCurrentEntryMap(this);
  LOCK();
  pFVar1 = &this_00->EntriesAccessDetector;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  local_90 = this_00;
  if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FVisualLogEntry *)(*pcVar4)();
    return pFVar8;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_a8.ObjectIndex = 0;
  local_a8.ObjectSerialNumber = 0;
  local_88 = pUVar9;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_88);
  local_80 = local_a8;
  pFVar8 = TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
           ::Find((TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
                   *)this_00,(FObjectKey *)&local_80);
  if (pFVar8 == (FVisualLogEntry *)0x0) {
    if (param_3 == Create) {
LAB_1489e889a:
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      local_98.ObjectIndex = 0;
      local_98.ObjectSerialNumber = 0;
      local_68 = pUVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_68);
      local_60 = local_98;
      local_58[0] = &local_60;
      TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FObjectKey_&&>_>
                ((TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                  *)this_00,&local_res8,(bool *)local_58);
      pFVar8 = (FVisualLogEntry *)(this_00->_padding_ + (longlong)(int)local_res8.Key * 0xa0 + 8);
      CalculateEntryAllowLogging(this,pFVar8,pUVar9,local_res10);
      bVar7 = (byte)pFVar8->field_0x28 >> 2;
      goto LAB_1489e892b;
    }
    pFVar2 = &this->EntryRWLock;
    if ((pFVar2 == (FPlatformRWLock *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FVisualLogEntry *)(*pcVar4)();
      return pFVar8;
    }
    AcquireSRWLockShared((PSRWLOCK)pFVar2);
    LOCK();
    pFVar1 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
    FVar3 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
    UNLOCK();
    if (((((uint)FVar3 & 0xfff00000) != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x5c,L"Acquiring a read access while there is already a write access"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FVisualLogEntry *)(*pcVar4)();
      return pFVar8;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    local_a0.ObjectIndex = 0;
    local_a0.ObjectSerialNumber = 0;
    local_78 = pUVar9;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_78);
    local_70 = local_a0;
    pFVar8 = TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
             ::Find((TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
                     *)&this->CurrentEntryPerObject,(FObjectKey *)&local_70);
    EVar11 = Create;
    if (pFVar8 == (FVisualLogEntry *)0x0) {
      EVar11 = param_3;
    }
    LOCK();
    pFVar1 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
    FVar3 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
    UNLOCK();
    if (((((uint)FVar3 & 0xfff00000) != 0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x67,
                           L"Another thread asked to have a write access during this read access"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FVisualLogEntry *)(*pcVar4)();
      return pFVar8;
    }
    if (pFVar2 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)pFVar2);
    }
    this_00 = local_90;
    if (EVar11 == Create) goto LAB_1489e889a;
  }
  else {
    if ((pFVar8->bIsAllowedToLog != '\0') && (param_3 == Create)) {
      if ((pFVar8->bIsInitialized != '\0') &&
         (pFVar8->TimeStamp <= param_2 && param_2 != pFVar8->TimeStamp)) {
        pFVar2 = &this->EntryRWLock;
        if ((pFVar2 == (FPlatformRWLock *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                               ,0x43,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FVisualLogEntry *)(*pcVar4)();
          return pFVar8;
        }
        AcquireSRWLockExclusive((PSRWLOCK)pFVar2);
        LOCK();
        pFVar1 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
        FVar3 = *pFVar1;
        *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
        UNLOCK();
        if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
            (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                               ,0x72,
                               L"Acquiring a write access while there are ongoing read or write access"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FVisualLogEntry *)(*pcVar4)();
          return pFVar8;
        }
        pFVar10 = GetEntryToWriteInternal(this,pUVar9,pFVar8->TimeStamp,Create);
        if (pFVar10 != (FVisualLogEntry *)0x0) {
          FVisualLogEntry::MoveTo(pFVar8,pFVar10);
        }
        LOCK();
        pFVar1 = &(this->CurrentEntryPerObject).EntriesAccessDetector;
        FVar3 = *pFVar1;
        *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
        UNLOCK();
        if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
            (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                               ,0x7d,
                               L"Another thread asked to have a read or write access during this write access"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FVisualLogEntry *)(*pcVar4)();
          return pFVar8;
        }
        if (pFVar2 != (FPlatformRWLock *)0x0) {
          ReleaseSRWLockExclusive((PSRWLOCK)pFVar2);
        }
      }
      bVar7 = ~pFVar8->bIsInitialized;
LAB_1489e892b:
      if ((bVar7 & 1) != 0) {
        if ((pFVar8 == (FVisualLogEntry *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ThreadCurrentEntry != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                               ,0x1e3,
                               L"bInitializeEntry can only be true when CurrentEntry is valid."),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FVisualLogEntry *)(*pcVar4)();
          return pFVar8;
        }
        FVisualLogEntry::Reset(pFVar8);
        pFVar8->bIsInitialized = '\x01';
        auVar5._8_4_ = SUB84(param_2,0);
        auVar5._0_8_ = param_2;
        auVar5._12_4_ = (int)((ulonglong)param_2 >> 0x20);
        pFVar8->TimeStamp = param_2;
        pFVar8->WorldTimeStamp = (double)auVar5._8_8_;
      }
      if (pFVar8 == (FVisualLogEntry *)0x0) goto LAB_1489e897e;
    }
    if (pFVar8->bIsAllowedToLog != '\0') {
      this->bIsFlushRequired = true;
      goto LAB_1489e8980;
    }
  }
LAB_1489e897e:
  pFVar8 = (FVisualLogEntry *)0x0;
LAB_1489e8980:
  LOCK();
  pFVar1 = &this_00->EntriesAccessDetector;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if (((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FVisualLogEntry *)(*pcVar4)();
    return pFVar8;
  }
  return pFVar8;
}

// GetEntryToWrite @ 1489e89f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVisualLogEntry * __cdecl FVisualLogger::GetEntryToWrite(UObject *param_1,FLogCategoryBase *param_2)

{
  bool bVar1;
  FVisualLogger *this;
  FVisualLogEntry *pFVar2;
  double dVar3;
  
  if ((((bIsRecording != 0) && (param_1 != (UObject *)0x0)) && (GEngine != (UEngine *)0x0)) &&
     (((GEngine->bDisableAILogging == 0 && ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) &&
      ((this = Get(), !this->bBlockedAllCategories ||
       (bVar1 = IsCategoryAllowed(this,&param_2->CategoryName), bVar1)))))) {
    dVar3 = GetTimeStampForObject(this,param_1);
    pFVar2 = GetEntryToWrite(this,param_1,dVar3,Create);
    if (pFVar2 != (FVisualLogEntry *)0x0) {
      return pFVar2;
    }
  }
  return (FVisualLogEntry *)0x0;
}

// GetEntryToWriteInternal @ 1489e8a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVisualLogEntry * __thiscall
FVisualLogger::GetEntryToWriteInternal
          (FVisualLogger *this,UObject *param_1,double param_2,ECreateIfNeeded param_3)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  bool bVar6;
  ENetMode EVar7;
  FVisualLogEntry *pFVar8;
  UWorld *this_00;
  FWeakObjectPtr *pFVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  longlong *plVar12;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar13;
  FObjectNames *pFVar14;
  ForAnyElementType FVar15;
  FWeakObjectPtr *this_02;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined4 local_res10 [2];
  TKeyInitializer<FObjectKey_&&> local_258;
  FWeakObjectPtr local_250;
  FWeakObjectPtr local_248;
  FWeakObjectPtr local_240;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  FWeakObjectPtr local_220;
  FWeakObjectPtr local_218;
  FString local_210;
  TPairInitializer<FObjectKey_&&,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_&&> local_200;
  FWeakObjectPtr local_1f0;
  UObject *local_1e8;
  FWeakObjectPtr local_1e0;
  UObject *local_1d8;
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr *local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  UObject *local_1a8;
  FWeakObjectPtr local_1a0;
  UWorld *local_198;
  UObject *local_190;
  FWeakObjectPtr local_188;
  UObject *local_180;
  FWeakObjectPtr local_178;
  UObject *local_170;
  FWeakObjectPtr local_168;
  undefined1 local_160 [16];
  int local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FWeakObjectPtr *local_f8;
  FName *local_f0;
  FWeakObjectPtr *local_e8;
  FWeakObjectPtr *local_e0;
  FName local_d8;
  FName local_d0;
  undefined8 local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  double local_50;
  
  bVar6 = false;
  local_res10[0] = 0;
  if (param_1 == (UObject *)0x0) {
    return (FVisualLogEntry *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_240.ObjectIndex = 0;
  local_240.ObjectSerialNumber = 0;
  local_200.Value = (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_240,(FObjectPtr)&local_200.Value);
  local_1f0 = local_240;
  pFVar8 = TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
           ::Find((TMapBase<FObjectKey,FVisualLogEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>_>
                   *)&this->CurrentEntryPerObject,(FObjectKey *)&local_1f0);
  if (pFVar8 == (FVisualLogEntry *)0x0) {
    if (param_3 != Create) {
      return (FVisualLogEntry *)0x0;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_230.ObjectIndex = 0;
    local_230.ObjectSerialNumber = 0;
    local_1d8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_1d8);
    local_1d0 = local_230;
    local_1c8 = &local_1d0;
    TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FObjectKey_&&>_>
              ((TSet<TTuple<FObjectKey,FVisualLogEntry>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogEntry,0>,FDefaultSetAllocator>
                *)&this->CurrentEntryPerObject,&local_258,(bool *)&local_1c8);
    pFVar8 = (FVisualLogEntry *)
             ((this->CurrentEntryPerObject)._padding_ + (longlong)(int)local_258.Key * 0xa0 + 8);
    if ((this->bForceUniqueLogNames) && (UE::VisLog::Private::UniqueLogPrefix.Data.ArrayNum < 2)) {
      ::FString::PrintfImpl(&local_210,L"[%d] ");
      if (UE::VisLog::Private::UniqueLogPrefix.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(UE::VisLog::Private::UniqueLogPrefix.Data.AllocatorInstance.Data);
      }
      UE::VisLog::Private::UniqueLogPrefix.Data.AllocatorInstance.Data =
           local_210.Data.AllocatorInstance.Data;
      UE::VisLog::Private::UniqueLogPrefix.Data.ArrayNum = local_210.Data.ArrayNum;
      UE::VisLog::Private::UniqueLogPrefix.Data.ArrayMax = local_210.Data.ArrayMax;
      local_210.Data.ArrayNum = 0;
      local_210.Data.ArrayMax = 0;
      local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    this_00 = ::`anonymous_namespace'::GetWorldForVisualLogger(param_1);
    if ((this_00 == (UWorld *)0x0) ||
       (EVar7 = UWorld::InternalGetNetMode(this_00), EVar7 == NM_Standalone)) {
      bVar6 = true;
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_b0,(UObject *)0x0,None);
    bVar16 = !bVar6;
    if (bVar16) {
      GetDebugStringForWorld(&local_c0,this_00);
      ::FString::PrintfImpl(&local_148,L"(%s) ");
    }
    ::FString::PrintfImpl((FString *)(local_160 + 8),L"%s%s%s");
    pFVar14 = (FObjectNames *)L"";
    if (local_150 != 0) {
      pFVar14 = (FObjectNames *)local_160._8_8_;
    }
    ::FName::FName(&local_1b8,(wchar_t *)pFVar14);
    if ((FObjectNames *)local_160._8_8_ != (FObjectNames *)0x0) {
      FMemory::Free((void *)local_160._8_8_);
    }
    if ((bVar16) && (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if ((bVar16) && (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    bVar16 = this->bForceUniqueLogNames;
    if (bVar16) {
      ::FString::PrintfImpl(&local_108,L" [%d]");
    }
    local_1c0.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_1c0.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_1c0,&local_118);
    bVar6 = !bVar6;
    if (bVar6) {
      GetDebugStringForWorld(&local_a0,this_00);
      ::FString::PrintfImpl(&local_128,L"(%s) ");
    }
    ::FString::PrintfImpl(&local_138,L"%s%s%s%s");
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar15.Data = local_138.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_1b0,(wchar_t *)FVar15.Data);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if ((bVar6) && (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if ((bVar6) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if ((bVar16) && (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    local_d8 = local_1b8;
    local_d0 = local_1b0;
    local_c8 = *(undefined8 *)(*(longlong *)&param_1->field_0x10 + 0x18);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_228.ObjectIndex = 0;
    local_228.ObjectSerialNumber = 0;
    local_1a8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_1a8);
    local_1a0 = local_228;
    local_f8 = &local_1a0;
    local_f0 = &local_d8;
    TSet<TTuple<FObjectKey,FVisualLogger::FObjectNames>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FObjectKey_&&,FVisualLogger::FObjectNames_&&>_>
              ((TSet<TTuple<FObjectKey,FVisualLogger::FObjectNames>,TDefaultMapHashableKeyFuncs<FObjectKey,FVisualLogger::FObjectNames,0>,FDefaultSetAllocator>
                *)&this->ObjectToNamesMap,
               (TPairInitializer<FObjectKey_&&,FVisualLogger::FObjectNames_&&> *)local_160,
               (bool *)&local_f8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_218.ObjectIndex = 0;
    local_218.ObjectSerialNumber = 0;
    local_198 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_198);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_220.ObjectIndex = 0;
    local_220.ObjectSerialNumber = 0;
    local_190 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_190);
    local_188 = local_220;
    local_e0 = &local_218;
    local_e8 = &local_188;
    TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FObjectKey_&&,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)&this->ObjectToWorldMap,&local_200,(bool *)&local_e8);
    CalculateEntryAllowLogging(this,pFVar8,param_1,param_1);
    bVar5 = (byte)pFVar8->field_0x28 >> 2;
  }
  else {
    if ((pFVar8->bIsAllowedToLog == '\0') || (param_3 != Create)) goto LAB_1489e93cc;
    if ((pFVar8->bIsInitialized != '\0') &&
       (pFVar8->TimeStamp <= param_2 && param_2 != pFVar8->TimeStamp)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      local_238.ObjectIndex = 0;
      local_238.ObjectSerialNumber = 0;
      local_1e8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(&local_238,(FObjectPtr)&local_1e8);
      local_1e0 = local_238;
      FlushEntry(this,pFVar8,(FObjectKey *)&local_1e0);
    }
    bVar5 = ~pFVar8->bIsInitialized;
  }
  if ((bVar5 & 1) == 0) goto LAB_1489e93cc;
  FVisualLogEntry::Reset(pFVar8);
  pFVar8->bIsInitialized = '\x01';
  auVar4._8_4_ = SUB84(param_2,0);
  auVar4._0_8_ = param_2;
  auVar4._12_4_ = (int)((ulonglong)param_2 >> 0x20);
  pFVar8->TimeStamp = param_2;
  pFVar8->WorldTimeStamp = (double)auVar4._8_8_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_250.ObjectIndex = 0;
  local_250.ObjectSerialNumber = 0;
  local_180 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_250,(FObjectPtr)&local_180);
  local_178 = local_250;
  pFVar9 = &TMapBase<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>_>
            ::Find((TMapBase<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>_>
                    *)&this->ObjectToWorldMap,(FObjectKey *)&local_178)->WeakPtr;
  if ((pFVar9 != (FWeakObjectPtr *)0x0) &&
     (pUVar10 = FWeakObjectPtr::Get(pFVar9), pUVar10 != (UObject *)0x0)) {
    pFVar8->WorldTimeStamp = *(double *)&pUVar10[0x39].field_0x10;
  }
  pUVar11 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar11->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar11->_padding_)) {
    pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar11->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar11->_padding_)) {
      pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar1 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
         (pUVar10 = param_1,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar11->_padding_)) {
        pUVar10 = (UObject *)0x0;
      }
      if (pUVar10 != (UObject *)0x0) {
        local_78 = *(double *)&pUVar10[0xd].field_0x8;
        dStack_70 = *(double *)&pUVar10[0xd].field_0x10;
        local_68 = *(double *)&pUVar10[0xd].field_0x18;
        (pFVar8->Location).field0_0x0._s_0.X = local_78;
        (pFVar8->Location).field0_0x0._s_0.Y = dStack_70;
        (pFVar8->Location).field0_0x0._s_0.Z = local_68;
        goto LAB_1489e9292;
      }
      if (*(longlong *)&param_1[4].field_0x8 != 0) {
        lVar2 = *(longlong *)(*(longlong *)&param_1[4].field_0x8 + 0x1b8);
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (lVar2 != 0) {
          local_50 = *(double *)(lVar2 + 0x220);
          local_60 = *(undefined4 *)(lVar2 + 0x210);
          uStack_5c = *(undefined4 *)(lVar2 + 0x214);
          uStack_58 = *(undefined4 *)(lVar2 + 0x218);
          uStack_54 = *(undefined4 *)(lVar2 + 0x21c);
          uVar17 = local_60;
          uVar18 = uStack_5c;
          uVar19 = uStack_58;
          uVar20 = uStack_54;
          uVar21 = local_50;
        }
        goto LAB_1489e9289;
      }
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xb);
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar2 != 0) {
      local_80 = *(double *)(lVar2 + 0x220);
      local_90 = *(undefined4 *)(lVar2 + 0x210);
      uStack_8c = *(undefined4 *)(lVar2 + 0x214);
      uStack_88 = *(undefined4 *)(lVar2 + 0x218);
      uStack_84 = *(undefined4 *)(lVar2 + 0x21c);
      uVar17 = local_90;
      uVar18 = uStack_8c;
      uVar19 = uStack_88;
      uVar20 = uStack_84;
      uVar21 = local_80;
    }
LAB_1489e9289:
    *(undefined4 *)&(pFVar8->Location).field0_0x0 = uVar17;
    *(undefined4 *)((longlong)&(pFVar8->Location).field0_0x0 + 4) = uVar18;
    *(undefined4 *)((longlong)&(pFVar8->Location).field0_0x0 + 8) = uVar19;
    *(undefined4 *)((longlong)&(pFVar8->Location).field0_0x0 + 0xc) = uVar20;
    (pFVar8->Location).field0_0x0._s_0.Z = (double)uVar21;
LAB_1489e9292:
    pFVar8->bIsLocationValid = '\x01';
  }
  SRWLock = &this->RedirectRWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FVisualLogEntry *)(*pcVar3)();
    return pFVar8;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  this_01 = GetRedirectionMap(param_1);
  pUVar11 = Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
  plVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar11);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12,pFVar8);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_248.ObjectIndex = 0;
  local_248.ObjectSerialNumber = 0;
  local_170 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_248,(FObjectPtr)&local_170);
  local_168 = local_248;
  pTVar13 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
            ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                    *)this_01,(FObjectKey *)&local_168);
  if (pTVar13 !=
      (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0) {
    this_02 = (FWeakObjectPtr *)(pTVar13->AllocatorInstance).Data;
    iVar1 = pTVar13->ArrayNum;
    pFVar9 = this_02 + iVar1;
    while( true ) {
      if (pTVar13->ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (this_02 == pFVar9) break;
      pUVar10 = FWeakObjectPtr::Get(this_02);
      if (pUVar10 != (UObject *)0x0) {
        pUVar11 = Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
        plVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar10,pUVar11);
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,pFVar8);
        }
      }
      this_02 = this_02 + 1;
    }
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
LAB_1489e93cc:
  if (pFVar8->bIsAllowedToLog == '\0') {
    return (FVisualLogEntry *)0x0;
  }
  this->bIsFlushRequired = true;
  return pFVar8;
}

// GetLastEntryForObject @ 1489e9910

FVisualLogEntry * __thiscall
FVisualLogger::GetLastEntryForObject(FVisualLogger *this,UObject *param_1)

{
  FVisualLogEntry *local_res18;
  FVisualLogEntry **local_res20;
  code *local_18;
  undefined8 **local_10;
  
  local_res20 = &local_res18;
  local_res18 = (FVisualLogEntry *)0x0;
  local_10 = &local_res20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FVisualLogger::GetLastEntryForObject'::__l2::<lambda_1>,void,FVisualLogEntry_&>
             ::Call;
  ExecuteOnLastEntryForObject
            (this,param_1,(TFunctionRef<void___cdecl(FVisualLogEntry_&)> *)&local_18);
  return local_res18;
}

// GetRedirectionMap @ 1489ecc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
* __cdecl FVisualLogger::GetRedirectionMap(UObject *param_1)

{
  int iVar1;
  FVisualLogger *pFVar2;
  FWeakObjectPtr *this;
  UWorldProxy UVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  FWeakObjectPtr local_res8;
  UWorld *local_res10;
  UObject *local_res18 [2];
  
  local_res10 = (UWorld *)0x0;
  pFVar2 = Get();
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  }
  this = &TMapBase<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>_>
          ::Find((TMapBase<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,0>_>
                  *)&pFVar2->ObjectToWorldMap,(FObjectKey *)&local_res8)->WeakPtr;
  if (this != (FWeakObjectPtr *)0x0) {
    local_res10 = (UWorld *)FWeakObjectPtr::Get(this);
  }
  UVar3.World = local_res10;
  if ((local_res10 == (UWorld *)0x0) &&
     ((GEngine == (UEngine *)0x0 ||
      ((UVar3.World = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull),
       UVar3.World == (UWorld *)0x0 &&
       ((GEngine == (UEngine *)0x0 ||
        (UVar3.World = (UWorld *)(**(code **)(GEngine->_padding_ + 0x180))(),
        UVar3.World == (UWorld *)0x0)))))))) {
    UVar3.World = GWorld.World;
  }
  local_res10 = UVar3.World;
  uVar5 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (WorldToRedirectionMap._8_4_ != WorldToRedirectionMap._52_4_) {
    lVar6 = 0x154c6e678;
    if (WorldToRedirectionMap._64_8_ != 0) {
      lVar6 = WorldToRedirectionMap._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)(WorldToRedirectionMap._72_4_ - 1 & uVar5) * 4);
    while (iVar1 != -1) {
      plVar4 = (longlong *)((longlong)iVar1 * 0x60 + WorldToRedirectionMap._0_8_);
      if ((UWorld *)*plVar4 == local_res10) {
        if (plVar4 != (longlong *)0x0) {
          return (TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                  *)(plVar4 + 1);
        }
        break;
      }
      iVar1 = (int)plVar4[0xb];
    }
  }
  local_res18[0] = (UObject *)&local_res10;
  TSet<TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UWorld_const_*_const_&>_>
            ((TSet<TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
              *)&WorldToRedirectionMap,(uint)&local_res8,
             (TKeyInitializer<UWorld_const_*_const_&> *)(ulonglong)uVar5,(bool *)local_res18);
  return (TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
          *)((longlong)local_res8.ObjectIndex * 0x60 + 8 + WorldToRedirectionMap._0_8_);
}

// GetThreadCurrentEntryMap @ 1489ee260

FVisualLoggerObjectEntryMap * __thiscall
FVisualLogger::GetThreadCurrentEntryMap(FVisualLogger *this)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  FRWAccessDetector *pFVar2;
  TArray<FVisualLogger::FVisualLoggerObjectEntryMap_*,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<unsigned_int> aVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  FVisualLoggerObjectEntryMap *pFVar11;
  FScriptContainerElement *pFVar12;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(lVar5 + 0x9030) == 0) {
    puVar10 = ::operator_new(0x58);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      *(undefined4 *)((longlong)puVar10 + 0x2c) = 0x80;
      *(undefined4 *)(puVar10 + 6) = 0xffffffff;
    }
    *(undefined8 **)(lVar5 + 0x9030) = puVar10;
    SRWLock = &this->EntryRWLock;
    if (SRWLock == (FPlatformRWLock *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FVisualLoggerObjectEntryMap *)(*pcVar7)();
        return pFVar11;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    LOCK();
    pFVar2 = &this->ThreadLocalMapListAccessDetector;
    aVar4 = pFVar2->AtomicValue;
    pFVar2->AtomicValue = (atomic<unsigned_int>)((int)pFVar2->AtomicValue + 0x100000);
    UNLOCK();
    if ((aVar4 != (atomic<unsigned_int>)0x0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FVisualLoggerObjectEntryMap *)(*pcVar7)();
        return pFVar11;
      }
    }
    pTVar3 = &this->ThreadCurrentEntryMaps;
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    pFVar12 = (FScriptContainerElement *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9030);
    if ((pFVar6 <= pFVar12) &&
       (pFVar12 < pFVar6 + (longlong)(this->ThreadCurrentEntryMaps).ArrayMax * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FVisualLoggerObjectEntryMap *)(*pcVar7)();
        return pFVar11;
      }
    }
    iVar9 = (this->ThreadCurrentEntryMaps).ArrayNum;
    piVar1 = &(this->ThreadCurrentEntryMaps).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar3->AllocatorInstance,piVar1);
    }
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    (this->ThreadCurrentEntryMaps).ArrayNum = iVar9 + 1;
    *(undefined8 *)(pFVar6 + (longlong)iVar9 * 8) = *(undefined8 *)pFVar12;
    LOCK();
    pFVar2 = &this->ThreadLocalMapListAccessDetector;
    aVar4 = pFVar2->AtomicValue;
    pFVar2->AtomicValue = (atomic<unsigned_int>)((int)pFVar2->AtomicValue + -0x100000);
    UNLOCK();
    if ((aVar4 != (atomic<unsigned_int>)0x100000) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FVisualLoggerObjectEntryMap *)(*pcVar7)();
        return pFVar11;
      }
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9030) ==
      0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentEntryPerObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                       ,0x2c9,L"Unexpected null map entry pointer");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FVisualLoggerObjectEntryMap *)(*pcVar7)();
      return pFVar11;
    }
  }
  return *(FVisualLoggerObjectEntryMap **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9030);
}

// GetTimeStampForObject @ 1489eee90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall FVisualLogger::GetTimeStampForObject(FVisualLogger *this,UObject *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  UWorldProxy UVar4;
  longlong *plVar5;
  double dVar6;
  UObject *local_res8;
  
  if (*(void **)&this->GetTimeStampFunc != (void *)0x0) {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->GetTimeStampFunc);
    pcVar1 = *(code **)&this->GetTimeStampFunc;
    plVar2 = *(longlong **)&(this->GetTimeStampFunc).field_0x28;
    plVar5 = (longlong *)&(this->GetTimeStampFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar3 = (**(code **)(*plVar5 + 8))();
    dVar6 = (double)(*pcVar1)(uVar3,&local_res8);
    return dVar6;
  }
  if (GEngine != (UEngine *)0x0) {
    UVar4.World = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
    if (UVar4.World != (UWorld *)0x0) goto LAB_1489eef27;
    if (GEngine != (UEngine *)0x0) {
      UVar4.World = (UWorld *)(**(code **)(GEngine->_padding_ + 0x180))();
      if (UVar4.World != (UWorld *)0x0) goto LAB_1489eef27;
    }
  }
  UVar4.World = GWorld.World;
  if (GWorld.World == (UWorld *)0x0) {
    return 0.0;
  }
LAB_1489eef27:
  return (UVar4.World)->TimeSeconds;
}

// GetUniqueId @ 1489ef740

int __thiscall FVisualLogger::GetUniqueId(FVisualLogger *this,double param_1)

{
  int iVar1;
  int *piVar2;
  double local_res10 [3];
  
  local_res10[0] = param_1;
  piVar2 = TMapBase<double,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<double,int,0>_>::
           FindOrAddImpl<double_const_&>
                     ((TMapBase<double,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<double,int,0>_>
                       *)&this->LastUniqueIds,
                      (int)((ulonglong)param_1 >> 0x20) * 0x17 + SUB84(param_1,0),local_res10);
  iVar1 = *piVar2;
  *piVar2 = iVar1 + 1;
  return iVar1;
}

// HistogramDataLogfImpl @ 1489f24a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::HistogramDataLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,FName param_4,FName param_5,
          TVector2<double> *param_6,FColor *param_7,wchar_t *param_8)

{
  Type local_res18 [8];
  FName local_res20;
  <lambda_1> local_38;
  
  local_38.Data = param_6;
  local_38.Verbosity = local_res18;
  local_38.GraphName = &local_res20;
  local_38.DataName = &param_5;
  local_res18[0] = param_3;
  local_res20 = param_4;
  local_38.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::HistogramDataLogfImpl_::__l2::<lambda_1>_>
            (&local_38,param_1,param_2,param_3,param_8,&stack0x00000048);
  return;
}

// IsCategoryAllowed @ 1489f8860

bool __thiscall FVisualLogger::IsCategoryAllowed(FVisualLogger *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->CategoryAllowList).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (this->CategoryAllowList).ArrayNum) {
    pFVar2 = pFVar1;
    do {
      if (*pFVar2 == *param_1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3) != -1;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1 + (this->CategoryAllowList).ArrayNum);
  }
  return false;
}

// IsCategoryLogged @ 1489f88b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FVisualLogger::IsCategoryLogged(FVisualLogger *this,FLogCategoryBase *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (((GEngine == (UEngine *)0x0) || (GEngine->bDisableAILogging == 0)) && (bIsRecording != 0)) {
    if (!this->bBlockedAllCategories) {
      return true;
    }
    pFVar1 = (FName *)(this->CategoryAllowList).AllocatorInstance.Data;
    for (pFVar2 = pFVar1; pFVar2 != pFVar1 + (this->CategoryAllowList).ArrayNum; pFVar2 = pFVar2 + 1
        ) {
      if (*pFVar2 == param_1->CategoryName) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3) != -1;
      }
    }
  }
  return false;
}

// IsClassAllowed @ 1489f8920

bool __thiscall FVisualLogger::IsClassAllowed(FVisualLogger *this,UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->ClassAllowList).AllocatorInstance.Data;
  iVar2 = (this->ClassAllowList).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  do {
    if ((this->ClassAllowList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UClass_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) {
      return false;
    }
    lVar3 = *(longlong *)pFVar5;
    if (lVar3 != 0) {
      if (((int)param_1->_padding_ < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)(param_1->_padding_ + (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30))
      {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        return true;
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// IsObjectAllowed @ 1489f93c0

bool __thiscall FVisualLogger::IsObjectAllowed(FVisualLogger *this,UObject *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  uVar7 = 0;
  local_res8.ObjectIndex = 0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    uVar7 = (ulonglong)local_res8 >> 0x20;
  }
  iVar8 = (int)uVar7;
  uVar5 = local_res8.ObjectIndex - iVar8 ^ (uint)(uVar7 >> 0xd);
  uVar3 = (-0x61c88647 - uVar5) - iVar8 ^ uVar5 << 8;
  uVar9 = (iVar8 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar9) - uVar3 ^ uVar9 >> 0xc;
  uVar3 = (uVar3 - uVar9) - uVar5 ^ uVar5 << 0x10;
  uVar9 = (uVar9 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar5 = (uVar5 - uVar9) - uVar3 ^ uVar9 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar9 ^ uVar5 << 10;
  if (*(int *)&(this->ObjectAllowList).Elements.field_0x8 !=
      *(int *)&(this->ObjectAllowList).Elements.field_0x34) {
    FVar6 = (this->ObjectAllowList).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->ObjectAllowList).Hash;
    }
    iVar2 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->ObjectAllowList).HashSize - 1U &
                    ((uVar9 - uVar3) - uVar5 ^ uVar3 >> 0xf)) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->ObjectAllowList).Elements;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(int *)(lVar1 + lVar4 * 0x10) == local_res8.ObjectIndex) &&
           (*(int *)(lVar1 + 4 + lVar4 * 0x10) == iVar8)) goto LAB_1489f9500;
        iVar2 = *(int *)(lVar1 + 8 + lVar4 * 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_1489f9500:
  return iVar2 != -1;
}

// LocationLogfImpl @ 1489fa8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::LocationLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TVector<double> *param_4,ushort param_5,
          FColor *param_6,wchar_t *param_7)

{
  Type local_res18 [16];
  <lambda_1> local_38;
  
  local_38.Verbosity = local_res18;
  local_38.Color = param_6;
  local_38.Thickness = &param_5;
  local_res18[0] = param_3;
  local_38.Location = param_4;
  local_38.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::LocationLogfImpl_::__l2::<lambda_1>_>
            (&local_38,param_1,param_2,param_3,param_7,&stack0x00000040);
  return;
}

// MeshLogfImpl @ 1489fcce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::MeshLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5,FColor *param_6,wchar_t *param_7)

{
  Type local_res18 [16];
  <lambda_1> local_38;
  
  local_38.Indices = param_5;
  local_38.Verbosity = local_res18;
  local_38.Color = param_6;
  local_res18[0] = param_3;
  local_38.Vertices = param_4;
  local_38.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::MeshLogfImpl_::__l2::<lambda_1>_>
            (&local_38,param_1,param_2,param_3,param_7,&stack0x00000040);
  return;
}

// NavigationDataDump @ 1489fd390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::NavigationDataDump
          (UObject *param_1,FLogCategoryBase *param_2,Type param_3,TBox<double> *param_4)

{
  NavigationDataDump(param_1,&param_2->CategoryName,param_3,param_4);
  return;
}

// NavigationDataDump @ 1489fd3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FVisualLogger::NavigationDataDump
          (UObject *param_1,FName *param_2,Type param_3,TBox<double> *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_VisualLog> FVar13;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar14;
  longlong lVar15;
  uint uVar16;
  FColor_u_0 local_b4;
  FName local_b0;
  FName local_a8;
  FVisualLogEntry *local_a0;
  UWorld *local_98;
  FName local_90;
  UWorld *local_80;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FDestructionSentinel local_60;
  FName local_48 [2];
  
  bVar3 = false;
  FVar13 = StatPtr_STAT_VisualLog;
  if (StatPtr_STAT_VisualLog == (FThreadSafeStaticStat<FStat_STAT_VisualLog>)0x0) {
    pFVar12 = ::FName::FName(local_48,"STAT_VisualLog");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_VisualLog>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VisualLog,*pFVar12,
                        L"Visual Logging time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  bVar8 = false;
  bVar9 = false;
  if ((FVar14.ComparisonIndex.Value.Value != 0) ||
     (bVar4 = bVar5, bVar6 = bVar7, FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b4._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_a8.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                   ,0x31b);
        bVar5 = true;
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    bVar4 = bVar5;
    bVar6 = bVar7;
    if (FThreadStats::bPrimaryEnable != false) {
      local_b0 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar8 = true;
      goto LAB_1489fd51f;
    }
  }
  bVar7 = bVar9;
  bVar5 = bVar8;
  bVar8 = false;
  local_b0 = local_90;
  FVar14 = local_90;
LAB_1489fd51f:
  local_98 = (UWorld *)0x0;
  local_a0 = (FVisualLogEntry *)0x0;
  bVar9 = CheckVisualLogInputInternal(param_1,param_2,param_3,&local_98,&local_a0);
  if ((bVar9) && (local_a0 != (FVisualLogEntry *)0x0)) {
    local_80 = local_98;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NavigationDataDumpDelegate
               ,(FWriteAccessScope *)&local_60);
    NavigationDataDumpDelegate._28_4_ = NavigationDataDumpDelegate._28_4_ + 1;
    uVar16 = NavigationDataDumpDelegate._16_4_ - 1;
    if (-1 < (int)uVar16) {
      lVar15 = (longlong)(int)uVar16 << 4;
      do {
        uVar11 = 0;
        if ((int)uVar16 < (int)NavigationDataDumpDelegate._16_4_) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(lVar15 + 8 + NavigationDataDumpDelegate._8_8_) == 0) ||
            (*(longlong **)(lVar15 + NavigationDataDumpDelegate._8_8_) == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(**(longlong **)(lVar15 + NavigationDataDumpDelegate._8_8_) + 0x68)
                     )(), cVar10 == '\0')) {
          bVar3 = true;
        }
        lVar15 = lVar15 + -0x10;
        uVar16 = uVar16 - 1;
        FVar14 = local_b0;
        bVar4 = bVar5;
        bVar6 = bVar7;
      } while (-1 < (int)uVar16);
    }
    NavigationDataDumpDelegate._28_4_ = NavigationDataDumpDelegate._28_4_ + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&NavigationDataDumpDelegate,
                 false);
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_70.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_70);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// OnDataReset @ 148a00980

void __thiscall FVisualLogger::OnDataReset(FVisualLogger *this)

{
  UE::VisLog::Private::UniqueRunNumber = 0;
  ::FString::Empty(&UE::VisLog::Private::UniqueLogPrefix);
  return;
}

// PulledConvexLogfImpl @ 148a03810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::PulledConvexLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,float param_5,
          float param_6,FColor *param_7,wchar_t *param_8)

{
  Type local_res18 [16];
  <lambda_1> local_38;
  
  local_38.MinZ = &param_5;
  local_38.MaxZ = &param_6;
  local_38.Verbosity = local_res18;
  local_38.Color = param_7;
  local_res18[0] = param_3;
  local_38.ConvexPoints = param_4;
  local_38.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::PulledConvexLogfImpl_::__l2::<lambda_1>_>
            (&local_38,param_1,param_2,param_3,param_8,&stack0x00000048);
  return;
}

// RedirectInternal @ 148a054b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UObject * __thiscall
FVisualLogger::RedirectInternal(FVisualLogger *this,UObject *param_1,UObject *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FWeakObjectPtr *pFVar7;
  UObject *pUVar8;
  FWeakObjectPtr this_00;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  int *piVar12;
  FWeakObjectPtr *this_01;
  uint uVar13;
  ForElementType<FSetElementId> FVar14;
  undefined1 *puVar15;
  FScriptContainerElement *pFVar16;
  UObject *pUVar17;
  TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar18;
  uint uVar19;
  uint uVar20;
  FWeakObjectPtr this_02;
  TMap<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
  *this_03;
  TKeyInitializer<UObject_const_*_&> local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  FWeakObjectPtr local_118;
  FWeakObjectPtr local_110;
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_100;
  FWeakObjectPtr local_f8;
  UObject *local_f0;
  FWeakObjectPtr local_e8;
  FWeakObjectPtr local_e0;
  FObjectKey local_d8;
  FWeakObjectPtr local_d0;
  FObjectKey local_c8;
  TMap<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
  *local_c0;
  FWeakObjectPtr *local_b8;
  UObject *local_b0;
  UObject *local_a8;
  FWeakObjectPtr local_a0;
  UObject *local_98;
  FWeakObjectPtr local_90;
  UObject *local_88;
  UObject *local_80;
  UObject *local_78;
  UObject **local_70;
  UObject *local_68;
  FWeakObjectPtr local_60;
  UObject *local_58;
  UObject *local_50 [2];
  
  if (((param_1 == param_2) || (param_1 == (UObject *)0x0)) || (param_2 == (UObject *)0x0)) {
    return (UObject *)0x0;
  }
  local_res10.Key = (UObject **)param_1;
  local_res18 = param_2;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_118.ObjectIndex = 0;
  local_118.ObjectSerialNumber = 0;
  local_b0 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_b0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_108.ObjectIndex = 0;
  local_108.ObjectSerialNumber = 0;
  local_a8 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_a8);
  this_03 = &this->ChildToOwnerMap;
  local_a0 = local_108;
  uVar19 = local_108.ObjectIndex - local_108.ObjectSerialNumber ^
           (uint)local_108.ObjectSerialNumber >> 0xd;
  uVar11 = (-0x61c88647 - uVar19) - local_108.ObjectSerialNumber ^ uVar19 << 8;
  uVar13 = (local_108.ObjectSerialNumber - uVar11) - uVar19 ^ uVar11 >> 0xd;
  uVar19 = (uVar19 - uVar13) - uVar11 ^ uVar13 >> 0xc;
  uVar11 = (uVar11 - uVar13) - uVar19 ^ uVar19 << 0x10;
  uVar13 = (uVar13 - uVar11) - uVar19 ^ uVar11 >> 5;
  uVar19 = (uVar19 - uVar13) - uVar11 ^ uVar13 >> 3;
  uVar11 = (uVar11 - uVar19) - uVar13 ^ uVar19 << 10;
  local_c0 = this_03;
  pFVar7 = &TMapBase<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
            ::FindOrAddImpl<FObjectKey>
                      ((TMapBase<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
                        *)this_03,(uVar13 - uVar11) - uVar19 ^ uVar11 >> 0xf,(FObjectKey *)&local_a0
                      )->WeakPtr;
  local_b8 = pFVar7;
  pUVar8 = FWeakObjectPtr::Get(pFVar7);
  if (pUVar8 != param_2) {
    this_00 = (FWeakObjectPtr)GetRedirectionMap(param_1);
    local_110 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_e8.ObjectIndex = 0;
    local_e8.ObjectSerialNumber = 0;
    local_98 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_98);
    local_90 = local_e8;
    pTVar9 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                     *)this_00,(FObjectKey *)&local_90);
    this_02 = this_00;
    while (pUVar17 = param_2, pUVar8 != (UObject *)0x0) {
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      local_e0.ObjectIndex = 0;
      local_e0.ObjectSerialNumber = 0;
      local_88 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_88);
      local_d8.ObjectIndex = local_e0.ObjectIndex;
      local_d8.ObjectSerialNumber = local_e0.ObjectSerialNumber;
      pTVar10 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                        *)this_00,&local_d8);
      if ((pTVar10 !=
           (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
         && (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
             RemoveSingleSwap(pTVar10,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_118,
                              Default),
            pTVar9 != (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                       *)0x0)) {
        pFVar16 = (pTVar9->AllocatorInstance).Data;
        iVar5 = pTVar9->ArrayNum;
        pFVar1 = pFVar16 + (longlong)iVar5 * 8;
        while( true ) {
          if (pTVar9->ArrayNum != iVar5) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          this_03 = local_c0;
          if (pFVar16 == pFVar1) break;
          TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          RemoveSingleSwap(pTVar10,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar16,Default)
          ;
          pFVar16 = pFVar16 + 8;
        }
      }
      local_c8.ObjectIndex = 0;
      local_c8.ObjectSerialNumber = 0;
      if (pUVar8 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        local_d0.ObjectIndex = 0;
        local_d0.ObjectSerialNumber = 0;
        local_80 = pUVar8;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_80);
        local_c8.ObjectIndex = local_d0.ObjectIndex;
        local_c8.ObjectSerialNumber = local_d0.ObjectSerialNumber;
      }
      pFVar7 = &TMapBase<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
                ::Find((TMapBase<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>_>
                        *)this_03,&local_c8)->WeakPtr;
      pUVar17 = local_res18;
      param_1 = (UObject *)local_res10.Key;
      this_02 = local_110;
      if (pFVar7 == (FWeakObjectPtr *)0x0) break;
      pUVar8 = FWeakObjectPtr::Get(pFVar7);
      param_1 = (UObject *)local_res10.Key;
      param_2 = local_res18;
      this_02 = local_110;
    }
    do {
      pTVar10 = (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
                )0x0;
      local_f0 = pUVar17;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar17);
      }
      local_100.ObjectIndex = 0;
      local_100.ObjectSerialNumber = 0;
      local_78 = pUVar17;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar17);
      }
      FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_78);
      uVar13 = local_100.ObjectIndex - local_100.ObjectSerialNumber ^
               (uint)local_100.ObjectSerialNumber >> 0xd;
      uVar11 = (-0x61c88647 - uVar13) - local_100.ObjectSerialNumber ^ uVar13 << 8;
      uVar19 = (local_100.ObjectSerialNumber - uVar11) - uVar13 ^ uVar11 >> 0xd;
      uVar13 = (uVar13 - uVar19) - uVar11 ^ uVar19 >> 0xc;
      uVar11 = (uVar11 - uVar19) - uVar13 ^ uVar13 << 0x10;
      uVar19 = (uVar19 - uVar11) - uVar13 ^ uVar11 >> 5;
      uVar13 = (uVar13 - uVar19) - uVar11 ^ uVar19 >> 3;
      uVar11 = (uVar11 - uVar13) - uVar19 ^ uVar13 << 10;
      if (*(int *)((longlong)this_02 + 8) != *(int *)((longlong)this_02 + 0x34)) {
        FVar14 = (ForElementType<FSetElementId>)((longlong)this_02 + 0x38);
        if (*(ForElementType<FSetElementId> *)((longlong)this_02 + 0x40) !=
            (ForElementType<FSetElementId>)0x0) {
          FVar14 = *(ForElementType<FSetElementId> *)((longlong)this_02 + 0x40);
        }
        iVar5 = *(int *)((longlong)FVar14 +
                        (ulonglong)
                        (*(int *)((longlong)this_02 + 0x48) - 1U &
                        ((uVar19 - uVar11) - uVar13 ^ uVar11 >> 0xf)) * 4);
        if (iVar5 != -1) {
          do {
            piVar12 = (int *)((longlong)iVar5 * 0x20 + *(longlong *)this_02);
            if ((*piVar12 == local_100.ObjectIndex) && (piVar12[1] == local_100.ObjectSerialNumber))
            {
              if (iVar5 != -1) {
                pTVar18 = (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                           *)(piVar12 + 2);
                if (piVar12 == (int *)0x0) {
                  pTVar18 = pTVar10;
                }
                if (pTVar18 !=
                    (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                     *)0x0) goto LAB_148a059e9;
              }
              break;
            }
            iVar5 = piVar12[6];
          } while (iVar5 != -1);
        }
      }
      local_70 = &local_f0;
      TSet<TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<UObject_const_*_&>_>
                ((TSet<TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)this_02,&local_res10,(bool *)&local_70);
      pTVar18 = (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
                )(*(longlong *)this_02 + (longlong)(int)local_res10.Key * 0x20 + 8);
      if (pTVar9 != (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                     *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        local_110.ObjectIndex = 0;
        local_110.ObjectSerialNumber = 0;
        local_68 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=(&local_110,(FObjectPtr)&local_68);
        local_60 = local_110;
        pTVar10 = TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                          *)this_02,(FObjectKey *)&local_60);
      }
      pTVar9 = pTVar10;
      if ((pTVar18 ==
           (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)0x0)
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("OwnerChildren",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLogger.cpp"
                                ,0x42b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UObject *)(*pcVar3)();
        return pUVar8;
      }
LAB_148a059e9:
      pFVar7 = (FWeakObjectPtr *)(pTVar18->AllocatorInstance).Data;
      if (((pFVar7 <= &local_118) && (&local_118 < pFVar7 + pTVar18->ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UObject *)(*pcVar3)();
        return pUVar8;
      }
      iVar5 = pTVar18->ArrayNum;
      if (iVar5 == pTVar18->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar18->AllocatorInstance,&pTVar18->ArrayMax);
      }
      pTVar18->ArrayNum = iVar5 + 1;
      *(FWeakObjectPtr *)((pTVar18->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_118;
      if (pTVar9 != (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                     *)0x0) {
        if ((pTVar18 == pTVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UObject *)(*pcVar3)();
          return pUVar8;
        }
        iVar5 = pTVar9->ArrayNum;
        if (iVar5 != 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,iVar5,&pTVar18->AllocatorInstance,&pTVar18->ArrayNum,
                             &pTVar18->ArrayMax);
          memcpy((pTVar18->AllocatorInstance).Data + (longlong)iVar6 * 8,
                 (pTVar9->AllocatorInstance).Data,(longlong)iVar5 << 3);
        }
      }
      pUVar8 = local_f0;
      uVar11 = 0;
      iVar5 = 0;
      if (local_f0 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_f0);
        }
        local_f8.ObjectIndex = 0;
        local_f8.ObjectSerialNumber = 0;
        local_58 = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_58);
        uVar11 = local_f8.ObjectSerialNumber;
        iVar5 = local_f8.ObjectIndex;
      }
      uVar19 = iVar5 - uVar11 ^ uVar11 >> 0xd;
      uVar13 = (-0x61c88647 - uVar11) - uVar19 ^ uVar19 << 8;
      uVar20 = (uVar11 - uVar13) - uVar19 ^ uVar13 >> 0xd;
      uVar19 = (uVar19 - uVar20) - uVar13 ^ uVar20 >> 0xc;
      uVar13 = (uVar13 - uVar19) - uVar20 ^ uVar19 << 0x10;
      uVar20 = (uVar20 - uVar13) - uVar19 ^ uVar13 >> 5;
      uVar19 = (uVar19 - uVar20) - uVar13 ^ uVar20 >> 3;
      uVar13 = (uVar13 - uVar19) - uVar20 ^ uVar19 << 10;
      param_2 = local_res18;
      pFVar7 = local_b8;
      if (*(int *)&local_c0->field_0x8 == *(int *)&local_c0->field_0x34) break;
      puVar15 = &local_c0->field_0x38;
      if (*(undefined1 **)&local_c0->field_0x40 != (undefined1 *)0x0) {
        puVar15 = *(undefined1 **)&local_c0->field_0x40;
      }
      iVar6 = *(int *)(puVar15 +
                      (ulonglong)
                      (*(int *)&local_c0->field_0x48 - 1U &
                      ((uVar20 - uVar13) - uVar19 ^ uVar13 >> 0xf)) * 4);
      if (iVar6 == -1) break;
      while ((lVar2 = *(longlong *)local_c0 + (longlong)iVar6 * 0x18,
             *(int *)(*(longlong *)local_c0 + (longlong)iVar6 * 0x18) != iVar5 ||
             (*(uint *)(lVar2 + 4) != uVar11))) {
        iVar6 = *(int *)(lVar2 + 0x10);
        if (iVar6 == -1) goto LAB_148a05c76;
      }
      if (iVar6 == -1) break;
      this_01 = (FWeakObjectPtr *)(lVar2 + 8);
      if (lVar2 == 0) {
        this_01 = (FWeakObjectPtr *)0x0;
      }
      if ((this_01 == (FWeakObjectPtr *)0x0) ||
         (local_f0 = FWeakObjectPtr::Get(this_01), pUVar17 = local_f0, param_2 = local_res18,
         pFVar7 = local_b8, local_f0 == (UObject *)0x0)) break;
    } while( true );
  }
LAB_148a05c76:
  local_50[0] = param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=(pFVar7,(FObjectPtr)local_50);
  pUVar8 = FindRedirectionInternal(this,param_2);
  return pUVar8;
}

// SegmentLogfImpl @ 148a109d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::SegmentLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TVector<double> *param_4,
          TVector<double> *param_5,FColor *param_6,ushort param_7,wchar_t *param_8)

{
  Type local_res18 [16];
  <lambda_1> local_38;
  
  local_38.End = param_5;
  local_38.Verbosity = local_res18;
  local_38.Color = param_6;
  local_38.Thickness = &param_7;
  local_res18[0] = param_3;
  local_38.Start = param_4;
  local_38.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::SegmentLogfImpl_::__l2::<lambda_1>_>
            (&local_38,param_1,param_2,param_3,param_8,&stack0x00000048);
  return;
}

// Serialize @ 148a12990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogger::Serialize(FVisualLogger *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  undefined1 local_18 [24];
  
  `FVisualLogger::Serialize'::__l2::<lambda_1>::operator()(local_18);
  return;
}

// SetGetTimeStampFunc @ 148a14b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FVisualLogger::SetGetTimeStampFunc
          (FVisualLogger *this,TFunction<double___cdecl(UObject_const_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->GetTimeStampFunc;
  uVar7 = *(undefined8 *)&(this->GetTimeStampFunc).field_0x8;
  uVar1 = *(undefined4 *)&(this->GetTimeStampFunc).field_0x10;
  uVar2 = *(undefined4 *)&(this->GetTimeStampFunc).field_0x14;
  uVar3 = *(undefined4 *)&(this->GetTimeStampFunc).field_0x18;
  uVar4 = *(undefined4 *)&(this->GetTimeStampFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(this->GetTimeStampFunc).field_0x20;
  plVar10 = *(longlong **)&(this->GetTimeStampFunc).field_0x28;
  *(longlong *)&this->GetTimeStampFunc = local_58;
  *(undefined8 *)&(this->GetTimeStampFunc).field_0x8 = uStack_50;
  *(undefined4 *)&(this->GetTimeStampFunc).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->GetTimeStampFunc).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->GetTimeStampFunc).field_0x18 = uStack_40;
  *(undefined4 *)&(this->GetTimeStampFunc).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->GetTimeStampFunc).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->GetTimeStampFunc).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->GetTimeStampFunc).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->GetTimeStampFunc).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}

// SetIsRecording @ 148a14c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FVisualLogger::SetIsRecording(FVisualLogger *this,bool param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  UWorld *pUVar3;
  undefined1 auStack_68 [32];
  TBox<double> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((!param_1) && (bIsRecording != 0)) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"LogNavOctree");
    if (bVar1) {
      local_48.IsValid = '\0';
      pUVar3 = ::`anonymous_namespace'::GetWorldForVisualLogger((UObject *)0x0);
      NavigationDataDump((UObject *)pUVar3,(FName *)&LogNavigation.field_0x4,Log,&local_48);
    }
  }
  if (this->bIsRecordingToFile) {
    SetIsRecordingToFile(this,false);
  }
  bIsRecording = (uint)param_1;
  return;
}

// SetIsRecordingToFile @ 148a14d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FVisualLogger::SetIsRecordingToFile(FVisualLogger *this,bool param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  char cVar5;
  UWorld *this_00;
  FString *pFVar6;
  UWorld *pUVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  FScriptContainerElement *local_res8;
  char local_res10 [8];
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FString local_88;
  FString local_78;
  FString local_68;
  FReadAccessScope local_58;
  
  pUVar7 = (UWorld *)0x0;
  local_res10[0] = param_1;
  if ((bIsRecording == 0) && (param_1)) {
    SetIsRecording(this,true);
  }
  this_00 = pUVar7;
  if (GEngine != (UEngine *)0x0) {
    this_00 = (UWorld *)(**(code **)(GEngine->_padding_ + 0x180))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->LogFileNameGetter,
             &local_58);
  if (((*(int *)&(this->LogFileNameGetter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->LogFileNameGetter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar2 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    pFVar6 = ::FString::FString(&local_68,L"VisualLog");
    local_res8 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->LogFileNameGetter,
               &local_58);
    if (*(int *)&(this->LogFileNameGetter).field_0x10 != 0) {
      pUVar7 = *(UWorld **)&(this->LogFileNameGetter).field_0x8;
    }
    (**(code **)(pUVar7->_padding_ + 0x60))(pUVar7,&local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    local_res8 = local_88.Data.AllocatorInstance.Data;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
  }
  bVar10 = this_00 == (UWorld *)0x0;
  if (bVar10) {
    pFVar6 = ::FString::FString(&local_68,L"");
  }
  else {
    pFVar6 = UWorld::GetMapName(this_00,&local_88);
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = (pFVar6->Data).ArrayNum;
  lVar9 = (longlong)local_90;
  pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
  if (local_90 == 0) {
    local_8c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90,0,&local_98,local_90,&local_8c);
    memcpy(local_98.Data,pFVar3,lVar9 * 2);
  }
  if ((bVar10) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((!bVar10) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_78,L"%s_%s");
  cVar4 = local_res10[0];
  if (this->bIsRecordingToFile) {
    if (local_res10[0] == '\0') {
      pFVar8 = (this->OutputDevices).AllocatorInstance.Data;
      iVar1 = (this->OutputDevices).ArrayNum;
      pFVar3 = pFVar8 + (longlong)iVar1 * 8;
      while( true ) {
        if ((this->OutputDevices).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FVisualLogDevice_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar8 == pFVar3) break;
        plVar2 = *(longlong **)pFVar8;
        cVar5 = (**(code **)(*plVar2 + 0x48))(plVar2,1);
        if (cVar5 == '\0') {
LAB_148a14f95:
          pFVar8 = pFVar8 + 8;
        }
        else {
          (**(code **)(*plVar2 + 0x38))(plVar2,&local_78);
          if (this_00 == (UWorld *)0x0) {
            (**(code **)(*plVar2 + 0x28))(plVar2,this->StartRecordingToFileTime);
            goto LAB_148a14f95;
          }
          (**(code **)(*plVar2 + 0x28))(plVar2,this_00->TimeSeconds);
          pFVar8 = pFVar8 + 8;
        }
      }
    }
  }
  else if (local_res10[0] != '\0') {
    if (this_00 == (UWorld *)0x0) {
      dVar11 = 0.0;
    }
    else {
      dVar11 = this_00->TimeSeconds;
    }
    this->StartRecordingToFileTime = dVar11;
    pFVar8 = (this->OutputDevices).AllocatorInstance.Data;
    iVar1 = (this->OutputDevices).ArrayNum;
    pFVar3 = pFVar8 + (longlong)iVar1 * 8;
    while( true ) {
      if ((this->OutputDevices).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FVisualLogDevice_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar8 == pFVar3) break;
      plVar2 = *(longlong **)pFVar8;
      cVar5 = (**(code **)(*plVar2 + 0x48))(plVar2,1);
      if (cVar5 != '\0') {
        (**(code **)(*plVar2 + 0x20))(plVar2,this->StartRecordingToFileTime);
      }
      pFVar8 = pFVar8 + 8;
    }
  }
  this->bIsRecordingToFile = false;
  this->field_0x2b0 = this->field_0x2b0 | cVar4 * '\x02';
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_res8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_res8);
  }
  return;
}

// SetIsRecordingToTrace @ 148a15070

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FVisualLogger::SetIsRecordingToTrace(FVisualLogger *this,bool param_1)

{
  FVisualLoggerTraceDevice *local_18 [2];
  
  if ((bIsRecording == 0) && (param_1)) {
    if (this->bIsRecordingToFile) {
      SetIsRecordingToFile(this,false);
    }
    bIsRecording = 1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      GDevice._padding_ = 0;
      GDevice._padding_ = 0;
      GDevice._padding_ = (longlong)&___7FVisualLoggerTraceDevice__6B_;
      GDevice.ImmediateRenderDelegate._0_8_ = 0;
      GDevice.ImmediateRenderDelegate._8_8_ = 0;
      GDevice.ImmediateRenderDelegate._16_4_ = 0;
      atexit(`FVisualLoggerTraceDevice::Get'::__l2::_dynamic_atexit_destructor_for__GDevice__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (this->bIsRecordingToTrace) {
    if (!param_1) {
      if (*(code **)(GDevice._padding_ + 0x28) == FVisualLoggerTraceDevice::StopRecordingToFile) {
        UE::Trace::ToggleChannel(L"VisualLogger",false);
      }
      else {
        (**(code **)(GDevice._padding_ + 0x28))(&GDevice,0);
      }
      local_18[0] = &GDevice;
      TArray<FVisualLogDevice_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                (&this->OutputDevices,(FVisualLogDevice **)local_18,Default);
    }
  }
  else if (param_1) {
    if (*(code **)(GDevice._padding_ + 0x20) == FVisualLoggerTraceDevice::StartRecordingToFile) {
      UE::Trace::ToggleChannel(L"VisualLogger",true);
    }
    else {
      (**(code **)(GDevice._padding_ + 0x20))(&GDevice,0);
    }
    local_18[0] = &GDevice;
    TArray<FVisualLogDevice_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FVisualLogDevice_*_const_&>(&this->OutputDevices,(FVisualLogDevice **)local_18);
  }
  this->bIsRecordingToTrace = false;
  this->field_0x2b0 = this->field_0x2b0 | param_1 << 2;
  return;
}

// SetUseUniqueNames @ 148a167a0

void __thiscall FVisualLogger::SetUseUniqueNames(FVisualLogger *this,bool param_1)

{
  this->bForceUniqueLogNames = false;
  this->field_0x2b0 = this->field_0x2b0 | param_1 << 4;
  ::FString::Empty(&UE::VisLog::Private::UniqueLogPrefix);
  return;
}

// Shutdown @ 148a16ec0

void __thiscall FVisualLogger::Shutdown(FVisualLogger *this)

{
  return;
}

// SphereLogfImpl @ 148a17150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::SphereLogfImpl
          (UObject *param_1,FName *param_2,Type param_3,TVector<double> *param_4,float param_5,
          FColor *param_6,bool param_7,wchar_t *param_8)

{
  Type local_res18 [16];
  <lambda_1> local_38;
  
  local_38.Radius = &param_5;
  local_38.Verbosity = local_res18;
  local_38.Color = param_6;
  local_38.bWireframe = &param_7;
  local_res18[0] = param_3;
  local_38.Center = param_4;
  local_38.CategoryName = param_2;
  CollapsedLogfV<_FVisualLogger::SphereLogfImpl_::__l2::<lambda_1>_>
            (&local_38,param_1,param_2,param_3,param_8,&stack0x00000048);
  return;
}

// TearDown @ 148a19be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FVisualLogger::TearDown(FVisualLogger *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  UWorld *pUVar3;
  undefined1 auStack_78 [32];
  FVisualLoggerBinaryFileDevice *local_58;
  TBox<double> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (bIsRecording != 0) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"LogNavOctree");
    if (bVar1) {
      local_50.IsValid = '\0';
      pUVar3 = ::`anonymous_namespace'::GetWorldForVisualLogger((UObject *)0x0);
      NavigationDataDump((UObject *)pUVar3,(FName *)&LogNavigation.field_0x4,Log,&local_50);
    }
  }
  if (this->bIsRecordingToFile) {
    SetIsRecordingToFile(this,false);
  }
  bIsRecording = 0;
  SetIsRecordingToFile(this,false);
  local_58 = FVisualLoggerBinaryFileDevice::Get();
  TArray<FVisualLogDevice_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&this->OutputDevices,(FVisualLogDevice **)&local_58,Default);
  return;
}

// Tick @ 148a1b710

void __thiscall FVisualLogger::Tick(FVisualLogger *this,float param_1)

{
  byte bVar1;
  
  bVar1 = this->field_0x2b0;
  if (this->bIsFlushRequired) {
    (**(code **)(this->_padding_ + 0x20))();
    this->bIsFlushRequired = false;
    bVar1 = this->field_0x2b0;
  }
  if ((bVar1 & 0x40) != 0) {
    CleanupRedirects(this);
    this->bContainsInvalidRedirects = false;
  }
  return;
}

// operator() @ 1505346e0

bool __thiscall `FVisualLogger::FlushEntry'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1331245518784823989>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1331245518784823989>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505347b0

bool __thiscall `FVisualLogger::Serialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6125352993140243576>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6125352993140243576>,
                       &`public:___cdecl_`private:_virtual_void___cdecl_FVisualLogger::Serialize(wchar_t_const*___ptr64,ELogVerbosity::Type,FName_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

