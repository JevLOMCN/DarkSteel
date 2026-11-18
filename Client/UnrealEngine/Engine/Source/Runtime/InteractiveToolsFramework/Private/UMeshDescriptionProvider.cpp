// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962db90

UClass * __cdecl UMeshDescriptionProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDescriptionProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshDescriptionProvider",
               &Z_Registration_Info_UClass_UMeshDescriptionProvider.InnerSingleton,
               StaticRegisterNativesUMeshDescriptionProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshDescriptionProvider>,
               InternalVTableHelperCtorCaller<UMeshDescriptionProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionProvider.InnerSingleton;
}

// UMeshDescriptionProvider @ 14963c770

UMeshDescriptionProvider * __thiscall
UMeshDescriptionProvider::UMeshDescriptionProvider
          (UMeshDescriptionProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshDescriptionProvider__6B_;
  return this;
}

// UMeshDescriptionProvider @ 14963c7a0

UMeshDescriptionProvider * __thiscall
UMeshDescriptionProvider::UMeshDescriptionProvider
          (UMeshDescriptionProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshDescriptionProvider__6B_;
  return this;
}

// ~UMeshDescriptionProvider @ 14963f0d0

void __thiscall UMeshDescriptionProvider::~UMeshDescriptionProvider(UMeshDescriptionProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149657900

UClass * __cdecl UMeshDescriptionProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDescriptionProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshDescriptionProvider",
               &Z_Registration_Info_UClass_UMeshDescriptionProvider.InnerSingleton,
               StaticRegisterNativesUMeshDescriptionProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshDescriptionProvider>,
               InternalVTableHelperCtorCaller<UMeshDescriptionProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionProvider.InnerSingleton;
}

// StaticRegisterNativesUMeshDescriptionProvider @ 149664cb0

void __cdecl UMeshDescriptionProvider::StaticRegisterNativesUMeshDescriptionProvider(void)

{
  return;
}

