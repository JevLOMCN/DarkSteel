// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 18

// ~IOnlineSubsystem @ 14eb35800

void __thiscall IOnlineSubsystem::~IOnlineSubsystem(IOnlineSubsystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlineSubsystem__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnConfigChangedDelegates).field_0x8,
             *(int *)&(this->OnConfigChangedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnConfigChangedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConfigChangedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOnlineEnvironmentChangedDelegates).field_0x8,
             *(int *)&(this->OnOnlineEnvironmentChangedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnOnlineEnvironmentChangedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOnlineEnvironmentChangedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnConnectionStatusChangedDelegates).field_0x8,
             *(int *)&(this->OnConnectionStatusChangedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnConnectionStatusChangedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConnectionStatusChangedDelegates);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineNotificationTransportManager).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineNotificationHandler).SharedReferenceCount.ReferenceController);
  return;
}

// AddOnConfigChangedDelegate_Handle @ 14ebb6b30

FDelegateHandle __thiscall
IOnlineSubsystem::AddOnConfigChangedDelegate_Handle
          (IOnlineSubsystem *this,
          TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnConfigChangedDelegates,
        (TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnConnectionStatusChangedDelegate_Handle @ 14ebb6ba0

FDelegateHandle __thiscall
IOnlineSubsystem::AddOnConnectionStatusChangedDelegate_Handle
          (IOnlineSubsystem *this,
          TDelegate<void___cdecl(FString_const_&,EOnlineServerConnectionStatus::Type,EOnlineServerConnectionStatus::Type),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,enum_EOnlineServerConnectionStatus::Type,enum_EOnlineServerConnectionStatus::Type),FDefaultDelegateUserPolicy>
  ::Add(&this->OnConnectionStatusChangedDelegates,
        (TDelegate<void___cdecl(FString_const_&,EOnlineServerConnectionStatus::Type,EOnlineServerConnectionStatus::Type),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnOnlineEnvironmentChangedDelegate_Handle @ 14ebb6cf0

FDelegateHandle __thiscall
IOnlineSubsystem::AddOnOnlineEnvironmentChangedDelegate_Handle
          (IOnlineSubsystem *this,
          TDelegate<void___cdecl(EOnlineEnvironment::Type,EOnlineEnvironment::Type),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(enum_EOnlineEnvironment::Type,enum_EOnlineEnvironment::Type),FDefaultDelegateUserPolicy>
  ::Add(&this->OnOnlineEnvironmentChangedDelegates,
        (TDelegate<void___cdecl(EOnlineEnvironment::Type,EOnlineEnvironment::Type),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// ClearOnConfigChangedDelegate_Handle @ 14ebbbfa0

void __thiscall
IOnlineSubsystem::ClearOnConfigChangedDelegate_Handle
          (IOnlineSubsystem *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnConfigChangedDelegates
               ,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnConfigChangedDelegates @ 14ebbbfd0

void __thiscall
IOnlineSubsystem::ClearOnConfigChangedDelegates(IOnlineSubsystem *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnConfigChangedDelegates,
             param_1);
  return;
}

// ClearOnConnectionStatusChangedDelegate_Handle @ 14ebbbfe0

void __thiscall
IOnlineSubsystem::ClearOnConnectionStatusChangedDelegate_Handle
          (IOnlineSubsystem *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnConnectionStatusChangedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnConnectionStatusChangedDelegates @ 14ebbc010

void __thiscall
IOnlineSubsystem::ClearOnConnectionStatusChangedDelegates(IOnlineSubsystem *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnConnectionStatusChangedDelegates,param_1);
  return;
}

// ClearOnOnlineEnvironmentChangedDelegate_Handle @ 14ebbc0b0

void __thiscall
IOnlineSubsystem::ClearOnOnlineEnvironmentChangedDelegate_Handle
          (IOnlineSubsystem *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnOnlineEnvironmentChangedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnOnlineEnvironmentChangedDelegates @ 14ebbc0e0

void __thiscall
IOnlineSubsystem::ClearOnOnlineEnvironmentChangedDelegates(IOnlineSubsystem *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnOnlineEnvironmentChangedDelegates,param_1);
  return;
}

// DoesInstanceExist @ 14ebef540

bool __cdecl IOnlineSubsystem::DoesInstanceExist(FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FModuleManager *this;
  FName *pFVar4;
  FOnlineSubsystemModule *this_00;
  TSharedPtr<IOnlineSubsystem,1> *pTVar5;
  IOnlineSubsystem *pIVar6;
  IOnlineSubsystem *pIVar7;
  FName local_res10;
  undefined8 local_res18;
  FName local_res20;
  FName local_38;
  FName local_30;
  FName local_28 [2];
  
  this = FModuleManager::Get();
  pFVar4 = ::FName::FName(&local_30,"OnlineSubsystem");
  bVar2 = FModuleManager::IsModuleLoaded(this,*pFVar4);
  if (!bVar2) {
    return false;
  }
  pFVar4 = ::FName::FName(local_28,"OnlineSubsystem");
  this_00 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar4);
  local_res20 = *param_1;
  pIVar6 = (IOnlineSubsystem *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res18 = 0;
  FOnlineSubsystemModule::ParseOnlineSubsystemName(this_00,&local_38,&local_res20,&local_res10);
  if (local_res10 != (FName)0x0) {
    lpCriticalSection = &this_00->OnlineSubsystemsLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = TMapBase<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
             ::Find((TMapBase<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
                     *)&this_00->OnlineSubsystems,local_38);
    pIVar7 = pIVar6;
    if (pTVar5 != (TSharedPtr<IOnlineSubsystem,1> *)0x0) {
      pIVar7 = (IOnlineSubsystem *)(pTVar5->SharedReferenceCount).ReferenceController;
      pIVar6 = pTVar5->Object;
      if (pIVar7 != (IOnlineSubsystem *)0x0) {
        LOCK();
        *(int *)&(pIVar7->OnlineNotificationHandler).Object =
             *(int *)&(pIVar7->OnlineNotificationHandler).Object + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pIVar7);
    return pIVar6 != (IOnlineSubsystem *)0x0;
  }
  return false;
}

// Get @ 14ebfbbf0

IOnlineSubsystem * __cdecl IOnlineSubsystem::Get(FName *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FOnlineSubsystemModule *pFVar1;
  IOnlineSubsystem *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                      ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
      _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar1 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                     (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                      ::__l2::OnlineSubsystemModuleName);
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00014ebfbc3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar2 = (IOnlineSubsystem *)(*UNRECOVERED_JUMPTABLE)(pFVar1,*param_1,UNRECOVERED_JUMPTABLE);
  return pIVar2;
}

// GetLocalPlatformName @ 14ec00650

FString * __cdecl IOnlineSubsystem::GetLocalPlatformName(FString *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  FScriptContainerElement *pFVar2;
  TConsoleVariableData<FString> *pTVar3;
  bool bVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  pTVar3 = CVarPlatformOverride.Ref;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar5 = 0x10;
    if (!bVar4) goto LAB_14ec00691;
  }
  lVar5 = 0;
LAB_14ec00691:
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)((longlong)&pTVar3->ShadowedValue[0].Data.ArrayNum + lVar5);
  _Src = *(void **)((longlong)&pTVar3->ShadowedValue[0].Data.AllocatorInstance.Data + lVar5);
  local_18.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
  if (__return_storage_ptr__ != &local_18) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    pwVar6 = FCommandLine::Get();
    FParse::Value(pwVar6,L"PLATFORMTEST=",__return_storage_ptr__,true,(wchar_t **)0x0);
    if (((__return_storage_ptr__->Data).ArrayNum < 2) &&
       (FConfigCacheIni::GetString
                  (GConfig,L"OnlineSubsystem",L"LocalPlatformName",__return_storage_ptr__,
                   &GEngineIni), (__return_storage_ptr__->Data).ArrayNum < 2)) {
      ::FString::operator=(__return_storage_ptr__,L"OTHER");
      return __return_storage_ptr__;
    }
  }
  ::FString::ToUpperInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsEnabled @ 14ec09f90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IOnlineSubsystem::IsEnabled(FName *param_1,FName *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  int iVar8;
  bool local_res18 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FName::ToString(param_1,&local_48);
  ::FString::PrintfImpl(&local_58,L"no%s");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  pwVar4 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar4,(wchar_t *)FVar6.Data);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    local_res18[0] = bVar2;
    ::FName::ToString(param_1,&local_48);
    ::FString::PrintfImpl(&local_68,L"OnlineSubsystem%s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChars(&local_68,(wchar_t *)0x0,0);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar6.Data = local_68.Data.AllocatorInstance.Data;
    }
    bVar2 = FConfigCacheIni::GetBool
                      (GConfig,(wchar_t *)FVar6.Data,L"bEnabled",local_res18,&GEngineIni);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (*param_2 != (FName)0x0) {
      pFVar5 = ::FName::ToString(param_2,&local_38);
      ::FString::ConcatCF(&local_58,L" ",pFVar5);
      iVar1 = local_58.Data.ArrayNum;
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ::FName::ToString(param_1,&local_48);
      ::FString::PrintfImpl(&local_68,L"OnlineSubsystem%s");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      iVar8 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(&local_68,(wchar_t *)FVar6.Data,iVar8);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar7.Data = local_68.Data.AllocatorInstance.Data;
      }
      bVar3 = FConfigCacheIni::GetBool
                        (GConfig,(wchar_t *)FVar7.Data,L"bEnabled",local_res18,&GEngineIni);
      bVar2 = bVar2 || bVar3;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
    }
    if ((byte)LogOnline._0_1_ < 6) {
      if (bVar2 == false) {
        return true;
      }
    }
    else if (bVar2 == false) {
      ::FName::ToString(param_1,&local_38);
      ::FString::PrintfImpl
                (&local_48,L"[OnlineSubsystem%s].bEnabled is not set, defaulting to true");
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return true;
      }
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return true;
    }
    if (local_res18[0] != false) {
      return true;
    }
  }
  return false;
}

// IsLoaded @ 14ec0a260

bool __cdecl IOnlineSubsystem::IsLoaded(FName *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  FModuleManager *this;
  FName *pFVar3;
  FOnlineSubsystemModule *pFVar4;
  FName local_res10 [3];
  
  this = FModuleManager::Get();
  pFVar3 = ::FName::FName(local_res10,"OnlineSubsystem");
  bVar1 = FModuleManager::IsModuleLoaded(this,*pFVar3);
  if (bVar1) {
    pFVar3 = ::FName::FName(local_res10,"OnlineSubsystem");
    pFVar4 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar3);
    uVar2 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4,*param_1);
    return (bool)uVar2;
  }
  return false;
}

