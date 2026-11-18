// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// ~IConsoleObject @ 141621480

void __thiscall IConsoleObject::~IConsoleObject(IConsoleObject *this)

{
  this->_padding_ = (longlong)&___7IConsoleObject__6B_;
  return;
}

// AsCommand @ 141629d10

IConsoleCommand * __thiscall IConsoleObject::AsCommand(IConsoleObject *this)

{
  return (IConsoleCommand *)0x0;
}

// AsVariable @ 141629d50

IConsoleVariable * __thiscall IConsoleObject::AsVariable(IConsoleObject *this)

{
  return (IConsoleVariable *)0x0;
}

// AsVariableBool @ 141629de0

TConsoleVariableData<bool> * __thiscall IConsoleObject::AsVariableBool(IConsoleObject *this)

{
  undefined1 local_res10 [24];
  
  `IConsoleObject::AsVariableBool'::__l2::<lambda_1>::operator()(local_res10);
  return (TConsoleVariableData<bool> *)0x0;
}

// AsVariableFloat @ 141629e80

TConsoleVariableData<float> * __thiscall IConsoleObject::AsVariableFloat(IConsoleObject *this)

{
  undefined1 local_res10 [24];
  
  `IConsoleObject::AsVariableFloat'::__l2::<lambda_1>::operator()(local_res10);
  return (TConsoleVariableData<float> *)0x0;
}

// AsVariableInt @ 141629f20

TConsoleVariableData<int> * __thiscall IConsoleObject::AsVariableInt(IConsoleObject *this)

{
  undefined1 local_res10 [24];
  
  `IConsoleObject::AsVariableInt'::__l2::<lambda_1>::operator()(local_res10);
  return (TConsoleVariableData<int> *)0x0;
}

// AsVariableString @ 141629fc0

TConsoleVariableData<FString> * __thiscall IConsoleObject::AsVariableString(IConsoleObject *this)

{
  undefined1 local_res10 [24];
  
  `IConsoleObject::AsVariableString'::__l2::<lambda_1>::operator()(local_res10);
  return (TConsoleVariableData<FString> *)0x0;
}

// GetDetailedHelp @ 141641410

FText * __thiscall
IConsoleObject::GetDetailedHelp(IConsoleObject *this,FText *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)(**(code **)(this->_padding_ + 8))();
  FText::FromString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// GetParentObject @ 141644500

IConsoleObject * __thiscall IConsoleObject::GetParentObject(IConsoleObject *this)

{
  return (IConsoleObject *)0x0;
}

// GetShadowedObject @ 141646000

IConsoleObject * __thiscall IConsoleObject::GetShadowedObject(IConsoleObject *this)

{
  return (IConsoleObject *)0x0;
}

// IsDeprecated @ 141649d20

bool __thiscall IConsoleObject::IsDeprecated(IConsoleObject *this)

{
  return false;
}

// IsShadowObject @ 14164a3a0

bool __thiscall IConsoleObject::IsShadowObject(IConsoleObject *this)

{
  return false;
}

// IsVariableBool @ 14164a480

bool __thiscall IConsoleObject::IsVariableBool(IConsoleObject *this)

{
  return false;
}

// IsVariableFloat @ 14164a540

bool __thiscall IConsoleObject::IsVariableFloat(IConsoleObject *this)

{
  return false;
}

// IsVariableInt @ 14164a600

bool __thiscall IConsoleObject::IsVariableInt(IConsoleObject *this)

{
  return false;
}

// IsVariableString @ 14164a6e0

bool __thiscall IConsoleObject::IsVariableString(IConsoleObject *this)

{
  return false;
}

// operator() @ 1504792b0

bool __thiscall `IConsoleObject::AsVariableBool'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6409875433831006693>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6409875433831006693>,
                       &`public:___cdecl_`public:_virtual_class_TConsoleVariableData<bool>*___ptr64___cdecl_IConsoleObject::AsVariableBool(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504792f0

bool __thiscall `IConsoleObject::AsVariableFloat'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6409875433831006705>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6409875433831006705>,
                       &`public:___cdecl_`public:_virtual_class_TConsoleVariableData<float>*___ptr64___cdecl_IConsoleObject::AsVariableFloat(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150479330

bool __thiscall `IConsoleObject::AsVariableInt'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6409875433831006699>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6409875433831006699>,
                       &`public:___cdecl_`public:_virtual_class_TConsoleVariableData<int>*___ptr64___cdecl_IConsoleObject::AsVariableInt(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150479370

bool __thiscall `IConsoleObject::AsVariableString'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6409875433831006711>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6409875433831006711>,
                       &`public:___cdecl_`public:_virtual_class_TConsoleVariableData<FString>*___ptr64___cdecl_IConsoleObject::AsVariableString(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

