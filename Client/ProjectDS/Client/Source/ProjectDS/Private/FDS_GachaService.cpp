// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// OnOpenGachaReward @ 14bbcb130

void __cdecl FDS_GachaService::OnOpenGachaReward(UDS_UserWidget *param_1,GachaResponse *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar3 = ::operator_new(0x30);
    pFVar5 = (FDS_ViewModelContext *)0x0;
    pFVar6 = pFVar5;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_GachaReward__6B_;
      pFVar3[1]._padding_ = 0;
      *(undefined8 *)&pFVar3[1].DerivedStaticStruct = 0;
      pFVar6 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GachaReward__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
      pFVar5 = pFVar3;
    }
    if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_GachaReward::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
    this = UDS_ViewModelContextManager::GetInst();
    if (this != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar5->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_38.Object = pFVar6;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      UDS_ViewModelContextManager::RegisterContext(this,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    pFVar6->ViewModelTemplateKey = W_GachaReward;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_28.Object = pFVar6;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
  }
  return;
}

// ProcessError @ 14bbce800

bool __cdecl FDS_GachaService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// RequestGacha @ 14bbdb2a0

void __cdecl FDS_GachaService::RequestGacha(int param_1,bool param_2)

{
  return;
}

// ResponseGacha @ 14bbdd640

void __cdecl FDS_GachaService::ResponseGacha(ServerMessagesTwoway *param_1)

{
  return;
}

// TryGacha @ 14bbe2c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_GachaService::TryGacha(int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_GachaBaseTableRow *this;
  UDS_LogManager *pUVar4;
  long64 lVar5;
  int iVar6;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *pTVar7;
  undefined1 auStackY_3e8 [32];
  FWeakObjectPtr local_3b8;
  FWeakObjectPtr local_3b0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_3a8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_390;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  iVar6 = 1;
  if (param_2) {
    iVar6 = 10;
  }
  this = FDS_GachaBaseTableRow::GetRef((longlong)param_1,true);
  bVar2 = FDS_GachaBaseTableRow::IsValid(this);
  if (bVar2) {
    TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_3b8);
    bVar2 = FWeakObjectPtr::IsValid(&local_3b8);
    if (bVar2) {
      FWeakObjectPtr::Get(&local_3b8);
      bVar2 = UDS_MoneyDataSet::CheckEnoughMoney
                        (this->MoneyType,(longlong)(iVar6 * this->MoneyValue));
      if (bVar2) {
        TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_3b0);
        bVar2 = FWeakObjectPtr::IsValid(&local_3b0);
        if (!bVar2) {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"FDS_GachaService::TryGacha",0x1a,Yes);
            UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x32,L"itemDataSet is Invalid.")
            ;
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
            }
          }
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5730235531124539341>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_GachaService.cpp"
                             ,0x33,"false");
          if (!bVar2) {
            return;
          }
          goto code_r0x00014bbe2ef0;
        }
        iVar3 = DS_ItemDataUtil::GetEnabledInventorySlotCount(PlayerNormal);
        if (iVar6 <= iVar3) {
          return;
        }
        pTVar7 = &local_390;
        local_390._0_8_ = 0;
        lVar5 = 0x3d286;
        local_390._8_8_ = 0;
        local_390._16_4_ = 0;
      }
      else {
        pTVar7 = &local_3a8;
        local_3a8._0_8_ = 0;
        lVar5 = 0x3d285;
        local_3a8._8_8_ = 0;
        local_3a8._16_4_ = 0;
      }
      UDS_UIMessageManager::OpenMsgByStringUi(lVar5,Alert_System_01,pTVar7);
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"FDS_GachaService::TryGacha",0x1a,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_258.Ptr,0x24,L"moneyDataSet is Invalid.");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5730235531124539355>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_GachaService.cpp"
                         ,0x25,"false");
      if (bVar2) goto code_r0x00014bbe2ef0;
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"FDS_GachaService::TryGacha",0x1a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_378.Ptr,0x1c,L"gachaBaseTableRow is Invalid.")
      ;
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5730235531124539363>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_GachaService.cpp"
                       ,0x1d,"false");
    if (bVar2) {
code_r0x00014bbe2ef0:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

