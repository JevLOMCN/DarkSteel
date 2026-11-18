// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148e41f60

UClass * __cdecl UNiagaraValidationRuleSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraValidationRuleSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraValidationRuleSet",
               &Z_Registration_Info_UClass_UNiagaraValidationRuleSet.InnerSingleton,
               StaticRegisterNativesUNiagaraValidationRuleSet,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraValidationRuleSet>,
               InternalVTableHelperCtorCaller<UNiagaraValidationRuleSet>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraValidationRuleSet.InnerSingleton;
}

// UNiagaraValidationRuleSet @ 148e556e0

UNiagaraValidationRuleSet * __thiscall
UNiagaraValidationRuleSet::UNiagaraValidationRuleSet
          (UNiagaraValidationRuleSet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraValidationRuleSet__6B_;
  (this->ValidationRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidationRules).ArrayNum = 0;
  (this->ValidationRules).ArrayMax = 0;
  return this;
}

// UNiagaraValidationRuleSet @ 148e55720

UNiagaraValidationRuleSet * __thiscall
UNiagaraValidationRuleSet::UNiagaraValidationRuleSet
          (UNiagaraValidationRuleSet *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraValidationRuleSet__6B_;
  (this->ValidationRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidationRules).ArrayNum = 0;
  (this->ValidationRules).ArrayMax = 0;
  return this;
}

// ~UNiagaraValidationRuleSet @ 148e56ae0

void __thiscall
UNiagaraValidationRuleSet::~UNiagaraValidationRuleSet(UNiagaraValidationRuleSet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraValidationRuleSet__6B_;
  pFVar1 = (this->ValidationRules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148e6e9f0

UClass * __cdecl UNiagaraValidationRuleSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraValidationRuleSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraValidationRuleSet",
               &Z_Registration_Info_UClass_UNiagaraValidationRuleSet.InnerSingleton,
               StaticRegisterNativesUNiagaraValidationRuleSet,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraValidationRuleSet>,
               InternalVTableHelperCtorCaller<UNiagaraValidationRuleSet>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraValidationRuleSet.InnerSingleton;
}

// StaticRegisterNativesUNiagaraValidationRuleSet @ 148e816d0

void __cdecl UNiagaraValidationRuleSet::StaticRegisterNativesUNiagaraValidationRuleSet(void)

{
  return;
}

