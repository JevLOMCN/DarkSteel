// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// ~FDS_HttpServer @ 14b4a06c0

void __thiscall FDS_HttpServer::~FDS_HttpServer(FDS_HttpServer *this)

{
  this->_padding_ = (longlong)&___7FDS_HttpServer__6B_;
  FDS_Urls::~FDS_Urls(&this->Urls);
  return;
}

// Init @ 14bb40460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FDS_HttpServer::Init(FDS_HttpServer *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTimerManager *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  FDelegateAllocation local_28;
  undefined1 local_18;
  FDelegateAllocation *local_10;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  local_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_28.DelegateSize = 0;
  local_18 = 0;
  local_10 = &local_28;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = ExecuteRefreshJwtTokenRequest;
    puVar4[3] = this;
    if ((this == (FDS_HttpServer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FTimerManager::SetTimer
            (this_00,&this->RefreshJwtTokenRequestTimerHandle,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_28,
             __real_44e10000,true,__real_bf800000);
  if (local_28.DelegateSize != 0) {
    if (local_28.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      return true;
    }
    (*(code *)**(undefined8 **)local_28.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_28,0,0,0x10);
    local_28.DelegateSize = 0;
  }
  if (local_28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_28.DelegateAllocator);
  }
  return true;
}

// DeInit @ 14bb5d1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FDS_HttpServer::DeInit(FDS_HttpServer *this)

{
  FDS_Urls *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  FDS_Urls local_1d8;
  
  memset(&local_1d8,0,0x1c8);
  pFVar1 = FDS_Urls::FDS_Urls(&local_1d8);
  FDS_Urls::operator=(&this->Urls,pFVar1);
  FDS_Urls::~FDS_Urls(&local_1d8);
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar2 = FTimerManager::FindTimer(this_00,&this->RefreshJwtTokenRequestTimerHandle);
  if (pFVar2 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (this_00,(FTimerHandle)(this->RefreshJwtTokenRequestTimerHandle).Handle);
  }
  (this->RefreshJwtTokenRequestTimerHandle).Handle = 0;
  return;
}

// EndExecuteRefreshJwtTokenTimer @ 14bb5e080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FDS_HttpServer::EndExecuteRefreshJwtTokenTimer(FDS_HttpServer *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar1 = FTimerManager::FindTimer(this_00,&this->RefreshJwtTokenRequestTimerHandle);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (this_00,(FTimerHandle)(this->RefreshJwtTokenRequestTimerHandle).Handle);
  }
  (this->RefreshJwtTokenRequestTimerHandle).Handle = 0;
  return;
}

