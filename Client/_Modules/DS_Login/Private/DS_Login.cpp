// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DS_Login
// Functions: 27

// `dynamic_initializer_for_'ErrorNamespace'' @ 14129cab0

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 14129cae0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDS_Login'' @ 14129cb00

void __cdecl _dynamic_initializer_for__ModuleRegistrantDS_Login__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DS_Login";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DS_Login",8);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDS_LoginModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 14129cb50

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 14129cb70

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// Request_Logout @ 14c265b40

void __thiscall IDS_LoginModuleInterface::Request_Logout(IDS_LoginModuleInterface *this)

{
  return;
}

// Request_Login @ 14c265b50

void __thiscall
IDS_LoginModuleInterface::Request_Login(IDS_LoginModuleInterface *this,FString *param_1,int param_2)

{
  return;
}

// Request_PreLoadInGameLevel @ 14c265b60

void __thiscall IDS_LoginModuleInterface::Request_PreLoadInGameLevel(IDS_LoginModuleInterface *this)

{
  return;
}

// StartLoading @ 14c265b70

void __thiscall IDS_LoginModuleInterface::StartLoading(IDS_LoginModuleInterface *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c265b80

void * __thiscall
IDS_LoginModuleInterface::_scalar_deleting_destructor_(IDS_LoginModuleInterface *this,uint param_1)

{
  *this = (IDS_LoginModuleInterface)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Start @ 14c265bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_LoginModule::Start(FDS_LoginModule *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_LoginCore *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_LoginModule::Start",0x16,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0xd,L"");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  bVar1 = TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr>::UEOpEquals(&this->LoginCore,(void *)0x0);
  if (bVar1) {
    CreateLoginCore(this);
  }
  else {
    this_00 = (UDS_LoginCore *)FWeakObjectPtr::Get(&(this->LoginCore).WeakPtr);
    UDS_LoginCore::Start(this_00);
  }
  return;
}

// End @ 14c265cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FDS_LoginModule::End(FDS_LoginModule *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_LoginCore *this_00;
  UObject *pUVar3;
  FUObjectItem *this_01;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_LoginModule::End",0x14,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x1c,L"");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  bVar1 = TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr>::UEOpEquals(&this->LoginCore,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_LoginCore *)FWeakObjectPtr::Get(&(this->LoginCore).WeakPtr);
    UDS_LoginCore::End(this_00);
    pUVar3 = FWeakObjectPtr::Get(&(this->LoginCore).WeakPtr);
    this_01 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc);
    FUObjectItem::ClearRootFlags(this_01,RootSet);
    (this->LoginCore).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// Request_Logout @ 14c265dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_LoginModule::Request_Logout(FDS_LoginModule *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_LoginCore *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr>::UEOpEquals(&this->LoginCore,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_LoginModule::Request_Logout",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x25,L"LoginCore is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_LoginCore *)FWeakObjectPtr::Get(&(this->LoginCore).WeakPtr);
    UDS_LoginCore::Request_Logout(this_00);
  }
  return;
}

// Request_Login @ 14c265ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_LoginModule::Request_Login(FDS_LoginModule *this,FString *param_1,int param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_LoginCore *this_00;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr>::UEOpEquals(&this->LoginCore,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_LoginModule::Request_Login",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x30,L"LoginCore is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_LoginCore *)FWeakObjectPtr::Get(&(this->LoginCore).WeakPtr);
    UDS_LoginCore::Request_Login(this_00,param_1,param_2);
  }
  return;
}

// Request_PreLoadInGameLevel @ 14c265fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_LoginModule::Request_PreLoadInGameLevel(FDS_LoginModule *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_LoginCore *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr>::UEOpEquals(&this->LoginCore,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_LoginModule::Request_PreLoadInGameLevel",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x3b,L"LoginCore is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_LoginCore *)FWeakObjectPtr::Get(&(this->LoginCore).WeakPtr);
    UDS_LoginCore::Request_PreLoadInGameLevel(this_00);
  }
  return;
}

// StartLoading @ 14c2660b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_LoginModule::StartLoading(FDS_LoginModule *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_LoginCore *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr>::UEOpEquals(&this->LoginCore,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_LoginModule::StartLoading",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x46,L"LoginCore is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_LoginCore *)FWeakObjectPtr::Get(&(this->LoginCore).WeakPtr);
    UDS_LoginCore::StartLoading(this_00);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c2661a0

void * __thiscall FDS_LoginModule::_scalar_deleting_destructor_(FDS_LoginModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Start @ 14c2661e0

void __thiscall IDS_ModuleInterface::Start(IDS_ModuleInterface *this)

{
  return;
}

// End @ 14c2661f0

void __thiscall IDS_ModuleInterface::End(IDS_ModuleInterface *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c266200

void * __thiscall
IDS_ModuleInterface::_scalar_deleting_destructor_(IDS_ModuleInterface *this,uint param_1)

{
  *this = (IDS_ModuleInterface)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewObject<UDS_LoginCore> @ 14c266240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_LoginCore * __cdecl NewObject<UDS_LoginCore>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_LoginCore *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_LoginCore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_LoginCore *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// CreateLoginCore @ 14c2662e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FDS_LoginModule::CreateLoginCore(FDS_LoginModule *this)

{
  TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FUObjectItem *this_01;
  UDS_LoginCore *this_02;
  longlong *plVar5;
  undefined1 auStackY_1f8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  UObject *local_1c8 [2];
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = &this->LoginCore;
  bVar1 = TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar1) {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_LoginCore_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1b8,pUVar4);
    local_1b8._8_8_ = pUVar3;
    local_1c8[0] = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
    if (local_1b8._64_8_ != 0) {
      plVar5 = (longlong *)(local_1b8 + 0x50);
      if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_1b8._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1c8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_1c8[0]);
    }
    FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)local_1c8);
    bVar1 = TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      this_01 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc);
      FUObjectItem::SetRootFlags(this_01,RootSet);
      this_02 = (UDS_LoginCore *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_LoginCore::Start(this_02);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_LoginModule::CreateLoginCore",0x20,Yes);
    pwVar7 = L"Failed to create LoginCore.";
    uVar6 = 0x58;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_LoginModule::CreateLoginCore",0x20,Yes);
    pwVar7 = L"LoginCore already exists.";
    uVar6 = 0x51;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// DestroyLoginCore @ 14c2664f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FDS_LoginModule::DestroyLoginCore(FDS_LoginModule *this)

{
  TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LoginCore *this_01;
  UObject *pUVar2;
  FUObjectItem *this_02;
  
  this_00 = &this->LoginCore;
  bVar1 = TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar1) {
    this_01 = (UDS_LoginCore *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_LoginCore::End(this_01);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    this_02 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc);
    FUObjectItem::ClearRootFlags(this_02,RootSet);
    this_00->WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// InitializeModule @ 14c266550

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FDS_LoginModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FDS_LoginModule__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

// UEOpEquals @ 14c266590

bool __thiscall
TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_LoginCore,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// IMPLEMENT_MODULE_DS_Login @ 14c2665b0

void __cdecl IMPLEMENT_MODULE_DS_Login(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 150444690

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

