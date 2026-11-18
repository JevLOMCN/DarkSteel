// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 37

// FConsoleVariableShadow @ 14161d380

FConsoleVariableShadow * __thiscall
FConsoleVariableShadow::FConsoleVariableShadow
          (FConsoleVariableShadow *this,wchar_t *param_1,EShadowCVarBehavior param_2,
          EShadowCVarBehavior param_3,bool param_4,wchar_t *param_5,wchar_t *param_6)

{
  byte *pbVar1;
  
  this->_padding_ = (longlong)&___7FConsoleObjectShadowData__6B_;
  ::FString::FString((FString *)&this->_padding_,param_1);
  ::FString::FString((FString *)&this->_padding_,param_5);
  ::FString::FString((FString *)&this->_padding_,param_6);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xf0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | param_4 << 3;
  this->_padding_ = (longlong)&_vftable__for__FConsoleObjectShadowData__;
  *(EShadowCVarBehavior *)&this->_padding_ = param_2;
  this->_padding_ = (longlong)&_vftable__for__IConsoleVariable__;
  *(EShadowCVarBehavior *)((longlong)&this->_padding_ + 1) = param_3;
  *(undefined4 *)&this->_padding_ = 0;
  this->RealVariable = (IConsoleVariable *)0x0;
  return this;
}

// AsVariable @ 141629d30

IConsoleVariable * __thiscall FConsoleVariableShadow::AsVariable(FConsoleVariableShadow *this)

{
  if (this == (FConsoleVariableShadow *)&DAT_00000040) {
    this = (FConsoleVariableShadow *)0x0;
  }
  return (IConsoleVariable *)this;
}

// AsVariableBool @ 141629da0

TConsoleVariableData<bool> * __thiscall
FConsoleVariableShadow::AsVariableBool(FConsoleVariableShadow *this)

{
  bool bVar1;
  TConsoleVariableData<bool> *pTVar2;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141629dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar2 = (TConsoleVariableData<bool> *)(**(code **)(*(longlong *)this->_padding_ + 0x60))();
    return pTVar2;
  }
  return (TConsoleVariableData<bool> *)0x0;
}

// AsVariableFloat @ 141629e40

TConsoleVariableData<float> * __thiscall
FConsoleVariableShadow::AsVariableFloat(FConsoleVariableShadow *this)

{
  bool bVar1;
  TConsoleVariableData<float> *pTVar2;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141629e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar2 = (TConsoleVariableData<float> *)(**(code **)(*(longlong *)this->_padding_ + 0x70))();
    return pTVar2;
  }
  return (TConsoleVariableData<float> *)0x0;
}

// AsVariableInt @ 141629ee0

TConsoleVariableData<int> * __thiscall
FConsoleVariableShadow::AsVariableInt(FConsoleVariableShadow *this)

{
  bool bVar1;
  TConsoleVariableData<int> *pTVar2;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141629f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar2 = (TConsoleVariableData<int> *)(**(code **)(*(longlong *)this->_padding_ + 0x68))();
    return pTVar2;
  }
  return (TConsoleVariableData<int> *)0x0;
}

// AsVariableString @ 141629f80

TConsoleVariableData<FString> * __thiscall
FConsoleVariableShadow::AsVariableString(FConsoleVariableShadow *this)

{
  bool bVar1;
  TConsoleVariableData<FString> *pTVar2;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141629fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar2 = (TConsoleVariableData<FString> *)(**(code **)(*(longlong *)this->_padding_ + 0x78))();
    return pTVar2;
  }
  return (TConsoleVariableData<FString> *)0x0;
}

// ClearPlatformVariables @ 14162ec90

void __thiscall
FConsoleVariableShadow::ClearPlatformVariables(FConsoleVariableShadow *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x110))((longlong *)this->_padding_,param_1);
  }
  return;
}

// GetBool @ 14163eb20

bool __thiscall FConsoleVariableShadow::GetBool(FConsoleVariableShadow *this)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014163eb42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)this->_padding_ + 0xc0))();
    return (bool)uVar2;
  }
  return false;
}

// GetDefaultValue @ 141640fe0

FString * __thiscall
FConsoleVariableShadow::GetDefaultValue
          (FConsoleVariableShadow *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0xf8))
              ((longlong *)this->_padding_,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDetailedHelp @ 1416413b0

FText * __thiscall
FConsoleVariableShadow::GetDetailedHelp(FConsoleVariableShadow *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x28))
              ((longlong *)this->_padding_,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FText::AsCultureInvariant(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetFlags @ 141641f70

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

EConsoleVariableFlags __thiscall FConsoleVariableShadow::GetFlags(FConsoleVariableShadow *this)

{
  bool bVar1;
  EConsoleVariableFlags EVar2;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141641f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x18))();
    return EVar2;
  }
  return ECVF_Default;
}

