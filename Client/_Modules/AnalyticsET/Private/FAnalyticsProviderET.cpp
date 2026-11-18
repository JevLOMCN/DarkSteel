// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 34

// FAnalyticsProviderET @ 1431926e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAnalyticsProviderET * __thiscall
FAnalyticsProviderET::FAnalyticsProviderET(FAnalyticsProviderET *this,Config *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FString *pFVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  ForAnyElementType _Src;
  bool bVar8;
  int iVar9;
  FTSTicker *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  FAnalyticsProviderET *pFVar12;
  wchar_t *pwVar13;
  FString *pFVar14;
  undefined8 uVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  FManager *pFVar20;
  FRetryDomains *pFVar21;
  double dVar22;
  TOptional<unsigned_int> local_res10;
  LARGE_INTEGER local_res18;
  TOptional<unsigned_int> local_res20;
  ForAnyElementType local_158;
  undefined8 local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FManager *local_108;
  FSharedReferencer<1> local_100;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  FRetryDomains *local_d8;
  FSharedReferencer<1> FStack_d0;
  FString local_c8;
  FString local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TOptional<double> local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68 [2];
  
  iVar18 = 0;
  *(undefined ***)this = &___7IAnalyticsProviderET__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  pFVar10 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)&this->field_0x18,0.0,pFVar10);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &_vftable__for__IAnalyticsProviderET__;
  this->bSessionInProgress = false;
  *(undefined ***)&this->field_0x18 = &_vftable__for__FTSTickerObjectBase__;
  ::FString::FString(&(this->Config).APIKeyET,&param_1->APIKeyET);
  ::FString::FString(&(this->Config).APIServerET,&param_1->APIServerET);
  ::FString::FString(&(this->Config).APIEndpointET,&param_1->APIEndpointET);
  ::FString::FString(&(this->Config).APIUnixSocketPathET,&param_1->APIUnixSocketPathET);
  pTVar2 = &(this->Config).AltAPIServersET;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Config).AltAPIServersET.ArrayMax;
  iVar9 = (param_1->AltAPIServersET).ArrayNum;
  pFVar19 = (param_1->AltAPIServersET).AllocatorInstance.Data;
  (this->Config).AltAPIServersET.ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar9,0,&pTVar2->AllocatorInstance,iVar9,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar19,iVar9);
  }
  ::FString::FString(&(this->Config).AppVersionET,&param_1->AppVersionET);
  (this->Config).UseLegacyProtocol = param_1->UseLegacyProtocol;
  (this->Config).bDropEventsOnFlushFailure = param_1->bDropEventsOnFlushFailure;
  ::FString::FString(&(this->Config).AppEnvironment,&param_1->AppEnvironment);
  ::FString::FString(&(this->Config).UploadType,&param_1->UploadType);
  (this->Config).RetryLimitCount = param_1->RetryLimitCount;
  (this->Config).FlushIntervalSec = param_1->FlushIntervalSec;
  (this->Config).MaximumPayloadSize = param_1->MaximumPayloadSize;
  (this->Config).PreallocatedPayloadSize = param_1->PreallocatedPayloadSize;
  (this->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserID).Data.ArrayNum = 0;
  (this->UserID).Data.ArrayMax = 0;
  (this->SessionID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionID).Data.ArrayNum = 0;
  (this->SessionID).Data.ArrayMax = 0;
  this->DefaultFlushIntervalSec = 60.0;
  fVar7 = param_1->FlushIntervalSec;
  if (param_1->FlushIntervalSec < 0.0) {
    fVar7 = __real_42700000;
  }
  this->FlushIntervalSec = fVar7;
  this->bShouldCacheEvents = true;
  QueryPerformanceCounter(&local_res18);
  dVar22 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->bInDestructor = false;
  this->NextEventFlushTime = dVar22 + (double)this->FlushIntervalSec + __real_4170000000000000;
  if (param_1->UseLegacyProtocol == false) {
    iVar18 = param_1->PreallocatedPayloadSize;
  }
  FAnalyticsProviderETEventCache::FAnalyticsProviderETEventCache
            (&this->EventCache,param_1->MaximumPayloadSize,iVar18);
  (this->EventRecordedCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventRecordedCallbacks).ArrayNum = 0;
  (this->EventRecordedCallbacks).ArrayMax = 0;
  *(undefined8 *)&this->ShouldRecordEventFunc = 0;
  *(undefined8 *)&(this->ShouldRecordEventFunc).field_0x28 = 0;
  (this->HttpRetryManager).Object = (FManager *)0x0;
  (this->HttpRetryManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RetryServers).Object = (FRetryDomains *)0x0;
  (this->RetryServers).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  *(undefined8 *)&this->HttpHeaders = 0;
  *(undefined8 *)&(this->HttpHeaders).field_0x8 = 0;
  *(undefined8 *)&(this->HttpHeaders).field_0x20 = 0;
  *(undefined4 *)&(this->HttpHeaders).field_0x28 = 0;
  *(undefined4 *)&(this->HttpHeaders).field_0x2c = 0x80;
  *(undefined4 *)&(this->HttpHeaders).field_0x34 = 0;
  *(undefined4 *)&(this->HttpHeaders).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HttpHeaders).field_0x40 = 0;
  *(undefined4 *)&(this->HttpHeaders).field_0x48 = 0;
  (this->UserAgentCache).CachedUserAgent.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UserAgentCache).CachedUserAgent.Data.ArrayNum = 0;
  (this->UserAgentCache).CachedUserAgent.Data.ArrayMax = 0;
  (this->UserAgentCache).CachedAgentVersion = 0;
  iVar9 = (this->Config).APIKeyET.Data.ArrayNum;
  *(undefined8 *)&this->OnPreAnalyticsEventProcessedDelegate = 0;
  *(undefined8 *)&(this->OnPreAnalyticsEventProcessedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreAnalyticsEventProcessedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnAnalyticsEventQueuedDelegate = 0;
  *(undefined8 *)&(this->OnAnalyticsEventQueuedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnAnalyticsEventQueuedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreAnalyticsEventProcessedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnAnalyticsEventQueuedDelegate).field_0x18 = 2;
  if (iVar9 < 2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
  }
  uVar4 = (param_1->AltAPIServersET).ArrayNum;
  local_98.bIsSet = false;
  local_res10.bIsSet = true;
  local_res10.TypedValue = uVar4;
  pTVar11 = ::operator_new(0x88);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pFVar20 = (FManager *)&DAT_00000010;
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
LAB_143192ab7:
    if (((pFVar20->_padding_ == 0) || (pFVar20->_padding_ == 0)) ||
       (*(int *)(pFVar20->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar20->_padding_ = (longlong)pFVar20;
      if (pTVar11 != (TReferenceControllerBase<1> *)pFVar20->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)pFVar20->_padding_;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        pFVar20->_padding_ = (longlong)pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    local_res20.bIsSet = false;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFManager_FHttpRetrySystem___00_SharedPointerInternals__6B_
    ;
    FHttpRetrySystem::FManager::FManager
              ((FManager *)(pTVar11 + 1),&local_res10,&local_98,&local_res20);
    pFVar20 = (FManager *)(pTVar11 + 1);
    if (pFVar20 != (FManager *)0x0) goto LAB_143192ab7;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FAnalyticsProviderET *)(*pcVar6)();
      return pFVar12;
    }
  }
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108 = pFVar20;
  local_100.ReferenceController = pTVar11;
  if (&this->HttpRetryManager != (TSharedPtr<FHttpRetrySystem::FManager,1> *)&local_108) {
    (this->HttpRetryManager).Object = pFVar20;
    local_108 = (FManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->HttpRetryManager).SharedReferenceCount,&local_100);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (uVar4 != 0) {
    iVar9 = (param_1->AltAPIServersET).ArrayNum;
    pFVar19 = (param_1->AltAPIServersET).AllocatorInstance.Data;
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150 = CONCAT44(local_150._4_4_,iVar9);
    if (iVar9 == 0) {
      local_150 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar9,0,&local_158,iVar9,(int *)((longlong)&local_150 + 4));
      ConstructItems<FString,FString,int>(local_158.Data,(FString *)pFVar19,iVar9);
    }
    local_a8 = (this->Config).APIServerET.Data.AllocatorInstance.Data;
    iVar9 = (this->Config).APIServerET.Data.ArrayNum;
    iStack_a0 = iVar9 + -1;
    if (iVar9 == 0) {
      iStack_a0 = 0;
    }
    local_88._12_4_ = uStack_9c;
    local_88.Size = iStack_a0;
    local_88.DataPtr = (wchar_t *)local_a8;
    FGenericPlatformHttp::GetUrlDomain(&local_138,&local_88);
    pFVar19 = local_158.Data + (longlong)(int)local_150._0_4_ * 0x10;
    uVar15 = local_138.Data._8_8_;
    FVar16.Data = local_158.Data;
    if (local_158.Data != pFVar19) {
      do {
        iVar9 = *(int *)(FVar16.Data + 8);
        if (iVar9 == (int)uVar15) {
          if (iVar9 < 2) goto LAB_143192d72;
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)FVar16.Data,
                             (wchar_t *)local_138.Data.AllocatorInstance.Data);
          bVar8 = iVar9 == 0;
          uVar15 = local_138.Data._8_8_;
        }
        else {
          bVar8 = iVar9 + (int)uVar15 == 1;
        }
        if (bVar8) goto LAB_143192d72;
        FVar16.Data = FVar16.Data + 0x10;
      } while (FVar16.Data != pFVar19);
    }
    iVar9 = (int)local_150._0_4_;
    if ((local_158.Data <= (FScriptContainerElement *)&local_138) &&
       ((FScriptContainerElement *)&local_138 <
        local_158.Data + (longlong)(int)local_150._4_4_ * 0x10)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FAnalyticsProviderET *)(*pcVar6)();
        return pFVar12;
      }
      iVar9 = (int)local_150._0_4_;
    }
    if ((atomic<int>)iVar9 == local_150._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_158,(int *)((longlong)&local_150 + 4));
    }
    local_150 = CONCAT44(local_150._4_4_,iVar9 + 1);
    memmove(local_158.Data + 0x10,local_158.Data,(longlong)iVar9 << 4);
    _Src.Data = local_138.Data.AllocatorInstance.Data;
    FVar16.Data = local_158.Data;
    *(undefined8 *)local_158.Data = 0;
    *(int *)(local_158.Data + 8) = local_138.Data.ArrayNum;
    if (local_138.Data.ArrayNum == 0) {
      *(int *)(local_158.Data + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_138.Data.ArrayNum,0,(ForAnyElementType *)local_158.Data,
                 local_138.Data.ArrayNum,(int *)(local_158.Data + 0xc));
      memcpy(*(void **)FVar16.Data,_Src.Data,(longlong)local_138.Data.ArrayNum * 2);
    }
