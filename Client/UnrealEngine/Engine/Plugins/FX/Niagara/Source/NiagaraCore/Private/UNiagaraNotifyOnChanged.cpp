// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraCore
// Functions: 6

// StaticClass @ 148dca5f0

UClass * __cdecl UNiagaraNotifyOnChanged::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraCore",L"NiagaraNotifyOnChanged",
               &Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.InnerSingleton,
               StaticRegisterNativesUNiagaraNotifyOnChanged,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraNotifyOnChanged>,
               InternalVTableHelperCtorCaller<UNiagaraNotifyOnChanged>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.InnerSingleton;
}

// UNiagaraNotifyOnChanged @ 148dcadb0

UNiagaraNotifyOnChanged * __thiscall
UNiagaraNotifyOnChanged::UNiagaraNotifyOnChanged
          (UNiagaraNotifyOnChanged *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraNotifyOnChanged__6B_;
  return this;
}

// UNiagaraNotifyOnChanged @ 148dcade0

UNiagaraNotifyOnChanged * __thiscall
UNiagaraNotifyOnChanged::UNiagaraNotifyOnChanged
          (UNiagaraNotifyOnChanged *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraNotifyOnChanged__6B_;
  return this;
}

// ~UNiagaraNotifyOnChanged @ 148dcae50

void __thiscall UNiagaraNotifyOnChanged::~UNiagaraNotifyOnChanged(UNiagaraNotifyOnChanged *this)

{
  *(undefined ***)this = &___7UNiagaraNotifyOnChanged__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148dcb5b0

UClass * __cdecl UNiagaraNotifyOnChanged::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraCore",L"NiagaraNotifyOnChanged",
               &Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.InnerSingleton,
               StaticRegisterNativesUNiagaraNotifyOnChanged,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraNotifyOnChanged>,
               InternalVTableHelperCtorCaller<UNiagaraNotifyOnChanged>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.InnerSingleton;
}

// StaticRegisterNativesUNiagaraNotifyOnChanged @ 148dcb850

void __cdecl UNiagaraNotifyOnChanged::StaticRegisterNativesUNiagaraNotifyOnChanged(void)

{
  return;
}