// ExecuteRefreshJwtTokenRequest @ 14bb61750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_HttpServer::ExecuteRefreshJwtTokenRequest(FDS_HttpServer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FDS_HttpRequest *pFVar3;
  bool bVar4;
  FString *pFVar5;
  UDS_LogManager *pUVar6;
  FDS_AuthData *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStackY_328 [32];
  ForAnyElementType local_2e8;
  int local_2e0;
  int local_2dc;
  FString local_2d8;
  undefined1 local_2c8 [16];
  FString local_2b8;
  TSharedRef<FDS_HttpRequest,1> local_2a8;
  FDestructionSentinel local_298;
  undefined1 *local_280;
  TSharedPtr<FDS_HttpRequest,1> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pFVar5 = FDS_Urls::GetRefreshJwtToken(&this->Urls);
  local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  lVar11 = (longlong)local_2d8.Data.ArrayNum;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (local_2d8.Data.ArrayNum == 0) {
    local_2d8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2d8.Data.ArrayNum,0,(ForAnyElementType *)&local_2d8,local_2d8.Data.ArrayNum
               ,&local_2d8.Data.ArrayMax);
    memcpy(local_2d8.Data.AllocatorInstance.Data,pFVar1,lVar11 * 2);
  }
  ::FString::FString(&local_2b8,"http");
  iVar12 = local_2b8.Data.ArrayNum + -1;
  FVar10.Data = local_2b8.Data.AllocatorInstance.Data;
  if (local_2b8.Data.ArrayNum == 0) {
    iVar12 = 0;
    FVar10.Data = (FScriptContainerElement *)L"";
  }
  bVar4 = ::FString::StartsWith(&local_2d8,(wchar_t *)FVar10.Data,iVar12,IgnoreCase);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar7 = TDS_Singleton<FDS_AuthData>::GetInst();
    local_2e8.Data = (FScriptContainerElement *)0x0;
    local_2e0 = (pFVar7->JwtKey).Data.ArrayNum;
    lVar11 = (longlong)local_2e0;
    pFVar1 = (pFVar7->JwtKey).Data.AllocatorInstance.Data;
    if (local_2e0 == 0) {
      local_2dc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_2e0,0,&local_2e8,local_2e0,&local_2dc);
      memcpy(local_2e8.Data,pFVar1,lVar11 * 2);
    }
    if (local_2e0 < 2) {
      pUVar6 = UDS_LogManager::GetInst();
      FVar10.Data = local_2e8.Data;
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_HttpServer::ExecuteRefreshJwtTokenRequest",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0xb8,L"jwtKey is Empty");
        FVar10.Data = local_2e8.Data;
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
          FVar10.Data = local_2e8.Data;
        }
      }
    }
    else {
      MakeShared<FDS_HttpRequest,1>(&local_2a8);
      ::FString::PrintfImpl((FString *)local_2c8,L"%s&player_uid=%lld&jwt_key=%s");
      pFVar3 = local_2a8.Object;
      if (local_2a8.Object != (FDS_HttpRequest *)local_2c8) {
        pFVar1 = ((local_2a8.Object)->URL).Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar3->URL).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_2c8._0_8_;
        local_2c8._0_8_ = (FScriptContainerElement *)0x0;
        (pFVar3->URL).Data.ArrayNum = local_2c8._8_4_;
        (pFVar3->URL).Data.ArrayMax = local_2c8._12_4_;
        local_2c8._8_4_ = 0;
        local_2c8._12_4_ = 0;
      }
      if ((FScriptContainerElement *)local_2c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_2c8._0_8_);
      }
      pFVar3->Verb = GET;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->SuccessDel,
                 (FWriteAccessScope *)&local_298);
      local_280 = &(pFVar3->SuccessDel).field_0x8;
      puVar8 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_280);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar8[4] = OnResponseRefreshJwtToken;
        puVar8[3] = this;
        if ((this == (FDS_HttpServer *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && MethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                               ,0x1d8,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (local_298.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
      }
      local_278.Object = local_2a8.Object;
      local_278.SharedReferenceCount.ReferenceController =
           local_2a8.SharedReferenceCount.ReferenceController;
      if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      Request(this,&local_278);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a8.SharedReferenceCount.ReferenceController);
      FVar10.Data = local_2e8.Data;
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14bb61b20;
    pUVar6 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"FDS_HttpServer::ExecuteRefreshJwtTokenRequest",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_268.Ptr,0xae,L"tokenUrl is Empty");
    FVar10.Data = (FScriptContainerElement *)local_268._padding_;
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
LAB_14bb61b20:
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  return;
}

// LoadUrls @ 14bb701f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_HttpServer::LoadUrls(FDS_HttpServer *this,FString *param_1)