// GetFloat @ 141642440

float __thiscall FConsoleVariableShadow::GetFloat(FConsoleVariableShadow *this)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141642462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(*(longlong *)this->_padding_ + 0xd0))();
    return fVar2;
  }
  return 0.0;
}

// GetHelp @ 1416429d0

wchar_t * __thiscall FConsoleVariableShadow::GetHelp(FConsoleVariableShadow *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001416429f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pwVar2 = (wchar_t *)(**(code **)(*(longlong *)this->_padding_ + 8))();
    return pwVar2;
  }
  return L"";
}

// GetHistorySize @ 141642a90

ulong64 __thiscall FConsoleVariableShadow::GetHistorySize(FConsoleVariableShadow *this)

{
  bool bVar1;
  ulong64 uVar2;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141642ab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x120))();
    return uVar2;
  }
  return 0;
}

// GetInt @ 141642f40

int __thiscall FConsoleVariableShadow::GetInt(FConsoleVariableShadow *this)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141642f62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(longlong *)this->_padding_ + 200))();
    return iVar2;
  }
  return 0;
}

// GetPlatformValueVariable @ 141645160

TSharedPtr<IConsoleVariable,1> * __thiscall
FConsoleVariableShadow::GetPlatformValueVariable
          (FConsoleVariableShadow *this,TSharedPtr<IConsoleVariable,1> *__return_storage_ptr__,
          FName param_1,FString *param_2)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x100))
              ((longlong *)this->_padding_,__return_storage_ptr__,param_1,param_2);
  }
  else {
    __return_storage_ptr__->Object = (IConsoleVariable *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// GetRealObject @ 141645c10

IConsoleObject * __thiscall FConsoleVariableShadow::GetRealObject(FConsoleVariableShadow *this)

{
  return (IConsoleObject *)this->RealVariable;
}

// GetShadowedObject @ 141645fd0

IConsoleObject * __thiscall FConsoleVariableShadow::GetShadowedObject(FConsoleVariableShadow *this)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    return (IConsoleObject *)this->_padding_;
  }
  return (IConsoleObject *)0x0;
}

// GetString @ 141646b90

FString * __thiscall
FConsoleVariableShadow::GetString(FConsoleVariableShadow *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0xd8))
              ((longlong *)this->_padding_,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetThisName @ 141646f30

FString * __thiscall
FConsoleVariableShadow::GetThisName(FConsoleVariableShadow *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  plVar4 = &this->_padding_;
  if (this == (FConsoleVariableShadow *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xd0))
            (IConsoleManager::Singleton,__return_storage_ptr__,plVar4);
  return __return_storage_ptr__;
}

// HasPlatformValueVariable @ 141647870

bool __thiscall
FConsoleVariableShadow::HasPlatformValueVariable
          (FConsoleVariableShadow *this,FName param_1,FString *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001416478b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x108))
                      ((longlong *)this->_padding_,param_1,param_2);
    return (bool)uVar2;
  }
  return false;
}

// IsDeprecated @ 141649d10

bool __thiscall FConsoleVariableShadow::IsDeprecated(FConsoleVariableShadow *this)

{
  return (bool)(*(byte *)((longlong)&this[-1].RealVariable + 2) >> 3 & 1);
}

// IsShadowObject @ 14164a390

bool __thiscall FConsoleVariableShadow::IsShadowObject(FConsoleVariableShadow *this)

{
  return true;
}

// IsVariableBool @ 14164a440

bool __thiscall FConsoleVariableShadow::IsVariableBool(FConsoleVariableShadow *this)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014164a462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x40))();
    return (bool)uVar2;
  }
  return false;
}

// IsVariableFloat @ 14164a500

bool __thiscall FConsoleVariableShadow::IsVariableFloat(FConsoleVariableShadow *this)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014164a522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x50))();
    return (bool)uVar2;
  }
  return false;
}

// IsVariableInt @ 14164a5c0

bool __thiscall FConsoleVariableShadow::IsVariableInt(FConsoleVariableShadow *this)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014164a5e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x48))();
    return (bool)uVar2;
  }
  return false;
}

// IsVariableString @ 14164a690

bool __thiscall FConsoleVariableShadow::IsVariableString(FConsoleVariableShadow *this)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014164a6b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x58))();
    return (bool)uVar2;
  }
  return false;
}

// LogHistory @ 14164cfe0

