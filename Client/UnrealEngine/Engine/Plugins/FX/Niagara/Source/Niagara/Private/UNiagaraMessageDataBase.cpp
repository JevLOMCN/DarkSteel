// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 1492c1d80

UClass * __cdecl UNiagaraMessageDataBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraMessageDataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraMessageDataBase",
               &Z_Registration_Info_UClass_UNiagaraMessageDataBase.InnerSingleton,
               StaticRegisterNativesUNiagaraMessageDataBase,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraMessageDataBase>,
               InternalVTableHelperCtorCaller<UNiagaraMessageDataBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraMessageDataBase.InnerSingleton;
}

// UNiagaraMessageDataBase @ 1492d3150

UNiagaraMessageDataBase * __thiscall
UNiagaraMessageDataBase::UNiagaraMessageDataBase
          (UNiagaraMessageDataBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraMessageDataBase__6B_;
  return this;
}

// ~UNiagaraMessageDataBase @ 1492d4c00

void __thiscall UNiagaraMessageDataBase::~UNiagaraMessageDataBase(UNiagaraMessageDataBase *this)

{
  *(undefined ***)this = &___7UNiagaraMessageDataBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAllowDismissal @ 1492ed540

bool __thiscall UNiagaraMessageDataBase::GetAllowDismissal(UNiagaraMessageDataBase *this)

{
  return false;
}

// GetPrivateStaticClass @ 1492f1250

UClass * __cdecl UNiagaraMessageDataBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraMessageDataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraMessageDataBase",
               &Z_Registration_Info_UClass_UNiagaraMessageDataBase.InnerSingleton,
               StaticRegisterNativesUNiagaraMessageDataBase,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraMessageDataBase>,
               InternalVTableHelperCtorCaller<UNiagaraMessageDataBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraMessageDataBase.InnerSingleton;
}

// StaticRegisterNativesUNiagaraMessageDataBase @ 149309e20

void __cdecl UNiagaraMessageDataBase::StaticRegisterNativesUNiagaraMessageDataBase(void)

{
  return;
}

