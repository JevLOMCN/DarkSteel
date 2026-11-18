// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 11

// <lambda_invoker_cdecl> @ 14d52a2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
`FStateTreeModule::StartTraces'::__l11::<lambda_1>::<lambda_invoker_cdecl>
          (char *param_1,bool param_2,void *param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  size_t sVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_2) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
    local_138._padding_ = 0;
    if (param_1 == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar3 = strlen(param_1);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_1,(int)sVar3,Yes);
    }
    pwVar1 = local_138.Ptr;
    iVar2 = *(int *)((longlong)param_3 + 8);
    if (iVar2 == *(int *)((longlong)param_3 + 0xc)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,param_3,(int *)((longlong)param_3 + 0xc));
    }
    *(int *)((longlong)param_3 + 8) = iVar2 + 1;
    ::FString::FString((FString *)((longlong)iVar2 * 0x10 + *(longlong *)param_3),pwVar1);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 14d52a3f0

void __cdecl
`FStateTreeModule::StartTraces'::__l13::<lambda_2>::<lambda_invoker_cdecl>
          (char *param_1,bool param_2,void *param_3)

{
  FString local_18;
  
  if (param_2) {
    ::FString::FString(&local_18,param_1);
    UE::Trace::ToggleChannel((wchar_t *)local_18.Data.AllocatorInstance.Data,false);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FStateTreeModule @ 14d52c670

FStateTreeModule * __thiscall FStateTreeModule::FStateTreeModule(FStateTreeModule *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  this->_padding_ = (longlong)&___7FStateTreeModule__6B_;
  (this->TraceAnalysisService).Object = (IAnalysisService *)0x0;
  this->StateTreeTraceModule = (FStateTreeTraceModule)&___7FStateTreeTraceModule__6B_;
  (this->TraceAnalysisService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TraceModuleService).Object = (IModuleService *)0x0;
  (this->TraceModuleService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StoreClient).Ptr = (FStoreClient *)0x0;
  (this->ChannelsToRestore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelsToRestore).ArrayNum = 0;
  (this->ChannelsToRestore).ArrayMax = 0;
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::`1'::<lambda_24_>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StartDebuggerTracesCommand,L"statetree.startdebuggertraces",
             L"Turns on StateTree debugger traces if not already active.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::`1'::<lambda_25_>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->StopDebuggerTracesCommand,L"statetree.stopdebuggertraces",
             L"Turns off StateTree debugger traces if active.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  (this->PreGCHandle).ID = 0;
  (this->PostGCHandle).ID = 0;
  return this;
}

// GetStoreClient @ 14d531290

FStoreClient * __thiscall FStateTreeModule::GetStoreClient(FStateTreeModule *this)

{
  TUniquePtr<UE::Trace::FStoreClient,TDefaultDelete<UE::Trace::FStoreClient>_> *pTVar1;
  FStoreClient *pFVar2;
  FStoreClient *pFVar3;
  undefined8 local_18 [2];
  
  pTVar1 = &this->StoreClient;
  if ((this->StoreClient).Ptr == (FStoreClient *)0x0) {
    pFVar3 = UE::Trace::FStoreClient::Connect(L"localhost",0);
    if (pTVar1 != (TUniquePtr<UE::Trace::FStoreClient,TDefaultDelete<UE::Trace::FStoreClient>_> *)
                  local_18) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      pFVar3 = (FStoreClient *)0x0;
      UE::Trace::FStoreClient::operator_delete(pFVar2);
    }
    UE::Trace::FStoreClient::operator_delete(pFVar3);
  }
  return pTVar1->Ptr;
}

// HandlePostGC @ 14d531640

void __thiscall FStateTreeModule::HandlePostGC(FStateTreeModule *this)

{
  if (UE::StateTree::Debug::Private::bRuntimeValidationInstanceDataGC) {
    TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
              (&OnPostRuntimeValidationInstanceData);
    return;
  }
  return;
}

// HandlePreGC @ 14d531660

void __thiscall FStateTreeModule::HandlePreGC(FStateTreeModule *this)

{
  if (UE::StateTree::Debug::Private::bRuntimeValidationInstanceDataGC) {
    TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
              (&OnPreRuntimeValidationInstanceData);
    return;
  }
  return;
}

// IsTracing @ 14d5320e0

bool __thiscall FStateTreeModule::IsTracing(FStateTreeModule *this)

{
  bool bVar1;
  FChannel *pFVar2;
  
  bVar1 = UE::Trace::IsTracing();
  if (bVar1) {
    pFVar2 = UE::Trace::FindChannel(L"StateTreeDebugChannel");
    if ((pFVar2 != (FChannel *)0x0) && (-1 < pFVar2->Enabled)) {
      return true;
    }
  }
  return false;
}

// ShutdownModule @ 14d533a70

void __thiscall FStateTreeModule::ShutdownModule(FStateTreeModule *this)

{
  FStoreClient *pFVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  IModularFeatures *pIVar3;
  TArray<FString_const_,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pTVar2 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar2
             ,(FDelegateHandle)(this->PreGCHandle).ID);
  pTVar2 = FCoreUObjectDelegates::GetPostPurgeGarbageDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar2
             ,(FDelegateHandle)(this->PostGCHandle).ID);
  (**(code **)(this->_padding_ + 0x48))(this);
  UE::StateTreeTrace::UnregisterGlobalDelegates();
  pFVar1 = (this->StoreClient).Ptr;
  if (pFVar1 != (FStoreClient *)0x0) {
    (this->StoreClient).Ptr = (FStoreClient *)0x0;
    UE::Trace::FStoreClient::operator_delete(pFVar1);
  }
  pIVar3 = IModularFeatures::Get();
  pTVar4 = &this->ChannelsToRestore;
  if (this == (FStateTreeModule *)0xffffffffffffffd0) {
    pTVar4 = (TArray<FString_const_,TSizedDefaultAllocator<32>_> *)0x0;
  }
  (**(code **)((longlong)*pIVar3 + 0x30))(pIVar3,TraceServices::ModuleFeatureName,pTVar4);
  UE::StateTree::FCrashReporterHandler::Unregister();
  return;
}

