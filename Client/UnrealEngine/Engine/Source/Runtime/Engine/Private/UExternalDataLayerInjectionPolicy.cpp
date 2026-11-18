// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a27850

UClass * __cdecl UExternalDataLayerInjectionPolicy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerInjectionPolicy",
               &Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.InnerSingleton,
               StaticRegisterNativesUExternalDataLayerInjectionPolicy,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UExternalDataLayerInjectionPolicy>,
               InternalVTableHelperCtorCaller<UExternalDataLayerInjectionPolicy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.InnerSingleton;
}

// UExternalDataLayerInjectionPolicy @ 148a42e20

UExternalDataLayerInjectionPolicy * __thiscall
UExternalDataLayerInjectionPolicy::UExternalDataLayerInjectionPolicy
          (UExternalDataLayerInjectionPolicy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UExternalDataLayerInjectionPolicy__6B_;
  return this;
}

// UExternalDataLayerInjectionPolicy @ 148a42e50

UExternalDataLayerInjectionPolicy * __thiscall
UExternalDataLayerInjectionPolicy::UExternalDataLayerInjectionPolicy
          (UExternalDataLayerInjectionPolicy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UExternalDataLayerInjectionPolicy__6B_;
  return this;
}

// ~UExternalDataLayerInjectionPolicy @ 148a44980

void __thiscall
UExternalDataLayerInjectionPolicy::~UExternalDataLayerInjectionPolicy
          (UExternalDataLayerInjectionPolicy *this)

{
  *(undefined ***)this = &___7UExternalDataLayerInjectionPolicy__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a5a920

UClass * __cdecl UExternalDataLayerInjectionPolicy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerInjectionPolicy",
               &Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.InnerSingleton,
               StaticRegisterNativesUExternalDataLayerInjectionPolicy,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UExternalDataLayerInjectionPolicy>,
               InternalVTableHelperCtorCaller<UExternalDataLayerInjectionPolicy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.InnerSingleton;
}

// StaticRegisterNativesUExternalDataLayerInjectionPolicy @ 148a6a4e0

void __cdecl
UExternalDataLayerInjectionPolicy::StaticRegisterNativesUExternalDataLayerInjectionPolicy(void)

{
  return;
}

