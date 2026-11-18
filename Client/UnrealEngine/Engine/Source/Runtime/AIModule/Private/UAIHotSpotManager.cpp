// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146f82ea0

UClass * __cdecl UAIHotSpotManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIHotSpotManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIHotSpotManager",
               &Z_Registration_Info_UClass_UAIHotSpotManager.InnerSingleton,
               StaticRegisterNativesUAIHotSpotManager,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAIHotSpotManager>,
               InternalVTableHelperCtorCaller<UAIHotSpotManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIHotSpotManager.InnerSingleton;
}

// UAIHotSpotManager @ 146f936e0

UAIHotSpotManager * __thiscall
UAIHotSpotManager::UAIHotSpotManager(UAIHotSpotManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAIHotSpotManager__6B_;
  return this;
}

// UAIHotSpotManager @ 146f93710

UAIHotSpotManager * __thiscall
UAIHotSpotManager::UAIHotSpotManager(UAIHotSpotManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAIHotSpotManager__6B_;
  return this;
}

// ~UAIHotSpotManager @ 146f96810

void __thiscall UAIHotSpotManager::~UAIHotSpotManager(UAIHotSpotManager *this)

{
  *(undefined ***)this = &___7UAIHotSpotManager__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146fb3560

UClass * __cdecl UAIHotSpotManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIHotSpotManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIHotSpotManager",
               &Z_Registration_Info_UClass_UAIHotSpotManager.InnerSingleton,
               StaticRegisterNativesUAIHotSpotManager,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAIHotSpotManager>,
               InternalVTableHelperCtorCaller<UAIHotSpotManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIHotSpotManager.InnerSingleton;
}

// StaticRegisterNativesUAIHotSpotManager @ 146fd3460

void __cdecl UAIHotSpotManager::StaticRegisterNativesUAIHotSpotManager(void)

{
  return;
}

