// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b489130

UClass * __cdecl UDS_DungeonPlayBuildManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonPlayBuildManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonPlayBuildManager",
               &Z_Registration_Info_UClass_UDS_DungeonPlayBuildManager.InnerSingleton,
               StaticRegisterNativesUDS_DungeonPlayBuildManager,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_DungeonPlayBuildManager>,
               InternalVTableHelperCtorCaller<UDS_DungeonPlayBuildManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonPlayBuildManager.InnerSingleton;
}

// UDS_DungeonPlayBuildManager @ 14b48afe0

UDS_DungeonPlayBuildManager * __thiscall
UDS_DungeonPlayBuildManager::UDS_DungeonPlayBuildManager
          (UDS_DungeonPlayBuildManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DungeonPlayBuildManager__6B_;
  (this->DungeonPlayBuild_DebugScreen).field0_0x0.DebugPtr = (UDS_DungeonPlayBuild_DebugScreen *)0x0
  ;
  ::FString::FString(&this->GameServerAddr,"");
  this->DungeonID = 0;
  this->AccountAuthority = None;
  (this->JumpToPlayerNickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JumpToPlayerNickname).Data.ArrayNum = 0;
  (this->JumpToPlayerNickname).Data.ArrayMax = 0;
  (this->ExecuteRequestRaidPartyInDungeonTimer).Handle = 0;
  return this;
}

// UDS_DungeonPlayBuildManager @ 14b48b040

UDS_DungeonPlayBuildManager * __thiscall
UDS_DungeonPlayBuildManager::UDS_DungeonPlayBuildManager
          (UDS_DungeonPlayBuildManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DungeonPlayBuildManager__6B_;
  (this->DungeonPlayBuild_DebugScreen).field0_0x0.DebugPtr = (UDS_DungeonPlayBuild_DebugScreen *)0x0
  ;
  ::FString::FString(&this->GameServerAddr,"");
  this->DungeonID = 0;
  this->AccountAuthority = None;
  (this->JumpToPlayerNickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JumpToPlayerNickname).Data.ArrayNum = 0;
  (this->JumpToPlayerNickname).Data.ArrayMax = 0;
  (this->ExecuteRequestRaidPartyInDungeonTimer).Handle = 0;
  return this;
}

// ~UDS_DungeonPlayBuildManager @ 14b48bc80

void __thiscall
UDS_DungeonPlayBuildManager::~UDS_DungeonPlayBuildManager(UDS_DungeonPlayBuildManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_DungeonPlayBuildManager__6B_;
  pFVar1 = (this->JumpToPlayerNickname).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameServerAddr).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b48d0d0

UClass * __cdecl UDS_DungeonPlayBuildManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonPlayBuildManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonPlayBuildManager",
               &Z_Registration_Info_UClass_UDS_DungeonPlayBuildManager.InnerSingleton,
               StaticRegisterNativesUDS_DungeonPlayBuildManager,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_DungeonPlayBuildManager>,
               InternalVTableHelperCtorCaller<UDS_DungeonPlayBuildManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonPlayBuildManager.InnerSingleton;
}

// StaticRegisterNativesUDS_DungeonPlayBuildManager @ 14b48d7d0

void __cdecl UDS_DungeonPlayBuildManager::StaticRegisterNativesUDS_DungeonPlayBuildManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_DungeonPlayBuildManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnGameServerConnected @ 14b48e8f0

void __cdecl
UDS_DungeonPlayBuildManager::execOnGameServerConnected
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnGameServerConnected((UDS_DungeonPlayBuildManager *)param_1,local_res10[0] != 0);
  return;
}

// ConnectToGameServer @ 14bafad60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_DungeonPlayBuildManager::ConnectToGameServer(UDS_DungeonPlayBuildManager *this)

