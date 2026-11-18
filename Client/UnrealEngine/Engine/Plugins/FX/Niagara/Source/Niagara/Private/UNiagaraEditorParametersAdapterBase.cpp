// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 14925e660

UClass * __cdecl UNiagaraEditorParametersAdapterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEditorParametersAdapterBase",
               &Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.InnerSingleton,
               StaticRegisterNativesUNiagaraEditorParametersAdapterBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEditorParametersAdapterBase>,
               InternalVTableHelperCtorCaller<UNiagaraEditorParametersAdapterBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.InnerSingleton;
}

// UNiagaraEditorParametersAdapterBase @ 149278760

UNiagaraEditorParametersAdapterBase * __thiscall
UNiagaraEditorParametersAdapterBase::UNiagaraEditorParametersAdapterBase
          (UNiagaraEditorParametersAdapterBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraEditorParametersAdapterBase__6B_;
  return this;
}

// UNiagaraEditorParametersAdapterBase @ 149278790

UNiagaraEditorParametersAdapterBase * __thiscall
UNiagaraEditorParametersAdapterBase::UNiagaraEditorParametersAdapterBase
          (UNiagaraEditorParametersAdapterBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraEditorParametersAdapterBase__6B_;
  return this;
}

// ~UNiagaraEditorParametersAdapterBase @ 14927ab90

void __thiscall
UNiagaraEditorParametersAdapterBase::~UNiagaraEditorParametersAdapterBase
          (UNiagaraEditorParametersAdapterBase *this)

{
  *(undefined ***)this = &___7UNiagaraEditorParametersAdapterBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1492a61c0

UClass * __cdecl UNiagaraEditorParametersAdapterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEditorParametersAdapterBase",
               &Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.InnerSingleton,
               StaticRegisterNativesUNiagaraEditorParametersAdapterBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEditorParametersAdapterBase>,
               InternalVTableHelperCtorCaller<UNiagaraEditorParametersAdapterBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.InnerSingleton;
}

// StaticRegisterNativesUNiagaraEditorParametersAdapterBase @ 1492b6950

void __cdecl
UNiagaraEditorParametersAdapterBase::StaticRegisterNativesUNiagaraEditorParametersAdapterBase(void)

{
  return;
}

