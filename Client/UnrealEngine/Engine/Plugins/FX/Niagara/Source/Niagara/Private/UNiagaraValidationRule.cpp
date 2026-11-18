// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 14940f570

UClass * __cdecl UNiagaraValidationRule::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraValidationRule.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraValidationRule",
               &Z_Registration_Info_UClass_UNiagaraValidationRule.InnerSingleton,
               StaticRegisterNativesUNiagaraValidationRule,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Editor",
               InternalConstructor<UNiagaraValidationRule>,
               InternalVTableHelperCtorCaller<UNiagaraValidationRule>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraValidationRule.InnerSingleton;
}

// UNiagaraValidationRule @ 14942a960

UNiagaraValidationRule * __thiscall
UNiagaraValidationRule::UNiagaraValidationRule(UNiagaraValidationRule *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsConfigDisabled = false;
  this->_padding_ = (longlong)&___7UNiagaraValidationRule__6B_;
  return this;
}

// UNiagaraValidationRule @ 14942a990

UNiagaraValidationRule * __thiscall
UNiagaraValidationRule::UNiagaraValidationRule
          (UNiagaraValidationRule *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsConfigDisabled = false;
  this->_padding_ = (longlong)&___7UNiagaraValidationRule__6B_;
  return this;
}

// ~UNiagaraValidationRule @ 14942cf40

void __thiscall UNiagaraValidationRule::~UNiagaraValidationRule(UNiagaraValidationRule *this)

{
  this->_padding_ = (longlong)&___7UNiagaraValidationRule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14944c730

UClass * __cdecl UNiagaraValidationRule::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraValidationRule.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraValidationRule",
               &Z_Registration_Info_UClass_UNiagaraValidationRule.InnerSingleton,
               StaticRegisterNativesUNiagaraValidationRule,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Editor",
               InternalConstructor<UNiagaraValidationRule>,
               InternalVTableHelperCtorCaller<UNiagaraValidationRule>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraValidationRule.InnerSingleton;
}

// StaticRegisterNativesUNiagaraValidationRule @ 149469e70

void __cdecl UNiagaraValidationRule::StaticRegisterNativesUNiagaraValidationRule(void)

{
  return;
}

