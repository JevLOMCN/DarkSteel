// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b4acc30

UClass * __cdecl UDS_HttpHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HttpHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HttpHandler",
               &Z_Registration_Info_UClass_UDS_HttpHandler.InnerSingleton,
               StaticRegisterNativesUDS_HttpHandler,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_HttpHandler>,InternalVTableHelperCtorCaller<UDS_HttpHandler>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HttpHandler.InnerSingleton;
}

// UDS_HttpHandler @ 14b4b2590

UDS_HttpHandler * __thiscall
UDS_HttpHandler::UDS_HttpHandler(UDS_HttpHandler *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_HttpHandler__6B_;
  *(undefined8 *)&this->ResponseDelegate = 0;
  *(undefined8 *)&(this->ResponseDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ResponseDelegate).field_0x10 = 0;
  ::FString::FString(&this->Verb,L"POST");
  this->bIsSendRequest = false;
  this->IncreaseID = 0;
  return this;
}

// UDS_HttpHandler @ 14b4b25f0

UDS_HttpHandler * __thiscall
UDS_HttpHandler::UDS_HttpHandler(UDS_HttpHandler *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_HttpHandler__6B_;
  *(undefined8 *)&this->ResponseDelegate = 0;
  *(undefined8 *)&(this->ResponseDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ResponseDelegate).field_0x10 = 0;
  ::FString::FString(&this->Verb,L"POST");
  this->bIsSendRequest = false;
  this->IncreaseID = 0;
  return this;
}

// ~UDS_HttpHandler @ 14b4b3820

void __thiscall UDS_HttpHandler::~UDS_HttpHandler(UDS_HttpHandler *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_HttpHandler__6B_;
  pFVar1 = (this->Verb).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ResponseDelegate);
  pvVar2 = *(void **)&(this->ResponseDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ResponseDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b76d0

UClass * __cdecl UDS_HttpHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HttpHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HttpHandler",
               &Z_Registration_Info_UClass_UDS_HttpHandler.InnerSingleton,
               StaticRegisterNativesUDS_HttpHandler,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_HttpHandler>,InternalVTableHelperCtorCaller<UDS_HttpHandler>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HttpHandler.InnerSingleton;
}

// StaticRegisterNativesUDS_HttpHandler @ 14b4b8570

void __cdecl UDS_HttpHandler::StaticRegisterNativesUDS_HttpHandler(void)

{
  return;
}

// CloseHttpConnection @ 14bb55940

void __cdecl UDS_HttpHandler::CloseHttpConnection(TSharedPtr<IHttpRequest,1> *param_1)

