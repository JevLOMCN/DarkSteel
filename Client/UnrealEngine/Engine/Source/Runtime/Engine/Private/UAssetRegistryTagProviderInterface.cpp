// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14727b1b0

UClass * __cdecl UAssetRegistryTagProviderInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetRegistryTagProviderInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetRegistryTagProviderInterface",
               &Z_Registration_Info_UClass_UAssetRegistryTagProviderInterface.InnerSingleton,
               StaticRegisterNativesUAssetRegistryTagProviderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetRegistryTagProviderInterface>,
               InternalVTableHelperCtorCaller<UAssetRegistryTagProviderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetRegistryTagProviderInterface.InnerSingleton;
}

// UAssetRegistryTagProviderInterface @ 14727f6f0

UAssetRegistryTagProviderInterface * __thiscall
UAssetRegistryTagProviderInterface::UAssetRegistryTagProviderInterface
          (UAssetRegistryTagProviderInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAssetRegistryTagProviderInterface__6B_;
  return this;
}

// UAssetRegistryTagProviderInterface @ 14727f720

UAssetRegistryTagProviderInterface * __thiscall
UAssetRegistryTagProviderInterface::UAssetRegistryTagProviderInterface
          (UAssetRegistryTagProviderInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAssetRegistryTagProviderInterface__6B_;
  return this;
}

// ~UAssetRegistryTagProviderInterface @ 14727fc50

void __thiscall
UAssetRegistryTagProviderInterface::~UAssetRegistryTagProviderInterface
          (UAssetRegistryTagProviderInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147280960

UClass * __cdecl UAssetRegistryTagProviderInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetRegistryTagProviderInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetRegistryTagProviderInterface",
               &Z_Registration_Info_UClass_UAssetRegistryTagProviderInterface.InnerSingleton,
               StaticRegisterNativesUAssetRegistryTagProviderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetRegistryTagProviderInterface>,
               InternalVTableHelperCtorCaller<UAssetRegistryTagProviderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetRegistryTagProviderInterface.InnerSingleton;
}

// StaticRegisterNativesUAssetRegistryTagProviderInterface @ 1472814a0

void __cdecl
UAssetRegistryTagProviderInterface::StaticRegisterNativesUAssetRegistryTagProviderInterface(void)

{
  return;
}

