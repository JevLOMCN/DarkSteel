// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// ShouldAllowPlatformTiling @ 145fc84b0

bool __thiscall
UTextureMipDataProviderFactory::ShouldAllowPlatformTiling
          (UTextureMipDataProviderFactory *this,UTexture *param_1)

{
  return false;
}

// StaticClass @ 145fc8500

UClass * __cdecl UTextureMipDataProviderFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTextureMipDataProviderFactory.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureMipDataProviderFactory",
               &Z_Registration_Info_UClass_UTextureMipDataProviderFactory.InnerSingleton,
               StaticRegisterNativesUTextureMipDataProviderFactory,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureMipDataProviderFactory>,
               InternalVTableHelperCtorCaller<UTextureMipDataProviderFactory>,aFStackX_8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureMipDataProviderFactory.InnerSingleton;
}