{
  char *pcVar1;
  FString *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UDS_NetworkManager *pUVar6;
  UDS_NetworkManager *pUVar7;
  bool bVar8;
  int iVar9;
  UDS_GameInstance *this_00;
  UClass *pUVar10;
  UDS_NetworkManager *this_01;
  UDS_NetworkManager *pUVar11;
  UDS_DungeonPlayBuildManager *pUVar12;
  UObject *this_02;
  UFunction *pUVar13;
  UDS_LogManager *pUVar14;
  ForAnyElementType _Str;
  FWeakObjectPtr *this_03;
  UDS_NetworkManager *pUVar15;
  FWeakObjectPtr *pFVar16;
  undefined1 auStackY_508 [32];
  <lambda_1> local_4c5 [5];
  FString local_4c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4b0;
  FWeakObjectPtr local_4a8;
  FName local_4a0;
  FString local_498;
  undefined8 local_488;
  FName local_480;
  FString local_478;
  FString local_468;
  FName local_458;
  FName local_450;
  UDS_NetworkManager *local_448;
  FName *local_440;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FDestructionSentinel local_3f8;
  FReadAccessScope local_3e0;
  FReadAccessScope local_3c8;
  FReadAccessScope local_3b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_508;
  this_00 = UDS_GameInstance::GetInst();
  pUVar15 = (UDS_NetworkManager *)0x0;
  iVar9 = 0;
  if (this_00 == (UDS_GameInstance *)0x0) goto LAB_14bafb426;
  pUVar10 = Z_Construct_UClass_UDS_NetworkManager_NoRegister();
  this_01 = (UDS_NetworkManager *)UDS_GameInstance::GetManager(this_00,(FName)pUVar10->_padding_);
  if (this_01 == (UDS_NetworkManager *)0x0) {
LAB_14bafadda:
    this_01 = pUVar15;
  }
  else {
    pUVar10 = Z_Construct_UClass_UDS_NetworkManager_NoRegister();
    iVar3 = (int)pUVar10->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar10->_padding_)) goto LAB_14bafadda;
  }
  if (this_01 == (UDS_NetworkManager *)0x0) {
LAB_14bafb426:
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 != (UDS_LogManager *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_DungeonPlayBuildManager::ConnectToGameServer",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar14,1,Warning,local_158.Ptr,0x4e,L"[DUNGEONPLAY] netMng is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561292346969555023>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_DungeonPlayBuildManager.cpp"
                       ,0x4f,"false");
    if (!bVar8) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar11 = (UDS_NetworkManager *)strstr("&UDS_DungeonPlayBuildManager::OnGameServerConnected","::")
  ;
  pUVar7 = pUVar15;
  while (pUVar6 = pUVar11, pUVar6 != (UDS_NetworkManager *)0x0) {
    pUVar11 = (UDS_NetworkManager *)strstr((char *)((longlong)&pUVar6->_padding_ + 1),"::");
    pUVar7 = pUVar6;
  }
  pcVar1 = (char *)((longlong)&pUVar7->_padding_ + 2);
  if (((pUVar7 == (UDS_NetworkManager *)0x0) || (*pcVar1 == '0')) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ::FName::FName(&local_458,pcVar1);
  if ((this == (UDS_DungeonPlayBuildManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_01->OnConnectResult,
             &local_3e0);
  this_03 = *(FWeakObjectPtr **)&(this_01->OnConnectResult).field_0x8;
  pFVar16 = this_03 + (longlong)*(int *)&(this_01->OnConnectResult).field_0x10 * 2;
  for (; this_03 != pFVar16; this_03 = this_03 + 2) {
    if (((*(FName *)(this_03 + 1) == local_458) && (this != (UDS_DungeonPlayBuildManager *)0x0)) &&
       (pUVar12 = (UDS_DungeonPlayBuildManager *)FWeakObjectPtr::GetEvenIfUnreachable(this_03),
       this == pUVar12)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_3e0);
      if (this_03 == (FWeakObjectPtr *)0x0) goto LAB_14bafaf0c;
      goto LAB_14bafb11c;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_3e0);
LAB_14bafaf0c:
  pUVar11 = (UDS_NetworkManager *)strstr("&UDS_DungeonPlayBuildManager::OnGameServerConnected","::")
  ;
  pUVar7 = pUVar15;
  while (pUVar6 = pUVar11, pUVar6 != (UDS_NetworkManager *)0x0) {
    pUVar11 = (UDS_NetworkManager *)strstr((char *)((longlong)&pUVar6->_padding_ + 1),"::");
    pUVar7 = pUVar6;
  }
  pcVar1 = (char *)((longlong)&pUVar7->_padding_ + 2);
  if (((pUVar7 == (UDS_NetworkManager *)0x0) || (*pcVar1 == '0')) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ::FName::FName(&local_450,pcVar1);
  if ((this == (UDS_DungeonPlayBuildManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_4b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_4a8.ObjectIndex = 0;
  local_4a8.ObjectSerialNumber = 0;
  local_4a0.ComparisonIndex.Value = 0;
  local_4a0.Number = 0;
  local_480 = local_450;
  local_448 = (UDS_NetworkManager *)this;
  if ((this == (UDS_DungeonPlayBuildManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), local_448 = pUVar15, bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_448 != (UDS_NetworkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_448);
  }
  FWeakObjectPtr::operator=(&local_4a8,(FObjectPtr)&local_448);
  local_4a0 = local_480;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_4b0,&local_3c8);
  local_488 = 0;
  if ((local_4a0 == (FName)0x0) ||
     (this_02 = FWeakObjectPtr::Get(&local_4a8), this_02 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3c8);
  }
  else {
    pUVar13 = UObject::FindFunction(this_02,local_4a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3c8);
    if (pUVar13 != (UFunction *)0x0) goto LAB_14bafb0ab;
  }
  local_440 = &local_480;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool>::
  __Internal_BindDynamic<UDS_DungeonPlayBuildManager>'::__l2::<lambda_1>::operator()(&local_440);
LAB_14bafb0ab:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_4b0,&local_3b0);
  local_438.Object = local_4a8;
  local_438.FunctionName = local_4a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_3b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_01->OnConnectResult,
             (FWriteAccessScope *)&local_3f8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(this_01->OnConnectResult).field_0x8,local_4c5,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_01->OnConnectResult,
             &local_438);
  if (local_3f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f8.Accessor,&local_3f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4b0.AccessDetector);
LAB_14bafb11c:
  ::FString::FString(&local_4c0,"");
  UKismetSystemLibrary::GetCommandLine(&local_418);
  ::FString::FString(&local_428,"DungeonServer=");
  bVar8 = UKismetSystemLibrary::ParseParamValue(&local_418,&local_428,&local_4c0);
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  if (!bVar8) {
    ::FString::operator=(&local_4c0,L"20.41.121.211:32101");
  }
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  pFVar2 = &this->GameServerAddr;
  if (pFVar2 != &local_4c0) {
    pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_4c0.Data.AllocatorInstance.Data;
    (this->GameServerAddr).Data.ArrayNum = local_4c0.Data.ArrayNum;
    (this->GameServerAddr).Data.ArrayMax = local_4c0.Data.ArrayMax;
    local_4c0.Data.ArrayNum = 0;
    local_4c0.Data.ArrayMax = 0;
    local_4c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_478,"");
  ::FString::FString(&local_468,"");
  ::FString::FString(&local_408,L":");
  bVar8 = ::FString::Split(pFVar2,&local_408,&local_478,&local_468);
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_468.Data.ArrayNum != 0) {
      _Str.Data = local_468.Data.AllocatorInstance.Data;
    }
    iVar9 = _wtoi((wchar_t *)_Str.Data);
  }
  pUVar14 = UDS_LogManager::GetInst();
  if (pUVar14 != (UDS_LogManager *)0x0) {
    pUVar14 = UDS_LogManager::GetInst();
    local_398._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_398,"UDS_DungeonPlayBuildManager::ConnectToGameServer",0x30,Yes);
    UDS_LogManager::PrintLog
              (pUVar14,1,Display,local_398.Ptr,0x62,
               L"[DUNGEONPLAY] Request ConnectToGameServer. (%s:%d)");
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
  }
  bVar8 = UDS_NetworkManager::Connect(this_01,&local_478,iVar9);
  if (!bVar8) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 != (UDS_LogManager *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_DungeonPlayBuildManager::ConnectToGameServer",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar14,1,Warning,local_278.Ptr,0x65,L"[DUNGEONPLAY] ConnectToGameServer failed.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561292346969555046>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_DungeonPlayBuildManager.cpp"
                       ,0x66,"false");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::FString::FString(&local_498,"");
    pFVar2 = &this->GameServerAddr;
    if (pFVar2 != &local_498) {
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar2->Data).AllocatorInstance.Data = local_498.Data.AllocatorInstance.Data;
      (this->GameServerAddr).Data.ArrayNum = local_498.Data.ArrayNum;
      (this->GameServerAddr).Data.ArrayMax = local_498.Data.ArrayMax;
      local_498.Data.ArrayNum = 0;
      local_498.Data.ArrayMax = 0;
      local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
  }
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  if (local_478.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_478.Data.AllocatorInstance.Data);
  return;
}

// Created @ 14bb01320

void __thiscall UDS_DungeonPlayBuildManager::Created(UDS_DungeonPlayBuildManager *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType _Str;
  EDS_AccountAuthority EVar5;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  *(undefined1 *)&this->_padding_ = 0;
  ::FString::FString(&local_38,"");
  UKismetSystemLibrary::GetCommandLine(&local_28);
  ::FString::FString(&local_18,"Authority=");
  bVar3 = UKismetSystemLibrary::ParseParamValue(&local_28,&local_18,&local_38);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      _Str.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar4 = _wtoi((wchar_t *)_Str.Data);
    EVar5 = (EDS_AccountAuthority)iVar4;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    EVar5 = None;
  }
  this->AccountAuthority = EVar5;
  ::FString::FString(&local_48,"");
  UKismetSystemLibrary::GetCommandLine(&local_28);
  ::FString::FString(&local_18,"JumpToPlayer=");
  UKismetSystemLibrary::ParseParamValue(&local_28,&local_18,&local_48);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->JumpToPlayerNickname;
  if (pFVar1 != &local_48) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->JumpToPlayerNickname).Data.ArrayNum = local_48.Data.ArrayNum;
    (this->JumpToPlayerNickname).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// ExecuteRequestRaidPartyInDungeon @ 14bb07ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuildManager::ExecuteRequestRaidPartyInDungeon(UDS_DungeonPlayBuildManager *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  FDS_RaidPartyService::RequestRaidPartyInDungeon();
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar1 = FTimerManager::FindTimer(this_00,&this->ExecuteRequestRaidPartyInDungeonTimer);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (this_00,(FTimerHandle)(this->ExecuteRequestRaidPartyInDungeonTimer).Handle);
  }
  (this->ExecuteRequestRaidPartyInDungeonTimer).Handle = 0;
  return;
}

