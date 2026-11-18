// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 94

// ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember> @ 14edb7a40

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FAddSessionMember> * __thiscall
UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAddSessionMember> *__return_storage_ptr__,
          Params *param_1,pmf_24e2ae70 *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EOnlineServices EVar7;
  bool bVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAddSessionMember>,1>
  *pTVar10;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar11;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *this_00;
  TOnlineAsyncOpHandle<UE::Online::FAddSessionMember> *pTVar12;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *this_01;
  FOnlineAsyncOpQueue *this_02;
  int iVar13;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  <lambda_1> local_a8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAddSessionMember>,1>
  local_80;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FAddSessionMember>,1>
  local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_48;
  char local_38;
  
  plVar4 = (longlong *)this->_padding_;
  ::FString::FString(&local_b8,L"AddSessionMember");
  pTVar9 = TOnlineComponent<UE::Online::ISessions>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISessions> *)this,&local_c8,&local_b8);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar4[0x5e] != '\0')) {
    EVar7 = (**(code **)(*plVar4 + 0x98))(plVar4);
    Online::LexToString(EVar7);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FAddSessionMember>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FAddSessionMember>
            ((FOnlineAsyncOpCache *)(plVar4 + 8),&local_d8,param_1,pTVar9);
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar3 = (int)this->_padding_;
  this_00 = (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange(&(local_d8.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar13);
  (**(code **)(this->_padding_ + 0x108))(this,local_60,((local_d8.Object)->SharedState).Object);
  if (local_38 == '\0') {
    local_a8.WeakThis.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    local_a8.WeakThis.Object = (ISessions *)this->_padding_;
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_a8.ImplFunc._0_8_ = *(undefined8 *)param_2;
    local_a8.ImplFunc._8_8_ = *(undefined8 *)&param_2->field_0x8;
    this_01 = local_d8.Object;
    if (local_d8.Object == (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0xffffffffffffffa8) {
      this_01 = this_00;
    }
    local_a8.__this = this;
    pTVar11 = ::operator_new(0x40);
    if (pTVar11 != (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) {
      ((FOnlineAsyncExecutionPolicy *)&pTVar11->_padding_)->ExecutionPolicy = RunOnGameThread;
      pTVar11->_padding_ = 0x15309c430;
      *(undefined8 *)&pTVar11->_padding_ = 0;
      pTVar11->_padding_ = 0;
      this_00 = pTVar11;
    }
    local_res8.Ptr = (IStep *)this_00;
    Online::Private::TStep<void>::
    SetExecFunction<UE::Online::FAddSessionMember,_UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>_::__l2::<lambda_1>_>
              ((TStep<void> *)this_00,this_01,&local_a8);
    TOnlineAsyncOp<UE::Online::FAddSessionMember>::AddStep(this_01,&local_res8);
    if ((TOnlineAsyncOp<UE::Online::FAddSessionMember> *)local_res8.Ptr !=
        (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) {
      (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
    }
    if (param_3) {
      this_02 = (FOnlineAsyncOpQueue *)(this->_padding_ + 0x1d0);
    }
    else {
      this_02 = (FOnlineAsyncOpQueue *)&this->_padding_;
    }
    if ((((this_01->SharedState).Object)->State != Invalid) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedState->State < EAsyncOpState::Queued",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                           ,0x5bb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TOnlineAsyncOpHandle<UE::Online::FAddSessionMember> *)(*pcVar6)();
      return pTVar12;
    }
    ((this_01->SharedState).Object)->State = Queued;
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::LexToString(((this_01->SharedState).Object)->State);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>::Enqueue<UE::Online::FOnlineAsyncOpQueue>(UE::Online::FOnlineAsyncOpQueue&___ptr64,double)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    FOnlineAsyncOpQueue::Enqueue<UE::Online::FAddSessionMember>(this_02,this_01,0.0);
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_a8.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a8.WeakThis.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar10 = TOnlineAsyncOp<UE::Online::FAddSessionMember>::CreateSharedState
                        (local_d8.Object,&local_70);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    local_58 = local_70.SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)((local_d8.Object)->_padding_ + 8))(local_d8.Object,local_60);
    pTVar10 = TOnlineAsyncOp<UE::Online::FAddSessionMember>::CreateSharedState
                        (local_d8.Object,&local_80);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_38 == '\0') goto LAB_14edb7d28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
LAB_14edb7d28:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteAsyncSessionsMethod<UE::Online::FCreateSession> @ 14edb7d60

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FCreateSession> * __thiscall
UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FCreateSession> *__return_storage_ptr__,Params *param_1,
          pmf_5941892a *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EOnlineServices EVar7;
  bool bVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCreateSession>,1> *pTVar10;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar11;
  TOnlineAsyncOp<UE::Online::FCreateSession> *this_00;
  TOnlineAsyncOpHandle<UE::Online::FCreateSession> *pTVar12;
  TOnlineAsyncOp<UE::Online::FCreateSession> *this_01;
  FOnlineAsyncOpQueue *this_02;
  int iVar13;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  <lambda_1> local_a8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCreateSession>,1> local_80;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FCreateSession>,1> local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_48;
  char local_38;
  
  plVar4 = (longlong *)this->_padding_;
  ::FString::FString(&local_b8,L"CreateSession");
  pTVar9 = TOnlineComponent<UE::Online::ISessions>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISessions> *)this,&local_c8,&local_b8);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar4[0x5e] != '\0')) {
    EVar7 = (**(code **)(*plVar4 + 0x98))(plVar4);
    Online::LexToString(EVar7);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FCreateSession>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FCreateSession>
            ((FOnlineAsyncOpCache *)(plVar4 + 8),&local_d8,param_1,pTVar9);
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar3 = (int)this->_padding_;
  this_00 = (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange(&(local_d8.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar13);
  (**(code **)(this->_padding_ + 0x138))(this,local_60,((local_d8.Object)->SharedState).Object);
  if (local_38 == '\0') {
    local_a8.WeakThis.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    local_a8.WeakThis.Object = (ISessions *)this->_padding_;
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_a8.ImplFunc._0_8_ = *(undefined8 *)param_2;
    local_a8.ImplFunc._8_8_ = *(undefined8 *)&param_2->field_0x8;
    this_01 = local_d8.Object;
    if (local_d8.Object == (TOnlineAsyncOp<UE::Online::FCreateSession> *)0xffffffffffffffa8) {
      this_01 = this_00;
    }
    local_a8.__this = this;
    pTVar11 = ::operator_new(0x40);
    if (pTVar11 != (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) {
      ((FOnlineAsyncExecutionPolicy *)&pTVar11->_padding_)->ExecutionPolicy = RunOnGameThread;
      pTVar11->_padding_ = 0x15309c430;
      *(undefined8 *)&pTVar11->_padding_ = 0;
      pTVar11->_padding_ = 0;
      this_00 = pTVar11;
    }
    local_res8.Ptr = (IStep *)this_00;
    Online::Private::TStep<void>::
    SetExecFunction<UE::Online::FCreateSession,_UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>_::__l2::<lambda_1>_>
              ((TStep<void> *)this_00,this_01,&local_a8);
    TOnlineAsyncOp<UE::Online::FCreateSession>::AddStep(this_01,&local_res8);
    if ((TOnlineAsyncOp<UE::Online::FCreateSession> *)local_res8.Ptr !=
        (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) {
      (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
    }
    if (param_3) {
      this_02 = (FOnlineAsyncOpQueue *)(this->_padding_ + 0x1d0);
    }
    else {
      this_02 = (FOnlineAsyncOpQueue *)&this->_padding_;
    }
    if ((((this_01->SharedState).Object)->State != Invalid) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedState->State < EAsyncOpState::Queued",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                           ,0x5bb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TOnlineAsyncOpHandle<UE::Online::FCreateSession> *)(*pcVar6)();
      return pTVar12;
    }
    ((this_01->SharedState).Object)->State = Queued;
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::LexToString(((this_01->SharedState).Object)->State);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::Enqueue<UE::Online::FOnlineAsyncOpQueue>(UE::Online::FOnlineAsyncOpQueue&___ptr64,double)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    FOnlineAsyncOpQueue::Enqueue<UE::Online::FCreateSession>(this_02,this_01,0.0);
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_a8.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a8.WeakThis.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar10 = TOnlineAsyncOp<UE::Online::FCreateSession>::CreateSharedState
                        (local_d8.Object,&local_70);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    local_58 = local_70.SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)((local_d8.Object)->_padding_ + 8))(local_d8.Object,local_60);
    pTVar10 = TOnlineAsyncOp<UE::Online::FCreateSession>::CreateSharedState
                        (local_d8.Object,&local_80);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_38 == '\0') goto LAB_14edb8051;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
LAB_14edb8051:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteAsyncSessionsMethod<UE::Online::FFindSessions> @ 14edb8080

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FFindSessions> * __thiscall
UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FFindSessions> *__return_storage_ptr__,Params *param_1,
          pmf_94337950 *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EOnlineServices EVar7;
  bool bVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FFindSessions>,1> *pTVar10;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar11;
  TOnlineAsyncOp<UE::Online::FFindSessions> *this_00;
  TOnlineAsyncOpHandle<UE::Online::FFindSessions> *pTVar12;
  TOnlineAsyncOp<UE::Online::FFindSessions> *this_01;
  FOnlineAsyncOpQueue *this_02;
  int iVar13;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  <lambda_1> local_a8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FFindSessions>,1> local_80;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FFindSessions>,1> local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_48;
  char local_38;
  
  plVar4 = (longlong *)this->_padding_;
  ::FString::FString(&local_b8,L"FindSessions");
  pTVar9 = TOnlineComponent<UE::Online::ISessions>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISessions> *)this,&local_c8,&local_b8);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar4[0x5e] != '\0')) {
    EVar7 = (**(code **)(*plVar4 + 0x98))(plVar4);
    Online::LexToString(EVar7);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FFindSessions>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FFindSessions>
            ((FOnlineAsyncOpCache *)(plVar4 + 8),&local_d8,param_1,pTVar9);
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar3 = (int)this->_padding_;
  this_00 = (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange(&(local_d8.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar13);
  (**(code **)(this->_padding_ + 0x120))(this,local_60,((local_d8.Object)->SharedState).Object);
  if (local_38 == '\0') {
    local_a8.WeakThis.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    local_a8.WeakThis.Object = (ISessions *)this->_padding_;
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_a8.ImplFunc._0_8_ = *(undefined8 *)param_2;
    local_a8.ImplFunc._8_8_ = *(undefined8 *)&param_2->field_0x8;
    this_01 = local_d8.Object;
    if (local_d8.Object == (TOnlineAsyncOp<UE::Online::FFindSessions> *)0xffffffffffffffa8) {
      this_01 = this_00;
    }
    local_a8.__this = this;
    pTVar11 = ::operator_new(0x40);
    if (pTVar11 != (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) {
      ((FOnlineAsyncExecutionPolicy *)&pTVar11->_padding_)->ExecutionPolicy = RunOnGameThread;
      pTVar11->_padding_ = 0x15309c430;
      *(undefined8 *)&pTVar11->_padding_ = 0;
      pTVar11->_padding_ = 0;
      this_00 = pTVar11;
    }
    local_res8.Ptr = (IStep *)this_00;
    Online::Private::TStep<void>::
    SetExecFunction<UE::Online::FFindSessions,_UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>_::__l2::<lambda_1>_>
              ((TStep<void> *)this_00,this_01,&local_a8);
    TOnlineAsyncOp<UE::Online::FFindSessions>::AddStep(this_01,&local_res8);
    if ((TOnlineAsyncOp<UE::Online::FFindSessions> *)local_res8.Ptr !=
        (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) {
      (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
    }
    if (param_3) {
      this_02 = (FOnlineAsyncOpQueue *)(this->_padding_ + 0x1d0);
    }
    else {
      this_02 = (FOnlineAsyncOpQueue *)&this->_padding_;
    }
    if ((((this_01->SharedState).Object)->State != Invalid) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedState->State < EAsyncOpState::Queued",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                           ,0x5bb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TOnlineAsyncOpHandle<UE::Online::FFindSessions> *)(*pcVar6)();
      return pTVar12;
    }
    ((this_01->SharedState).Object)->State = Queued;
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::LexToString(((this_01->SharedState).Object)->State);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::Enqueue<UE::Online::FOnlineAsyncOpQueue>(UE::Online::FOnlineAsyncOpQueue&___ptr64,double)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    FOnlineAsyncOpQueue::Enqueue<UE::Online::FFindSessions>(this_02,this_01,0.0);
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_a8.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a8.WeakThis.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar10 = TOnlineAsyncOp<UE::Online::FFindSessions>::CreateSharedState
                        (local_d8.Object,&local_70);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    local_58 = local_70.SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)((local_d8.Object)->_padding_ + 8))(local_d8.Object,local_60);
    pTVar10 = TOnlineAsyncOp<UE::Online::FFindSessions>::CreateSharedState
                        (local_d8.Object,&local_80);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_38 == '\0') goto LAB_14edb8368;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
LAB_14edb8368:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteAsyncSessionsMethod<UE::Online::FJoinSession> @ 14edb83a0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FJoinSession> * __thiscall
UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FJoinSession> *__return_storage_ptr__,Params *param_1,
          pmf_0b8084c6 *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EOnlineServices EVar7;
  bool bVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FJoinSession>,1> *pTVar10;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar11;
  TOnlineAsyncOp<UE::Online::FJoinSession> *this_00;
  TOnlineAsyncOpHandle<UE::Online::FJoinSession> *pTVar12;
  TOnlineAsyncOp<UE::Online::FJoinSession> *this_01;
  FOnlineAsyncOpQueue *this_02;
  int iVar13;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  <lambda_1> local_a8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FJoinSession>,1> local_80;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FJoinSession>,1> local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_48;
  char local_38;
  
  plVar4 = (longlong *)this->_padding_;
  ::FString::FString(&local_b8,L"JoinSession");
  pTVar9 = TOnlineComponent<UE::Online::ISessions>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISessions> *)this,&local_c8,&local_b8);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar4[0x5e] != '\0')) {
    EVar7 = (**(code **)(*plVar4 + 0x98))(plVar4);
    Online::LexToString(EVar7);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FJoinSession>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FJoinSession>
            ((FOnlineAsyncOpCache *)(plVar4 + 8),&local_d8,param_1,pTVar9);
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar3 = (int)this->_padding_;
  this_00 = (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange(&(local_d8.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar13);
  (**(code **)(this->_padding_ + 0x110))(this,local_60,((local_d8.Object)->SharedState).Object);
  if (local_38 == '\0') {
    local_a8.WeakThis.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    local_a8.WeakThis.Object = (ISessions *)this->_padding_;
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_a8.ImplFunc._0_8_ = *(undefined8 *)param_2;
    local_a8.ImplFunc._8_8_ = *(undefined8 *)&param_2->field_0x8;
    this_01 = local_d8.Object;
    if (local_d8.Object == (TOnlineAsyncOp<UE::Online::FJoinSession> *)0xffffffffffffffa8) {
      this_01 = this_00;
    }
    local_a8.__this = this;
    pTVar11 = ::operator_new(0x40);
    if (pTVar11 != (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) {
      ((FOnlineAsyncExecutionPolicy *)&pTVar11->_padding_)->ExecutionPolicy = RunOnGameThread;
      pTVar11->_padding_ = 0x15309c430;
      *(undefined8 *)&pTVar11->_padding_ = 0;
      pTVar11->_padding_ = 0;
      this_00 = pTVar11;
    }
    local_res8.Ptr = (IStep *)this_00;
    Online::Private::TStep<void>::
    SetExecFunction<UE::Online::FJoinSession,_UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>_::__l2::<lambda_1>_>
              ((TStep<void> *)this_00,this_01,&local_a8);
    TOnlineAsyncOp<UE::Online::FJoinSession>::AddStep(this_01,&local_res8);
    if ((TOnlineAsyncOp<UE::Online::FJoinSession> *)local_res8.Ptr !=
        (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) {
      (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
    }
    if (param_3) {
      this_02 = (FOnlineAsyncOpQueue *)(this->_padding_ + 0x1d0);
    }
    else {
      this_02 = (FOnlineAsyncOpQueue *)&this->_padding_;
    }
    if ((((this_01->SharedState).Object)->State != Invalid) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedState->State < EAsyncOpState::Queued",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                           ,0x5bb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TOnlineAsyncOpHandle<UE::Online::FJoinSession> *)(*pcVar6)();
      return pTVar12;
    }
    ((this_01->SharedState).Object)->State = Queued;
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::LexToString(((this_01->SharedState).Object)->State);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>::Enqueue<UE::Online::FOnlineAsyncOpQueue>(UE::Online::FOnlineAsyncOpQueue&___ptr64,double)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    FOnlineAsyncOpQueue::Enqueue<UE::Online::FJoinSession>(this_02,this_01,0.0);
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_a8.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a8.WeakThis.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar10 = TOnlineAsyncOp<UE::Online::FJoinSession>::CreateSharedState(local_d8.Object,&local_70)
    ;
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    local_58 = local_70.SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)((local_d8.Object)->_padding_ + 8))(local_d8.Object,local_60);
    pTVar10 = TOnlineAsyncOp<UE::Online::FJoinSession>::CreateSharedState(local_d8.Object,&local_80)
    ;
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_38 == '\0') goto LAB_14edb8688;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
LAB_14edb8688:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession> @ 14edb86c0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FLeaveSession> * __thiscall
UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FLeaveSession> *__return_storage_ptr__,Params *param_1,
          pmf_34791b70 *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EOnlineServices EVar7;
  bool bVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FLeaveSession>,1> *pTVar10;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar11;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *this_00;
  TOnlineAsyncOpHandle<UE::Online::FLeaveSession> *pTVar12;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *this_01;
  FOnlineAsyncOpQueue *this_02;
  int iVar13;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  <lambda_1> local_a8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FLeaveSession>,1> local_80;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FLeaveSession>,1> local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_48;
  char local_38;
  
  plVar4 = (longlong *)this->_padding_;
  ::FString::FString(&local_b8,L"LeaveSession");
  pTVar9 = TOnlineComponent<UE::Online::ISessions>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISessions> *)this,&local_c8,&local_b8);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar4[0x5e] != '\0')) {
    EVar7 = (**(code **)(*plVar4 + 0x98))(plVar4);
    Online::LexToString(EVar7);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FLeaveSession>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FLeaveSession>
            ((FOnlineAsyncOpCache *)(plVar4 + 8),&local_d8,param_1,pTVar9);
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar3 = (int)this->_padding_;
  this_00 = (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange(&(local_d8.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar13);
  (**(code **)(this->_padding_ + 0x128))(this,local_60,((local_d8.Object)->SharedState).Object);
  if (local_38 == '\0') {
    local_a8.WeakThis.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    local_a8.WeakThis.Object = (ISessions *)this->_padding_;
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_a8.ImplFunc._0_8_ = *(undefined8 *)param_2;
    local_a8.ImplFunc._8_8_ = *(undefined8 *)&param_2->field_0x8;
    this_01 = local_d8.Object;
    if (local_d8.Object == (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0xffffffffffffffa8) {
      this_01 = this_00;
    }
    local_a8.__this = this;
    pTVar11 = ::operator_new(0x40);
    if (pTVar11 != (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) {
      ((FOnlineAsyncExecutionPolicy *)&pTVar11->_padding_)->ExecutionPolicy = RunOnGameThread;
      pTVar11->_padding_ = 0x15309c430;
      *(undefined8 *)&pTVar11->_padding_ = 0;
      pTVar11->_padding_ = 0;
      this_00 = pTVar11;
    }
    local_res8.Ptr = (IStep *)this_00;
    Online::Private::TStep<void>::
    SetExecFunction<UE::Online::FLeaveSession,_UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>_::__l2::<lambda_1>_>
              ((TStep<void> *)this_00,this_01,&local_a8);
    TOnlineAsyncOp<UE::Online::FLeaveSession>::AddStep(this_01,&local_res8);
    if ((TOnlineAsyncOp<UE::Online::FLeaveSession> *)local_res8.Ptr !=
        (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) {
      (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
    }
    if (param_3) {
      this_02 = (FOnlineAsyncOpQueue *)(this->_padding_ + 0x1d0);
    }
    else {
      this_02 = (FOnlineAsyncOpQueue *)&this->_padding_;
    }
    if ((((this_01->SharedState).Object)->State != Invalid) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedState->State < EAsyncOpState::Queued",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                           ,0x5bb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TOnlineAsyncOpHandle<UE::Online::FLeaveSession> *)(*pcVar6)();
      return pTVar12;
    }
    ((this_01->SharedState).Object)->State = Queued;
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::LexToString(((this_01->SharedState).Object)->State);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>::Enqueue<UE::Online::FOnlineAsyncOpQueue>(UE::Online::FOnlineAsyncOpQueue&___ptr64,double)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    FOnlineAsyncOpQueue::Enqueue<UE::Online::FLeaveSession>(this_02,this_01,0.0);
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_a8.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a8.WeakThis.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar10 = TOnlineAsyncOp<UE::Online::FLeaveSession>::CreateSharedState
                        (local_d8.Object,&local_70);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    local_58 = local_70.SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)((local_d8.Object)->_padding_ + 8))(local_d8.Object,local_60);
    pTVar10 = TOnlineAsyncOp<UE::Online::FLeaveSession>::CreateSharedState
                        (local_d8.Object,&local_80);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_38 == '\0') goto LAB_14edb89a8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
LAB_14edb89a8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite> @ 14edb89e0

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FRejectSessionInvite> * __thiscall
UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FRejectSessionInvite> *__return_storage_ptr__,
          Params *param_1,pmf_8754921e *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EOnlineServices EVar7;
  bool bVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FRejectSessionInvite>,1>
  *pTVar10;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar11;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *this_00;
  TOnlineAsyncOpHandle<UE::Online::FRejectSessionInvite> *pTVar12;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *this_01;
  FOnlineAsyncOpQueue *this_02;
  int iVar13;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  <lambda_1> local_a8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FRejectSessionInvite>,1>
  local_80;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FRejectSessionInvite>,1>
  local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_48;
  char local_38;
  
  plVar4 = (longlong *)this->_padding_;
  ::FString::FString(&local_b8,L"RejectSessionInvite");
  pTVar9 = TOnlineComponent<UE::Online::ISessions>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISessions> *)this,&local_c8,&local_b8);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar4[0x5e] != '\0')) {
    EVar7 = (**(code **)(*plVar4 + 0x98))(plVar4);
    Online::LexToString(EVar7);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FRejectSessionInvite>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FRejectSessionInvite>
            ((FOnlineAsyncOpCache *)(plVar4 + 8),&local_d8,param_1,pTVar9);
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar3 = (int)this->_padding_;
  this_00 = (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange(&(local_d8.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar13);
  (**(code **)(this->_padding_ + 0xf0))(this,local_60,((local_d8.Object)->SharedState).Object);
  if (local_38 == '\0') {
    local_a8.WeakThis.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    local_a8.WeakThis.Object = (ISessions *)this->_padding_;
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_a8.ImplFunc._0_8_ = *(undefined8 *)param_2;
    local_a8.ImplFunc._8_8_ = *(undefined8 *)&param_2->field_0x8;
    this_01 = local_d8.Object;
    if (local_d8.Object == (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0xffffffffffffffa8) {
      this_01 = this_00;
    }
    local_a8.__this = this;
    pTVar11 = ::operator_new(0x40);
    if (pTVar11 != (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) {
      ((FOnlineAsyncExecutionPolicy *)&pTVar11->_padding_)->ExecutionPolicy = RunOnGameThread;
      pTVar11->_padding_ = 0x15309c430;
      *(undefined8 *)&pTVar11->_padding_ = 0;
      pTVar11->_padding_ = 0;
      this_00 = pTVar11;
    }
    local_res8.Ptr = (IStep *)this_00;
    Online::Private::TStep<void>::
    SetExecFunction<UE::Online::FRejectSessionInvite,_UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>_::__l2::<lambda_1>_>
              ((TStep<void> *)this_00,this_01,&local_a8);
    TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::AddStep(this_01,&local_res8);
    if ((TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)local_res8.Ptr !=
        (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) {
      (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
    }
    if (param_3) {
      this_02 = (FOnlineAsyncOpQueue *)(this->_padding_ + 0x1d0);
    }
    else {
      this_02 = (FOnlineAsyncOpQueue *)&this->_padding_;
    }
    if ((((this_01->SharedState).Object)->State != Invalid) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedState->State < EAsyncOpState::Queued",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                           ,0x5bb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TOnlineAsyncOpHandle<UE::Online::FRejectSessionInvite> *)(*pcVar6)();
      return pTVar12;
    }
    ((this_01->SharedState).Object)->State = Queued;
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::LexToString(((this_01->SharedState).Object)->State);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::Enqueue<UE::Online::FOnlineAsyncOpQueue>(UE::Online::FOnlineAsyncOpQueue&___ptr64,double)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    FOnlineAsyncOpQueue::Enqueue<UE::Online::FRejectSessionInvite>(this_02,this_01,0.0);
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_a8.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a8.WeakThis.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar10 = TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::CreateSharedState
                        (local_d8.Object,&local_70);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    local_58 = local_70.SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)((local_d8.Object)->_padding_ + 8))(local_d8.Object,local_60);
    pTVar10 = TOnlineAsyncOp<UE::Online::FRejectSessionInvite>::CreateSharedState
                        (local_d8.Object,&local_80);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_38 == '\0') goto LAB_14edb8cc8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
LAB_14edb8cc8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember> @ 14edb8d00

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FRemoveSessionMember> * __thiscall
UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FRemoveSessionMember> *__return_storage_ptr__,
          Params *param_1,pmf_6bf71a86 *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EOnlineServices EVar7;
  bool bVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FRemoveSessionMember>,1>
  *pTVar10;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar11;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *this_00;
  TOnlineAsyncOpHandle<UE::Online::FRemoveSessionMember> *pTVar12;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *this_01;
  FOnlineAsyncOpQueue *this_02;
  int iVar13;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  <lambda_1> local_a8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FRemoveSessionMember>,1>
  local_80;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FRemoveSessionMember>,1>
  local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_48;
  char local_38;
  
  plVar4 = (longlong *)this->_padding_;
  ::FString::FString(&local_b8,L"RemoveSessionMember");
  pTVar9 = TOnlineComponent<UE::Online::ISessions>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISessions> *)this,&local_c8,&local_b8);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar4[0x5e] != '\0')) {
    EVar7 = (**(code **)(*plVar4 + 0x98))(plVar4);
    Online::LexToString(EVar7);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FRemoveSessionMember>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FRemoveSessionMember>
            ((FOnlineAsyncOpCache *)(plVar4 + 8),&local_d8,param_1,pTVar9);
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar3 = (int)this->_padding_;
  this_00 = (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange(&(local_d8.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar13);
  (**(code **)(this->_padding_ + 0x100))(this,local_60,((local_d8.Object)->SharedState).Object);
  if (local_38 == '\0') {
    local_a8.WeakThis.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    local_a8.WeakThis.Object = (ISessions *)this->_padding_;
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_a8.ImplFunc._0_8_ = *(undefined8 *)param_2;
    local_a8.ImplFunc._8_8_ = *(undefined8 *)&param_2->field_0x8;
    this_01 = local_d8.Object;
    if (local_d8.Object == (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0xffffffffffffffa8) {
      this_01 = this_00;
    }
    local_a8.__this = this;
    pTVar11 = ::operator_new(0x40);
    if (pTVar11 != (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) {
      ((FOnlineAsyncExecutionPolicy *)&pTVar11->_padding_)->ExecutionPolicy = RunOnGameThread;
      pTVar11->_padding_ = 0x15309c430;
      *(undefined8 *)&pTVar11->_padding_ = 0;
      pTVar11->_padding_ = 0;
      this_00 = pTVar11;
    }
    local_res8.Ptr = (IStep *)this_00;
    Online::Private::TStep<void>::
    SetExecFunction<UE::Online::FRemoveSessionMember,_UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>_::__l2::<lambda_1>_>
              ((TStep<void> *)this_00,this_01,&local_a8);
    TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::AddStep(this_01,&local_res8);
    if ((TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)local_res8.Ptr !=
        (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) {
      (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
    }
    if (param_3) {
      this_02 = (FOnlineAsyncOpQueue *)(this->_padding_ + 0x1d0);
    }
    else {
      this_02 = (FOnlineAsyncOpQueue *)&this->_padding_;
    }
    if ((((this_01->SharedState).Object)->State != Invalid) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedState->State < EAsyncOpState::Queued",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                           ,0x5bb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TOnlineAsyncOpHandle<UE::Online::FRemoveSessionMember> *)(*pcVar6)();
      return pTVar12;
    }
    ((this_01->SharedState).Object)->State = Queued;
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::LexToString(((this_01->SharedState).Object)->State);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::Enqueue<UE::Online::FOnlineAsyncOpQueue>(UE::Online::FOnlineAsyncOpQueue&___ptr64,double)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    FOnlineAsyncOpQueue::Enqueue<UE::Online::FRemoveSessionMember>(this_02,this_01,0.0);
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_a8.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a8.WeakThis.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar10 = TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::CreateSharedState
                        (local_d8.Object,&local_70);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    local_58 = local_70.SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)((local_d8.Object)->_padding_ + 8))(local_d8.Object,local_60);
    pTVar10 = TOnlineAsyncOp<UE::Online::FRemoveSessionMember>::CreateSharedState
                        (local_d8.Object,&local_80);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_38 == '\0') goto LAB_14edb8fe8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
LAB_14edb8fe8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite> @ 14edb9020

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FSendSessionInvite> * __thiscall
UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FSendSessionInvite> *__return_storage_ptr__,
          Params *param_1,pmf_00a64fb0 *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EOnlineServices EVar7;
  bool bVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FSendSessionInvite>,1>
  *pTVar10;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar11;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *this_00;
  TOnlineAsyncOpHandle<UE::Online::FSendSessionInvite> *pTVar12;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *this_01;
  FOnlineAsyncOpQueue *this_02;
  int iVar13;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  <lambda_1> local_a8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FSendSessionInvite>,1>
  local_80;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FSendSessionInvite>,1>
  local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_48;
  char local_38;
  
  plVar4 = (longlong *)this->_padding_;
  ::FString::FString(&local_b8,L"SendSessionInvite");
  pTVar9 = TOnlineComponent<UE::Online::ISessions>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISessions> *)this,&local_c8,&local_b8);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar4[0x5e] != '\0')) {
    EVar7 = (**(code **)(*plVar4 + 0x98))(plVar4);
    Online::LexToString(EVar7);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FSendSessionInvite>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FSendSessionInvite>
            ((FOnlineAsyncOpCache *)(plVar4 + 8),&local_d8,param_1,pTVar9);
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar3 = (int)this->_padding_;
  this_00 = (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange(&(local_d8.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar13);
  (**(code **)(this->_padding_ + 0xf8))(this,local_60,((local_d8.Object)->SharedState).Object);
  if (local_38 == '\0') {
    local_a8.WeakThis.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    local_a8.WeakThis.Object = (ISessions *)this->_padding_;
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_a8.ImplFunc._0_8_ = *(undefined8 *)param_2;
    local_a8.ImplFunc._8_8_ = *(undefined8 *)&param_2->field_0x8;
    this_01 = local_d8.Object;
    if (local_d8.Object == (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0xffffffffffffffa8) {
      this_01 = this_00;
    }
    local_a8.__this = this;
    pTVar11 = ::operator_new(0x40);
    if (pTVar11 != (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) {
      ((FOnlineAsyncExecutionPolicy *)&pTVar11->_padding_)->ExecutionPolicy = RunOnGameThread;
      pTVar11->_padding_ = 0x15309c430;
      *(undefined8 *)&pTVar11->_padding_ = 0;
      pTVar11->_padding_ = 0;
      this_00 = pTVar11;
    }
    local_res8.Ptr = (IStep *)this_00;
    Online::Private::TStep<void>::
    SetExecFunction<UE::Online::FSendSessionInvite,_UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>_::__l2::<lambda_1>_>
              ((TStep<void> *)this_00,this_01,&local_a8);
    TOnlineAsyncOp<UE::Online::FSendSessionInvite>::AddStep(this_01,&local_res8);
    if ((TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)local_res8.Ptr !=
        (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) {
      (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
    }
    if (param_3) {
      this_02 = (FOnlineAsyncOpQueue *)(this->_padding_ + 0x1d0);
    }
    else {
      this_02 = (FOnlineAsyncOpQueue *)&this->_padding_;
    }
    if ((((this_01->SharedState).Object)->State != Invalid) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedState->State < EAsyncOpState::Queued",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                           ,0x5bb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TOnlineAsyncOpHandle<UE::Online::FSendSessionInvite> *)(*pcVar6)();
      return pTVar12;
    }
    ((this_01->SharedState).Object)->State = Queued;
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::LexToString(((this_01->SharedState).Object)->State);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::Enqueue<UE::Online::FOnlineAsyncOpQueue>(UE::Online::FOnlineAsyncOpQueue&___ptr64,double)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    FOnlineAsyncOpQueue::Enqueue<UE::Online::FSendSessionInvite>(this_02,this_01,0.0);
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_a8.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a8.WeakThis.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar10 = TOnlineAsyncOp<UE::Online::FSendSessionInvite>::CreateSharedState
                        (local_d8.Object,&local_70);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    local_58 = local_70.SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)((local_d8.Object)->_padding_ + 8))(local_d8.Object,local_60);
    pTVar10 = TOnlineAsyncOp<UE::Online::FSendSessionInvite>::CreateSharedState
                        (local_d8.Object,&local_80);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_38 == '\0') goto LAB_14edb9308;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
LAB_14edb9308:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking> @ 14edb9340

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FStartMatchmaking> * __thiscall
UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FStartMatchmaking> *__return_storage_ptr__,
          Params *param_1,pmf_385681d0 *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EOnlineServices EVar7;
  bool bVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FStartMatchmaking>,1>
  *pTVar10;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar11;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *this_00;
  TOnlineAsyncOpHandle<UE::Online::FStartMatchmaking> *pTVar12;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *this_01;
  FOnlineAsyncOpQueue *this_02;
  int iVar13;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  <lambda_1> local_a8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FStartMatchmaking>,1>
  local_80;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FStartMatchmaking>,1>
  local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_48;
  char local_38;
  
  plVar4 = (longlong *)this->_padding_;
  ::FString::FString(&local_b8,L"StartMatchmaking");
  pTVar9 = TOnlineComponent<UE::Online::ISessions>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISessions> *)this,&local_c8,&local_b8);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar4[0x5e] != '\0')) {
    EVar7 = (**(code **)(*plVar4 + 0x98))(plVar4);
    Online::LexToString(EVar7);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FStartMatchmaking>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FStartMatchmaking>
            ((FOnlineAsyncOpCache *)(plVar4 + 8),&local_d8,param_1,pTVar9);
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar3 = (int)this->_padding_;
  this_00 = (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange(&(local_d8.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar13);
  (**(code **)(this->_padding_ + 0x118))(this,local_60,((local_d8.Object)->SharedState).Object);
  if (local_38 == '\0') {
    local_a8.WeakThis.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    local_a8.WeakThis.Object = (ISessions *)this->_padding_;
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_a8.ImplFunc._0_8_ = *(undefined8 *)param_2;
    local_a8.ImplFunc._8_8_ = *(undefined8 *)&param_2->field_0x8;
    this_01 = local_d8.Object;
    if (local_d8.Object == (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0xffffffffffffffa8) {
      this_01 = this_00;
    }
    local_a8.__this = this;
    pTVar11 = ::operator_new(0x40);
    if (pTVar11 != (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) {
      ((FOnlineAsyncExecutionPolicy *)&pTVar11->_padding_)->ExecutionPolicy = RunOnGameThread;
      pTVar11->_padding_ = 0x15309c430;
      *(undefined8 *)&pTVar11->_padding_ = 0;
      pTVar11->_padding_ = 0;
      this_00 = pTVar11;
    }
    local_res8.Ptr = (IStep *)this_00;
    Online::Private::TStep<void>::
    SetExecFunction<UE::Online::FStartMatchmaking,_UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>_::__l2::<lambda_1>_>
              ((TStep<void> *)this_00,this_01,&local_a8);
    TOnlineAsyncOp<UE::Online::FStartMatchmaking>::AddStep(this_01,&local_res8);
    if ((TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)local_res8.Ptr !=
        (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) {
      (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
    }
    if (param_3) {
      this_02 = (FOnlineAsyncOpQueue *)(this->_padding_ + 0x1d0);
    }
    else {
      this_02 = (FOnlineAsyncOpQueue *)&this->_padding_;
    }
    if ((((this_01->SharedState).Object)->State != Invalid) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedState->State < EAsyncOpState::Queued",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                           ,0x5bb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TOnlineAsyncOpHandle<UE::Online::FStartMatchmaking> *)(*pcVar6)();
      return pTVar12;
    }
    ((this_01->SharedState).Object)->State = Queued;
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::LexToString(((this_01->SharedState).Object)->State);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::Enqueue<UE::Online::FOnlineAsyncOpQueue>(UE::Online::FOnlineAsyncOpQueue&___ptr64,double)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    FOnlineAsyncOpQueue::Enqueue<UE::Online::FStartMatchmaking>(this_02,this_01,0.0);
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_a8.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a8.WeakThis.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar10 = TOnlineAsyncOp<UE::Online::FStartMatchmaking>::CreateSharedState
                        (local_d8.Object,&local_70);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    local_58 = local_70.SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)((local_d8.Object)->_padding_ + 8))(local_d8.Object,local_60);
    pTVar10 = TOnlineAsyncOp<UE::Online::FStartMatchmaking>::CreateSharedState
                        (local_d8.Object,&local_80);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_38 == '\0') goto LAB_14edb9631;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
LAB_14edb9631:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings> @ 14edb9660

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FUpdateSessionSettings> * __thiscall
UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FUpdateSessionSettings> *__return_storage_ptr__,
          Params *param_1,pmf_3efb2cfe *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EOnlineServices EVar7;
  bool bVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUpdateSessionSettings>,1>
  *pTVar10;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar11;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *this_00;
  TOnlineAsyncOpHandle<UE::Online::FUpdateSessionSettings> *pTVar12;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *this_01;
  FOnlineAsyncOpQueue *this_02;
  int iVar13;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  <lambda_1> local_a8;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUpdateSessionSettings>,1>
  local_80;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUpdateSessionSettings>,1>
  local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_48;
  char local_38;
  
  plVar4 = (longlong *)this->_padding_;
  ::FString::FString(&local_b8,L"UpdateSessionSettings");
  pTVar9 = TOnlineComponent<UE::Online::ISessions>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::ISessions> *)this,&local_c8,&local_b8);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar4[0x5e] != '\0')) {
    EVar7 = (**(code **)(*plVar4 + 0x98))(plVar4);
    Online::LexToString(EVar7);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FUpdateSessionSettings>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FUpdateSessionSettings>
            ((FOnlineAsyncOpCache *)(plVar4 + 8),&local_d8,param_1,pTVar9);
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar3 = (int)this->_padding_;
  this_00 = (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange(&(local_d8.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar13);
  (**(code **)(this->_padding_ + 0x130))(this,local_60,((local_d8.Object)->SharedState).Object);
  if (local_38 == '\0') {
    local_a8.WeakThis.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    local_a8.WeakThis.Object = (ISessions *)this->_padding_;
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1)
      ;
      UNLOCK();
    }
    local_a8.ImplFunc._0_8_ = *(undefined8 *)param_2;
    local_a8.ImplFunc._8_8_ = *(undefined8 *)&param_2->field_0x8;
    this_01 = local_d8.Object;
    if (local_d8.Object == (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0xffffffffffffffa8)
    {
      this_01 = this_00;
    }
    local_a8.__this = this;
    pTVar11 = ::operator_new(0x40);
    if (pTVar11 != (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) {
      ((FOnlineAsyncExecutionPolicy *)&pTVar11->_padding_)->ExecutionPolicy = RunOnGameThread;
      pTVar11->_padding_ = 0x15309c430;
      *(undefined8 *)&pTVar11->_padding_ = 0;
      pTVar11->_padding_ = 0;
      this_00 = pTVar11;
    }
    local_res8.Ptr = (IStep *)this_00;
    Online::Private::TStep<void>::
    SetExecFunction<UE::Online::FUpdateSessionSettings,_UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>_::__l2::<lambda_1>_>
              ((TStep<void> *)this_00,this_01,&local_a8);
    TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::AddStep(this_01,&local_res8);
    if ((TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)local_res8.Ptr !=
        (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) {
      (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
    }
    if (param_3) {
      this_02 = (FOnlineAsyncOpQueue *)(this->_padding_ + 0x1d0);
    }
    else {
      this_02 = (FOnlineAsyncOpQueue *)&this->_padding_;
    }
    if ((((this_01->SharedState).Object)->State != Invalid) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedState->State < EAsyncOpState::Queued",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                           ,0x5bb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TOnlineAsyncOpHandle<UE::Online::FUpdateSessionSettings> *)(*pcVar6)();
      return pTVar12;
    }
    ((this_01->SharedState).Object)->State = Queued;
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::LexToString(((this_01->SharedState).Object)->State);
      Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::Enqueue<UE::Online::FOnlineAsyncOpQueue>(UE::Online::FOnlineAsyncOpQueue&___ptr64,double)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    FOnlineAsyncOpQueue::Enqueue<UE::Online::FUpdateSessionSettings>(this_02,this_01,0.0);
    if (local_a8.WeakThis.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a8.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_a8.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a8.WeakThis.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar10 = TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::CreateSharedState
                        (local_d8.Object,&local_70);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    local_58 = local_70.SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    (**(code **)((local_d8.Object)->_padding_ + 8))(local_d8.Object,local_60);
    pTVar10 = TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::CreateSharedState
                        (local_d8.Object,&local_80);
    (__return_storage_ptr__->State).Object = pTVar10->Object;
    pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_38 == '\0') goto LAB_14edb9951;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
LAB_14edb9951:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FSessionsCommon @ 14ee0ec80

FSessionsCommon * __thiscall
UE::Online::FSessionsCommon::FSessionsCommon(FSessionsCommon *this,FOnlineServicesCommon *param_1)

{
  longlong *plVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  ForAnyElementType _Src;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Sessions");
  this->_padding_ = (longlong)param_1;
  this->_padding_ =
       (longlong)&TOnlineComponent<UE::Online::ISessions>::_vftable__for__UE__Online__ISessions__;
  this->_padding_ =
       (longlong)
       &TOnlineComponent<UE::Online::ISessions>::_vftable__for__UE__Online__IOnlineComponent__;
  pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_28);
  pTVar3 = (pTVar4->SharedReferenceCount).ReferenceController;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)this;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)this;
    this->_padding_ = (longlong)pTVar3;
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  plVar1 = &this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *plVar1 = 0;
  *(int *)&this->_padding_ = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)plVar1,local_38.Data.ArrayNum,
               piVar2);
    memcpy((void *)*plVar1,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial
            ((FOnlineAsyncOpQueueSerial *)&this->_padding_,&param_1->ParallelQueue);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&_vftable__for__UE__Online__ISessions__;
  this->_padding_ = (longlong)&_vftable__for__UE__Online__IOnlineComponent__;
  FSessionEvents::FSessionEvents(&this->SessionEvents);
  *(undefined8 *)&this->NamedSessionUserMap = 0;
  *(undefined8 *)&(this->NamedSessionUserMap).field_0x8 = 0;
  *(undefined8 *)&(this->NamedSessionUserMap).field_0x20 = 0;
  *(undefined4 *)&(this->NamedSessionUserMap).field_0x28 = 0;
  *(undefined4 *)&(this->NamedSessionUserMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedSessionUserMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NamedSessionUserMap).field_0x34 = 0;
  *(undefined8 *)&(this->NamedSessionUserMap).field_0x40 = 0;
  *(undefined4 *)&(this->NamedSessionUserMap).field_0x48 = 0;
  *(undefined8 *)&this->LocalSessionsByName = 0;
  *(undefined8 *)&(this->LocalSessionsByName).field_0x8 = 0;
  *(undefined8 *)&(this->LocalSessionsByName).field_0x20 = 0;
  *(undefined4 *)&(this->LocalSessionsByName).field_0x28 = 0;
  *(undefined4 *)&(this->LocalSessionsByName).field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalSessionsByName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalSessionsByName).field_0x34 = 0;
  *(undefined8 *)&(this->LocalSessionsByName).field_0x40 = 0;
  *(undefined4 *)&(this->LocalSessionsByName).field_0x48 = 0;
  *(undefined8 *)&this->PresenceSessionsUserMap = 0;
  *(undefined8 *)&(this->PresenceSessionsUserMap).field_0x8 = 0;
  *(undefined8 *)&(this->PresenceSessionsUserMap).field_0x20 = 0;
  *(undefined4 *)&(this->PresenceSessionsUserMap).field_0x28 = 0;
  *(undefined4 *)&(this->PresenceSessionsUserMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PresenceSessionsUserMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PresenceSessionsUserMap).field_0x34 = 0;
  *(undefined8 *)&(this->PresenceSessionsUserMap).field_0x40 = 0;
  *(undefined4 *)&(this->PresenceSessionsUserMap).field_0x48 = 0;
  *(undefined8 *)&this->SessionInvitesUserMap = 0;
  *(undefined8 *)&(this->SessionInvitesUserMap).field_0x8 = 0;
  *(undefined8 *)&(this->SessionInvitesUserMap).field_0x20 = 0;
  *(undefined4 *)&(this->SessionInvitesUserMap).field_0x28 = 0;
  *(undefined4 *)&(this->SessionInvitesUserMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SessionInvitesUserMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SessionInvitesUserMap).field_0x34 = 0;
  *(undefined8 *)&(this->SessionInvitesUserMap).field_0x40 = 0;
  *(undefined4 *)&(this->SessionInvitesUserMap).field_0x48 = 0;
  *(undefined8 *)&this->SearchResultsUserMap = 0;
  *(undefined8 *)&(this->SearchResultsUserMap).field_0x8 = 0;
  *(undefined8 *)&(this->SearchResultsUserMap).field_0x20 = 0;
  *(undefined4 *)&(this->SearchResultsUserMap).field_0x28 = 0;
  *(undefined4 *)&(this->SearchResultsUserMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SearchResultsUserMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SearchResultsUserMap).field_0x34 = 0;
  *(undefined8 *)&(this->SearchResultsUserMap).field_0x40 = 0;
  *(undefined4 *)&(this->SearchResultsUserMap).field_0x48 = 0;
  *(undefined8 *)&this->CurrentSessionSearchPromisesUserMap = 0;
  *(undefined8 *)&(this->CurrentSessionSearchPromisesUserMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentSessionSearchPromisesUserMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentSessionSearchPromisesUserMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentSessionSearchPromisesUserMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentSessionSearchPromisesUserMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentSessionSearchPromisesUserMap).field_0x34 = 0;
  *(undefined8 *)&(this->CurrentSessionSearchPromisesUserMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentSessionSearchPromisesUserMap).field_0x48 = 0;
  *(undefined8 *)&this->AllSessionsById = 0;
  *(undefined8 *)&(this->AllSessionsById).field_0x8 = 0;
  *(undefined8 *)&(this->AllSessionsById).field_0x20 = 0;
  *(undefined4 *)&(this->AllSessionsById).field_0x28 = 0;
  *(undefined4 *)&(this->AllSessionsById).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllSessionsById).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllSessionsById).field_0x34 = 0;
  *(undefined8 *)&(this->AllSessionsById).field_0x40 = 0;
  *(undefined4 *)&(this->AllSessionsById).field_0x48 = 0;
  return this;
}

// operator() @ 14ee283c0

void __thiscall
`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>'::__l2::
<lambda_1>::operator()(void *this,TOnlineAsyncOp<UE::Online::FAddSessionMember> *param_1)

{
  FAsyncOpSharedState *pFVar1;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar2;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TFutureBase<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *this_00;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar8;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  char local_20;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee283f7;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    if (*(longlong *)((longlong)this + 8) != 0) {
      pFVar1 = (param_1->SharedState).Object;
      (**(code **)(**(longlong **)this + 0x158))(*(longlong **)this,local_48,pFVar1);
      if (local_20 == '\0') {
        this_00 = (TFutureBase<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *)
                  (**(code **)((longlong)this + 0x18))
                            ((longlong)*(int *)((longlong)this + 0x20) + *(longlong *)this,local_58,
                             pFVar1);
        pTVar2 = (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)param_1->_padding_;
        pTVar3 = (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)param_1->_padding_;
        pTVar9 = (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0;
        pTVar7 = pTVar3;
        if (pTVar3 != (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) {
          LOCK();
          ((atomic<int> *)&pTVar3->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pTVar3->_padding_)[1] + 1);
          UNLOCK();
          aVar5 = *(atomic<int> *)&pTVar3->_padding_;
          do {
            pTVar7 = pTVar9;
            if (aVar5 == (atomic<int>)0x0) break;
            LOCK();
            aVar6 = *(atomic<int> *)&pTVar3->_padding_;
            bVar11 = aVar5 == aVar6;
            if (bVar11) {
              *(atomic<int> *)&pTVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
              aVar6 = aVar5;
            }
            UNLOCK();
            pTVar7 = pTVar3;
            aVar5 = aVar6;
          } while (!bVar11);
        }
        pTVar8 = pTVar2;
        if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) {
          pTVar8 = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar7);
        pTVar7 = (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)&pTVar8->_padding_;
        if (pTVar8 == (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) {
          pTVar7 = pTVar9;
        }
        if ((pTVar7 != (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)&param_1->_padding_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.Pin().Get() == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x6c3,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.Continuation.WeakOp.Object = pTVar2;
        local_78.Continuation.WeakOp.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pTVar3;
        TFutureBase<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>::
        Then<_TFutureBase<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>::Next<__UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
                  (this_00,(TFuture<void> *)local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      else {
        (**(code **)(param_1->_padding_ + 8))(param_1,local_48);
        if (local_20 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
        }
      }
    }
  }
LAB_14ee283f7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14ee28570

void __thiscall
`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>'::__l2::
<lambda_1>::operator()(void *this,TOnlineAsyncOp<UE::Online::FCreateSession> *param_1)

{
  FAsyncOpSharedState *pFVar1;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar2;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TFutureBase<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *this_00;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar7;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar8;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  char local_20;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee285a7;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    if (*(longlong *)((longlong)this + 8) != 0) {
      pFVar1 = (param_1->SharedState).Object;
      (**(code **)(**(longlong **)this + 0x188))(*(longlong **)this,local_48,pFVar1);
      if (local_20 == '\0') {
        this_00 = (TFutureBase<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)
                  (**(code **)((longlong)this + 0x18))
                            ((longlong)*(int *)((longlong)this + 0x20) + *(longlong *)this,local_58,
                             pFVar1);
        pTVar2 = (TOnlineAsyncOp<UE::Online::FCreateSession> *)param_1->_padding_;
        pTVar3 = (TOnlineAsyncOp<UE::Online::FCreateSession> *)param_1->_padding_;
        pTVar9 = (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0;
        pTVar7 = pTVar3;
        if (pTVar3 != (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) {
          LOCK();
          ((atomic<int> *)&pTVar3->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pTVar3->_padding_)[1] + 1);
          UNLOCK();
          aVar5 = *(atomic<int> *)&pTVar3->_padding_;
          do {
            pTVar7 = pTVar9;
            if (aVar5 == (atomic<int>)0x0) break;
            LOCK();
            aVar6 = *(atomic<int> *)&pTVar3->_padding_;
            bVar11 = aVar5 == aVar6;
            if (bVar11) {
              *(atomic<int> *)&pTVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
              aVar6 = aVar5;
            }
            UNLOCK();
            pTVar7 = pTVar3;
            aVar5 = aVar6;
          } while (!bVar11);
        }
        pTVar8 = pTVar2;
        if (pTVar7 == (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) {
          pTVar8 = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar7);
        pTVar7 = (TOnlineAsyncOp<UE::Online::FCreateSession> *)&pTVar8->_padding_;
        if (pTVar8 == (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) {
          pTVar7 = pTVar9;
        }
        if ((pTVar7 != (TOnlineAsyncOp<UE::Online::FCreateSession> *)&param_1->_padding_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.Pin().Get() == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x6c3,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.Continuation.WeakOp.Object = pTVar2;
        local_78.Continuation.WeakOp.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pTVar3;
        TFutureBase<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>::
        Then<_TFutureBase<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>::Next<__UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
                  (this_00,(TFuture<void> *)local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      else {
        (**(code **)(param_1->_padding_ + 8))(param_1,local_48);
        if (local_20 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
        }
      }
    }
  }
LAB_14ee285a7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14ee28720

void __thiscall
`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>'::__l2::
<lambda_1>::operator()(void *this,TOnlineAsyncOp<UE::Online::FFindSessions> *param_1)

{
  FAsyncOpSharedState *pFVar1;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar2;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TFutureBase<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *this_00;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar7;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar8;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  char local_20;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee28757;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    if (*(longlong *)((longlong)this + 8) != 0) {
      pFVar1 = (param_1->SharedState).Object;
      (**(code **)(**(longlong **)this + 0x170))(*(longlong **)this,local_48,pFVar1);
      if (local_20 == '\0') {
        this_00 = (TFutureBase<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)
                  (**(code **)((longlong)this + 0x18))
                            ((longlong)*(int *)((longlong)this + 0x20) + *(longlong *)this,local_58,
                             pFVar1);
        pTVar2 = (TOnlineAsyncOp<UE::Online::FFindSessions> *)param_1->_padding_;
        pTVar3 = (TOnlineAsyncOp<UE::Online::FFindSessions> *)param_1->_padding_;
        pTVar9 = (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0;
        pTVar7 = pTVar3;
        if (pTVar3 != (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) {
          LOCK();
          ((atomic<int> *)&pTVar3->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pTVar3->_padding_)[1] + 1);
          UNLOCK();
          aVar5 = *(atomic<int> *)&pTVar3->_padding_;
          do {
            pTVar7 = pTVar9;
            if (aVar5 == (atomic<int>)0x0) break;
            LOCK();
            aVar6 = *(atomic<int> *)&pTVar3->_padding_;
            bVar11 = aVar5 == aVar6;
            if (bVar11) {
              *(atomic<int> *)&pTVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
              aVar6 = aVar5;
            }
            UNLOCK();
            pTVar7 = pTVar3;
            aVar5 = aVar6;
          } while (!bVar11);
        }
        pTVar8 = pTVar2;
        if (pTVar7 == (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) {
          pTVar8 = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar7);
        pTVar7 = (TOnlineAsyncOp<UE::Online::FFindSessions> *)&pTVar8->_padding_;
        if (pTVar8 == (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) {
          pTVar7 = pTVar9;
        }
        if ((pTVar7 != (TOnlineAsyncOp<UE::Online::FFindSessions> *)&param_1->_padding_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.Pin().Get() == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x6c3,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.Continuation.WeakOp.Object = pTVar2;
        local_78.Continuation.WeakOp.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pTVar3;
        TFutureBase<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>::
        Then<_TFutureBase<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>::Next<__UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
                  (this_00,(TFuture<void> *)local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      else {
        (**(code **)(param_1->_padding_ + 8))(param_1,local_48);
        if (local_20 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
        }
      }
    }
  }
LAB_14ee28757:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14ee288d0

void __thiscall
`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>'::__l2::
<lambda_1>::operator()(void *this,TOnlineAsyncOp<UE::Online::FJoinSession> *param_1)

{
  FAsyncOpSharedState *pFVar1;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar2;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TFutureBase<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *this_00;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar7;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar8;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  char local_20;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee28907;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    if (*(longlong *)((longlong)this + 8) != 0) {
      pFVar1 = (param_1->SharedState).Object;
      (**(code **)(**(longlong **)this + 0x160))(*(longlong **)this,local_48,pFVar1);
      if (local_20 == '\0') {
        this_00 = (TFutureBase<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)
                  (**(code **)((longlong)this + 0x18))
                            ((longlong)*(int *)((longlong)this + 0x20) + *(longlong *)this,local_58,
                             pFVar1);
        pTVar2 = (TOnlineAsyncOp<UE::Online::FJoinSession> *)param_1->_padding_;
        pTVar3 = (TOnlineAsyncOp<UE::Online::FJoinSession> *)param_1->_padding_;
        pTVar9 = (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0;
        pTVar7 = pTVar3;
        if (pTVar3 != (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) {
          LOCK();
          ((atomic<int> *)&pTVar3->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pTVar3->_padding_)[1] + 1);
          UNLOCK();
          aVar5 = *(atomic<int> *)&pTVar3->_padding_;
          do {
            pTVar7 = pTVar9;
            if (aVar5 == (atomic<int>)0x0) break;
            LOCK();
            aVar6 = *(atomic<int> *)&pTVar3->_padding_;
            bVar11 = aVar5 == aVar6;
            if (bVar11) {
              *(atomic<int> *)&pTVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
              aVar6 = aVar5;
            }
            UNLOCK();
            pTVar7 = pTVar3;
            aVar5 = aVar6;
          } while (!bVar11);
        }
        pTVar8 = pTVar2;
        if (pTVar7 == (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) {
          pTVar8 = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar7);
        pTVar7 = (TOnlineAsyncOp<UE::Online::FJoinSession> *)&pTVar8->_padding_;
        if (pTVar8 == (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) {
          pTVar7 = pTVar9;
        }
        if ((pTVar7 != (TOnlineAsyncOp<UE::Online::FJoinSession> *)&param_1->_padding_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.Pin().Get() == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x6c3,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.Continuation.WeakOp.Object = pTVar2;
        local_78.Continuation.WeakOp.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pTVar3;
        TFutureBase<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>::
        Then<_TFutureBase<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>::Next<__UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
                  (this_00,(TFuture<void> *)local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      else {
        (**(code **)(param_1->_padding_ + 8))(param_1,local_48);
        if (local_20 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
        }
      }
    }
  }
LAB_14ee28907:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14ee28a80

void __thiscall
`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>'::__l2::
<lambda_1>::operator()(void *this,TOnlineAsyncOp<UE::Online::FLeaveSession> *param_1)

{
  FAsyncOpSharedState *pFVar1;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar2;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TFutureBase<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *this_00;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar7;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar8;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  char local_20;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee28ab7;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    if (*(longlong *)((longlong)this + 8) != 0) {
      pFVar1 = (param_1->SharedState).Object;
      (**(code **)(**(longlong **)this + 0x178))(*(longlong **)this,local_48,pFVar1);
      if (local_20 == '\0') {
        this_00 = (TFutureBase<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)
                  (**(code **)((longlong)this + 0x18))
                            ((longlong)*(int *)((longlong)this + 0x20) + *(longlong *)this,local_58,
                             pFVar1);
        pTVar2 = (TOnlineAsyncOp<UE::Online::FLeaveSession> *)param_1->_padding_;
        pTVar3 = (TOnlineAsyncOp<UE::Online::FLeaveSession> *)param_1->_padding_;
        pTVar9 = (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0;
        pTVar7 = pTVar3;
        if (pTVar3 != (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) {
          LOCK();
          ((atomic<int> *)&pTVar3->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pTVar3->_padding_)[1] + 1);
          UNLOCK();
          aVar5 = *(atomic<int> *)&pTVar3->_padding_;
          do {
            pTVar7 = pTVar9;
            if (aVar5 == (atomic<int>)0x0) break;
            LOCK();
            aVar6 = *(atomic<int> *)&pTVar3->_padding_;
            bVar11 = aVar5 == aVar6;
            if (bVar11) {
              *(atomic<int> *)&pTVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
              aVar6 = aVar5;
            }
            UNLOCK();
            pTVar7 = pTVar3;
            aVar5 = aVar6;
          } while (!bVar11);
        }
        pTVar8 = pTVar2;
        if (pTVar7 == (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) {
          pTVar8 = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar7);
        pTVar7 = (TOnlineAsyncOp<UE::Online::FLeaveSession> *)&pTVar8->_padding_;
        if (pTVar8 == (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) {
          pTVar7 = pTVar9;
        }
        if ((pTVar7 != (TOnlineAsyncOp<UE::Online::FLeaveSession> *)&param_1->_padding_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.Pin().Get() == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x6c3,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.Continuation.WeakOp.Object = pTVar2;
        local_78.Continuation.WeakOp.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pTVar3;
        TFutureBase<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>::
        Then<_TFutureBase<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>::Next<__UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
                  (this_00,(TFuture<void> *)local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      else {
        (**(code **)(param_1->_padding_ + 8))(param_1,local_48);
        if (local_20 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
        }
      }
    }
  }
LAB_14ee28ab7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14ee28c30

void __thiscall
`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>'::__l2::
<lambda_1>::operator()(void *this,TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *param_1)

{
  FAsyncOpSharedState *pFVar1;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar2;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TFutureBase<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *this_00;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar7;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar8;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  char local_20;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee28c67;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    if (*(longlong *)((longlong)this + 8) != 0) {
      pFVar1 = (param_1->SharedState).Object;
      (**(code **)(**(longlong **)this + 0x140))(*(longlong **)this,local_48,pFVar1);
      if (local_20 == '\0') {
        this_00 = (TFutureBase<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *)
                  (**(code **)((longlong)this + 0x18))
                            ((longlong)*(int *)((longlong)this + 0x20) + *(longlong *)this,local_58,
                             pFVar1);
        pTVar2 = (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)param_1->_padding_;
        pTVar3 = (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)param_1->_padding_;
        pTVar9 = (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0;
        pTVar7 = pTVar3;
        if (pTVar3 != (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) {
          LOCK();
          ((atomic<int> *)&pTVar3->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pTVar3->_padding_)[1] + 1);
          UNLOCK();
          aVar5 = *(atomic<int> *)&pTVar3->_padding_;
          do {
            pTVar7 = pTVar9;
            if (aVar5 == (atomic<int>)0x0) break;
            LOCK();
            aVar6 = *(atomic<int> *)&pTVar3->_padding_;
            bVar11 = aVar5 == aVar6;
            if (bVar11) {
              *(atomic<int> *)&pTVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
              aVar6 = aVar5;
            }
            UNLOCK();
            pTVar7 = pTVar3;
            aVar5 = aVar6;
          } while (!bVar11);
        }
        pTVar8 = pTVar2;
        if (pTVar7 == (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) {
          pTVar8 = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar7);
        pTVar7 = (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)&pTVar8->_padding_;
        if (pTVar8 == (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) {
          pTVar7 = pTVar9;
        }
        if ((pTVar7 != (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)&param_1->_padding_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.Pin().Get() == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x6c3,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.Continuation.WeakOp.Object = pTVar2;
        local_78.Continuation.WeakOp.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pTVar3;
        TFutureBase<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>::
        Then<_TFutureBase<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>::Next<__UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
                  (this_00,(TFuture<void> *)local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      else {
        (**(code **)(param_1->_padding_ + 8))(param_1,local_48);
        if (local_20 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
        }
      }
    }
  }
LAB_14ee28c67:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14ee28de0

void __thiscall
`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>'::__l2::
<lambda_1>::operator()(void *this,TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *param_1)

{
  FAsyncOpSharedState *pFVar1;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar2;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TFutureBase<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *this_00;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar7;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar8;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  char local_20;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee28e17;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    if (*(longlong *)((longlong)this + 8) != 0) {
      pFVar1 = (param_1->SharedState).Object;
      (**(code **)(**(longlong **)this + 0x150))(*(longlong **)this,local_48,pFVar1);
      if (local_20 == '\0') {
        this_00 = (TFutureBase<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *)
                  (**(code **)((longlong)this + 0x18))
                            ((longlong)*(int *)((longlong)this + 0x20) + *(longlong *)this,local_58,
                             pFVar1);
        pTVar2 = (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)param_1->_padding_;
        pTVar3 = (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)param_1->_padding_;
        pTVar9 = (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0;
        pTVar7 = pTVar3;
        if (pTVar3 != (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) {
          LOCK();
          ((atomic<int> *)&pTVar3->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pTVar3->_padding_)[1] + 1);
          UNLOCK();
          aVar5 = *(atomic<int> *)&pTVar3->_padding_;
          do {
            pTVar7 = pTVar9;
            if (aVar5 == (atomic<int>)0x0) break;
            LOCK();
            aVar6 = *(atomic<int> *)&pTVar3->_padding_;
            bVar11 = aVar5 == aVar6;
            if (bVar11) {
              *(atomic<int> *)&pTVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
              aVar6 = aVar5;
            }
            UNLOCK();
            pTVar7 = pTVar3;
            aVar5 = aVar6;
          } while (!bVar11);
        }
        pTVar8 = pTVar2;
        if (pTVar7 == (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) {
          pTVar8 = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar7);
        pTVar7 = (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)&pTVar8->_padding_;
        if (pTVar8 == (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) {
          pTVar7 = pTVar9;
        }
        if ((pTVar7 != (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)&param_1->_padding_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.Pin().Get() == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x6c3,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.Continuation.WeakOp.Object = pTVar2;
        local_78.Continuation.WeakOp.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pTVar3;
        TFutureBase<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>::
        Then<_TFutureBase<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>::Next<__UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
                  (this_00,(TFuture<void> *)local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      else {
        (**(code **)(param_1->_padding_ + 8))(param_1,local_48);
        if (local_20 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
        }
      }
    }
  }
LAB_14ee28e17:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14ee28f90

void __thiscall
`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>'::__l2::
<lambda_1>::operator()(void *this,TOnlineAsyncOp<UE::Online::FSendSessionInvite> *param_1)

{
  FAsyncOpSharedState *pFVar1;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar2;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TFutureBase<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *this_00;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar7;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar8;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  char local_20;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee28fc7;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    if (*(longlong *)((longlong)this + 8) != 0) {
      pFVar1 = (param_1->SharedState).Object;
      (**(code **)(**(longlong **)this + 0x148))(*(longlong **)this,local_48,pFVar1);
      if (local_20 == '\0') {
        this_00 = (TFutureBase<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *)
                  (**(code **)((longlong)this + 0x18))
                            ((longlong)*(int *)((longlong)this + 0x20) + *(longlong *)this,local_58,
                             pFVar1);
        pTVar2 = (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)param_1->_padding_;
        pTVar3 = (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)param_1->_padding_;
        pTVar9 = (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0;
        pTVar7 = pTVar3;
        if (pTVar3 != (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) {
          LOCK();
          ((atomic<int> *)&pTVar3->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pTVar3->_padding_)[1] + 1);
          UNLOCK();
          aVar5 = *(atomic<int> *)&pTVar3->_padding_;
          do {
            pTVar7 = pTVar9;
            if (aVar5 == (atomic<int>)0x0) break;
            LOCK();
            aVar6 = *(atomic<int> *)&pTVar3->_padding_;
            bVar11 = aVar5 == aVar6;
            if (bVar11) {
              *(atomic<int> *)&pTVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
              aVar6 = aVar5;
            }
            UNLOCK();
            pTVar7 = pTVar3;
            aVar5 = aVar6;
          } while (!bVar11);
        }
        pTVar8 = pTVar2;
        if (pTVar7 == (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) {
          pTVar8 = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar7);
        pTVar7 = (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)&pTVar8->_padding_;
        if (pTVar8 == (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) {
          pTVar7 = pTVar9;
        }
        if ((pTVar7 != (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)&param_1->_padding_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.Pin().Get() == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x6c3,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.Continuation.WeakOp.Object = pTVar2;
        local_78.Continuation.WeakOp.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pTVar3;
        TFutureBase<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>::
        Then<_TFutureBase<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>::Next<__UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
                  (this_00,(TFuture<void> *)local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      else {
        (**(code **)(param_1->_padding_ + 8))(param_1,local_48);
        if (local_20 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
        }
      }
    }
  }
LAB_14ee28fc7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14ee29140

void __thiscall
`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>'::__l2::
<lambda_1>::operator()(void *this,TOnlineAsyncOp<UE::Online::FStartMatchmaking> *param_1)

{
  FAsyncOpSharedState *pFVar1;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar2;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TFutureBase<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *this_00;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar7;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar8;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  char local_20;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee29177;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    if (*(longlong *)((longlong)this + 8) != 0) {
      pFVar1 = (param_1->SharedState).Object;
      (**(code **)(**(longlong **)this + 0x168))(*(longlong **)this,local_48,pFVar1);
      if (local_20 == '\0') {
        this_00 = (TFutureBase<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *)
                  (**(code **)((longlong)this + 0x18))
                            ((longlong)*(int *)((longlong)this + 0x20) + *(longlong *)this,local_58,
                             pFVar1);
        pTVar2 = (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)param_1->_padding_;
        pTVar3 = (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)param_1->_padding_;
        pTVar9 = (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0;
        pTVar7 = pTVar3;
        if (pTVar3 != (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) {
          LOCK();
          ((atomic<int> *)&pTVar3->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pTVar3->_padding_)[1] + 1);
          UNLOCK();
          aVar5 = *(atomic<int> *)&pTVar3->_padding_;
          do {
            pTVar7 = pTVar9;
            if (aVar5 == (atomic<int>)0x0) break;
            LOCK();
            aVar6 = *(atomic<int> *)&pTVar3->_padding_;
            bVar11 = aVar5 == aVar6;
            if (bVar11) {
              *(atomic<int> *)&pTVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
              aVar6 = aVar5;
            }
            UNLOCK();
            pTVar7 = pTVar3;
            aVar5 = aVar6;
          } while (!bVar11);
        }
        pTVar8 = pTVar2;
        if (pTVar7 == (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) {
          pTVar8 = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar7);
        pTVar7 = (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)&pTVar8->_padding_;
        if (pTVar8 == (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) {
          pTVar7 = pTVar9;
        }
        if ((pTVar7 != (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)&param_1->_padding_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.Pin().Get() == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x6c3,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.Continuation.WeakOp.Object = pTVar2;
        local_78.Continuation.WeakOp.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pTVar3;
        TFutureBase<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>::
        Then<_TFutureBase<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>::Next<__UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
                  (this_00,(TFuture<void> *)local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      else {
        (**(code **)(param_1->_padding_ + 8))(param_1,local_48);
        if (local_20 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
        }
      }
    }
  }
LAB_14ee29177:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14ee292f0

void __thiscall
`UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>'::__l2
::<lambda_1>::operator()(void *this,TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *param_1)

{
  FAsyncOpSharedState *pFVar1;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar2;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TFutureBase<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *this_00;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar7;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar8;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  char local_20;
  
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ee29327;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    if (*(longlong *)((longlong)this + 8) != 0) {
      pFVar1 = (param_1->SharedState).Object;
      (**(code **)(**(longlong **)this + 0x180))(*(longlong **)this,local_48,pFVar1);
      if (local_20 == '\0') {
        this_00 = (TFutureBase<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
                  (**(code **)((longlong)this + 0x18))
                            ((longlong)*(int *)((longlong)this + 0x20) + *(longlong *)this,local_58,
                             pFVar1);
        pTVar2 = (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)param_1->_padding_;
        pTVar3 = (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)param_1->_padding_;
        pTVar9 = (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0;
        pTVar7 = pTVar3;
        if (pTVar3 != (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) {
          LOCK();
          ((atomic<int> *)&pTVar3->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pTVar3->_padding_)[1] + 1);
          UNLOCK();
          aVar5 = *(atomic<int> *)&pTVar3->_padding_;
          do {
            pTVar7 = pTVar9;
            if (aVar5 == (atomic<int>)0x0) break;
            LOCK();
            aVar6 = *(atomic<int> *)&pTVar3->_padding_;
            bVar11 = aVar5 == aVar6;
            if (bVar11) {
              *(atomic<int> *)&pTVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
              aVar6 = aVar5;
            }
            UNLOCK();
            pTVar7 = pTVar3;
            aVar5 = aVar6;
          } while (!bVar11);
        }
        pTVar8 = pTVar2;
        if (pTVar7 == (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) {
          pTVar8 = pTVar9;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar7);
        pTVar7 = (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)&pTVar8->_padding_;
        if (pTVar8 == (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) {
          pTVar7 = pTVar9;
        }
        if ((pTVar7 != (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)&param_1->_padding_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result.Pin().Get() == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x6c3,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.Continuation.WeakOp.Object = pTVar2;
        local_78.Continuation.WeakOp.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pTVar3;
        TFutureBase<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>::
        Then<_TFutureBase<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>::Next<__UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
                  (this_00,(TFuture<void> *)local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_68._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      else {
        (**(code **)(param_1->_padding_ + 8))(param_1,local_48);
        if (local_20 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
        }
      }
    }
  }
LAB_14ee29327:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// AddSearchResult @ 14ee55fb0

void __thiscall
UE::Online::FSessionsCommon::AddSearchResult
          (FSessionsCommon *this,TSharedRef<UE::Online::FSessionCommon,1> *param_1,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_const_&&,TSharedRef<UE::Online::FSessionCommon,1>_const_&>
  local_res10;
  undefined8 local_28;
  TSharedRef<UE::Online::FSessionCommon,1> *local_20;
  
  local_28 = (**(code **)(param_1->Object->_padding_ + 8))(param_1->Object,local_res8);
  local_20 = param_1;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_const_&&,TSharedRef<UE::Online::FSessionCommon,1>_const_&>_>
            ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
              *)&this->AllSessionsById,&local_res10,(bool *)&local_28);
  uVar8 = param_2->Value & 0xffffff;
  uVar9 = (param_2->Value >> 0x18) - uVar8 ^ uVar8 >> 0xd;
  uVar7 = (-0x61c88647 - uVar9) - uVar8 ^ uVar9 << 8;
  uVar8 = (uVar8 - uVar7) - uVar9 ^ uVar7 >> 0xd;
  uVar9 = (uVar9 - uVar8) - uVar7 ^ uVar8 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar8 ^ uVar9 << 0x10;
  uVar8 = (uVar8 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar8) - uVar7 ^ uVar8 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar8 ^ uVar9 << 10;
  pTVar5 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
                     ((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->SearchResultsUserMap,(uVar8 - uVar7) - uVar9 ^ uVar7 >> 0xf,param_2)
  ;
  pFVar6 = (FScriptContainerElement *)
           (**(code **)(param_1->Object->_padding_ + 8))(param_1->Object,&local_res10.Value);
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + (longlong)pTVar5->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 4) = *(undefined4 *)pFVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddSessionInvite @ 14ee56150

void __thiscall
UE::Online::FSessionsCommon::AddSessionInvite
          (FSessionsCommon *this,TSharedRef<UE::Online::FSessionInviteCommon,1> *param_1,
          TSharedRef<UE::Online::FSessionCommon,1> *param_2,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_3)

{
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>_&,TSharedRef<UE::Online::FSessionInviteCommon,1>_const_&>
  local_res8;
  TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite> *local_28;
  TSharedRef<UE::Online::FSessionCommon,1> *local_20;
  
  local_28 = (TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite> *)
             (**(code **)(param_2->Object->_padding_ + 8))(param_2->Object,&local_res8);
  local_20 = param_2;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_const_&&,TSharedRef<UE::Online::FSessionCommon,1>_const_&>_>
            ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
              *)&this->AllSessionsById,
             (TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_const_&&,TSharedRef<UE::Online::FSessionCommon,1>_const_&>
              *)&local_res8.Value,(bool *)&local_28);
  uVar2 = param_3->Value & 0xffffff;
  uVar3 = (param_3->Value >> 0x18) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  this_00 = (TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
             *)TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
               ::
               FindOrAddImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
                         ((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
                           *)&this->SessionInvitesUserMap,(uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf,
                          param_3);
  local_28 = &param_1->Object->InviteId;
  local_20 = (TSharedRef<UE::Online::FSessionCommon,1> *)param_1;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>_&,TSharedRef<UE::Online::FSessionInviteCommon,1>_const_&>_>
            (this_00,&local_res8,(bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddSessionMember @ 14ee56280

TOnlineAsyncOpHandle<UE::Online::FAddSessionMember> * __thiscall
UE::Online::FSessionsCommon::AddSessionMember
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FAddSessionMember> *__return_storage_ptr__,
          Params *param_1)

{
  code *local_18;
  ulonglong uStack_10;
  
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = _vcall__440__flat______;
  ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>
            (this,__return_storage_ptr__,param_1,(pmf_24e2ae70 *)&local_18,false);
  return __return_storage_ptr__;
}

// AddSessionMemberImpl @ 14ee562d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFuture<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> * __thiscall
UE::Online::FSessionsCommon::AddSessionMemberImpl
          (FSessionsCommon *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *__return_storage_ptr__
          ,Params *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  TFuture<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *pTVar5;
  TOnlineResult<UE::Online::FAddSessionMember> *pTVar6;
  FFutureState *this_00;
  undefined1 auStack_88 [32];
  TOnlineResult<UE::Online::FAddSessionMember> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar3 = ::operator_new(0xc0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    this_00 = (FFutureState *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *(undefined8 *)__return_storage_ptr__ = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TOnlineResult_UFAddSessionMember_Online_UE___Online_UE_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    pTVar3[4]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this_00 = (FFutureState *)(pTVar3 + 1);
    pTVar3[7]._padding_ = (longlong)pFVar4;
    *(undefined1 *)&pTVar3[7].SharedReferenceCount = 0;
    if (this_00 == (FFutureState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (this_00 == (FFutureState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
    *(FFutureState **)__return_storage_ptr__ = this_00;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = AddSessionMemberInternal(this,&local_68,param_1);
  if (this_00 == (FFutureState *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *)(*pcVar1)();
      return pTVar5;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (this_00->bComplete != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  this_00[1].Mutex.CriticalSection.Opaque1[0] =
       &___7__TResult_UResult_FAddSessionMember_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>
            ((TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> *)
             this_00[1].Mutex.CriticalSection.Opaque2,
             (TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> *)
             &pTVar6->field_0x8);
  this_00[1].Mutex.CriticalSection.Opaque1[0] =
       &___7__TOnlineResult_UFAddSessionMember_Online_UE___Online_UE__6B_;
  FFutureState::MarkComplete(this_00);
  if (1 < (byte)local_68._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x8);
  if ((this_00 != (FFutureState *)0x0) && (this_00->bComplete == (TAtomic<bool>)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// AddSessionMemberInternal @ 14ee56560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineResult<UE::Online::FAddSessionMember> * __thiscall
UE::Online::FSessionsCommon::AddSessionMemberInternal
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FAddSessionMember> *__return_storage_ptr__,Params *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSessionCommon *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOnlineResult<UE::Online::FAddSessionMember> *pTVar5;
  FOnlineError *pFVar6;
  Result *pRVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_68;
  FName local_64;
  TResult<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_64 = param_1->SessionName;
  GetMutableSessionByName
            (this,(TOnlineResult<UE::Online::FGetMutableSessionByName> *)&local_58,
             (Params *)&local_64);
  uVar8 = (ulonglong)local_58.Storage.TypeIndex;
  if (1 < uVar8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOnlineResult<UE::Online::FAddSessionMember> *)(*pcVar3)();
      return pTVar5;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    pRVar7 = TResult<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::
             GetOkValue(&local_58);
    pTVar1 = (pRVar7->Session).SharedReferenceCount.ReferenceController;
    pFVar2 = (pRVar7->Session).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
    ::Emplace<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
              (&pFVar2->SessionMembers,&local_68,(bool *)param_1);
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFAddSessionMember_Online_UE___Online_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (1 < local_58.Storage.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TOnlineResult<UE::Online::FAddSessionMember> *)(*pcVar3)();
        return pTVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.Storage.TypeIndex])(&local_58.Storage);
  }
  else {
    pFVar6 = TResult<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::
             GetErrorValue(&local_58);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FAddSessionMember_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar6->Details).Object;
    pTVar1 = (pFVar6->Details).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = (pFVar6->Inner).Object;
    pTVar1 = (pFVar6->Inner).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar6->ErrorCode;
    __return_storage_ptr__->field_0x30 = 1;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFAddSessionMember_Online_UE___Online_UE__6B_;
    if (1 < local_58.Storage.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TOnlineResult<UE::Online::FAddSessionMember> *)(*pcVar3)();
        return pTVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.Storage.TypeIndex])(&local_58.Storage);
  }
  return __return_storage_ptr__;
}

// AddSessionReferences @ 14ee56740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FSessionsCommon::AddSessionReferences
          (FSessionsCommon *this,TOnlineId<UE::Online::OnlineIdHandleTags::FSession> param_1,
          FName *param_2,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_res10 [6];
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_74;
  TPairInitializer<FName_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_const_&>
  local_70;
  uint *local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [40];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_60 = local_res10;
  local_res10[0] = param_1.Value;
  local_70.Value = (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)param_2;
  TSet<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_const_&>_>
            ((TSet<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
              *)&this->LocalSessionsByName,&local_70,(bool *)&local_70.Value);
  uVar4 = param_3->Value & 0xffffff;
  uVar5 = (param_3->Value >> 0x18) - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
  this_00 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
                      ((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->NamedSessionUserMap,(uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf,param_3)
  ;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,param_2);
  if (param_4) {
    local_78 = param_3->Value;
    local_74 = local_res10[0];
    (**(code **)(this->_padding_ + 0xd8))(this,local_58,&local_78);
    if (1 < local_28) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSetPresenceSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_28])(local_50);
  }
  return;
}

// AddSessionWithReferences @ 14ee568c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FSessionsCommon::AddSessionWithReferences
          (FSessionsCommon *this,TSharedRef<UE::Online::FSessionCommon,1> *param_1,FName *param_2,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [2];
  uint local_a0;
  undefined4 local_9c;
  undefined1 local_98 [4];
  undefined1 local_94 [12];
  undefined8 local_88;
  TSharedRef<UE::Online::FSessionCommon,1> *local_80;
  FName *local_78;
  undefined4 *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [40];
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_88 = (**(code **)(param_1->Object->_padding_ + 8))(param_1->Object,local_98);
  local_80 = param_1;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_const_&&,TSharedRef<UE::Online::FSessionCommon,1>_const_&>_>
            ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
              *)&this->AllSessionsById,
             (TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_const_&&,TSharedRef<UE::Online::FSessionCommon,1>_const_&>
              *)local_94,(bool *)&local_88);
  puVar3 = (undefined4 *)(**(code **)(param_1->Object->_padding_ + 8))(param_1->Object,local_94 + 4)
  ;
  local_a8[0] = *puVar3;
  local_70 = local_a8;
  local_78 = param_2;
  TSet<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_const_&>_>
            ((TSet<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
              *)&this->LocalSessionsByName,
             (TPairInitializer<FName_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_const_&>
              *)(local_94 + 8),(bool *)&local_78);
  uVar5 = param_3->Value & 0xffffff;
  uVar6 = (param_3->Value >> 0x18) - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
  this_00 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
                      ((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->NamedSessionUserMap,(uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf,param_3)
  ;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,param_2);
  if (param_4) {
    local_a0 = param_3->Value;
    local_9c = local_a8[0];
    (**(code **)(this->_padding_ + 0xd8))(this,local_68,&local_a0);
    if (1 < local_38) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSetPresenceSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38])(local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// BuildSessionUpdate @ 14ee5d270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSessionUpdate * __thiscall
UE::Online::FSessionsCommon::BuildSessionUpdate
          (FSessionsCommon *this,FSessionUpdate *__return_storage_ptr__,
          TSharedRef<UE::Online::FSessionCommon,1> *param_1,FSessionSettingsUpdate *param_2)

{
  TMap<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
  *pTVar1;
  undefined1 *puVar2;
  TOptional<UE::Online::FSessionSettingsChanges> *this_00;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TMap<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  FSessionUpdate *pFVar11;
  FCustomSessionSetting *pFVar12;
  longlong lVar13;
  FName *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_248 [32];
  undefined1 local_218 [4];
  int local_214;
  int local_210;
  undefined1 local_20c [20];
  TMap<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
  *local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  undefined1 *local_1e8;
  undefined4 uStack_1e0;
  int iStack_1dc;
  int local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  TMap<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
  *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  FName *local_198;
  FSchemaVariant *local_190;
  undefined4 local_16c;
  TOptional<FName>_u_0 local_168;
  uint local_160;
  undefined1 local_15c;
  ESessionJoinPolicy local_158 [2];
  bool local_156 [6];
  TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
  local_150;
  TSet<TTuple<FName,UE::Online::FCustomSessionSettingUpdate>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSettingUpdate,0>,FDefaultSetAllocator>
  local_100;
  ForAnyElementType local_b0;
  int local_a8 [4];
  FSchemaVariant local_98;
  ESchemaAttributeVisibility local_78;
  int local_74;
  FSchemaVariant local_70;
  undefined1 local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_150.Pairs.Elements._48_8_ = _UNK_150631d98;
  local_150.Pairs.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  *(undefined8 *)&(__return_storage_ptr__->AddedSessionMembers).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->AddedSessionMembers).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->AddedSessionMembers).Elements.field_0x20 = 0;
  (__return_storage_ptr__->OwnerAccountId).bIsSet = false;
  (__return_storage_ptr__->SessionSettingsChanges).bIsSet = false;
  iVar17 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AddedSessionMembers).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AddedSessionMembers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->AddedSessionMembers).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->AddedSessionMembers).Elements.field_0x34 = 0;
  (__return_storage_ptr__->AddedSessionMembers).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->AddedSessionMembers).HashSize = 0;
  *(undefined8 *)&(__return_storage_ptr__->RemovedSessionMembers).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->RemovedSessionMembers).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->RemovedSessionMembers).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->RemovedSessionMembers).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->RemovedSessionMembers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->RemovedSessionMembers).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->RemovedSessionMembers).Elements.field_0x34 = 0;
  (__return_storage_ptr__->RemovedSessionMembers).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->RemovedSessionMembers).HashSize = 0;
  local_168 = (TOptional<FName>_u_0)0xffffffff;
  local_15c = 0;
  local_158[1] = 0;
  local_156[1] = false;
  local_150.Pairs.Elements._0_8_ = 0;
  local_150.Pairs.Elements._8_8_ = 0;
  local_150.Pairs.Elements._32_8_ = 0;
  local_150.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_150.Pairs.HashSize = 0;
  local_100.Elements._0_8_ = 0;
  local_100.Elements._8_8_ = 0;
  local_100.Elements._32_8_ = 0;
  local_100.Elements._40_8_ = local_150.Pairs.Elements._40_8_;
  local_100.Elements._48_8_ = local_150.Pairs.Elements._48_8_;
  local_100.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_100.HashSize = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_20c._4_8_ = param_1;
  local_20c._12_8_ = __return_storage_ptr__;
  if (((((param_2->SchemaName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) &&
       ((TOptional<FName>_u_0 *)param_2 != &local_168)) &&
      (local_168.TypedValue = (param_2->SchemaName).field0_0x0.TypedValue,
      local_168.TypedValue.ComparisonIndex.Value.Value == 0xffffffff)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FSessionUpdate *)(*pcVar5)();
    return pFVar11;
  }
  if (((param_2->NumMaxConnections).bIsSet != false) &&
     (&param_2->NumMaxConnections != (TOptional<unsigned_int> *)&local_160)) {
    local_160 = (param_2->NumMaxConnections).TypedValue;
    local_15c = 1;
  }
  if (((param_2->JoinPolicy).bIsSet != false) &&
     (&param_2->JoinPolicy != (TOptional<UE::Online::ESessionJoinPolicy> *)local_158)) {
    local_158[0] = (param_2->JoinPolicy).TypedValue;
    local_158[1] = 1;
  }
  if (((param_2->bAllowNewMembers).bIsSet != false) &&
     (&param_2->bAllowNewMembers != (TOptional<bool> *)local_156)) {
    local_156[0] = (param_2->bAllowNewMembers).TypedValue;
    local_156[1] = true;
  }
  if (((TArray<FName,TSizedDefaultAllocator<32>_> *)&local_b0 == &param_2->RemovedCustomSettings) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FSessionUpdate *)(*pcVar5)();
    return pFVar11;
  }
  iVar3 = (param_2->RemovedCustomSettings).ArrayNum;
  if (iVar3 != 0) {
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,iVar3,&local_b0,local_a8,local_a8 + 1);
    memcpy(local_b0.Data + (longlong)iVar10 * 8,
           (param_2->RemovedCustomSettings).AllocatorInstance.Data,(longlong)iVar3 << 3);
  }
  iVar3 = *(int *)&(param_2->UpdatedCustomSettings).field_0x28;
  pTVar1 = &param_2->UpdatedCustomSettings;
  puVar2 = &(param_2->UpdatedCustomSettings).field_0x10;
  local_1d8 = 0;
  uStack_1ec = 1;
  iStack_1dc = 0;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(param_2->UpdatedCustomSettings).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar2;
    }
    uVar16 = *puVar19;
    iVar17 = 0;
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar17;
      local_1d8 = local_1d8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_1dc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ee5d551;
      uVar16 = puVar19[lVar13 + 1];
    }
    uStack_1ec = -uVar16 & uVar16;
    uVar15 = (ulonglong)uStack_1ec * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_214 = (int)lVar13;
    iStack_1dc = local_1d8 + -1 + local_214;
    if (iVar3 < iStack_1dc) {
      iStack_1dc = iVar3;
    }
  }
LAB_14ee5d551:
  uStack_1d4 = local_16c;
  iStack_1d0 = *(int *)&(param_2->UpdatedCustomSettings).field_0x8 -
               *(int *)&(param_2->UpdatedCustomSettings).field_0x34;
  uVar16 = *(uint *)&(param_2->UpdatedCustomSettings).field_0x28;
  uStack_1e0 = 0xffffffff;
  uVar20 = uVar16 & 0xffffffe0;
  TStack_1c0._padding_ = CONCAT44(uStack_1ec,iVar17);
  TStack_1c0.CurrentBitIndex = iStack_1dc;
  TStack_1c0.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar16 >> 5;
  TStack_1c0._28_4_ = local_16c;
  TStack_1c0.BaseBitIndex = local_1d8;
  uStack_1a0 = CONCAT44(uStack_1cc,iStack_1d0);
  local_1f8 = pTVar1;
  iStack_1f0 = iVar17;
  local_1e8 = puVar2;
  local_1c8 = pTVar1;
  TStack_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FSessionUpdate *)(*pcVar5)();
    return pFVar11;
  }
  uVar6 = local_20c._4_8_;
  uVar4 = *(uint *)&(param_2->UpdatedCustomSettings).field_0x28;
  if (uVar16 != uVar4) {
    puVar18 = *(undefined1 **)&(param_2->UpdatedCustomSettings).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar10 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar10;
      uVar20 = uVar20 + 0x20;
      iVar10 = iVar10 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ee5d660;
      uVar16 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_210 = (int)lVar13;
    uVar16 = local_210 + -1 + uVar20;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14ee5d660:
  do {
    pTVar8 = local_1c8;
    if (*(int *)&local_1c8->field_0x8 - *(int *)&local_1c8->field_0x34 != (int)uStack_1a0) {
      local_218[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_218);
    }
    uVar7 = local_20c._12_8_;
    if (((TStack_1c0.CurrentBitIndex == uVar16) &&
        (TStack_1c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == pTVar1))
    {
      this_00 = (TOptional<UE::Online::FSessionSettingsChanges> *)(local_20c._12_8_ + 8);
      if (&local_168 != (TOptional<FName>_u_0 *)this_00) {
        if (((TOptional<UE::Online::FSessionSettingsChanges> *)(local_20c._12_8_ + 8))->bIsSet !=
            false) {
          FSessionSettingsChanges::~FSessionSettingsChanges((FSessionSettingsChanges *)this_00);
        }
        FSessionSettingsChanges::FSessionSettingsChanges
                  ((FSessionSettingsChanges *)this_00,
                   (FSessionSettingsChanges *)&local_168.TypedValue);
        ((TOptional<UE::Online::FSessionSettingsChanges> *)(uVar7 + 8))->bIsSet = true;
      }
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      local_100.HashSize = 0;
      if (local_100.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_100.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSettingUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSettingUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_100.Elements);
      local_150.Pairs.HashSize = 0;
      if (local_150.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_150.Pairs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_150);
      return (FSessionUpdate *)uVar7;
    }
    pFVar14 = (FName *)(*(longlong *)pTVar8 + (longlong)TStack_1c0.CurrentBitIndex * 0x38);
    lVar13 = (**(code **)((*(FSessionCommon **)uVar6)->_padding_ + 0x20))();
    pFVar12 = TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
              ::Find((TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
                      *)(lVar13 + 0x10),*pFVar14);
    if (pFVar12 == (FCustomSessionSetting *)0x0) {
      TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
      ::Emplace<FName_const_&,UE::Online::FCustomSessionSetting_const_&>
                (&local_150,pFVar14,(FCustomSessionSetting *)(pFVar14 + 1));
    }
    else {
      FSchemaVariant::FSchemaVariant(&local_98,&pFVar12->Data);
      local_78 = pFVar12->Visibility;
      local_74 = pFVar12->ID;
      FSchemaVariant::FSchemaVariant(&local_70,(FSchemaVariant *)(pFVar14 + 1));
      local_50 = (undefined1)pFVar14[5].ComparisonIndex.Value;
      local_4c = pFVar14[5].Number;
      local_190 = &local_98;
      local_198 = pFVar14;
      TSet<TTuple<FName,UE::Online::FCustomSessionSettingUpdate>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSettingUpdate,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UE::Online::FCustomSessionSettingUpdate_&>_>
                (&local_100,
                 (TPairInitializer<FName_const_&,UE::Online::FCustomSessionSettingUpdate_&> *)
                 local_20c,(bool *)&local_198);
      uVar15 = (ulonglong)local_70.VariantData.TypeIndex;
      if ((3 < local_70.VariantData.TypeIndex) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FSessionUpdate *)(*pcVar5)();
        return pFVar11;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(&local_70);
      uVar15 = (ulonglong)local_98.VariantData.TypeIndex;
      if ((3 < local_98.VariantData.TypeIndex) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FSessionUpdate *)(*pcVar5)();
        return pFVar11;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(&local_98);
    }
    TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
  } while( true );
}

// CheckParams @ 14ee6aed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckParams
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  undefined1 auStack_2e8 [32];
  TOptional<UE::Online::FOnlineError> local_2c8;
  FOnlineError local_298;
  FScriptContainerElement local_268 [256];
  ForAnyElementType local_168;
  FScriptContainerElement *local_160;
  int local_158;
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6b1c8;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
    uVar1 = local_38 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6af5d;
      }
    }
    else {
LAB_14ee6af5d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert((wchar_t *)local_40,uVar1,(uchar *)"Params.LocalAccountId",0x16);
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_158 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6afe8;
      }
    }
    else {
LAB_14ee6afe8:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar4,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_160,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar3.Data = local_48.Data;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
      FVar3.Data = local_48.Data;
    }
  }
  else {
    if (param_1->SessionName != (FName)0x0) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6b1c8;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.SessionName",0x12)
    ;
    uVar1 = local_158 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6b0bd;
      }
    }
    else {
LAB_14ee6b0bd:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar4,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert((wchar_t *)local_160,uVar1,(uchar *)"Params.SessionName",0x13);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_38 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6b145;
      }
    }
    else {
LAB_14ee6b145:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_40,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar3.Data = local_168.Data;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
      FVar3.Data = local_168.Data;
    }
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
LAB_14ee6b1c8:
  local_2c8.bIsSet = false;
  pFVar2 = Errors::InvalidParams(&local_298,&local_2c8);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar2->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = (pFVar2->Inner).Object;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar2->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.Details.SharedReferenceCount.ReferenceController);
  if (local_2c8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CheckParams @ 14ee6b280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckParams
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FOnlineError *pFVar4;
  FOnlineError *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_2e0;
  TOptional<UE::Online::FOnlineError> local_2d0;
  FOnlineError local_2a0;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_308;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6b75b;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_168 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
    uVar1 = local_168 + 1;
    uVar9 = uVar1;
    if (uVar1 < 0x81) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_14ee6b306;
      }
    }
    else {
LAB_14ee6b306:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar9,2);
    }
    local_170 = local_278;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      local_170 = local_178.Data;
    }
    Core::Private::Convert((wchar_t *)local_170,uVar1,(uchar *)"Params.LocalAccountId",0x16);
    local_58.Data = (FScriptContainerElement *)0x0;
    local_48 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_48 + 1;
    uVar9 = uVar1;
    if (uVar1 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_14ee6b38e;
      }
    }
    else {
LAB_14ee6b38e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,2);
    }
    local_50 = local_158;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar8.Data = local_178.Data;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
      FVar8.Data = local_178.Data;
    }
  }
  else if (param_1->SessionName == (FName)0x0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6b75b;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_48 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.SessionName",0x12);
    uVar1 = local_48 + 1;
    uVar9 = uVar1;
    if (uVar1 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_14ee6b461;
      }
    }
    else {
LAB_14ee6b461:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,2);
    }
    local_50 = local_158;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)"Params.SessionName",0x13);
    local_178.Data = (FScriptContainerElement *)0x0;
    local_168 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_168 + 1;
    uVar9 = uVar1;
    if (uVar1 < 0x81) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_14ee6b4ec;
      }
    }
    else {
LAB_14ee6b4ec:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar9,2);
    }
    local_170 = local_278;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      local_170 = local_178.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_170,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    pFVar6 = &::LOG_Static;
LAB_14ee6b534:
    Logging::Private::BasicLog<6>(pFVar6,(FLogCategoryBase *)&LogOnlineServices);
    FVar8.Data = local_58.Data;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
      FVar8.Data = local_58.Data;
    }
  }
  else {
    if ((param_1->SessionSettings).SchemaName == (FName)0x0) {
      if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6b75b;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_48 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,(uchar *)"Params.SessionSettings.SchemaName",0x21);
      uVar1 = local_48 + 1;
      uVar9 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar9 = 0;
          goto LAB_14ee6b5bf;
        }
      }
      else {
LAB_14ee6b5bf:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_50,uVar1,(uchar *)"Params.SessionSettings.SchemaName",0x22);
      local_178.Data = (FScriptContainerElement *)0x0;
      local_168 = Core::Private::GetConvertedLength
                            ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28
                            );
      uVar1 = local_168 + 1;
      uVar9 = uVar1;
      if (uVar1 < 0x81) {
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          uVar9 = 0;
          goto LAB_14ee6b64a;
        }
      }
      else {
LAB_14ee6b64a:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar9,2);
      }
      local_170 = local_278;
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        local_170 = local_178.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_170,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29
                );
      pFVar6 = &::LOG_Static;
      goto LAB_14ee6b534;
    }
    if ((param_1->SessionSettings).NumMaxConnections != 0) {
      local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e0.ArrayNum = 0;
      local_2e0.ArrayMax = 0;
      TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
                  *)&(param_1->SessionSettings).CustomSettings,&local_2e0);
      iVar3 = local_2e0.ArrayNum;
      uVar7 = (ulonglong)local_2e0.ArrayNum;
      pFVar2 = local_2e0.AllocatorInstance.Data + uVar7 * 8;
      FVar8.Data = local_2e0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar7 != iVar3) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_2e8);
          uVar7 = local_2e0._8_8_ & 0xffffffff;
        }
        if (FVar8.Data == pFVar2) {
          __return_storage_ptr__->bIsSet = false;
          goto LAB_14ee6ba11;
        }
        if (*(longlong *)FVar8.Data == 0) break;
        FVar8.Data = FVar8.Data + 8;
      }
      if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6b990;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_48 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"AttributeId",0xb);
      uVar1 = local_48 + 1;
      uVar9 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar9 = 0;
          goto LAB_14ee6b885;
        }
      }
      else {
LAB_14ee6b885:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)"AttributeId",0xc);
      local_178.Data = (FScriptContainerElement *)0x0;
      local_168 = Core::Private::GetConvertedLength
                            ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28
                            );
      uVar1 = local_168 + 1;
      uVar9 = uVar1;
      if (uVar1 < 0x81) {
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          uVar9 = 0;
          goto LAB_14ee6b910;
        }
      }
      else {
LAB_14ee6b910:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar9,2);
      }
      local_170 = local_278;
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        local_170 = local_178.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_170,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29
                );
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
LAB_14ee6b990:
      local_2d0.bIsSet = false;
      pFVar5 = Errors::InvalidParams(&local_2a0,&local_2d0);
      (__return_storage_ptr__->TypedValue).Details.Object = (pFVar5->Details).Object;
      (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
           (pFVar5->Details).SharedReferenceCount.ReferenceController;
      pFVar4 = (pFVar5->Inner).Object;
      (pFVar5->Details).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar5->Details).Object = (IOnlineErrorDetails *)0x0;
      (__return_storage_ptr__->TypedValue).Inner.Object = pFVar4;
      (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
           (pFVar5->Inner).SharedReferenceCount.ReferenceController;
      (pFVar5->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (pFVar5->Inner).Object = (FOnlineError *)0x0;
      (__return_storage_ptr__->TypedValue).ErrorCode = pFVar5->ErrorCode;
      __return_storage_ptr__->bIsSet = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a0.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a0.Details.SharedReferenceCount.ReferenceController);
      if (local_2d0.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2d0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2d0.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
LAB_14ee6ba11:
      if (local_2e0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_2e0.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6b75b;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_168 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_168 + 1;
    uVar9 = uVar1;
    if (uVar1 < 0x81) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_14ee6b6ef;
      }
    }
    else {
LAB_14ee6b6ef:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar9,2);
    }
    local_170 = local_278;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      local_170 = local_178.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_170,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar8.Data = local_178.Data;
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
LAB_14ee6b75b:
  local_2d0.bIsSet = false;
  pFVar4 = Errors::InvalidParams(&local_2a0,&local_2d0);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar4->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar4->Details).SharedReferenceCount.ReferenceController;
  (pFVar4->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = (pFVar4->Inner).Object;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar4->Inner).SharedReferenceCount.ReferenceController;
  (pFVar4->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar4->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.Details.SharedReferenceCount.ReferenceController);
  if (local_2d0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CheckParams @ 14ee6ba50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckParams
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  int iVar2;
  FOnlineError *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [8];
  TOptional<UE::Online::FOnlineError> local_2c0;
  FOnlineError local_290;
  FScriptContainerElement local_268 [256];
  ForAnyElementType local_168;
  FScriptContainerElement *local_160;
  int local_158;
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6c0bb;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
    uVar1 = local_158 + 1;
    uVar7 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar7 = 0;
        goto LAB_14ee6bae6;
      }
    }
    else {
LAB_14ee6bae6:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar7,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert((wchar_t *)local_160,uVar1,(uchar *)"Params.LocalAccountId",0x16);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_38 + 1;
    uVar7 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar7 = 0;
        goto LAB_14ee6bb6e;
      }
    }
    else {
LAB_14ee6bb6e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar7,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_40,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar5.Data = local_168.Data;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
      FVar5.Data = local_168.Data;
    }
  }
  else {
    if (param_1->MaxResults != 0) {
      iVar2 = (param_1->Filters).ArrayNum;
      pFVar6 = (param_1->Filters).AllocatorInstance.Data;
      pFVar8 = pFVar6 + (longlong)iVar2 * 0x30;
      do {
        if ((param_1->Filters).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::Online::FFindSessionsSearchFilter_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_2c8);
        }
        if (pFVar6 == pFVar8) {
          if (((param_1->SessionId).bIsSet == false) ||
             (((param_1->SessionId).TypedValue.Value & 0xffffff) != 0)) {
            if (((param_1->TargetUser).bIsSet == false) ||
               (((param_1->TargetUser).TypedValue.Value & 0xffffff) != 0)) {
              __return_storage_ptr__->bIsSet = false;
              return __return_storage_ptr__;
            }
            if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6c0bb;
            local_48.Data = (FScriptContainerElement *)0x0;
            local_38 = Core::Private::GetConvertedLength
                                 ((wchar_t *)0x0,(uchar *)"Params.TargetUser.GetValue()",0x1c);
            uVar1 = local_38 + 1;
            uVar7 = uVar1;
            if (uVar1 < 0x81) {
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                uVar7 = 0;
                goto LAB_14ee6bfb0;
              }
            }
            else {
LAB_14ee6bfb0:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar7,2);
            }
            local_40 = local_148;
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              local_40 = local_48.Data;
            }
            Core::Private::Convert
                      ((wchar_t *)local_40,uVar1,(uchar *)"Params.TargetUser.GetValue()",0x1d);
            local_168.Data = (FScriptContainerElement *)0x0;
            local_158 = Core::Private::GetConvertedLength
                                  ((wchar_t *)0x0,
                                   (uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
            uVar1 = local_158 + 1;
            uVar7 = uVar1;
            if (uVar1 < 0x81) {
              if (local_168.Data != (FScriptContainerElement *)0x0) {
                uVar7 = 0;
                goto LAB_14ee6c03b;
              }
            }
            else {
LAB_14ee6c03b:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_168,0,uVar7,2);
            }
            local_160 = local_268;
            if (local_168.Data != (FScriptContainerElement *)0x0) {
              local_160 = local_168.Data;
            }
            Core::Private::Convert
                      ((wchar_t *)local_160,uVar1,
                       (uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
            pFVar4 = &::LOG_Static;
          }
          else {
            if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6c0bb;
            local_48.Data = (FScriptContainerElement *)0x0;
            local_38 = Core::Private::GetConvertedLength
                                 ((wchar_t *)0x0,(uchar *)"Params.SessionId.GetValue()",0x1b);
            uVar1 = local_38 + 1;
            uVar7 = uVar1;
            if (uVar1 < 0x81) {
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                uVar7 = 0;
                goto LAB_14ee6be72;
              }
            }
            else {
LAB_14ee6be72:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar7,2);
            }
            local_40 = local_148;
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              local_40 = local_48.Data;
            }
            Core::Private::Convert
                      ((wchar_t *)local_40,uVar1,(uchar *)"Params.SessionId.GetValue()",0x1c);
            local_168.Data = (FScriptContainerElement *)0x0;
            local_158 = Core::Private::GetConvertedLength
                                  ((wchar_t *)0x0,
                                   (uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
            uVar1 = local_158 + 1;
            uVar7 = uVar1;
            if (uVar1 < 0x81) {
              if (local_168.Data != (FScriptContainerElement *)0x0) {
                uVar7 = 0;
                goto LAB_14ee6befd;
              }
            }
            else {
LAB_14ee6befd:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_168,0,uVar7,2);
            }
            local_160 = local_268;
            if (local_168.Data != (FScriptContainerElement *)0x0) {
              local_160 = local_168.Data;
            }
            Core::Private::Convert
                      ((wchar_t *)local_160,uVar1,
                       (uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
            pFVar4 = &::LOG_Static;
          }
          goto LAB_14ee6c083;
        }
        if (*(longlong *)pFVar6 == 0) goto LAB_14ee6bce5;
        pFVar6 = pFVar6 + 0x30;
      } while( true );
    }
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6c0bb;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_158 + 1;
    uVar7 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar7 = 0;
        goto LAB_14ee6bc46;
      }
    }
    else {
LAB_14ee6bc46:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar7,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_160,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar5.Data = local_168.Data;
  }
  goto LAB_14ee6c0b1;