{
  code *pcVar1;
  FDS_HttpRequest *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDS_HttpServer *this_00;
  undefined1 auStackY_1d8 [32];
  TSharedRef<FDS_HttpRequest,1> local_198;
  FDestructionSentinel local_188;
  undefined1 *local_170;
  FDestructionSentinel local_168;
  undefined1 *local_150;
  TSharedPtr<FDS_HttpRequest,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_HttpServer::LoadUrls",0x18,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Display,local_138.Ptr,0xe8,L"HttpUrl: %s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  MakeShared<FDS_HttpRequest,1>(&local_198);
  pFVar2 = local_198.Object;
  ::FString::operator=(&(local_198.Object)->URL,param_1);
  pFVar2->Verb = GET;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->SuccessDel,
             (FWriteAccessScope *)&local_188);
  local_170 = &(pFVar2->SuccessDel).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_170);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = OnUrlLoadSuccess;
    puVar5[3] = this;
    if ((this == (FDS_HttpServer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_188.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->FailDel,
             (FWriteAccessScope *)&local_168);
  local_150 = &(pFVar2->FailDel).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_150);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = OnUrlLoadFail;
    puVar5[3] = this;
    if ((this == (FDS_HttpServer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_168.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
  }
  this_00 = TDS_Singleton<FDS_HttpServer>::GetInst();
  local_148.Object = local_198.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_198.SharedReferenceCount.ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  Request(this_00,&local_148);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  return;
}

// OnRequestComplete @ 14bb77b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDS_HttpServer::OnRequestComplete
          (FDS_HttpServer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3,TSharedPtr<FDS_HttpRequest,1> *param_4)

{
  longlong *plVar1;
  IHttpResponse *pIVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FDS_HttpRequest *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  int iVar10;
  undefined1 auStackY_2e8 [32];
  FString local_2b8;
  TSharedPtr<IHttpResponse,1> local_2a8;
  TSharedPtr<IHttpResponse,1> local_298;
  FString local_288;
  TSharedPtr<IHttpResponse,1> local_278;
  TSharedPtr<IHttpResponse,1> local_268;
  TSharedPtr<IHttpRequest,1> local_258;
  IHttpResponse *local_248;
  TReferenceControllerBase<1> *local_240;
  FDestructionSentinel local_238;
  FDestructionSentinel local_220;
  FReadAccessScope local_208;
  FReadAccessScope local_1f0;
  undefined1 local_1d8 [96];
  ForAnyElementType local_178;
  undefined8 local_170;
  TBitArray<FDefaultBitArrayAllocator> local_168;
  undefined8 uStack_148;
  void *local_138;
  undefined4 local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  ForAnyElementType FStack_120;
  int local_118;
  EDS_MessageType local_110;
  undefined1 local_108 [96];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  undefined8 uStack_78;
  void *local_68;
  undefined4 local_60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  int local_48;
  EDS_MessageType local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if ((param_4->Object == (FDS_HttpRequest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_4->Object->bIsProcessed = false;
  if (param_3) {
    if (param_2->Object == (IHttpResponse *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2453718939373404053>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Network\\DS_HttpServer.cpp"
                         ,0x6b,"false");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((param_4->Object == (FDS_HttpRequest *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_4->Object->FailDel);
      if (bVar5) {
        pFVar8 = TSharedPtr<FDS_HttpRequest,1>::operator->(param_4);
        local_298.Object = param_2->Object;
        local_298.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        bVar5 = TDelegate<bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>::
                Execute(&pFVar8->FailDel,&local_298);
        if (bVar5) goto LAB_14bb782e1;
      }
      local_108[0] = None;
      local_108._8_8_ = 0;
      local_108._24_8_ = 0;
      local_108._32_8_ = 0;
      local_108._16_4_ = 0;
      local_108._20_4_ = 0;
      local_98.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_98.MaxBits = _UNK_150631d94;
      uStack_78 = _UNK_150631d98;
      local_108._40_4_ = None;
      local_108[0x2c] = false;
      local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_50.Data = (FScriptContainerElement *)0x0;
      local_108._48_8_ = (FScriptContainerElement *)0x0;
      local_108._56_4_ = 0;
      local_108._60_4_ = 0;
      local_108._64_8_ = (FDS_TextFormatArg *)0x0;
      local_108._72_4_ = 0;
      local_108._76_4_ = 0;
      local_108._80_8_ = 0;
      local_108._88_4_ = 0.0;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = 0;
      local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_48 = 0;
      local_40 = Popup_Close;
      ::FString::FString(&local_288,"Http Response Is InValid");
      FDS_Text::SetTextFromUniqueString((FDS_Text *)local_108,&local_288);
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)local_108);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_58,(FWriteAccessScope *)&local_220);
      if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_50.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
        local_48 = 0;
      }
      if (local_220.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
      }
      if (FStack_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_50.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      uVar4 = local_a0 >> 0x20;
      local_a0 = local_a0 & 0xffffffff00000000;
      if ((int)uVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_a8,0,(int *)((longlong)&local_a0 + 4));
      }
      iVar7 = local_98.MaxBits;
      uStack_78 = 0xffffffff;
      local_98._24_8_ = (ulonglong)(uint)local_98.MaxBits << 0x20;
      if (0x80 < (uint)iVar7) {
        local_98.NumBits = 0;
        local_98.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
      }
      if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_108._64_8_,local_108._72_4_);
      if ((FDS_TextFormatArg *)local_108._64_8_ != (FDS_TextFormatArg *)0x0) {
        FMemory::Free((void *)local_108._64_8_);
      }
      if ((FScriptContainerElement *)local_108._48_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_108._48_8_);
      }
    }
    else {
      iVar7 = (**(code **)((longlong)*param_2->Object + 0x58))();
      if (iVar7 - 200U < 7) {
        pFVar8 = TSharedPtr<FDS_HttpRequest,1>::operator->(param_4);
        pTVar9 = (param_2->SharedReferenceCount).ReferenceController;
        pIVar2 = param_2->Object;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar8->SuccessDel,
                   &local_1f0);
        if ((*(int *)&(pFVar8->SuccessDel).field_0x10 == 0) ||
           (plVar1 = *(longlong **)&(pFVar8->SuccessDel).field_0x8, plVar1 == (longlong *)0x0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_1f0);
        }
        else {
          local_248 = pIVar2;
          local_240 = pTVar9;
          (**(code **)(*plVar1 + 0x68))(plVar1,&local_248);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_1f0);
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      }
      else {
        pFVar8 = TSharedPtr<FDS_HttpRequest,1>::operator->(param_4);
        bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->FailDel);
        if (bVar5) {
          pFVar8 = TSharedPtr<FDS_HttpRequest,1>::operator->(param_4);
          local_278.Object = param_2->Object;
          local_278.SharedReferenceCount.ReferenceController =
               (param_2->SharedReferenceCount).ReferenceController;
          if (local_278.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          bVar5 = TDelegate<bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>::
                  Execute(&pFVar8->FailDel,&local_278);
          if (bVar5) goto LAB_14bb782e1;
        }
        local_268.Object = param_2->Object;
        local_268.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_258.Object = param_1->Object;
        local_258.SharedReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        ProcessError(this,&local_258,&local_268,true);
      }
    }
  }
  else {
    if ((param_4->Object == (FDS_HttpRequest *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = param_4->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar8->FailDel,&local_208
              );
    if (((*(int *)&(pFVar8->FailDel).field_0x10 == 0) ||
        (plVar1 = *(longlong **)&(pFVar8->FailDel).field_0x8, plVar1 == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*plVar1 + 0x38))(), cVar6 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_208);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_208);
      if ((param_4->Object == (FDS_HttpRequest *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_2a8.Object = param_2->Object;
      pFVar8 = param_4->Object;
      local_2a8.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar5 = TDelegate<bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>::
              Execute(&pFVar8->FailDel,&local_2a8);
      if (bVar5) goto LAB_14bb782e1;
    }
    local_1d8[0] = None;
    local_1d8._8_8_ = 0;
    local_1d8._24_8_ = 0;
    local_1d8._32_8_ = 0;
    local_1d8._16_4_ = 0;
    local_1d8._20_4_ = 0;
    local_168.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_168.MaxBits = _UNK_150631d94;
    uStack_148 = _UNK_150631d98;
    local_1d8._40_4_ = None;
    local_1d8[0x2c] = false;
    local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_120.Data = (FScriptContainerElement *)0x0;
    local_1d8._48_8_ = (FScriptContainerElement *)0x0;
    local_1d8._56_4_ = 0;
    local_1d8._60_4_ = 0;
    local_1d8._64_8_ = (FDS_TextFormatArg *)0x0;
    local_1d8._72_4_ = 0;
    local_1d8._76_4_ = 0;
    local_1d8._80_8_ = 0;
    local_1d8._88_4_ = 0.0;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    local_168.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_138 = (void *)0x0;
    local_130 = 0;
    local_118 = 0;
    local_110 = Popup_Close;
    ::FString::FString(&local_2b8,"Http Process Fail");
    if (param_4->Object != (FDS_HttpRequest *)0x0) {
      ::FString::AppendChars(&local_2b8,"\n\n(Url :",8);
      pFVar8 = TSharedPtr<FDS_HttpRequest,1>::operator->(param_4);
      iVar7 = (pFVar8->URL).Data.ArrayNum;
      iVar10 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_2b8,(wchar_t *)(pFVar8->URL).Data.AllocatorInstance.Data,iVar10)
      ;
      ::FString::AppendChars(&local_2b8,")",1);
    }
    FDS_Text::SetTextFromUniqueString((FDS_Text *)local_1d8,&local_2b8);
    UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)local_1d8);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_128,(FWriteAccessScope *)&local_238);
    if ((local_118 != 0) && (FStack_120.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_120.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_120,0,0,0x10);
      local_118 = 0;
    }
    if (local_238.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
    }
    if (FStack_120.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_120.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
    local_130 = 0;
    if (local_138 != (void *)0x0) {
      FMemory::Free(local_138);
    }
    uVar4 = local_170 >> 0x20;
    local_170 = local_170 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_178,0,(int *)((longlong)&local_170 + 4));
    }
    iVar7 = local_168.MaxBits;
    uStack_148 = 0xffffffff;
    local_168._24_8_ = (ulonglong)(uint)local_168.MaxBits << 0x20;
    if (0x80 < (uint)iVar7) {
      local_168.NumBits = 0;
      local_168.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_168,0);
    }
    if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_1d8._64_8_,local_1d8._72_4_);
    if ((FDS_TextFormatArg *)local_1d8._64_8_ != (FDS_TextFormatArg *)0x0) {
      FMemory::Free((void *)local_1d8._64_8_);
    }
    if ((FScriptContainerElement *)local_1d8._48_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1d8._48_8_);
    }
  }
