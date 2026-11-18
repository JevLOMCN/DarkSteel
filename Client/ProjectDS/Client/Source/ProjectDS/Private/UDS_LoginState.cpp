// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// StaticClass @ 14b4e4630

UClass * __cdecl UDS_LoginState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LoginState",
               &Z_Registration_Info_UClass_UDS_LoginState.InnerSingleton,
               StaticRegisterNativesUDS_LoginState,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LoginState>,InternalVTableHelperCtorCaller<UDS_LoginState>,
               local_res8,UDS_GameStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginState.InnerSingleton;
}

// UDS_LoginState @ 14b4e8680

UDS_LoginState * __thiscall
UDS_LoginState::UDS_LoginState(UDS_LoginState *this,FVTableHelper *param_1)

{
  UDS_GameStateBase::UDS_GameStateBase((UDS_GameStateBase *)this,param_1);
  this->APIServer_WaitTimerRate = 0.01;
  this->_padding_ = (longlong)&___7UDS_LoginState__6B_;
  (this->LoginModuleClient).field0_0x0.DebugPtr = (UDS_LoginModuleClient *)0x0;
  this->HttpDelayedTime = 0.0;
  (this->APIServer_WaitTimerRateHandle).Handle = 0;
  (this->APIServer_TimeOverHandle).Handle = 0;
  (this->SystemModuleClient).field0_0x0.DebugPtr = (UDS_SystemModuleClient *)0x0;
  this->APIServer_TimeOver = 3.0;
  return this;
}

// UDS_LoginState @ 14b4e86d0

UDS_LoginState * __thiscall
UDS_LoginState::UDS_LoginState(UDS_LoginState *this,FObjectInitializer *param_1)

{
  UDS_GameStateBase::UDS_GameStateBase((UDS_GameStateBase *)this,param_1);
  this->APIServer_WaitTimerRate = 0.01;
  this->_padding_ = (longlong)&___7UDS_LoginState__6B_;
  (this->LoginModuleClient).field0_0x0.DebugPtr = (UDS_LoginModuleClient *)0x0;
  this->HttpDelayedTime = 0.0;
  (this->APIServer_WaitTimerRateHandle).Handle = 0;
  (this->APIServer_TimeOverHandle).Handle = 0;
  (this->SystemModuleClient).field0_0x0.DebugPtr = (UDS_SystemModuleClient *)0x0;
  this->APIServer_TimeOver = 3.0;
  return this;
}

// ~UDS_LoginState @ 14b4e98a0

void __thiscall UDS_LoginState::~UDS_LoginState(UDS_LoginState *this)