LAB_14ee6bce5:
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6c0bb;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_38 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Filter.Key",10);
  uVar1 = local_38 + 1;
  uVar7 = uVar1;
  if (uVar1 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar7 = 0;
      goto LAB_14ee6bd34;
    }
  }
  else {
LAB_14ee6bd34:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar7,2);
  }
  local_40 = local_148;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  Core::Private::Convert((wchar_t *)local_40,uVar1,(uchar *)"Filter.Key",0xb);
  local_168.Data = (FScriptContainerElement *)0x0;
  local_158 = Core::Private::GetConvertedLength
                        ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
  uVar1 = local_158 + 1;
  uVar7 = uVar1;
  if (uVar1 < 0x81) {
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      uVar7 = 0;
      goto LAB_14ee6bdbf;
    }
  }
  else {
LAB_14ee6bdbf:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar7,2);
  }
  local_160 = local_268;
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    local_160 = local_168.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_160,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
  pFVar4 = &::LOG_Static;
LAB_14ee6c083:
  Logging::Private::BasicLog<6>(pFVar4,(FLogCategoryBase *)&LogOnlineServices);
  FVar5.Data = local_48.Data;
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
    FVar5.Data = local_48.Data;
  }
LAB_14ee6c0b1:
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
LAB_14ee6c0bb:
  local_2c0.bIsSet = false;
  pFVar3 = Errors::InvalidParams(&local_290,&local_2c0);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar3->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar3->Details).SharedReferenceCount.ReferenceController;
  (pFVar3->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar3->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = (pFVar3->Inner).Object;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar3->Inner).SharedReferenceCount.ReferenceController;
  (pFVar3->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar3->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar3->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.Details.SharedReferenceCount.ReferenceController);
  if (local_2c0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CheckParams @ 14ee6c180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckParams
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  FStaticBasicLogRecord *pFVar3;
  ForAnyElementType FVar4;
  uint uVar5;
  undefined1 auStack_2e8 [32];
  TOptional<UE::Online::FOnlineError> local_2c8;
  FOnlineError local_298;
  FScriptContainerElement local_268 [256];
  ForAnyElementType local_168;
  FScriptContainerElement *local_160;
  int local_158;
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6c5ad;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
    uVar1 = local_38 + 1;
    uVar5 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar5 = 0;
        goto LAB_14ee6c20d;
      }
    }
    else {
LAB_14ee6c20d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar5,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert((wchar_t *)local_40,uVar1,(uchar *)"Params.LocalAccountId",0x16);
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_158 + 1;
    uVar5 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar5 = 0;
        goto LAB_14ee6c298;
      }
    }
    else {
LAB_14ee6c298:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar5,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_160,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar4.Data = local_48.Data;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
      FVar4.Data = local_48.Data;
    }
  }
  else {
    if (((param_1->SessionId).Value & 0xffffff) == 0) {
      if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6c5ad;
      local_168.Data = (FScriptContainerElement *)0x0;
      local_158 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.SessionId",0x10)
      ;
      uVar1 = local_158 + 1;
      uVar5 = uVar1;
      if (uVar1 < 0x81) {
        if (local_168.Data != (FScriptContainerElement *)0x0) {
          uVar5 = 0;
          goto LAB_14ee6c370;
        }
      }
      else {
LAB_14ee6c370:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar5,2);
      }
      local_160 = local_268;
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        local_160 = local_168.Data;
      }
      Core::Private::Convert((wchar_t *)local_160,uVar1,(uchar *)"Params.SessionId",0x11);
      local_48.Data = (FScriptContainerElement *)0x0;
      local_38 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28)
      ;
      uVar1 = local_38 + 1;
      uVar5 = uVar1;
      if (uVar1 < 0x81) {
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          uVar5 = 0;
          goto LAB_14ee6c3f8;
        }
      }
      else {
LAB_14ee6c3f8:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar5,2);
      }
      local_40 = local_148;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        local_40 = local_48.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_40,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29)
      ;
      pFVar3 = &::LOG_Static;
    }
    else {
      if (param_1->SessionName != (FName)0x0) {
        __return_storage_ptr__->bIsSet = false;
        return __return_storage_ptr__;
      }
      if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6c5ad;
      local_168.Data = (FScriptContainerElement *)0x0;
      local_158 = Core::Private::GetConvertedLength
                            ((wchar_t *)0x0,(uchar *)"Params.SessionName",0x12);
      uVar1 = local_158 + 1;
      uVar5 = uVar1;
      if (uVar1 < 0x81) {
        if (local_168.Data != (FScriptContainerElement *)0x0) {
          uVar5 = 0;
          goto LAB_14ee6c4a2;
        }
      }
      else {
LAB_14ee6c4a2:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar5,2);
      }
      local_160 = local_268;
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        local_160 = local_168.Data;
      }
      Core::Private::Convert((wchar_t *)local_160,uVar1,(uchar *)"Params.SessionName",0x13);
      local_48.Data = (FScriptContainerElement *)0x0;
      local_38 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28)
      ;
      uVar1 = local_38 + 1;
      uVar5 = uVar1;
      if (uVar1 < 0x81) {
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          uVar5 = 0;
          goto LAB_14ee6c52a;
        }
      }
      else {
LAB_14ee6c52a:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar5,2);
      }
      local_40 = local_148;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        local_40 = local_48.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_40,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29)
      ;
      pFVar3 = &::LOG_Static;
    }
    Logging::Private::BasicLog<6>(pFVar3,(FLogCategoryBase *)&LogOnlineServices);
    FVar4.Data = local_168.Data;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
      FVar4.Data = local_168.Data;
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
LAB_14ee6c5ad:
  local_2c8.bIsSet = false;
  pFVar2 = Errors::InvalidParams(&local_298,&local_2c8);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar2->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = (pFVar2->Inner).Object;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar2->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.Details.SharedReferenceCount.ReferenceController);
  if (local_2c8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CheckParams @ 14ee6c670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckParams
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  undefined1 auStack_2e8 [32];
  TOptional<UE::Online::FOnlineError> local_2c8;
  FOnlineError local_298;
  FScriptContainerElement local_268 [256];
  ForAnyElementType local_168;
  FScriptContainerElement *local_160;
  int local_158;
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6c968;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
    uVar1 = local_38 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6c6fd;
      }
    }
    else {
LAB_14ee6c6fd:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert((wchar_t *)local_40,uVar1,(uchar *)"Params.LocalAccountId",0x16);
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_158 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6c788;
      }
    }
    else {
LAB_14ee6c788:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar4,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_160,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar3.Data = local_48.Data;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
      FVar3.Data = local_48.Data;
    }
  }
  else {
    if (param_1->SessionName != (FName)0x0) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6c968;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.SessionName",0x12)
    ;
    uVar1 = local_158 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6c85d;
      }
    }
    else {
LAB_14ee6c85d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar4,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert((wchar_t *)local_160,uVar1,(uchar *)"Params.SessionName",0x13);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_38 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6c8e5;
      }
    }
    else {
LAB_14ee6c8e5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_40,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar3.Data = local_168.Data;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
      FVar3.Data = local_168.Data;
    }
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
LAB_14ee6c968:
  local_2c8.bIsSet = false;
  pFVar2 = Errors::InvalidParams(&local_298,&local_2c8);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar2->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = (pFVar2->Inner).Object;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar2->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.Details.SharedReferenceCount.ReferenceController);
  if (local_2c8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CheckParams @ 14ee6ca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckParams
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  undefined1 auStack_2e8 [32];
  TOptional<UE::Online::FOnlineError> local_2c8;
  FOnlineError local_298;
  FScriptContainerElement local_268 [256];
  ForAnyElementType local_168;
  FScriptContainerElement *local_160;
  int local_158;
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6cd1b;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
    uVar1 = local_38 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6caad;
      }
    }
    else {
LAB_14ee6caad:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert((wchar_t *)local_40,uVar1,(uchar *)"Params.LocalAccountId",0x16);
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_158 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6cb38;
      }
    }
    else {
LAB_14ee6cb38:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar4,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_160,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar3.Data = local_48.Data;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
      FVar3.Data = local_48.Data;
    }
  }
  else {
    if (((param_1->SessionInviteId).Value & 0xffffff) != 0) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6cd1b;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"Params.SessionInviteId",0x16);
    uVar1 = local_158 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6cc10;
      }
    }
    else {
LAB_14ee6cc10:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar4,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert((wchar_t *)local_160,uVar1,(uchar *)"Params.SessionInviteId",0x17);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_38 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6cc98;
      }
    }
    else {
LAB_14ee6cc98:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_40,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar3.Data = local_168.Data;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
      FVar3.Data = local_168.Data;
    }
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
LAB_14ee6cd1b:
  local_2c8.bIsSet = false;
  pFVar2 = Errors::InvalidParams(&local_298,&local_2c8);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar2->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = (pFVar2->Inner).Object;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar2->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.Details.SharedReferenceCount.ReferenceController);
  if (local_2c8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CheckParams @ 14ee6cdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckParams
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  undefined1 auStack_2e8 [32];
  TOptional<UE::Online::FOnlineError> local_2c8;
  FOnlineError local_298;
  FScriptContainerElement local_268 [256];
  ForAnyElementType local_168;
  FScriptContainerElement *local_160;
  int local_158;
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6d0c8;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
    uVar1 = local_38 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6ce5d;
      }
    }
    else {
LAB_14ee6ce5d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert((wchar_t *)local_40,uVar1,(uchar *)"Params.LocalAccountId",0x16);
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_158 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6cee8;
      }
    }
    else {
LAB_14ee6cee8:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar4,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_160,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar3.Data = local_48.Data;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
      FVar3.Data = local_48.Data;
    }
  }
  else {
    if (param_1->SessionName != (FName)0x0) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6d0c8;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.SessionName",0x12)
    ;
    uVar1 = local_158 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6cfbd;
      }
    }
    else {
LAB_14ee6cfbd:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar4,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert((wchar_t *)local_160,uVar1,(uchar *)"Params.SessionName",0x13);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_38 + 1;
    uVar4 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ee6d045;
      }
    }
    else {
LAB_14ee6d045:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_40,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar3.Data = local_168.Data;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
      FVar3.Data = local_168.Data;
    }
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
LAB_14ee6d0c8:
  local_2c8.bIsSet = false;
  pFVar2 = Errors::InvalidParams(&local_298,&local_2c8);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar2->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = (pFVar2->Inner).Object;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar2->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.Details.SharedReferenceCount.ReferenceController);
  if (local_2c8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CheckParams @ 14ee6d180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckParams
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FOnlineError *pFVar4;
  FStaticBasicLogRecord *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [8];
  TOptional<UE::Online::FOnlineError> local_2c0;
  FOnlineError local_290;
  FScriptContainerElement local_268 [256];
  ForAnyElementType local_168;
  FScriptContainerElement *local_160;
  int local_158;
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6d6a1;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
    uVar1 = local_158 + 1;
    uVar8 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_14ee6d216;
      }
    }
    else {
LAB_14ee6d216:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar8,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert((wchar_t *)local_160,uVar1,(uchar *)"Params.LocalAccountId",0x16);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_38 + 1;
    uVar8 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_14ee6d29e;
      }
    }
    else {
LAB_14ee6d29e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar8,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_40,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar6.Data = local_168.Data;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
      FVar6.Data = local_168.Data;
    }
  }
  else if (param_1->SessionName == (FName)0x0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6d6a1;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_38 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.SessionName",0x12);
    uVar1 = local_38 + 1;
    uVar8 = uVar1;
    if (uVar1 < 0x81) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_14ee6d376;
      }
    }
    else {
LAB_14ee6d376:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar8,2);
    }
    local_40 = local_148;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      local_40 = local_48.Data;
    }
    Core::Private::Convert((wchar_t *)local_40,uVar1,(uchar *)"Params.SessionName",0x13);
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_158 + 1;
    uVar8 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_14ee6d401;
      }
    }
    else {
LAB_14ee6d401:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar8,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_160,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    pFVar5 = &::LOG_Static;
LAB_14ee6d669:
    Logging::Private::BasicLog<6>(pFVar5,(FLogCategoryBase *)&LogOnlineServices);
    FVar6.Data = local_48.Data;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
      FVar6.Data = local_48.Data;
    }
  }
  else {
    iVar3 = (param_1->TargetUsers).ArrayNum;
    if (iVar3 != 0) {
      pFVar7 = (param_1->TargetUsers).AllocatorInstance.Data;
      pFVar2 = pFVar7 + (longlong)iVar3 * 4;
      while( true ) {
        if ((param_1->TargetUsers).ArrayNum != iVar3) {
          `TCheckedPointerIterator<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_2c8);
        }
        if (pFVar7 == pFVar2) {
          __return_storage_ptr__->bIsSet = false;
          return __return_storage_ptr__;
        }
        if ((*(uint *)pFVar7 & 0xffffff) == 0) break;
        pFVar7 = pFVar7 + 4;
      }
      if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6d6a1;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_38 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"TargetUser",10);
      uVar1 = local_38 + 1;
      uVar8 = uVar1;
      if (uVar1 < 0x81) {
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          uVar8 = 0;
          goto LAB_14ee6d596;
        }
      }
      else {
LAB_14ee6d596:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar8,2);
      }
      local_40 = local_148;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        local_40 = local_48.Data;
      }
      Core::Private::Convert((wchar_t *)local_40,uVar1,(uchar *)"TargetUser",0xb);
      local_168.Data = (FScriptContainerElement *)0x0;
      local_158 = Core::Private::GetConvertedLength
                            ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28
                            );
      uVar1 = local_158 + 1;
      uVar8 = uVar1;
      if (uVar1 < 0x81) {
        if (local_168.Data != (FScriptContainerElement *)0x0) {
          uVar8 = 0;
          goto LAB_14ee6d621;
        }
      }
      else {
LAB_14ee6d621:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar8,2);
      }
      local_160 = local_268;
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        local_160 = local_168.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_160,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29
                );
      pFVar5 = &::LOG_Static;
      goto LAB_14ee6d669;
    }
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6d6a1;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_158 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_158 + 1;
    uVar8 = uVar1;
    if (uVar1 < 0x81) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_14ee6d4aa;
      }
    }
    else {
LAB_14ee6d4aa:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,uVar8,2);
    }
    local_160 = local_268;
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      local_160 = local_168.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_160,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar6.Data = local_168.Data;
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
LAB_14ee6d6a1:
  local_2c0.bIsSet = false;
  pFVar4 = Errors::InvalidParams(&local_290,&local_2c0);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar4->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar4->Details).SharedReferenceCount.ReferenceController;
  (pFVar4->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = (pFVar4->Inner).Object;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar4->Inner).SharedReferenceCount.ReferenceController;
  (pFVar4->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar4->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.Details.SharedReferenceCount.ReferenceController);
  if (local_2c0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CheckParams @ 14ee6d760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckParams
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  int iVar2;
  FOnlineError *pFVar3;
  FOnlineError *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [8];
  FOnlineError local_2e0;
  bool local_2b8;
  TOptional<UE::Online::FOnlineError> local_2b0;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_308;
  (**(code **)(this->_padding_ + 0x138))(this,&local_2e0);
  if (local_2b8 != false) {
    __return_storage_ptr__->bIsSet = local_2b8;
    (__return_storage_ptr__->TypedValue).Inner.Object = local_2e0.Inner.Object;
    (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
         local_2e0.Inner.SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->TypedValue).Details.Object = local_2e0.Details.Object;
    (__return_storage_ptr__->TypedValue).ErrorCode = local_2e0.ErrorCode;
    (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
         local_2e0.Details.SharedReferenceCount.ReferenceController;
    local_2e0.Details.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_2e0.Details.Object = (IOnlineErrorDetails *)0x0;
    local_2e0.Inner.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_2e0.Inner.Object = (FOnlineError *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e0.Details.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  pFVar5 = (param_1->SessionSearchFilters).AllocatorInstance.Data;
  iVar2 = (param_1->SessionSearchFilters).ArrayNum;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((param_1->SessionSearchFilters).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Online::FFindSessionsSearchFilter_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_2e8);
    }
    if (pFVar5 == pFVar6) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    if (*(longlong *)pFVar5 == 0) break;
    pFVar5 = pFVar5 + 0x30;
  }
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6d9a9;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_48 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Filter.Key",10);
  uVar1 = local_48 + 1;
  uVar7 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar7 = 0;
      goto LAB_14ee6d89e;
    }
  }
  else {
LAB_14ee6d89e:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)"Filter.Key",0xb);
  local_178.Data = (FScriptContainerElement *)0x0;
  local_168 = Core::Private::GetConvertedLength
                        ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
  uVar1 = local_168 + 1;
  uVar7 = uVar1;
  if (uVar1 < 0x81) {
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      uVar7 = 0;
      goto LAB_14ee6d929;
    }
  }
  else {
LAB_14ee6d929:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar7,2);
  }
  local_170 = local_278;
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    local_170 = local_178.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_170,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
LAB_14ee6d9a9:
  local_2b0.bIsSet = false;
  pFVar4 = Errors::InvalidParams(&local_2e0,&local_2b0);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar4->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar4->Details).SharedReferenceCount.ReferenceController;
  pFVar3 = (pFVar4->Inner).Object;
  (pFVar4->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = pFVar3;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar4->Inner).SharedReferenceCount.ReferenceController;
  (pFVar4->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar4->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e0.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e0.Details.SharedReferenceCount.ReferenceController);
  if (local_2b0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CheckParams @ 14ee6da60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckParams
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FOnlineError *pFVar4;
  FStaticBasicLogRecord *pFVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_2e0;
  TOptional<UE::Online::FOnlineError> local_2d0;
  FOnlineError local_2a0;
  ForElementType<wchar_t> local_278;
  ForElementType<wchar_t> local_170;
  int local_168;
  undefined1 local_158 [256];
  ForAnyElementType local_58;
  ForElementType<wchar_t> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_308;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6df3e;
    local_278.SecondaryData = (ForElementType<wchar_t>)0x0;
    local_168 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
    uVar1 = local_168 + 1;
    uVar9 = uVar1;
    if (uVar1 < 0x81) {
      if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
        uVar9 = 0;
        goto LAB_14ee6dae9;
      }
    }
    else {
LAB_14ee6dae9:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_278.SecondaryData,0,uVar9,2);
    }
    local_170 = (ForElementType<wchar_t>)&local_278;
    if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
      local_170 = local_278.SecondaryData;
    }
    Core::Private::Convert((wchar_t *)local_170,uVar1,(uchar *)"Params.LocalAccountId",0x16);
    local_58.Data = (FScriptContainerElement *)0x0;
    local_48 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_48 + 1;
    uVar9 = uVar1;
    if (uVar1 < 0x81) {
      if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
        uVar9 = 0;
        goto LAB_14ee6db71;
      }
    }
    else {
LAB_14ee6db71:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,2);
    }
    local_50 = (ForElementType<wchar_t>)local_158;
    if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
      local_50 = (ForElementType<wchar_t>)local_58.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar7.Data = (FScriptContainerElement *)local_278.SecondaryData;
    if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
      FMemory::Free(local_58.Data);
      FVar7.Data = (FScriptContainerElement *)local_278.SecondaryData;
    }
  }
  else {
    if (param_1->SessionName != (FName)0x0) {
      if (((param_1->Mutations).SchemaName.field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff
          ) && ((param_1->Mutations).SchemaName.field0_0x0 == (TOptional<FName>_u_0)0x0)) {
        if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6df3e;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_48 = Core::Private::GetConvertedLength
                             ((wchar_t *)0x0,(uchar *)"Params.Mutations.SchemaName.GetValue()",0x26)
        ;
        uVar1 = local_48 + 1;
        uVar9 = uVar1;
        if (uVar1 < 0x81) {
          if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
            uVar9 = 0;
            goto LAB_14ee6ddb1;
          }
        }
        else {
LAB_14ee6ddb1:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,2);
        }
        local_50 = (ForElementType<wchar_t>)local_158;
        if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
          local_50 = (ForElementType<wchar_t>)local_58.Data;
        }
        Core::Private::Convert
                  ((wchar_t *)local_50,uVar1,(uchar *)"Params.Mutations.SchemaName.GetValue()",0x27)
        ;
        local_278.SecondaryData = (ForElementType<wchar_t>)0x0;
        local_168 = Core::Private::GetConvertedLength
                              ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",
                               0x28);
        uVar1 = local_168 + 1;
        uVar9 = uVar1;
        if (uVar1 < 0x81) {
          if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
            uVar9 = 0;
            goto LAB_14ee6de3c;
          }
        }
        else {
LAB_14ee6de3c:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_278.SecondaryData,0,uVar9,2);
        }
        local_170 = (ForElementType<wchar_t>)&local_278;
        if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
          local_170 = local_278.SecondaryData;
        }
        Core::Private::Convert
                  ((wchar_t *)local_170,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",
                   0x29);
        pFVar5 = &::LOG_Static;
        goto LAB_14ee6dd19;
      }
      if (((param_1->Mutations).NumMaxConnections.bIsSet != false) &&
         ((param_1->Mutations).NumMaxConnections.TypedValue == 0)) {
        if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6df3e;
        local_278.SecondaryData = (ForElementType<wchar_t>)0x0;
        local_168 = Core::Private::GetConvertedLength
                              ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",
                               0x28);
        iVar3 = local_168 + 1;
        TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
        ResizeAllocation(&local_278,0,iVar3,2);
        local_170 = (ForElementType<wchar_t>)&local_278;
        if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
          local_170 = local_278.SecondaryData;
        }
        Core::Private::Convert
                  ((wchar_t *)local_170,iVar3,(uchar *)"UE::Online::FSessionsCommon::CheckParams",
                   0x29);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        FVar7.Data = (FScriptContainerElement *)local_278.SecondaryData;
        goto LAB_14ee6df34;
      }
      local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e0.ArrayNum = 0;
      local_2e0.ArrayMax = 0;
      TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
                  *)&(param_1->Mutations).UpdatedCustomSettings,&local_2e0);
      iVar3 = local_2e0.ArrayNum;
      uVar6 = (ulonglong)local_2e0.ArrayNum;
      pFVar2 = local_2e0.AllocatorInstance.Data + uVar6 * 8;
      FVar7.Data = local_2e0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar6 != iVar3) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_2e8);
          uVar6 = local_2e0._8_8_ & 0xffffffff;
        }
        if (FVar7.Data == pFVar2) {
          pFVar8 = (param_1->Mutations).RemovedCustomSettings.AllocatorInstance.Data;
          iVar3 = (param_1->Mutations).RemovedCustomSettings.ArrayNum;
          pFVar2 = pFVar8 + (longlong)iVar3 * 8;
          goto LAB_14ee6e215;
        }
        if (*(longlong *)FVar7.Data == 0) break;
        FVar7.Data = FVar7.Data + 8;
      }
      if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6e17f;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_48 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,(uchar *)"UpdatedAttributeId",0x12);
      uVar1 = local_48 + 1;
      uVar9 = uVar1;
      if (uVar1 < 0x81) {
        if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
          uVar9 = 0;
          goto LAB_14ee6e074;
        }
      }
      else {
LAB_14ee6e074:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,2);
      }
      local_50 = (ForElementType<wchar_t>)local_158;
      if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
        local_50 = (ForElementType<wchar_t>)local_58.Data;
      }
      Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)"UpdatedAttributeId",0x13);
      local_278.SecondaryData = (ForElementType<wchar_t>)0x0;
      local_168 = Core::Private::GetConvertedLength
                            ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28
                            );
      uVar1 = local_168 + 1;
      uVar9 = uVar1;
      if (uVar1 < 0x81) {
        if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
          uVar9 = 0;
          goto LAB_14ee6e0ff;
        }
      }
      else {
LAB_14ee6e0ff:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_278.SecondaryData,0,uVar9,2);
      }
      local_170 = (ForElementType<wchar_t>)&local_278;
      if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
        local_170 = local_278.SecondaryData;
      }
      Core::Private::Convert
                ((wchar_t *)local_170,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29
                );
      pFVar5 = &::LOG_Static;
      goto LAB_14ee6e147;
    }
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6df3e;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_48 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.SessionName",0x12);
    uVar1 = local_48 + 1;
    uVar9 = uVar1;
    if (uVar1 < 0x81) {
      if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
        uVar9 = 0;
        goto LAB_14ee6dc46;
      }
    }
    else {
LAB_14ee6dc46:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,2);
    }
    local_50 = (ForElementType<wchar_t>)local_158;
    if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
      local_50 = (ForElementType<wchar_t>)local_58.Data;
    }
    Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)"Params.SessionName",0x13);
    local_278.SecondaryData = (ForElementType<wchar_t>)0x0;
    local_168 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
    uVar1 = local_168 + 1;
    uVar9 = uVar1;
    if (uVar1 < 0x81) {
      if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
        uVar9 = 0;
        goto LAB_14ee6dcd1;
      }
    }
    else {
LAB_14ee6dcd1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_278.SecondaryData,0,uVar9,2);
    }
    local_170 = (ForElementType<wchar_t>)&local_278;
    if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
      local_170 = local_278.SecondaryData;
    }
    Core::Private::Convert
              ((wchar_t *)local_170,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
    pFVar5 = &::LOG_Static;
LAB_14ee6dd19:
    Logging::Private::BasicLog<6>(pFVar5,(FLogCategoryBase *)&LogOnlineServices);
    FVar7.Data = local_58.Data;
    if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
      FMemory::Free((void *)local_278.SecondaryData);
      FVar7.Data = local_58.Data;
    }
  }
LAB_14ee6df34:
  if ((ForElementType<wchar_t>)FVar7.Data != (ForElementType<wchar_t>)0x0) {
    FMemory::Free(FVar7.Data);
  }
LAB_14ee6df3e:
  local_2d0.bIsSet = false;
  pFVar4 = Errors::InvalidParams(&local_2a0,&local_2d0);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar4->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar4->Details).SharedReferenceCount.ReferenceController;
  (pFVar4->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = (pFVar4->Inner).Object;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar4->Inner).SharedReferenceCount.ReferenceController;
  (pFVar4->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar4->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.Details.SharedReferenceCount.ReferenceController);
  if (local_2d0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
LAB_14ee6e215:
  if ((param_1->Mutations).RemovedCustomSettings.ArrayNum != iVar3) {
    `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_2e8);
  }
  if (pFVar8 == pFVar2) {
    __return_storage_ptr__->bIsSet = false;
    goto LAB_14ee6e365;
  }
  if (*(longlong *)pFVar8 == 0) goto LAB_14ee6e23c;
  pFVar8 = pFVar8 + 8;
  goto LAB_14ee6e215;
LAB_14ee6e23c:
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6e17f;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_48 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"RemovedAttributeId",0x12);
  uVar1 = local_48 + 1;
  uVar9 = uVar1;
  if (uVar1 < 0x81) {
    if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
      uVar9 = 0;
      goto LAB_14ee6e289;
    }
  }
  else {
LAB_14ee6e289:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,2);
  }
  local_50 = (ForElementType<wchar_t>)local_158;
  if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
    local_50 = (ForElementType<wchar_t>)local_58.Data;
  }
  Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)"RemovedAttributeId",0x13);
  local_278.SecondaryData = (ForElementType<wchar_t>)0x0;
  local_168 = Core::Private::GetConvertedLength
                        ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x28);
  uVar1 = local_168 + 1;
  uVar9 = uVar1;
  if (uVar1 < 0x81) {
    if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
      uVar9 = 0;
      goto LAB_14ee6e314;
    }
  }
  else {
LAB_14ee6e314:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_278.SecondaryData,0,uVar9,2);
  }
  local_170 = (ForElementType<wchar_t>)&local_278;
  if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
    local_170 = local_278.SecondaryData;
  }
  Core::Private::Convert
            ((wchar_t *)local_170,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckParams",0x29);
  pFVar5 = &::LOG_Static;
LAB_14ee6e147:
  Logging::Private::BasicLog<6>(pFVar5,(FLogCategoryBase *)&LogOnlineServices);
  if (local_278.SecondaryData != (ForElementType<wchar_t>)0x0) {
    FMemory::Free((void *)local_278.SecondaryData);
  }
  if ((ForElementType<wchar_t>)local_58.Data != (ForElementType<wchar_t>)0x0) {
    FMemory::Free(local_58.Data);
  }
LAB_14ee6e17f:
  local_2d0.bIsSet = false;
  pFVar4 = Errors::InvalidParams(&local_2a0,&local_2d0);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar4->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar4->Details).SharedReferenceCount.ReferenceController;
  (pFVar4->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = (pFVar4->Inner).Object;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar4->Inner).SharedReferenceCount.ReferenceController;
  (pFVar4->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar4->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.Details.SharedReferenceCount.ReferenceController);
  if (local_2d0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
LAB_14ee6e365:
  if (local_2e0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_2e0.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// CheckState @ 14ee6e3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckState
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<UE::Online::FOnlineError> *pTVar5;
  FOnlineError *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_228 [32];
  FName local_208;
  FString local_200;
  TOptional<UE::Online::FOnlineError> local_1f0;
  FOnlineError local_1c0;
  undefined1 local_198 [8];
  undefined1 local_190 [40];
  byte local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_208 = param_1->SessionName;
  (**(code **)(this->_padding_ + 8))(this,local_198,&local_208);
  uVar7 = (ulonglong)local_168;
  if ((1 < uVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) == '\0') {
    __return_storage_ptr__->bIsSet = false;
    if ((1 < local_168) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
      return pTVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_168])(local_190);
    return __return_storage_ptr__;
  }
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6e531;
  ::FName::ToString(&param_1->SessionName,&local_200);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_48 = Core::Private::GetConvertedLength
                       ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x27);
  uVar1 = local_48 + 1;
  uVar8 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_14ee6e4b3;
    }
  }
  else {
LAB_14ee6e4b3:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar8,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x28);
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
LAB_14ee6e531:
  local_1f0.bIsSet = false;
  pFVar6 = Errors::InvalidState(&local_1c0,&local_1f0);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar6->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar6->Details).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar6->Inner).Object;
  (pFVar6->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = pFVar2;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar6->Inner).SharedReferenceCount.ReferenceController;
  (pFVar6->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar6->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.Details.SharedReferenceCount.ReferenceController);
  if (local_1f0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  if ((1 < local_168) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
    return pTVar5;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_168])(local_190);
  return __return_storage_ptr__;
}

