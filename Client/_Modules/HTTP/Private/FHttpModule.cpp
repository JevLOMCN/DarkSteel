// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 11

// Exec_Runtime @ 143148f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FHttpModule::Exec_Runtime(FHttpModule *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  int iVar2;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  iVar2 = FGenericPlatformStricmp::Strnicmp(param_2,L"HTTP.",5);
  if (iVar2 != 0) {
    bVar1 = FParse::Command(local_res18,L"HTTP",true);
    if (bVar1) {
      bVar1 = HandleHTTPCommand((FHttpModule *)&this[-1].AllowedDomains.ArrayNum,local_res18[0],
                                param_3);
      return bVar1;
    }
  }
  return false;
}

// CreateRequest @ 143149000

TSharedRef<IHttpRequest,1> * __thiscall
FHttpModule::CreateRequest(FHttpModule *this,TSharedRef<IHttpRequest,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<IHttpRequest,1> *pTVar7;
  FCurlHttpRequest *pFVar8;
  FCurlHttpRequest *pFVar9;
  FCurlHttpRequest *pFVar10;
  IHttpRequest *pIVar11;
  
  if (this->bUseNullHttp == false) {
    pFVar8 = ::operator_new(0x6c0);
    pFVar10 = (FCurlHttpRequest *)0x0;
    pFVar9 = pFVar10;
    if (pFVar8 != (FCurlHttpRequest *)0x0) {
      pFVar9 = FCurlHttpRequest::FCurlHttpRequest(pFVar8);
    }
    __return_storage_ptr__->Object = (IHttpRequest *)pFVar9;
    pFVar8 = ::operator_new(0x18);
    if (pFVar8 != (FCurlHttpRequest *)0x0) {
      *(undefined4 *)&pFVar8->_padding_ = 1;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VIHttpRequest__U__DefaultDeleter_VIHttpRequest___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 1;
      pFVar8->_padding_ = (longlong)pFVar9;
      pFVar10 = pFVar8;
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pFVar10;
    if (pFVar9 == (FCurlHttpRequest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (!bVar5) {
        return __return_storage_ptr__;
      }
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IHttpRequest,1> *)(*pcVar4)();
      return pTVar7;
    }
    if (((pFVar9->_padding_ != 0) && (pFVar9->_padding_ != 0)) &&
       (0 < *(int *)(pFVar9->_padding_ + 8))) {
      return __return_storage_ptr__;
    }
    pTVar6 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar9->_padding_ = (longlong)pTVar6;
    }
    goto LAB_1431492eb;
  }
  pTVar6 = ::operator_new(0x238);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pIVar11 = (IHttpRequest *)&DAT_00000010;
LAB_143149193:
    if (((*(longlong *)&pIVar11->field_0x8 == 0) || (*(longlong *)&pIVar11->field_0x10 == 0)) ||
       (*(int *)(*(longlong *)&pIVar11->field_0x10 + 8) < 1)) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(IHttpRequest **)&pIVar11->field_0x8 = pIVar11;
      if (pTVar6 != *(TReferenceControllerBase<1> **)&pIVar11->field_0x10) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = *(longlong **)&pIVar11->field_0x10;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pIVar11->field_0x10 = pTVar6;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFNullHttpRequest___00_SharedPointerInternals__6B_;
    FHttpRequestImpl::FHttpRequestImpl((FHttpRequestImpl *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7FNullHttpRequest__6B_;
    pIVar11 = (IHttpRequest *)(pTVar6 + 1);
    pTVar6[0x14]._padding_ = 0;
    pTVar6[0x14].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x14].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x15]._padding_ = 0;
    pTVar6[0x15].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x15].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x16]._padding_ = 0;
    pTVar6[0x16].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x16].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x17]._padding_ = 0;
    pTVar6[0x17].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x17].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x18].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x18].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x19]._padding_ = 0;
    pTVar6[0x1a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x1a].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x18]._padding_ = 0;
    *(undefined1 *)((longlong)&pTVar6[0x18]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar6[0x1b]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x1b]._padding_ + 4) = 0x80;
    pTVar6[0x1b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x1b].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[0x1c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x1c].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x1d]._padding_ = 0;
    pTVar6[0x1d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x1d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x1e]._padding_ = 0;
    pTVar6[0x1f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x1f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x20]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x20]._padding_ + 4) = 0x80;
    pTVar6[0x20].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x20].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[0x21].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x21].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x22]._padding_ = 0;
    pTVar6[0x22].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar6[0x23]._padding_ = 0;
    if (pIVar11 != (IHttpRequest *)0x0) goto LAB_143149193;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IHttpRequest,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = pIVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_1431492eb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// StartupModule @ 143149320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpModule::StartupModule(FHttpModule *this)