{
  this->_padding_ = (longlong)&___7UDS_LoginState__6B_;
  UDS_GameStateBase::~UDS_GameStateBase((UDS_GameStateBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb2e0

UClass * __cdecl UDS_LoginState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LoginState",
               &Z_Registration_Info_UClass_UDS_LoginState.InnerSingleton,
               StaticRegisterNativesUDS_LoginState,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LoginState>,InternalVTableHelperCtorCaller<UDS_LoginState>,
               local_res8,UDS_GameStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginState.InnerSingleton;
}

// StaticRegisterNativesUDS_LoginState @ 14b4ec0e0

void __cdecl UDS_LoginState::StaticRegisterNativesUDS_LoginState(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_LoginState_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnNetworkConnected @ 14b4ed5a0

void __cdecl UDS_LoginState::execOnNetworkConnected(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnNetworkConnected((UDS_LoginState *)param_1,local_res10[0] != 0);
  return;
}

// ClearSessionUID @ 14b99d0b0

void __thiscall UDS_LoginState::ClearSessionUID(UDS_LoginState *this)

{
  (this->LoginModuleClient).field0_0x0.DebugPtr = (UDS_LoginModuleClient *)0x0;
  (this->SystemModuleClient).field0_0x0.DebugPtr = (UDS_SystemModuleClient *)0x0;
  EndLoginModule(this);
  EndSystemModule(this);
  return;
}

// ConnectGameServer @ 14b99d0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_LoginState::ConnectGameServer(UDS_LoginState *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_NetworkManager *this_00;
  UDS_LogManager *pUVar3;
  char *pcVar4;
  UDS_LoginState *pUVar5;
  UObject *this_01;
  UFunction *pUVar6;
  char *pcVar7;
  FWeakObjectPtr *this_02;
  char *pcVar8;
  FWeakObjectPtr *pFVar9;
  undefined1 auStackY_328 [32];
  <lambda_1> local_2f5 [5];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f0;
  FWeakObjectPtr local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  UDS_LoginState *local_2c0;
  FName *local_2b8;
  FDS_AuthData *local_2b0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_2a8;
  FString local_298;
  FDestructionSentinel local_288;
  FReadAccessScope local_270;
  FReadAccessScope local_258;
  FReadAccessScope local_240;
  undefined1 local_228 [168];
  undefined4 local_180;
  undefined1 local_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2b0 = TDS_Singleton<FDS_AuthData>::GetInst();
  this_00 = UDS_NetworkManager::GetInst();
  if (this_00 == (UDS_NetworkManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_LoginState::ConnectGameServer",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x19c,L"netMng is nullptr.");
    local_228._48_8_ = local_158._padding_;
    goto LAB_14b99d5da;
  }
  pcVar4 = strstr("&UDS_LoginState::OnNetworkConnected","::");
  pcVar8 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14b99d20a:
    pcVar7 = &DAT_00000002;
LAB_14b99d20d:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14b99d20a;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14b99d20d;
  }
  ::FName::FName(&local_2d0,pcVar7);
  if ((this == (UDS_LoginState *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4af,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->OnConnectResult,
             &local_270);
  this_02 = *(FWeakObjectPtr **)&(this_00->OnConnectResult).field_0x8;
  pFVar9 = this_02 + (longlong)*(int *)&(this_00->OnConnectResult).field_0x10 * 2;
  for (; this_02 != pFVar9; this_02 = this_02 + 2) {
    if (((*(FName *)(this_02 + 1) == local_2d0) && (this != (UDS_LoginState *)0x0)) &&
       (pUVar5 = (UDS_LoginState *)FWeakObjectPtr::GetEvenIfUnreachable(this_02), this == pUVar5)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_270);
      if (this_02 != (FWeakObjectPtr *)0x0) goto LAB_14b99d4f8;
      goto LAB_14b99d2dc;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_270);
LAB_14b99d2dc:
  pcVar4 = strstr("&UDS_LoginState::OnNetworkConnected","::");
  if (pcVar4 == (char *)0x0) {
LAB_14b99d32a:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar7 == (char *)0x0) || (pcVar8 = pcVar7 + 2, pcVar7[2] == '0')) goto LAB_14b99d32a;
  }
  ::FName::FName(&local_2c8,pcVar8);
  if ((this == (UDS_LoginState *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_2e8.ObjectIndex = 0;
  local_2e8.ObjectSerialNumber = 0;
  local_2e0.ComparisonIndex.Value = 0;
  local_2e0.Number = 0;
  local_2d8 = local_2c8;
  if ((this == (UDS_LoginState *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2c0 = this;
  if (this == (UDS_LoginState *)0x0) {
    local_2c0 = (UDS_LoginState *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2c0 != (UDS_LoginState *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_2c0);
  }
  FWeakObjectPtr::operator=(&local_2e8,(FObjectPtr)&local_2c0);
  local_2e0 = local_2d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_2f0,&local_258);
  if ((local_2e0 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_2e8), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_258);
LAB_14b99d473:
    local_2b8 = &local_2d8;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool>::
    __Internal_BindDynamic<UDS_LoginState>'::__l2::<lambda_1>::operator()(&local_2b8);
  }
  else {
    pUVar6 = UObject::FindFunction(this_01,local_2e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_258);
    if (pUVar6 == (UFunction *)0x0) goto LAB_14b99d473;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_2f0,&local_240);
  local_2a8.Object = local_2e8;
  local_2a8.FunctionName = local_2e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_240);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->OnConnectResult,
             (FWriteAccessScope *)&local_288);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(this_00->OnConnectResult).field_0x8,local_2f5,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00->OnConnectResult,
             &local_2a8);
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
LAB_14b99d4f8:
  bVar2 = UDS_NetworkManager::Connect(this_00,&local_2b0->GameServerAddr,local_2b0->GameServerPort);
  if (bVar2) {
    return;
  }
  FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)local_228,Popup_LogOut);
  ::FString::FString(&local_298,"GameServer Connect Fail.");
  FDS_Text::SetTextFromUniqueString((FDS_Text *)local_228,&local_298);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)local_228);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_178);
  if ((void *)local_178._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_178._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_178);
  local_180 = 0;
  if ((void *)local_228._160_8_ != (void *)0x0) {
    FMemory::Free((void *)local_228._160_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_228 + 0x60);
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_228._64_8_,local_228._72_4_);
  if ((FDS_TextFormatArg *)local_228._64_8_ != (FDS_TextFormatArg *)0x0) {
    FMemory::Free((void *)local_228._64_8_);
  }
LAB_14b99d5da:
  if ((FScriptContainerElement *)local_228._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_228._48_8_);
  }
  return;
}

// Created @ 14b9a6180

void __thiscall UDS_LoginState::Created(UDS_LoginState *this)

{
  return;
}

// Destroyed @ 14b9a6e50

void __thiscall UDS_LoginState::Destroyed(UDS_LoginState *this)

{
  (this->LoginModuleClient).field0_0x0.DebugPtr = (UDS_LoginModuleClient *)0x0;
  (this->SystemModuleClient).field0_0x0.DebugPtr = (UDS_SystemModuleClient *)0x0;
  EndLoginModule(this);
  EndSystemModule(this);
  return;
}

// End @ 14b9a73a0

void __thiscall UDS_LoginState::End(UDS_LoginState *this)

{
  return;
}

// EndLoginModule @ 14b9a73b0

void __thiscall UDS_LoginState::EndLoginModule(UDS_LoginState *this)