// CheckState @ 14ee6e660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckState
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  uint uVar2;
  FOnlineError *pFVar3;
  longlong lVar4;
  TMap<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
  *pTVar5;
  bool bVar6;
  TOptional<UE::Online::FOnlineError> *pTVar7;
  FOnlineError *pFVar8;
  code *pcVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 auStack_488 [32];
  undefined1 local_468 [4];
  uint local_464;
  int local_460;
  int local_45c;
  FName local_458;
  Params *local_450;
  TMap<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
  *local_448;
  int iStack_440;
  uint uStack_43c;
  undefined1 *local_438;
  undefined4 uStack_430;
  int iStack_42c;
  int local_428;
  undefined4 uStack_424;
  int iStack_420;
  undefined4 uStack_41c;
  TMap<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
  *local_418;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_410;
  undefined8 uStack_3f0;
  FString local_3e8;
  FString local_3d8;
  TOptional<UE::Online::FOnlineError> local_3c8;
  TOptional<UE::Online::FOnlineError> local_398;
  FOnlineError local_368;
  FOnlineError local_340;
  undefined4 local_2fc;
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [40];
  byte local_2c8;
  undefined1 local_2c0 [8];
  undefined1 local_2b8 [40];
  byte local_290;
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_488;
  local_458 = param_1->SessionName;
  local_450 = param_1;
  (**(code **)(this->_padding_ + 8))(this,local_2f8,&local_458);
  uVar12 = (ulonglong)local_2c8;
  if ((1 < uVar12) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar9 = (code *)swi(3);
    pTVar7 = (TOptional<UE::Online::FOnlineError> *)(*pcVar9)();
    return pTVar7;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FUpdatePresence::Result,UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar12 + 4) == '\0') {
    if (param_1->bPresenceEnabled == false) {
LAB_14ee6eb91:
      __return_storage_ptr__->bIsSet = false;
      if ((1 < local_2c8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar9 = (code *)swi(3);
        pTVar7 = (TOptional<UE::Online::FOnlineError> *)(*pcVar9)();
        return pTVar7;
      }
      pcVar9 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                         ::__l2::Destructors)[local_2c8];
LAB_14ee6ebd0:
      (*pcVar9)(local_2f0);
      return __return_storage_ptr__;
    }
    iVar1 = *(int *)&(this->LocalSessionsByName).field_0x28;
    local_448 = &this->LocalSessionsByName;
    iStack_440 = 0;
    uStack_43c = 1;
    iStack_42c = iStack_440;
    local_428 = iStack_440;
    if (iVar1 != 0) {
      puVar16 = *(uint **)&(this->LocalSessionsByName).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)&(this->LocalSessionsByName).field_0x10;
      }
      uVar14 = *puVar16;
      local_428 = 0;
      iStack_440 = 0;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_440;
        local_428 = local_428 + 0x20;
        iStack_440 = iStack_440 + 1;
        iStack_42c = iVar1;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_440) goto LAB_14ee6e955;
        uVar14 = puVar16[lVar10 + 1];
      }
      uStack_43c = -uVar14 & uVar14;
      uVar12 = (ulonglong)uStack_43c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_460 = (int)lVar10;
      iStack_42c = local_428 + -1 + local_460;
      if (iVar1 < iStack_42c) {
        iStack_42c = iVar1;
      }
    }