LAB_143192d72:
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    FStack_d0.ReferenceController = ::operator_new(0x28);
    if (FStack_d0.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_d8 = ___xmm_00000000000000000000000000000010;
      pFVar21 = (FRetryDomains *)&DAT_00000010;
      FStack_d0.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_d0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (FStack_d0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_d0.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFRetryDomains_FHttpRetrySystem___00_SharedPointerInternals__6B_
      ;
      FStack_d0.ReferenceController[1]._padding_ = (longlong)local_158.Data;
      local_158.Data = (FScriptContainerElement *)0x0;
      FStack_d0.ReferenceController[1].SharedReferenceCount = local_150._0_4_;
      FStack_d0.ReferenceController[1].WeakReferenceCount = local_150._4_4_;
      local_150 = 0;
      *(undefined4 *)&FStack_d0.ReferenceController[2]._padding_ = 0;
      pFVar21 = (FRetryDomains *)(FStack_d0.ReferenceController + 1);
      if ((pFVar21 == (FRetryDomains *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FAnalyticsProviderET *)(*pcVar6)();
        return pFVar12;
      }
      LOCK();
      (FStack_d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = FStack_d0.ReferenceController;
      local_d8 = pFVar21;
    }
    if (&this->RetryServers != (TSharedPtr<FHttpRetrySystem::FRetryDomains,1> *)&local_d8) {
      (this->RetryServers).Object = pFVar21;
      local_d8 = (FRetryDomains *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->RetryServers).SharedReferenceCount,&FStack_d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_158.Data,(int)local_150._0_4_);
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
  }
  pwVar13 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar13,L"TELEMETRYTESTING");
  if (bVar8) {
    FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogAnalytics,All);
    this->bShouldCacheEvents = false;
  }
  pwVar13 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar13,L"ANALYTICSDISABLECACHING");
  if (bVar8) {
    FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogAnalytics,All);
    this->bShouldCacheEvents = false;
  }
  if (5 < (byte)LogAnalytics._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
  }
  local_128.Data.ArrayNum = (param_1->AppVersionET).Data.ArrayNum;
  lVar17 = (longlong)local_128.Data.ArrayNum;
  pFVar19 = (param_1->AppVersionET).Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_128.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_128.Data.ArrayNum,0,(ForAnyElementType *)&local_128,local_128.Data.ArrayNum
               ,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,pFVar19,lVar17 * 2);
  }
  pwVar13 = FCommandLine::Get();
  FParse::Value(pwVar13,L"ANALYTICSAPPVERSION=",&local_128,false,(wchar_t **)0x0);
  bVar8 = 1 < local_128.Data.ArrayNum;
  if (bVar8) {
    pwVar13 = FApp::GetBuildVersion();
    pFVar14 = ::FString::Replace(&local_128,&local_78,L"%VERSION%",pwVar13,CaseSensitive);
  }
  else {
    pwVar13 = FApp::GetBuildVersion();
    pFVar14 = ::FString::FString(local_68,pwVar13);
  }
  pFVar3 = &(this->Config).AppVersionET;
  if (pFVar3 != pFVar14) {
    pFVar19 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar19 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar19);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Config).AppVersionET.Data.ArrayNum = (pFVar14->Data).ArrayNum;
    (this->Config).AppVersionET.Data.ArrayMax = (pFVar14->Data).ArrayMax;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
  }
  if ((bVar8) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((!bVar8) && (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  if ((this->Config).APIEndpointET.Data.ArrayNum < 2) {
    ::FString::FString(&local_118,L"datarouter/api/v1/public/data");
    pFVar14 = &(this->Config).APIEndpointET;
    if (pFVar14 != &local_118) {
      pFVar19 = (pFVar14->Data).AllocatorInstance.Data;
      if (pFVar19 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar19);
      }
      (pFVar14->Data).AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
      (this->Config).APIEndpointET.Data.ArrayNum = local_118.Data.ArrayNum;
      (this->Config).APIEndpointET.Data.ArrayMax = local_118.Data.ArrayMax;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if (((this->Config).APIServerET.Data.ArrayNum < 2) && (2 < (byte)LogAnalytics._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
  }
  if ((this->Config).UseLegacyProtocol == false) {
    iVar9 = (param_1->AppEnvironment).Data.ArrayNum;
    bVar8 = 1 < iVar9;
    if (bVar8) {
      pFVar19 = (param_1->AppEnvironment).Data.AllocatorInstance.Data;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = iVar9;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,&local_f8,iVar9,&local_ec);
      memcpy(local_f8.Data,pFVar19,(longlong)iVar9 * 2);
      FVar16.Data = local_f8.Data;
      local_c8.Data.ArrayNum = local_f0;
    }
    else {
      ::FString::FString(&local_c8,L"datacollector-binary");
      FVar16.Data = local_c8.Data.AllocatorInstance.Data;
    }
    iVar9 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    ::FString::AssignRange(&(this->Config).AppEnvironment,(wchar_t *)FVar16.Data,iVar9);
    if ((bVar8) && (local_f8.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_f8.Data);
    }
    if ((!bVar8) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    iVar9 = (param_1->UploadType).Data.ArrayNum;
    bVar8 = 1 < iVar9;
    if (bVar8) {
      pFVar19 = (param_1->UploadType).Data.AllocatorInstance.Data;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = iVar9;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,&local_e8,iVar9,&local_dc);
      memcpy(local_e8.Data,pFVar19,(longlong)iVar9 * 2);
      FVar16.Data = local_e8.Data;
      local_b8.Data.ArrayNum = local_e0;
    }
    else {
      ::FString::FString(&local_b8,L"eteventstream");
      FVar16.Data = local_b8.Data.AllocatorInstance.Data;
    }
    iVar9 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    ::FString::AssignRange(&(this->Config).UploadType,(wchar_t *)FVar16.Data,iVar9);
    if ((bVar8) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_e8.Data);
    }
    if ((!bVar8) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  pwVar13 = FCommandLine::Get();
  bVar8 = FParse::Value(pwVar13,L"ANALYTICSUSERID=",&local_148,false,(wchar_t **)0x0);
  if (bVar8) {
    pwVar13 = FCommandLine::Get();
    bVar8 = FParse::Value(pwVar13,L"ANALYTICSUSERID=",&this->UserID,false,(wchar_t **)0x0);
    if (bVar8) {
      iVar9 = (this->UserID).Data.ArrayNum;
      if (iVar9 == local_148.Data.ArrayNum) {
        if (iVar9 < 2) goto LAB_1431933cb;
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->UserID).Data.AllocatorInstance.Data,
                           (wchar_t *)local_148.Data.AllocatorInstance.Data);
        bVar8 = iVar9 == 0;
      }
      else {
        bVar8 = iVar9 + local_148.Data.ArrayNum == 1;
      }
      if ((!bVar8) && (4 < (byte)LogAnalytics._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
      }
    }
    else {
      if (4 < (byte)LogAnalytics._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
      }
      (**(code **)(*(longlong *)this + 0x20))(this);
      FVar16.Data = local_148.Data.AllocatorInstance.Data;
      pFVar14 = &this->UserID;
      if (pFVar14 != &local_148) {
        iVar18 = local_148.Data.ArrayNum;
        lVar17 = (longlong)local_148.Data.ArrayNum;
        iVar9 = (this->UserID).Data.ArrayMax;
        (this->UserID).Data.ArrayNum = local_148.Data.ArrayNum;
        if ((local_148.Data.ArrayNum == 0) && (iVar9 == 0)) {
          (this->UserID).Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_148.Data.ArrayNum,iVar9,(ForAnyElementType *)pFVar14,
                     local_148.Data.ArrayNum,&(this->UserID).Data.ArrayMax);
          if (iVar18 != 0) {
            memcpy((pFVar14->Data).AllocatorInstance.Data,FVar16.Data,lVar17 * 2);
          }
        }
      }
    }
  }
LAB_1431933cb:
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FAnalyticsProviderET @ 143193c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnalyticsProviderET::~FAnalyticsProviderET(FAnalyticsProviderET *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  uVar8 = (ulonglong)_tls_index;
  *(undefined ***)this = &_vftable__for__IAnalyticsProviderET__;
  this->bInDestructor = true;
  *(undefined ***)&this->field_0x18 = &_vftable__for__FTSTickerObjectBase__;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name418,L"Analytics");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name418,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name418,true);
  if (this->bSessionInProgress != false) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    pcVar3 = *(code **)(*(longlong *)this + 0x100);
    ::FString::FString(&local_28,L"SessionEnd");
    if (pcVar3 == RecordEvent) {
      RecordEvent(this,&local_28,&local_38);
    }
    else {
      (*pcVar3)();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_38.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (3 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
  }
  if (*(code **)(*(longlong *)this + 0x20) == FlushEvents) {
    FlushEvents(this);
  }
  else {
    (**(code **)(*(longlong *)this + 0x20))();
  }
  ::FString::Empty(&this->SessionID);
  this->bSessionInProgress = false;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAnalyticsEventQueuedDelegate).field_0x8,
             *(int *)&(this->OnAnalyticsEventQueuedDelegate).field_0x10);
  pvVar4 = *(void **)&(this->OnAnalyticsEventQueuedDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAnalyticsEventQueuedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPreAnalyticsEventProcessedDelegate).field_0x8,
             *(int *)&(this->OnPreAnalyticsEventProcessedDelegate).field_0x10);
  pvVar4 = *(void **)&(this->OnPreAnalyticsEventProcessedDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreAnalyticsEventProcessedDelegate);
  pFVar5 = (this->UserAgentCache).CachedUserAgent.Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->HttpHeaders).field_0x48 = 0;
  pvVar4 = *(void **)&(this->HttpHeaders).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HttpHeaders);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RetryServers).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HttpRetryManager).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->ShouldRecordEventFunc != 0) {
    plVar6 = *(longlong **)&(this->ShouldRecordEventFunc).field_0x28;
    plVar7 = (longlong *)&(this->ShouldRecordEventFunc).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = plVar6;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  DestructItems<TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&,bool)>,int>
            ((TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&,bool)>
              *)(this->EventRecordedCallbacks).AllocatorInstance.Data,
             (this->EventRecordedCallbacks).ArrayNum);
  pFVar5 = (this->EventRecordedCallbacks).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FAnalyticsProviderETEventCache::~FAnalyticsProviderETEventCache(&this->EventCache);
  pFVar5 = (this->SessionID).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->UserID).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FAnalyticsET::Config::~Config(&this->Config);
  plVar6 = *(longlong **)&this->field_0x38;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)&this->field_0x18);
  DestructItems<FAnalyticsEventAttribute,int>
            (*(FAnalyticsEventAttribute **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined ***)this = &___7IAnalyticsProvider__6B_;
  return;
}

// BlockUntilFlushed @ 143196eb0