LAB_14bb782e1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// OnResponseRefreshJwtToken @ 14bb785d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_HttpServer::OnResponseRefreshJwtToken(FDS_HttpServer *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  FJsonObject *this_00;
  ForAnyElementType _Src;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  TJsonStringReader<wchar_t> *this_01;
  UDS_LogManager *pUVar7;
  TSharedPtr<FJsonValue,1> *pTVar8;
  FDS_AuthData *pFVar9;
  void *pvVar10;
  FString *pFVar11;
  undefined1 auStackY_5b8 [32];
  TSharedPtr<FJsonObject,1> local_578;
  FString local_568;
  StackState local_558;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_520;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_518;
  wchar_t *local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  wchar_t *local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  void *local_4e8 [2];
  TStringView<wchar_t> local_4d8;
  TStringView<wchar_t> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  if ((param_1->Object == (IHttpResponse *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar6 = (undefined8 *)(**(code **)((longlong)*param_1->Object + 0x60))(param_1->Object,local_4e8)
  ;
  this_01 = ::operator_new(0x88);
  local_520.Object = (TJsonStringReader<wchar_t> *)0x0;
  if (this_01 != (TJsonStringReader<wchar_t> *)0x0) {
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    *(undefined4 *)&this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 0;
    this_01->_padding_ = 1;
    *(undefined2 *)&this_01->_padding_ = 0;
    (this_01->Content).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
    (this_01->Content).Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar6;
    *puVar6 = 0;
    (this_01->Content).Data.ArrayNum = *(int *)(puVar6 + 1);
    (this_01->Content).Data.ArrayMax = *(int *)((longlong)puVar6 + 0xc);
    puVar6[1] = 0;
    (this_01->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(this_01);
    local_520.Object = this_01;
  }
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&local_518,&local_520);
  if (local_518.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_518.SharedReferenceCount.ReferenceController);
  if (local_4e8[0] != (void *)0x0) {
    FMemory::Free(local_4e8[0]);
  }
  local_558.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.Identifier.Data.ArrayNum = 0;
  local_558.Identifier.Data.ArrayMax = 0;
  local_578.Object = (FJsonObject *)0x0;
  local_578.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_558.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.Object.Object = (FJsonObject *)0x0;
  local_558.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_558.Array.ArrayNum = 0;
  local_558.Array.ArrayMax = 0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)local_518.Object,&local_558,None);
  if (bVar4) {
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_558,&local_578);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_558.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_558.Array.AllocatorInstance.Data,
               local_558.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_558.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_558.Array.AllocatorInstance.Data);
    }
    if (local_558.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Identifier.Data.AllocatorInstance.Data);
    }
    if (!bVar4) goto LAB_14bb787bc;
    if ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
         *)local_578.Object !=
        (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
         *)0x0) {
      if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)local_578.Object ==
           (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = local_578.Object;
      uStack_500 = 0xf;
      local_508 = L"refresh_jwt_key";
      local_4d8._12_4_ = uStack_4fc;
      local_4d8.Size = 0xf;
      local_4d8.DataPtr = L"refresh_jwt_key";
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(0xf,L"refresh_jwt_key");
      pTVar8 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               ::FindByHash<TStringView<wchar_t>_>
                         ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                           *)this_00,uVar5,&local_4d8);
      if ((pTVar8 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar8->Object == (FJsonValue *)0x0)) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_HttpServer::OnResponseRefreshJwtToken",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_158.Ptr,0xd8,L"jsonObject has no refresh_jwt_key.");
          local_568.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
          goto LAB_14bb78b0e;
        }
      }
      else {
        pFVar9 = TDS_Singleton<FDS_AuthData>::GetInst();
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_578.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_4f8 = L"refresh_jwt_key";
        uStack_4f0 = 0xf;
        local_4c8._12_4_ = uStack_4ec;
        local_4c8.Size = 0xf;
        local_4c8.DataPtr = L"refresh_jwt_key";
        FJsonObject::GetStringField(local_578.Object,&local_568,&local_4c8);
        _Src.Data = local_568.Data.AllocatorInstance.Data;
        pFVar11 = &pFVar9->JwtKey;
        if (pFVar11 != &local_568) {
          piVar1 = &(pFVar9->JwtKey).Data.ArrayMax;
          iVar2 = *piVar1;
          (pFVar9->JwtKey).Data.ArrayNum = local_568.Data.ArrayNum;
          if ((local_568.Data.ArrayNum == 0) && (iVar2 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_568.Data.ArrayNum,iVar2,(ForAnyElementType *)pFVar11,
                       local_568.Data.ArrayNum,piVar1);
            if (local_568.Data.ArrayNum != 0) {
              memcpy((pFVar11->Data).AllocatorInstance.Data,_Src.Data,
                     (longlong)local_568.Data.ArrayNum * 2);
            }
          }
        }
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"FDS_HttpServer::OnResponseRefreshJwtToken",0x29,Yes);
          UDS_LogManager::PrintLog(pUVar7,1,Display,local_278.Ptr,0xde,L"refreshJwtKey : %s");
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
        }