LAB_14ee6e955:
    local_438 = &(this->LocalSessionsByName).field_0x10;
    uVar14 = *(uint *)&(this->LocalSessionsByName).field_0x28;
    uStack_424 = local_2fc;
    iStack_420 = *(int *)&(this->LocalSessionsByName).field_0x8 -
                 *(int *)&(this->LocalSessionsByName).field_0x34;
    uVar13 = uVar14 & 0xffffffe0;
    uStack_430 = 0xffffffff;
    TStack_410._padding_ = CONCAT44(uStack_43c,iStack_440);
    TStack_410.CurrentBitIndex = iStack_42c;
    TStack_410.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar14 >> 5;
    TStack_410._28_4_ = local_2fc;
    TStack_410.BaseBitIndex = local_428;
    uStack_3f0 = CONCAT44(uStack_41c,iStack_420);
    local_418 = local_448;
    TStack_410.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_438;
    if ((((int)uVar14 < 0) || (iVar1 < (int)uVar14)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar9 = (code *)swi(3);
      pTVar7 = (TOptional<UE::Online::FOnlineError> *)(*pcVar9)();
      return pTVar7;
    }
    uVar2 = *(uint *)&(this->LocalSessionsByName).field_0x28;
    if (uVar14 != uVar2) {
      puVar15 = *(undefined1 **)&(this->LocalSessionsByName).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = &(this->LocalSessionsByName).field_0x10;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar14 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14ee6ea70;
        uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar12 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_45c = (int)lVar10;
      uVar14 = local_45c + -1 + uVar13;
      if ((int)uVar2 < (int)uVar14) {
        uVar14 = uVar2;
      }
    }
LAB_14ee6ea70:
    do {
      pTVar5 = local_418;
      if (*(int *)&local_418->field_0x8 - *(int *)&local_418->field_0x34 != (int)uStack_3f0) {
        local_468[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_468);
      }
      lVar10 = (longlong)TStack_410.CurrentBitIndex;
      if (((TStack_410.CurrentBitIndex == uVar14) &&
          (TStack_410.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->LocalSessionsByName).field_0x10)) &&
         (pTVar5 == &this->LocalSessionsByName)) goto LAB_14ee6eb91;
      lVar4 = *(longlong *)pTVar5;
      local_464 = (local_450->LocalAccountId).Value;
      (**(code **)(this->_padding_ + 0x20))(this,local_2c0,&local_464);
      uVar12 = (ulonglong)local_290;
      if ((1 < uVar12) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar6)) {
        pcVar9 = (code *)swi(3);
        pTVar7 = (TOptional<UE::Online::FOnlineError> *)(*pcVar9)();
        return pTVar7;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FGetMutableSessionById::Result,UE::Online::FGetMutableSessionById::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar12 + 4) != '\0') {
        if (5 < (byte)LogOnlineServices._0_1_) {
          ::FName::ToString((FName *)(lVar4 + lVar10 * 0x14),&local_3d8);
          local_68.Data = (FScriptContainerElement *)0x0;
          local_58 = Core::Private::GetConvertedLength
                               ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",
                                0x27);
          uVar14 = local_58 + 1;
          uVar13 = uVar14;
          if (uVar14 < 0x81) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar13 = 0;
              goto LAB_14ee6ec75;
            }
          }
          else {
LAB_14ee6ec75:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar13,2);
          }
          local_60 = local_168;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            local_60 = local_68.Data;
          }
          Core::Private::Convert
                    ((wchar_t *)local_60,uVar14,(uchar *)"UE::Online::FSessionsCommon::CheckState",
                     0x28);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
          }
        }
        local_398.bIsSet = false;
        pFVar8 = Errors::InvalidState(&local_340,&local_398);
        (__return_storage_ptr__->TypedValue).Details.Object = (pFVar8->Details).Object;
        (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
             (pFVar8->Details).SharedReferenceCount.ReferenceController;
        pFVar3 = (pFVar8->Inner).Object;
        (pFVar8->Details).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar8->Details).Object = (IOnlineErrorDetails *)0x0;
        (__return_storage_ptr__->TypedValue).Inner.Object = pFVar3;
        (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
             (pFVar8->Inner).SharedReferenceCount.ReferenceController;
        (pFVar8->Inner).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar8->Inner).Object = (FOnlineError *)0x0;
        (__return_storage_ptr__->TypedValue).ErrorCode = pFVar8->ErrorCode;
        __return_storage_ptr__->bIsSet = true;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_340.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_340.Details.SharedReferenceCount.ReferenceController);
        if (local_398.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_398.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_398.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
        if ((1 < local_290) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar9 = (code *)swi(3);
          pTVar7 = (TOptional<UE::Online::FOnlineError> *)(*pcVar9)();
          return pTVar7;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetPresenceSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_290])(local_2b8);
        if ((1 < local_2c8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar9 = (code *)swi(3);
          pTVar7 = (TOptional<UE::Online::FOnlineError> *)(*pcVar9)();
          return pTVar7;
        }
        pcVar9 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                           ::__l2::Destructors)[local_2c8];
        goto LAB_14ee6ebd0;
      }
      uVar12 = (ulonglong)local_290;
      if ((1 < local_290) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar9 = (code *)swi(3);
        pTVar7 = (TOptional<UE::Online::FOnlineError> *)(*pcVar9)();
        return pTVar7;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetPresenceSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(local_2b8);
      TStack_410.UnvisitedBitMask = TStack_410.UnvisitedBitMask & ~TStack_410._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_410);
    } while( true );
  }
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6e7f4;
  ::FName::ToString(&param_1->SessionName,&local_3e8);
  local_188.Data = (FScriptContainerElement *)0x0;
  local_178 = Core::Private::GetConvertedLength
                        ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x27);
  uVar14 = local_178 + 1;
  uVar13 = uVar14;
  if (uVar14 < 0x81) {
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      uVar13 = 0;
      goto LAB_14ee6e774;
    }
  }
  else {
LAB_14ee6e774:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar13,2);
  }
  local_180 = local_288;
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    local_180 = local_188.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_180,uVar14,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x28);
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
LAB_14ee6e7f4:
  local_3c8.bIsSet = false;
  pFVar8 = Errors::InvalidState(&local_368,&local_3c8);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar8->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar8->Details).SharedReferenceCount.ReferenceController;
  pFVar3 = (pFVar8->Inner).Object;
  (pFVar8->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar8->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = pFVar3;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar8->Inner).SharedReferenceCount.ReferenceController;
  (pFVar8->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar8->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar8->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368.Details.SharedReferenceCount.ReferenceController);
  if (local_3c8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  if ((1 < local_2c8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar9 = (code *)swi(3);
    pTVar7 = (TOptional<UE::Online::FOnlineError> *)(*pcVar9)();
    return pTVar7;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_2c8])(local_2f0);
  return __return_storage_ptr__;
}

// CheckState @ 14ee6ee00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckState
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FOnlineErrorDetails *pFVar3;
  int iVar4;
  FText *pFVar5;
  FString *pFVar6;
  TSharedRef<UE::Online::FOnlineErrorDetails,1> *pTVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 auStack_188 [32];
  TSharedRef<UE::Online::FOnlineErrorDetails,1> local_168;
  FString local_158;
  FText local_148;
  FScriptContainerElement local_138 [256];
  ForAnyElementType local_38;
  FScriptContainerElement *local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar1 = (param_1->LocalAccountId).Value;
  uVar11 = uVar1 & 0xffffff;
  uVar9 = (uVar1 >> 0x18) - uVar11 ^ uVar11 >> 0xd;
  uVar8 = (-0x61c88647 - uVar9) - uVar11 ^ uVar9 << 8;
  uVar11 = (uVar11 - uVar8) - uVar9 ^ uVar8 >> 0xd;
  uVar9 = (uVar9 - uVar11) - uVar8 ^ uVar11 >> 0xc;
  uVar8 = (uVar8 - uVar9) - uVar11 ^ uVar9 << 0x10;
  uVar11 = (uVar11 - uVar8) - uVar9 ^ uVar8 >> 5;
  uVar9 = (uVar9 - uVar11) - uVar8 ^ uVar11 >> 3;
  uVar8 = (uVar8 - uVar9) - uVar11 ^ uVar9 << 10;
  if (*(int *)&(this->CurrentSessionSearchPromisesUserMap).field_0x8 !=
      *(int *)&(this->CurrentSessionSearchPromisesUserMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->CurrentSessionSearchPromisesUserMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->CurrentSessionSearchPromisesUserMap).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->CurrentSessionSearchPromisesUserMap).field_0x48 - 1U &
                    ((uVar11 - uVar8) - uVar9 ^ uVar8 >> 0xf)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->CurrentSessionSearchPromisesUserMap +
                     (longlong)iVar4 * 0x28) == uVar1) {
          if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6effc;
          local_38.Data = (FScriptContainerElement *)0x0;
          local_28 = Core::Private::GetConvertedLength
                               ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",
                                0x27);
          uVar1 = local_28 + 1;
          uVar8 = uVar1;
          if (uVar1 < 0x81) {
            if (local_38.Data != (FScriptContainerElement *)0x0) {
              uVar8 = 0;
              goto LAB_14ee6ef8a;
            }
          }
          else {
LAB_14ee6ef8a:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_38,0,uVar8,2);
          }
          local_30 = local_138;
          if (local_38.Data != (FScriptContainerElement *)0x0) {
            local_30 = local_38.Data;
          }
          Core::Private::Convert
                    ((wchar_t *)local_30,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckState",
                     0x28);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
          if (local_38.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data);
          }