// GetAccountAuthorityFromCommandLine @ 14bb096e0

EDS_AccountAuthority __thiscall
UDS_DungeonPlayBuildManager::GetAccountAuthorityFromCommandLine(UDS_DungeonPlayBuildManager *this)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType _Str;
  EDS_AccountAuthority EVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,"");
  UKismetSystemLibrary::GetCommandLine(&local_18);
  ::FString::FString(&local_28,"Authority=");
  bVar1 = UKismetSystemLibrary::ParseParamValue(&local_18,&local_28,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = None;
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      _Str.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)_Str.Data);
    EVar3 = (EDS_AccountAuthority)iVar2;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return EVar3;
}

// GetDungeonID @ 14bb0a3c0

int * __thiscall UDS_DungeonPlayBuildManager::GetDungeonID(UDS_DungeonPlayBuildManager *this)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType _Str;
  FString local_38;
  FString local_28;
  FString local_18;
  
  piVar1 = &this->DungeonID;
  if (this->DungeonID == 0) {
    ::FString::FString(&local_38,"");
    UKismetSystemLibrary::GetCommandLine(&local_28);
    ::FString::FString(&local_18,"DungeonID=");
    bVar2 = UKismetSystemLibrary::ParseParamValue(&local_28,&local_18,&local_38);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (!bVar2) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      *piVar1 = 1;
      return piVar1;
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      _Str.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar3 = _wtoi((wchar_t *)_Str.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    *piVar1 = iVar3;
  }
  return piVar1;
}

