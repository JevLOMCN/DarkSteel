// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a26c50

UClass * __cdecl UDataLayerInstanceProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstanceProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstanceProvider",
               &Z_Registration_Info_UClass_UDataLayerInstanceProvider.InnerSingleton,
               StaticRegisterNativesUDataLayerInstanceProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataLayerInstanceProvider>,
               InternalVTableHelperCtorCaller<UDataLayerInstanceProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstanceProvider.InnerSingleton;
}

// UDataLayerInstanceProvider @ 148a428d0

UDataLayerInstanceProvider * __thiscall
UDataLayerInstanceProvider::UDataLayerInstanceProvider
          (UDataLayerInstanceProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataLayerInstanceProvider__6B_;
  return this;
}

// UDataLayerInstanceProvider @ 148a42900

UDataLayerInstanceProvider * __thiscall
UDataLayerInstanceProvider::UDataLayerInstanceProvider
          (UDataLayerInstanceProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataLayerInstanceProvider__6B_;
  return this;
}

// ~UDataLayerInstanceProvider @ 148a44720

void __thiscall
UDataLayerInstanceProvider::~UDataLayerInstanceProvider(UDataLayerInstanceProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148a5a320

UClass * __cdecl UDataLayerInstanceProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstanceProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstanceProvider",
               &Z_Registration_Info_UClass_UDataLayerInstanceProvider.InnerSingleton,
               StaticRegisterNativesUDataLayerInstanceProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataLayerInstanceProvider>,
               InternalVTableHelperCtorCaller<UDataLayerInstanceProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstanceProvider.InnerSingleton;
}

// StaticRegisterNativesUDataLayerInstanceProvider @ 148a6a400

void __cdecl UDataLayerInstanceProvider::StaticRegisterNativesUDataLayerInstanceProvider(void)

{
  return;
}