LAB_14ee6effc:
          pFVar5 = FText::AsLocalizable_Advanced_LocText
                             (&local_148,L"OnlineErrors",L"AlreadyPending",
                              L"Request already pending");
          pFVar6 = ::FString::FString(&local_158,"Common.AlreadyPending");
          pTVar7 = MakeShared<UE::Online::FOnlineErrorDetails,1,FString,wchar_t_const_(&)[16],FText>
                             (&local_168,pFVar6,(wchar_t (*) [16])L"already_pending",pFVar5);
          pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
          pFVar3 = pTVar7->Object;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_168.SharedReferenceCount.ReferenceController);
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          if (local_148.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          (__return_storage_ptr__->TypedValue).Details.Object = (IOnlineErrorDetails *)pFVar3;
          (__return_storage_ptr__->TypedValue).ErrorCode = 0x1000000100000008;
          (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
               pTVar2;
          (__return_storage_ptr__->TypedValue).Inner.Object = (FOnlineError *)0x0;
          (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          __return_storage_ptr__->bIsSet = true;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return __return_storage_ptr__;
        }
        iVar4 = *(int *)(*(longlong *)&this->CurrentSessionSearchPromisesUserMap + 0x20 +
                        (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CheckState @ 14ee6f0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckState
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  FOnlineError *pFVar3;
  TMap<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
  *pTVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  TOptional<UE::Online::FOnlineError> *pTVar9;
  uint *puVar10;
  FOnlineError *pFVar11;
  longlong *plVar12;
  FString *pFVar13;
  code *pcVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  undefined1 auStack_968 [32];
  FScriptContainerElement *local_948;
  undefined1 local_938 [4];
  uint local_934;
  int local_930;
  uint local_92c;
  TBitArray<FDefaultBitArrayAllocator> *local_928;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_920;
  undefined8 uStack_900;
  int local_8f8;
  undefined4 uStack_8f4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8f0;
  undefined1 local_8d0 [4];
  FName local_8cc;
  longlong local_8c0;
  TMap<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
  *local_8b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8b0;
  undefined8 uStack_890;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  TOptional<UE::Online::FOnlineError> local_828;
  TOptional<UE::Online::FOnlineError> local_7f8;
  TOptional<UE::Online::FOnlineError> local_7c8;
  TOptional<UE::Online::FOnlineError> local_798;
  longlong local_760;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_758;
  uint local_750;
  int iStack_74c;
  ulonglong uStack_748;
  FOnlineError local_738;
  FOnlineError local_710;
  FOnlineError local_6e8;
  FOnlineError local_6c0;
  undefined1 local_698 [8];
  IOnlineErrorDetails *local_690;
  TReferenceControllerBase<1> *local_688;
  FOnlineError *local_680;
  TReferenceControllerBase<1> *local_678;
  ulong64 local_670;
  byte local_668;
  undefined1 local_660 [8];
  longlong *local_658 [5];
  byte local_630;
  undefined1 local_628 [8];
  undefined1 local_620 [40];
  byte local_5f8;
  FScriptContainerElement local_5e8 [256];
  ForAnyElementType local_4e8;
  FScriptContainerElement *local_4e0;
  int local_4d8;
  FScriptContainerElement local_4c8 [256];
  ForAnyElementType local_3c8;
  FScriptContainerElement *local_3c0;
  int local_3b8;
  FScriptContainerElement local_3a8 [256];
  ForAnyElementType local_2a8;
  FScriptContainerElement *local_2a0;
  int local_298;
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_968;
  local_8cc = param_1->SessionName;
  (**(code **)(this->_padding_ + 8))(this,local_660,&local_8cc);
  uVar19 = (ulonglong)local_630;
  if ((1 < uVar19) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar14 = (code *)swi(3);
    pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
    return pTVar9;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FUpdatePresence::Result,UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar19 + 4) != '\0') {
    uVar19 = (ulonglong)local_630;
    if ((1 < uVar19) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar14 = (code *)swi(3);
      pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
      return pTVar9;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FUpdatePresence::Result,UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar19 + 4) == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x7e,
                           L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                          ), bVar6)) {
      pcVar14 = (code *)swi(3);
      pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
      return pTVar9;
    }
    if ((local_630 != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar14 = (code *)swi(3);
      pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
      return pTVar9;
    }
    puVar10 = (uint *)(**(code **)(*local_658[0] + 8))(local_658[0],local_8d0);
    if (*puVar10 != (param_1->SessionId).Value) {
      if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6f325;
      ::FName::ToString(&param_1->SessionName,&local_888);
      local_4e8.Data = (FScriptContainerElement *)0x0;
      local_4d8 = Core::Private::GetConvertedLength
                            ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x27)
      ;
      uVar2 = local_4d8 + 1;
      uVar16 = uVar2;
      if (uVar2 < 0x81) {
        if (local_4e8.Data != (FScriptContainerElement *)0x0) {
          uVar16 = 0;
          goto LAB_14ee6f2a5;
        }
      }
      else {
LAB_14ee6f2a5:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_4e8,0,uVar16,2);
      }
      local_4e0 = local_5e8;
      if (local_4e8.Data != (FScriptContainerElement *)0x0) {
        local_4e0 = local_4e8.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_4e0,uVar2,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x28)
      ;
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_4e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data);
      }
      if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_888.Data.AllocatorInstance.Data);
      }
LAB_14ee6f325:
      local_828.bIsSet = false;
      pFVar11 = Errors::InvalidState(&local_6e8,&local_828);
      (__return_storage_ptr__->TypedValue).Details.Object = (pFVar11->Details).Object;
      (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
           (pFVar11->Details).SharedReferenceCount.ReferenceController;
      pFVar3 = (pFVar11->Inner).Object;
      (pFVar11->Details).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar11->Details).Object = (IOnlineErrorDetails *)0x0;
      (__return_storage_ptr__->TypedValue).Inner.Object = pFVar3;
      (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
           (pFVar11->Inner).SharedReferenceCount.ReferenceController;
      (pFVar11->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      (pFVar11->Inner).Object = (FOnlineError *)0x0;
      (__return_storage_ptr__->TypedValue).ErrorCode = pFVar11->ErrorCode;
      __return_storage_ptr__->bIsSet = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6e8.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6e8.Details.SharedReferenceCount.ReferenceController);
      if (local_828.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_828.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_828.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
      if ((1 < local_630) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar14 = (code *)swi(3);
        pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
        return pTVar9;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_630])(local_658);
      return __return_storage_ptr__;
    }
  }
  local_934 = (param_1->SessionId).Value;
  (**(code **)(this->_padding_ + 0x18))(this,local_698,&local_934);
  uVar19 = (ulonglong)local_668;
  if ((1 < uVar19) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar14 = (code *)swi(3);
    pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
    return pTVar9;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar19 + 4) == '\0') {
    uVar19 = (ulonglong)local_668;
    if ((1 < uVar19) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar14 = (code *)swi(3);
      pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
      return pTVar9;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar19 + 4) == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                           ,0x7e,
                           L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                          ), bVar6)) {
      pcVar14 = (code *)swi(3);
      pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
      return pTVar9;
    }
    if ((local_668 != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar14 = (code *)swi(3);
      pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
      return pTVar9;
    }
    if (local_688 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_688->SharedReferenceCount = (atomic<int>)((int)local_688->SharedReferenceCount + 1);
      UNLOCK();
    }
    (**(code **)((longlong)*local_690 + 0x20))(local_690);
    plVar12 = (longlong *)(**(code **)((longlong)*local_690 + 0x28))(local_690);
    uVar2 = (param_1->LocalAccountId).Value;
    uVar20 = uVar2 & 0xffffff;
    uVar17 = (uVar2 >> 0x18) - uVar20 ^ uVar20 >> 0xd;
    uVar16 = (-0x61c88647 - uVar17) - uVar20 ^ uVar17 << 8;
    uVar20 = (uVar20 - uVar16) - uVar17 ^ uVar16 >> 0xd;
    uVar17 = (uVar17 - uVar20) - uVar16 ^ uVar20 >> 0xc;
    uVar16 = (uVar16 - uVar17) - uVar20 ^ uVar17 << 0x10;
    uVar20 = (uVar20 - uVar16) - uVar17 ^ uVar16 >> 5;
    uVar17 = (uVar17 - uVar20) - uVar16 ^ uVar20 >> 3;
    uVar16 = (uVar16 - uVar17) - uVar20 ^ uVar17 << 10;
    if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
      plVar18 = (longlong *)plVar12[8];
      if ((longlong *)plVar12[8] == (longlong *)0x0) {
        plVar18 = plVar12 + 7;
      }
      iVar8 = *(int *)((longlong)plVar18 +
                      (ulonglong)
                      ((int)plVar12[9] - 1U & ((uVar20 - uVar16) - uVar17 ^ uVar16 >> 0xf)) * 4);
      if (iVar8 != -1) {
        do {
          if (*(uint *)(*plVar12 + (longlong)iVar8 * 0xc) == uVar2) {
            if (5 < (byte)LogOnlineServices._0_1_) {
              pFVar13 = Online::ToLogString(&local_858,&param_1->SessionId);
              if ((pFVar13->Data).ArrayNum == 0) {
                pwVar21 = L"";
              }
              else {
                pwVar21 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
              }
              Online::ToLogString(&local_868,&param_1->LocalAccountId);
              local_2a8.Data = (FScriptContainerElement *)0x0;
              local_298 = Core::Private::GetConvertedLength
                                    ((wchar_t *)0x0,
                                     (uchar *)"UE::Online::FSessionsCommon::CheckState",0x27);
              uVar2 = local_298 + 1;
              uVar16 = uVar2;
              if (uVar2 < 0x81) {
                if (local_2a8.Data != (FScriptContainerElement *)0x0) {
                  uVar16 = 0;
                  goto LAB_14ee6f90f;
                }
              }
              else {
LAB_14ee6f90f:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_2a8,0,uVar16,2);
              }
              local_2a0 = local_3a8;
              if (local_2a8.Data != (FScriptContainerElement *)0x0) {
                local_2a0 = local_2a8.Data;
              }
              Core::Private::Convert
                        ((wchar_t *)local_2a0,uVar2,
                         (uchar *)"UE::Online::FSessionsCommon::CheckState",0x28);
              local_948 = (FScriptContainerElement *)pwVar21;
              Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
              if (local_2a8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2a8.Data);
              }
              if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_868.Data.AllocatorInstance.Data);
              }
              if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_858.Data.AllocatorInstance.Data);
              }
            }
            local_7f8.bIsSet = false;
            pFVar11 = Errors::AccessDenied(&local_6c0,&local_7f8);
            (__return_storage_ptr__->TypedValue).Details.Object = (pFVar11->Details).Object;
            (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
                 (pFVar11->Details).SharedReferenceCount.ReferenceController;
            pFVar3 = (pFVar11->Inner).Object;
            (pFVar11->Details).SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            (pFVar11->Details).Object = (IOnlineErrorDetails *)0x0;
            (__return_storage_ptr__->TypedValue).Inner.Object = pFVar3;
            (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
                 (pFVar11->Inner).SharedReferenceCount.ReferenceController;
            (pFVar11->Inner).SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            (pFVar11->Inner).Object = (FOnlineError *)0x0;
            (__return_storage_ptr__->TypedValue).ErrorCode = pFVar11->ErrorCode;
            __return_storage_ptr__->bIsSet = true;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_6c0.Inner.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_6c0.Details.SharedReferenceCount.ReferenceController);
            if (local_7f8.bIsSet != false) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_7f8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_7f8.TypedValue.Details.SharedReferenceCount.ReferenceController);
            }
            goto LAB_14ee70053;
          }
          iVar8 = *(int *)(*plVar12 + 4 + (longlong)iVar8 * 0xc);
        } while (iVar8 != -1);
      }
    }
    cVar7 = (**(code **)((longlong)*local_690 + 0x30))(local_690);
    if (cVar7 == '\0') {
      if (5 < (byte)LogOnlineServices._0_1_) {
        Online::ToLogString(&local_848,&param_1->SessionId);
        local_188.Data = (FScriptContainerElement *)0x0;
        local_178 = Core::Private::GetConvertedLength
                              ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",
                               0x27);
        uVar2 = local_178 + 1;
        uVar16 = uVar2;
        if (uVar2 < 0x81) {
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            uVar16 = 0;
            goto LAB_14ee6fa7f;
          }
        }
        else {
LAB_14ee6fa7f:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_188,0,uVar16,2);
        }
        local_180 = local_288;
        if (local_188.Data != (FScriptContainerElement *)0x0) {
          local_180 = local_188.Data;
        }
        Core::Private::Convert
                  ((wchar_t *)local_180,uVar2,(uchar *)"UE::Online::FSessionsCommon::CheckState",
                   0x28);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_188.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data);
        }
        if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_848.Data.AllocatorInstance.Data);
        }
      }
      local_7c8.bIsSet = false;
      pFVar11 = Errors::AccessDenied(&local_738,&local_7c8);
      (__return_storage_ptr__->TypedValue).Details.Object = (pFVar11->Details).Object;
      (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
           (pFVar11->Details).SharedReferenceCount.ReferenceController;
      pFVar3 = (pFVar11->Inner).Object;
      (pFVar11->Details).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar11->Details).Object = (IOnlineErrorDetails *)0x0;
      (__return_storage_ptr__->TypedValue).Inner.Object = pFVar3;
      (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
           (pFVar11->Inner).SharedReferenceCount.ReferenceController;
      (pFVar11->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      (pFVar11->Inner).Object = (FOnlineError *)0x0;
      (__return_storage_ptr__->TypedValue).ErrorCode = pFVar11->ErrorCode;
      __return_storage_ptr__->bIsSet = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_738.Inner.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_738.Details.SharedReferenceCount.ReferenceController);
      if (local_7c8.bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_7c8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_7c8.TypedValue.Details.SharedReferenceCount.ReferenceController);
      }
    }
    else {
      if (param_1->bPresenceEnabled != false) {
        puVar1 = &(this->LocalSessionsByName).field_0x10;
        local_8f0._padding_._0_4_ = 0;
        local_8f0._padding_._4_4_ = 1;
        local_8f0.UnvisitedBitMask = 0xffffffff;
        local_8f0.CurrentBitIndex = 0;
        local_8f0.BaseBitIndex = 0;
        local_8f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if (*(int *)&(this->LocalSessionsByName).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8f0);
        }
        TStack_8b0._padding_ = CONCAT44(local_8f0._padding_._4_4_,(undefined4)local_8f0._padding_);
        local_8f8 = *(int *)&(this->LocalSessionsByName).field_0x8 -
                    *(int *)&(this->LocalSessionsByName).field_0x34;
        TStack_8b0.CurrentBitIndex = local_8f0.CurrentBitIndex;
        TStack_8b0.UnvisitedBitMask = local_8f0.UnvisitedBitMask;
        uStack_900._4_4_ = local_8f0._28_4_;
        uStack_900._0_4_ = local_8f0.BaseBitIndex;
        iVar8 = *(int *)&(this->LocalSessionsByName).field_0x28;
        bVar15 = (byte)iVar8 & 0x1f;
        local_920._padding_ = CONCAT44(1 << bVar15,iVar8 >> 5);
        local_920.CurrentBitIndex = iVar8;
        local_920.UnvisitedBitMask = -1 << bVar15;
        local_920._24_8_ = CONCAT44(local_8f0.CurrentBitIndex,iVar8) & 0xffffffffffffffe0;
        uStack_890 = CONCAT44(uStack_8f4,local_8f8);
        TStack_8b0.Array = local_8f0.Array;
        local_920.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        local_8b8 = &this->LocalSessionsByName;
        TStack_8b0._24_8_ = uStack_900;
        if ((iVar8 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar6)) {
          pcVar14 = (code *)swi(3);
          pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
          return pTVar9;
        }
        if (iVar8 != *(int *)&(this->LocalSessionsByName).field_0x28) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_920);
        }
        local_760 = local_920._padding_;
        pTStack_758 = local_920.Array;
        local_750 = local_920.UnvisitedBitMask;
        iStack_74c = local_920.CurrentBitIndex;
        uVar5 = _local_750;
        uStack_748 = local_920._24_8_;
        iStack_74c = local_920.CurrentBitIndex;
        local_928 = local_920.Array;
        local_930 = iStack_74c;
        _local_750 = uVar5;
        while( true ) {
          pTVar4 = local_8b8;
          if (*(int *)&local_8b8->field_0x8 - *(int *)&local_8b8->field_0x34 != (int)uStack_890) {
            local_938[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_938);
          }
          lVar22 = (longlong)TStack_8b0.CurrentBitIndex;
          if (((TStack_8b0.CurrentBitIndex == local_930) && (TStack_8b0.Array == local_928)) &&
             (pTVar4 == &this->LocalSessionsByName)) goto LAB_14ee7004f;
          local_8c0 = *(longlong *)pTVar4;
          local_92c = (param_1->LocalAccountId).Value;
          (**(code **)(this->_padding_ + 0x20))(this,local_628,&local_92c);
          uVar19 = (ulonglong)local_5f8;
          if ((1 < uVar19) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar6)) {
            pcVar14 = (code *)swi(3);
            pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
            return pTVar9;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FGetMutableSessionById::Result,UE::Online::FGetMutableSessionById::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar19 + 4) != '\0') break;
          uVar19 = (ulonglong)local_5f8;
          if ((1 < local_5f8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar6)) {
            pcVar14 = (code *)swi(3);
            pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
            return pTVar9;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetPresenceSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19])(local_620);
          TStack_8b0.UnvisitedBitMask = TStack_8b0.UnvisitedBitMask & ~TStack_8b0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8b0);
        }
        if (5 < (byte)LogOnlineServices._0_1_) {
          ::FName::ToString((FName *)(local_8c0 + lVar22 * 0x14),&local_838);
          local_68.Data = (FScriptContainerElement *)0x0;
          local_58 = Core::Private::GetConvertedLength
                               ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",
                                0x27);
          uVar2 = local_58 + 1;
          uVar16 = uVar2;
          if (uVar2 < 0x81) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar16 = 0;
              goto LAB_14ee6fe65;
            }
          }
          else {
LAB_14ee6fe65:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar16,2);
          }
          local_60 = local_168;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            local_60 = local_68.Data;
          }
          Core::Private::Convert
                    ((wchar_t *)local_60,uVar2,(uchar *)"UE::Online::FSessionsCommon::CheckState",
                     0x28);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_838.Data.AllocatorInstance.Data);
          }
        }
        local_798.bIsSet = false;
        pFVar11 = Errors::InvalidState(&local_710,&local_798);
        (__return_storage_ptr__->TypedValue).Details.Object = (pFVar11->Details).Object;
        (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
             (pFVar11->Details).SharedReferenceCount.ReferenceController;
        pFVar3 = (pFVar11->Inner).Object;
        (pFVar11->Details).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar11->Details).Object = (IOnlineErrorDetails *)0x0;
        (__return_storage_ptr__->TypedValue).Inner.Object = pFVar3;
        (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
             (pFVar11->Inner).SharedReferenceCount.ReferenceController;
        (pFVar11->Inner).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar11->Inner).Object = (FOnlineError *)0x0;
        (__return_storage_ptr__->TypedValue).ErrorCode = pFVar11->ErrorCode;
        __return_storage_ptr__->bIsSet = true;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_710.Inner.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_710.Details.SharedReferenceCount.ReferenceController);
        if (local_798.bIsSet != false) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_798.TypedValue.Inner.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_798.TypedValue.Details.SharedReferenceCount.ReferenceController);
        }
        if ((1 < local_5f8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar14 = (code *)swi(3);
          pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
          return pTVar9;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetPresenceSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_5f8])(local_620);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_688);
        if ((1 < local_668) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar14 = (code *)swi(3);
          pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
          return pTVar9;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionById::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_668])(&local_690);
        if ((1 < local_630) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar14 = (code *)swi(3);
          pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
          return pTVar9;
        }
        pcVar14 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[local_630];
        goto LAB_14ee700da;
      }
LAB_14ee7004f:
      __return_storage_ptr__->bIsSet = false;
    }
LAB_14ee70053:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_688);
    if ((1 < local_668) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar14 = (code *)swi(3);
      pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
      return pTVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionById::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_668])(&local_690);
    if ((1 < local_630) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar14 = (code *)swi(3);
      pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
      return pTVar9;
    }
    pcVar14 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_630];
LAB_14ee700da:
    (*pcVar14)(local_658);
    return __return_storage_ptr__;
  }
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee6f53a;
  Online::ToLogString(&local_878,&param_1->SessionId);
  local_3c8.Data = (FScriptContainerElement *)0x0;
  local_3b8 = Core::Private::GetConvertedLength
                        ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x27);
  uVar2 = local_3b8 + 1;
  uVar16 = uVar2;
  if (uVar2 < 0x81) {
    if (local_3c8.Data != (FScriptContainerElement *)0x0) {
      uVar16 = 0;
      goto LAB_14ee6f4ba;
    }
  }
  else {
LAB_14ee6f4ba:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3c8,0,uVar16,2);
  }
  local_3c0 = local_4c8;
  if (local_3c8.Data != (FScriptContainerElement *)0x0) {
    local_3c0 = local_3c8.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_3c0,uVar2,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x28);
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data);
  }
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
LAB_14ee6f53a:
  uVar19 = (ulonglong)local_668;
  if ((1 < uVar19) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar14 = (code *)swi(3);
    pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
    return pTVar9;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar19 + 4) == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                         ,0x8c,
                         L"It is an error to call GetErrorValue() on a TResult that does not hold an error value. Please either check IsError() or use TryGetErrorValue"
                        ), bVar6)) {
    pcVar14 = (code *)swi(3);
    pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
    return pTVar9;
  }
  if ((local_668 != 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar6)) {
    pcVar14 = (code *)swi(3);
    pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
    return pTVar9;
  }
  (__return_storage_ptr__->TypedValue).Details.Object = local_690;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController = local_688;
  if (local_688 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_688->SharedReferenceCount = (atomic<int>)((int)local_688->SharedReferenceCount + 1);
    UNLOCK();
  }
  (__return_storage_ptr__->TypedValue).Inner.Object = local_680;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController = local_678;
  if (local_678 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_678->SharedReferenceCount = (atomic<int>)((int)local_678->SharedReferenceCount + 1);
    UNLOCK();
  }
  (__return_storage_ptr__->TypedValue).ErrorCode = local_670;
  __return_storage_ptr__->bIsSet = true;
  if ((1 < local_668) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar14 = (code *)swi(3);
    pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
    return pTVar9;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionById::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_668])(&local_690);
  if ((1 < local_630) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar14 = (code *)swi(3);
    pTVar9 = (TOptional<UE::Online::FOnlineError> *)(*pcVar14)();
    return pTVar9;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_630])(local_658);
  return __return_storage_ptr__;
}

// CheckState @ 14ee70120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckState
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<UE::Online::FOnlineError> *pTVar5;
  FOnlineError *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_228 [32];
  FName local_208;
  FString local_200;
  TOptional<UE::Online::FOnlineError> local_1f0;
  FOnlineError local_1c0;
  undefined1 local_198 [8];
  undefined1 local_190 [40];
  byte local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_208 = param_1->SessionName;
  (**(code **)(this->_padding_ + 8))(this,local_198,&local_208);
  uVar7 = (ulonglong)local_168;
  if ((1 < uVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) == '\0') {
    __return_storage_ptr__->bIsSet = false;
    if ((1 < local_168) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
      return pTVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_168])(local_190);
    return __return_storage_ptr__;
  }
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee702a1;
  ::FName::ToString(&param_1->SessionName,&local_200);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_48 = Core::Private::GetConvertedLength
                       ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x27);
  uVar1 = local_48 + 1;
  uVar8 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_14ee70223;
    }
  }
  else {
LAB_14ee70223:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar8,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x28);
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
LAB_14ee702a1:
  local_1f0.bIsSet = false;
  pFVar6 = Errors::InvalidState(&local_1c0,&local_1f0);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar6->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar6->Details).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar6->Inner).Object;
  (pFVar6->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = pFVar2;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar6->Inner).SharedReferenceCount.ReferenceController;
  (pFVar6->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar6->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.Details.SharedReferenceCount.ReferenceController);
  if (local_1f0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  if ((1 < local_168) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
    return pTVar5;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_168])(local_190);
  return __return_storage_ptr__;
}

// CheckState @ 14ee703d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckState
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  int iVar2;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>
  *pTVar3;
  FOnlineError *pFVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 auStack_1e8 [32];
  FString local_1c8;
  TOptional<UE::Online::FOnlineError> local_1b8;
  FOnlineError local_188;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pTVar3 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
           ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
                   *)&this->SessionInvitesUserMap,&param_1->LocalAccountId);
  if (pTVar3 == (TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>
                 *)0x0) {
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::ToLogString(&local_1c8,&param_1->LocalAccountId);
      local_58.Data = (FScriptContainerElement *)0x0;
      local_48 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x27);
      uVar1 = local_48 + 1;
      uVar5 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar5 = 0;
          goto LAB_14ee70667;
        }
      }
      else {
LAB_14ee70667:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar5,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x28);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
    local_1b8.bIsSet = false;
    pFVar4 = Errors::InvalidState(&local_188,&local_1b8);
    goto LAB_14ee706fa;
  }
  uVar1 = (param_1->SessionInviteId).Value;
  uVar8 = uVar1 & 0xffffff;
  uVar6 = (uVar1 >> 0x18) - uVar8 ^ uVar8 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - uVar8 ^ uVar6 << 8;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 0xc;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 << 0x10;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 << 10;
  if (*(int *)&pTVar3->field_0x8 != *(int *)&pTVar3->field_0x34) {
    puVar7 = *(undefined1 **)&pTVar3->field_0x40;
    if (*(undefined1 **)&pTVar3->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &pTVar3->field_0x38;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&pTVar3->field_0x48 - 1U &
                              ((uVar8 - uVar5) - uVar6 ^ uVar5 >> 0xf)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)((longlong)iVar2 * 0x20 + *(longlong *)pTVar3) == uVar1) {
          __return_storage_ptr__->bIsSet = false;
          return __return_storage_ptr__;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)pTVar3);
      } while (iVar2 != -1);
    }
  }
  if (5 < (byte)LogOnlineServices._0_1_) {
    Online::ToLogString(&local_1c8,&param_1->SessionInviteId);
    local_58.Data = (FScriptContainerElement *)0x0;
    local_48 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x27);
    uVar1 = local_48 + 1;
    uVar5 = uVar1;
    if (uVar1 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar5 = 0;
        goto LAB_14ee70560;
      }
    }
    else {
LAB_14ee70560:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar5,2);
    }
    local_50 = local_158;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x28);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  local_1b8.bIsSet = false;
  pFVar4 = Errors::NotFound(&local_188,&local_1b8);
LAB_14ee706fa:
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar4->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar4->Details).SharedReferenceCount.ReferenceController;
  (pFVar4->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = (pFVar4->Inner).Object;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar4->Inner).SharedReferenceCount.ReferenceController;
  (pFVar4->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar4->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar4->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.Details.SharedReferenceCount.ReferenceController);
  if (local_1b8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// CheckState @ 14ee70790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckState
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<UE::Online::FOnlineError> *pTVar5;
  FOnlineError *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_228 [32];
  FName local_208;
  FString local_200;
  TOptional<UE::Online::FOnlineError> local_1f0;
  FOnlineError local_1c0;
  undefined1 local_198 [8];
  undefined1 local_190 [40];
  byte local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_208 = param_1->SessionName;
  (**(code **)(this->_padding_ + 8))(this,local_198,&local_208);
  uVar7 = (ulonglong)local_168;
  if ((1 < uVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) == '\0') {
    __return_storage_ptr__->bIsSet = false;
    if ((1 < local_168) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
      return pTVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_168])(local_190);
    return __return_storage_ptr__;
  }
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee70911;
  ::FName::ToString(&param_1->SessionName,&local_200);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_48 = Core::Private::GetConvertedLength
                       ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x27);
  uVar1 = local_48 + 1;
  uVar8 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_14ee70893;
    }
  }
  else {
LAB_14ee70893:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar8,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x28);
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
LAB_14ee70911:
  local_1f0.bIsSet = false;
  pFVar6 = Errors::InvalidState(&local_1c0,&local_1f0);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar6->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar6->Details).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar6->Inner).Object;
  (pFVar6->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = pFVar2;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar6->Inner).SharedReferenceCount.ReferenceController;
  (pFVar6->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar6->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.Details.SharedReferenceCount.ReferenceController);
  if (local_1f0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  if ((1 < local_168) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
    return pTVar5;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_168])(local_190);
  return __return_storage_ptr__;
}

// CheckState @ 14ee70a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckState
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<UE::Online::FOnlineError> *pTVar5;
  FOnlineError *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_228 [32];
  FName local_208;
  FString local_200;
  TOptional<UE::Online::FOnlineError> local_1f0;
  FOnlineError local_1c0;
  undefined1 local_198 [8];
  undefined1 local_190 [40];
  byte local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_208 = param_1->SessionName;
  (**(code **)(this->_padding_ + 8))(this,local_198,&local_208);
  uVar7 = (ulonglong)local_168;
  if ((1 < uVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) == '\0') {
    __return_storage_ptr__->bIsSet = false;
    if ((1 < local_168) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
      return pTVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_168])(local_190);
    return __return_storage_ptr__;
  }
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee70bc1;
  ::FName::ToString(&param_1->SessionName,&local_200);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_48 = Core::Private::GetConvertedLength
                       ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x27);
  uVar1 = local_48 + 1;
  uVar8 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_14ee70b43;
    }
  }
  else {
LAB_14ee70b43:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar8,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x28);
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
LAB_14ee70bc1:
  local_1f0.bIsSet = false;
  pFVar6 = Errors::InvalidState(&local_1c0,&local_1f0);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar6->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar6->Details).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar6->Inner).Object;
  (pFVar6->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = pFVar2;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar6->Inner).SharedReferenceCount.ReferenceController;
  (pFVar6->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar6->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.Details.SharedReferenceCount.ReferenceController);
  if (local_1f0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  if ((1 < local_168) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
    return pTVar5;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_168])(local_190);
  return __return_storage_ptr__;
}

// CheckState @ 14ee70cf0

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckState
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  IOnlineErrorDetails *local_38;
  TReferenceControllerBase<1> *local_30;
  FOnlineError *local_28;
  TReferenceControllerBase<1> *local_20;
  ulong64 local_18;
  bool local_10;
  
  (**(code **)(this->_padding_ + 0x188))(this,&local_38);
  if (local_10 != false) {
    __return_storage_ptr__->bIsSet = local_10;
    (__return_storage_ptr__->TypedValue).Details.Object = local_38;
    (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController = local_30
    ;
    (__return_storage_ptr__->TypedValue).Inner.Object = local_28;
    (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController = local_20;
    (__return_storage_ptr__->TypedValue).ErrorCode = local_18;
    local_30 = (TReferenceControllerBase<1> *)0x0;
    local_38 = (IOnlineErrorDetails *)0x0;
    local_20 = (TReferenceControllerBase<1> *)0x0;
    local_28 = (FOnlineError *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// CheckState @ 14ee70d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Online::FOnlineError> * __thiscall
UE::Online::FSessionsCommon::CheckState
          (FSessionsCommon *this,TOptional<UE::Online::FOnlineError> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<UE::Online::FOnlineError> *pTVar5;
  FOnlineError *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_228 [32];
  FName local_208;
  FString local_200;
  TOptional<UE::Online::FOnlineError> local_1f0;
  FOnlineError local_1c0;
  undefined1 local_198 [8];
  undefined1 local_190 [40];
  byte local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_208 = param_1->SessionName;
  (**(code **)(this->_padding_ + 8))(this,local_198,&local_208);
  uVar7 = (ulonglong)local_168;
  if ((1 < uVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) == '\0') {
    __return_storage_ptr__->bIsSet = false;
    if ((1 < local_168) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
      return pTVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_168])(local_190);
    return __return_storage_ptr__;
  }
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee70f01;
  ::FName::ToString(&param_1->SessionName,&local_200);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_48 = Core::Private::GetConvertedLength
                       ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x27);
  uVar1 = local_48 + 1;
  uVar8 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_14ee70e83;
    }
  }
  else {
LAB_14ee70e83:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar8,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FSessionsCommon::CheckState",0x28);
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
LAB_14ee70f01:
  local_1f0.bIsSet = false;
  pFVar6 = Errors::InvalidState(&local_1c0,&local_1f0);
  (__return_storage_ptr__->TypedValue).Details.Object = (pFVar6->Details).Object;
  (__return_storage_ptr__->TypedValue).Details.SharedReferenceCount.ReferenceController =
       (pFVar6->Details).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar6->Inner).Object;
  (pFVar6->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Details).Object = (IOnlineErrorDetails *)0x0;
  (__return_storage_ptr__->TypedValue).Inner.Object = pFVar2;
  (__return_storage_ptr__->TypedValue).Inner.SharedReferenceCount.ReferenceController =
       (pFVar6->Inner).SharedReferenceCount.ReferenceController;
  (pFVar6->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Inner).Object = (FOnlineError *)0x0;
  (__return_storage_ptr__->TypedValue).ErrorCode = pFVar6->ErrorCode;
  __return_storage_ptr__->bIsSet = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.Details.SharedReferenceCount.ReferenceController);
  if (local_1f0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  if ((1 < local_168) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TOptional<UE::Online::FOnlineError> *)(*pcVar3)();
    return pTVar5;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_168])(local_190);
  return __return_storage_ptr__;
}

// ClearPresenceSession @ 14ee7bdf0

TOnlineResult<UE::Online::FClearPresenceSession> * __thiscall
UE::Online::FSessionsCommon::ClearPresenceSession
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FClearPresenceSession> *__return_storage_ptr__,Params *param_1)

{
  (**(code **)(this->_padding_ + 0xe0))();
  return __return_storage_ptr__;
}

// ClearPresenceSessionImpl @ 14ee7be20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FClearPresenceSession> * __thiscall
UE::Online::FSessionsCommon::ClearPresenceSessionImpl
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FClearPresenceSession> *__return_storage_ptr__,Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  FOnlineError *pFVar3;
  uint uVar4;
  undefined1 auStack_2f8 [32];
  TOptional<UE::Online::FOnlineError> local_2d8;
  FOnlineError local_2a8;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  if (((param_1->LocalAccountId).Value & 0xffffff) != 0) {
    TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
              *)&this->PresenceSessionsUserMap,&param_1->LocalAccountId);
    __return_storage_ptr__->field_0x30 = 0;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFClearPresenceSession_Online_UE___Online_UE__6B_;
    return __return_storage_ptr__;
  }
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ee7bfcb;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_48 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15)
  ;
  uVar1 = local_48 + 1;
  uVar4 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar4 = 0;
      goto LAB_14ee7beb0;
    }
  }
  else {
LAB_14ee7beb0:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar4,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)"Params.LocalAccountId",0x16);
  local_178.Data = (FScriptContainerElement *)0x0;
  local_168 = Core::Private::GetConvertedLength
                        ((wchar_t *)0x0,
                         (uchar *)"UE::Online::FSessionsCommon::ClearPresenceSessionImpl",0x35);
  uVar1 = local_168 + 1;
  uVar4 = uVar1;
  if (uVar1 < 0x81) {
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      uVar4 = 0;
      goto LAB_14ee7bf3b;
    }
  }
  else {
LAB_14ee7bf3b:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar4,2);
  }
  local_170 = local_278;
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    local_170 = local_178.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_170,uVar1,
             (uchar *)"UE::Online::FSessionsCommon::ClearPresenceSessionImpl",0x36);
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
LAB_14ee7bfcb:
  local_2d8.bIsSet = false;
  pFVar3 = Errors::InvalidParams(&local_2a8,&local_2d8);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FClearPresenceSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar3->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar3->Details).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar3->Inner).Object;
  (pFVar3->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar3->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar3->Inner).SharedReferenceCount.ReferenceController;
  (pFVar3->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar3->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar3->ErrorCode;
  __return_storage_ptr__->field_0x30 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFClearPresenceSession_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.Details.SharedReferenceCount.ReferenceController);
  if (local_2d8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// ClearSessionById @ 14ee7c0b0

void __thiscall
UE::Online::FSessionsCommon::ClearSessionById
          (FSessionsCommon *this,TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  TMap<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
  *pTVar1;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
  *pTVar6;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
  *pTVar7;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar8;
  bool bVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
  *pTVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_208;
  undefined1 local_207 [3];
  uint local_204;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
  *local_200;
  int iStack_1f8;
  uint uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *local_1f0;
  undefined4 uStack_1e8;
  int iStack_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  ulonglong local_1d0;
  TMap<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
  *local_1c8;
  int iStack_1c0;
  uint uStack_1bc;
  undefined1 *local_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
  *local_170;
  TMap<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined4 local_6c;
  undefined4 local_4c;
  
  iVar21 = 0;
  puVar16 = &(this->LocalSessionsByName).field_0x10;
  iVar4 = *(int *)&(this->LocalSessionsByName).field_0x28;
  pTVar1 = &this->LocalSessionsByName;
  local_1d0 = 1;
  iStack_1c0 = 0;
  local_1a8 = 0;
  uStack_1bc = 1;
  iStack_1ac = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->LocalSessionsByName).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar16;
    }
    uStack_1bc = *puVar20;
    local_1a8 = 0;
    while (uStack_1bc == 0) {
      lVar11 = (longlong)iStack_1c0;
      local_1a8 = local_1a8 + 0x20;
      iStack_1c0 = iStack_1c0 + 1;
      uStack_1bc = 1;
      iStack_1ac = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c0) goto LAB_14ee7c16d;
      uStack_1bc = puVar20[lVar11 + 1];
    }
    uStack_1bc = -uStack_1bc & uStack_1bc;
    uVar3 = (ulonglong)uStack_1bc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_198 = (int)lVar11;
    iStack_1ac = local_1a8 + -1 + local_198;
    if (iVar4 < iStack_1ac) {
      iStack_1ac = iVar4;
    }
  }