// GetDungeonIDFromCommandLine @ 14bb0a4c0

int __thiscall
UDS_DungeonPlayBuildManager::GetDungeonIDFromCommandLine(UDS_DungeonPlayBuildManager *this)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType _Str;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,"");
  UKismetSystemLibrary::GetCommandLine(&local_18);
  ::FString::FString(&local_28,"DungeonID=");
  bVar1 = UKismetSystemLibrary::ParseParamValue(&local_18,&local_28,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      _Str.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)_Str.Data);
  }
  else {
    iVar2 = 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return iVar2;
}

// GetGameServerAddrFromCommandLine @ 14bb0b250

FString * __thiscall
UDS_DungeonPlayBuildManager::GetGameServerAddrFromCommandLine
          (UDS_DungeonPlayBuildManager *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString local_28;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,"");
  UKismetSystemLibrary::GetCommandLine(&local_18);
  ::FString::FString(&local_28,"DungeonServer=");
  bVar1 = UKismetSystemLibrary::ParseParamValue(&local_18,&local_28,__return_storage_ptr__);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar1) {
    ::FString::operator=(__return_storage_ptr__,L"20.41.121.211:32101");
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetInst @ 14bb0b720

UDS_DungeonPlayBuildManager * __cdecl UDS_DungeonPlayBuildManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_DungeonPlayBuildManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_DungeonPlayBuildManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_DungeonPlayBuildManager_NoRegister();
  pUVar3 = (UDS_DungeonPlayBuildManager *)
           UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_DungeonPlayBuildManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_DungeonPlayBuildManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_DungeonPlayBuildManager *)0x0;
}

