// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// StaticClass @ 145eecf00

UClass * __cdecl AVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AVolume.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Volume",&Z_Registration_Info_UClass_AVolume.InnerSingleton,
               StaticRegisterNativesAVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<AVolume>,
               InternalVTableHelperCtorCaller<AVolume>,aFStackX_8,ABrush::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AVolume.InnerSingleton;
}