LAB_14ee7c16d:
  uVar15 = *(uint *)&(this->LocalSessionsByName).field_0x28;
  iStack_1a0 = *(int *)&(this->LocalSessionsByName).field_0x8 -
               *(int *)&(this->LocalSessionsByName).field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_160._padding_ = CONCAT44(uStack_1bc,iStack_1c0);
  uStack_1b0 = 0xffffffff;
  TStack_160.CurrentBitIndex = iStack_1ac;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_160._28_4_ = local_8c;
  TStack_160.BaseBitIndex = local_1a8;
  uStack_140 = CONCAT44(uStack_19c,iStack_1a0);
  local_1c8 = pTVar1;
  local_1b8 = puVar16;
  local_168 = pTVar1;
  TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar16;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = *(uint *)&(this->LocalSessionsByName).field_0x28;
  if (uVar15 != uVar19) {
    puVar18 = *(undefined1 **)&(this->LocalSessionsByName).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar16;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14ee7c290;
      uVar15 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_194 = (int)lVar11;
    uVar15 = local_194 + -1 + uVar14;
    if ((int)uVar19 < (int)uVar15) {
      uVar15 = uVar19;
    }
  }
LAB_14ee7c290:
  while( true ) {
    pTVar6 = local_168;
    if (*(int *)&local_168->field_0x8 - *(int *)&local_168->field_0x34 != (int)uStack_140) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_160.CurrentBitIndex == uVar15) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar16)) && (pTVar6 == pTVar1)
       ) break;
    if (*(uint *)(*(longlong *)pTVar6 + 8 + (longlong)TStack_160.CurrentBitIndex * 0x14) ==
        param_1->Value) {
      return;
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  }
  iStack_1f8 = 0;
  local_1e0 = 0;
  pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SessionInvitesUserMap).field_0x10;
  iVar4 = *(int *)&(this->SessionInvitesUserMap).field_0x28;
  pTVar22 = &this->SessionInvitesUserMap;
  uStack_1f4 = (uint)local_1d0;
  iStack_1e4 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->SessionInvitesUserMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)pTVar23;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_1f8;
      local_1e0 = local_1e0 + 0x20;
      iStack_1f8 = iStack_1f8 + 1;
      iStack_1e4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f8) goto LAB_14ee7c37e;
      uVar15 = puVar20[lVar11 + 1];
    }
    uStack_1f4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_1f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_190 = (int)lVar11;
    iStack_1e4 = local_1e0 + -1 + local_190;
    if (iVar4 < iStack_1e4) {
      iStack_1e4 = iVar4;
    }
  }
LAB_14ee7c37e:
  uVar15 = *(uint *)&(this->SessionInvitesUserMap).field_0x28;
  iStack_1dc = local_6c;
  iStack_1d8 = *(int *)&(this->SessionInvitesUserMap).field_0x8 -
               *(int *)&(this->SessionInvitesUserMap).field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  uStack_1e8 = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_1f4,iStack_1f8);
  TStack_100.CurrentBitIndex = iStack_1e4;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_100._28_4_ = local_6c;
  TStack_100.BaseBitIndex = local_1e0;
  uStack_e0 = CONCAT44(uStack_1d4,iStack_1d8);
  local_204 = uVar15;
  local_200 = pTVar22;
  local_1f0 = pTVar23;
  local_178 = pTVar23;
  local_170 = pTVar22;
  local_108 = pTVar22;
  TStack_100.Array = pTVar23;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = *(uint *)&(this->SessionInvitesUserMap).field_0x28;
  if (uVar15 != uVar19) {
    puVar16 = *(undefined1 **)&(this->SessionInvitesUserMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar23;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar19;
      local_204 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14ee7c4a1;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_18c = (int)lVar11;
    uVar15 = (uVar14 - 1) + local_18c;
    local_204 = uVar15;
    if ((int)uVar19 < (int)uVar15) {
      uVar15 = uVar19;
      local_204 = uVar19;
    }
  }
LAB_14ee7c4a1:
  while( true ) {
    pTVar7 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_100.CurrentBitIndex == uVar15) && (TStack_100.Array == pTVar23)) &&
       (pTVar7 == pTVar22)) break;
    iStack_1f8 = 0;
    lVar11 = (longlong)TStack_100.CurrentBitIndex * 0x60 + *(longlong *)pTVar7;
    local_1e0 = 0;
    iVar4 = *(int *)(lVar11 + 0x30);
    pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar11 + 0x18);
    pTVar22 = (TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
               *)(lVar11 + 8);
    uStack_1f4 = (uint)local_1d0;
    iStack_1e4 = 0;
    if (iVar4 != 0) {
      pTVar17 = pTVar23;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x28);
      }
      uVar15 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
      iStack_1f8 = 0;
      while (uVar15 == 0) {
        lVar12 = (longlong)iStack_1f8;
        local_1e0 = local_1e0 + 0x20;
        iStack_1f8 = iStack_1f8 + 1;
        iStack_1e4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f8) goto LAB_14ee7c56d;
        uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uStack_1f4 = -uVar15 & uVar15;
      uVar3 = (ulonglong)uStack_1f4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_188 = (int)lVar12;
      iStack_1e4 = local_1e0 + -1 + local_188;
      if (iVar4 < iStack_1e4) {
        iStack_1e4 = iVar4;
      }
    }
LAB_14ee7c56d:
    iStack_1dc = local_4c;
    iStack_1d8 = *(int *)(lVar11 + 0x10) - *(int *)(lVar11 + 0x3c);
    uVar15 = *(uint *)(lVar11 + 0x30);
    uVar14 = uVar15 & 0xffffffe0;
    TStack_130._padding_ = CONCAT44(uStack_1f4,iStack_1f8);
    uStack_1e8 = 0xffffffff;
    TStack_130.CurrentBitIndex = iStack_1e4;
    TStack_130.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar15 >> 5;
    TStack_130._28_4_ = local_4c;
    TStack_130.BaseBitIndex = local_1e0;
    uStack_110 = CONCAT44(uStack_1d4,iStack_1d8);
    local_200 = pTVar22;
    local_1f0 = pTVar23;
    local_138 = pTVar22;
    TStack_130.Array = pTVar23;
    if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar19 = *(uint *)(lVar11 + 0x30);
    if (uVar15 != uVar19) {
      pTVar17 = pTVar23;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x28);
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) &
               *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
      while (uVar15 == 0) {
        lVar11 = (longlong)iVar13;
        uVar14 = uVar14 + 0x20;
        iVar13 = iVar13 + 1;
        uVar15 = uVar19;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14ee7c680;
        uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_184 = (int)lVar11;
      uVar15 = (uVar14 - 1) + local_184;
      if ((int)uVar19 < (int)uVar15) {
        uVar15 = uVar19;
      }
    }
LAB_14ee7c680:
    while( true ) {
      pTVar7 = local_138;
      if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
        local_208 = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_208);
      }
      if (((TStack_130.CurrentBitIndex == uVar15) && (TStack_130.Array == pTVar23)) &&
         (pTVar7 == pTVar22)) break;
      if (*(uint *)(*(longlong *)
                     ((longlong)TStack_130.CurrentBitIndex * 0x20 + 8 + *(longlong *)pTVar7) + 0x14)
          == param_1->Value) {
        return;
      }
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
    pTVar22 = local_170;
    pTVar23 = local_178;
    uVar15 = local_204;
  }
  local_1e0 = 0;
  puVar16 = &(this->SearchResultsUserMap).field_0x10;
  iVar4 = *(int *)&(this->SearchResultsUserMap).field_0x28;
  pTVar2 = &this->SearchResultsUserMap;
  iStack_1e4 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->SearchResultsUserMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar16;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar21;
      local_1e0 = local_1e0 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_1e4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14ee7c792;
      uVar15 = puVar20[lVar11 + 1];
    }
    local_1d0 = (ulonglong)(-uVar15 & uVar15);
    uVar3 = local_1d0 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_180 = (int)lVar11;
    iStack_1e4 = local_1e0 + -1 + local_180;
    if (iVar4 < iStack_1e4) {
      iStack_1e4 = iVar4;
    }
  }
LAB_14ee7c792:
  uVar15 = *(uint *)&(this->SearchResultsUserMap).field_0x28;
  uStack_1f4 = (uint)local_1d0;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_1dc = iStack_1ac;
  iStack_1d8 = *(int *)&(this->SearchResultsUserMap).field_0x8 -
               *(int *)&(this->SearchResultsUserMap).field_0x34;
  uStack_1e8 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_1f4,iVar21);
  TStack_d0.CurrentBitIndex = iStack_1e4;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_d0._28_4_ = iStack_1ac;
  TStack_d0.BaseBitIndex = local_1e0;
  uStack_b0 = CONCAT44(uStack_1d4,iStack_1d8);
  local_200 = (TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
               *)pTVar2;
  iStack_1f8 = iVar21;
  local_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar16;
  local_d8 = pTVar2;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar16;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = *(uint *)&(this->SearchResultsUserMap).field_0x28;
  if (uVar15 != uVar19) {
    puVar18 = *(undefined1 **)&(this->SearchResultsUserMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar16;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14ee7c8b0;
      uVar15 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (uVar14 - 1) + (int)lVar11;
    if ((int)uVar19 < (int)uVar15) {
      uVar15 = uVar19;
    }
  }
LAB_14ee7c8b0:
  while( true ) {
    pTVar8 = local_d8;
    if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_207);
    }
    if (((TStack_d0.CurrentBitIndex == uVar15) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar16)) && (pTVar8 == pTVar2))
    break;
    lVar11 = (longlong)TStack_d0.CurrentBitIndex * 0x20 + *(longlong *)pTVar8;
    puVar10 = *(uint **)(lVar11 + 8);
    puVar20 = puVar10 + *(int *)(lVar11 + 0x10);
    if (puVar10 != puVar20) {
      do {
        if (*puVar10 == param_1->Value) {
          return;
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar20);
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  if (*(int *)&(this->AllSessionsById).field_0x8 != *(int *)&(this->AllSessionsById).field_0x34) {
    uVar15 = param_1->Value & 0xffffff;
    uVar19 = (param_1->Value >> 0x18) - uVar15 ^ uVar15 >> 0xd;
    uVar14 = (-0x61c88647 - uVar19) - uVar15 ^ uVar19 << 8;
    uVar15 = (uVar15 - uVar14) - uVar19 ^ uVar14 >> 0xd;
    uVar19 = (uVar19 - uVar15) - uVar14 ^ uVar15 >> 0xc;
    uVar14 = (uVar14 - uVar19) - uVar15 ^ uVar19 << 0x10;
    uVar15 = (uVar15 - uVar14) - uVar19 ^ uVar14 >> 5;
    uVar19 = (uVar19 - uVar15) - uVar14 ^ uVar15 >> 3;
    uVar14 = (uVar14 - uVar19) - uVar15 ^ uVar19 << 10;
    TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>
              ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
                *)&this->AllSessionsById,(uVar15 - uVar14) - uVar19 ^ uVar14 >> 0xf,param_1);
  }
  return;
}

// ClearSessionByName @ 14ee7ca00

void __thiscall
UE::Online::FSessionsCommon::ClearSessionByName(FSessionsCommon *this,FName *param_1)

{
  undefined1 *puVar1;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  FName *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  FName FVar7;
  code *pcVar8;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar9;
  bool bVar10;
  FName *pFVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  FName local_a8;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iStack_98 = 0;
  puVar1 = &(this->NamedSessionUserMap).field_0x10;
  iVar5 = *(int *)&(this->NamedSessionUserMap).field_0x28;
  pTVar2 = &this->NamedSessionUserMap;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(this->NamedSessionUserMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14ee7caad;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_94 = -uVar15 & uVar15;
    uVar4 = (ulonglong)uStack_94 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iStack_84 = local_res20 + -1 + local_80;
    if (iVar5 < iStack_84) {
      iStack_84 = iVar5;
    }
  }
LAB_14ee7caad:
  uVar15 = *(uint *)&(this->NamedSessionUserMap).field_0x28;
  iStack_78 = *(int *)&(this->NamedSessionUserMap).field_0x8 -
              *(int *)&(this->NamedSessionUserMap).field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->NamedSessionUserMap).field_0x28;
  if (uVar15 != uVar6) {
    puVar16 = *(undefined1 **)&(this->NamedSessionUserMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ee7cbb0;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_14ee7cbb0:
  while( true ) {
    pTVar9 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_68.CurrentBitIndex == uVar15) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    lVar12 = (longlong)TStack_68.CurrentBitIndex * 0x20 + *(longlong *)pTVar9;
    pFVar11 = *(FName **)(lVar12 + 8);
    pFVar3 = pFVar11 + *(int *)(lVar12 + 0x10);
    if (pFVar11 != pFVar3) {
      do {
        if (*pFVar11 == *param_1) {
          return;
        }
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != pFVar3);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  FVar7 = *param_1;
  if (*(int *)&(this->LocalSessionsByName).field_0x8 !=
      *(int *)&(this->LocalSessionsByName).field_0x34) {
    local_a8 = FVar7;
    uVar15 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    TSet<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
                         *)&this->LocalSessionsByName,FVar7.Number + uVar15,&local_a8);
  }
  return;
}

// ClearSessionInvitesForSession @ 14ee7cc80

void __thiscall
UE::Online::FSessionsCommon::ClearSessionInvitesForSession
          (FSessionsCommon *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
  *pTVar5;
  bool bVar6;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_b8;
  int local_b0;
  int iStack_ac;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  this_00 = (TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
             *)TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
               ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
                       *)&this->SessionInvitesUserMap,param_1);
  if (this_00 !=
      (TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
       *)0x0) {
    iStack_a0 = 0;
    local_88 = 0;
    puVar1 = &(this_00->Elements).field_0x10;
    local_b8.Data = (FScriptContainerElement *)0x0;
    uStack_9c = 1;
    local_b0 = 0;
    iStack_ac = 0;
    iVar3 = *(int *)&(this_00->Elements).field_0x28;
    iStack_8c = iStack_a0;
    if (iVar3 != 0) {
      puVar13 = *(uint **)&(this_00->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)puVar1;
      }
      uVar14 = *puVar13;
      local_88 = 0;
      iStack_a0 = 0;
      while (uVar14 == 0) {
        lVar7 = (longlong)iStack_a0;
        local_88 = local_88 + 0x20;
        iStack_a0 = iStack_a0 + 1;
        iStack_8c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14ee7cd5f;
        uVar14 = puVar13[lVar7 + 1];
      }
      uStack_9c = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_9c * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_78 = (int)lVar7;
      iStack_8c = local_88 + -1 + local_78;
      if (iVar3 < iStack_8c) {
        iStack_8c = iVar3;
      }
    }