{
  IHttpRequest *pIVar1;
  code *pcVar2;
  bool bVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  TSharedPtr<IHttpRequest,1> local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pIVar1 = param_1->Object;
  if (pIVar1 != (IHttpRequest *)0x0) {
    pcVar2 = *(code **)(*(longlong *)pIVar1 + 0xb0);
    ::FString::FString(&local_28,L"close");
    ::FString::FString(&local_38,L"Connection");
    (*pcVar2)(pIVar1,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (param_1->Object == (IHttpRequest *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = param_1->Object;
    pcVar2 = *(code **)(*(longlong *)pIVar1 + 0x60);
    ::FString::FString(&local_18,L"GET");
    (*pcVar2)(pIVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (param_1->Object == (IHttpRequest *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)param_1->Object + 0xf0))();
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EnterCriticalSection(lpCriticalSection);
    if ((lpCriticalSection[1].LockCount != 0) &&
       (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)lpCriticalSection[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(lpCriticalSection + 1),0,0,0x10);
      lpCriticalSection[1].LockCount = 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    if (param_1->Object == (IHttpRequest *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(*(longlong *)param_1->Object + 0xe8))();
    local_48.Object = (IHttpRequest *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_1 != &local_48) {
      param_1->Object = (IHttpRequest *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_1->SharedReferenceCount,&local_48.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// GetResponseDelegate @ 14bb67cb0

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultDelegateUserPolicy>
* __thiscall UDS_HttpHandler::GetResponseDelegate(UDS_HttpHandler *this)

{
  return &this->ResponseDelegate;
}

// HttpRequest @ 14bb6a200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_HttpHandler::HttpRequest(UDS_HttpHandler *this,FString *param_1,FString *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  UDS_LogManager *pUVar6;
  FHttpModule *pFVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar8;
  ulong64 uVar9;
  undefined1 auStackY_1c8 [32];
  longlong *local_198;
  TReferenceControllerBase<1> *local_190;
  UDS_HttpHandler *local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (this->bIsSendRequest == true) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_HttpHandler::HttpRequest",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Display,local_158.Ptr,0x14,L"bIsSendRequest is True.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar3 = false;
  }
  else {
    pFVar7 = FHttpModule::Get();
    (**(code **)(pFVar7->_padding_ + 0x40))(pFVar7,&local_198);
    (**(code **)(*local_198 + 0x68))(local_198,param_1);
    (**(code **)(*local_198 + 0x60))(local_198,&this->Verb);
    plVar2 = local_198;
    pcVar1 = *(code **)(*local_198 + 0xb0);
    ::FString::FString(&local_170,L"application/json");
    ::FString::FString(&local_180,L"Content-Type");
    (*pcVar1)(plVar2,&local_180,&local_170);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    (**(code **)(*local_198 + 0x90))(local_198,param_2);
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*local_198 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar8 = UE::Core::Private::DelegateAllocate
                       (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_HttpHandler____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_188 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_188);
      puVar8[4] = OnHttpRequestComplete;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    this->IncreaseID = this->IncreaseID + 1;
    cVar5 = (**(code **)(*local_198 + 0xe8))();
    bVar3 = cVar5 == '\x01';
    if (bVar3) {
      this->bIsSendRequest = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_190);
  }
  return bVar3;
}

// HttpRequest @ 14bb6a490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_HttpHandler::HttpRequest(UDS_HttpHandler *this,FString *param_1,Message *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_1a8 [32];
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (this->bIsSendRequest == true) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_HttpHandler::HttpRequest",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Display,local_158.Ptr,0x33,L"bIsSendRequest is True.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    bVar1 = DS_ProtoMessageToJsonString<google::protobuf::Message>(param_2,&local_168);
    if ((!bVar1) && (pUVar2 = UDS_LogManager::GetInst(), pUVar2 != (UDS_LogManager *)0x0)) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_HttpHandler::HttpRequest",0x1c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_158.Ptr,0x3a,L"MessageToJsonString failed. %s");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar1 = HttpRequest(this,param_1,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  return bVar1;
}

// IsResponseSuccess @ 14bb6f0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_HttpHandler::IsResponseSuccess(TSharedPtr<IHttpResponse,1> *param_1)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  IHttpResponse *pIVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1->Object == (IHttpResponse *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14bb6f19a;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_HttpHandler::IsResponseSuccess",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x44,L"Response is not Valid");
  }
  else {
    iVar1 = (**(code **)((longlong)*param_1->Object + 0x58))();
    if (iVar1 - 200U < 7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14bb6f19a;
    pUVar2 = UDS_LogManager::GetInst();
    pIVar3 = TSharedPtr<IHttpResponse,1>::operator->(param_1);
    (**(code **)((longlong)*pIVar3 + 0x58))(pIVar3);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_HttpHandler::IsResponseSuccess",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x4a,L"responseCode error : %d");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14bb6f19a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// OnHttpRequestComplete @ 14bb73790

void __thiscall
UDS_HttpHandler::OnHttpRequestComplete
          (UDS_HttpHandler *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  IHttpResponse *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  IHttpRequest *pIVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  IHttpResponse *local_68;
  TReferenceControllerBase<1> *local_60;
  IHttpRequest *local_58;
  TReferenceControllerBase<1> *local_50;
  FReadAccessScope local_48;
  
  CloseHttpConnection(param_1);
  this->bIsSendRequest = false;
  pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar1 = param_2->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ResponseDelegate,
             &local_48);
  if ((*(int *)&(this->ResponseDelegate).field_0x10 == 0) ||
     (plVar4 = *(longlong **)&(this->ResponseDelegate).field_0x8, plVar4 == (longlong *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  else {
    local_68 = pIVar1;
    local_60 = pTVar5;
    local_58 = pIVar3;
    local_50 = pTVar2;
    (**(code **)(*plVar4 + 0x68))(plVar4,&local_58,&local_68,param_3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