// GetJumpToPlayerNicknameFromCommandLine @ 14bb0c080

FString * __thiscall
UDS_DungeonPlayBuildManager::GetJumpToPlayerNicknameFromCommandLine
          (UDS_DungeonPlayBuildManager *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,"");
  UKismetSystemLibrary::GetCommandLine(&local_18);
  ::FString::FString(&local_28,"JumpToPlayer=");
  UKismetSystemLibrary::ParseParamValue(&local_18,&local_28,__return_storage_ptr__);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMemberNeedCountFromCommandLine @ 14bb0c220

int __thiscall
UDS_DungeonPlayBuildManager::GetMemberNeedCountFromCommandLine(UDS_DungeonPlayBuildManager *this)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType _Str;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,"");
  UKismetSystemLibrary::GetCommandLine(&local_18);
  ::FString::FString(&local_28,"MemberNeedCount=");
  bVar1 = UKismetSystemLibrary::ParseParamValue(&local_18,&local_28,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      _Str.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)_Str.Data);
  }
  else {
    iVar2 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return iVar2;
}

// Init @ 14bb13500

void __thiscall UDS_DungeonPlayBuildManager::Init(UDS_DungeonPlayBuildManager *this)

{
  return;
}

// OnGameServerConnected @ 14bb1e260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuildManager::OnGameServerConnected(UDS_DungeonPlayBuildManager *this,bool param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_3b8 [32];
  FString local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  if (param_1) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"UDS_DungeonPlayBuildManager::OnGameServerConnected",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Display,local_378.Ptr,0x71,L"[DUNGEONPLAY] ConnectToGameServer succeeded."
                );
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_DungeonPlayBuildManager::OnGameServerConnected",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Display,local_258.Ptr,0x7c,L"[DUNGEONPLAY] Request RequestJoinGameServer."
                );
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    FDS_LoginService::RequestJoinGameServer();
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_DungeonPlayBuildManager::OnGameServerConnected",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x75,L"[DUNGEONPLAY] ConnectToGameServer failed.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561292346969555062>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_DungeonPlayBuildManager.cpp"
                       ,0x76,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FString::FString(&local_388,"");
    pFVar1 = &this->GameServerAddr;
    if (pFVar1 != &local_388) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_388.Data.AllocatorInstance.Data;
      (this->GameServerAddr).Data.ArrayNum = local_388.Data.ArrayNum;
      (this->GameServerAddr).Data.ArrayMax = local_388.Data.ArrayMax;
      local_388.Data.ArrayNum = 0;
      local_388.Data.ArrayMax = 0;
      local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnLoadResourceCompleted @ 14bb1e8b0

void __thiscall
UDS_DungeonPlayBuildManager::OnLoadResourceCompleted(UDS_DungeonPlayBuildManager *this)

