// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 14925e490

UClass * __cdecl UNiagaraEditorDataBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEditorDataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEditorDataBase",
               &Z_Registration_Info_UClass_UNiagaraEditorDataBase.InnerSingleton,
               StaticRegisterNativesUNiagaraEditorDataBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraEditorDataBase>,
               InternalVTableHelperCtorCaller<UNiagaraEditorDataBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEditorDataBase.InnerSingleton;
}

// UNiagaraEditorDataBase @ 149278700

UNiagaraEditorDataBase * __thiscall
UNiagaraEditorDataBase::UNiagaraEditorDataBase(UNiagaraEditorDataBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraEditorDataBase__6B_;
  return this;
}

// UNiagaraEditorDataBase @ 149278730

UNiagaraEditorDataBase * __thiscall
UNiagaraEditorDataBase::UNiagaraEditorDataBase
          (UNiagaraEditorDataBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraEditorDataBase__6B_;
  return this;
}

// ~UNiagaraEditorDataBase @ 14927ab70

void __thiscall UNiagaraEditorDataBase::~UNiagaraEditorDataBase(UNiagaraEditorDataBase *this)

{
  *(undefined ***)this = &___7UNiagaraEditorDataBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1492a6110

UClass * __cdecl UNiagaraEditorDataBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEditorDataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEditorDataBase",
               &Z_Registration_Info_UClass_UNiagaraEditorDataBase.InnerSingleton,
               StaticRegisterNativesUNiagaraEditorDataBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraEditorDataBase>,
               InternalVTableHelperCtorCaller<UNiagaraEditorDataBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEditorDataBase.InnerSingleton;
}

// StaticRegisterNativesUNiagaraEditorDataBase @ 1492b6940

void __cdecl UNiagaraEditorDataBase::StaticRegisterNativesUNiagaraEditorDataBase(void)

{
  return;
}

