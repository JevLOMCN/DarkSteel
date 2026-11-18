// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// IsLevelBoundsRelevant @ 14568d0e0

bool __thiscall AInfo::IsLevelBoundsRelevant(AInfo *this)

{
  return false;
}

// StaticClass @ 1456a1d40

UClass * __cdecl AInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AInfo.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Info",&Z_Registration_Info_UClass_AInfo.InnerSingleton,
               StaticRegisterNativesAInfo,0x2c0,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<AInfo>,
               InternalVTableHelperCtorCaller<AInfo>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInfo.InnerSingleton;
}

