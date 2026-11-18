// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147285880

UClass * __cdecl UInterface_PreviewMeshProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_PreviewMeshProvider",
               &Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.InnerSingleton,
               StaticRegisterNativesUInterface_PreviewMeshProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_PreviewMeshProvider>,
               InternalVTableHelperCtorCaller<UInterface_PreviewMeshProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.InnerSingleton;
}

// UInterface_PreviewMeshProvider @ 14728b910

UInterface_PreviewMeshProvider * __thiscall
UInterface_PreviewMeshProvider::UInterface_PreviewMeshProvider
          (UInterface_PreviewMeshProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_PreviewMeshProvider__6B_;
  return this;
}

// ~UInterface_PreviewMeshProvider @ 14728d270

void __thiscall
UInterface_PreviewMeshProvider::~UInterface_PreviewMeshProvider
          (UInterface_PreviewMeshProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14728f680

UClass * __cdecl UInterface_PreviewMeshProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_PreviewMeshProvider",
               &Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.InnerSingleton,
               StaticRegisterNativesUInterface_PreviewMeshProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_PreviewMeshProvider>,
               InternalVTableHelperCtorCaller<UInterface_PreviewMeshProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.InnerSingleton;
}

// StaticRegisterNativesUInterface_PreviewMeshProvider @ 147291260

void __cdecl
UInterface_PreviewMeshProvider::StaticRegisterNativesUInterface_PreviewMeshProvider(void)

{
  return;
}

// UInterface_PreviewMeshProvider @ 147d79980

UInterface_PreviewMeshProvider * __thiscall
UInterface_PreviewMeshProvider::UInterface_PreviewMeshProvider
          (UInterface_PreviewMeshProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_PreviewMeshProvider__6B_;
  return this;
}