void __thiscall
FConsoleVariableShadow::LogHistory(FConsoleVariableShadow *this,FOutputDevice *param_1)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x118))((longlong *)this->_padding_,param_1);
  }
  return;
}

// OnChangedDelegate @ 14164ef70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> * __thiscall
FConsoleVariableShadow::OnChangedDelegate(FConsoleVariableShadow *this)

{
  bool bVar1;
  TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *pTVar2;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014164ef92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar2 = (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
             (**(code **)(*(longlong *)this->_padding_ + 0xe8))();
    return pTVar2;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TMulticastDelegate<void___cdecl(IConsoleVariable*___ptr64),FDefaultDelegateUserPolicy>&___ptr64___cdecl_FConsoleVariableShadow::OnChangedDelegate(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TMulticastDelegate<void___cdecl(IConsoleVariable*___ptr64),FDefaultDelegateUserPolicy>&___ptr64___cdecl_FConsoleVariableShadow::OnChangedDelegate(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TMulticastDelegate<void___cdecl(IConsoleVariable*___ptr64),FDefaultDelegateUserPolicy>&___ptr64___cdecl_FConsoleVariableShadow::OnChangedDelegate(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _Dummy = 0;
      DAT_154ea8268 = 0;
      _DAT_154ea8270 = ___xmm_00000000000000020000000000000000;
      uRam0000000154ea8278 = _UNK_150631d48;
      atexit(`FConsoleVariableShadow::OnChangedDelegate'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_virtual_class_TMulticastDelegate<void___cdecl(IConsoleVariable*___ptr64),FDefaultDelegateUserPolicy>&___ptr64___cdecl_FConsoleVariableShadow::OnChangedDelegate(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
             &`public:_virtual_class_TMulticastDelegate<void___cdecl(IConsoleVariable*___ptr64),FDefaultDelegateUserPolicy>&___ptr64___cdecl_FConsoleVariableShadow::OnChangedDelegate(void)___ptr64'
              ::__l2::Dummy;
    }
  }
  return (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
         &`public:_virtual_class_TMulticastDelegate<void___cdecl(IConsoleVariable*___ptr64),FDefaultDelegateUserPolicy>&___ptr64___cdecl_FConsoleVariableShadow::OnChangedDelegate(void)___ptr64'
          ::__l2::Dummy;
}

// Release @ 141656860

void __thiscall FConsoleVariableShadow::Release(FConsoleVariableShadow *this)

{
  this->_padding_ = 0;
  return;
}

// ResolveContext @ 141658e50

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FResolvedContext * __thiscall
FConsoleVariableShadow::ResolveContext
          (FConsoleVariableShadow *this,FResolvedContext *__return_storage_ptr__,
          FSetContext *param_1)

{
  bool bVar1;
  FNameEntryId FStack_14;
  uint uStack_10;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0xa8))
              ((longlong *)this->_padding_,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  FStack_14 = (param_1->Tag).ComparisonIndex;
  uStack_10 = (param_1->Tag).Number;
  __return_storage_ptr__->Flags = param_1->Flags;
  (__return_storage_ptr__->Tag).ComparisonIndex = (FNameEntryId)FStack_14.Value;
  (__return_storage_ptr__->Tag).Number = uStack_10;
  return __return_storage_ptr__;
}

// Set @ 14165cc40

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableShadow::Set(FConsoleVariableShadow *this,wchar_t *param_1,FResolvedContext *param_2)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0xb0))((longlong *)this->_padding_,param_1,param_2);
  }
  return;
}

// SetFlags @ 14165d320

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableShadow::SetFlags(FConsoleVariableShadow *this,EConsoleVariableFlags param_1)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,param_1);
  }
  return;
}

// SetHelp @ 14165d8b0

void __thiscall FConsoleVariableShadow::SetHelp(FConsoleVariableShadow *this,wchar_t *param_1)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))((longlong *)this->_padding_,param_1);
  }
  return;
}

// SetOnChangedCallback @ 14165e1a0

void __thiscall
FConsoleVariableShadow::SetOnChangedCallback
          (FConsoleVariableShadow *this,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_1)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0xe0))((longlong *)this->_padding_,param_1);
  }
  return;
}

// SetRealObject @ 14165e630

void __thiscall
FConsoleVariableShadow::SetRealObject(FConsoleVariableShadow *this,IConsoleObject *param_1)

{
  this->RealVariable = (IConsoleVariable *)param_1;
  return;
}

// Unset @ 1416689a0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableShadow::Unset
          (FConsoleVariableShadow *this,EConsoleVariableFlags param_1,FName param_2)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0xb8))((longlong *)this->_padding_,param_1,param_2);
  }
  return;
}

