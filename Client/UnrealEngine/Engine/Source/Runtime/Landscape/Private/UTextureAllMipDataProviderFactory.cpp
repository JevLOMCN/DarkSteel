// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// StaticClass @ 145fc84f0

UClass * __cdecl UTextureAllMipDataProviderFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTextureAllMipDataProviderFactory.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureAllMipDataProviderFactory",
               &Z_Registration_Info_UClass_UTextureAllMipDataProviderFactory.InnerSingleton,
               StaticRegisterNativesUTextureAllMipDataProviderFactory,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureAllMipDataProviderFactory>,
               InternalVTableHelperCtorCaller<UTextureAllMipDataProviderFactory>,aFStackX_8,
               UTextureMipDataProviderFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureAllMipDataProviderFactory.InnerSingleton;
}