void __thiscall FAnalyticsProviderET::BlockUntilFlushed(FAnalyticsProviderET *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name849,L"Analytics");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name849,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name849,true);
  (**(code **)(*(longlong *)this + 0x20))(this);
  if ((this->HttpRetryManager).Object == (FManager *)0x0) {
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
  FHttpRetrySystem::FManager::BlockUntilFlushed((this->HttpRetryManager).Object,param_1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CreateRequest @ 143197970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<IHttpRequest,1> * __thiscall
FAnalyticsProviderET::CreateRequest
          (FAnalyticsProviderET *this,TSharedRef<IHttpRequest,1> *__return_storage_ptr__,
          EAnalyticsRecordEventMode param_1)

{
  undefined1 *puVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar2
  ;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  IHttpRequest *pIVar7;
  code *pcVar8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar9
  ;
  bool bVar10;
  FModuleManager *this_00;
  FName *pFVar11;
  TSharedRef<IHttpRequest,1> *pTVar12;
  TSharedRef<FHttpRetrySystem::FRequest,1> *pTVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 auStackY_238 [32];
  undefined1 local_1e7 [3];
  FLLMScope local_1e4;
  int local_1e0;
  TOptional<unsigned_int> local_1dc;
  TOptional<unsigned_int> local_1d4;
  FMemScope local_1c8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  undefined1 *local_1b0;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int local_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  FString local_160;
  FExponentialBackoffCurve local_150;
  FName local_138;
  TOptional<double> local_130;
  TSharedRef<FHttpRetrySystem::FRequest,1> local_120 [2];
  undefined4 local_f4;
  undefined1 local_e8 [24];
  undefined8 uStack_d0;
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_b0;
  ulonglong local_a0;
  undefined1 local_98 [24];
  undefined8 uStack_80;
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_60;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name433,L"Analytics");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_1e4,LLMScope_Name433,false,None,Default,true);
  FMemScope::FMemScope(&local_1c8,&LLMScope_Name433,true);
  this_00 = FModuleManager::Get();
  pFVar11 = ::FName::FName(&local_138,"HTTP");
  bVar10 = FModuleManager::IsModuleLoaded(this_00,*pFVar11);
  if (!bVar10) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6957618179367502258>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\IAnalyticsProviderET.cpp"
                        ,0x1b2,"FModuleManager::Get().IsModuleLoaded(\"HTTP\")");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TSharedRef<IHttpRequest,1> *)(*pcVar8)();
      return pTVar12;
    }
    if (3 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
  }
  if (((this->HttpRetryManager).Object == (FManager *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pTVar12 = (TSharedRef<IHttpRequest,1> *)(*pcVar8)();
    return pTVar12;
  }
  local_150.MaxBackoffSeconds = 60.0;
  local_1dc.bIsSet = false;
  local_150.Base = ___xmm_3f8000003f0000003f80000040000000;
  local_150.ExponentBias = _UNK_150a676b4;
  local_150.MinCoefficient = _UNK_150a676b8;
  local_150.MaxCoefficient = _UNK_150a676bc;
  local_60.InlineData[0] = '\0';
  local_60.InlineData[1] = '\0';
  local_60.InlineData[2] = '\0';
  local_60.InlineData[3] = '\0';
  local_60._padding_ = 0;
  local_98._16_8_ = 0;
  uStack_80 = 0;
  local_50 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  iVar16 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8._16_8_ = 0;
  uStack_d0 = 0;
  local_b0.InlineData[0] = '\0';
  local_b0.InlineData[1] = '\0';
  local_b0.InlineData[2] = '\0';
  local_b0.InlineData[3] = '\0';
  local_b0._padding_ = 0;
  local_a0 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_b0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_130.bIsSet = false;
  local_1d4.bIsSet = false;
  pTVar13 = FHttpRetrySystem::FManager::CreateRequest
                      ((this->HttpRetryManager).Object,local_120,&local_1d4,&local_130,
                       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,
                       (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                       &this->RetryServers,&local_1dc,&local_150);
  __return_storage_ptr__->Object = (IHttpRequest *)pTVar13->Object;
  pTVar6 = (pTVar13->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120[0].SharedReferenceCount.ReferenceController);
  local_a0 = local_a0 & 0xffffffff00000000;
  if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b0.SecondaryData);
  }
  iVar4 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  local_50 = local_50 & 0xffffffff00000000;
  if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60.SecondaryData);
  }
  iVar4 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  puVar1 = &(this->HttpHeaders).field_0x10;
  uStack_1b4 = 1;
  iVar4 = *(int *)&(this->HttpHeaders).field_0x28;
  pTVar2 = &this->HttpHeaders;
  local_1a0 = 0;
  iStack_1a4 = iVar16;
  if (iVar4 != 0) {
    puVar21 = *(uint **)&(this->HttpHeaders).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar19 = *puVar21;
    local_1a0 = 0;
    iVar16 = 0;
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar16;
      local_1a0 = local_1a0 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_1a4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_143197d9e;
      uVar19 = puVar21[lVar15 + 1];
    }
    uStack_1b4 = -uVar19 & uVar19;
    uVar3 = (ulonglong)uStack_1b4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1e0 = (int)lVar15;
    iStack_1a4 = local_1a0 + -1 + local_1e0;
    if (iVar4 < iStack_1a4) {
      iStack_1a4 = iVar4;
    }
  }