{
  UDS_GameInstance *this_00;
  
  if (((this->AccountAuthority == GmInvisible) && (1 < (this->JumpToPlayerNickname).Data.ArrayNum))
     && (this_00 = UDS_GameInstance::GetInst(), this_00 != (UDS_GameInstance *)0x0)) {
    UDS_GameInstance::JumpToPlayer(this_00,&this->JumpToPlayerNickname);
    return;
  }
  return;
}

// PreDestroyed @ 14bb27640

void __thiscall UDS_DungeonPlayBuildManager::PreDestroyed(UDS_DungeonPlayBuildManager *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// ReserveRequestRaidPartyInDungeon @ 14bb327f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuildManager::ReserveRequestRaidPartyInDungeon(UDS_DungeonPlayBuildManager *this)

{
  FTimerManager *pFVar1;
  FTimerData *pFVar2;
  
  if ((this->ExecuteRequestRaidPartyInDungeonTimer).Handle != 0) {
    pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(pFVar1,&this->ExecuteRequestRaidPartyInDungeonTimer);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar1,(FTimerHandle)(this->ExecuteRequestRaidPartyInDungeonTimer).Handle);
    }
    (this->ExecuteRequestRaidPartyInDungeonTimer).Handle = 0;
  }
  pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer<UDS_DungeonPlayBuildManager>
            (pFVar1,&this->ExecuteRequestRaidPartyInDungeonTimer,this,(pmf_41780ea4)0x14bb07ff0,
             __real_40400000,false,__real_bf800000);
  return;
}

// Reset @ 14bb32b20

void __thiscall UDS_DungeonPlayBuildManager::Reset(UDS_DungeonPlayBuildManager *this)

{
  return;
}

// StartLogin @ 14bb39760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_DungeonPlayBuildManager::StartLogin(UDS_DungeonPlayBuildManager *this)