{
  bool bVar1;
  FModuleManager *pFVar2;
  FName *pFVar3;
  IModuleInterface *pIVar4;
  FName local_res10 [3];
  
  pFVar2 = FModuleManager::Get();
  pFVar3 = ::FName::FName(local_res10,"DS_Login");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar2,*pFVar3);
  if (bVar1) {
    pFVar2 = FModuleManager::Get();
    pFVar3 = ::FName::FName(local_res10,"DS_Login");
    pIVar4 = FModuleManager::GetModule(pFVar2,*pFVar3);
    if (pIVar4 != (IModuleInterface *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x48))(pIVar4);
    }
  }
  return;
}

// EndSystemModule @ 14b9a7a10

void __thiscall UDS_LoginState::EndSystemModule(UDS_LoginState *this)

{
  bool bVar1;
  FModuleManager *pFVar2;
  FName *pFVar3;
  IModuleInterface *pIVar4;
  FName local_res10 [3];
  
  pFVar2 = FModuleManager::Get();
  pFVar3 = ::FName::FName(local_res10,"DS_System");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar2,*pFVar3);
  if (bVar1) {
    pFVar2 = FModuleManager::Get();
    pFVar3 = ::FName::FName(local_res10,"DS_System");
    pIVar4 = FModuleManager::GetModule(pFVar2,*pFVar3);
    if (pIVar4 != (IModuleInterface *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x48))(pIVar4);
    }
  }
  return;
}

// Failure_GetFrontEndServerAddr @ 14b9a9bf0

void __thiscall UDS_LoginState::Failure_GetFrontEndServerAddr(UDS_LoginState *this)

{
  return;
}

// Failure_Health @ 14b9a9c00

void __thiscall UDS_LoginState::Failure_Health(UDS_LoginState *this)

{
  return;
}

// GetInst @ 14b9af370

TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr> __cdecl UDS_LoginState::GetInst(void)

{
  int iVar1;
  bool bVar2;
  ADS_GameMode *this;
  TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr in_RCX;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  
  ADS_GameMode::GetInst();
  bVar2 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)in_RCX = 0;
    local_res18 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res18);
    return (TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr>)in_RCX;
  }
  this = (ADS_GameMode *)FWeakObjectPtr::Get(&local_res10);
  this_00 = ADS_GameMode::GetGameState(this,(EDS_GameStateType)local_res20);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_LoginState_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b9af3f2;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b9af3f2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)in_RCX = 0;
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res18);
  return (TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr>)in_RCX;
}

// GetLoginModuleClient @ 14b9b0120

TWeakObjectPtr<UDS_LoginModuleClient,FWeakObjectPtr> __thiscall
UDS_LoginState::GetLoginModuleClient(UDS_LoginState *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)(this->LoginModuleClient).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_LoginModuleClient,FWeakObjectPtr>)in_RDX;
}

// GetLoginModuleClientIsConnected @ 14b9b01b0

bool __thiscall UDS_LoginState::GetLoginModuleClientIsConnected(UDS_LoginState *this)

{
  return (this->LoginModuleClient).field0_0x0.DebugPtr != (UDS_LoginModuleClient *)0x0;
}

// GetSystemModuleClient @ 14b9b41c0

TWeakObjectPtr<UDS_SystemModuleClient,FWeakObjectPtr> __thiscall
UDS_LoginState::GetSystemModuleClient(UDS_LoginState *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)(this->SystemModuleClient).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_SystemModuleClient,FWeakObjectPtr>)in_RDX;
}

// OnCompletePreloadIngameLevel @ 14b9bd0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoginState::OnCompletePreloadIngameLevel(UDS_LoginState *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  ADS_GameMode *this_00;
  UDS_SendPacketManager *this_01;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  ADS_GameMode::GetInst();
  bVar1 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_LoginState::OnCompletePreloadIngameLevel",0x2c,Yes);
    pwVar4 = L"gameMode is nullptr.";
    uVar3 = 0x1b5;
  }
  else {
    this_00 = (ADS_GameMode *)FWeakObjectPtr::Get(local_148);
    ADS_GameMode::ChangeGameState(this_00,IngameState);
    this_01 = UDS_SendPacketManager::GetInst();
    if (this_01 != (UDS_SendPacketManager *)0x0) {
      UDS_SendPacketManager::SendJoinMapReadyComplete(this_01);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_LoginState::OnCompletePreloadIngameLevel",0x2c,Yes);
    pwVar4 = L"sendMng is nullptr.";
    uVar3 = 0x1bf;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnLogout @ 14b9bdab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoginState::OnLogout(UDS_LoginState *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_AuthData *pFVar3;
  ADS_GameMode *pAVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  ADS_GameMode::GetInst();
  bVar1 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LoginState::OnLogout",0x18,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xa2,L"gameMode is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
    pAVar4 = (ADS_GameMode *)FWeakObjectPtr::Get(local_148);
    ADS_GameMode::ClearSessionUID(pAVar4);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&pFVar3->OnStateChangedLogoutDelegate);
    pUVar5 = FWeakObjectPtr::Get(local_148);
    if (*(int *)&pUVar5[0x15].field_0x10 == 2) {
      pAVar4 = (ADS_GameMode *)FWeakObjectPtr::Get(local_148);
      ADS_GameMode::RestartGameState(pAVar4);
    }
    else {
      pAVar4 = (ADS_GameMode *)FWeakObjectPtr::Get(local_148);
      ADS_GameMode::ChangeGameState(pAVar4,LoginState);
    }
  }
  return;
}