// StartTraces @ 14d533b00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FStateTreeModule::StartTraces(FStateTreeModule *this,int *param_1)

{
  TArray<FString_const_,TSizedDefaultAllocator<32>_> *pTVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  FStoreClient *this_00;
  FSessionInfo *this_01;
  code *pcVar6;
  FOptions local_res10 [2];
  FGuid local_28;
  FGuid local_18;
  
  *param_1 = -1;
  if ((PRIVATE_GIsRunningCommandlet == false) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x50))(), cVar2 == '\0')) {
    local_18.A = 0;
    local_18.B = 0;
    local_18.C = 0;
    local_18.D = 0;
    local_28.A = 0;
    local_28.B = 0;
    local_28.C = 0;
    local_28.D = 0;
    bVar3 = FTraceAuxiliary::IsConnected(&local_18,&local_28);
    this_00 = (FStoreClient *)(**(code **)(this->_padding_ + 0x58))(this);
    if (this_00 != (FStoreClient *)0x0) {
      this_01 = UE::Trace::FStoreClient::GetSessionInfoByGuid(this_00,&local_28);
      if (this_01 == (FSessionInfo *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = UE::Trace::FStoreClient::FSessionInfo::GetTraceId(this_01);
      }
      *param_1 = uVar5;
    }
    pcVar6 = `FStateTreeModule::StartTraces'::__l11::<lambda_1>::<lambda_invoker_cdecl>;
    pTVar1 = &this->ChannelsToRestore;
    if (!bVar3) {
      pcVar6 = `FStateTreeModule::StartTraces'::__l13::<lambda_2>::<lambda_invoker_cdecl>;
      pTVar1 = (TArray<FString_const_,TSizedDefaultAllocator<32>_> *)0x0;
    }
    UE::Trace::EnumerateChannels(pcVar6,pTVar1);
    UE::Trace::ToggleChannel(L"StateTreeDebugChannel",true);
    UE::Trace::ToggleChannel(L"FrameChannel",true);
    bVar4 = false;
    if (!bVar3) {
      local_res10[0].bNoWorkerThread = false;
      local_res10[0].bTruncateFile = false;
      local_res10[0].bExcludeTail = true;
      bVar4 = FTraceAuxiliary::Start
                        (Network,L"localhost",L"",local_res10,(FLogCategoryBase *)&LogStateTree);
    }
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &UE::StateTree::Delegates::OnTracingStateChanged);
    if (bVar3) {
      if (4 < (byte)LogStateTree._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      }
      TMulticastDelegate<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy>::
      Broadcast(&UE::StateTree::Delegates::OnTracingStateChanged,TracesStarted);
    }
    return bVar4;
  }
  return false;
}

// StartupModule @ 14d533e70

void __thiscall FStateTreeModule::StartupModule(FStateTreeModule *this)

