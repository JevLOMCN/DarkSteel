// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962d200

UClass * __cdecl UMaterialProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MaterialProvider",
               &Z_Registration_Info_UClass_UMaterialProvider.InnerSingleton,
               StaticRegisterNativesUMaterialProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialProvider>,
               InternalVTableHelperCtorCaller<UMaterialProvider>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialProvider.InnerSingleton;
}

// UMaterialProvider @ 14963c6b0

UMaterialProvider * __thiscall
UMaterialProvider::UMaterialProvider(UMaterialProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMaterialProvider__6B_;
  return this;
}

// UMaterialProvider @ 14963c6e0

UMaterialProvider * __thiscall
UMaterialProvider::UMaterialProvider(UMaterialProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMaterialProvider__6B_;
  return this;
}

// ~UMaterialProvider @ 14963f0b0

void __thiscall UMaterialProvider::~UMaterialProvider(UMaterialProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149657780

UClass * __cdecl UMaterialProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MaterialProvider",
               &Z_Registration_Info_UClass_UMaterialProvider.InnerSingleton,
               StaticRegisterNativesUMaterialProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialProvider>,
               InternalVTableHelperCtorCaller<UMaterialProvider>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialProvider.InnerSingleton;
}

// StaticRegisterNativesUMaterialProvider @ 149664c90

void __cdecl UMaterialProvider::StaticRegisterNativesUMaterialProvider(void)

{
  return;
}