// OnNetworkConnected @ 14b9bdc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoginState::OnNetworkConnected(UDS_LoginState *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  void *pvVar5;
  FDS_ClientMessage_Twoway *pFVar6;
  bool bVar7;
  EDS_AccountAuthority EVar8;
  FDS_AuthData *this_00;
  UDS_LogManager *pUVar9;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar10;
  Message *pMVar11;
  void *pvVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  UDS_CCSAIManager *pUVar15;
  undefined8 *puVar16;
  UDS_NetworkManager *this_01;
  Arena *pAVar17;
  ulong64 uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_368 [32];
  undefined1 auStack_328 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> TStack_320;
  FString FStack_310;
  FDestructionSentinel FStack_300;
  undefined1 *puStack_2e8;
  FDestructionSentinel FStack_2e0;
  undefined1 *puStack_2c8;
  TSharedRef<FDS_ClientMessage_Twoway,1> TStack_2c0;
  _Bxty _Stack_2b0;
  undefined8 uStack_2a0;
  ulonglong uStack_298;
  _Bxty _Stack_290;
  undefined8 uStack_280;
  ulonglong uStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  if (!param_1) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_368;
  this_00 = TDS_Singleton<FDS_AuthData>::GetInst();
  FStack_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_310.Data.ArrayNum = (this_00->JwtKey).Data.ArrayNum;
  lVar19 = (longlong)FStack_310.Data.ArrayNum;
  pFVar3 = (this_00->JwtKey).Data.AllocatorInstance.Data;
  if (FStack_310.Data.ArrayNum == 0) {
    FStack_310.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_310.Data.ArrayNum,0,(ForAnyElementType *)&FStack_310,
               FStack_310.Data.ArrayNum,&FStack_310.Data.ArrayMax);
    memcpy(FStack_310.Data.AllocatorInstance.Data,pFVar3,lVar19 * 2);
  }
  bVar7 = UDS_GameInstance::GetIsAIGymMode();
  if (!bVar7) {
    bVar7 = UDS_GameInstance::GetIsCCSAIMode();
    if (!bVar7) {
      bVar7 = UDS_GameInstance::GetIsDungeonPlayBuild();
      if ((!bVar7) &&
         (((((this_00->SessionUID).Data.ArrayNum < 2 || (this_00->PlayerUID == 0)) ||
           (this_00->WorldId < 0)) || (this_00->GameServerIndex == 0)))) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          TStack_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_268,"FDS_LoginService::RequestJoinGameServer",0x27,Yes);
          UDS_LogManager::PrintLog(pUVar9,1,Warning,TStack_268.Ptr,0x6b,L"authData is invalid.");
          if ((void *)TStack_268._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_268._padding_);
          }
        }
        goto LAB_14bbdb9e7;
      }
    }
  }
  pTVar10 = MakeShared<FDS_ClientMessage_Twoway,1>(&TStack_2c0);
  TStack_320.Object = pTVar10->Object;
  TStack_320.SharedReferenceCount.ReferenceController =
       (pTVar10->SharedReferenceCount).ReferenceController;
  if (TStack_320.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_320.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_320.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_2c0.SharedReferenceCount.ReferenceController);
  if (TStack_320.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = TStack_320.Object;
  if (((TStack_320.Object)->clientMsg)._impl_._oneof_case_[0] != 0x48) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(TStack_320.Object)->clientMsg);
    (pFVar6->clientMsg)._impl_._oneof_case_[0] = 0x48;
    pAVar17 = (Arena *)((pFVar6->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar6->clientMsg)._padding_ & 1) != 0) {
      pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
    }
    pMVar11 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::JoinGameServerRequest>
                        (pAVar17);
    (pFVar6->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar11;
  }
  pMVar11 = (pFVar6->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar11 != (Message *)0x0) {
    if (1 < (this_00->SessionUID).Data.ArrayNum) {
      *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 4;
      pvVar12 = *(void **)(pMVar11 + 4);
      if (pvVar12 == (void *)0x0) {
        pAVar17 = (Arena *)(*(ulonglong *)&pMVar11->field_0x8 & 0xfffffffffffffffe);
        if ((pMVar11->field_0x8 & 1) != 0) {
          pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
        }
        pvVar12 = google::protobuf::Arena::DefaultConstruct<UniqueId>(pAVar17);
        *(void **)(pMVar11 + 4) = pvVar12;
      }
      *(uint *)((longlong)pvVar12 + 0x10) = *(uint *)((longlong)pvVar12 + 0x10) | 1;
      pAVar17 = (Arena *)(*(ulonglong *)((longlong)pvVar12 + 8) & 0xfffffffffffffffe);
      if ((*(byte *)((longlong)pvVar12 + 8) & 1) != 0) {
        pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
      }
      pbVar13 = google::protobuf::internal::ArenaStringPtr::Mutable
                          ((ArenaStringPtr *)((longlong)pvVar12 + 0x18),pAVar17);
      pbVar14 = DS_Util::ConvertFStringToBytes
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &_Stack_2b0,&this_00->SessionUID);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (pbVar13,pbVar14);
      if (0xf < uStack_298) {
        pvVar5 = (void *)CONCAT71(_Stack_2b0._1_7_,_Stack_2b0._Buf[0]);
        uVar18 = uStack_298 + 1;
        pvVar12 = pvVar5;
        if (0xfff < uVar18) {
          pvVar12 = *(void **)((longlong)pvVar5 + -8);
          uVar18 = uStack_298 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar12))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar12,uVar18);
      }
      uStack_2a0 = ___xmm_000000000000000f0000000000000000;
      uStack_298 = _UNK_15076add8;
      _Stack_2b0._Buf[0] = '\0';
    }
    *(long64 *)(pMVar11 + 5) = this_00->PlayerUID;
    *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 0x10;
    uVar1 = *(uint *)(pMVar11 + 1);
    *(int *)&pMVar11[5].field_0x8 = this_00->WorldId;
    *(uint *)(pMVar11 + 1) = uVar1 | 0x20;
    *(int *)&pMVar11[5].field_0xc = this_00->GameServerIndex;
    *(uint *)(pMVar11 + 1) = uVar1 | 0x60;
    if (1 < FStack_310.Data.ArrayNum) {
      pbVar13 = DS_Util::ConvertFStringToUTF8
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &_Stack_290,&FStack_310);
      *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 2;
      pAVar17 = (Arena *)(*(ulonglong *)&pMVar11->field_0x8 & 0xfffffffffffffffe);
      if ((pMVar11->field_0x8 & 1) != 0) {
        pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
      }
      google::protobuf::internal::ArenaStringPtr::Set
                ((ArenaStringPtr *)&pMVar11[3].field_0x8,pbVar13,pAVar17);
      if (0xf < uStack_278) {
        pvVar5 = (void *)CONCAT71(_Stack_290._1_7_,_Stack_290._Buf[0]);
        uVar18 = uStack_278 + 1;
        pvVar12 = pvVar5;
        if (0xfff < uVar18) {
          pvVar12 = *(void **)((longlong)pvVar5 + -8);
          uVar18 = uStack_278 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar12))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar12,uVar18);
      }
      uStack_280 = ___xmm_000000000000000f0000000000000000;
      uStack_278 = _UNK_15076add8;
      _Stack_290._Buf[0] = '\0';
    }
    bVar7 = UDS_GameInstance::GetIsCCSAIMode();
    if (bVar7) {
      pUVar15 = UDS_CCSAIManager::GetInst();
      if (pUVar15 == (UDS_CCSAIManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          TStack_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_148,"FDS_LoginService::RequestJoinGameServer",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,TStack_148.Ptr,0x97,L"[CCSAI] ccsAIMng is nullptr.");
          if ((void *)TStack_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_148._padding_);
          }
        }
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7771091955961823080>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                           ,0x98,"false");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        pFVar20 = (pUVar15->AIServerLoginInfo).DeckCharID.AllocatorInstance.Data;
        iVar2 = (pUVar15->AIServerLoginInfo).DeckCharID.ArrayNum;
        pFVar3 = pFVar20 + (longlong)iVar2 * 4;
        while( true ) {
          if ((pUVar15->AIServerLoginInfo).DeckCharID.ArrayNum != iVar2) {
            auStack_328[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (auStack_328);
          }
          if (pFVar20 == pFVar3) break;
          google::protobuf::RepeatedField<int>::Add
                    ((RepeatedField<int> *)&pMVar11[1].field_0x8,*(int *)pFVar20);
          pFVar20 = pFVar20 + 4;
        }
        pMVar11[6].field_0x8 = (pUVar15->AIServerLoginInfo).bIsLeader;
        *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 0x200;
      }
    }
    else {
      bVar7 = UDS_GameInstance::GetIsDungeonPlayBuild();
      if (bVar7) {
        google::protobuf::RepeatedField<int>::Add((RepeatedField<int> *)&pMVar11[1].field_0x8,1);
        google::protobuf::RepeatedField<int>::Add((RepeatedField<int> *)&pMVar11[1].field_0x8,2);
        google::protobuf::RepeatedField<int>::Add((RepeatedField<int> *)&pMVar11[1].field_0x8,3);
        pMVar11[6].field_0x8 = 0;
        *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 0x200;
        EVar8 = FDS_AuthData::GetAccountAuthority(this_00);
        *(uint *)(pMVar11 + 6) = (uint)EVar8;
        *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 0x80;
      }
    }
    if (TStack_320.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar6 = TStack_320.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(TStack_320.Object)->SuccessDel,(FWriteAccessScope *)&FStack_300);
    puStack_2e8 = &(pFVar6->SuccessDel).field_0x8;
    puVar16 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puStack_2e8);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar18 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar18;
      *puVar16 = &
                 ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar16[3] = FDS_LoginService::ResponseJoinGameServer;
    }
    if (FStack_300.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_300.Accessor,&FStack_300);
    }
    if (TStack_320.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar6 = TStack_320.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(TStack_320.Object)->FailDel,(FWriteAccessScope *)&FStack_2e0);
    puStack_2c8 = &(pFVar6->FailDel).field_0x8;
    puVar16 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puStack_2c8);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &
                 ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar18 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar18;
      *puVar16 = &
                 ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar16[3] = FDS_LoginService::ProcessJoinGameServerError;
    }
    if (FStack_2e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_2e0.Accessor,&FStack_2e0);
    }
    this_01 = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this_01,&TStack_320);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_320.SharedReferenceCount.ReferenceController);
