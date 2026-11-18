// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a2a6d0

UClass * __cdecl UDataLayerLoadingPolicy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerLoadingPolicy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerLoadingPolicy",
               &Z_Registration_Info_UClass_UDataLayerLoadingPolicy.InnerSingleton,
               StaticRegisterNativesUDataLayerLoadingPolicy,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataLayerLoadingPolicy>,
               InternalVTableHelperCtorCaller<UDataLayerLoadingPolicy>,local_res8,
               UObject::StaticClass,UDataLayerManager::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerLoadingPolicy.InnerSingleton;
}

// UDataLayerLoadingPolicy @ 148a429b0

UDataLayerLoadingPolicy * __thiscall
UDataLayerLoadingPolicy::UDataLayerLoadingPolicy
          (UDataLayerLoadingPolicy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDataLayerLoadingPolicy__6B_;
  return this;
}

// UDataLayerLoadingPolicy @ 148a429e0

UDataLayerLoadingPolicy * __thiscall
UDataLayerLoadingPolicy::UDataLayerLoadingPolicy
          (UDataLayerLoadingPolicy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDataLayerLoadingPolicy__6B_;
  return this;
}

// ~UDataLayerLoadingPolicy @ 148a44770

void __thiscall UDataLayerLoadingPolicy::~UDataLayerLoadingPolicy(UDataLayerLoadingPolicy *this)

{
  *(undefined ***)this = &___7UDataLayerLoadingPolicy__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a5a4a0

UClass * __cdecl UDataLayerLoadingPolicy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerLoadingPolicy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerLoadingPolicy",
               &Z_Registration_Info_UClass_UDataLayerLoadingPolicy.InnerSingleton,
               StaticRegisterNativesUDataLayerLoadingPolicy,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataLayerLoadingPolicy>,
               InternalVTableHelperCtorCaller<UDataLayerLoadingPolicy>,local_res8,
               UObject::StaticClass,UDataLayerManager::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerLoadingPolicy.InnerSingleton;
}

// StaticRegisterNativesUDataLayerLoadingPolicy @ 148a6a420

void __cdecl UDataLayerLoadingPolicy::StaticRegisterNativesUDataLayerLoadingPolicy(void)

{
  return;
}