LAB_143197d9e:
  uStack_19c = local_f4;
  iStack_198 = *(int *)&(this->HttpHeaders).field_0x8 - *(int *)&(this->HttpHeaders).field_0x34;
  uVar19 = *(uint *)&(this->HttpHeaders).field_0x28;
  TStack_188._padding_ = CONCAT44(uStack_1b4,iVar16);
  uStack_1a8 = 0xffffffff;
  uVar18 = uVar19 & 0xffffffe0;
  TStack_188.CurrentBitIndex = iStack_1a4;
  TStack_188.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar19 >> 5;
  TStack_188._28_4_ = local_f4;
  TStack_188.BaseBitIndex = local_1a0;
  uStack_168 = CONCAT44(uStack_194,iStack_198);
  local_1c0 = pTVar2;
  iStack_1b8 = iVar16;
  local_1b0 = puVar1;
  local_190 = pTVar2;
  TStack_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pTVar12 = (TSharedRef<IHttpRequest,1> *)(*pcVar8)();
    return pTVar12;
  }
  uVar5 = *(uint *)&(this->HttpHeaders).field_0x28;
  if (uVar19 != uVar5) {
    puVar20 = *(undefined1 **)&(this->HttpHeaders).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar17;
      uVar18 = uVar18 + 0x20;
      iVar17 = iVar17 + 1;
      uVar19 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_143197ea0;
      uVar19 = *(uint *)(puVar20 + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar19 = (int)lVar15 + -1 + uVar18;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_143197ea0:
  while( true ) {
    pTVar9 = local_190;
    if (*(int *)&local_190->field_0x8 - *(int *)&local_190->field_0x34 != (int)uStack_168) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e7);
    }
    if (((TStack_188.CurrentBitIndex == uVar19) &&
        (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    lVar15 = *(longlong *)pTVar9 + (longlong)TStack_188.CurrentBitIndex * 0x28;
    (**(code **)(*(longlong *)__return_storage_ptr__->Object + 0xb0))
              (__return_storage_ptr__->Object,lVar15,lVar15 + 0x10);
    TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
  }
  if (param_1 == Immediate) {
    pIVar7 = __return_storage_ptr__->Object;
    pcVar8 = *(code **)(*(longlong *)pIVar7 + 0x78);
    pwVar14 = ::LexToString(ImmediateRequest);
    ::FString::FString(&local_160,pwVar14);
    (*pcVar8)(pIVar7,HttpRequestOptions::RequestMode,&local_160);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  FMemScope::~FMemScope(&local_1c8);
  FLLMScope::~FLLMScope(&local_1e4);
  return __return_storage_ptr__;
}

// EndSession @ 143199da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnalyticsProviderET::EndSession(FAnalyticsProviderET *this)

{
  code *pcVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FAnalyticsEventAttribute *local_28;
  undefined8 local_20;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name418,L"Analytics");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name418,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name418,true);
  if (this->bSessionInProgress != false) {
    pcVar1 = *(code **)(*(longlong *)this + 0x100);
    local_28 = (FAnalyticsEventAttribute *)0x0;
    local_20 = 0;
    ::FString::FString(&local_18,L"SessionEnd");
    (*pcVar1)(this,&local_18,&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    DestructItems<FAnalyticsEventAttribute,int>(local_28,(int)local_20);
    if (local_28 != (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_28);
    }
    if (3 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
  }
  (**(code **)(*(longlong *)this + 0x20))(this);
  ::FString::Empty(&this->SessionID);
  this->bSessionInProgress = false;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// EventRequestComplete @ 14319b280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnalyticsProviderET::EventRequestComplete
          (FAnalyticsProviderET *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  IHttpResponse *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined7 in_register_00000089;
  void *local_28 [2];
  
  pIVar1 = param_2->Object;
  if (pIVar1 == (IHttpResponse *)0x0) {
    if (6 < (byte)LogAnalytics._0_1_) {
      if ((param_1->Object == (IHttpRequest *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)**(undefined8 **)param_1->Object)();
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
  }
  else {
    if (6 < (byte)LogAnalytics._0_1_) {
      (**(code **)((longlong)*pIVar1 + 0x60))
                (pIVar1,local_28,param_2,CONCAT71(in_register_00000089,param_3));
      if ((param_2->Object == (IHttpResponse *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((longlong)*param_2->Object + 0x58))();
      if ((param_1->Object == (IHttpRequest *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)**(undefined8 **)param_1->Object)();
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
    }
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)((longlong)*param_2->Object + 0x58))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteRequest @ 14319b6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnalyticsProviderET::ExecuteRequest
          (FAnalyticsProviderET *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          int *param_2,int *param_3,EAnalyticsRecordEventMode param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  IHttpRequest *pIVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_void___cdecl_FAnalyticsProviderET::ExecuteRequest(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,int_&,int_&,EAnalyticsRecordEventMode)_::_21_::FStat_STAT_FlushEventsHttpRequest>
  FVar10;
  TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  *this_00;
  longlong lVar11;
  FName FVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FName local_res8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_res10;
  FName local_res18;
  FString local_78;
  FString local_68;
  TSharedRef<IHttpRequest,1> local_58;
  TStringView<wchar_t> local_48;
  
  *param_3 = 0;
  *param_2 = 0;
  local_78.Data.ArrayNum = (this->Config).APIEndpointET.Data.ArrayNum;
  lVar11 = (longlong)local_78.Data.ArrayNum;
  pFVar16 = (this->Config).APIEndpointET.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res10 = param_1;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,pFVar16,lVar11 * 2);
  }
  local_58.Object = (IHttpRequest *)(this->SessionID).Data.AllocatorInstance.Data;
  iVar14 = (this->SessionID).Data.ArrayNum;
  local_58.SharedReferenceCount.ReferenceController._0_4_ = iVar14 + -1;
  if (iVar14 == 0) {
    local_58.SharedReferenceCount.ReferenceController._0_4_ = 0;
  }
  local_48._12_4_ = local_58.SharedReferenceCount.ReferenceController._4_4_;
  local_48.Size = (int)local_58.SharedReferenceCount.ReferenceController;
  local_48.DataPtr = (wchar_t *)local_58.Object;
  pFVar8 = FGenericPlatformHttp::UrlEncode(&local_68,&local_48);
  ::FString::ConcatCF((FString *)&local_58,L"?SessionID=",pFVar8);
  iVar13 = 0;
  iVar14 = (int)local_58.SharedReferenceCount.ReferenceController + -1;
  if ((int)local_58.SharedReferenceCount.ReferenceController == 0) {
    iVar14 = iVar13;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Object,iVar14);
  if (local_58.Object != (IHttpRequest *)0x0) {
    FMemory::Free(local_58.Object);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_58.Object = (IHttpRequest *)(this->Config).APIKeyET.Data.AllocatorInstance.Data;
  iVar14 = (this->Config).APIKeyET.Data.ArrayNum;
  local_58.SharedReferenceCount.ReferenceController._0_4_ = iVar14 + -1;
  if (iVar14 == 0) {
    local_58.SharedReferenceCount.ReferenceController._0_4_ = iVar13;
  }
  local_48._12_4_ = local_58.SharedReferenceCount.ReferenceController._4_4_;
  local_48.Size = (int)local_58.SharedReferenceCount.ReferenceController;
  local_48.DataPtr = (wchar_t *)local_58.Object;
  pFVar8 = FGenericPlatformHttp::UrlEncode(&local_68,&local_48);
  ::FString::ConcatCF((FString *)&local_58,L"&AppID=",pFVar8);
  iVar14 = (int)local_58.SharedReferenceCount.ReferenceController + -1;
  if ((int)local_58.SharedReferenceCount.ReferenceController == 0) {
    iVar14 = iVar13;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Object,iVar14);
  if (local_58.Object != (IHttpRequest *)0x0) {
    FMemory::Free(local_58.Object);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_58.Object = (IHttpRequest *)(this->Config).AppVersionET.Data.AllocatorInstance.Data;
  iVar14 = (this->Config).AppVersionET.Data.ArrayNum;
  local_58.SharedReferenceCount.ReferenceController._0_4_ = iVar14 + -1;
  if (iVar14 == 0) {
    local_58.SharedReferenceCount.ReferenceController._0_4_ = iVar13;
  }
  local_48._12_4_ = local_58.SharedReferenceCount.ReferenceController._4_4_;
  local_48.Size = (int)local_58.SharedReferenceCount.ReferenceController;
  local_48.DataPtr = (wchar_t *)local_58.Object;
  pFVar8 = FGenericPlatformHttp::UrlEncode(&local_68,&local_48);
  ::FString::ConcatCF((FString *)&local_58,L"&AppVersion=",pFVar8);
  iVar14 = (int)local_58.SharedReferenceCount.ReferenceController + -1;
  if ((int)local_58.SharedReferenceCount.ReferenceController == 0) {
    iVar14 = iVar13;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Object,iVar14);
  if (local_58.Object != (IHttpRequest *)0x0) {
    FMemory::Free(local_58.Object);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_58.Object = (IHttpRequest *)(this->UserID).Data.AllocatorInstance.Data;
  iVar14 = (this->UserID).Data.ArrayNum;
  local_58.SharedReferenceCount.ReferenceController._0_4_ = iVar14 + -1;
  if (iVar14 == 0) {
    local_58.SharedReferenceCount.ReferenceController._0_4_ = iVar13;
  }
  local_48._12_4_ = local_58.SharedReferenceCount.ReferenceController._4_4_;
  local_48.Size = (int)local_58.SharedReferenceCount.ReferenceController;
  local_48.DataPtr = (wchar_t *)local_58.Object;
  pFVar8 = FGenericPlatformHttp::UrlEncode(&local_68,&local_48);
  ::FString::ConcatCF((FString *)&local_58,L"&UserID=",pFVar8);
  iVar14 = (int)local_58.SharedReferenceCount.ReferenceController + -1;
  if ((int)local_58.SharedReferenceCount.ReferenceController == 0) {
    iVar14 = iVar13;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Object,iVar14);
  if (local_58.Object != (IHttpRequest *)0x0) {
    FMemory::Free(local_58.Object);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_58.Object = (IHttpRequest *)(this->Config).AppEnvironment.Data.AllocatorInstance.Data;
  iVar14 = (this->Config).AppEnvironment.Data.ArrayNum;
  local_58.SharedReferenceCount.ReferenceController._0_4_ = iVar14 + -1;
  if (iVar14 == 0) {
    local_58.SharedReferenceCount.ReferenceController._0_4_ = iVar13;
  }
  local_48._12_4_ = local_58.SharedReferenceCount.ReferenceController._4_4_;
  local_48.Size = (int)local_58.SharedReferenceCount.ReferenceController;
  local_48.DataPtr = (wchar_t *)local_58.Object;
  pFVar8 = FGenericPlatformHttp::UrlEncode(&local_68,&local_48);
  ::FString::ConcatCF((FString *)&local_58,L"&AppEnvironment=",pFVar8);
  iVar14 = (int)local_58.SharedReferenceCount.ReferenceController + -1;
  if ((int)local_58.SharedReferenceCount.ReferenceController == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Object,iVar14);
  if (local_58.Object != (IHttpRequest *)0x0) {
    FMemory::Free(local_58.Object);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_58.Object = (IHttpRequest *)(this->Config).UploadType.Data.AllocatorInstance.Data;
  iVar14 = (this->Config).UploadType.Data.ArrayNum;
  local_58.SharedReferenceCount.ReferenceController._0_4_ = iVar14 + -1;
  if (iVar14 == 0) {
    local_58.SharedReferenceCount.ReferenceController._0_4_ = 0;
  }
  local_48._8_8_ =
       CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                (int)local_58.SharedReferenceCount.ReferenceController);
  local_48.DataPtr = (wchar_t *)local_58.Object;
  pFVar8 = FGenericPlatformHttp::UrlEncode(&local_68,&local_48);
  ::FString::ConcatCF((FString *)&local_58,L"&UploadType=",pFVar8);
  iVar14 = (int)local_58.SharedReferenceCount.ReferenceController + -1;
  if ((int)local_58.SharedReferenceCount.ReferenceController == 0) {
    iVar14 = 0;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Object,iVar14);
  if (local_58.Object != (IHttpRequest *)0x0) {
    FMemory::Free(local_58.Object);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  iVar14 = local_78.Data.ArrayNum + -1 + param_1->ArrayNum;
  if (local_78.Data.ArrayNum == 0) {
    iVar14 = param_1->ArrayNum;
  }
  *param_2 = iVar14;
  if (6 < (byte)LogAnalytics._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FlushEventsHttpRequest ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAnalyticsProviderET::ExecuteRequest(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,int_&,int_&,EAnalyticsRecordEventMode)_::_21_::FStat_STAT_FlushEventsHttpRequest>
         )0x0) {
      pFVar9 = ::FName::FName(&local_res8,"STAT_FlushEventsHttpRequest");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FlushEventsHttpRequest,*pFVar9,
                 L"STAT_FlushEventsHttpRequest","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_FlushEventsHttpRequest;
  if (StatPtr_STAT_FlushEventsHttpRequest ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAnalyticsProviderET::ExecuteRequest(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,int_&,int_&,EAnalyticsRecordEventMode)_::_21_::FStat_STAT_FlushEventsHttpRequest>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res18,"STAT_FlushEventsHttpRequest");
    FVar10 = (FThreadSafeStaticStat<_private:_void___cdecl_FAnalyticsProviderET::ExecuteRequest(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,int_&,int_&,EAnalyticsRecordEventMode)_::_21_::FStat_STAT_FlushEventsHttpRequest>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FlushEventsHttpRequest,*pFVar9,
                          L"STAT_FlushEventsHttpRequest","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar10;
  bVar2 = false;
  bVar4 = false;
  if ((FVar12.ComparisonIndex.Value.Value == 0) && (FVar12.Number == 0)) {
LAB_14319bc49:
    bVar3 = false;
    FVar12.ComparisonIndex.Value = 0;
    FVar12.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = FVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\IAnalyticsProviderET.cpp"
                   ,0x1f9);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14319bc49;
    local_res8 = FVar12;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar3 = true;
  }
  CreateRequest(this,&local_58,param_4);
  pIVar5 = local_58.Object;
  pcVar1 = *(code **)(*(longlong *)local_58.Object + 0xb0);
  ::FString::FString((FString *)&local_48,L"application/json; charset=utf-8");
  ::FString::FString(&local_68,L"Content-Type");
  (*pcVar1)(pIVar5,&local_68,&local_48);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((IHttpRequest *)local_48.DataPtr != (IHttpRequest *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pIVar5 = local_58.Object;
  pcVar1 = *(code **)(*(longlong *)local_58.Object + 0xb0);
  if (((this->UserAgentCache).CachedUserAgent.Data.ArrayNum < 2) ||
     (uVar15 = (this->UserAgentCache).CachedAgentVersion,
     uVar6 = FGenericPlatformHttp::GetDefaultUserAgentVersion(), uVar15 != uVar6)) {
    FAnalyticsUserAgentCache::UpdateUserAgent(&this->UserAgentCache);
  }
  local_68.Data.ArrayNum = (this->UserAgentCache).CachedUserAgent.Data.ArrayNum;
  lVar11 = (longlong)local_68.Data.ArrayNum;
  pFVar16 = (this->UserAgentCache).CachedUserAgent.Data.AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,pFVar16,lVar11 * 2);
  }
  ::FString::FString((FString *)&local_48,L"User-Agent");
  (*pcVar1)(pIVar5,&local_48,&local_68);
  if ((IHttpRequest *)local_48.DataPtr != (IHttpRequest *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pIVar5 = local_58.Object;
  iVar13 = (this->Config).APIServerET.Data.ArrayNum;
  local_res8 = *(FName *)(*(longlong *)local_58.Object + 0x68);
  iVar14 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar14 = 0;
  }
  iVar7 = iVar14 + 1;
  local_68.Data.ArrayNum = iVar13;
  if ((iVar13 == 0) && (iVar7 != 0)) {
    pFVar16 = (this->Config).APIServerET.Data.AllocatorInstance.Data;
    iVar7 = iVar14 + 2;
LAB_14319bdcb:
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar7 == 0) {
      local_68.Data.ArrayMax = 0;
      goto LAB_14319be1c;
    }
  }
  else {
    pFVar16 = (this->Config).APIServerET.Data.AllocatorInstance.Data;
    if (iVar13 == 0) goto LAB_14319bdcb;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar15 = iVar7 + iVar13;
  if ((int)uVar15 < iVar13) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar15,0,(ForAnyElementType *)&local_68,iVar13,&local_68.Data.ArrayMax);
  if (iVar13 != 0) {
    memcpy(local_68.Data.AllocatorInstance.Data,pFVar16,(longlong)iVar13 * 2);
  }
LAB_14319be1c:
  ::FString::PathAppend(&local_68,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar14);
  (*(code *)local_res8)(pIVar5,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pIVar5 = local_58.Object;
  pcVar1 = *(code **)(*(longlong *)local_58.Object + 0x60);
  ::FString::FString((FString *)&local_48,L"POST");
  (*pcVar1)(pIVar5,&local_48);
  if ((IHttpRequest *)local_48.DataPtr != (IHttpRequest *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  (**(code **)(*(longlong *)local_58.Object + 0x80))(local_58.Object,local_res10);
  if (1 < (this->Config).APIUnixSocketPathET.Data.ArrayNum) {
    (**(code **)(*(longlong *)local_58.Object + 0x78))
              (local_58.Object,HttpRequestOptions::UnixSocketPath);
  }
  if (this->bInDestructor == false) {
    this_00 = (TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
               *)(**(code **)(*(longlong *)local_58.Object + 0xf0))();
    local_48._8_8_ = local_48._8_8_ & 0xffffffff00000000;
    local_48.DataPtr = (wchar_t *)EventRequestComplete;
    TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
    ::BindSP<FAnalyticsProviderET>(this_00,this,(pmf_65b880d0 *)&local_48);
  }
  TMulticastDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_&),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OnPreAnalyticsEventProcessedDelegate,&local_58);
  (**(code **)(*(longlong *)local_58.Object + 0xe8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                      (int)local_58.SharedReferenceCount.ReferenceController));
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar12,CycleScopeEnd);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// FlushEventLegacy @ 14319c380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnalyticsProviderET::FlushEventLegacy
          (FAnalyticsProviderET *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  IHttpRequest *pIVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FModuleManager *this_00;
  FName *pFVar7;
  FAnalyticsEventAttribute *pFVar8;
  FString *pFVar9;
  TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  *this_01;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FLLMScope local_res20 [2];
  FString local_318;
  FString local_308;
  TSharedRef<IHttpRequest,1> local_2f8;
  FString local_2e8;
  FMemScope local_2d8;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FScriptContainerElement *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FScriptContainerElement *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FString local_218;
  FString local_208;
  FScriptContainerElement *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FName local_1a8 [2];
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  FString local_178;
  FString local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  FString local_138;
  FString local_128;
  TStringView<wchar_t> local_118;
  FString local_108;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  code *local_78;
  longlong lStack_70;
  FAnalyticsEventAttribute local_68;
  
  this_00 = FModuleManager::Get();
  pFVar7 = ::FName::FName(local_1a8,"HTTP");
  bVar4 = FModuleManager::IsModuleLoaded(this_00,*pFVar7);
  if (bVar4) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name877,L"Analytics");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(local_res20,LLMScope_Name877,false,None,Default,true);
    FMemScope::FMemScope(&local_2d8,&LLMScope_Name877,true);
    iVar10 = 0;
    local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318.Data.ArrayNum = 0;
    local_318.Data.ArrayMax = 0;
    iVar5 = FAnalyticsProviderETEventCache::GetDefaultAttributeCount(&this->EventCache);
    if (0 < iVar5) {
      do {
        pFVar8 = FAnalyticsProviderETEventCache::GetDefaultAttribute
                           (&this->EventCache,&local_68,iVar10);
        local_258 = (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
        iVar1 = (pFVar8->AttrValueString).Data.ArrayNum;
        iStack_250 = iVar1 + -1;
        if (iVar1 == 0) {
          iStack_250 = 0;
        }
        local_198._12_4_ = uStack_24c;
        local_198.Size = iStack_250;
        local_198.DataPtr = (wchar_t *)local_258;
        FGenericPlatformHttp::UrlEncode(&local_168,&local_198);
        local_248 = (pFVar8->AttrName).Data.AllocatorInstance.Data;
        iVar1 = (pFVar8->AttrName).Data.ArrayNum;
        iStack_240 = iVar1 + -1;
        if (iVar1 == 0) {
          iStack_240 = 0;
        }
        local_188._12_4_ = uStack_23c;
        local_188.Size = iStack_240;
        local_188.DataPtr = (wchar_t *)local_248;
        FGenericPlatformHttp::UrlEncode(&local_178,&local_188);
        ::FString::PrintfImpl(&local_2d0,L"&AttributeName%d=%s&AttributeValue%d=%s");
        iVar1 = local_2d0.Data.ArrayNum + -1;
        if (local_2d0.Data.ArrayNum == 0) {
          iVar1 = 0;
        }
        ::FString::AppendChars(&local_318,(wchar_t *)local_2d0.Data.AllocatorInstance.Data,iVar1);
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_68.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_68.AttrValueString.Data.AllocatorInstance.Data);
        }
        if (local_68.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AttrName.Data.AllocatorInstance.Data);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar5);
    }
    iVar5 = param_2->ArrayNum;
    uVar12 = 0;
    uVar13 = uVar12;
    if (0 < iVar5) {
      do {
        uVar11 = (uint)uVar12;
        uVar6 = 0;
        if ((int)uVar11 < iVar5) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar14 = (param_2->AllocatorInstance).Data + uVar13;
        local_238 = *(wchar_t **)(pFVar14 + 0x10);
        iStack_230 = *(int *)(pFVar14 + 0x18) + -1;
        if (*(int *)(pFVar14 + 0x18) == 0) {
          iStack_230 = 0;
        }
        local_158._12_4_ = uStack_22c;
        local_158.Size = iStack_230;
        local_158.DataPtr = local_238;
        FGenericPlatformHttp::UrlEncode(&local_128,&local_158);
        local_228 = *(wchar_t **)pFVar14;
        iStack_220 = *(int *)(pFVar14 + 8) + -1;
        if (*(int *)(pFVar14 + 8) == 0) {
          iStack_220 = 0;
        }
        local_148._12_4_ = uStack_21c;
        local_148.Size = iStack_220;
        local_148.DataPtr = local_228;
        FGenericPlatformHttp::UrlEncode(&local_138,&local_148);
        ::FString::PrintfImpl(&local_2c0,L"&AttributeName%d=%s&AttributeValue%d=%s");
        iVar5 = local_2c0.Data.ArrayNum + -1;
        if (local_2c0.Data.ArrayNum == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars(&local_318,(wchar_t *)local_2c0.Data.AllocatorInstance.Data,iVar5);
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        iVar5 = param_2->ArrayNum;
        uVar13 = uVar13 + 0x30;
      } while ((int)(uVar11 + 1) < iVar5);
    }
    if (6 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
    CreateRequest(this,&local_2f8,Cached);
    pIVar3 = local_2f8.Object;
    pcVar2 = *(code **)(*(longlong *)local_2f8.Object + 0xb0);
    ::FString::FString(&local_208,L"text/plain");
    ::FString::FString(&local_218,L"Content-Type");
    (*pcVar2)(pIVar3,&local_218,&local_208);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF(&local_308,&(this->Config).APIServerET,&(this->Config).APIEndpointET);
    local_1f8 = (this->SessionID).Data.AllocatorInstance.Data;
    iVar5 = (this->SessionID).Data.ArrayNum;
    iStack_1f0 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_1f0 = 0;
    }
    local_118._12_4_ = uStack_1ec;
    local_118.Size = iStack_1f0;
    local_118.DataPtr = (wchar_t *)local_1f8;
    pFVar9 = FGenericPlatformHttp::UrlEncode(&local_108,&local_118);
    ::FString::ConcatCF(&local_2b0,L"SendEvent.1?SessionID=",pFVar9);
    iVar10 = 0;
    iVar5 = local_2b0.Data.ArrayNum + -1;
    if (local_2b0.Data.ArrayNum == 0) {
      iVar5 = iVar10;
    }
    ::FString::AppendChars(&local_308,(wchar_t *)local_2b0.Data.AllocatorInstance.Data,iVar5);
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    local_1e8 = (this->Config).APIKeyET.Data.AllocatorInstance.Data;
    iVar5 = (this->Config).APIKeyET.Data.ArrayNum;
    iStack_1e0 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_1e0 = iVar10;
    }
    local_f8._12_4_ = uStack_1dc;
    local_f8.Size = iStack_1e0;
    local_f8.DataPtr = (wchar_t *)local_1e8;
    pFVar9 = FGenericPlatformHttp::UrlEncode(&local_e8,&local_f8);
    ::FString::ConcatCF(&local_2a0,L"&AppID=",pFVar9);
    iVar5 = local_2a0.Data.ArrayNum + -1;
    if (local_2a0.Data.ArrayNum == 0) {
      iVar5 = iVar10;
    }
    ::FString::AppendChars(&local_308,(wchar_t *)local_2a0.Data.AllocatorInstance.Data,iVar5);
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    local_1d8 = (this->Config).AppVersionET.Data.AllocatorInstance.Data;
    iVar5 = (this->Config).AppVersionET.Data.ArrayNum;
    iStack_1d0 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_1d0 = iVar10;
    }
    local_d8._12_4_ = uStack_1cc;
    local_d8.Size = iStack_1d0;
    local_d8.DataPtr = (wchar_t *)local_1d8;
    pFVar9 = FGenericPlatformHttp::UrlEncode(&local_c8,&local_d8);
    ::FString::ConcatCF(&local_290,L"&AppVersion=",pFVar9);
    iVar10 = 0;
    iVar5 = local_290.Data.ArrayNum + -1;
    if (local_290.Data.ArrayNum == 0) {
      iVar5 = iVar10;
    }
    ::FString::AppendChars(&local_308,(wchar_t *)local_290.Data.AllocatorInstance.Data,iVar5);
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    local_1c8 = (this->UserID).Data.AllocatorInstance.Data;
    iVar5 = (this->UserID).Data.ArrayNum;
    iStack_1c0 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_1c0 = iVar10;
    }
    local_b8._12_4_ = uStack_1bc;
    local_b8.Size = iStack_1c0;
    local_b8.DataPtr = (wchar_t *)local_1c8;
    pFVar9 = FGenericPlatformHttp::UrlEncode(&local_a8,&local_b8);
    ::FString::ConcatCF(&local_280,L"&UserID=",pFVar9);
    iVar5 = local_280.Data.ArrayNum + -1;
    if (local_280.Data.ArrayNum == 0) {
      iVar5 = iVar10;
    }
    ::FString::AppendChars(&local_308,(wchar_t *)local_280.Data.AllocatorInstance.Data,iVar5);
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_1b8 = (param_1->Data).AllocatorInstance.Data;
    iVar5 = (param_1->Data).ArrayNum;
    iStack_1b0 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_1b0 = iVar10;
    }
    local_98._12_4_ = uStack_1ac;
    local_98.Size = iStack_1b0;
    local_98.DataPtr = (wchar_t *)local_1b8;
    pFVar9 = FGenericPlatformHttp::UrlEncode(&local_88,&local_98);
    ::FString::ConcatCF(&local_270,L"&EventName=",pFVar9);
    iVar5 = local_270.Data.ArrayNum + -1;
    if (local_270.Data.ArrayNum == 0) {
      iVar5 = iVar10;
    }
    ::FString::AppendChars(&local_308,(wchar_t *)local_270.Data.AllocatorInstance.Data,iVar5);
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    iVar5 = local_318.Data.ArrayNum + -1;
    if (local_318.Data.ArrayNum == 0) {
      iVar5 = iVar10;
    }
    ::FString::AppendChars(&local_308,(wchar_t *)local_318.Data.AllocatorInstance.Data,iVar5);
    (**(code **)(*(longlong *)local_2f8.Object + 0x68))(local_2f8.Object,&local_308);
    pIVar3 = local_2f8.Object;
    pcVar2 = *(code **)(*(longlong *)local_2f8.Object + 0x60);
    ::FString::FString(&local_2e8,L"GET");
    (*pcVar2)(pIVar3,&local_2e8);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    if (1 < (this->Config).APIUnixSocketPathET.Data.ArrayNum) {
      (**(code **)(*(longlong *)local_2f8.Object + 0x78))
                (local_2f8.Object,HttpRequestOptions::UnixSocketPath);
    }
    if (this->bInDestructor == false) {
      this_01 = (TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                 *)(**(code **)(*(longlong *)local_2f8.Object + 0xf0))();
      local_2e8.Data.ArrayNum = 0;
      local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)EventRequestComplete;
      lStack_70 = (ulonglong)(uint)local_2e8.Data.ArrayMax << 0x20;
      local_78 = EventRequestComplete;
      TDelegateRegistration<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
      ::BindSP<FAnalyticsProviderET>(this_01,this,(pmf_65b880d0 *)&local_78);
    }
    TMulticastDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_&),FDefaultDelegateUserPolicy>::
    Broadcast(&this->OnPreAnalyticsEventProcessedDelegate,&local_2f8);
    (**(code **)(*(longlong *)local_2f8.Object + 0xe8))();
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f8.SharedReferenceCount.ReferenceController);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    FMemScope::~FMemScope(&local_2d8);
    FLLMScope::~FLLMScope(local_res20);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6957618179367502699>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\IAnalyticsProviderET.cpp"
                       ,0x36b,"FModuleManager::Get().IsModuleLoaded(\"HTTP\")");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// FlushEvents @ 14319cd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnalyticsProviderET::FlushEvents(FAnalyticsProviderET *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnalyticsProviderET::FlushEvents(void)_::_3_::FStat_STAT_FAnalyticsProviderET_FlushEvents>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FAnalyticsProviderET_FlushEvents ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnalyticsProviderET::FlushEvents(void)_::_3_::FStat_STAT_FAnalyticsProviderET_FlushEvents>
           )0x0) {
        pFVar7 = ::FName::FName(&local_res20,"STAT_FAnalyticsProviderET_FlushEvents");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAnalyticsProviderET_FlushEvents,
                   *pFVar7,L"STAT_FAnalyticsProviderET_FlushEvents","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_FAnalyticsProviderET_FlushEvents;
  if (StatPtr_STAT_FAnalyticsProviderET_FlushEvents ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnalyticsProviderET::FlushEvents(void)_::_3_::FStat_STAT_FAnalyticsProviderET_FlushEvents>
       )0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_FAnalyticsProviderET_FlushEvents");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnalyticsProviderET::FlushEvents(void)_::_3_::FStat_STAT_FAnalyticsProviderET_FlushEvents>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAnalyticsProviderET_FlushEvents
                         ,*pFVar7,L"STAT_FAnalyticsProviderET_FlushEvents","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\IAnalyticsProviderET.cpp"
                   ,0x1d0);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14319cea2;
    }
  }
  bVar4 = false;
  FVar11 = local_50;
LAB_14319cea2:
  lpCriticalSection = &(this->EventCache).CachedEventsCS;
  while( true ) {
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->EventCache).CachedEventEntries.ArrayNum < 1) &&
       ((this->EventCache).FlushQueue.ArrayNum < 1)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (!bVar6) break;
    FlushEventsOnce(this);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FlushEventsOnce @ 14319d0b0