{
  int iVar1;
  FName FVar2;
  UObject *pUVar3;
  FName *pFVar4;
  FModuleManager *this_00;
  IModuleInterface *pIVar5;
  undefined8 *puVar6;
  IModularFeatures *pIVar7;
  UClass *pUVar8;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  FDelegateHandle FVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  TArray<FString_const_,TSizedDefaultAllocator<32>_> *pTVar14;
  FName local_res8;
  undefined1 local_28 [16];
  FString local_18;
  
  UE::StateTree::FCrashReporterHandler::Register();
  pFVar4 = ::FName::FName(&local_res8,"TraceServices");
  FVar2 = *pFVar4;
  this_00 = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModuleChecked(this_00,FVar2);
  puVar6 = (undefined8 *)(**(code **)((longlong)*pIVar5 + 0x40))(pIVar5,local_28);
  if (&this->TraceAnalysisService != (TSharedPtr<TraceServices::IAnalysisService,1> *)puVar6) {
    (this->TraceAnalysisService).Object = (IAnalysisService *)*puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TraceAnalysisService).SharedReferenceCount,
               (FSharedReferencer<1> *)(puVar6 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  puVar6 = (undefined8 *)(**(code **)((longlong)*pIVar5 + 0x48))(pIVar5,local_28);
  if (&this->TraceModuleService != (TSharedPtr<TraceServices::IModuleService,1> *)puVar6) {
    (this->TraceModuleService).Object = (IModuleService *)*puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TraceModuleService).SharedReferenceCount,(FSharedReferencer<1> *)(puVar6 + 1)
              );
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  pIVar7 = IModularFeatures::Get();
  pTVar14 = &this->ChannelsToRestore;
  if (this == (FStateTreeModule *)0xffffffffffffffd0) {
    pTVar14 = (TArray<FString_const_,TSizedDefaultAllocator<32>_> *)0x0;
  }
  (**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,TraceServices::ModuleFeatureName,pTVar14);
  UE::StateTreeTrace::RegisterGlobalDelegates();
  pUVar8 = Z_Construct_UClass_UStateTreeSettings_NoRegister();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  pUVar3 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar3 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_UStateTreeSettings_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      if (pUVar3[1].field_0x10 != '\0') {
        local_res8.ComparisonIndex.Value = 0xffffffff;
        (**(code **)(this->_padding_ + 0x40))(this,&local_res8);
      }
      pTVar9 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
      FVar10 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
               AddRaw<FStateTreeModule>
                         ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                           *)pTVar9,(FStateTreeModule *)&local_res8,(pmf_769cb6ad)this);
                    /* WARNING: Load size is inaccurate */
      (this->PreGCHandle).ID = *FVar10.ID;
      pTVar9 = FCoreUObjectDelegates::GetPostPurgeGarbageDelegate();
      FVar10 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
               AddRaw<FStateTreeModule>
                         ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                           *)pTVar9,(FStateTreeModule *)&local_res8,(pmf_769cb6ad)this);
                    /* WARNING: Load size is inaccurate */
      (this->PostGCHandle).ID = *FVar10.ID;
      return;
    }
    pFVar11 = GetTypeName<UStateTreeSettings>((FString *)local_28);
    pwVar12 = L"";
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar11 = GetFullNameForCastLogError<UObject>(&local_18,pUVar3);
    if ((pFVar11->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar13);
  }
  pFVar11 = GetTypeName<UStateTreeSettings>((FString *)local_28);
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar12);
}

// StopTraces @ 14d5340a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStateTreeModule::StopTraces(FStateTreeModule *this)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  cVar3 = (**(code **)(this->_padding_ + 0x50))();
  if (cVar3 != '\0') {
    bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &UE::StateTree::Delegates::OnTracingStateChanged);
    if (bVar4) {
      if (4 < (byte)LogStateTree._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      }
      TMulticastDelegate<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy>::
      Broadcast(&UE::StateTree::Delegates::OnTracingStateChanged,StoppingTrace);
    }
    UE::Trace::ToggleChannel(L"StateTreeDebugChannel",false);
    UE::Trace::ToggleChannel(L"FrameChannel",false);
    iVar2 = (this->ChannelsToRestore).ArrayNum;
    if (iVar2 < 1) {
      FTraceAuxiliary::Stop();
    }
    else {
      pFVar5 = (this->ChannelsToRestore).AllocatorInstance.Data;
      pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
      while( true ) {
        if ((this->ChannelsToRestore).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar5 == pFVar6) break;
        UE::Trace::ToggleChannel(*(wchar_t **)pFVar5,true);
        pFVar5 = pFVar5 + 0x10;
      }
      piVar1 = &(this->ChannelsToRestore).ArrayMax;
      pFVar5 = (this->ChannelsToRestore).AllocatorInstance.Data;
      iVar2 = (this->ChannelsToRestore).ArrayNum;
      if ((this->ChannelsToRestore).ArrayMax < 0) {
        DestructItems<FString_const_,int>((FString *)pFVar5,iVar2);
        (this->ChannelsToRestore).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->ChannelsToRestore).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FString_const_,int>((FString *)pFVar5,iVar2);
        (this->ChannelsToRestore).ArrayNum = 0;
      }
    }
    bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &UE::StateTree::Delegates::OnTracingStateChanged);
    if (bVar4) {
      if (4 < (byte)LogStateTree._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      }
      TMulticastDelegate<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy>::
      Broadcast(&UE::StateTree::Delegates::OnTracingStateChanged,TracesStopped);
      return;
    }
  }
  return;
}

