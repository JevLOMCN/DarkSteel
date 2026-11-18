// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// StaticClass @ 145f33740

UClass * __cdecl UTexture2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTexture2D.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture2D",&Z_Registration_Info_UClass_UTexture2D.InnerSingleton,
               StaticRegisterNativesUTexture2D,0x170,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTexture2D>,InternalVTableHelperCtorCaller<UTexture2D>,aFStackX_8
               ,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture2D.InnerSingleton;
}

