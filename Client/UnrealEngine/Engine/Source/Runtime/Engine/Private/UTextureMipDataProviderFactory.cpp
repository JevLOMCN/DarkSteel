// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// UTextureMipDataProviderFactory @ 14880a1e0

UTextureMipDataProviderFactory * __thiscall
UTextureMipDataProviderFactory::UTextureMipDataProviderFactory
          (UTextureMipDataProviderFactory *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  *(undefined ***)this = &___7UTextureMipDataProviderFactory__6B_;
  return this;
}

// UTextureMipDataProviderFactory @ 14880a210

UTextureMipDataProviderFactory * __thiscall
UTextureMipDataProviderFactory::UTextureMipDataProviderFactory
          (UTextureMipDataProviderFactory *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  *(undefined ***)this = &___7UTextureMipDataProviderFactory__6B_;
  return this;
}

// ~UTextureMipDataProviderFactory @ 14880d4b0

void __thiscall
UTextureMipDataProviderFactory::~UTextureMipDataProviderFactory
          (UTextureMipDataProviderFactory *this)

{
  *(undefined ***)this = &___7UTextureMipDataProviderFactory__6B_;
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// AllocateMipDataProvider @ 14881aad0

FTextureMipDataProvider * __thiscall
UTextureMipDataProviderFactory::AllocateMipDataProvider
          (UTextureMipDataProviderFactory *this,UTexture *param_1)

{
  return (FTextureMipDataProvider *)0x0;
}

// GetPrivateStaticClass @ 148840cc0

UClass * __cdecl UTextureMipDataProviderFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureMipDataProviderFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureMipDataProviderFactory",
               &Z_Registration_Info_UClass_UTextureMipDataProviderFactory.InnerSingleton,
               StaticRegisterNativesUTextureMipDataProviderFactory,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureMipDataProviderFactory>,
               InternalVTableHelperCtorCaller<UTextureMipDataProviderFactory>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureMipDataProviderFactory.InnerSingleton;
}

// StaticRegisterNativesUTextureMipDataProviderFactory @ 14885acf0

void __cdecl
UTextureMipDataProviderFactory::StaticRegisterNativesUTextureMipDataProviderFactory(void)

{
  return;
}

// WillProvideMipDataWithoutDisk @ 148865100

bool __thiscall
UTextureMipDataProviderFactory::WillProvideMipDataWithoutDisk(UTextureMipDataProviderFactory *this)

{
  return false;
}