LAB_14bbdb9e7:
  if (FStack_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_310.Data.AllocatorInstance.Data);
  }
  return;
}

// OnStartModule @ 14b9bf000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoginState::OnStartModule(UDS_LoginState *this)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FModuleManager *pFVar4;
  FName *pFVar5;
  IModuleInterface *pIVar6;
  UDS_LogManager *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_1f8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  FName local_1c8;
  FName local_1c0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((this->LoginModuleClient).field0_0x0.DebugPtr == (UDS_LoginModuleClient *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_LoginModuleClient_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
    local_1b8._8_8_ = pUVar2;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
    if (local_1b8._64_8_ != 0) {
      plVar8 = (longlong *)(local_1b8 + 0x50);
      if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_1b8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UObject *)0x0)) {
      (this->LoginModuleClient).field0_0x0.DebugPtr = (UDS_LoginModuleClient *)pUVar2;
      if (pUVar2 == (UObject *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_LoginState::OnStartModule",0x1d,Yes);
        pwVar10 = L"Failed to create LoginModuleClient.";
        uVar9 = 0x114;
        goto LAB_14b9bf15a;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar2);
      (this->LoginModuleClient).field0_0x0.DebugPtr = (UDS_LoginModuleClient *)pUVar2;
    }
  }
  pFVar4 = FModuleManager::Get();
  pFVar5 = ::FName::FName(&local_1c8,"DS_Login");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar4,*pFVar5);
  if (bVar1) {
    pFVar4 = FModuleManager::Get();
    pFVar5 = ::FName::FName(&local_1c8,"DS_Login");
    pIVar6 = FModuleManager::GetModule(pFVar4,*pFVar5);
  }
  else {
    pFVar4 = FModuleManager::Get();
    pFVar5 = ::FName::FName(&local_1c0,"DS_Login");
    pIVar6 = FModuleManager::LoadModule(pFVar4,*pFVar5,None);
  }
  if (pIVar6 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x40))();
    return;
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar7 = UDS_LogManager::GetInst();
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"UDS_LoginState::OnStartModule",0x1d,Yes);
  pwVar10 = L"LoginModule is nullptr.";
  uVar9 = 0x135;