void __thiscall FAnalyticsProviderET::FlushEventsOnce(FAnalyticsProviderET *this)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FModuleManager *this_00;
  FName *pFVar4;
  FAnalyticsPerfTracker *pFVar5;
  double dVar6;
  FLLMScope local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50;
  FMemScope local_48;
  FName local_40;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_38 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name564,L"Analytics");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name564,false,None,Default,true);
  FMemScope::FMemScope(&local_48,&LLMScope_Name564,true);
  bVar3 = FAnalyticsProviderETEventCache::CanFlush(&this->EventCache);
  if (bVar3) {
    QueryPerformanceCounter(&local_58);
    local_res20[0] = 0;
    local_res18[0] = 0;
    dVar2 = (double)local_58.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    this_00 = FModuleManager::Get();
    pFVar4 = ::FName::FName(&local_40,"HTTP");
    bVar3 = FModuleManager::IsModuleLoaded(this_00,*pFVar4);
    if (bVar3) {
      FAnalyticsProviderETEventCache::FlushCacheUTF8(&this->EventCache,local_38);
      ExecuteRequest(this,local_38,local_res18,local_res20,Cached);
      if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].AllocatorInstance.Data);
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6957618179367502399>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\IAnalyticsProviderET.cpp"
                         ,0x23f,"FModuleManager::Get().IsModuleLoaded(\"HTTP\")");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = GetAnalyticsPerfTracker();
    QueryPerformanceCounter(&local_50);
    dVar6 = (double)local_50.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if (pFVar5->bEnabled != false) {
      pFVar5->FlushesThisWindow = pFVar5->FlushesThisWindow + 1;
      pFVar5->BytesThisWindow = pFVar5->BytesThisWindow + (longlong)local_res18[0];
      pFVar5->NumEventsThisWindow = pFVar5->NumEventsThisWindow + (longlong)local_res20[0];
      pFVar5->TimeThisWindow = (dVar6 - dVar2) + pFVar5->TimeThisWindow;
    }
  }
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// GetConfig @ 14319d420

