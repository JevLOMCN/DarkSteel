// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DS_System
// Functions: 19

// `dynamic_initializer_for_'ErrorNamespace'' @ 14129d300

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 14129d330

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDS_System'' @ 14129d350

void __cdecl _dynamic_initializer_for__ModuleRegistrantDS_System__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DS_System";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DS_System",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDS_SystemModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 14129d3a0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 14129d3c0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// Request_GetChatUrl @ 14c26c090

void __thiscall IDS_SystemModuleInterface::Request_GetChatUrl(IDS_SystemModuleInterface *this)

{
  return;
}

// Request_GetServerListInfo @ 14c26c0a0

void __thiscall
IDS_SystemModuleInterface::Request_GetServerListInfo(IDS_SystemModuleInterface *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c26c0b0

void * __thiscall
IDS_SystemModuleInterface::_scalar_deleting_destructor_
          (IDS_SystemModuleInterface *this,uint param_1)

{
  *this = (IDS_SystemModuleInterface)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Start @ 14c26c0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_SystemModule::Start(FDS_SystemModule *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_SystemCore *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_SystemModule::Start",0x17,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0xe,L"");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  bVar1 = TWeakObjectPtr<UDS_SystemCore,FWeakObjectPtr>::UEOpEquals(&this->SystemCore,(void *)0x0);
  if (bVar1) {
    CreateSystemCore(this);
  }
  else {
    this_00 = (UDS_SystemCore *)FWeakObjectPtr::Get(&(this->SystemCore).WeakPtr);
    UDS_SystemCore::Start(this_00);
  }
  return;
}

// End @ 14c26c1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FDS_SystemModule::End(FDS_SystemModule *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_SystemCore *this_00;
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
              (&local_138,"FDS_SystemModule::End",0x15,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x1d,L"");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  bVar1 = TWeakObjectPtr<UDS_SystemCore,FWeakObjectPtr>::UEOpEquals(&this->SystemCore,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_SystemCore *)FWeakObjectPtr::Get(&(this->SystemCore).WeakPtr);
    UDS_SystemCore::End(this_00);
    pUVar3 = FWeakObjectPtr::Get(&(this->SystemCore).WeakPtr);
    this_01 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc);
    FUObjectItem::ClearRootFlags(this_01,RootSet);
    (this->SystemCore).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// Request_GetServerListInfo @ 14c26c300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_SystemModule::Request_GetServerListInfo(FDS_SystemModule *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_SystemCore *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = TWeakObjectPtr<UDS_SystemCore,FWeakObjectPtr>::UEOpEquals(&this->SystemCore,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_SystemModule::Request_GetServerListInfo",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x26,L"SystemCore is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_SystemCore *)FWeakObjectPtr::Get(&(this->SystemCore).WeakPtr);
    UDS_SystemCore::Request_GetServerListInfo(this_00);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c26c3f0

void * __thiscall
FDS_SystemModule::_scalar_deleting_destructor_(FDS_SystemModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewObject<UDS_SystemCore> @ 14c26c430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_SystemCore * __cdecl NewObject<UDS_SystemCore>(UObject *param_1)

{
  UClass *pUVar1;
  UDS_SystemCore *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_SystemCore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDS_SystemCore *)
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

// CreateSystemCore @ 14c26c4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FDS_SystemModule::CreateSystemCore(FDS_SystemModule *this)

{
  TWeakObjectPtr<UDS_SystemCore,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FUObjectItem *this_01;
  UDS_SystemCore *this_02;
  longlong *plVar5;
  undefined1 auStackY_1f8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  UObject *local_1c8 [2];
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = &this->SystemCore;
  bVar1 = TWeakObjectPtr<UDS_SystemCore,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar1) {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_SystemCore_NoRegister();
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
    bVar1 = TWeakObjectPtr<UDS_SystemCore,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      this_01 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc);
      FUObjectItem::SetRootFlags(this_01,RootSet);
      this_02 = (UDS_SystemCore *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_SystemCore::Start(this_02);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_SystemModule::CreateSystemCore",0x22,Yes);
    pwVar7 = L"Failed to create SystemCore.";
    uVar6 = 0x38;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_SystemModule::CreateSystemCore",0x22,Yes);
    pwVar7 = L"SystemCore already exists.";
    uVar6 = 0x31;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// DestroySystemCore @ 14c26c6e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FDS_SystemModule::DestroySystemCore(FDS_SystemModule *this)

{
  TWeakObjectPtr<UDS_SystemCore,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_SystemCore *this_01;
  UObject *pUVar2;
  FUObjectItem *this_02;
  
  this_00 = &this->SystemCore;
  bVar1 = TWeakObjectPtr<UDS_SystemCore,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar1) {
    this_01 = (UDS_SystemCore *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_SystemCore::End(this_01);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    this_02 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc);
    FUObjectItem::ClearRootFlags(this_02,RootSet);
    this_00->WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// InitializeModule @ 14c26c740

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FDS_SystemModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FDS_SystemModule__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

// UEOpEquals @ 14c26c780

bool __thiscall
TWeakObjectPtr<UDS_SystemCore,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_SystemCore,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// IMPLEMENT_MODULE_DS_System @ 14c26c7a0

void __cdecl IMPLEMENT_MODULE_DS_System(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 150444770

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

