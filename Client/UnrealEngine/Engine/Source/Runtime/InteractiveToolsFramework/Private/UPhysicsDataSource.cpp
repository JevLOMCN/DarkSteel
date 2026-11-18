// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962aaa0

UClass * __cdecl UPhysicsDataSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsDataSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"PhysicsDataSource",
               &Z_Registration_Info_UClass_UPhysicsDataSource.InnerSingleton,
               StaticRegisterNativesUPhysicsDataSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsDataSource>,
               InternalVTableHelperCtorCaller<UPhysicsDataSource>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsDataSource.InnerSingleton;
}

// UPhysicsDataSource @ 14963cc60

UPhysicsDataSource * __thiscall
UPhysicsDataSource::UPhysicsDataSource(UPhysicsDataSource *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPhysicsDataSource__6B_;
  return this;
}

// UPhysicsDataSource @ 14963cc90

UPhysicsDataSource * __thiscall
UPhysicsDataSource::UPhysicsDataSource(UPhysicsDataSource *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPhysicsDataSource__6B_;
  return this;
}

// ~UPhysicsDataSource @ 14963f390

void __thiscall UPhysicsDataSource::~UPhysicsDataSource(UPhysicsDataSource *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149657d80

UClass * __cdecl UPhysicsDataSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsDataSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"PhysicsDataSource",
               &Z_Registration_Info_UClass_UPhysicsDataSource.InnerSingleton,
               StaticRegisterNativesUPhysicsDataSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsDataSource>,
               InternalVTableHelperCtorCaller<UPhysicsDataSource>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsDataSource.InnerSingleton;
}

// StaticRegisterNativesUPhysicsDataSource @ 149664d10

void __cdecl UPhysicsDataSource::StaticRegisterNativesUPhysicsDataSource(void)

{
  return;
}

