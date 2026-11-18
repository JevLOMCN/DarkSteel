// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b748310

UClass * __cdecl UDS_VM_W_Patcher::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Patcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Patcher",
               &Z_Registration_Info_UClass_UDS_VM_W_Patcher.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Patcher,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_W_Patcher>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Patcher>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Patcher.InnerSingleton;
}

// UDS_VM_W_Patcher @ 14b74d180

UDS_VM_W_Patcher * __thiscall
UDS_VM_W_Patcher::UDS_VM_W_Patcher(UDS_VM_W_Patcher *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_PatchProgress = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Patcher__6B_;
  (this->PakDownloader).WeakPtr = (FWeakObjectPtr)0x0;
  this->PatchProgress = 0.0;
  return this;
}

// UDS_VM_W_Patcher @ 14b74d1e0

UDS_VM_W_Patcher * __thiscall
UDS_VM_W_Patcher::UDS_VM_W_Patcher(UDS_VM_W_Patcher *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_PatchProgress = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Patcher__6B_;
  (this->PakDownloader).WeakPtr = (FWeakObjectPtr)0x0;
  this->PatchProgress = 0.0;
  return this;
}

// ~UDS_VM_W_Patcher @ 14b74f000

void __thiscall UDS_VM_W_Patcher::~UDS_VM_W_Patcher(UDS_VM_W_Patcher *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Patcher__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b751320

IClassDescriptor * __thiscall
UDS_VM_W_Patcher::GetFieldNotificationDescriptor(UDS_VM_W_Patcher *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Patcher::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b751b40

UClass * __cdecl UDS_VM_W_Patcher::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Patcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Patcher",
               &Z_Registration_Info_UClass_UDS_VM_W_Patcher.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Patcher,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_W_Patcher>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Patcher>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Patcher.InnerSingleton;
}

// GetTickableTickType @ 14b7522c0

ETickableTickType __thiscall UDS_VM_W_Patcher::GetTickableTickType(UDS_VM_W_Patcher *this)

{
  return Conditional;
}

// IsUpdate @ 14b7522e0

bool __thiscall UDS_VM_W_Patcher::IsUpdate(UDS_VM_W_Patcher *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_W_Patcher @ 14b7523f0

void __cdecl UDS_VM_W_Patcher::StaticRegisterNativesUDS_VM_W_Patcher(void)

{
  return;
}

// FailedDownloadPaks @ 14c019e40

void __thiscall UDS_VM_W_Patcher::FailedDownloadPaks(UDS_VM_W_Patcher *this)

{
  FWeakObjectPtr::IsValid(&(this->PakDownloader).WeakPtr);
  return;
}

// GetVersionList @ 14c01be10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Patcher::GetVersionList(UDS_VM_W_Patcher *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FHttpModule *pFVar5;
  longlong *plVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_LogManager *pUVar9;
  undefined1 auStackY_1e8 [32];
  UDS_VM_W_Patcher *local_1a8 [2];
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  FString local_188;
  FString local_178;
  undefined1 local_168 [8];
  undefined4 local_160;
  undefined4 uStack_15c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ::FString::FString(&local_188,
                     L"http://patch.wemadenext.com:8080/PatchFiles/Master/VersionList.json");
  pFVar5 = FHttpModule::Get();
  plVar6 = (longlong *)(**(code **)(pFVar5->_padding_ + 0x40))(pFVar5,local_168);
  pTVar1 = (TReferenceControllerBase<1> *)plVar6[1];
  plVar6 = (longlong *)*plVar6;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(uStack_15c,local_160));
  if (plVar6 == (longlong *)0x0) {
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
  (**(code **)(*plVar6 + 0x68))(plVar6,&local_188);
  if (plVar6 == (longlong *)0x0) {
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
  pcVar2 = *(code **)(*plVar6 + 0x60);
  ::FString::FString(&local_178,L"GET");
  (*pcVar2)(plVar6,&local_178);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (plVar6 == (longlong *)0x0) {
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
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*plVar6 + 0xf0))(plVar6);
  uStack_190 = 0;
  uStack_18c = uStack_15c;
  local_198 = OnRequestComplete_VersionList;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(lpCriticalSection + 1));
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Patcher____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_Patcher *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[3] = 0;
    local_1a8[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_Patcher *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_1a8);
    *(undefined4 *)(puVar7 + 4) = (undefined4)local_198;
    *(undefined4 *)((longlong)puVar7 + 0x24) = local_198._4_4_;
    *(undefined4 *)(puVar7 + 5) = uStack_190;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_18c;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (plVar6 == (longlong *)0x0) {
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
  cVar4 = (**(code **)(*plVar6 + 0xe8))(plVar6);
  if (cVar4 == '\0') {
    if (plVar6 == (longlong *)0x0) {
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
    (**(code **)(*plVar6 + 0x18))(plVar6);
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_Patcher::GetVersionList",0x20,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_158.Ptr,0x3c,L"Failed to request version list. Reason : %d")
      ;
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleFailure @ 14c01c230

void __thiscall
UDS_VM_W_Patcher::HandleFailure(UDS_VM_W_Patcher *this,EDS_PatchFailureReason param_1)

{
  return;
}

// OnPostProcessCallback @ 14c02dfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Patcher::OnPostProcessCallback(UDS_VM_W_Patcher *this,bool param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  ADS_PatchGameMode *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_Patcher::OnPostProcessCallback",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x9e,L"OnPostProcessCallback : %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (param_1) {
    ADS_PatchGameMode::GetInst();
    bVar1 = FWeakObjectPtr::IsValid(local_148);
    if (bVar1) {
      this_00 = (ADS_PatchGameMode *)FWeakObjectPtr::Get(local_148);
      ADS_PatchGameMode::OnCompletedPakDownloaderProcess(this_00);
    }
  }
  return;
}

// OnRequestComplete_VersionList @ 14c02e880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Patcher::OnRequestComplete_VersionList
          (UDS_VM_W_Patcher *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  int iVar1;
  IHttpResponse *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  TJsonStringReader<wchar_t> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar8;
  UScriptStruct *pUVar9;
  ulonglong uVar10;
  UObject *pUVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  UWN_PakDownloader *this_00;
  UDS_LogManager *pUVar14;
  wchar_t *pwVar15;
  FDS_VersionInfo *pFVar16;
  FDS_VersionInfo *pFVar17;
  undefined1 auStackY_2a8 [32];
  undefined1 local_268 [8];
  FDS_VersionInfo *local_260;
  ulonglong local_258;
  StackState local_248;
  TSharedPtr<FJsonObject,1> local_208;
  UDS_VM_W_Patcher *local_1f8;
  TSharedPtr<IHttpRequest,1> *local_1f0;
  TSharedRef<FJsonObject,1> local_1e8;
  code *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_198;
  FDestructionSentinel local_188;
  undefined1 *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_1f0 = param_1;
  UDS_HttpHandler::CloseHttpConnection(param_1);
  pIVar2 = param_2->Object;
  if ((pIVar2 == (IHttpResponse *)0x0) || (!param_3)) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) goto LAB_14c02ed34;
    pUVar14 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_W_Patcher::OnRequestComplete_VersionList",0x2f,Yes);
    UDS_LogManager::PrintLog
              (pUVar14,1,Warning,local_168.Ptr,0x48,L"Failed to request version list.");
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_168._padding_;
  }
  else {
    (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2,&local_1a8);
    local_260 = (FDS_VersionInfo *)0x0;
    local_258 = 0;
    pTVar8 = TJsonStringReader<wchar_t>::Create(&local_198,&local_1a8);
    pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar8->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_198.SharedReferenceCount.ReferenceController._4_4_,
                        local_198.SharedReferenceCount.ReferenceController._0_4_));
    local_248.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Object = (FJsonObject *)0x0;
    local_208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_248.Identifier.Data.ArrayNum = 0;
    local_248.Identifier.Data.ArrayMax = 0;
    local_248.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.Object.Object = (FJsonObject *)0x0;
    local_248.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_248.Array.ArrayNum = 0;
    local_248.Array.ArrayMax = 0;
    bVar6 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar4,&local_248,None);
    if (bVar6) {
      bVar6 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_248,&local_208);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_248.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_248.Array.AllocatorInstance.Data,
                 local_248.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_248.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_248.Array.AllocatorInstance.Data);
      }
      if (local_248.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Identifier.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && (local_208.Object != (FJsonObject *)0x0)) {
        if ((local_208.Object == (FJsonObject *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1e8.Object = local_208.Object;
        local_1e8.SharedReferenceCount.ReferenceController =
             local_208.SharedReferenceCount.ReferenceController;
        if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_208.Object == (FJsonObject *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar9 = FDS_VersionList::StaticStruct();
        FJsonObjectConverter::JsonObjectToUStruct
                  (&local_1e8,(UStruct *)pUVar9,&local_260,0,0,false,(FText *)0x0,
                   (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                    *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1e8.SharedReferenceCount.ReferenceController);
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_248.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_248.Array.AllocatorInstance.Data,
                 local_248.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_248.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_248.Array.AllocatorInstance.Data);
      }
      if (local_248.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Identifier.Data.AllocatorInstance.Data);
      }
    }
    iVar1 = (int)local_258;
    uVar10 = (ulonglong)(int)local_258;
    pFVar16 = local_260 + uVar10;
    pFVar17 = local_260;
    while( true ) {
      if ((int)uVar10 != iVar1) {
        `TCheckedPointerIterator<FDS_VersionInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_268);
      }
      if (pFVar17 == pFVar16) goto LAB_14c02ec72;
      if ((pFVar17->Platform).Data.ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar17->Platform).Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar15,L"Windows");
      if ((iVar7 == 0) && (pFVar17->ArchiveVersion == 0)) break;
      uVar10 = local_258 & 0xffffffff;
      pFVar17 = pFVar17 + 1;
    }
    ::FString::operator=(&UDS_GameInstance::Urls,&pFVar17->Urls);
    bVar6 = FWeakObjectPtr::IsValid(&(this->PakDownloader).WeakPtr);
    if (bVar6) {
      pUVar11 = FWeakObjectPtr::Get(&(this->PakDownloader).WeakPtr);
      uStack_1d0 = 0;
      local_1d8 = OnPostProcessCallback;
      uStack_1cc = local_198.SharedReferenceCount.ReferenceController._4_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar11[3].field_0x10,
                 (FWriteAccessScope *)&local_188);
      local_170 = &pUVar11[3].field_0x18;
      puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_170);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &
                   ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar13 = FDelegateHandle::GenerateNewID();
        puVar12[2] = uVar13;
        *puVar12 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Patcher____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_W_Patcher *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar12[3] = 0;
        local_1f8 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_W_Patcher *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_1f8);
        puVar12[4] = local_1d8;
        puVar12[5] = CONCAT44(uStack_1cc,uStack_1d0);
      }
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      this_00 = (UWN_PakDownloader *)FWeakObjectPtr::Get(&(this->PakDownloader).WeakPtr);
      iVar1 = pFVar17->PakVersion;
      ::FString::FString(&local_1b8,L"Master");
      ::FString::FString(&local_1c8,L"ProjectDS");
      bVar6 = UWN_PakDownloader::Process
                        (this_00,&local_1c8,&local_1b8,&pFVar17->Platform,iVar1,&pFVar17->BaseUrl);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (!bVar6) {
        OnPostProcessCallback(this,false);
      }
    }
LAB_14c02ec72:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    DestructItems<FDS_VersionInfo,int>(local_260,(int)local_258);
    if (local_260 != (FDS_VersionInfo *)0x0) {
      FMemory::Free(local_260);
    }
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
LAB_14c02ed34:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1f0->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnSetViewModel @ 14c033390

void __thiscall
UDS_VM_W_Patcher::OnSetViewModel(UDS_VM_W_Patcher *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  ADS_PatchGameMode *this_00;
  TWeakObjectPtr<UWN_PakDownloader,FWeakObjectPtr> TVar3;
  FWeakObjectPtr local_res18 [2];
  
  ADS_PatchGameMode::GetInst();
  bVar2 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar2) {
    this_00 = (ADS_PatchGameMode *)FWeakObjectPtr::Get(local_res18);
    TVar3 = ADS_PatchGameMode::GetPakDownloader(this_00);
                    /* WARNING: Load size is inaccurate */
    (this->PakDownloader).WeakPtr = *TVar3.WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(&(this->PakDownloader).WeakPtr);
    if (bVar2) {
      GetVersionList(this);
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5807851023296888797>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Patcher.cpp"
                         ,0x23,"false");
      if (bVar2) goto code_r0x00014c03344c;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5807851023296888804>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Patcher.cpp"
                       ,0x1c,"false");
    if (bVar2) {
code_r0x00014c03344c:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c03a770

void __thiscall UDS_VM_W_Patcher::OnUpdate(UDS_VM_W_Patcher *this,float param_1)

{
  bool bVar1;
  UWN_PakDownloader *this_00;
  ulong64 local_res8;
  ulong64 local_res18 [2];
  FName local_18;
  int local_10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->PakDownloader).WeakPtr);
  if (bVar1) {
    local_res18[0] = 0;
    local_res8 = 0;
    this_00 = (UWN_PakDownloader *)FWeakObjectPtr::Get(&(this->PakDownloader).WeakPtr);
    UWN_PakDownloader::GetDownloadedSize(this_00,local_res18,&local_res8);
    if (0.0 < (float)local_res8) {
      this->PatchProgress = (float)local_res18[0] / (float)local_res8;
      local_10 = FFieldNotificationClassDescriptor::PatchProgress.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::PatchProgress.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      this->Vis_PatchProgress = SelfHitTestInvisible;
      local_10 = FFieldNotificationClassDescriptor::Vis_PatchProgress.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::Vis_PatchProgress.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// ProcessPakDownloader @ 14c03d540

void __thiscall
UDS_VM_W_Patcher::ProcessPakDownloader(UDS_VM_W_Patcher *this,FDS_VersionInfo *param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UWN_PakDownloader *this_00;
  UDS_VM_W_Patcher *local_res8;
  FString local_48;
  void *local_38;
  undefined4 local_30;
  int iStack_2c;
  bool local_28;
  undefined1 *local_20;
  
  ::FString::operator=(&UDS_GameInstance::Urls,&param_1->Urls);
  bVar2 = FWeakObjectPtr::IsValid(&(this->PakDownloader).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->PakDownloader).WeakPtr);
    local_48.Data.ArrayNum = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnPostProcessCallback;
    local_48.Data.ArrayMax = iStack_2c;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3[3].field_0x10,
               (FWriteAccessScope *)&local_38);
    local_20 = &pUVar3[3].field_0x18;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Patcher____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_Patcher *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_Patcher *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
      puVar4[4] = local_48.Data.AllocatorInstance.Data;
      puVar4[5] = CONCAT44(local_48.Data.ArrayMax,local_48.Data.ArrayNum);
    }
    if (local_28 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(iStack_2c,local_30),
                 (FDestructionSentinel *)&local_38);
    }
    this_00 = (UWN_PakDownloader *)FWeakObjectPtr::Get(&(this->PakDownloader).WeakPtr);
    iVar1 = param_1->PakVersion;
    ::FString::FString((FString *)&local_38,L"Master");
    ::FString::FString(&local_48,L"ProjectDS");
    bVar2 = UWN_PakDownloader::Process
                      (this_00,&local_48,(FString *)&local_38,&param_1->Platform,iVar1,
                       &param_1->BaseUrl);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38);
    }
    if (!bVar2) {
      OnPostProcessCallback(this,false);
    }
  }
  return;
}

// UpdatePatchProgress @ 14c04db40

void __thiscall UDS_VM_W_Patcher::UpdatePatchProgress(UDS_VM_W_Patcher *this)

{
  bool bVar1;
  UWN_PakDownloader *this_00;
  ulong64 local_res8;
  ulong64 local_res10;
  FName local_18;
  int local_10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->PakDownloader).WeakPtr);
  if (bVar1) {
    local_res10 = 0;
    local_res8 = 0;
    this_00 = (UWN_PakDownloader *)FWeakObjectPtr::Get(&(this->PakDownloader).WeakPtr);
    UWN_PakDownloader::GetDownloadedSize(this_00,&local_res10,&local_res8);
    if (0.0 < (float)local_res8) {
      this->PatchProgress = (float)local_res10 / (float)local_res8;
      local_10 = FFieldNotificationClassDescriptor::PatchProgress.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::PatchProgress.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      this->Vis_PatchProgress = SelfHitTestInvisible;
      local_10 = FFieldNotificationClassDescriptor::Vis_PatchProgress.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::Vis_PatchProgress.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

