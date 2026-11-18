// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148e42910

UClass * __cdecl UNiagaraParameterDefinitionsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParameterDefinitionsBase",
               &Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.InnerSingleton,
               StaticRegisterNativesUNiagaraParameterDefinitionsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraParameterDefinitionsBase>,
               InternalVTableHelperCtorCaller<UNiagaraParameterDefinitionsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.InnerSingleton;
}

// UNiagaraParameterDefinitionsBase @ 148e55520

UNiagaraParameterDefinitionsBase * __thiscall
UNiagaraParameterDefinitionsBase::UNiagaraParameterDefinitionsBase
          (UNiagaraParameterDefinitionsBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraParameterDefinitionsBase__6B_;
  return this;
}

// UNiagaraParameterDefinitionsBase @ 148e55550

UNiagaraParameterDefinitionsBase * __thiscall
UNiagaraParameterDefinitionsBase::UNiagaraParameterDefinitionsBase
          (UNiagaraParameterDefinitionsBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraParameterDefinitionsBase__6B_;
  return this;
}

// ~UNiagaraParameterDefinitionsBase @ 148e56a30

void __thiscall
UNiagaraParameterDefinitionsBase::~UNiagaraParameterDefinitionsBase
          (UNiagaraParameterDefinitionsBase *this)

{
  *(undefined ***)this = &___7UNiagaraParameterDefinitionsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148e6e650

UClass * __cdecl UNiagaraParameterDefinitionsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraParameterDefinitionsBase",
               &Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.InnerSingleton,
               StaticRegisterNativesUNiagaraParameterDefinitionsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraParameterDefinitionsBase>,
               InternalVTableHelperCtorCaller<UNiagaraParameterDefinitionsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.InnerSingleton;
}

// StaticRegisterNativesUNiagaraParameterDefinitionsBase @ 148e81680

void __cdecl
UNiagaraParameterDefinitionsBase::StaticRegisterNativesUNiagaraParameterDefinitionsBase(void)

{
  return;
}