Config * __thiscall FAnalyticsProviderET::GetConfig(FAnalyticsProviderET *this)

{
  return &this->Config;
}

// GetDefaultEventAttribute @ 14319d680

FAnalyticsEventAttribute * __thiscall
FAnalyticsProviderET::GetDefaultEventAttribute
          (FAnalyticsProviderET *this,FAnalyticsEventAttribute *__return_storage_ptr__,int param_1)

{
  FAnalyticsProviderETEventCache::GetDefaultAttribute
            (&this->EventCache,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetDefaultEventAttributeCount @ 14319d6b0

int __thiscall FAnalyticsProviderET::GetDefaultEventAttributeCount(FAnalyticsProviderET *this)

{
  int iVar1;
  
  iVar1 = FAnalyticsProviderETEventCache::GetDefaultAttributeCount(&this->EventCache);
  return iVar1;
}

// GetDefaultEventAttributesSafe @ 14319d6d0

TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> * __thiscall
FAnalyticsProviderET::GetDefaultEventAttributesSafe
          (FAnalyticsProviderET *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FAnalyticsEventAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar5;
  
  lpCriticalSection = &(this->EventCache).CachedEventsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->EventCache).CachedDefaultAttributes.ArrayNum;
  pFVar2 = (FAnalyticsEventAttribute *)
           (this->EventCache).CachedDefaultAttributes.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetSessionID @ 14319dc80

FString * __thiscall
FAnalyticsProviderET::GetSessionID(FAnalyticsProviderET *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->SessionID);
  return __return_storage_ptr__;
}

// GetUserID @ 14319dcd0

FString * __thiscall
FAnalyticsProviderET::GetUserID(FAnalyticsProviderET *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->UserID);
  return __return_storage_ptr__;
}

// OnAnalyticsEventQueued @ 14319e3a0

TMulticastDelegate<void___cdecl(bool_&,FAnalyticEventQueuedInfo_const_&),FDefaultDelegateUserPolicy>
* __thiscall FAnalyticsProviderET::OnAnalyticsEventQueued(FAnalyticsProviderET *this)

{
  return &this->OnAnalyticsEventQueuedDelegate;
}

// OnPreAnalyticsEventProcessed @ 14319e3b0

TMulticastDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_&),FDefaultDelegateUserPolicy> *
__thiscall FAnalyticsProviderET::OnPreAnalyticsEventProcessed(FAnalyticsProviderET *this)

{
  return &this->OnPreAnalyticsEventProcessedDelegate;
}

// RecordEvent @ 1431a04a0

void __thiscall
FAnalyticsProviderET::RecordEvent
          (FAnalyticsProviderET *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name655,L"Analytics");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name655,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name655,true);
  (**(code **)(*(longlong *)this + 0xf8))(this,param_1,param_2,0);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RecordEvent @ 1431a0590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnalyticsProviderET::RecordEvent
          (FAnalyticsProviderET *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2,
          EAnalyticsRecordEventMode param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  char local_res8 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  FString local_78;
  EAnalyticsRecordEventMode local_68 [8];
  FString *local_60;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *local_58;
  FDestructionSentinel local_50;
  
  cVar6 = (**(code **)(*(longlong *)this + 0x118))();
  if (cVar6 == '\0') {
    if (5 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
      return;
    }
  }
  else {
    local_res8[0] = '\x01';
    local_68[0] = param_3;
    local_60 = param_1;
    local_58 = param_2;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnAnalyticsEventQueuedDelegate,(FWriteAccessScope *)&local_50);
    puVar1 = &(this->OnAnalyticsEventQueuedDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar8 = false;
    uVar12 = *(int *)&(this->OnAnalyticsEventQueuedDelegate).field_0x10 - 1;
    if (-1 < (int)uVar12) {
      lVar14 = (longlong)(int)uVar12 << 4;
      bVar8 = false;
      do {
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&(this->OnAnalyticsEventQueuedDelegate).field_0x10) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnAnalyticsEventQueuedDelegate).field_0x8;
        if (((*(int *)(lVar14 + 8 + lVar3) == 0) ||
            (plVar4 = *(longlong **)(lVar14 + lVar3), plVar4 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar4 + 0x68))(plVar4,local_res8,local_68), cVar6 == '\0')) {
          bVar8 = true;
        }
        lVar14 = lVar14 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar1 = &(this->OnAnalyticsEventQueuedDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar8) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnAnalyticsEventQueuedDelegate,false);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_res8[0] == '\0') {
      if (5 < (byte)LogAnalytics._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
      }
    }
    else if (param_3 == Cached) {
      iVar2 = (this->EventRecordedCallbacks).ArrayNum;
      pFVar15 = (this->EventRecordedCallbacks).AllocatorInstance.Data;
      pFVar13 = pFVar15 + (longlong)iVar2 * 0x30;
      while( true ) {
        if ((this->EventRecordedCallbacks).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&,bool)>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_80);
        }
        if (pFVar15 == pFVar13) break;
        local_88[0] = 0;
        UE::Core::Private::Function::CheckCallable(*(void **)pFVar15);
        pcVar5 = *(code **)pFVar15;
        pFVar11 = pFVar15 + 0x10;
        if (*(FScriptContainerElement **)(pFVar15 + 0x28) != (FScriptContainerElement *)0x0) {
          pFVar11 = *(FScriptContainerElement **)(pFVar15 + 0x28);
        }
        uVar10 = (**(code **)(*(longlong *)pFVar11 + 8))();
        (*pcVar5)(uVar10,param_1,param_2,local_88);
        pFVar15 = pFVar15 + 0x30;
      }
      if ((this->Config).UseLegacyProtocol == false) {
        local_78.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
        (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = (param_1->Data).ArrayNum;
        local_78.Data.ArrayMax = (param_1->Data).ArrayMax;
        (param_1->Data).ArrayNum = 0;
        (param_1->Data).ArrayMax = 0;
        FAnalyticsProviderETEventCache::AddToCache(&this->EventCache,&local_78,param_2);
        if (this->bShouldCacheEvents == false) {
          (**(code **)(*(longlong *)this + 0x20))(this);
        }
      }
      else {
        FlushEventLegacy(this,param_1,param_2);
      }
    }
    else if (param_3 == Immediate) {
      SendImmediately(this,param_1,param_2);
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\IAnalyticsProviderET.cpp"
                         ,0x2c8,L"Please, implement new modes here");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  return;
}

// SendImmediately @ 1431a2690