{
  char *pcVar1;
  FString *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UDS_NetworkManager *pUVar6;
  UDS_NetworkManager *pUVar7;
  bool bVar8;
  int iVar9;
  UDS_GameInstance *this_00;
  UClass *pUVar10;
  UDS_NetworkManager *this_01;
  UDS_NetworkManager *pUVar11;
  UDS_DungeonPlayBuildManager *pUVar12;
  UObject *this_02;
  UFunction *pUVar13;
  UDS_LogManager *pUVar14;
  ForAnyElementType _Str;
  FWeakObjectPtr *this_03;
  UDS_NetworkManager *pUVar15;
  FWeakObjectPtr *pFVar16;
  undefined1 auStackY_508 [32];
  <lambda_1> a<Stack_4c5 [5];
  FString FStack_4c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_4b0;
  FWeakObjectPtr FStack_4a8;
  FName FStack_4a0;
  FString FStack_498;
  undefined8 uStack_488;
  FName FStack_480;
  FString FStack_478;
  FString FStack_468;
  FName FStack_458;
  FName FStack_450;
  UDS_NetworkManager *pUStack_448;
  FName *pFStack_440;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> TStack_438;
  FString FStack_428;
  FString FStack_418;
  FString FStack_408;
  FDestructionSentinel FStack_3f8;
  FReadAccessScope FStack_3e0;
  FReadAccessScope FStack_3c8;
  FReadAccessScope FStack_3b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_508;
  this_00 = UDS_GameInstance::GetInst();
  pUVar15 = (UDS_NetworkManager *)0x0;
  iVar9 = 0;
  if (this_00 == (UDS_GameInstance *)0x0) goto LAB_14bafb426;
  pUVar10 = Z_Construct_UClass_UDS_NetworkManager_NoRegister();
  this_01 = (UDS_NetworkManager *)UDS_GameInstance::GetManager(this_00,(FName)pUVar10->_padding_);
  if (this_01 == (UDS_NetworkManager *)0x0) {
LAB_14bafadda:
    this_01 = pUVar15;
  }
  else {
    pUVar10 = Z_Construct_UClass_UDS_NetworkManager_NoRegister();
    iVar3 = (int)pUVar10->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar10->_padding_)) goto LAB_14bafadda;
  }
  if (this_01 == (UDS_NetworkManager *)0x0) {
LAB_14bafb426:
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 != (UDS_LogManager *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      TStack_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_158,"UDS_DungeonPlayBuildManager::ConnectToGameServer",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar14,1,Warning,TStack_158.Ptr,0x4e,L"[DUNGEONPLAY] netMng is nullptr.");
      if ((void *)TStack_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_158._padding_);
      }
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561292346969555023>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_DungeonPlayBuildManager.cpp"
                       ,0x4f,"false");
    if (!bVar8) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar11 = (UDS_NetworkManager *)strstr("&UDS_DungeonPlayBuildManager::OnGameServerConnected","::")
  ;
  pUVar7 = pUVar15;
  while (pUVar6 = pUVar11, pUVar6 != (UDS_NetworkManager *)0x0) {
    pUVar11 = (UDS_NetworkManager *)strstr((char *)((longlong)&pUVar6->_padding_ + 1),"::");
    pUVar7 = pUVar6;
  }
  pcVar1 = (char *)((longlong)&pUVar7->_padding_ + 2);
  if (((pUVar7 == (UDS_NetworkManager *)0x0) || (*pcVar1 == '0')) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ::FName::FName(&FStack_458,pcVar1);
  if ((this == (UDS_DungeonPlayBuildManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_01->OnConnectResult,
             &FStack_3e0);
  this_03 = *(FWeakObjectPtr **)&(this_01->OnConnectResult).field_0x8;
  pFVar16 = this_03 + (longlong)*(int *)&(this_01->OnConnectResult).field_0x10 * 2;
  for (; this_03 != pFVar16; this_03 = this_03 + 2) {
    if (((*(FName *)(this_03 + 1) == FStack_458) && (this != (UDS_DungeonPlayBuildManager *)0x0)) &&
       (pUVar12 = (UDS_DungeonPlayBuildManager *)FWeakObjectPtr::GetEvenIfUnreachable(this_03),
       this == pUVar12)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_3e0);
      if (this_03 == (FWeakObjectPtr *)0x0) goto LAB_14bafaf0c;
      goto LAB_14bafb11c;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_3e0);
LAB_14bafaf0c:
  pUVar11 = (UDS_NetworkManager *)strstr("&UDS_DungeonPlayBuildManager::OnGameServerConnected","::")
  ;
  pUVar7 = pUVar15;
  while (pUVar6 = pUVar11, pUVar6 != (UDS_NetworkManager *)0x0) {
    pUVar11 = (UDS_NetworkManager *)strstr((char *)((longlong)&pUVar6->_padding_ + 1),"::");
    pUVar7 = pUVar6;
  }
  pcVar1 = (char *)((longlong)&pUVar7->_padding_ + 2);
  if (((pUVar7 == (UDS_NetworkManager *)0x0) || (*pcVar1 == '0')) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ::FName::FName(&FStack_450,pcVar1);
  if ((this == (UDS_DungeonPlayBuildManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TStack_4b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_4a8.ObjectIndex = 0;
  FStack_4a8.ObjectSerialNumber = 0;
  FStack_4a0.ComparisonIndex.Value = 0;
  FStack_4a0.Number = 0;
  FStack_480 = FStack_450;
  pUStack_448 = (UDS_NetworkManager *)this;
  if ((this == (UDS_DungeonPlayBuildManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), pUStack_448 = pUVar15, bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_448 != (UDS_NetworkManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_448);
  }
  FWeakObjectPtr::operator=(&FStack_4a8,(FObjectPtr)&pUStack_448);
  FStack_4a0 = FStack_480;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&TStack_4b0,&FStack_3c8);
  uStack_488 = 0;
  if ((FStack_4a0 == (FName)0x0) ||
     (this_02 = FWeakObjectPtr::Get(&FStack_4a8), this_02 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_3c8);
  }
  else {
    pUVar13 = UObject::FindFunction(this_02,FStack_4a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_3c8);
    if (pUVar13 != (UFunction *)0x0) goto LAB_14bafb0ab;
  }
  pFStack_440 = &FStack_480;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool>::
  __Internal_BindDynamic<UDS_DungeonPlayBuildManager>'::__l2::<lambda_1>::operator()(&pFStack_440);
LAB_14bafb0ab:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&TStack_4b0,&FStack_3b0);
  TStack_438.Object = FStack_4a8;
  TStack_438.FunctionName = FStack_4a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_3b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_01->OnConnectResult,
             (FWriteAccessScope *)&FStack_3f8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(this_01->OnConnectResult).field_0x8,a<Stack_4c5,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_01->OnConnectResult,
             &TStack_438);
  if (FStack_3f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_3f8.Accessor,&FStack_3f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_4b0.AccessDetector);
LAB_14bafb11c:
  ::FString::FString(&FStack_4c0,"");
  UKismetSystemLibrary::GetCommandLine(&FStack_418);
  ::FString::FString(&FStack_428,"DungeonServer=");
  bVar8 = UKismetSystemLibrary::ParseParamValue(&FStack_418,&FStack_428,&FStack_4c0);
  if (FStack_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_428.Data.AllocatorInstance.Data);
  }
  if (!bVar8) {
    ::FString::operator=(&FStack_4c0,L"20.41.121.211:32101");
  }
  if (FStack_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_418.Data.AllocatorInstance.Data);
  }
  pFVar2 = &this->GameServerAddr;
  if (pFVar2 != &FStack_4c0) {
    pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar2->Data).AllocatorInstance.Data = FStack_4c0.Data.AllocatorInstance.Data;
    (this->GameServerAddr).Data.ArrayNum = FStack_4c0.Data.ArrayNum;
    (this->GameServerAddr).Data.ArrayMax = FStack_4c0.Data.ArrayMax;
    FStack_4c0.Data.ArrayNum = 0;
    FStack_4c0.Data.ArrayMax = 0;
    FStack_4c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4c0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&FStack_478,"");
  ::FString::FString(&FStack_468,"");
  ::FString::FString(&FStack_408,L":");
  bVar8 = ::FString::Split(pFVar2,&FStack_408,&FStack_478,&FStack_468);
  if (FStack_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_408.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (FStack_468.Data.ArrayNum != 0) {
      _Str.Data = FStack_468.Data.AllocatorInstance.Data;
    }
    iVar9 = _wtoi((wchar_t *)_Str.Data);
  }
  pUVar14 = UDS_LogManager::GetInst();
  if (pUVar14 != (UDS_LogManager *)0x0) {
    pUVar14 = UDS_LogManager::GetInst();
    TStack_398._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_398,"UDS_DungeonPlayBuildManager::ConnectToGameServer",0x30,Yes);
    UDS_LogManager::PrintLog
              (pUVar14,1,Display,TStack_398.Ptr,0x62,
               L"[DUNGEONPLAY] Request ConnectToGameServer. (%s:%d)");
    if ((void *)TStack_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_398._padding_);
    }
  }
  bVar8 = UDS_NetworkManager::Connect(this_01,&FStack_478,iVar9);
  if (!bVar8) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 != (UDS_LogManager *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      TStack_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_278,"UDS_DungeonPlayBuildManager::ConnectToGameServer",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar14,1,Warning,TStack_278.Ptr,0x65,L"[DUNGEONPLAY] ConnectToGameServer failed.")
      ;
      if ((void *)TStack_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_278._padding_);
      }
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7561292346969555046>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_DungeonPlayBuildManager.cpp"
                       ,0x66,"false");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::FString::FString(&FStack_498,"");
    pFVar2 = &this->GameServerAddr;
    if (pFVar2 != &FStack_498) {
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar2->Data).AllocatorInstance.Data = FStack_498.Data.AllocatorInstance.Data;
      (this->GameServerAddr).Data.ArrayNum = FStack_498.Data.ArrayNum;
      (this->GameServerAddr).Data.ArrayMax = FStack_498.Data.ArrayMax;
      FStack_498.Data.ArrayNum = 0;
      FStack_498.Data.ArrayMax = 0;
      FStack_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (FStack_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_498.Data.AllocatorInstance.Data);
    }
  }
  if (FStack_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_468.Data.AllocatorInstance.Data);
  }
  if (FStack_478.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(FStack_478.Data.AllocatorInstance.Data);
  return;
}

// Update @ 14bb3eef0

void __thiscall
UDS_DungeonPlayBuildManager::Update(UDS_DungeonPlayBuildManager *this,float *param_1)

{
  return;
}

