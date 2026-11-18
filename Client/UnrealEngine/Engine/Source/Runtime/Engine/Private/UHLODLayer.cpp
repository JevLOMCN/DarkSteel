// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a72060

UClass * __cdecl UHLODLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODLayer",&Z_Registration_Info_UClass_UHLODLayer.InnerSingleton,
               StaticRegisterNativesUHLODLayer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODLayer>,InternalVTableHelperCtorCaller<UHLODLayer>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODLayer.InnerSingleton;
}

// UHLODLayer @ 148a7fb90

UHLODLayer * __thiscall UHLODLayer::UHLODLayer(UHLODLayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHLODLayer__6B_;
  return this;
}

// UHLODLayer @ 148a7fbc0

UHLODLayer * __thiscall UHLODLayer::UHLODLayer(UHLODLayer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHLODLayer__6B_;
  return this;
}

// ~UHLODLayer @ 148a81920

void __thiscall UHLODLayer::~UHLODLayer(UHLODLayer *this)

{
  *(undefined ***)this = &___7UHLODLayer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a95de0

UClass * __cdecl UHLODLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODLayer",&Z_Registration_Info_UClass_UHLODLayer.InnerSingleton,
               StaticRegisterNativesUHLODLayer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODLayer>,InternalVTableHelperCtorCaller<UHLODLayer>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODLayer.InnerSingleton;
}

// StaticRegisterNativesUHLODLayer @ 148aa2910

void __cdecl UHLODLayer::StaticRegisterNativesUHLODLayer(void)

{
  return;
}

