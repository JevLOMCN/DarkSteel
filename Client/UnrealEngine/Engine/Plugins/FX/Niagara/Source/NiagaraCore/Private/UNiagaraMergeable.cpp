// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraCore
// Functions: 6

// StaticClass @ 148dca6a0

UClass * __cdecl UNiagaraMergeable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraMergeable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraCore",L"NiagaraMergeable",
               &Z_Registration_Info_UClass_UNiagaraMergeable.InnerSingleton,
               StaticRegisterNativesUNiagaraMergeable,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraMergeable>,
               InternalVTableHelperCtorCaller<UNiagaraMergeable>,local_res8,
               UNiagaraNotifyOnChanged::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraMergeable.InnerSingleton;
}

// UNiagaraMergeable @ 148dcad40

UNiagaraMergeable * __thiscall
UNiagaraMergeable::UNiagaraMergeable(UNiagaraMergeable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraMergeable__6B_;
  return this;
}

// UNiagaraMergeable @ 148dcad70

UNiagaraMergeable * __thiscall UNiagaraMergeable::UNiagaraMergeable(UNiagaraMergeable *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  *(undefined ***)this = &___7UNiagaraMergeable__6B_;
  return this;
}

// ~UNiagaraMergeable @ 148dcae30

void __thiscall UNiagaraMergeable::~UNiagaraMergeable(UNiagaraMergeable *this)

{
  *(undefined ***)this = &___7UNiagaraNotifyOnChanged__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148dcb4f0

UClass * __cdecl UNiagaraMergeable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraMergeable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraCore",L"NiagaraMergeable",
               &Z_Registration_Info_UClass_UNiagaraMergeable.InnerSingleton,
               StaticRegisterNativesUNiagaraMergeable,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraMergeable>,
               InternalVTableHelperCtorCaller<UNiagaraMergeable>,local_res8,
               UNiagaraNotifyOnChanged::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraMergeable.InnerSingleton;
}

// StaticRegisterNativesUNiagaraMergeable @ 148dcb840

void __cdecl UNiagaraMergeable::StaticRegisterNativesUNiagaraMergeable(void)

{
  return;
}