LAB_14ee7cd5f:
    uVar14 = *(uint *)&(this_00->Elements).field_0x28;
    uVar15 = uVar14 & 0xffffffe0;
    iStack_80 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
    uStack_90 = 0xffffffff;
    TStack_68._padding_ = CONCAT44(uStack_9c,iStack_a0);
    TStack_68.CurrentBitIndex = iStack_8c;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar14 >> 5;
    TStack_68._28_4_ = iStack_8c;
    TStack_68.BaseBitIndex = local_88;
    uStack_48 = CONCAT44(uStack_7c,iStack_80);
    local_a8 = this_00;
    local_98 = puVar1;
    iStack_84 = iStack_8c;
    local_70 = this_00;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar11 = *(uint *)&(this_00->Elements).field_0x28;
    if (uVar14 != uVar11) {
      puVar12 = *(undefined1 **)&(this_00->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
      while (uVar14 == 0) {
        lVar7 = (longlong)iVar9;
        uVar15 = uVar15 + 0x20;
        iVar9 = iVar9 + 1;
        uVar14 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14ee7ce70;
        uVar14 = *(uint *)(puVar12 + lVar7 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_74 = (int)lVar7;
      uVar14 = local_74 + -1 + uVar15;
      if ((int)uVar11 < (int)uVar14) {
        uVar14 = uVar11;
      }
    }
LAB_14ee7ce70:
    while( true ) {
      pTVar5 = local_70;
      if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
          (int)uStack_48) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      iVar3 = local_b0;
      if (((TStack_68.CurrentBitIndex == uVar14) &&
          (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar5 == this_00)) break;
      pFVar10 = (FScriptContainerElement *)
                (*(longlong *)&pTVar5->Elements + (longlong)TStack_68.CurrentBitIndex * 0x20);
      if (*(uint *)(*(longlong *)(pFVar10 + 8) + 0x14) == param_2.Value) {
        if (((local_b8.Data <= pFVar10) && (pFVar10 < local_b8.Data + (longlong)iStack_ac * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_b0 == iStack_ac) {
          local_b0 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_b8,&iStack_ac);
        }
        lVar7 = (longlong)local_b0;
        local_b0 = local_b0 + 1;
        *(uint *)(local_b8.Data + lVar7 * 4) = *(uint *)pFVar10;
      }
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
    pFVar10 = local_b8.Data + (longlong)local_b0 * 4;
    FVar8.Data = local_b8.Data;
    while( true ) {
      if (local_b0 != iVar3) {
        `TCheckedPointerIterator<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (FVar8.Data == pFVar10) break;
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        uVar15 = *(uint *)FVar8.Data & 0xffffff;
        uVar11 = (*(uint *)FVar8.Data >> 0x18) - uVar15 ^ uVar15 >> 0xd;
        uVar14 = (-0x61c88647 - uVar11) - uVar15 ^ uVar11 << 8;
        uVar15 = (uVar15 - uVar14) - uVar11 ^ uVar14 >> 0xd;
        uVar11 = (uVar11 - uVar15) - uVar14 ^ uVar15 >> 0xc;
        uVar14 = (uVar14 - uVar11) - uVar15 ^ uVar11 << 0x10;
        uVar15 = (uVar15 - uVar14) - uVar11 ^ uVar14 >> 5;
        uVar11 = (uVar11 - uVar15) - uVar14 ^ uVar15 >> 3;
        uVar14 = (uVar14 - uVar11) - uVar15 ^ uVar11 << 10;
        TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>_>
                  (this_00,(uVar15 - uVar14) - uVar11 ^ uVar14 >> 0xf,
                   (TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite> *)FVar8.Data);
      }
      FVar8.Data = FVar8.Data + 4;
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  return;
}

// ClearSessionReferences @ 14ee7d070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FSessionsCommon::ClearSessionReferences
          (FSessionsCommon *this,TOnlineId<UE::Online::OnlineIdHandleTags::FSession> param_1,
          FName *param_2,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TOnlineId<UE::Online::OnlineIdHandleTags::FSession> local_res10 [6];
  undefined1 auStack_148 [32];
  FName *local_128;
  FName *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  uint local_f8 [2];
  FName *local_f0;
  uint local_e8;
  uint local_e4;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>
  *local_e0;
  FSessionsCommon *local_d8;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *local_d0;
  undefined1 local_c8 [8];
  char local_c0 [40];
  byte local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [40];
  byte local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_res10[0].Value = param_1.Value;
  local_f0 = param_2;
  local_d8 = this;
  local_d0 = param_3;
  pTVar5 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->NamedSessionUserMap,param_3);
  local_e0 = pTVar5;
  if (pTVar5 == (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = *(FName **)&pTVar5->field_0x8;
  if ((pFVar1 <= param_2) && (param_2 < pFVar1 + *(int *)&pTVar5->field_0x14)) {
    local_110 = (longlong)*(int *)&pTVar5->field_0x10;
    local_108 = 8;
    local_128 = param_2;
    local_120 = pFVar1;
    local_118 = (longlong)*(int *)&pTVar5->field_0x14;
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
  }
  pFVar1 = local_f0;
  lVar6 = (longlong)*(int *)&pTVar5->field_0x10;
  if (*(int *)&pTVar5->field_0x10 != 0) {
    pFVar2 = *(FName **)&pTVar5->field_0x8;
    iVar11 = 0;
    bVar4 = *pFVar2 != *local_f0;
    lVar7 = 0;
    iVar9 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar10 = iVar9 + 1;
      if (lVar7 < lVar6) {
        do {
          if (bVar4 != (pFVar2[lVar7] != *pFVar1)) break;
          iVar10 = iVar10 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar6);
      }
      if (bVar4 != false) {
        if (iVar11 != iVar9) {
          memmove(pFVar2 + iVar11,pFVar2 + iVar9,(longlong)(iVar10 - iVar9) << 3);
        }
        iVar11 = iVar11 + (iVar10 - iVar9);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar9 = iVar10;
    } while (lVar7 < lVar6);
    *(int *)&local_e0->field_0x10 = iVar11;
    this = local_d8;
    param_2 = local_f0;
    param_3 = local_d0;
  }
  local_e8 = param_3->Value;
  local_e4 = local_res10[0].Value;
  (**(code **)(this->_padding_ + 0x28))(this,local_c8,&local_e8);
  uVar8 = (ulonglong)local_98;
  if (1 < uVar8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FIsPresenceSession::Result,UE::Online::FIsPresenceSession::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) != '\0') {
    uVar8 = (ulonglong)local_98;
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FIsPresenceSession::Result,UE::Online::FIsPresenceSession::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsOk()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                         ,0x7e,
                         L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_98 != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_c0[0] != '\0') {
      local_f8[0] = param_3->Value;
      (**(code **)(this->_padding_ + 0xe0))(this,local_90,local_f8);
      if (1 < local_60) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FClearPresenceSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_60])(local_88);
    }
  }
  ClearSessionByName(this,param_2);
  ClearSessionById(this,local_res10);
  if (1 < local_98) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FIsPresenceSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_98])(local_c0);
  return;
}

// CreateSession @ 14ee9e980

TOnlineAsyncOpHandle<UE::Online::FCreateSession> * __thiscall
UE::Online::FSessionsCommon::CreateSession
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FCreateSession> *__return_storage_ptr__,Params *param_1)

{
  code *local_18;
  ulonglong uStack_10;
  
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = _vcall__232__flat______;
  ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>
            (this,__return_storage_ptr__,param_1,(pmf_5941892a *)&local_18,false);
  return __return_storage_ptr__;
}

// CreateSessionImpl @ 14ee9e9d0

TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> * __thiscall
UE::Online::FSessionsCommon::CreateSessionImpl
          (FSessionsCommon *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *__return_storage_ptr__,
          Params *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  TPromise<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *pTVar6;
  TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *pTVar7;
  TPromise<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> local_78;
  FOnlineError local_60;
  TOptional<UE::Online::FOnlineError> local_38;
  
  local_38.bIsSet = false;
  pFVar5 = Errors::NotImplemented(&local_60,&local_38);
  pTVar6 = MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::FCreateSession>,UE::Online::FOnlineError>
                     (&local_78,pFVar5);
  if (pTVar6->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pTVar1 = (pTVar6->State).Object;
  pTVar6->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  *(TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> **)__return_storage_ptr__ =
       (pTVar6->State).Object;
  pTVar2 = (pTVar6->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_78.State.Object !=
       (TFutureState<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)0x0) &&
     ((local_78.State.Object)->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FCreateSession>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Details.SharedReferenceCount.ReferenceController);
  if (local_38.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// FindSessions @ 14eed4eb0

TOnlineAsyncOpHandle<UE::Online::FFindSessions> * __thiscall
UE::Online::FSessionsCommon::FindSessions
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FFindSessions> *__return_storage_ptr__,Params *param_1)

{
  code *local_18;
  ulonglong uStack_10;
  
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = _vcall__416__flat______;
  ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>
            (this,__return_storage_ptr__,param_1,(pmf_94337950 *)&local_18,true);
  return __return_storage_ptr__;
}

// FindSessionsImpl @ 14eed4f00

TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> * __thiscall
UE::Online::FSessionsCommon::FindSessionsImpl
          (FSessionsCommon *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *__return_storage_ptr__,
          Params *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *pTVar6;
  TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *pTVar7;
  TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> local_78;
  FOnlineError local_60;
  TOptional<UE::Online::FOnlineError> local_38;
  
  local_38.bIsSet = false;
  pFVar5 = Errors::NotImplemented(&local_60,&local_38);
  pTVar6 = MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>,UE::Online::FOnlineError>
                     (&local_78,pFVar5);
  if (pTVar6->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pTVar1 = (pTVar6->State).Object;
  pTVar6->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  *(TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> **)__return_storage_ptr__ =
       (pTVar6->State).Object;
  pTVar2 = (pTVar6->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_78.State.Object !=
       (TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)0x0) &&
     ((local_78.State.Object)->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Details.SharedReferenceCount.ReferenceController);
  if (local_38.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetAllSessionInvites @ 14eed6cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FGetAllSessionInvites> * __thiscall
UE::Online::FSessionsCommon::GetAllSessionInvites
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FGetAllSessionInvites> *__return_storage_ptr__,Params *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FOnlineError *pFVar5;
  code *pcVar6;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>
  *pTVar7;
  bool bVar8;
  FOnlineError *pFVar9;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>
  *pTVar10;
  TOnlineResult<UE::Online::FGetAllSessionInvites> *pTVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 auStack_3c8 [32];
  undefined8 *local_3a8;
  FScriptContainerElement *local_3a0;
  longlong local_398;
  longlong local_390;
  undefined8 local_388;
  undefined1 local_378 [8];
  ForAnyElementType local_370;
  undefined8 local_368;
  undefined8 local_360;
  TReferenceControllerBase<1> *local_358;
  FOnlineError local_350;
  int iStack_328;
  undefined4 uStack_324;
  int local_320;
  int local_31c;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>
  *local_318;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>
  *local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_308;
  undefined8 uStack_2e8;
  TOptional<UE::Online::FOnlineError> local_2e0;
  undefined4 local_294;
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  if (((param_1->LocalAccountId).Value & 0xffffff) != 0) {
    local_370.Data = (FScriptContainerElement *)0x0;
    local_368._0_4_ = 0;
    local_368._4_4_ = 0;
    pTVar10 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
              ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
                      *)&this->SessionInvitesUserMap,&param_1->LocalAccountId);
    local_318 = pTVar10;
    if (pTVar10 !=
        (TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>
         *)0x0) {
      iVar3 = *(int *)&pTVar10->field_0x28;
      local_350.Details.SharedReferenceCount.ReferenceController._0_4_ = 0;
      local_350.Details.SharedReferenceCount.ReferenceController._4_4_ = 1;
      puVar1 = &pTVar10->field_0x10;
      local_350.Inner.SharedReferenceCount.ReferenceController._4_4_ =
           (int)local_350.Details.SharedReferenceCount.ReferenceController;
      local_350.ErrorCode._0_4_ = (int)local_350.Details.SharedReferenceCount.ReferenceController;
      if (iVar3 != 0) {
        puVar16 = *(uint **)&pTVar10->field_0x20;
        if (*(uint **)&pTVar10->field_0x20 == (uint *)0x0) {
          puVar16 = (uint *)puVar1;
        }
        uVar14 = *puVar16;
        local_350.ErrorCode._0_4_ = 0;
        local_350.Details.SharedReferenceCount.ReferenceController._0_4_ = 0;
        while (uVar14 == 0) {
          lVar12 = (longlong)(int)local_350.Details.SharedReferenceCount.ReferenceController;
          local_350.ErrorCode._0_4_ = (int)local_350.ErrorCode + 0x20;
          local_350.Details.SharedReferenceCount.ReferenceController._0_4_ =
               (int)local_350.Details.SharedReferenceCount.ReferenceController + 1;
          local_350.Inner.SharedReferenceCount.ReferenceController._4_4_ = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <
              (int)local_350.Details.SharedReferenceCount.ReferenceController) goto LAB_14eed6f9d;
          uVar14 = puVar16[lVar12 + 1];
        }
        local_350.Details.SharedReferenceCount.ReferenceController._4_4_ = -uVar14 & uVar14;
        uVar2 = (ulonglong)local_350.Details.SharedReferenceCount.ReferenceController._4_4_ * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_320 = (int)lVar12;
        local_350.Inner.SharedReferenceCount.ReferenceController._4_4_ =
             (int)local_350.ErrorCode + -1 + local_320;
        if (iVar3 < local_350.Inner.SharedReferenceCount.ReferenceController._4_4_) {
          local_350.Inner.SharedReferenceCount.ReferenceController._4_4_ = iVar3;
        }
      }
LAB_14eed6f9d:
      uVar14 = *(uint *)&pTVar10->field_0x28;
      local_350.ErrorCode._4_4_ = local_294;
      iStack_328 = *(int *)&pTVar10->field_0x8 - *(int *)&pTVar10->field_0x34;
      uVar17 = uVar14 & 0xffffffe0;
      local_350.Inner.SharedReferenceCount.ReferenceController._0_4_ = 0xffffffff;
      TStack_308._padding_ =
           CONCAT44(local_350.Details.SharedReferenceCount.ReferenceController._4_4_,
                    (int)local_350.Details.SharedReferenceCount.ReferenceController);
      TStack_308.CurrentBitIndex = local_350.Inner.SharedReferenceCount.ReferenceController._4_4_;
      TStack_308.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar14 >> 5;
      TStack_308._28_4_ = local_294;
      TStack_308.BaseBitIndex = (int)local_350.ErrorCode;
      uStack_2e8 = CONCAT44(uStack_324,iStack_328);
      local_350.Details.Object = (IOnlineErrorDetails *)pTVar10;
      local_350.Inner.Object = (FOnlineError *)puVar1;
      local_310 = pTVar10;
      TStack_308.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TOnlineResult<UE::Online::FGetAllSessionInvites> *)(*pcVar6)();
        return pTVar11;
      }
      pTVar7 = local_318;
      uVar4 = *(uint *)&pTVar10->field_0x28;
      if (uVar14 != uVar4) {
        puVar15 = *(undefined1 **)&pTVar10->field_0x20;
        if (*(undefined1 **)&pTVar10->field_0x20 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
        while (uVar14 == 0) {
          lVar12 = (longlong)iVar13;
          uVar17 = uVar17 + 0x20;
          iVar13 = iVar13 + 1;
          uVar14 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14eed70b0;
          uVar14 = *(uint *)(puVar15 + lVar12 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_31c = (int)lVar12;
        uVar14 = local_31c + -1 + uVar17;
        if ((int)uVar4 < (int)uVar14) {
          uVar14 = uVar4;
        }
      }
LAB_14eed70b0:
      while( true ) {
        pTVar10 = local_310;
        if (*(int *)&local_310->field_0x8 - *(int *)&local_310->field_0x34 != (int)uStack_2e8) {
          local_378[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_378);
        }
        if (((TStack_308.CurrentBitIndex == uVar14) &&
            (TStack_308.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar10 == pTVar7)) break;
        lVar12 = (longlong)TStack_308.CurrentBitIndex * 0x20 + *(longlong *)pTVar10;
        local_360 = *(undefined8 *)(lVar12 + 8);
        local_358 = *(TReferenceControllerBase<1> **)(lVar12 + 0x10);
        if (local_358 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_358->SharedReferenceCount = (atomic<int>)((int)local_358->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_370.Data <= (FScriptContainerElement *)&local_360) &&
           ((FScriptContainerElement *)&local_360 <
            local_370.Data + (longlong)local_368._4_4_ * 0x10)) {
          local_390 = (longlong)(int)local_368;
          local_388 = 0x10;
          local_3a8 = &local_360;
          local_3a0 = local_370.Data;
          local_398 = (longlong)local_368._4_4_;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            pTVar11 = (TOnlineResult<UE::Online::FGetAllSessionInvites> *)(*pcVar6)();
            return pTVar11;
          }
        }
        if ((int)local_368 == local_368._4_4_) {
          local_368._0_4_ =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_370,(int *)((longlong)&local_368 + 4));
        }
        lVar12 = (longlong)(int)local_368;
        local_368._0_4_ = (int)local_368 + 1;
        *(undefined8 *)(local_370.Data + lVar12 * 0x10) = local_360;
        *(TReferenceControllerBase<1> **)(local_370.Data + lVar12 * 0x10 + 8) = local_358;
        if (local_358 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_358->SharedReferenceCount = (atomic<int>)((int)local_358->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_358);
        TStack_308.UnvisitedBitMask = TStack_308.UnvisitedBitMask & ~TStack_308._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_308);
      }
    }
    *(FScriptContainerElement **)&__return_storage_ptr__->field_0x8 = local_370.Data;
    *(int *)&__return_storage_ptr__->field_0x10 = (int)local_368;
    *(int *)&__return_storage_ptr__->field_0x14 = local_368._4_4_;
    __return_storage_ptr__->field_0x30 = 0;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFGetAllSessionInvites_Online_UE___Online_UE__6B_;
    local_370.Data = (FScriptContainerElement *)0x0;
    local_368 = 0;
    DestructItems<TSharedRef<UE::Online::ISessionInvite_const_,1>,int>
              ((TSharedRef<UE::Online::ISessionInvite_const_,1> *)0x0,0);
    DestructItems<TSharedRef<UE::Online::ISessionInvite_const_,1>,int>
              ((TSharedRef<UE::Online::ISessionInvite_const_,1> *)local_370.Data,(int)local_368);
    if ((TSharedRef<UE::Online::ISessionInvite_const_,1> *)local_370.Data ==
        (TSharedRef<UE::Online::ISessionInvite_const_,1> *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_370.Data);
    return __return_storage_ptr__;
  }
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14eed6e42;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_58 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15)
  ;
  uVar14 = local_58 + 1;
  uVar17 = uVar14;
  if (uVar14 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar17 = 0;
      goto LAB_14eed6d37;
    }
  }
  else {
LAB_14eed6d37:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar17,2);
  }
  local_60 = local_168;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  Core::Private::Convert((wchar_t *)local_60,uVar14,(uchar *)"Params.LocalAccountId",0x16);
  local_188.Data = (FScriptContainerElement *)0x0;
  local_178 = Core::Private::GetConvertedLength
                        ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::GetAllSessionInvites"
                         ,0x31);
  uVar14 = local_178 + 1;
  uVar17 = uVar14;
  if (uVar14 < 0x81) {
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      uVar17 = 0;
      goto LAB_14eed6dc2;
    }
  }
  else {
LAB_14eed6dc2:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar17,2);
  }
  local_180 = local_288;
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    local_180 = local_188.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_180,uVar14,
             (uchar *)"UE::Online::FSessionsCommon::GetAllSessionInvites",0x32);
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
LAB_14eed6e42:
  local_2e0.bIsSet = false;
  pFVar9 = Errors::InvalidParams(&local_350,&local_2e0);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetAllSessionInvites_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar9->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar9->Details).SharedReferenceCount.ReferenceController;
  pFVar5 = (pFVar9->Inner).Object;
  (pFVar9->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar9->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar9->Inner).SharedReferenceCount.ReferenceController;
  (pFVar9->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar9->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar9->ErrorCode;
  __return_storage_ptr__->field_0x30 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetAllSessionInvites_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_350.Inner.SharedReferenceCount.ReferenceController._4_4_,
                      local_350.Inner.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_350.Details.SharedReferenceCount.ReferenceController._4_4_,
                      (int)local_350.Details.SharedReferenceCount.ReferenceController));
  if (local_2e0.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e0.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e0.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetAllSessions @ 14eed7290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FGetAllSessions> * __thiscall
UE::Online::FSessionsCommon::GetAllSessions
          (FSessionsCommon *this,TOnlineResult<UE::Online::FGetAllSessions> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FName *pFVar2;
  FOnlineError *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FOnlineError *pFVar8;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_> *pTVar10;
  TOnlineResult<UE::Online::FGetAllSessions> *pTVar11;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>
  *pTVar12;
  FName *pFVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  FScriptContainerElement *local_340;
  longlong local_338;
  longlong local_330;
  undefined8 local_328;
  undefined1 local_318 [8];
  ForAnyElementType local_310;
  undefined8 local_308;
  undefined8 local_300;
  TReferenceControllerBase<1> *local_2f8;
  TOnlineResult<UE::Online::FGetAllSessions> *local_2f0;
  TOptional<UE::Online::FOnlineError> local_2e8;
  FOnlineError local_2b8;
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_368;
  local_2f0 = __return_storage_ptr__;
  if (((param_1->LocalAccountId).Value & 0xffffff) != 0) {
    local_310.Data = (FScriptContainerElement *)0x0;
    local_308 = 0;
    pTVar9 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     *)&this->NamedSessionUserMap,&param_1->LocalAccountId);
    plVar15 = (longlong *)&pTVar9->field_0x8;
    if (pTVar9 == (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      plVar15 = (longlong *)0x0;
    }
    if (plVar15 != (longlong *)0x0) {
      pFVar13 = (FName *)*plVar15;
      lVar5 = plVar15[1];
      pFVar2 = pFVar13 + (int)lVar5;
      while( true ) {
        if ((int)plVar15[1] != (int)lVar5) {
          local_318[0] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_318);
        }
        __return_storage_ptr__ = local_2f0;
        if (pFVar13 == pFVar2) break;
        pTVar10 = TSet<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
                          *)&this->LocalSessionsByName,*pFVar13);
        if ((pTVar10 ==
             (TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_> *)0x0)
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TOnlineResult<UE::Online::FGetAllSessions> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar12 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
                          *)&this->AllSessionsById,
                         (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)&pTVar10->field_0x8)
        ;
        if ((pTVar12 ==
             (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>
              *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TOnlineResult<UE::Online::FGetAllSessions> *)(*pcVar4)();
          return pTVar11;
        }
        local_300 = *(undefined8 *)&pTVar12->field_0x8;
        local_2f8 = *(TReferenceControllerBase<1> **)&pTVar12->field_0x10;
        if (local_2f8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_2f8->SharedReferenceCount = (atomic<int>)((int)local_2f8->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (local_310.Data <= (FScriptContainerElement *)&local_300) {
          if ((FScriptContainerElement *)&local_300 <
              local_310.Data + (longlong)local_308._4_4_ * 0x10) {
            local_330 = (longlong)(int)local_308;
            local_328 = 0x10;
            local_348 = &local_300;
            local_340 = local_310.Data;
            local_338 = (longlong)local_308._4_4_;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TOnlineResult<UE::Online::FGetAllSessions> *)(*pcVar4)();
              return pTVar11;
            }
          }
        }
        iVar7 = (int)local_308;
        if ((int)local_308 == local_308._4_4_) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_310,(int *)((longlong)&local_308 + 4));
        }
        local_308 = CONCAT44(local_308._4_4_,iVar7 + 1);
        *(undefined8 *)(local_310.Data + (longlong)iVar7 * 0x10) = local_300;
        *(TReferenceControllerBase<1> **)(local_310.Data + (longlong)iVar7 * 0x10 + 8) = local_2f8;
        if (local_2f8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_2f8->SharedReferenceCount = (atomic<int>)((int)local_2f8->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2f8);
        pFVar13 = pFVar13 + 1;
      }
    }
    *(FScriptContainerElement **)&__return_storage_ptr__->field_0x8 = local_310.Data;
    *(int *)&__return_storage_ptr__->field_0x10 = (int)local_308;
    *(int *)&__return_storage_ptr__->field_0x14 = local_308._4_4_;
    __return_storage_ptr__->field_0x30 = 0;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFGetAllSessions_Online_UE___Online_UE__6B_;
    local_310.Data = (FScriptContainerElement *)0x0;
    local_308 = 0;
    DestructItems<TSharedRef<UE::Online::ISession_const_,1>,int>
              ((TSharedRef<UE::Online::ISession_const_,1> *)0x0,0);
    DestructItems<TSharedRef<UE::Online::ISession_const_,1>,int>
              ((TSharedRef<UE::Online::ISession_const_,1> *)local_310.Data,(int)local_308);
    if ((TSharedRef<UE::Online::ISession_const_,1> *)local_310.Data ==
        (TSharedRef<UE::Online::ISession_const_,1> *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_310.Data);
    return __return_storage_ptr__;
  }
  if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14eed742c;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_58 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15)
  ;
  uVar1 = local_58 + 1;
  uVar14 = uVar1;
  if (uVar1 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar14 = 0;
      goto LAB_14eed7321;
    }
  }
  else {
LAB_14eed7321:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar14,2);
  }
  local_60 = local_168;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  Core::Private::Convert((wchar_t *)local_60,uVar1,(uchar *)"Params.LocalAccountId",0x16);
  local_188.Data = (FScriptContainerElement *)0x0;
  local_178 = Core::Private::GetConvertedLength
                        ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::GetAllSessions",0x2b)
  ;
  uVar1 = local_178 + 1;
  uVar14 = uVar1;
  if (uVar1 < 0x81) {
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      uVar14 = 0;
      goto LAB_14eed73ac;
    }
  }
  else {
LAB_14eed73ac:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar14,2);
  }
  local_180 = local_288;
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    local_180 = local_188.Data;
  }
  Core::Private::Convert
            ((wchar_t *)local_180,uVar1,(uchar *)"UE::Online::FSessionsCommon::GetAllSessions",0x2c)
  ;
  Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
LAB_14eed742c:
  local_2e8.bIsSet = false;
  pFVar8 = Errors::InvalidParams(&local_2b8,&local_2e8);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetAllSessions_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar8->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar8->Details).SharedReferenceCount.ReferenceController;
  pFVar3 = (pFVar8->Inner).Object;
  (pFVar8->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar8->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar3;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar8->Inner).SharedReferenceCount.ReferenceController;
  (pFVar8->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar8->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar8->ErrorCode;
  __return_storage_ptr__->field_0x30 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetAllSessions_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8.Details.SharedReferenceCount.ReferenceController);
  if (local_2e8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetMutableSessionById @ 14eee0b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FGetMutableSessionById> * __thiscall
UE::Online::FSessionsCommon::GetMutableSessionById
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FGetMutableSessionById> *__return_storage_ptr__,Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  undefined8 uVar3;
  FOnlineError *pFVar4;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>
  *pTVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 auStack_308 [32];
  TOptional<UE::Online::FOnlineError> local_2e8;
  FOnlineError local_2b8;
  FString local_290;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_308;
  if (((param_1->SessionId).Value & 0xffffff) == 0) {
    if (5 < (byte)LogOnlineServices._0_1_) {
      local_178.Data = (FScriptContainerElement *)0x0;
      local_168 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.SessionId",0x10)
      ;
      uVar1 = local_168 + 1;
      uVar8 = uVar1;
      if (uVar1 < 0x81) {
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          uVar8 = 0;
          goto LAB_14eee0b99;
        }
      }
      else {
LAB_14eee0b99:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar8,2);
      }
      local_170 = local_278;
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        local_170 = local_178.Data;
      }
      Core::Private::Convert((wchar_t *)local_170,uVar1,(uchar *)"Params.SessionId",0x11);
      local_58.Data = (FScriptContainerElement *)0x0;
      local_48 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,
                            (uchar *)"UE::Online::FSessionsCommon::GetMutableSessionById",0x32);
      uVar1 = local_48 + 1;
      uVar8 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar8 = 0;
          goto LAB_14eee0c21;
        }
      }
      else {
LAB_14eee0c21:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar8,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_50,uVar1,
                 (uchar *)"UE::Online::FSessionsCommon::GetMutableSessionById",0x33);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
      }
    }
    local_2e8.bIsSet = false;
    pFVar4 = Errors::InvalidParams(&local_2b8,&local_2e8);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FGetMutableSessionById_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar4->Details).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         (pFVar4->Details).SharedReferenceCount.ReferenceController;
    pFVar2 = (pFVar4->Inner).Object;
    (pFVar4->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar4->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
         (pFVar4->Inner).SharedReferenceCount.ReferenceController;
    (pFVar4->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar4->Inner).Object = (FOnlineError *)0x0;
    uVar6 = pFVar4->ErrorCode;
  }
  else {
    pTVar5 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
                     *)&this->AllSessionsById,&param_1->SessionId);
    puVar7 = (undefined8 *)&pTVar5->field_0x8;
    if (pTVar5 == (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>
                   *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      uVar3 = *puVar7;
      local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)puVar7[1];
      if (local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController ==
          (TReferenceControllerBase<1> *)0x0) {
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        __return_storage_ptr__->field_0x30 = 0;
        *(undefined ***)__return_storage_ptr__ =
             &___7__TOnlineResult_UFGetMutableSessionById_Online_UE___Online_UE__6B_;
      }
      else {
        LOCK();
        (local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
        *(undefined ***)__return_storage_ptr__ =
             &
             ___7__TResult_UResult_FGetMutableSessionById_Online_UE__VFOnlineError_34__Online_UE__6B_
        ;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
        *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
             local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController;
        LOCK();
        (local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
        __return_storage_ptr__->field_0x30 = 0;
        *(undefined ***)__return_storage_ptr__ =
             &___7__TOnlineResult_UFGetMutableSessionById_Online_UE___Online_UE__6B_;
      }
      goto LAB_14eee0ee9;
    }
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::ToLogString(&local_290,&param_1->SessionId);
      local_178.Data = (FScriptContainerElement *)0x0;
      local_168 = Core::Private::GetConvertedLength
                            ((wchar_t *)0x0,
                             (uchar *)"UE::Online::FSessionsCommon::GetMutableSessionById",0x32);
      uVar1 = local_168 + 1;
      uVar8 = uVar1;
      if (uVar1 < 0x81) {
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          uVar8 = 0;
          goto LAB_14eee0ddc;
        }
      }
      else {
LAB_14eee0ddc:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar8,2);
      }
      local_170 = local_278;
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        local_170 = local_178.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_170,uVar1,
                 (uchar *)"UE::Online::FSessionsCommon::GetMutableSessionById",0x33);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
      }
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
    }
    local_2e8.bIsSet = false;
    pFVar4 = Errors::NotFound(&local_2b8,&local_2e8);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FGetMutableSessionById_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar4->Details).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         (pFVar4->Details).SharedReferenceCount.ReferenceController;
    pFVar2 = (pFVar4->Inner).Object;
    (pFVar4->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar4->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
         (pFVar4->Inner).SharedReferenceCount.ReferenceController;
    (pFVar4->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar4->Inner).Object = (FOnlineError *)0x0;
    uVar6 = pFVar4->ErrorCode;
  }
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = uVar6;
  __return_storage_ptr__->field_0x30 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetMutableSessionById_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8.Details.SharedReferenceCount.ReferenceController);
  if (local_2e8.bIsSet == false) {
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
LAB_14eee0ee9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetMutableSessionByName @ 14eee0f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FGetMutableSessionByName> * __thiscall
UE::Online::FSessionsCommon::GetMutableSessionByName
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FGetMutableSessionByName> *__return_storage_ptr__,
          Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FOnlineError *pFVar8;
  TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_> *pTVar9;
  TOnlineResult<UE::Online::FGetMutableSessionByName> *pTVar10;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>
  *pTVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *pTVar16;
  undefined1 auStack_478 [32];
  FString local_458;
  TOptional<UE::Online::FOnlineError> local_448;
  TOptional<UE::Online::FOnlineError> local_418;
  FOnlineError local_3e8;
  FOnlineError local_3c0;
  FScriptContainerElement local_398 [256];
  ForAnyElementType local_298;
  FScriptContainerElement *local_290;
  int local_288;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_478;
  if (param_1->LocalName != (FName)0x0) {
    pTVar9 = TSet<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
                     *)&this->LocalSessionsByName,param_1->LocalName);
    pTVar16 = (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)&pTVar9->field_0x8;
    if (pTVar9 == (TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_> *)
                  0x0) {
      pTVar16 = (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)0x0;
    }
    if (pTVar16 != (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)0x0) {
      uVar1 = pTVar16->Value;
      uVar15 = uVar1 & 0xffffff;
      uVar13 = (uVar1 >> 0x18) - uVar15 ^ uVar15 >> 0xd;
      uVar12 = (-0x61c88647 - uVar13) - uVar15 ^ uVar13 << 8;
      uVar15 = (uVar15 - uVar12) - uVar13 ^ uVar12 >> 0xd;
      uVar13 = (uVar13 - uVar15) - uVar12 ^ uVar15 >> 0xc;
      uVar12 = (uVar12 - uVar13) - uVar15 ^ uVar13 << 0x10;
      uVar15 = (uVar15 - uVar12) - uVar13 ^ uVar12 >> 5;
      uVar13 = (uVar13 - uVar15) - uVar12 ^ uVar15 >> 3;
      uVar12 = (uVar12 - uVar13) - uVar15 ^ uVar13 << 10;
      if (*(int *)&(this->AllSessionsById).field_0x8 != *(int *)&(this->AllSessionsById).field_0x34)
      {
        puVar14 = *(undefined1 **)&(this->AllSessionsById).field_0x40;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &(this->AllSessionsById).field_0x38;
        }
        iVar7 = *(int *)(puVar14 +
                        (ulonglong)
                        (*(int *)&(this->AllSessionsById).field_0x48 - 1U &
                        ((uVar15 - uVar12) - uVar13 ^ uVar12 >> 0xf)) * 4);
        if (iVar7 != -1) {
          lVar3 = *(longlong *)&(this->AllSessionsById).field_0x0;
          do {
            if (*(uint *)((longlong)iVar7 * 0x20 + lVar3) == uVar1) goto LAB_14eee1277;
            iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar3);
          } while (iVar7 != -1);
        }
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllSessionsById.Contains(*SessionId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Private\\Online\\SessionsCommon.cpp"
                         ,0x11c,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TOnlineResult<UE::Online::FGetMutableSessionByName> *)(*pcVar5)();
        return pTVar10;
      }
LAB_14eee1277:
      pTVar11 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
                        *)&this->AllSessionsById,pTVar16);
      if ((pTVar11 ==
           (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>
            *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TOnlineResult<UE::Online::FGetMutableSessionByName> *)(*pcVar5)();
        return pTVar10;
      }
      local_448.TypedValue.Details.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)&pTVar11->field_0x10;
      uVar4 = *(undefined8 *)&pTVar11->field_0x8;
      if (local_448.TypedValue.Details.SharedReferenceCount.ReferenceController ==
          (TReferenceControllerBase<1> *)0x0) {
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        __return_storage_ptr__->field_0x30 = 0;
        *(undefined ***)__return_storage_ptr__ =
             &___7__TOnlineResult_UFGetMutableSessionByName_Online_UE___Online_UE__6B_;
      }
      else {
        LOCK();
        (local_448.TypedValue.Details.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_448.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
        *(undefined ***)__return_storage_ptr__ =
             &
             ___7__TResult_UResult_FGetMutableSessionByName_Online_UE__VFOnlineError_34__Online_UE__6B_
        ;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
        *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
             local_448.TypedValue.Details.SharedReferenceCount.ReferenceController;
        LOCK();
        (local_448.TypedValue.Details.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_448.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
        __return_storage_ptr__->field_0x30 = 0;
        *(undefined ***)__return_storage_ptr__ =
             &___7__TOnlineResult_UFGetMutableSessionByName_Online_UE___Online_UE__6B_;
      }
      goto LAB_14eee147a;
    }
    if (5 < (byte)LogOnlineServices._0_1_) {
      ::FName::ToString(&param_1->LocalName,&local_458);
      local_58.Data = (FScriptContainerElement *)0x0;
      local_48 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,
                            (uchar *)"UE::Online::FSessionsCommon::GetMutableSessionByName",0x34);
      uVar1 = local_48 + 1;
      uVar12 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar12 = 0;
          goto LAB_14eee136e;
        }
      }
      else {
LAB_14eee136e:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_50,uVar1,
                 (uchar *)"UE::Online::FSessionsCommon::GetMutableSessionByName",0x35);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
    }
    local_418.bIsSet = false;
    pFVar8 = Errors::NotFound(&local_3c0,&local_418);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FGetMutableSessionByName_Online_UE__VFOnlineError_34__Online_UE__6B_
    ;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar8->Details).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         (pFVar8->Details).SharedReferenceCount.ReferenceController;
    pFVar2 = (pFVar8->Inner).Object;
    (pFVar8->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar8->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
         (pFVar8->Inner).SharedReferenceCount.ReferenceController;
    (pFVar8->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar8->Inner).Object = (FOnlineError *)0x0;
    *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar8->ErrorCode;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFGetMutableSessionByName_Online_UE___Online_UE__6B_;
    __return_storage_ptr__->field_0x30 = 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c0.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c0.Details.SharedReferenceCount.ReferenceController);
    if (local_418.bIsSet == false) {
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_418.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    local_448.TypedValue.Details.SharedReferenceCount.ReferenceController =
         local_418.TypedValue.Details.SharedReferenceCount.ReferenceController;
    goto LAB_14eee147a;
  }
  if (5 < (byte)LogOnlineServices._0_1_) {
    local_178.Data = (FScriptContainerElement *)0x0;
    local_168 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.LocalName",0x10);
    uVar1 = local_168 + 1;
    uVar12 = uVar1;
    if (uVar1 < 0x81) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14eee0fb0;
      }
    }
    else {
LAB_14eee0fb0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar12,2);
    }
    local_170 = local_278;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      local_170 = local_178.Data;
    }
    Core::Private::Convert((wchar_t *)local_170,uVar1,(uchar *)"Params.LocalName",0x11);
    local_298.Data = (FScriptContainerElement *)0x0;
    local_288 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,
                           (uchar *)"UE::Online::FSessionsCommon::GetMutableSessionByName",0x34);
    uVar1 = local_288 + 1;
    uVar12 = uVar1;
    if (uVar1 < 0x81) {
      if (local_298.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14eee103b;
      }
    }
    else {
LAB_14eee103b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_298,0,uVar12,2);
    }
    local_290 = local_398;
    if (local_298.Data != (FScriptContainerElement *)0x0) {
      local_290 = local_298.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_290,uVar1,
               (uchar *)"UE::Online::FSessionsCommon::GetMutableSessionByName",0x35);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    if (local_298.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data);
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
  }
  local_448.bIsSet = false;
  pFVar8 = Errors::InvalidParams(&local_3e8,&local_448);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetMutableSessionByName_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar8->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar8->Details).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar8->Inner).Object;
  (pFVar8->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar8->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar8->Inner).SharedReferenceCount.ReferenceController;
  (pFVar8->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar8->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar8->ErrorCode;
  __return_storage_ptr__->field_0x30 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetMutableSessionByName_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e8.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e8.Details.SharedReferenceCount.ReferenceController);
  if (local_448.bIsSet == false) {
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448.TypedValue.Inner.SharedReferenceCount.ReferenceController);
LAB_14eee147a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448.TypedValue.Details.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPresenceSession @ 14eee3940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FGetPresenceSession> * __thiscall
UE::Online::FSessionsCommon::GetPresenceSession
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FGetPresenceSession> *__return_storage_ptr__,Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  FOnlineError *pFVar6;
  TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *pTVar7;
  TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>
  *pTVar8;
  TOnlineResult<UE::Online::FGetPresenceSession> *pTVar9;
  uint uVar10;
  undefined1 auStack_478 [32];
  FString local_458;
  TOptional<UE::Online::FOnlineError> local_448;
  TOptional<UE::Online::FOnlineError> local_418;
  FOnlineError local_3e8;
  FOnlineError local_3c0;
  FScriptContainerElement local_398 [256];
  ForAnyElementType local_298;
  FScriptContainerElement *local_290;
  int local_288;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_478;
  if (((param_1->LocalAccountId).Value & 0xffffff) != 0) {
    pTVar7 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
             ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
                     *)&this->PresenceSessionsUserMap,&param_1->LocalAccountId);
    if (pTVar7 != (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)0x0) {
      pTVar8 = TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>,0>,FDefaultSetAllocator>
                       *)&this->AllSessionsById,pTVar7);
      if ((pTVar8 == (TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>
                      *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TOnlineResult<UE::Online::FGetPresenceSession> *)(*pcVar4)();
        return pTVar9;
      }
      local_448.TypedValue.Details.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)&pTVar8->field_0x10;
      uVar3 = *(undefined8 *)&pTVar8->field_0x8;
      if (local_448.TypedValue.Details.SharedReferenceCount.ReferenceController ==
          (TReferenceControllerBase<1> *)0x0) {
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        __return_storage_ptr__->field_0x30 = 0;
        *(undefined ***)__return_storage_ptr__ =
             &___7__TOnlineResult_UFGetPresenceSession_Online_UE___Online_UE__6B_;
      }
      else {
        LOCK();
        (local_448.TypedValue.Details.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_448.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
        *(undefined ***)__return_storage_ptr__ =
             &___7__TResult_UResult_FGetPresenceSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
        *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
             local_448.TypedValue.Details.SharedReferenceCount.ReferenceController;
        LOCK();
        (local_448.TypedValue.Details.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_448.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
        __return_storage_ptr__->field_0x30 = 0;
        *(undefined ***)__return_storage_ptr__ =
             &___7__TOnlineResult_UFGetPresenceSession_Online_UE___Online_UE__6B_;
      }
      goto LAB_14eee3d91;
    }
    if (5 < (byte)LogOnlineServices._0_1_) {
      Online::ToLogString(&local_458,&param_1->LocalAccountId);
      local_58.Data = (FScriptContainerElement *)0x0;
      local_48 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,
                            (uchar *)"UE::Online::FSessionsCommon::GetPresenceSession",0x2f);
      uVar1 = local_48 + 1;
      uVar10 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar10 = 0;
          goto LAB_14eee3c85;
        }
      }
      else {
LAB_14eee3c85:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar10,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_50,uVar1,
                 (uchar *)"UE::Online::FSessionsCommon::GetPresenceSession",0x30);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
    }
    local_418.bIsSet = false;
    pFVar6 = Errors::InvalidState(&local_3c0,&local_418);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FGetPresenceSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar6->Details).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         (pFVar6->Details).SharedReferenceCount.ReferenceController;
    pFVar2 = (pFVar6->Inner).Object;
    (pFVar6->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar6->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
         (pFVar6->Inner).SharedReferenceCount.ReferenceController;
    (pFVar6->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar6->Inner).Object = (FOnlineError *)0x0;
    *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar6->ErrorCode;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFGetPresenceSession_Online_UE___Online_UE__6B_;
    __return_storage_ptr__->field_0x30 = 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c0.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c0.Details.SharedReferenceCount.ReferenceController);
    if (local_418.bIsSet == false) {
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_418.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    local_448.TypedValue.Details.SharedReferenceCount.ReferenceController =
         local_418.TypedValue.Details.SharedReferenceCount.ReferenceController;
    goto LAB_14eee3d91;
  }
  if (5 < (byte)LogOnlineServices._0_1_) {
    local_178.Data = (FScriptContainerElement *)0x0;
    local_168 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
    uVar1 = local_168 + 1;
    uVar10 = uVar1;
    if (uVar1 < 0x81) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar10 = 0;
        goto LAB_14eee39cc;
      }
    }
    else {
LAB_14eee39cc:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar10,2);
    }
    local_170 = local_278;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      local_170 = local_178.Data;
    }
    Core::Private::Convert((wchar_t *)local_170,uVar1,(uchar *)"Params.LocalAccountId",0x16);
    local_298.Data = (FScriptContainerElement *)0x0;
    local_288 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::GetPresenceSession"
                           ,0x2f);
    uVar1 = local_288 + 1;
    uVar10 = uVar1;
    if (uVar1 < 0x81) {
      if (local_298.Data != (FScriptContainerElement *)0x0) {
        uVar10 = 0;
        goto LAB_14eee3a57;
      }
    }
    else {
LAB_14eee3a57:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_298,0,uVar10,2);
    }
    local_290 = local_398;
    if (local_298.Data != (FScriptContainerElement *)0x0) {
      local_290 = local_298.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_290,uVar1,(uchar *)"UE::Online::FSessionsCommon::GetPresenceSession"
               ,0x30);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    if (local_298.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data);
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
  }
  local_448.bIsSet = false;
  pFVar6 = Errors::InvalidParams(&local_3e8,&local_448);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetPresenceSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar6->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar6->Details).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar6->Inner).Object;
  (pFVar6->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar6->Inner).SharedReferenceCount.ReferenceController;
  (pFVar6->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar6->ErrorCode;
  __return_storage_ptr__->field_0x30 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetPresenceSession_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e8.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e8.Details.SharedReferenceCount.ReferenceController);
  if (local_448.bIsSet == false) {
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448.TypedValue.Inner.SharedReferenceCount.ReferenceController);
LAB_14eee3d91:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448.TypedValue.Details.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetSessionById @ 14eee45c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineResult<UE::Online::FGetSessionById> * __thiscall
UE::Online::FSessionsCommon::GetSessionById
          (FSessionsCommon *this,TOnlineResult<UE::Online::FGetSessionById> *__return_storage_ptr__,
          Params *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOnlineResult<UE::Online::FGetSessionById> *pTVar3;
  atomic<int> *paVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  Params local_68 [2];
  undefined1 local_60 [32];
  longlong local_40;
  undefined8 local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0].SessionId.Value =
       (TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)(param_1->SessionId).Value;
  GetMutableSessionById(this,(TOnlineResult<UE::Online::FGetMutableSessionById> *)local_60,local_68)
  ;
  uVar5 = (ulonglong)local_30;
  if (1 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOnlineResult<UE::Online::FGetSessionById> *)(*pcVar1)();
      return pTVar3;
    }
  }
  uVar6 = (ulonglong)local_30;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FGetMutableSessionById::Result,UE::Online::FGetMutableSessionById::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    if (1 < uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOnlineResult<UE::Online::FGetSessionById> *)(*pcVar1)();
        return pTVar3;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetMutableSessionById::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6) == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                         ,0x8c,
                         L"It is an error to call GetErrorValue() on a TResult that does not hold an error value. Please either check IsError() or use TryGetErrorValue"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOnlineResult<UE::Online::FGetSessionById> *)(*pcVar1)();
        return pTVar3;
      }
    }
    if (local_30 != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOnlineResult<UE::Online::FGetSessionById> *)(*pcVar1)();
        return pTVar3;
      }
    }
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FGetSessionById_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_60._8_8_;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_60._16_8_;
    if ((TReferenceControllerBase<1> *)local_60._16_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_60._16_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_60._16_8_ + 8) + 1);
      UNLOCK();
    }
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_60._24_8_;
    *(longlong *)&__return_storage_ptr__->field_0x20 = local_40;
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = local_38;
    __return_storage_ptr__->field_0x30 = 1;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFGetSessionById_Online_UE___Online_UE__6B_;
    if (1 < local_30) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOnlineResult<UE::Online::FGetSessionById> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetMutableSessionById::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_30])(local_60 + 8);
  }
  else {
    if (1 < uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOnlineResult<UE::Online::FGetSessionById> *)(*pcVar1)();
        return pTVar3;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FGetMutableSessionById::Result,UE::Online::FGetMutableSessionById::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6) == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsOk()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                         ,0x7e,
                         L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOnlineResult<UE::Online::FGetSessionById> *)(*pcVar1)();
        return pTVar3;
      }
    }
    if (local_30 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOnlineResult<UE::Online::FGetSessionById> *)(*pcVar1)();
        return pTVar3;
      }
    }
    if ((TReferenceControllerBase<1> *)local_60._16_8_ == (TReferenceControllerBase<1> *)0x0) {
      paVar4 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar4 = (atomic<int> *)(local_60._16_8_ + 8);
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FGetSessionById_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_60._8_8_;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_60._16_8_;
    if ((TReferenceControllerBase<1> *)local_60._16_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
    }
    __return_storage_ptr__->field_0x30 = 0;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFGetSessionById_Online_UE___Online_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_60._16_8_);
    if (1 < local_30) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOnlineResult<UE::Online::FGetSessionById> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetMutableSessionById::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_30])(local_60 + 8);
  }
  return __return_storage_ptr__;
}

// GetSessionByName @ 14eee48a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineResult<UE::Online::FGetSessionByName> * __thiscall
UE::Online::FSessionsCommon::GetSessionByName
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FGetSessionByName> *__return_storage_ptr__,Params *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSessionCommon *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOnlineResult<UE::Online::FGetSessionByName> *pTVar5;
  Result *pRVar6;
  FOnlineError *pFVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  FName local_68;
  TResult<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = param_1->LocalName;
  GetMutableSessionByName
            (this,(TOnlineResult<UE::Online::FGetMutableSessionByName> *)&local_60,
             (Params *)&local_68);
  uVar8 = (ulonglong)local_60.Storage.TypeIndex;
  if (1 < uVar8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOnlineResult<UE::Online::FGetSessionByName> *)(*pcVar3)();
      return pTVar5;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8 + 4) == '\0') {
    pFVar7 = TResult<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::
             GetErrorValue(&local_60);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FGetSessionByName_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar7->Details).Object;
    pTVar1 = (pFVar7->Details).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = (pFVar7->Inner).Object;
    pTVar1 = (pFVar7->Inner).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar7->ErrorCode;
    __return_storage_ptr__->field_0x30 = 1;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFGetSessionByName_Online_UE___Online_UE__6B_;
    if (1 < local_60.Storage.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TOnlineResult<UE::Online::FGetSessionByName> *)(*pcVar3)();
        return pTVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_60.Storage.TypeIndex])(&local_60.Storage);
  }
  else {
    pRVar6 = TResult<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::
             GetOkValue(&local_60);
    pTVar1 = (pRVar6->Session).SharedReferenceCount.ReferenceController;
    pFVar2 = (pRVar6->Session).Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      *(FSessionCommon **)&__return_storage_ptr__->field_0x8 = pFVar2;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      *(undefined ***)__return_storage_ptr__ =
           &___7__TResult_UResult_FGetSessionByName_Online_UE__VFOnlineError_34__Online_UE__6B_;
      *(FSessionCommon **)&__return_storage_ptr__->field_0x8 = pFVar2;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->field_0x30 = 0;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFGetSessionByName_Online_UE___Online_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (1 < local_60.Storage.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TOnlineResult<UE::Online::FGetSessionByName> *)(*pcVar3)();
        return pTVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_60.Storage.TypeIndex])(&local_60.Storage);
  }
  return __return_storage_ptr__;
}

// GetSessionInviteById @ 14eee4a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FGetSessionInviteById> * __thiscall
UE::Online::FSessionsCommon::GetSessionInviteById
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FGetSessionInviteById> *__return_storage_ptr__,Params *param_1)

{
  uint uVar1;
  FSessionInviteCommon *pFVar2;
  FOnlineError *pFVar3;
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>
  *this_00;
  TSharedRef<UE::Online::FSessionInviteCommon,1> *pTVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  undefined1 auStack_308 [32];
  TOptional<UE::Online::FOnlineError> local_2e8;
  FOnlineError local_2b8;
  FString local_290;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_308;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if (5 < (byte)LogOnlineServices._0_1_) {
      local_178.Data = (FScriptContainerElement *)0x0;
      local_168 = Core::Private::GetConvertedLength
                            ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
      uVar1 = local_168 + 1;
      uVar7 = uVar1;
      if (uVar1 < 0x81) {
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          uVar7 = 0;
          goto LAB_14eee4af9;
        }
      }
      else {
LAB_14eee4af9:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar7,2);
      }
      local_170 = local_278;
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        local_170 = local_178.Data;
      }
      Core::Private::Convert((wchar_t *)local_170,uVar1,(uchar *)"Params.LocalAccountId",0x16);
      local_58.Data = (FScriptContainerElement *)0x0;
      local_48 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,
                            (uchar *)"UE::Online::FSessionsCommon::GetSessionInviteById",0x31);
      uVar1 = local_48 + 1;
      uVar7 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar7 = 0;
          goto LAB_14eee4b81;
        }
      }
      else {
LAB_14eee4b81:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_50,uVar1,
                 (uchar *)"UE::Online::FSessionsCommon::GetSessionInviteById",0x32);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      FVar6.Data = local_178.Data;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
        FVar6.Data = local_178.Data;
      }
LAB_14eee4bfa:
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
    }
LAB_14eee4c04:
    local_2e8.bIsSet = false;
    pFVar3 = Errors::InvalidParams(&local_2b8,&local_2e8);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FGetSessionInviteById_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar3->Details).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         (pFVar3->Details).SharedReferenceCount.ReferenceController;
    (pFVar3->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar3->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = (pFVar3->Inner).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
         (pFVar3->Inner).SharedReferenceCount.ReferenceController;
    (pFVar3->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar3->Inner).Object = (FOnlineError *)0x0;
    uVar5 = pFVar3->ErrorCode;
  }
  else {
    if (((param_1->SessionInviteId).Value & 0xffffff) == 0) {
      if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14eee4c04;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_48 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,(uchar *)"Params.SessionInviteId",0x16);
      uVar1 = local_48 + 1;
      uVar7 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar7 = 0;
          goto LAB_14eee4cb5;
        }
      }
      else {
LAB_14eee4cb5:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)"Params.SessionInviteId",0x17);
      local_178.Data = (FScriptContainerElement *)0x0;
      local_168 = Core::Private::GetConvertedLength
                            ((wchar_t *)0x0,
                             (uchar *)"UE::Online::FSessionsCommon::GetSessionInviteById",0x31);
      uVar1 = local_168 + 1;
      uVar7 = uVar1;
      if (uVar1 < 0x81) {
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          uVar7 = 0;
          goto LAB_14eee4d40;
        }
      }
      else {
LAB_14eee4d40:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar7,2);
      }
      local_170 = local_278;
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        local_170 = local_178.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_170,uVar1,
                 (uchar *)"UE::Online::FSessionsCommon::GetSessionInviteById",0x32);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      FVar6.Data = local_58.Data;
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
        FVar6.Data = local_58.Data;
      }
      goto LAB_14eee4bfa;
    }
    this_00 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
              ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>,0>_>
                      *)&this->SessionInvitesUserMap,&param_1->LocalAccountId);
    if (this_00 ==
        (TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>
         *)0x0) {
      if (5 < (byte)LogOnlineServices._0_1_) {
        Online::ToLogString(&local_290,&param_1->LocalAccountId);
        local_178.Data = (FScriptContainerElement *)0x0;
        local_168 = Core::Private::GetConvertedLength
                              ((wchar_t *)0x0,
                               (uchar *)"UE::Online::FSessionsCommon::GetSessionInviteById",0x31);
        uVar1 = local_168 + 1;
        uVar7 = uVar1;
        if (uVar1 < 0x81) {
          if (local_178.Data != (FScriptContainerElement *)0x0) {
            uVar7 = 0;
            goto LAB_14eee4faf;
          }
        }
        else {
LAB_14eee4faf:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar7,2)
          ;
        }
        local_170 = local_278;
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          local_170 = local_178.Data;
        }
        Core::Private::Convert
                  ((wchar_t *)local_170,uVar1,
                   (uchar *)"UE::Online::FSessionsCommon::GetSessionInviteById",0x32);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data);
        }
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
      }
      local_2e8.bIsSet = false;
      pFVar3 = Errors::InvalidState(&local_2b8,&local_2e8);
    }
    else {
      pTVar4 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>
               ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>
                       *)this_00,&param_1->SessionInviteId);
      if (pTVar4 != (TSharedRef<UE::Online::FSessionInviteCommon,1> *)0x0) {
        local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController =
             (pTVar4->SharedReferenceCount).ReferenceController;
        pFVar2 = pTVar4->Object;
        if (local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController ==
            (TReferenceControllerBase<1> *)0x0) {
          *(FSessionInviteCommon **)&__return_storage_ptr__->field_0x8 = pFVar2;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          __return_storage_ptr__->field_0x30 = 0;
          *(undefined ***)__return_storage_ptr__ =
               &___7__TOnlineResult_UFGetSessionInviteById_Online_UE___Online_UE__6B_;
        }
        else {
          LOCK();
          (local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
          *(undefined ***)__return_storage_ptr__ =
               &
               ___7__TResult_UResult_FGetSessionInviteById_Online_UE__VFOnlineError_34__Online_UE__6B_
          ;
          *(FSessionInviteCommon **)&__return_storage_ptr__->field_0x8 = pFVar2;
          *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
               local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController;
          LOCK();
          (local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
          __return_storage_ptr__->field_0x30 = 0;
          *(undefined ***)__return_storage_ptr__ =
               &___7__TOnlineResult_UFGetSessionInviteById_Online_UE___Online_UE__6B_;
        }
        goto LAB_14eee50bd;
      }
      if (5 < (byte)LogOnlineServices._0_1_) {
        Online::ToLogString(&local_290,&param_1->SessionInviteId);
        local_178.Data = (FScriptContainerElement *)0x0;
        local_168 = Core::Private::GetConvertedLength
                              ((wchar_t *)0x0,
                               (uchar *)"UE::Online::FSessionsCommon::GetSessionInviteById",0x31);
        uVar1 = local_168 + 1;
        uVar7 = uVar1;
        if (uVar1 < 0x81) {
          if (local_178.Data != (FScriptContainerElement *)0x0) {
            uVar7 = 0;
            goto LAB_14eee4ea8;
          }
        }
        else {
LAB_14eee4ea8:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar7,2)
          ;
        }
        local_170 = local_278;
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          local_170 = local_178.Data;
        }
        Core::Private::Convert
                  ((wchar_t *)local_170,uVar1,
                   (uchar *)"UE::Online::FSessionsCommon::GetSessionInviteById",0x32);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data);
        }
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
      }
      local_2e8.bIsSet = false;
      pFVar3 = Errors::NotFound(&local_2b8,&local_2e8);
    }
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FGetSessionInviteById_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar3->Details).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
         (pFVar3->Details).SharedReferenceCount.ReferenceController;
    (pFVar3->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar3->Details).Object = (IOnlineErrorDetails *)0x0;
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = (pFVar3->Inner).Object;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
         (pFVar3->Inner).SharedReferenceCount.ReferenceController;
    (pFVar3->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (pFVar3->Inner).Object = (FOnlineError *)0x0;
    uVar5 = pFVar3->ErrorCode;
  }
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = uVar5;
  __return_storage_ptr__->field_0x30 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetSessionInviteById_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8.Details.SharedReferenceCount.ReferenceController);
  if (local_2e8.bIsSet == false) {
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
LAB_14eee50bd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetSessionName @ 14eee50f0

TOnlineResult<UE::Online::FGetSessionName> * __thiscall
UE::Online::FSessionsCommon::GetSessionName
          (FSessionsCommon *this,TOnlineResult<UE::Online::FGetSessionName> *__return_storage_ptr__,
          Params *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FOnlineError *pFVar5;
  FOnlineError *pFVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  undefined1 local_88 [12];
  uint uStack_7c;
  FOnlineError *local_78;
  FSharedReferencer<1> FStack_70;
  ulong64 local_68;
  TOptional<UE::Online::FOnlineError> local_60;
  
  local_88._0_8_ = &this->LocalSessionsByName;
  iVar3 = *(int *)&(this->LocalSessionsByName).field_0x28;
  local_78 = (FOnlineError *)&(this->LocalSessionsByName).field_0x10;
  local_60.TypedValue.Details.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_60.TypedValue.Details.SharedReferenceCount.ReferenceController._4_4_ = 1;
  local_60.TypedValue.ErrorCode._0_4_ =
       (int)local_60.TypedValue.Details.SharedReferenceCount.ReferenceController;
  local_60.TypedValue.Inner.SharedReferenceCount.ReferenceController._4_4_ = 0;
  if (iVar3 != 0) {
    puVar9 = *(uint **)&(this->LocalSessionsByName).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_78;
    }
    uVar4 = *puVar9;
    local_60.TypedValue.ErrorCode._0_4_ = 0;
    local_60.TypedValue.Details.SharedReferenceCount.ReferenceController._0_4_ = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)(int)local_60.TypedValue.Details.SharedReferenceCount.ReferenceController;
      local_60.TypedValue.ErrorCode._0_4_ = (int)local_60.TypedValue.ErrorCode + 0x20;
      local_60.TypedValue.Details.SharedReferenceCount.ReferenceController._0_4_ =
           (int)local_60.TypedValue.Details.SharedReferenceCount.ReferenceController + 1;
      local_60.TypedValue.Inner.SharedReferenceCount.ReferenceController._4_4_ = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <
          (int)local_60.TypedValue.Details.SharedReferenceCount.ReferenceController)
      goto LAB_14eee519c;
      uVar4 = puVar9[lVar7 + 1];
    }
    local_60.TypedValue.Details.SharedReferenceCount.ReferenceController._4_4_ = -uVar4 & uVar4;
    uVar2 = (ulonglong)local_60.TypedValue.Details.SharedReferenceCount.ReferenceController._4_4_ *
            2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_60.TypedValue.Inner.SharedReferenceCount.ReferenceController._4_4_ =
         (int)lVar7 + -1 + (int)local_60.TypedValue.ErrorCode;
    if (iVar3 < local_60.TypedValue.Inner.SharedReferenceCount.ReferenceController._4_4_) {
      local_60.TypedValue.Inner.SharedReferenceCount.ReferenceController._4_4_ = iVar3;
    }
  }
LAB_14eee519c:
  local_60.TypedValue.Inner.SharedReferenceCount.ReferenceController._0_4_ = 0xffffffff;
  local_60.TypedValue.ErrorCode._4_4_ = FStack_70.ReferenceController._4_4_;
  unique0x10000169 =
       (TReferenceControllerBase<1> *)
       CONCAT44(local_60.TypedValue.Details.SharedReferenceCount.ReferenceController._4_4_,
                (int)local_60.TypedValue.Details.SharedReferenceCount.ReferenceController);
  local_68 = CONCAT44(FStack_70.ReferenceController._4_4_,(int)local_60.TypedValue.ErrorCode);
  FStack_70.ReferenceController =
       (TReferenceControllerBase<1> *)
       CONCAT44(local_60.TypedValue.Inner.SharedReferenceCount.ReferenceController._4_4_,0xffffffff)
  ;
  local_60.TypedValue.Details.Object = (IOnlineErrorDetails *)local_88._0_8_;
  local_60.TypedValue.Inner.Object = local_78;
  iVar8 = local_60.TypedValue.Inner.SharedReferenceCount.ReferenceController._4_4_;
  if (local_60.TypedValue.Inner.SharedReferenceCount.ReferenceController._4_4_ < iVar3) {
    do {
      puVar1 = (undefined8 *)
               ((longlong)*(IOnlineErrorDetails *)local_88._0_8_ + (longlong)iVar8 * 0x14);
      if (*(uint *)(puVar1 + 1) == (param_1->SessionId).Value) {
        if (puVar1 != (undefined8 *)0x0) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = *puVar1;
          __return_storage_ptr__->field_0x30 = 0;
          *(undefined ***)__return_storage_ptr__ =
               &___7__TOnlineResult_UFGetSessionName_Online_UE___Online_UE__6B_;
          return __return_storage_ptr__;
        }
        break;
      }
      FStack_70.ReferenceController._0_4_ = (uint)FStack_70.ReferenceController & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_88 + 8));
      iVar8 = FStack_70.ReferenceController._4_4_;
    } while (FStack_70.ReferenceController._4_4_ <
             *(int *)&(local_78->Inner).SharedReferenceCount.ReferenceController);
  }
  local_60.bIsSet = false;
  pFVar6 = Errors::NotFound((FOnlineError *)local_88,&local_60);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetSessionName_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar6->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar6->Details).SharedReferenceCount.ReferenceController;
  pFVar5 = (pFVar6->Inner).Object;
  (pFVar6->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar6->Inner).SharedReferenceCount.ReferenceController;
  (pFVar6->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar6->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar6->ErrorCode;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetSessionName_Online_UE___Online_UE__6B_;
  __return_storage_ptr__->field_0x30 = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (stack0xffffffffffffff80);
  if (local_60.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_60.TypedValue.Inner.SharedReferenceCount.ReferenceController._4_4_,
                        local_60.TypedValue.Inner.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_60.TypedValue.Details.SharedReferenceCount.ReferenceController._4_4_,
                        (int)local_60.TypedValue.Details.SharedReferenceCount.ReferenceController));
  }
  return __return_storage_ptr__;
}

// Initialize @ 14eeede90

void __thiscall UE::Online::FSessionsCommon::Initialize(FSessionsCommon *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  longlong *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  lVar2 = this->_padding_;
  puVar1 = &this[-1].AllSessionsById.field_0x48;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)puVar1;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VISessions_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &this->_padding_;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0xd0))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014eeedf2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// IsPresenceSession @ 14eeef1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FIsPresenceSession> * __thiscall
UE::Online::FSessionsCommon::IsPresenceSession
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FIsPresenceSession> *__return_storage_ptr__,Params *param_1)

{
  uint uVar1;
  FOnlineError *pFVar2;
  TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *pTVar3;
  FOnlineError *pFVar4;
  ulong64 uVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  undefined1 auStack_308 [32];
  TOptional<UE::Online::FOnlineError> local_2e8;
  FOnlineError local_2b8;
  FString local_290;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_308;
  if (((param_1->LocalAccountId).Value & 0xffffff) == 0) {
    if (5 < (byte)LogOnlineServices._0_1_) {
      local_178.Data = (FScriptContainerElement *)0x0;
      local_168 = Core::Private::GetConvertedLength
                            ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
      uVar1 = local_168 + 1;
      uVar7 = uVar1;
      if (uVar1 < 0x81) {
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          uVar7 = 0;
          goto LAB_14eeef259;
        }
      }
      else {
LAB_14eeef259:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar7,2);
      }
      local_170 = local_278;
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        local_170 = local_178.Data;
      }
      Core::Private::Convert((wchar_t *)local_170,uVar1,(uchar *)"Params.LocalAccountId",0x16);
      local_58.Data = (FScriptContainerElement *)0x0;
      local_48 = Core::Private::GetConvertedLength
                           ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::IsPresenceSession"
                            ,0x2e);
      uVar1 = local_48 + 1;
      uVar7 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar7 = 0;
          goto LAB_14eeef2e1;
        }
      }
      else {
LAB_14eeef2e1:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      Core::Private::Convert
                ((wchar_t *)local_50,uVar1,(uchar *)"UE::Online::FSessionsCommon::IsPresenceSession"
                 ,0x2f);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      FVar6.Data = local_178.Data;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
        FVar6.Data = local_178.Data;
      }
      goto LAB_14eeef35a;
    }
  }
  else {
    uVar1 = (param_1->SessionId).Value;
    if ((uVar1 & 0xffffff) != 0) {
      pTVar3 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
               ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
                       *)&this->PresenceSessionsUserMap,&param_1->LocalAccountId);
      if (pTVar3 != (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)0x0) {
        __return_storage_ptr__->field_0x8 = uVar1 == pTVar3->Value;
        __return_storage_ptr__->field_0x30 = 0;
        *(undefined ***)__return_storage_ptr__ =
             &___7__TOnlineResult_UFIsPresenceSession_Online_UE___Online_UE__6B_;
        return __return_storage_ptr__;
      }
      if (5 < (byte)LogOnlineServices._0_1_) {
        Online::ToLogString(&local_290,&param_1->LocalAccountId);
        local_178.Data = (FScriptContainerElement *)0x0;
        local_168 = Core::Private::GetConvertedLength
                              ((wchar_t *)0x0,
                               (uchar *)"UE::Online::FSessionsCommon::IsPresenceSession",0x2e);
        uVar1 = local_168 + 1;
        uVar7 = uVar1;
        if (uVar1 < 0x81) {
          if (local_178.Data != (FScriptContainerElement *)0x0) {
            uVar7 = 0;
            goto LAB_14eeef5b9;
          }
        }
        else {
LAB_14eeef5b9:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar7,2)
          ;
        }
        local_170 = local_278;
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          local_170 = local_178.Data;
        }
        Core::Private::Convert
                  ((wchar_t *)local_170,uVar1,
                   (uchar *)"UE::Online::FSessionsCommon::IsPresenceSession",0x2f);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data);
        }
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
      }
      local_2e8.bIsSet = false;
      pFVar4 = Errors::InvalidState(&local_2b8,&local_2e8);
      *(undefined ***)__return_storage_ptr__ =
           &___7__TResult_UResult_FIsPresenceSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
      *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar4->Details).Object;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
           (pFVar4->Details).SharedReferenceCount.ReferenceController;
      pFVar2 = (pFVar4->Inner).Object;
      (pFVar4->Details).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar4->Details).Object = (IOnlineErrorDetails *)0x0;
      *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar2;
      *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
           (pFVar4->Inner).SharedReferenceCount.ReferenceController;
      (pFVar4->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (pFVar4->Inner).Object = (FOnlineError *)0x0;
      uVar5 = pFVar4->ErrorCode;
      goto LAB_14eeef68a;
    }
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14eeef364;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_48 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.SessionId",0x10);
    uVar1 = local_48 + 1;
    uVar7 = uVar1;
    if (uVar1 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar7 = 0;
        goto LAB_14eeef417;
      }
    }
    else {
LAB_14eeef417:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,2);
    }
    local_50 = local_158;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)"Params.SessionId",0x11);
    local_178.Data = (FScriptContainerElement *)0x0;
    local_168 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)"UE::Online::FSessionsCommon::IsPresenceSession",
                           0x2e);
    uVar1 = local_168 + 1;
    uVar7 = uVar1;
    if (uVar1 < 0x81) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar7 = 0;
        goto LAB_14eeef4a2;
      }
    }
    else {
LAB_14eeef4a2:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar7,2);
    }
    local_170 = local_278;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      local_170 = local_178.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_170,uVar1,(uchar *)"UE::Online::FSessionsCommon::IsPresenceSession",
               0x2f);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar6.Data = local_58.Data;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
      FVar6.Data = local_58.Data;
    }
LAB_14eeef35a:
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar6.Data);
    }
  }
LAB_14eeef364:
  local_2e8.bIsSet = false;
  pFVar2 = Errors::InvalidParams(&local_2b8,&local_2e8);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FIsPresenceSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar2->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = (pFVar2->Inner).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  uVar5 = pFVar2->ErrorCode;
LAB_14eeef68a:
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = uVar5;
  __return_storage_ptr__->field_0x30 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFIsPresenceSession_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8.Details.SharedReferenceCount.ReferenceController);
  if (local_2e8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// JoinSession @ 14eef0b00

TOnlineAsyncOpHandle<UE::Online::FJoinSession> * __thiscall
UE::Online::FSessionsCommon::JoinSession
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FJoinSession> *__return_storage_ptr__,Params *param_1)

{
  code *local_18;
  ulonglong uStack_10;
  
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = _vcall__432__flat______;
  ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>
            (this,__return_storage_ptr__,param_1,(pmf_0b8084c6 *)&local_18,false);
  return __return_storage_ptr__;
}

// JoinSessionImpl @ 14eef0b50

TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> * __thiscall
UE::Online::FSessionsCommon::JoinSessionImpl
          (FSessionsCommon *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *__return_storage_ptr__,
          Params *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  TPromise<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *pTVar6;
  TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *pTVar7;
  TPromise<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> local_78;
  FOnlineError local_60;
  TOptional<UE::Online::FOnlineError> local_38;
  
  local_38.bIsSet = false;
  pFVar5 = Errors::NotImplemented(&local_60,&local_38);
  pTVar6 = MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::FJoinSession>,UE::Online::FOnlineError>
                     (&local_78,pFVar5);
  if (pTVar6->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pTVar1 = (pTVar6->State).Object;
  pTVar6->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  *(TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> **)__return_storage_ptr__ =
       (pTVar6->State).Object;
  pTVar2 = (pTVar6->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_78.State.Object !=
       (TFutureState<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)0x0) &&
     ((local_78.State.Object)->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FJoinSession>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Details.SharedReferenceCount.ReferenceController);
  if (local_38.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// LeaveSession @ 14eef1010

TOnlineAsyncOpHandle<UE::Online::FLeaveSession> * __thiscall
UE::Online::FSessionsCommon::LeaveSession
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FLeaveSession> *__return_storage_ptr__,Params *param_1)

{
  code *local_18;
  ulonglong uStack_10;
  
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = _vcall__408__flat______;
  ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>
            (this,__return_storage_ptr__,param_1,(pmf_34791b70 *)&local_18,false);
  return __return_storage_ptr__;
}

// LeaveSessionImpl @ 14eef1060

TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> * __thiscall
UE::Online::FSessionsCommon::LeaveSessionImpl
          (FSessionsCommon *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *__return_storage_ptr__,
          Params *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  TPromise<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *pTVar6;
  TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *pTVar7;
  TPromise<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> local_78;
  FOnlineError local_60;
  TOptional<UE::Online::FOnlineError> local_38;
  
  local_38.bIsSet = false;
  pFVar5 = Errors::NotImplemented(&local_60,&local_38);
  pTVar6 = MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::FLeaveSession>,UE::Online::FOnlineError>
                     (&local_78,pFVar5);
  if (pTVar6->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pTVar1 = (pTVar6->State).Object;
  pTVar6->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  *(TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> **)__return_storage_ptr__ =
       (pTVar6->State).Object;
  pTVar2 = (pTVar6->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_78.State.Object !=
       (TFutureState<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)0x0) &&
     ((local_78.State.Object)->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Details.SharedReferenceCount.ReferenceController);
  if (local_38.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// OnSessionCreated @ 14eef2ee0

TOnlineEvent<void___cdecl(UE::Online::FSessionCreated_const_&)> __thiscall
UE::Online::FSessionsCommon::OnSessionCreated(FSessionsCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FSessionCreated_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FSessionCreated_const_&),FDefaultDelegateUserPolicy>
        *)&this->SessionEvents;
  return (TOnlineEvent<void___cdecl(UE::Online::FSessionCreated_const_&)>)in_RDX;
}

// OnSessionInviteReceived @ 14eef2f00

TOnlineEvent<void___cdecl(UE::Online::FSessionInviteReceived_const_&)> __thiscall
UE::Online::FSessionsCommon::OnSessionInviteReceived(FSessionsCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FSessionInviteReceived_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FSessionInviteReceived_const_&),FDefaultDelegateUserPolicy>
        *)&(this->SessionEvents).OnSessionInviteReceived;
  return (TOnlineEvent<void___cdecl(UE::Online::FSessionInviteReceived_const_&)>)in_RDX;
}

// OnSessionJoined @ 14eef2f20

TOnlineEvent<void___cdecl(UE::Online::FSessionJoined_const_&)> __thiscall
UE::Online::FSessionsCommon::OnSessionJoined(FSessionsCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FSessionJoined_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FSessionJoined_const_&),FDefaultDelegateUserPolicy>
        *)&(this->SessionEvents).OnSessionJoined;
  return (TOnlineEvent<void___cdecl(UE::Online::FSessionJoined_const_&)>)in_RDX;
}

// OnSessionLeft @ 14eef2f40

TOnlineEvent<void___cdecl(UE::Online::FSessionLeft_const_&)> __thiscall
UE::Online::FSessionsCommon::OnSessionLeft(FSessionsCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FSessionLeft_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FSessionLeft_const_&),FDefaultDelegateUserPolicy>
        *)&(this->SessionEvents).OnSessionLeft;
  return (TOnlineEvent<void___cdecl(UE::Online::FSessionLeft_const_&)>)in_RDX;
}

// OnSessionUpdated @ 14eef2f60

TOnlineEvent<void___cdecl(UE::Online::FSessionUpdated_const_&)> __thiscall
UE::Online::FSessionsCommon::OnSessionUpdated(FSessionsCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FSessionUpdated_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FSessionUpdated_const_&),FDefaultDelegateUserPolicy>
        *)&(this->SessionEvents).OnSessionUpdated;
  return (TOnlineEvent<void___cdecl(UE::Online::FSessionUpdated_const_&)>)in_RDX;
}

// OnUISessionJoinRequested @ 14eef2fa0

TOnlineEvent<void___cdecl(UE::Online::FUISessionJoinRequested_const_&)> __thiscall
UE::Online::FSessionsCommon::OnUISessionJoinRequested(FSessionsCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FUISessionJoinRequested_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FUISessionJoinRequested_const_&),FDefaultDelegateUserPolicy>
        *)&(this->SessionEvents).OnUISessionJoinRequested;
  return (TOnlineEvent<void___cdecl(UE::Online::FUISessionJoinRequested_const_&)>)in_RDX;
}

// RegisterCommands @ 14eefb2e0

void __thiscall UE::Online::FSessionsCommon::RegisterCommands(FSessionsCommon *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>_*_&>
  local_res8;
  undefined8 *local_res18;
  TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
  ***local_28;
  undefined8 **ppuStack_20;
  
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__0__flat______;
  puVar2 = (undefined8 *)0x0;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFGetAllSessions_Online_UE___23___QEAUParams_FGetAllSessions_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x15309ffc0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__8__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFGetSessionByName_Online_UE___23___QEAUParams_FGetSessionByName_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x15309ffe0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetSessionByName>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetSessionByName::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetSessionByName>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetSessionByName::Params_&&)const>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__16__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFGetSessionName_Online_UE___23___QEAUParams_FGetSessionName_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0008;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetSessionName>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetSessionName::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetSessionName>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetSessionName::Params_&&)const>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__24__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFGetSessionById_Online_UE___23___QEAUParams_FGetSessionById_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0028;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetSessionById>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetSessionById::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetSessionById>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetSessionById::Params_&&)const>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__32__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFGetPresenceSession_Online_UE___23___QEAUParams_FGetPresenceSession_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0048;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetPresenceSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetPresenceSession::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetPresenceSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetPresenceSession::Params_&&)const>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__40__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EBA_AV__TOnlineResult_UFIsPresenceSession_Online_UE___23___QEAUParams_FIsPresenceSession_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0070;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FIsPresenceSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FIsPresenceSession::Params_&&)const_>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FIsPresenceSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FIsPresenceSession::Params_&&)const>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__48__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFSetPresenceSession_Online_UE___23___QEAUParams_FSetPresenceSession_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0098;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FSetPresenceSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FSetPresenceSession::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FSetPresenceSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FSetPresenceSession::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__56__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFClearPresenceSession_Online_UE___23___QEAUParams_FClearPresenceSession_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a00c0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FClearPresenceSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FClearPresenceSession::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FClearPresenceSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FClearPresenceSession::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__64__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCreateSession_Online_UE___23___QEAUParams_FCreateSession_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a00f0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FCreateSession::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FCreateSession::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__72__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFUpdateSessionSettings_Online_UE___23___QEAUParams_FUpdateSessionSettings_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0110;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateSessionSettings>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FUpdateSessionSettings::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateSessionSettings>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FUpdateSessionSettings::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__80__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFLeaveSession_Online_UE___23___QEAUParams_FLeaveSession_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0140;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FLeaveSession::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FLeaveSession::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__88__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFFindSessions_Online_UE___23___QEAUParams_FFindSessions_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0160;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFindSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FFindSessions::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FFindSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FFindSessions::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__96__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFStartMatchmaking_Online_UE___23___QEAUParams_FStartMatchmaking_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0180;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FStartMatchmaking>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FStartMatchmaking::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FStartMatchmaking>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FStartMatchmaking::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__104__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFJoinSession_Online_UE___23___QEAUParams_FJoinSession_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a01a8;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FJoinSession::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinSession>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FJoinSession::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__112__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFAddSessionMember_Online_UE___23___QEAUParams_FAddSessionMember_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a01c0;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAddSessionMember>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FAddSessionMember::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FAddSessionMember>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FAddSessionMember::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__120__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFRemoveSessionMember_Online_UE___23___QEAUParams_FRemoveSessionMember_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a01e8;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FRemoveSessionMember>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FRemoveSessionMember::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FRemoveSessionMember>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FRemoveSessionMember::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__128__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFSendSessionInvite_Online_UE___23___QEAUParams_FSendSessionInvite_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0210;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FSendSessionInvite>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FSendSessionInvite::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FSendSessionInvite>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FSendSessionInvite::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__136__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFGetSessionInviteById_Online_UE___23___QEAUParams_FGetSessionInviteById_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0238;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetSessionInviteById>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetSessionInviteById::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetSessionInviteById>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetSessionInviteById::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__144__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  local_res18 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFGetAllSessionInvites_Online_UE___23___QEAUParams_FGetAllSessionInvites_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    local_res18 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0268;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessionInvites>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessionInvites::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessionInvites>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessionInvites::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  local_28 = (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
              ***)_vcall__152__flat______;
  ppuStack_20 = (undefined8 **)((ulonglong)ppuStack_20 & 0xffffffff00000000);
  puVar1 = ::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TOnlineInterfaceOperationExecHandler_VFSessionsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFRejectSessionInvite_Online_UE___23___QEAUParams_FRejectSessionInvite_23__Z_Online_UE__6B_
    ;
    puVar1[2] = local_28;
    puVar1[3] = ppuStack_20;
    puVar1[1] = this;
    puVar2 = puVar1;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineResult<UE::Online::FGetAllSessions>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FGetAllSessions::Params_&&)const>
        **)0x1530a0298;
  local_28 = &local_res8.Value;
  ppuStack_20 = &local_res18;
  local_res18 = puVar2;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FRejectSessionInvite>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FRejectSessionInvite::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FSessionsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FRejectSessionInvite>_(__cdecl_UE::Online::FSessionsCommon::*)(UE::Online::FRejectSessionInvite::Params_&&)>_*_&>
              *)&local_res8,(bool *)&local_28);
  return;
}

// RejectSessionInvite @ 14eefdfa0

TOnlineAsyncOpHandle<UE::Online::FRejectSessionInvite> * __thiscall
UE::Online::FSessionsCommon::RejectSessionInvite
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FRejectSessionInvite> *__return_storage_ptr__,
          Params *param_1)

{
  code *local_18;
  ulonglong uStack_10;
  
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = _vcall__464__flat______;
  ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>
            (this,__return_storage_ptr__,param_1,(pmf_8754921e *)&local_18,false);
  return __return_storage_ptr__;
}

// RejectSessionInviteImpl @ 14eefdff0

TFuture<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> * __thiscall
UE::Online::FSessionsCommon::RejectSessionInviteImpl
          (FSessionsCommon *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>
          *__return_storage_ptr__,Params *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  TPromise<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *pTVar6;
  TFuture<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *pTVar7;
  TPromise<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> local_78;
  FOnlineError local_60;
  TOptional<UE::Online::FOnlineError> local_38;
  
  local_38.bIsSet = false;
  pFVar5 = Errors::NotImplemented(&local_60,&local_38);
  pTVar6 = MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>,UE::Online::FOnlineError>
                     (&local_78,pFVar5);
  if (pTVar6->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pTVar1 = (pTVar6->State).Object;
  pTVar6->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  *(TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> **)
   __return_storage_ptr__ = (pTVar6->State).Object;
  pTVar2 = (pTVar6->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_78.State.Object !=
       (TFutureState<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *)0x0) &&
     ((local_78.State.Object)->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Details.SharedReferenceCount.ReferenceController);
  if (local_38.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// RemoveSessionMember @ 14eefe570

TOnlineAsyncOpHandle<UE::Online::FRemoveSessionMember> * __thiscall
UE::Online::FSessionsCommon::RemoveSessionMember
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FRemoveSessionMember> *__return_storage_ptr__,
          Params *param_1)

{
  code *local_18;
  ulonglong uStack_10;
  
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = _vcall__448__flat______;
  ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>
            (this,__return_storage_ptr__,param_1,(pmf_6bf71a86 *)&local_18,false);
  return __return_storage_ptr__;
}

// RemoveSessionMemberImpl @ 14eefe5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFuture<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> * __thiscall
UE::Online::FSessionsCommon::RemoveSessionMemberImpl
          (FSessionsCommon *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>
          *__return_storage_ptr__,Params *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  TFuture<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *pTVar5;
  TOnlineResult<UE::Online::FRemoveSessionMember> *pTVar6;
  FFutureState *this_00;
  undefined1 auStack_88 [32];
  TOnlineResult<UE::Online::FRemoveSessionMember> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar3 = ::operator_new(0xc0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    this_00 = (FFutureState *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *(undefined8 *)__return_storage_ptr__ = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TOnlineResult_UFRemoveSessionMember_Online_UE___Online_UE_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    pTVar3[4]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this_00 = (FFutureState *)(pTVar3 + 1);
    pTVar3[7]._padding_ = (longlong)pFVar4;
    *(undefined1 *)&pTVar3[7].SharedReferenceCount = 0;
    if (this_00 == (FFutureState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (this_00 == (FFutureState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
    *(FFutureState **)__return_storage_ptr__ = this_00;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = RemoveSessionMemberInternal(this,&local_68,param_1);
  if (this_00 == (FFutureState *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *)(*pcVar1)();
      return pTVar5;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (this_00->bComplete != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  this_00[1].Mutex.CriticalSection.Opaque1[0] =
       &___7__TResult_UResult_FRemoveSessionMember_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>
            ((TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> *)
             this_00[1].Mutex.CriticalSection.Opaque2,
             (TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> *)
             &pTVar6->field_0x8);
  this_00[1].Mutex.CriticalSection.Opaque1[0] =
       &___7__TOnlineResult_UFRemoveSessionMember_Online_UE___Online_UE__6B_;
  FFutureState::MarkComplete(this_00);
  if (1 < (byte)local_68._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x8);
  if ((this_00 != (FFutureState *)0x0) && (this_00->bComplete == (TAtomic<bool>)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// RemoveSessionMemberInternal @ 14eefe850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineResult<UE::Online::FRemoveSessionMember> * __thiscall
UE::Online::FSessionsCommon::RemoveSessionMemberInternal
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FRemoveSessionMember> *__return_storage_ptr__,Params *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSessionCommon *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOnlineResult<UE::Online::FRemoveSessionMember> *pTVar5;
  FOnlineError *pFVar6;
  Result *pRVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  FName local_68;
  TResult<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = param_1->SessionName;
  GetMutableSessionByName
            (this,(TOnlineResult<UE::Online::FGetMutableSessionByName> *)&local_60,
             (Params *)&local_68);
  uVar8 = (ulonglong)local_60.Storage.TypeIndex;
  if (1 < uVar8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOnlineResult<UE::Online::FRemoveSessionMember> *)(*pcVar3)();
      return pTVar5;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FOnlineError,UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    pRVar7 = TResult<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::
             GetOkValue(&local_60);
    pTVar1 = (pRVar7->Session).SharedReferenceCount.ReferenceController;
    pFVar2 = (pRVar7->Session).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
    ::Remove(&pFVar2->SessionMembers,&param_1->LocalAccountId);
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFRemoveSessionMember_Online_UE___Online_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (1 < local_60.Storage.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TOnlineResult<UE::Online::FRemoveSessionMember> *)(*pcVar3)();
        return pTVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_60.Storage.TypeIndex])(&local_60.Storage);
  }
  else {
    pFVar6 = TResult<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::
             GetErrorValue(&local_60);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TResult_UResult_FRemoveSessionMember_Online_UE__VFOnlineError_34__Online_UE__6B_;
    *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar6->Details).Object;
    pTVar1 = (pFVar6->Details).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FOnlineError **)&__return_storage_ptr__->field_0x18 = (pFVar6->Inner).Object;
    pTVar1 = (pFVar6->Inner).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar6->ErrorCode;
    __return_storage_ptr__->field_0x30 = 1;
    *(undefined ***)__return_storage_ptr__ =
         &___7__TOnlineResult_UFRemoveSessionMember_Online_UE___Online_UE__6B_;
    if (1 < local_60.Storage.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TOnlineResult<UE::Online::FRemoveSessionMember> *)(*pcVar3)();
        return pTVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FGetMutableSessionByName::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_60.Storage.TypeIndex])(&local_60.Storage);
  }
  return __return_storage_ptr__;
}

// SendSessionInvite @ 14eefeea0

TOnlineAsyncOpHandle<UE::Online::FSendSessionInvite> * __thiscall
UE::Online::FSessionsCommon::SendSessionInvite
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FSendSessionInvite> *__return_storage_ptr__,
          Params *param_1)

{
  code *local_18;
  ulonglong uStack_10;
  
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = _vcall__456__flat______;
  ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>
            (this,__return_storage_ptr__,param_1,(pmf_00a64fb0 *)&local_18,false);
  return __return_storage_ptr__;
}

// SendSessionInviteImpl @ 14eefeef0

TFuture<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> * __thiscall
UE::Online::FSessionsCommon::SendSessionInviteImpl
          (FSessionsCommon *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>
          *__return_storage_ptr__,Params *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  TPromise<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *pTVar6;
  TFuture<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *pTVar7;
  TPromise<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> local_78;
  FOnlineError local_60;
  TOptional<UE::Online::FOnlineError> local_38;
  
  local_38.bIsSet = false;
  pFVar5 = Errors::NotImplemented(&local_60,&local_38);
  pTVar6 = MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>,UE::Online::FOnlineError>
                     (&local_78,pFVar5);
  if (pTVar6->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pTVar1 = (pTVar6->State).Object;
  pTVar6->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  *(TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> **)
   __return_storage_ptr__ = (pTVar6->State).Object;
  pTVar2 = (pTVar6->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_78.State.Object !=
       (TFutureState<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *)0x0) &&
     ((local_78.State.Object)->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Details.SharedReferenceCount.ReferenceController);
  if (local_38.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// SetPresenceSession @ 14ef05d40

TOnlineResult<UE::Online::FSetPresenceSession> * __thiscall
UE::Online::FSessionsCommon::SetPresenceSession
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FSetPresenceSession> *__return_storage_ptr__,Params *param_1)

{
  (**(code **)(this->_padding_ + 0xd8))();
  return __return_storage_ptr__;
}

// SetPresenceSessionImpl @ 14ef05d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineResult<UE::Online::FSetPresenceSession> * __thiscall
UE::Online::FSessionsCommon::SetPresenceSessionImpl
          (FSessionsCommon *this,
          TOnlineResult<UE::Online::FSetPresenceSession> *__return_storage_ptr__,Params *param_1)

{
  FOnlineError *pFVar1;
  TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *pTVar2;
  uint uVar3;
  ForAnyElementType FVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_2f8 [32];
  TOptional<UE::Online::FOnlineError> local_2d8;
  FOnlineError local_2a8;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  uVar3 = (param_1->LocalAccountId).Value;
  uVar5 = uVar3 & 0xffffff;
  if (uVar5 == 0) {
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ef0606e;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_48 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,(uchar *)"Params.LocalAccountId",0x15);
    uVar3 = local_48 + 1;
    uVar5 = uVar3;
    if (uVar3 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar5 = 0;
        goto LAB_14ef05e01;
      }
    }
    else {
LAB_14ef05e01:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar5,2);
    }
    local_50 = local_158;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    Core::Private::Convert((wchar_t *)local_50,uVar3,(uchar *)"Params.LocalAccountId",0x16);
    local_178.Data = (FScriptContainerElement *)0x0;
    local_168 = Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,
                           (uchar *)"UE::Online::FSessionsCommon::SetPresenceSessionImpl",0x33);
    uVar3 = local_168 + 1;
    uVar5 = uVar3;
    if (uVar3 < 0x81) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar5 = 0;
        goto LAB_14ef05e8c;
      }
    }
    else {
LAB_14ef05e8c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar5,2);
    }
    local_170 = local_278;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      local_170 = local_178.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_170,uVar3,
               (uchar *)"UE::Online::FSessionsCommon::SetPresenceSessionImpl",0x34);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar4.Data = local_58.Data;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
      FVar4.Data = local_58.Data;
    }
  }
  else {
    if (((param_1->SessionId).Value & 0xffffff) != 0) {
      uVar6 = (uVar3 >> 0x18) - uVar5 ^ uVar5 >> 0xd;
      uVar3 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
      uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 0xd;
      uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xc;
      uVar3 = (uVar3 - uVar6) - uVar5 ^ uVar6 << 0x10;
      uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 5;
      uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 3;
      uVar3 = (uVar3 - uVar6) - uVar5 ^ uVar6 << 10;
      pTVar2 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
               ::
               FindOrAddImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
                         ((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
                           *)&this->PresenceSessionsUserMap,(uVar5 - uVar3) - uVar6 ^ uVar3 >> 0xf,
                          &param_1->LocalAccountId);
      pTVar2->Value = (param_1->SessionId).Value;
      *(undefined ***)__return_storage_ptr__ =
           &___7__TOnlineResult_UFSetPresenceSession_Online_UE___Online_UE__6B_;
      __return_storage_ptr__->field_0x30 = 0;
      return __return_storage_ptr__;
    }
    if ((byte)LogOnlineServices._0_1_ < 6) goto LAB_14ef0606e;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_168 = Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)"Params.SessionId",0x10);
    uVar3 = local_168 + 1;
    uVar5 = uVar3;
    if (uVar3 < 0x81) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar5 = 0;
        goto LAB_14ef05f63;
      }
    }
    else {
LAB_14ef05f63:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar5,2);
    }
    local_170 = local_278;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      local_170 = local_178.Data;
    }
    Core::Private::Convert((wchar_t *)local_170,uVar3,(uchar *)"Params.SessionId",0x11);
    local_58.Data = (FScriptContainerElement *)0x0;
    local_48 = Core::Private::GetConvertedLength
                         ((wchar_t *)0x0,
                          (uchar *)"UE::Online::FSessionsCommon::SetPresenceSessionImpl",0x33);
    uVar3 = local_48 + 1;
    uVar5 = uVar3;
    if (uVar3 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar5 = 0;
        goto LAB_14ef05feb;
      }
    }
    else {
LAB_14ef05feb:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar5,2);
    }
    local_50 = local_158;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    Core::Private::Convert
              ((wchar_t *)local_50,uVar3,
               (uchar *)"UE::Online::FSessionsCommon::SetPresenceSessionImpl",0x34);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    FVar4.Data = local_178.Data;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
      FVar4.Data = local_178.Data;
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
LAB_14ef0606e:
  local_2d8.bIsSet = false;
  pFVar1 = Errors::InvalidParams(&local_2a8,&local_2d8);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FSetPresenceSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar1->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar1->Details).SharedReferenceCount.ReferenceController;
  (pFVar1->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar1->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = (pFVar1->Inner).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar1->Inner).SharedReferenceCount.ReferenceController;
  (pFVar1->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar1->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar1->ErrorCode;
  __return_storage_ptr__->field_0x30 = 1;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFSetPresenceSession_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.Details.SharedReferenceCount.ReferenceController);
  if (local_2d8.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// StartMatchmaking @ 14ef14d70

TOnlineAsyncOpHandle<UE::Online::FStartMatchmaking> * __thiscall
UE::Online::FSessionsCommon::StartMatchmaking
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FStartMatchmaking> *__return_storage_ptr__,
          Params *param_1)

{
  code *local_18;
  ulonglong uStack_10;
  
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = _vcall__424__flat______;
  ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>
            (this,__return_storage_ptr__,param_1,(pmf_385681d0 *)&local_18,false);
  return __return_storage_ptr__;
}

// StartMatchmakingImpl @ 14ef14dc0

TFuture<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> * __thiscall
UE::Online::FSessionsCommon::StartMatchmakingImpl
          (FSessionsCommon *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *__return_storage_ptr__
          ,Params *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  TPromise<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *pTVar6;
  TFuture<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *pTVar7;
  TPromise<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> local_78;
  FOnlineError local_60;
  TOptional<UE::Online::FOnlineError> local_38;
  
  local_38.bIsSet = false;
  pFVar5 = Errors::NotImplemented(&local_60,&local_38);
  pTVar6 = MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>,UE::Online::FOnlineError>
                     (&local_78,pFVar5);
  if (pTVar6->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pTVar1 = (pTVar6->State).Object;
  pTVar6->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  *(TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> **)
   __return_storage_ptr__ = (pTVar6->State).Object;
  pTVar2 = (pTVar6->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_78.State.Object !=
       (TFutureState<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *)0x0) &&
     ((local_78.State.Object)->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Details.SharedReferenceCount.ReferenceController);
  if (local_38.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// UpdateSessionSettings @ 14ef32520

TOnlineAsyncOpHandle<UE::Online::FUpdateSessionSettings> * __thiscall
UE::Online::FSessionsCommon::UpdateSessionSettings
          (FSessionsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FUpdateSessionSettings> *__return_storage_ptr__,
          Params *param_1)

{
  code *local_18;
  ulonglong uStack_10;
  
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = _vcall__400__flat______;
  ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>
            (this,__return_storage_ptr__,param_1,(pmf_3efb2cfe *)&local_18,false);
  return __return_storage_ptr__;
}

// UpdateSessionSettingsImpl @ 14ef32570

TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> * __thiscall
UE::Online::FSessionsCommon::UpdateSessionSettingsImpl
          (FSessionsCommon *this,
          TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>
          *__return_storage_ptr__,Params *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineError *pFVar5;
  TPromise<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *pTVar6;
  TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *pTVar7;
  TPromise<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> local_78;
  FOnlineError local_60;
  TOptional<UE::Online::FOnlineError> local_38;
  
  local_38.bIsSet = false;
  pFVar5 = Errors::NotImplemented(&local_60,&local_38);
  pTVar6 = MakeFulfilledPromise<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>,UE::Online::FOnlineError>
                     (&local_78,pFVar5);
  if (pTVar6->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  pTVar1 = (pTVar6->State).Object;
  pTVar6->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)0x0)
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  *(TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> **)
   __return_storage_ptr__ = (pTVar6->State).Object;
  pTVar2 = (pTVar6->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_78.State.Object !=
       (TFutureState<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)0x0) &&
     ((local_78.State.Object)->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFuture<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.Details.SharedReferenceCount.ReferenceController);
  if (local_38.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