LAB_14b9bf15a:
  UDS_LogManager::PrintLog(pUVar7,1,Warning,local_138.Ptr,uVar9,pwVar10);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// PreLoadInGameLevel @ 14b9c0730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoginState::PreLoadInGameLevel(UDS_LoginState *this)

{
  bool bVar1;
  FModuleManager *pFVar2;
  FName *pFVar3;
  IModuleInterface *pIVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  FName local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FModuleManager::Get();
  pFVar3 = ::FName::FName(local_148,"DS_Login");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar2,*pFVar3);
  if (bVar1) {
    pFVar2 = FModuleManager::Get();
    pFVar3 = ::FName::FName(local_148,"DS_Login");
    pIVar4 = FModuleManager::GetModule(pFVar2,*pFVar3);
    if (pIVar4 != (IModuleInterface *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x60))(pIVar4);
      return;
    }
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_LoginState::PreLoadInGameLevel",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x61,L"LoginModule is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// Request_Login @ 14b9c2800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoginState::Request_Login(UDS_LoginState *this,FString *param_1,int param_2)

{
  bool bVar1;
  FModuleManager *pFVar2;
  FName *pFVar3;
  IModuleInterface *pIVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  FName local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FModuleManager::Get();
  pFVar3 = ::FName::FName(local_148,"DS_Login");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar2,*pFVar3);
  if (bVar1) {
    pFVar2 = FModuleManager::Get();
    pFVar3 = ::FName::FName(local_148,"DS_Login");
    pIVar4 = FModuleManager::GetModule(pFVar2,*pFVar3);
    if (pIVar4 != (IModuleInterface *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x58))(pIVar4,param_1,param_2);
      return;
    }
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_LoginState::Request_Login",0x1d,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x90,L"LoginModule is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// Request_Logout @ 14b9c2940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoginState::Request_Logout(UDS_LoginState *this)

