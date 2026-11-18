// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1484a1b20

UClass * __cdecl UScene::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UScene.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Scene",&Z_Registration_Info_UClass_UScene.InnerSingleton,
               StaticRegisterNativesUScene,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScene>,InternalVTableHelperCtorCaller<UScene>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScene.InnerSingleton;
}

// UScene @ 1484bced0

UScene * __thiscall UScene::UScene(UScene *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UScene__6B_;
  return this;
}

// UScene @ 1484bcf00

UScene * __thiscall UScene::UScene(UScene *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UScene__6B_;
  return this;
}

// ~UScene @ 1484be260

void __thiscall UScene::~UScene(UScene *this)

{
  *(undefined ***)this = &___7UScene__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1484d9700

UClass * __cdecl UScene::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScene.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Scene",&Z_Registration_Info_UClass_UScene.InnerSingleton,
               StaticRegisterNativesUScene,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScene>,InternalVTableHelperCtorCaller<UScene>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScene.InnerSingleton;
}

// StaticRegisterNativesUScene @ 1484fcff0

void __cdecl UScene::StaticRegisterNativesUScene(void)

{
  return;
}

