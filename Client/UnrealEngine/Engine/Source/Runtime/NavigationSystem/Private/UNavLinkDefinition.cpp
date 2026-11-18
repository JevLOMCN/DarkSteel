// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// StaticClass @ 146dba870

UClass * __cdecl UNavLinkDefinition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkDefinition.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavLinkDefinition",
               &Z_Registration_Info_UClass_UNavLinkDefinition.InnerSingleton,
               StaticRegisterNativesUNavLinkDefinition,0x50,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavLinkDefinition>,
               InternalVTableHelperCtorCaller<UNavLinkDefinition>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkDefinition.InnerSingleton;
}