{
  bool bVar1;
  FModuleManager *pFVar2;
  FName *pFVar3;
  IModuleInterface *pIVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  FName local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FModuleManager::Get();
  pFVar3 = ::FName::FName(local_148,"DS_Login");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar2,*pFVar3);
  if (bVar1) {
    pFVar2 = FModuleManager::Get();
    pFVar3 = ::FName::FName(local_148,"DS_Login");
    pIVar4 = FModuleManager::GetModule(pFVar2,*pFVar3);
    if (pIVar4 != (IModuleInterface *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4);
      return;
    }
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_LoginState::Request_Logout",0x1e,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x7f,L"LoginModule is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// RestartModule @ 14b9c3340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoginState::RestartModule(UDS_LoginState *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  ADS_GameMode *pAVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  ADS_GameMode::GetInst();
  bVar1 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LoginState::RestartModule",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xbf,L"gameMode is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    pAVar3 = (ADS_GameMode *)FWeakObjectPtr::Get(local_148);
    ADS_GameMode::ClearSessionUID(pAVar3);
    pUVar4 = FWeakObjectPtr::Get(local_148);
    if (*(int *)&pUVar4[0x15].field_0x10 == 2) {
      pAVar3 = (ADS_GameMode *)FWeakObjectPtr::Get(local_148);
      ADS_GameMode::RestartGameState(pAVar3);
      return;
    }
    pAVar3 = (ADS_GameMode *)FWeakObjectPtr::Get(local_148);
    ADS_GameMode::ChangeGameState(pAVar3,LoginState);
  }
  return;
}

// Start @ 14b9c5dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_LoginState::Start(UDS_LoginState *this)

{
  UDS_GameInstance *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  FTimerManager *this_01;
  FTimerData *pFVar3;
  FDS_HttpServer *pFVar4;
  TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr> TVar5;
  UDS_SyncServer *this_02;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  this_00 = UDS_GameInstance::StaticInstance;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LoginState::StartLoginModule",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xde,L"gameInst is nullptr.");
      if ((UDS_GameInstance *)local_138._padding_ != (UDS_GameInstance *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((this->APIServer_TimeOverHandle).Handle != 0) {
      this_01 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar3 = FTimerManager::FindTimer(this_01,&this->APIServer_TimeOverHandle);
      if (pFVar3 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (this_01,(FTimerHandle)(this->APIServer_TimeOverHandle).Handle);
      }
      (this->APIServer_TimeOverHandle).Handle = 0;
    }
    pFVar4 = TDS_Singleton<FDS_HttpServer>::GetInst();
    if ((pFVar4->Urls).IsSuccess == false) {
      if (UDS_GameInstance::Urls.Data.ArrayNum < 2) {
        TVar5 = UDS_GameInstance::GetServerInfoObject(this_00);
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)TVar5.WeakPtr);
        if (bVar1) {
          TVar5 = UDS_GameInstance::GetServerInfoObject(this_00);
          this_02 = (UDS_SyncServer *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar5.WeakPtr);
          UDS_SyncServer::LoadToDataAsset(this_02);
        }
        goto LAB_14b9c5f3e;
      }
      pFVar4 = TDS_Singleton<FDS_HttpServer>::GetInst();
      FDS_HttpServer::LoadUrls(pFVar4,&UDS_GameInstance::Urls);
    }
    OnStartModule(this);
  }
LAB_14b9c5f3e:
  if ((UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) ||
     ((UDS_GameInstance::StaticInstance->bIsCCSAIMode == false &&
      (UDS_GameInstance::StaticInstance->bIsDungeonPlayBuild == false)))) {
    UDS_TimeUtilManager::UpdateNPTClient();
  }
  return;
}

// StartLoginModule @ 14b9c5fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_LoginState::StartLoginModule(UDS_LoginState *this)

{
  UDS_GameInstance *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  FTimerManager *this_01;
  FTimerData *pFVar3;
  FDS_HttpServer *pFVar4;
  TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr> TVar5;
  UDS_SyncServer *this_02;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  this_00 = UDS_GameInstance::StaticInstance;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LoginState::StartLoginModule",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xde,L"gameInst is nullptr.");
      if ((UDS_GameInstance *)local_138._padding_ != (UDS_GameInstance *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((this->APIServer_TimeOverHandle).Handle != 0) {
      this_01 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar3 = FTimerManager::FindTimer(this_01,&this->APIServer_TimeOverHandle);
      if (pFVar3 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (this_01,(FTimerHandle)(this->APIServer_TimeOverHandle).Handle);
      }
      (this->APIServer_TimeOverHandle).Handle = 0;
    }
    pFVar4 = TDS_Singleton<FDS_HttpServer>::GetInst();
    if ((pFVar4->Urls).IsSuccess == false) {
      if (UDS_GameInstance::Urls.Data.ArrayNum < 2) {
        TVar5 = UDS_GameInstance::GetServerInfoObject(this_00);
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)TVar5.WeakPtr);
        if (!bVar1) {
          return;
        }
        TVar5 = UDS_GameInstance::GetServerInfoObject(this_00);
        this_02 = (UDS_SyncServer *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar5.WeakPtr);
        UDS_SyncServer::LoadToDataAsset(this_02);
        return;
      }
      pFVar4 = TDS_Singleton<FDS_HttpServer>::GetInst();
      FDS_HttpServer::LoadUrls(pFVar4,&UDS_GameInstance::Urls);
    }
    OnStartModule(this);
  }
  return;
}