LAB_14bb78b0e:
        if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_578.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_518.SharedReferenceCount.ReferenceController);
      goto LAB_14bb78b32;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"FDS_HttpServer::OnResponseRefreshJwtToken",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_398.Ptr,0xd2,L"jsonObject is nullptr.");
      pvVar10 = (void *)local_398._padding_;
      goto LAB_14bb78826;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_558.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_558.Array.AllocatorInstance.Data,
               local_558.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_558.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_558.Array.AllocatorInstance.Data);
    }
    if (local_558.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Identifier.Data.AllocatorInstance.Data);
    }
LAB_14bb787bc:
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"FDS_HttpServer::OnResponseRefreshJwtToken",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_4b8.Ptr,0xcc,L"FJsonSerializer::Deserialize failed.");
      pvVar10 = (void *)local_4b8._padding_;
LAB_14bb78826:
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_578.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_518.SharedReferenceCount.ReferenceController);
LAB_14bb78b32:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUrlLoadFail @ 14bb79060

bool __thiscall
FDS_HttpServer::OnUrlLoadFail(FDS_HttpServer *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// OnUrlLoadSuccess @ 14bb79080

void __thiscall
FDS_HttpServer::OnUrlLoadSuccess(FDS_HttpServer *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  TSharedPtr<IHttpResponse,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FDS_Urls::OnHttpRequestSuccess(&this->Urls,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ProcessError @ 14bb7e900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDS_HttpServer::ProcessError
          (FDS_HttpServer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  Type TVar4;
  int iVar5;
  undefined1 auStackY_168 [32];
  FString local_138;
  FString local_128;
  FDestructionSentinel local_118;
  FString local_100;
  undefined1 local_f0 [96];
  ForAnyElementType local_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  ForAnyElementType FStack_38;
  int local_30;
  EDS_MessageType local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((param_2->Object == (IHttpResponse *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TVar4 = (**(code **)((longlong)*param_2->Object + 0x58))();
  if (6 < TVar4 - Ok) {
    EHttpResponseCodes::ResponseCodeToString(&local_100,TVar4);
    ::FString::PrintfImpl(&local_128,L"%s.%s");
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    local_f0[0] = None;
    local_f0._8_8_ = 0;
    local_f0._24_8_ = 0;
    local_f0._32_8_ = 0;
    local_f0._16_4_ = 0;
    local_f0._20_4_ = 0;
    local_80.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_80.MaxBits = _UNK_150631d94;
    uStack_60 = _UNK_150631d98;
    local_f0._40_4_ = None;
    local_f0[0x2c] = false;
    local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    local_f0._48_8_ = (FScriptContainerElement *)0x0;
    local_f0._56_4_ = 0;
    local_f0._60_4_ = 0;
    local_f0._64_8_ = (FDS_TextFormatArg *)0x0;
    local_f0._72_4_ = 0;
    local_f0._76_4_ = 0;
    local_f0._80_8_ = 0;
    local_f0._88_4_ = 0.0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_50 = (void *)0x0;
    local_48 = 0;
    local_30 = 0;
    local_28 = Popup_Close;
    ::FString::FString(&local_138,"Http Error : ErrorCode - ");
    iVar5 = local_128.Data.ArrayNum + -1;
    if (local_128.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_138,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar5);
    FDS_Text::SetTextFromUniqueString((FDS_Text *)local_f0,&local_138);
    UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)local_f0);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_40,(FWriteAccessScope *)&local_118);
    if ((local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_38.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
      local_30 = 0;
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
    local_48 = 0;
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    uVar2 = local_88 >> 0x20;
    local_88 = local_88 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_90,0,(int *)((longlong)&local_88 + 4));
    }
    iVar5 = local_80.MaxBits;
    uStack_60 = 0xffffffff;
    local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
    if (0x80 < (uint)iVar5) {
      local_80.NumBits = 0;
      local_80.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
    }
    if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_f0._64_8_,local_f0._72_4_);
    if ((FDS_TextFormatArg *)local_f0._64_8_ != (FDS_TextFormatArg *)0x0) {
      FMemory::Free((void *)local_f0._64_8_);
    }
    if ((FScriptContainerElement *)local_f0._48_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f0._48_8_);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Request @ 14bb845c0

bool __thiscall FDS_HttpServer::Request(FDS_HttpServer *this,TSharedPtr<FDS_HttpRequest,1> *param_1)

{
  EDS_HttpMethod EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FHttpModule *pFVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar9;
  ulong64 uVar10;
  char *pcVar11;
  longlong *local_68;
  TReferenceControllerBase<1> *local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1->Object == (FDS_HttpRequest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  param_1->Object->bIsProcessed = true;
  pFVar8 = FHttpModule::Get();
  (**(code **)(pFVar8->_padding_ + 0x40))(pFVar8,&local_68);
  plVar4 = local_68;
  pcVar3 = *(code **)(*local_68 + 0x68);
  if (param_1->Object == (FDS_HttpRequest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  (*pcVar3)(plVar4,param_1->Object);
  plVar4 = local_68;
  pcVar3 = *(code **)(*local_68 + 0x60);
  if (param_1->Object == (FDS_HttpRequest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  EVar1 = param_1->Object->Verb;
  if (EVar1 == GET) {
    pcVar11 = "GET";
  }
  else if (EVar1 == POST) {
    pcVar11 = "POST";
  }
  else {
    pcVar11 = "";
  }
  ::FString::FString(&local_58,pcVar11);
  (*pcVar3)(plVar4,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  plVar4 = local_68;
  pcVar3 = *(code **)(*local_68 + 0xb0);
  ::FString::FString(&local_38,L"close");
  ::FString::FString(&local_48,L"Connection");
  (*pcVar3)(plVar4,&local_48,&local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  plVar4 = local_68;
  pcVar3 = *(code **)(*local_68 + 0xb0);
  ::FString::FString(&local_18,L"application/json");
  ::FString::FString(&local_28,L"Content-Type");
  (*pcVar3)(plVar4,&local_28,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  plVar4 = local_68;
  pcVar3 = *(code **)(*local_68 + 0x90);
  if (param_1->Object == (FDS_HttpRequest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  (*pcVar3)(plVar4,&param_1->Object->ContentString);
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*local_68 + 0xf0))();
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(lpCriticalSection + 1));
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TSharedPtr_VFDS_HttpRequest___00____6B_
    ;
    puVar9[1] = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    puVar9[2] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[3] = uVar10;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TSharedPtr_VFDS_HttpRequest___00____6B_
    ;
    puVar9[5] = OnRequestComplete;
    puVar9[4] = this;
    if (this == (FDS_HttpServer *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  cVar7 = (**(code **)(*local_68 + 0xe8))();
  if (cVar7 == '\0') {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2453718939373404092>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Network\\DS_HttpServer.cpp"
                       ,0x44,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)cVar7;
}

// StartJwtTokenRefreshTimer @ 14bb912d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FDS_HttpServer::StartJwtTokenRefreshTimer(FDS_HttpServer *this)

{
  code *pcVar1;
  bool bVar2;
  FTimerManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDelegateAllocation local_28;
  undefined1 local_18;
  FDelegateAllocation *local_10;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  local_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_28.DelegateSize = 0;
  local_18 = 0;
  local_10 = &local_28;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDS_HttpServer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = ExecuteRefreshJwtTokenRequest;
    puVar3[3] = this;
    if ((this == (FDS_HttpServer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTimerManager::SetTimer
            (this_00,&this->RefreshJwtTokenRequestTimerHandle,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_28,
             __real_44e10000,true,__real_bf800000);
  if (local_28.DelegateSize != 0) {
    if (local_28.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_28.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_28,0,0,0x10);
    local_28.DelegateSize = 0;
  }
  if (local_28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_28.DelegateAllocator);
  }
  return;
}

