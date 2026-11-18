// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// OnOpenRewardPopup @ 14bbfb300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FDS_ResultUIService::OnOpenRewardPopup
          (UDS_UserWidget *param_1,EDS_WindowWidget param_2,ResultUiResponse *param_3,long64 param_4
          )

{
  code *pcVar1;
  UDS_LogManager *pUVar2;
  UClass *pUVar3;
  UDS_M_ResultUI *this;
  FName *pFVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_218;
  UDS_UserWidget *local_210;
  TSharedPtr<FDS_ViewModelContext,1> local_208;
  FName local_1f8;
  FName local_1f0;
  undefined1 local_1e8 [8];
  TReferenceControllerBase<1> *local_1e0;
  undefined1 local_1d8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = (longlong)param_1;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_ResultUIService::OnOpenRewardPopup",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,0x5a,L"InWidget is nullptr");
      if ((UDS_UserWidget *)local_158._padding_ != (UDS_UserWidget *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_M_ResultUI_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1d8,pUVar3);
    local_1d8._8_8_ = param_1;
    this = (UDS_M_ResultUI *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
    if (local_1d8._64_8_ != 0) {
      plVar6 = (longlong *)(local_1d8 + 0x50);
      if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_1d8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    UDS_M_ResultUI::Init(this,param_3,param_4);
    uVar7 = 0;
    if (param_2 == CommonRewardResultLite) {
      uVar7 = 0xc6;
    }
    else if (param_2 == CommonRewardResultNormal) {
      uVar7 = 199;
    }
    pcVar1 = *(code **)(this->_padding_ + 0x308);
    ::FName::FName(&local_1f8,"");
    pFVar4 = ::FName::FName(&local_1f0,L"");
    puVar5 = (undefined8 *)(*pcVar1)(this,local_1e8,uVar7,*pFVar4);
    local_208.Object = (FDS_ViewModelContext *)*puVar5;
    local_208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar5[1];
    if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_218.ObjectIndex = 0;
    local_218.ObjectSerialNumber = 0;
    local_210 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_210);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_218,&local_208,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e0);
  }
  server_msg::ResultUiResponse::~ResultUiResponse(param_3);
  return;
}

// OpenWindow @ 14bc00320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_ResultUIService::OpenWindow(EDS_WindowWidget param_1,ResultUiResponse *param_2,long64 param_3)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  FDelegateAllocation local_1a0;
  FDestructionSentinel local_190;
  FDelegateAllocation *local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_ResultUIService::OpenWindow",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_168.Ptr,0x4e,L"windowManager is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    local_1a8 = (undefined1  [8])0x0;
    local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
               (FWriteAccessScope *)&local_190);
    local_178 = &local_1a0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x60,&local_1a0);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_WindowWidget__VResultUiResponse_server_msg___J__6B_
      ;
      *(EDS_WindowWidget *)(puVar2 + 1) = param_1;
      server_msg::ResultUiResponse::ResultUiResponse
                ((ResultUiResponse *)(puVar2 + 2),(Arena *)0x0,param_2);
      puVar2[2] = &___7ResultUiResponse_server_msg__6B_;
      puVar2[9] = param_3;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[10] = uVar3;
      *puVar2 = &
                ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_WindowWidget__VResultUiResponse_server_msg___J__6B_
      ;
      puVar2[0xb] = OnOpenRewardPopup;
    }
    if (local_190.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_190,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_1a8);
    UDS_WindowManager::OpenWindow(this,param_1,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
               (FWriteAccessScope *)&local_190);
    if ((local_1a0.DelegateSize != 0) &&
       (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1a0,0,0,0x10);
      local_1a0.DelegateSize = 0;
    }
    if (local_190.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
    }
    if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a8);
  }
  server_msg::ResultUiResponse::~ResultUiResponse(param_2);
  return;
}

// ProcessError @ 14bc02690

bool __cdecl FDS_ResultUIService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReciveRewardResponse @ 14bc0ca00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_ResultUIService::ReciveRewardResponse(ServerMessages *param_1)

{
  EDS_WindowWidget EVar1;
  long64 lVar2;
  bool bVar3;
  FDS_WindowRewardResultTableRow *this;
  UDS_LogManager *pUVar4;
  FDS_StringBaseTableRow *pFVar5;
  UDS_DropDataSet *this_00;
  ResultUiResponseDefaultTypeInternal *pRVar6;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178;
  ResultUiResponse local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x42) {
    pRVar6 = *(ResultUiResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pRVar6 = &server_msg::_ResultUiResponse_default_instance_;
  }
  TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)&local_178);
  bVar3 = TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr> *)&local_178,(void *)0x0);
  if (!bVar3) {
    this = FDS_WindowRewardResultTableRow::Get((longlong)*(int *)((longlong)pRVar6 + 0x30),true);
    if (this == (FDS_WindowRewardResultTableRow *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_ResultUIService::ReciveRewardResponse",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x29,L"windowRewardResultTableRow is nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      EVar1 = this->Widget;
      pFVar5 = FDS_WindowRewardResultTableRow::ID_NameTable(this);
      lVar2 = pFVar5->ID;
      if (EVar1 == None) {
        this_00 = (UDS_DropDataSet *)FWeakObjectPtr::Get(&local_178);
        UDS_DropDataSet::OnRewardResponseProcess(this_00,&pRVar6->_instance);
      }
      else if (EVar1 == CommonRewardResultLite) {
        server_msg::ResultUiResponse::ResultUiResponse(&local_170,(Arena *)0x0,&pRVar6->_instance);
        local_170._padding_ = (longlong)&___7ResultUiResponse_server_msg__6B_;
        OpenWindow(CommonRewardResultLite,&local_170,lVar2);
      }
      else if (EVar1 == CommonRewardResultNormal) {
        server_msg::ResultUiResponse::ResultUiResponse(&local_170,(Arena *)0x0,&pRVar6->_instance);
        local_170._padding_ = (longlong)&___7ResultUiResponse_server_msg__6B_;
        OpenWindow(CommonRewardResultNormal,&local_170,lVar2);
      }
    }
  }
  return;
}

