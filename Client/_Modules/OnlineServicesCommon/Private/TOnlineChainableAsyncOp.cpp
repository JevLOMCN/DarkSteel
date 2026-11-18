// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// Enqueue<UE::Online::FOnlineAsyncOpQueueParallel> @ 14efd9340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>::
Enqueue<UE::Online::FOnlineAsyncOpQueueParallel>
          (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> *this,
          FOnlineAsyncOpQueueParallel *param_1,double param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  pTVar1 = this->OwningOperation;
  if (((pTVar1->SharedState).Object)->State != Invalid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SharedState->State < EAsyncOpState::Queued",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                       ,0x5bb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ((pTVar1->SharedState).Object)->State = Queued;
  if (5 < (byte)LogOnlineServices._0_1_) {
    Online::LexToString(((pTVar1->SharedState).Object)->State);
    Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::Enqueue<UE::Online::FOnlineAsyncOpQueueParallel>(UE::Online::FOnlineAsyncOpQueueParallel&___ptr64,double)___ptr64'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpQueue::Enqueue<UE::Online::FFunctionalTestLobbies>
            ((FOnlineAsyncOpQueue *)param_1,pTVar1,param_2);
  return;
}

