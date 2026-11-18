// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// IsLowArea @ 146da4960

bool __thiscall UNavAreaBase::IsLowArea(UNavAreaBase *this)

{
  return false;
}

// IsMetaArea @ 146da4980

bool __thiscall UNavAreaBase::IsMetaArea(UNavAreaBase *this)

{
  return this->bIsMetaArea;
}

// StaticClass @ 146dba850

UClass * __cdecl UNavAreaBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNavAreaBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavAreaBase",
               &Z_Registration_Info_UClass_UNavAreaBase.InnerSingleton,
               StaticRegisterNativesUNavAreaBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavAreaBase>,
               InternalVTableHelperCtorCaller<UNavAreaBase>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavAreaBase.InnerSingleton;
}