// StartSystemModule @ 14b9c67a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoginState::StartSystemModule(UDS_LoginState *this)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FModuleManager *pFVar4;
  FName *pFVar5;
  IModuleInterface *pIVar6;
  UDS_LogManager *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_1f8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  FName local_1c8;
  FName local_1c0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((this->SystemModuleClient).field0_0x0.DebugPtr == (UDS_SystemModuleClient *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_SystemModuleClient_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
    local_1b8._8_8_ = pUVar2;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
    if (local_1b8._64_8_ != 0) {
      plVar8 = (longlong *)(local_1b8 + 0x50);
      if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_1b8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UObject *)0x0)) {
      (this->SystemModuleClient).field0_0x0.DebugPtr = (UDS_SystemModuleClient *)pUVar2;
      if (pUVar2 == (UObject *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_LoginState::StartSystemModule",0x21,Yes);
        pwVar10 = L"Failed to create SystemModuleClient.";
        uVar9 = 0x157;
        goto LAB_14b9c68fa;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar2);
      (this->SystemModuleClient).field0_0x0.DebugPtr = (UDS_SystemModuleClient *)pUVar2;
    }
  }
  pFVar4 = FModuleManager::Get();
  pFVar5 = ::FName::FName(&local_1c8,"DS_System");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar4,*pFVar5);
  if (bVar1) {
    pFVar4 = FModuleManager::Get();
    pFVar5 = ::FName::FName(&local_1c8,"DS_System");
    pIVar6 = FModuleManager::GetModule(pFVar4,*pFVar5);
  }
  else {
    pFVar4 = FModuleManager::Get();
    pFVar5 = ::FName::FName(&local_1c0,"DS_System");
    pIVar6 = FModuleManager::LoadModule(pFVar4,*pFVar5,None);
  }
  if (pIVar6 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x40))();
    return;
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar7 = UDS_LogManager::GetInst();
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"UDS_LoginState::StartSystemModule",0x21,Yes);
  pwVar10 = L"SystemModule is nullptr.";
  uVar9 = 0x170;
LAB_14b9c68fa:
  UDS_LogManager::PrintLog(pUVar7,1,Warning,local_138.Ptr,uVar9,pwVar10);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// Success_LoginPlayer @ 14b9c6c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoginState::Success_LoginPlayer(UDS_LoginState *this)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FModuleManager *pFVar4;
  FName *pFVar5;
  IModuleInterface *pIVar6;
  UDS_LogManager *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_1f8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  FName FStack_1c8;
  FName FStack_1c0;
  undefined1 auStack_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((this->SystemModuleClient).field0_0x0.DebugPtr == (UDS_SystemModuleClient *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_SystemModuleClient_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_1b8,pUVar3);
    auStack_1b8._8_8_ = pUVar2;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_1b8);
    if (auStack_1b8._64_8_ != 0) {
      plVar8 = (longlong *)(auStack_1b8 + 0x50);
      if ((longlong *)auStack_1b8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)auStack_1b8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UObject *)0x0)) {
      (this->SystemModuleClient).field0_0x0.DebugPtr = (UDS_SystemModuleClient *)pUVar2;
      if (pUVar2 == (UObject *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_LoginState::StartSystemModule",0x21,Yes);
        pwVar10 = L"Failed to create SystemModuleClient.";
        uVar9 = 0x157;
        goto LAB_14b9c68fa;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar2);
      (this->SystemModuleClient).field0_0x0.DebugPtr = (UDS_SystemModuleClient *)pUVar2;
    }
  }
  pFVar4 = FModuleManager::Get();
  pFVar5 = ::FName::FName(&FStack_1c8,"DS_System");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar4,*pFVar5);
  if (bVar1) {
    pFVar4 = FModuleManager::Get();
    pFVar5 = ::FName::FName(&FStack_1c8,"DS_System");
    pIVar6 = FModuleManager::GetModule(pFVar4,*pFVar5);
  }
  else {
    pFVar4 = FModuleManager::Get();
    pFVar5 = ::FName::FName(&FStack_1c0,"DS_System");
    pIVar6 = FModuleManager::LoadModule(pFVar4,*pFVar5,None);
  }
  if (pIVar6 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x40))();
    return;
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar7 = UDS_LogManager::GetInst();
  TStack_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&TStack_138,"UDS_LoginState::StartSystemModule",0x21,Yes);
  pwVar10 = L"SystemModule is nullptr.";
  uVar9 = 0x170;
LAB_14b9c68fa:
  UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_138.Ptr,uVar9,pwVar10);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// Success_Logout @ 14b9c6c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LoginState::Success_Logout(UDS_LoginState *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_AuthData *pFVar3;
  ADS_GameMode *pAVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  ADS_GameMode::GetInst();
  bVar1 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LoginState::OnLogout",0x18,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xa2,L"gameMode is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
    pAVar4 = (ADS_GameMode *)FWeakObjectPtr::Get(local_148);
    ADS_GameMode::ClearSessionUID(pAVar4);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&pFVar3->OnStateChangedLogoutDelegate);
    pUVar5 = FWeakObjectPtr::Get(local_148);
    if (*(int *)&pUVar5[0x15].field_0x10 == 2) {
      pAVar4 = (ADS_GameMode *)FWeakObjectPtr::Get(local_148);
      ADS_GameMode::RestartGameState(pAVar4);
    }
    else {
      pAVar4 = (ADS_GameMode *)FWeakObjectPtr::Get(local_148);
      ADS_GameMode::ChangeGameState(pAVar4,LoginState);
    }
  }
  return;
}

