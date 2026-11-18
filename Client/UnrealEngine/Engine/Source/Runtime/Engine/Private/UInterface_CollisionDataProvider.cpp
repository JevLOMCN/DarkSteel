// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147286700

UClass * __cdecl UInterface_CollisionDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_CollisionDataProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_CollisionDataProvider",
               &Z_Registration_Info_UClass_UInterface_CollisionDataProvider.InnerSingleton,
               StaticRegisterNativesUInterface_CollisionDataProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_CollisionDataProvider>,
               InternalVTableHelperCtorCaller<UInterface_CollisionDataProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_CollisionDataProvider.InnerSingleton;
}

// UInterface_CollisionDataProvider @ 14728b8b0

UInterface_CollisionDataProvider * __thiscall
UInterface_CollisionDataProvider::UInterface_CollisionDataProvider
          (UInterface_CollisionDataProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_CollisionDataProvider__6B_;
  return this;
}

// ~UInterface_CollisionDataProvider @ 14728d250

void __thiscall
UInterface_CollisionDataProvider::~UInterface_CollisionDataProvider
          (UInterface_CollisionDataProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14728f500

UClass * __cdecl UInterface_CollisionDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_CollisionDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_CollisionDataProvider",
               &Z_Registration_Info_UClass_UInterface_CollisionDataProvider.InnerSingleton,
               StaticRegisterNativesUInterface_CollisionDataProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_CollisionDataProvider>,
               InternalVTableHelperCtorCaller<UInterface_CollisionDataProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_CollisionDataProvider.InnerSingleton;
}

// StaticRegisterNativesUInterface_CollisionDataProvider @ 147291240

void __cdecl
UInterface_CollisionDataProvider::StaticRegisterNativesUInterface_CollisionDataProvider(void)

{
  return;
}

// UInterface_CollisionDataProvider @ 147d79920

UInterface_CollisionDataProvider * __thiscall
UInterface_CollisionDataProvider::UInterface_CollisionDataProvider
          (UInterface_CollisionDataProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_CollisionDataProvider__6B_;
  return this;
}

