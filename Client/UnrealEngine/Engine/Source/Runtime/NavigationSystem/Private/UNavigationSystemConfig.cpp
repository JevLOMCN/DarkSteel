// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// StaticClass @ 146dba890

UClass * __cdecl UNavigationSystemConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationSystemConfig.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationSystemConfig",
               &Z_Registration_Info_UClass_UNavigationSystemConfig.InnerSingleton,
               StaticRegisterNativesUNavigationSystemConfig,0x58,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationSystemConfig>,
               InternalVTableHelperCtorCaller<UNavigationSystemConfig>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationSystemConfig.InnerSingleton;
}