{
  bool bVar1;
  int iVar2;
  TMulticastDelegate<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  wchar_t *pwVar3;
  ulonglong uVar4;
  FModuleManager *pFVar5;
  FName *pFVar6;
  FHttpManager *pFVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined4 local_res8 [4];
  FName local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  TOptional<FString>_u_0 local_68;
  FString local_58;
  code *local_48;
  longlong lStack_40;
  
  bVar10 = false;
  local_res8[0] = 0;
  Singleton = this;
  this->MaxReadBufferSize = 0x40000;
  this->HttpConnectionTimeout = 30.0;
  this->HttpTotalTimeout = 0.0;
  this->HttpActivityTimeout = 30.0;
  this->HttpReceiveTimeout = 30.0;
  this->HttpSendTimeout = 30.0;
  this->HttpDelayTime = 0.0;
  this->HttpMaxConnectionsPerServer = 0x10;
  this->bEnableHttp = true;
  this->bUseNullHttp = false;
  this->HttpThreadActiveFrameTimeInSeconds = 0.005;
  this->HttpThreadActiveMinimumSleepTimeInSeconds = 0.0;
  this->HttpThreadIdleFrameTimeInSeconds = 0.033333335;
  this->HttpThreadIdleMinimumSleepTimeInSeconds = 0.0;
  this->HttpEventLoopThreadTickIntervalInSeconds = 0.1;
  this_00 = FCoreDelegates::TSOnConfigSectionsChanged();
  local_58.Data.ArrayNum = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnConfigSectionsChanged;
  lStack_40 = (ulonglong)(uint)local_58.Data.ArrayMax << 0x20;
  local_48 = OnConfigSectionsChanged;
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  ::AddRaw<FHttpModule>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
              *)this_00,(FHttpModule *)(local_res8 + 2),(pmf_e899895c *)this);
  UpdateConfigs(this);
  pwVar3 = FCommandLine::Get();
  bVar1 = FParse::Value(pwVar3,L"httpproxy=",&this->ProxyAddress,true,(wchar_t **)0x0);
  if (!bVar1) {
    bVar1 = FConfigCacheIni::GetString
                      (GConfig,L"HTTP",L"HttpProxyAddress",&this->ProxyAddress,&GEngineIni);
    if (!bVar1) {
      FWindowsPlatformHttp::GetOperatingSystemProxyAddress
                ((TOptional<FString> *)&local_68.TypedValue);
      if (local_68.TypedValue.Data.ArrayMax != -1) {
        ::FString::operator=(&this->ProxyAddress,&local_68.TypedValue);
        if ((local_68.TypedValue.Data.ArrayMax != -1) &&
           (local_68.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_68.TypedValue.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  FConfigCacheIni::GetArray(GConfig,L"HTTP",L"ModulesToLoad",&local_88,&GEngineIni);
  iVar2 = local_88.ArrayNum;
  uVar4 = (ulonglong)local_88.ArrayNum;
  pFVar9 = local_88.AllocatorInstance.Data + uVar4 * 0x10;
  FVar8.Data = local_88.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar8.Data == pFVar9) break;
    pFVar5 = FModuleManager::Get();
    if (*(int *)(FVar8.Data + 8) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)FVar8.Data;
    }
    bVar1 = FModuleManager::ModuleExists(pFVar5,pwVar3,(FString *)0x0);
    if (bVar1) {
      pFVar5 = FModuleManager::Get();
      if (*(int *)(FVar8.Data + 8) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = *(wchar_t **)FVar8.Data;
      }
      pFVar6 = ::FName::FName(&local_res18,pwVar3);
      FModuleManager::LoadModule(pFVar5,*pFVar6,None);
    }
    uVar4 = local_88._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 0x10;
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pwVar3 = FCommandLine::Get();
  bVar1 = FParse::Value(pwVar3,L"HTTP=",&local_78,true,(wchar_t **)0x0);
  if (bVar1) {
    ::FString::FString(&local_58,L"WinInet");
    bVar10 = true;
    if (local_78.Data.ArrayNum == local_58.Data.ArrayNum) {
      if (1 < local_78.Data.ArrayNum) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_78.Data.AllocatorInstance.Data,
                           (wchar_t *)local_58.Data.AllocatorInstance.Data);
        bVar1 = iVar2 == 0;
        goto LAB_14314957b;
      }
    }
    else {
      bVar1 = local_78.Data.ArrayNum + local_58.Data.ArrayNum == 1;
LAB_14314957b:
      if (!bVar1) goto LAB_143149588;
    }
    bVar1 = true;
  }
  else {
LAB_143149588:
    bVar1 = false;
  }
  if ((bVar10) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (2 < (byte)LogHttp._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  FUserAgentImpl::Get();
  FCurlHttpManager::InitCurl();
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::operator_new(0x4a0);
  if (pFVar7 == (FHttpManager *)0x0) {
    this->HttpManager = (FHttpManager *)0x0;
    pFVar7 = ::operator_new(0x4a0);
    if (pFVar7 == (FHttpManager *)0x0) {
      pFVar7 = (FHttpManager *)0x0;
    }
    else {
      pFVar7 = FHttpManager::FHttpManager(pFVar7);
    }
  }
  else {
    memset(pFVar7,0,0x4a0);
    FHttpManager::FHttpManager(pFVar7);
    pFVar7->_padding_ = (longlong)&___7FCurlHttpManager__6B_;
  }
  this->HttpManager = pFVar7;
  FHttpManager::Initialize(pFVar7);
  bVar1 = (bool)(**(code **)(this->HttpManager->_padding_ + 0x18))();
  this->bSupportsDynamicProxy = bVar1;
  TDelegateRegistration<bool___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>::BindStatic<>
            ((TDelegateRegistration<bool___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ShouldLaunchUrl,ShouldLaunchUrl);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// PostLoadCallback @ 1431496b0

void __thiscall FHttpModule::PostLoadCallback(FHttpModule *this)

{
  return;
}

// PreUnloadCallback @ 1431496c0

void __thiscall FHttpModule::PreUnloadCallback(FHttpModule *this)

{
  return;
}

// ShutdownModule @ 1431496d0

void __thiscall FHttpModule::ShutdownModule(FHttpModule *this)

{
  FHttpManager *pFVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::ShouldLaunchUrl,(FWriteAccessScope *)&local_28);
  if ((FCoreDelegates::ShouldLaunchUrl._16_4_ != 0) && (FCoreDelegates::ShouldLaunchUrl._8_8_ != 0))
  {
    (*(code *)**(undefined8 **)FCoreDelegates::ShouldLaunchUrl._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FCoreDelegates::ShouldLaunchUrl.field_0x8,0,0,0x10);
    FCoreDelegates::ShouldLaunchUrl._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (this->HttpManager != (FHttpManager *)0x0) {
    FHttpManager::Shutdown(this->HttpManager);
  }
  pFVar1 = this->HttpManager;
  if (pFVar1 != (FHttpManager *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::TSOnConfigSectionsChanged();
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
  FCurlHttpManager::ShutdownCurl();
  this->HttpManager = (FHttpManager *)0x0;
  Singleton = (FHttpModule *)0x0;
  return;
}

// Get @ 143160950

FHttpModule * __cdecl FHttpModule::Get(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FHttpModule *pFVar4;
  FName *pFVar5;
  FModuleManager *this;
  FName local_res8 [4];
  
  if (Singleton == (FHttpModule *)0x0) {
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpModule.cpp"
                           ,0x174,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FHttpModule *)(*pcVar2)();
      return pFVar4;
    }
    pFVar5 = ::FName::FName(local_res8,"HTTP");
    FVar1 = *pFVar5;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar1);
    if ((Singleton == (FHttpModule *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpModule.cpp"
                           ,0x177,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FHttpModule *)(*pcVar2)();
      return pFVar4;
    }
  }
  return Singleton;
}

// GetHttpManager @ 143162d80

FHttpManager * __thiscall FHttpModule::GetHttpManager(FHttpModule *this)

{
  code *pcVar1;
  bool bVar2;
  FHttpManager *pFVar3;
  
  if (this->HttpManager != (FHttpManager *)0x0) {
    return this->HttpManager;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("HttpManager != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                     ,0x50,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FHttpManager *)(*pcVar1)();
    return pFVar3;
  }
  return this->HttpManager;
}

// HandleHTTPCommand @ 143167170

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHttpModule::HandleHTTPCommand(FHttpModule *this,wchar_t *param_1,FOutputDevice *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar2;
  IHttpRequest *pIVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FHttpTest *this_00;
  FHttpManager *pFVar12;
  FString *pFVar13;
  FHttpModule *pFVar14;
  LPCRITICAL_SECTION lpCriticalSection_00;
  undefined8 *puVar15;
  ulong64 uVar16;
  wchar_t *pwVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  TSharedRef<IHttpRequest,1> *pTVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  wchar_t *local_res10;
  FOutputDevice *local_res18;
  undefined4 local_res20 [2];
  ForAnyElementType local_178;
  undefined8 local_170;
  undefined1 local_168 [8];
  TSharedRef<IHttpRequest,1> local_160;
  FString local_150;
  FString local_140;
  longlong *local_130;
  TReferenceControllerBase<1> *local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  void *local_70 [2];
  FString local_60;
  FString local_50;
  
  bVar9 = false;
  bVar7 = false;
  local_res20[0] = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  bVar6 = FParse::Command(&local_res10,L"TEST",true);
  if (bVar6) {
    iVar10 = 1;
    local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Data.ArrayNum = 0;
    local_140.Data.ArrayMax = 0;
    FParse::Token(&local_res10,&local_140,true,L'\0');
    if (1 < local_140.Data.ArrayNum) {
      iVar10 = _wtoi((wchar_t *)local_140.Data.AllocatorInstance.Data);
    }
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.Data.ArrayNum = 0;
    local_150.Data.ArrayMax = 0;
    FParse::Token(&local_res10,&local_150,true,L'\0');
    if (local_150.Data.ArrayNum < 2) {
      ::FString::operator=(&local_150,L"http://www.google.com");
    }
    this_00 = ::operator_new(0x38);
    if (this_00 == (FHttpTest *)0x0) {
      this_00 = (FHttpTest *)0x0;
    }
    else {
      ::FString::FString(&local_e0,L"");
      ::FString::FString(&local_f0,L"GET");
      FVar18.Data = local_f0.Data.AllocatorInstance.Data;
      (this_00->Verb).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar1 = &(this_00->Verb).Data.ArrayMax;
      (this_00->Verb).Data.ArrayNum = local_f0.Data.ArrayNum;
      if (local_f0.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)this_00,local_f0.Data.ArrayNum,
                   piVar1);
        memcpy((this_00->Verb).Data.AllocatorInstance.Data,FVar18.Data,
               (longlong)local_f0.Data.ArrayNum * 2);
      }
      FVar18.Data = local_e0.Data.AllocatorInstance.Data;
      pFVar13 = &this_00->Payload;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar1 = &(this_00->Payload).Data.ArrayMax;
      (this_00->Payload).Data.ArrayNum = local_e0.Data.ArrayNum;
      if (local_e0.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e0.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_e0.Data.ArrayNum,
                   piVar1);
        memcpy((pFVar13->Data).AllocatorInstance.Data,FVar18.Data,
               (longlong)local_e0.Data.ArrayNum * 2);
      }
      FVar18.Data = local_150.Data.AllocatorInstance.Data;
      pFVar13 = &this_00->Url;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar1 = &(this_00->Url).Data.ArrayMax;
      lVar23 = (longlong)local_150.Data.ArrayNum;
      (this_00->Url).Data.ArrayNum = local_150.Data.ArrayNum;
      if (local_150.Data.ArrayNum == 0) {
        *piVar1 = 0;
        bVar9 = true;
        bVar7 = true;
        this_00->TestsToRun = iVar10;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_150.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,
                   local_150.Data.ArrayNum,piVar1);
        memcpy((pFVar13->Data).AllocatorInstance.Data,FVar18.Data,lVar23 * 2);
        this_00->TestsToRun = iVar10;
        bVar9 = true;
        bVar7 = true;
      }
    }
    if ((bVar7) && (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if ((bVar9) && (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    FHttpTest::Run(this_00);
    local_c0.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
      local_c0.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
    }
  }
  else {
    bVar7 = FParse::Command(&local_res10,L"DUMPREQ",true);
    if (bVar7) {
      if ((this->HttpManager == (FHttpManager *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("HttpManager != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                             ,0x50,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar12 = this->HttpManager;
      lpCriticalSection = &pFVar12->RequestLock;
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        FOutputDevice::LogfImpl(param_2,L"------- (%d) Http Requests");
        iVar10 = (pFVar12->Requests).ArrayNum;
        pFVar19 = (pFVar12->Requests).AllocatorInstance.Data;
        pFVar22 = pFVar19 + (longlong)iVar10 * 0x10;
        while( true ) {
          if ((pFVar12->Requests).ArrayNum != iVar10) {
            `TCheckedPointerIterator<TSharedRef<IHttpRequest,1>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res20);
          }
          if (pFVar19 == pFVar22) break;
          (**(code **)(**(longlong **)pFVar19 + 0x10))();
          (**(code **)**(undefined8 **)pFVar19)();
          (**(code **)(**(longlong **)pFVar19 + 0x58))(*(longlong **)pFVar19,local_70);
          FOutputDevice::LogfImpl(local_res18,L"\tverb=[%s] url=[%s] status=%s");
          if (local_70[0] != (void *)0x0) {
            FMemory::Free(local_70[0]);
          }
          pFVar19 = pFVar19 + 0x10;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return true;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    bVar7 = FParse::Command(&local_res10,L"FLUSH",true);
    if (bVar7) {
      pFVar12 = GetHttpManager(this);
      FHttpManager::Flush(pFVar12,Default);
      return true;
    }
    bVar7 = FParse::Command(&local_res10,L"FILEUPLOAD",true);
    if (bVar7) {
      local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.Data.ArrayNum = 0;
      local_100.Data.ArrayMax = 0;
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      bVar7 = FParse::Token(&local_res10,&local_100,false,L'\0');
      bVar9 = FParse::Token(&local_res10,&local_110,false,L'\0');
      if (bVar7 && bVar9) {
        local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.Data.ArrayNum = 0;
        local_120.Data.ArrayMax = 0;
        bVar7 = FParse::Token(&local_res10,&local_120,false,L'\0');
        if (!bVar7) {
          ::FString::operator=(&local_120,L"PUT");
        }
        (**(code **)(this->_padding_ + 0x40))(this,&local_130);
        (**(code **)(*local_130 + 0x68))(local_130,&local_100);
        (**(code **)(*local_130 + 0x60))(local_130,&local_120);
        plVar5 = local_130;
        pcVar4 = *(code **)(*local_130 + 0xb0);
        ::FString::FString(&local_a0,L"application/x-uehttp-upload-test");
        ::FString::FString(&local_b0,L"Content-Type");
        (*pcVar4)(plVar5,&local_b0,&local_a0);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        (**(code **)(*local_130 + 0x98))(local_130,&local_110);
        (**(code **)(*local_130 + 0xe8))();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
      else if (2 < (byte)LogHttp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      }
      local_c0.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
        local_c0.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
      }
    }
    else {
      bVar7 = FParse::Command(&local_res10,L"LAUNCHREQUESTS",true);
      if (!bVar7) {
        return true;
      }
      FParse::Token(&local_c0,&local_res10,false);
      FParse::Token(&local_d0,&local_res10,false);
      pFVar13 = FParse::Token(&local_60,&local_res10,false);
      if ((pFVar13->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
      uVar11 = _wtoi(pwVar17);
      uVar20 = (ulonglong)uVar11;
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      pFVar13 = FParse::Token(&local_50,&local_res10,false);
      if ((pFVar13->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
      bVar7 = FToBoolHelper::FromCStringWide(pwVar17);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      local_178.Data = (FScriptContainerElement *)0x0;
      local_170 = 0;
      if (0 < (int)uVar11) {
        do {
          pFVar14 = Get();
          (**(code **)(pFVar14->_padding_ + 0x40))(pFVar14,&local_160);
          pIVar3 = local_160.Object;
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_d0.Data.ArrayNum != 0) {
            FVar18.Data = local_d0.Data.AllocatorInstance.Data;
          }
          pcVar4 = *(code **)(*(longlong *)local_160.Object + 0x68);
          ::FString::FString(&local_90,(wchar_t *)FVar18.Data);
          (*pcVar4)(pIVar3,&local_90);
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          pIVar3 = local_160.Object;
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_c0.Data.ArrayNum != 0) {
            FVar18.Data = local_c0.Data.AllocatorInstance.Data;
          }
          pcVar4 = *(code **)(*(longlong *)local_160.Object + 0x60);
          ::FString::FString(&local_80,(wchar_t *)FVar18.Data);
          (*pcVar4)(pIVar3,&local_80);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          lpCriticalSection_00 =
               (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_160.Object + 0xf0))();
          if ((lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Mutex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                 ,0x1b,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          EnterCriticalSection(lpCriticalSection_00);
          puVar15 = UE::Core::Private::DelegateAllocate
                              (0x20,(FDelegateAllocation *)(lpCriticalSection_00 + 1));
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = &
                       ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
            ;
            uVar16 = FDelegateHandle::GenerateNewID();
            puVar15[2] = uVar16;
            *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`FHttpModule::HandleHTTPCommand'::`55'::<lambda_1>_>
                        ::_vftable_;
          }
          if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(lpCriticalSection_00);
          }
          (**(code **)(*(longlong *)local_160.Object + 0xe8))();
          if (((local_178.Data <= &local_160) &&
              (&local_160 <
               (TSharedRef<IHttpRequest,1> *)(local_178.Data + (longlong)local_170._4_4_ * 0x10)))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar10 = (int)local_170;
          if ((int)local_170 == local_170._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_178,(int *)((longlong)&local_170 + 4));
          }
          local_170 = CONCAT44(local_170._4_4_,iVar10 + 1);
          *(IHttpRequest **)&local_178.Data[(longlong)iVar10 * 0x10].field_0x0 = local_160.Object;
          *(TReferenceControllerBase<1> **)(local_178.Data + (longlong)iVar10 * 0x10 + 8) =
               local_160.SharedReferenceCount.ReferenceController;
          if (local_160.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_160.SharedReferenceCount.ReferenceController);
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      if (bVar7) {
        iVar10 = (int)local_170;
        pTVar21 = (TSharedRef<IHttpRequest,1> *)(local_178.Data + (longlong)(int)local_170 * 0x10);
        FVar18.Data = local_178.Data;
        while( true ) {
          if ((int)local_170 != iVar10) {
            `TCheckedPointerIterator<TSharedRef<IHttpRequest,1>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_168);
          }
          if ((TSharedRef<IHttpRequest,1> *)FVar18.Data == pTVar21) break;
          pTVar2 = (((TSharedRef<IHttpRequest,1> *)FVar18.Data)->SharedReferenceCount).
                   ReferenceController;
          pIVar3 = ((TSharedRef<IHttpRequest,1> *)FVar18.Data)->Object;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          (**(code **)(*(longlong *)pIVar3 + 0x118))();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          FVar18.Data = FVar18.Data + 0x10;
        }
      }
      DestructItems<TSharedRef<IHttpRequest,1>,int>
                ((TSharedRef<IHttpRequest,1> *)local_178.Data,(int)local_170);
      if ((TSharedRef<IHttpRequest,1> *)local_178.Data != (TSharedRef<IHttpRequest,1> *)0x0) {
        FMemory::Free(local_178.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return true;
}

// OnConfigSectionsChanged @ 143170f60

void __thiscall
FHttpModule::OnConfigSectionsChanged
          (FHttpModule *this,FString *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  bool bVar14;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == GEngineIni.Data.ArrayNum) {
    if (iVar4 < 2) goto LAB_143170fb3;
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)GEngineIni.Data.AllocatorInstance.Data);
    bVar14 = iVar4 == 0;
  }
  else {
    bVar14 = iVar4 + GEngineIni.Data.ArrayNum == 1;
  }
  if (!bVar14) {
    return;
  }
LAB_143170fb3:
  iVar4 = *(int *)&(param_2->Elements).field_0x28;
  iVar10 = 0;
  iVar12 = 0;
  uVar5 = 1;
  puVar1 = &(param_2->Elements).field_0x10;
  iVar6 = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar6 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14317105d;
      uVar9 = puVar13[lVar7 + 1];
    }
    uVar5 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar6 = iVar12 + -1 + local_res20;
    if (iVar4 < iVar6) {
      iVar6 = iVar4;
    }
  }
LAB_14317105d:
  uVar9 = *(uint *)&(param_2->Elements).field_0x28;
  uVar8 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar10);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_2->Elements).field_0x8 -
                       *(int *)&(param_2->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar4 < (int)uVar9)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar9 != uVar5) {
    puVar11 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar10;
      uVar8 = uVar8 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_143171170;
      uVar9 = *(uint *)(puVar11 + lVar7 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar9) {
      uVar9 = uVar5;
    }
  }
LAB_143171170:
  while( true ) {
    if (*(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    bVar14 = ::FString::StartsWith
                       ((FString *)
                        (*(longlong *)&param_2->Elements +
                        (longlong)TStack_60.CurrentBitIndex * 0x18),L"HTTP",4,IgnoreCase);
    if (bVar14) {
      UpdateConfigs(this);
      return;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// UpdateConfigs @ 14318a8e0

void __thiscall FHttpModule::UpdateConfigs(FHttpModule *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  FConfigCacheIni::GetFloat(GConfig,L"HTTP",L"HttpTimeout",&this->HttpActivityTimeout,&GEngineIni);
  FConfigCacheIni::GetFloat(GConfig,L"HTTP",L"HttpTotalTimeout",&this->HttpTotalTimeout,&GEngineIni)
  ;
  FConfigCacheIni::GetFloat
            (GConfig,L"HTTP",L"HttpConnectionTimeout",&this->HttpConnectionTimeout,&GEngineIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"HTTP",L"HttpActivityTimeout",&this->HttpActivityTimeout,&GEngineIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"HTTP",L"HttpReceiveTimeout",&this->HttpReceiveTimeout,&GEngineIni);
  FConfigCacheIni::GetFloat(GConfig,L"HTTP",L"HttpSendTimeout",&this->HttpSendTimeout,&GEngineIni);
  FConfigCacheIni::GetInt
            (GConfig,L"HTTP",L"HttpMaxConnectionsPerServer",&this->HttpMaxConnectionsPerServer,
             &GEngineIni);
  FConfigCacheIni::GetBool(GConfig,L"HTTP",L"bEnableHttp",&this->bEnableHttp,&GEngineIni);
  FConfigCacheIni::GetBool(GConfig,L"HTTP",L"bUseNullHttp",&this->bUseNullHttp,&GEngineIni);
  FConfigCacheIni::GetFloat(GConfig,L"HTTP",L"HttpDelayTime",&this->HttpDelayTime,&GEngineIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"HTTP",L"HttpThreadActiveFrameTimeInSeconds",
             &this->HttpThreadActiveFrameTimeInSeconds,&GEngineIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"HTTP",L"HttpThreadActiveMinimumSleepTimeInSeconds",
             &this->HttpThreadActiveMinimumSleepTimeInSeconds,&GEngineIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"HTTP",L"HttpThreadIdleFrameTimeInSeconds",
             &this->HttpThreadIdleFrameTimeInSeconds,&GEngineIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"HTTP",L"HttpThreadIdleMinimumSleepTimeInSeconds",
             &this->HttpThreadIdleMinimumSleepTimeInSeconds,&GEngineIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"HTTP",L"HttpEventLoopThreadTickIntervalInSeconds",
             &this->HttpEventLoopThreadTickIntervalInSeconds,&GEngineIni);
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar3,L"HttpNoProxy=",&this->HttpNoProxy,true,(wchar_t **)0x0);
  if (!bVar2) {
    FConfigCacheIni::GetString(GConfig,L"HTTP",L"HttpNoProxy",&this->HttpNoProxy,&GEngineIni);
  }
  pTVar1 = &this->AllowedDomains;
  DestructItems<FString,int>
            ((FString *)(pTVar1->AllocatorInstance).Data,(this->AllowedDomains).ArrayNum);
  (this->AllowedDomains).ArrayNum = 0;
  if ((this->AllowedDomains).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,&(this->AllowedDomains).ArrayMax);
  }
  FConfigCacheIni::GetArray(GConfig,L"HTTP",L"AllowedDomains",pTVar1,&GEngineIni);
  if (this->HttpManager != (FHttpManager *)0x0) {
    (**(code **)(this->HttpManager->_padding_ + 0x38))();
  }
  return;
}