void __thiscall
FAnalyticsProviderET::SendImmediately
          (FAnalyticsProviderET *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  FModuleManager *this_00;
  FName *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FString *pFVar5;
  longlong lVar6;
  FAnalyticsProviderETEventCache *this_01;
  FLLMScope local_res20 [2];
  int local_68;
  int local_64;
  FMemScope local_60;
  FName local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_40;
  FString local_30;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name538,L"Analytics");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name538,false,None,Default,true);
  FMemScope::FMemScope(&local_60,&LLMScope_Name538,true);
  this_00 = FModuleManager::Get();
  pFVar3 = ::FName::FName(&local_58,"HTTP");
  bVar2 = FModuleManager::IsModuleLoaded(this_00,*pFVar3);
  if (bVar2) {
    pTVar4 = ::operator_new(0x90);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      this_01 = (FAnalyticsProviderETEventCache *)&DAT_00000010;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFAnalyticsProviderETEventCache___00_SharedPointerInternals__6B_
      ;
      FAnalyticsProviderETEventCache::FAnalyticsProviderETEventCache
                ((FAnalyticsProviderETEventCache *)(pTVar4 + 1),
                 (this->EventCache).MaximumPayloadSize,(this->EventCache).PreallocatedPayloadSize);
      this_01 = (FAnalyticsProviderETEventCache *)(pTVar4 + 1);
      if (this_01 == (FAnalyticsProviderETEventCache *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              (&this_01->CachedDefaultAttributeUTF8Stream,
               &(this->EventCache).CachedDefaultAttributeUTF8Stream);
    pFVar5 = ::FString::FString(&local_30,param_1);
    FAnalyticsProviderETEventCache::AddToCache(this_01,pFVar5,param_2);
    FAnalyticsProviderETEventCache::FlushCacheUTF8(this_01,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    ExecuteRequest(this,&local_40,&local_64,&local_68,Immediate);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6957618179367502364>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\IAnalyticsProviderET.cpp"
                       ,0x21c,"FModuleManager::Get().IsModuleLoaded(\"HTTP\")");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_48 = (param_1->Data).ArrayNum;
    lVar6 = (longlong)local_48;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_50.Data = (FScriptContainerElement *)0x0;
    pcVar1 = *(code **)(*(longlong *)this + 0xf8);
    if (local_48 == 0) {
      local_44 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,&local_44);
      memcpy(local_50.Data,_Src,lVar6 * 2);
    }
    (*pcVar1)(this,&local_50,param_2,0);
    local_40.AllocatorInstance.Data = local_50.Data;
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// SetAppID @ 1431a3400

void __thiscall FAnalyticsProviderET::SetAppID(FAnalyticsProviderET *this,FString *param_1)

{
  Config *pCVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = (this->Config).APIKeyET.Data.ArrayNum;
  pCVar1 = &this->Config;
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar4 == iVar2) {
    if (iVar4 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pCVar1->APIKeyET).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar4 + iVar2 == 1;
  }
  if ((!bVar5) && ((**(code **)(*(longlong *)this + 0x20))(this), pCVar1 != (Config *)param_1)) {
    pFVar3 = (pCVar1->APIKeyET).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pCVar1->APIKeyET).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Config).APIKeyET.Data.ArrayNum = (param_1->Data).ArrayNum;
    (this->Config).APIKeyET.Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  return;
}

// SetAppVersion @ 1431a3490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnalyticsProviderET::SetAppVersion(FAnalyticsProviderET *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  bool bVar6;
  FString local_38;
  FString local_28;
  
  bVar6 = 1 < (param_1->Data).ArrayNum;
  if (bVar6) {
    pwVar4 = FApp::GetBuildVersion();
    pFVar5 = ::FString::Replace(param_1,&local_38,L"%VERSION%",pwVar4,CaseSensitive);
  }
  else {
    pwVar4 = FApp::GetBuildVersion();
    pFVar5 = ::FString::FString(&local_28,pwVar4);
  }
  if (param_1 != pFVar5) {
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if ((bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((!bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = &(this->Config).AppVersionET;
  iVar1 = (this->Config).AppVersionET.Data.ArrayNum;
  if (iVar1 == iVar3) {
    if (iVar1 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar6 = iVar3 == 0;
  }
  else {
    bVar6 = iVar1 + iVar3 == 1;
  }
  if (!bVar6) {
    if (4 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
    (**(code **)(*(longlong *)this + 0x20))(this);
    if (pFVar5 != param_1) {
      pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar5->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Config).AppVersionET.Data.ArrayNum = (param_1->Data).ArrayNum;
      (this->Config).AppVersionET.Data.ArrayMax = (param_1->Data).ArrayMax;
      (param_1->Data).ArrayNum = 0;
      (param_1->Data).ArrayMax = 0;
    }
  }
  return;
}

// SetDefaultEventAttributes @ 1431a3bc0

void __thiscall
FAnalyticsProviderET::SetDefaultEventAttributes
          (FAnalyticsProviderET *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  FAnalyticsProviderETEventCache::SetDefaultAttributes(&this->EventCache,param_1);
  return;
}

// SetEventCallback @ 1431a3be0

void __thiscall
FAnalyticsProviderET::SetEventCallback
          (FAnalyticsProviderET *this,
          TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&,bool)>
          *param_1)

{
  int *piVar1;
  TArray<TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&,bool)>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&,bool)>
  *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar2 = &this->EventRecordedCallbacks;
  pTVar3 = (TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&,bool)>
            *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->EventRecordedCallbacks).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->EventRecordedCallbacks).ArrayNum;
  piVar1 = &(this->EventRecordedCallbacks).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->EventRecordedCallbacks).ArrayNum = iVar6 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
  *(longlong *)pFVar8 = *(longlong *)param_1;
  *(longlong *)(pFVar8 + 0x28) = 0;
  if (*(longlong *)pFVar8 != 0) {
    puVar7 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar7)();
  }
  return;
}

// SetHeader @ 1431a3eb0

void __thiscall
FAnalyticsProviderET::SetHeader(FAnalyticsProviderET *this,FString *param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  FLLMScope local_res18 [2];
  ELLMTagSet local_res20 [8];
  FMemScope local_28;
  FString *local_20;
  FString *local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name836,L"Analytics");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name836,false,None,Default,true);
  FMemScope::FMemScope(&local_28,&LLMScope_Name836,true);
  if ((param_2->Data).ArrayNum < 2) {
    if (*(int *)&(this->HttpHeaders).field_0x8 != *(int *)&(this->HttpHeaders).field_0x34) {
      iVar1 = (param_1->Data).ArrayNum;
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar4 = L"";
        iVar3 = 0;
      }
      else {
        pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)&this->HttpHeaders,uVar2,param_1);
    }
  }
  else {
    local_20 = param_1;
    local_18 = param_2;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&this->HttpHeaders,
               (TPairInitializer<FString_const_&,FString_const_&> *)&local_res18[2].TagSet,
               (bool *)&local_20);
  }
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// SetSessionID @ 1431a4510

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAnalyticsProviderET::SetSessionID(FAnalyticsProviderET *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->SessionID).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return true;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->SessionID).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    (**(code **)(*(longlong *)this + 0x20))(this);
    ::FString::operator=(&this->SessionID,param_1);
    if (4 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
  }
  return true;
}

// SetShouldRecordEventFunc @ 1431a45d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnalyticsProviderET::SetShouldRecordEventFunc
          (FAnalyticsProviderET *this,
          TFunction<bool___cdecl(IAnalyticsProviderET_const_&,FString_const_&)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)param_1;
  uStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar9 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar9)(puVar9,&local_38);
  }
  lVar7 = *(longlong *)&this->ShouldRecordEventFunc;
  uVar8 = *(undefined8 *)&(this->ShouldRecordEventFunc).field_0x8;
  uVar1 = *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x10;
  uVar2 = *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x14;
  uVar3 = *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x18;
  uVar4 = *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(this->ShouldRecordEventFunc).field_0x20;
  plVar6 = *(longlong **)&(this->ShouldRecordEventFunc).field_0x28;
  *(longlong *)&this->ShouldRecordEventFunc = local_48;
  *(undefined8 *)&(this->ShouldRecordEventFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x10 = (undefined4)local_38;
  *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x14 = local_38._4_4_;
  *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ShouldRecordEventFunc).field_0x2c = uStack_20._4_4_;
  local_38._0_4_ = uVar1;
  local_38._4_4_ = uVar2;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
  local_28 = uVar5;
  uStack_20 = plVar6;
  if (lVar7 != 0) {
    plVar10 = &local_38;
    if (plVar6 != (longlong *)0x0) {
      plVar10 = plVar6;
    }
    local_48 = lVar7;
    uStack_40 = uVar8;
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// SetUrlDomain @ 1431a46a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnalyticsProviderET::SetUrlDomain
          (FAnalyticsProviderET *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  uint uVar4;
  FManager *pFVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  int iVar7;
  TOptional<unsigned_int> *pTVar8;
  undefined8 uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  FRetryDomains *pFVar13;
  bool bVar14;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  int local_a8 [2];
  ForAnyElementType local_a0;
  undefined8 local_98;
  FString local_90;
  FRetryDomains *local_80;
  FSharedReferencer<1> FStack_78;
  undefined8 local_70;
  FSharedReferencer<1> aFStack_68 [2];
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  
  iVar7 = (this->Config).APIServerET.Data.ArrayNum;
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar7 == iVar3) {
    if (1 < iVar7) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Config).APIServerET.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar14 = iVar7 == 0;
      goto LAB_1431a46e0;
    }
  }
  else {
    bVar14 = iVar7 + iVar3 == 1;
LAB_1431a46e0:
    if (!bVar14) goto LAB_1431a470b;
  }
  iVar7 = (this->Config).AltAPIServersET.ArrayNum;
  if ((iVar7 == param_2->ArrayNum) &&
     (bVar14 = CompareItems<FString,int>
                         ((FString *)(this->Config).AltAPIServersET.AllocatorInstance.Data,
                          (FString *)(param_2->AllocatorInstance).Data,iVar7), bVar14)) {
    return;
  }