// TriggerOnConfigChangedDelegates @ 14ec180b0

void __thiscall
IOnlineSubsystem::TriggerOnConfigChangedDelegates
          (IOnlineSubsystem *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnConfigChangedDelegates,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnConfigChangedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnConfigChangedDelegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnConfigChangedDelegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnConfigChangedDelegates).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnConfigChangedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnConfigChangedDelegates
               ,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// TriggerOnConnectionStatusChangedDelegates @ 14ec181e0

void __thiscall
IOnlineSubsystem::TriggerOnConnectionStatusChangedDelegates
          (IOnlineSubsystem *this,FString *param_1,Type param_2,Type param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnConnectionStatusChangedDelegates,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnConnectionStatusChangedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnConnectionStatusChangedDelegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnConnectionStatusChangedDelegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnConnectionStatusChangedDelegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2,param_3), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnConnectionStatusChangedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnConnectionStatusChangedDelegates,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// TriggerOnOnlineEnvironmentChangedDelegates @ 14ec184a0

void __thiscall
IOnlineSubsystem::TriggerOnOnlineEnvironmentChangedDelegates
          (IOnlineSubsystem *this,Type param_1,Type param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnOnlineEnvironmentChangedDelegates,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnOnlineEnvironmentChangedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnOnlineEnvironmentChangedDelegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnOnlineEnvironmentChangedDelegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnOnlineEnvironmentChangedDelegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnOnlineEnvironmentChangedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnOnlineEnvironmentChangedDelegates,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