LAB_1431a470b:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name778,L"Analytics");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name778,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name778,true);
  (**(code **)(*(longlong *)this + 0x20))(this);
  ::FString::operator=(&(this->Config).APIServerET,param_1);
  pTVar2 = &(this->Config).AltAPIServersET;
  pFVar13 = (FRetryDomains *)&DAT_00000010;
  if (pTVar2 != param_2) {
    DestructItems<FString,int>
              ((FString *)(pTVar2->AllocatorInstance).Data,(this->Config).AltAPIServersET.ArrayNum);
    iVar7 = param_2->ArrayNum;
    piVar1 = &(this->Config).AltAPIServersET.ArrayMax;
    pFVar11 = (param_2->AllocatorInstance).Data;
    iVar3 = *piVar1;
    (this->Config).AltAPIServersET.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar7,iVar3,&pTVar2->AllocatorInstance,iVar7,piVar1);
      ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar11,iVar7)
      ;
    }
  }
  uVar4 = param_2->ArrayNum;
  if (((this->HttpRetryManager).Object == (FManager *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (this->HttpRetryManager).Object;
  pTVar8 = &pFVar5->RetryLimitCountDefault;
  if ((TOptional<unsigned_int> *)local_a8 != pTVar8) {
    pTVar8->TypedValue = uVar4;
    (pFVar5->RetryLimitCountDefault).bIsSet = true;
  }
  iVar7 = param_2->ArrayNum;
  pFVar11 = (param_2->AllocatorInstance).Data;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = CONCAT44(local_98._4_4_,iVar7);
  if (iVar7 == 0) {
    local_98 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&local_a0,iVar7,(int *)((longlong)&local_98 + 4));
    ConstructItems<FString,FString,int>(local_a0.Data,(FString *)pFVar11,iVar7);
  }
  if (uVar4 == 0) {
    local_70 = 0;
    aFStack_68[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->RetryServers != (TSharedPtr<FHttpRetrySystem::FRetryDomains,1> *)&local_70) {
      (this->RetryServers).Object = (FRetryDomains *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->RetryServers).SharedReferenceCount,aFStack_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_68[0].ReferenceController);
  }
  else {
    local_58 = (this->Config).APIServerET.Data.AllocatorInstance.Data;
    iVar7 = (this->Config).APIServerET.Data.ArrayNum;
    iStack_50 = iVar7 + -1;
    if (iVar7 == 0) {
      iStack_50 = 0;
    }
    local_48._12_4_ = uStack_4c;
    local_48.Size = iStack_50;
    local_48.DataPtr = (wchar_t *)local_58;
    FGenericPlatformHttp::GetUrlDomain(&local_90,&local_48);
    pFVar11 = local_a0.Data + (longlong)(int)local_98._0_4_ * 0x10;
    uVar9 = local_90.Data._8_8_;
    FVar10.Data = local_a0.Data;
    if (local_a0.Data != pFVar11) {
      do {
        iVar7 = *(int *)(FVar10.Data + 8);
        if (iVar7 == (int)uVar9) {
          if (iVar7 < 2) goto LAB_1431a4a34;
          iVar7 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)FVar10.Data,
                             (wchar_t *)local_90.Data.AllocatorInstance.Data);
          bVar14 = iVar7 == 0;
          uVar9 = local_90.Data._8_8_;
        }
        else {
          bVar14 = iVar7 + (int)uVar9 == 1;
        }
        if (bVar14) goto LAB_1431a4a34;
        FVar10.Data = FVar10.Data + 0x10;
      } while (FVar10.Data != pFVar11);
    }
    iVar7 = (int)local_98._0_4_;
    if ((local_a0.Data <= (FScriptContainerElement *)&local_90) &&
       ((FScriptContainerElement *)&local_90 < local_a0.Data + (longlong)(int)local_98._4_4_ * 0x10)
       ) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar7 = (int)local_98._0_4_;
    }
    if ((atomic<int>)iVar7 == local_98._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_a0,(int *)((longlong)&local_98 + 4));
    }
    local_98 = CONCAT44(local_98._4_4_,iVar7 + 1);
    memmove(local_a0.Data + 0x10,local_a0.Data,(longlong)iVar7 << 4);
    _Src.Data = local_90.Data.AllocatorInstance.Data;
    FVar10.Data = local_a0.Data;
    *(undefined8 *)local_a0.Data = 0;
    *(int *)(local_a0.Data + 8) = local_90.Data.ArrayNum;
    if (local_90.Data.ArrayNum == 0) {
      *(int *)(local_a0.Data + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_90.Data.ArrayNum,0,(ForAnyElementType *)local_a0.Data,
                 local_90.Data.ArrayNum,(int *)(local_a0.Data + 0xc));
      memcpy(*(void **)FVar10.Data,_Src.Data,(longlong)local_90.Data.ArrayNum * 2);
    }
LAB_1431a4a34:
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    FStack_78.ReferenceController = ::operator_new(0x28);
    if (FStack_78.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_80 = ___xmm_00000000000000000000000000000010;
      FStack_78.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_78.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar13 = (FRetryDomains *)(FStack_78.ReferenceController + 1);
      (FStack_78.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_78.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFRetryDomains_FHttpRetrySystem___00_SharedPointerInternals__6B_
      ;
      FStack_78.ReferenceController[1]._padding_ = (longlong)local_a0.Data;
      local_a0.Data = (FScriptContainerElement *)0x0;
      FStack_78.ReferenceController[1].SharedReferenceCount = local_98._0_4_;
      FStack_78.ReferenceController[1].WeakReferenceCount = local_98._4_4_;
      local_98 = 0;
      *(undefined4 *)&FStack_78.ReferenceController[2]._padding_ = 0;
      if ((pFVar13 == (FRetryDomains *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      (FStack_78.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_78.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar12 = FStack_78.ReferenceController;
      local_80 = pFVar13;
    }
    if (&this->RetryServers != (TSharedPtr<FHttpRetrySystem::FRetryDomains,1> *)&local_80) {
      (this->RetryServers).Object = pFVar13;
      local_80 = (FRetryDomains *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->RetryServers).SharedReferenceCount,&FStack_78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_78.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if ((this->Config).APIServerET.Data.ArrayNum < 2) {
    if (2 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
  }
  else if (4 < (byte)LogAnalytics._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
  }
  DestructItems<FString,int>((FString *)local_a0.Data,(int)local_98._0_4_);
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetUrlPath @ 1431a4c40

void __thiscall FAnalyticsProviderET::SetUrlPath(FAnalyticsProviderET *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  iVar2 = (this->Config).APIEndpointET.Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Config).APIEndpointET.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name826,L"Analytics");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(local_res8,LLMScope_Name826,false,None,Default,true);
    FMemScope::FMemScope(&local_res10,&LLMScope_Name826,true);
    (**(code **)(*(longlong *)this + 0x20))(this);
    ::FString::operator=(&(this->Config).APIEndpointET,param_1);
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope(local_res8);
  }
  return;
}

// SetUserID @ 1431a4d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnalyticsProviderET::SetUserID(FAnalyticsProviderET *this,FString *param_1)

{
  FString *this_00;
  int iVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  this_00 = &this->UserID;
  pwVar4 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar4,L"ANALYTICSUSERID=",this_00,false,(wchar_t **)0x0);
  if (!bVar2) {
    if (4 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
    (**(code **)(*(longlong *)this + 0x20))(this);
    ::FString::operator=(this_00,param_1);
    return;
  }
  iVar3 = (this->UserID).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this_00->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = iVar3 + iVar1 == 1;
  }
  if ((!bVar2) && (4 < (byte)LogAnalytics._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
  }
  return;
}

// ShouldRecordEvent @ 1431a4f90

bool __thiscall FAnalyticsProviderET::ShouldRecordEvent(FAnalyticsProviderET *this,FString *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if ((this->Config).APIServerET.Data.ArrayNum < 2) {
    return false;
  }
  if (*(void **)&this->ShouldRecordEventFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldRecordEventFunc);
    pcVar1 = *(code **)&this->ShouldRecordEventFunc;
    plVar2 = *(longlong **)&(this->ShouldRecordEventFunc).field_0x28;
    plVar5 = (longlong *)&(this->ShouldRecordEventFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar1)(uVar4,this,param_1);
    if (cVar3 == '\0') {
      return false;
    }
  }
  return true;
}

// StartSession @ 1431a5420

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAnalyticsProviderET::StartSession
          (FAnalyticsProviderET *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FString *pFVar4;
  FString *pFVar5;
  FAnalyticsEventAttribute *pFVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  FString local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name395,L"Analytics");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name395,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name395,true);
  if (3 < (byte)LogAnalytics._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
  }
  if (this->bSessionInProgress != false) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  pFVar4 = &this->SessionID;
  if (pFVar4 != param_1) {
    pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar4->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SessionID).Data.ArrayNum = (param_1->Data).ArrayNum;
    (this->SessionID).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  iVar1 = param_2->ArrayNum;
  pFVar6 = (FAnalyticsEventAttribute *)(param_2->AllocatorInstance).Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = iVar1;
  if (iVar1 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,0,&local_58,iVar1,&local_4c);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              (local_58.Data,pFVar6,iVar1);
  }
  pFVar4 = ::FString::FString(&local_48,"Windows");
  if (local_50 == local_4c) {
    local_50 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_58,&local_4c);
  }
  pFVar6 = (FAnalyticsEventAttribute *)(local_58.Data + (longlong)local_50 * 0x30);
  local_50 = local_50 + 1;
  pFVar5 = ::FString::FString(&local_38,L"Platform");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(pFVar6,pFVar5,pFVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x100);
  ::FString::FString(&local_48,L"SessionStart");
  (*pcVar3)(this,&local_48,&local_58);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  this->bSessionInProgress = true;
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)local_58.Data,local_50);
  if ((FAnalyticsEventAttribute *)local_58.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_58.Data);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return true;
}

// Tick @ 1431a6280

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAnalyticsProviderET::Tick(FAnalyticsProviderET *this,float param_1)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FAnalyticsProviderET::Tick(float)_::_2_::FStat_STAT_FAnalyticsProviderET_Tick>
  FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  int *piVar18;
  undefined1 in_register_00001244 [12];
  undefined1 auVar19 [16];
  double dVar20;
  FLLMScope local_res8 [2];
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FMemScope local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  auVar19._4_12_ = in_register_00001244;
  auVar19._0_4_ = param_1;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name345,L"Analytics");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name345,false,None,Default,true);
  FMemScope::FMemScope(&local_88,&LLMScope_Name345,true);
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_FAnalyticsProviderET_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FAnalyticsProviderET::Tick(float)_::_2_::FStat_STAT_FAnalyticsProviderET_Tick>
         )0x0) {
      pFVar13 = ::FName::FName(&local_80,"STAT_FAnalyticsProviderET_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAnalyticsProviderET_Tick,*pFVar13,
                 L"STAT_FAnalyticsProviderET_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  FVar14 = StatPtr_STAT_FAnalyticsProviderET_Tick;
  if (StatPtr_STAT_FAnalyticsProviderET_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FAnalyticsProviderET::Tick(float)_::_2_::FStat_STAT_FAnalyticsProviderET_Tick>
       )0x0) {
    pFVar13 = ::FName::FName(&local_78,"STAT_FAnalyticsProviderET_Tick");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FAnalyticsProviderET::Tick(float)_::_2_::FStat_STAT_FAnalyticsProviderET_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAnalyticsProviderET_Tick,
                          *pFVar13,L"STAT_FAnalyticsProviderET_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar14;
  bVar8 = false;
  bVar10 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.Value;
        local_res20.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsET\\Private\\IAnalyticsProviderET.cpp"
                   ,0x15a);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98.s.LowPart = FVar16.Value;
      local_98.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar9 = true;
      goto LAB_1431a644e;
    }
  }
  bVar9 = false;
  FVar17 = local_70;
LAB_1431a644e:
  piVar1 = &(this->EventCache).CachedDefaultAttributeUTF8Stream.ArrayNum;
  if ((piVar1 == (int *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)piVar1);
  QueryPerformanceCounter(&local_98);
  iVar3 = *(int *)&(this->EventCache).CachedDefaultAttributeUTF8Stream.AllocatorInstance.Data;
  dVar7 = (double)CONCAT44(local_98.s.HighPart,local_98.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if ((0 < iVar3) ||
     ((bVar11 = FAnalyticsProviderETEventCache::CanFlush
                          ((FAnalyticsProviderETEventCache *)&this->bShouldCacheEvents), bVar11 &&
      (*(double *)&(this->SessionID).Data.ArrayNum <= dVar7)))) {
    piVar18 = &(this->SessionID).Data.ArrayNum;
    if ((GFrameCounter == LastFrameCounterFlushed) &&
       (AnalyticsProviderETCvars::PreventMultipleFlushesInOneFrame != false)) {
      if (5 < (byte)LogAnalytics._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
      }
    }
    else {
      FlushEventsOnce((FAnalyticsProviderET *)&this[-1].OnAnalyticsEventQueuedDelegate.field_0x10);
      LastFrameCounterFlushed = GFrameCounter;
      if ((iVar3 < 1) && (dVar2 = *(double *)piVar18, dVar2 <= dVar7)) {
        dVar20 = (double)(float)(this->UserID).Data.ArrayMax;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (dVar7 - dVar2) / dVar20;
        auVar19 = roundpd(auVar19,auVar6,1);
        *(double *)piVar18 = (auVar19._0_8_ + __real_3ff0000000000000) * dVar20 + dVar2;
      }
    }
  }
  if (piVar1 != (int *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)piVar1);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
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
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_res8);
  return true;
}

