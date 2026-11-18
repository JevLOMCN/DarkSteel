// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 3

// StaticClass @ 1469454e0

UClass * __cdecl UDynamicBlueprintBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicBlueprintBinding.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DynamicBlueprintBinding",
               &Z_Registration_Info_UClass_UDynamicBlueprintBinding.InnerSingleton,
               StaticRegisterNativesUDynamicBlueprintBinding,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicBlueprintBinding>,
               InternalVTableHelperCtorCaller<UDynamicBlueprintBinding>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicBlueprintBinding.InnerSingleton;
}

// UnbindDynamicDelegates @ 146949600

void __thiscall
UDynamicBlueprintBinding::UnbindDynamicDelegates(UDynamicBlueprintBinding *this,UObject *param_1)

{
  return;
}

// UnbindDynamicDelegatesForProperty @ 146949610

void __thiscall
UDynamicBlueprintBinding::UnbindDynamicDelegatesForProperty
          (UDynamicBlueprintBinding *this,UObject *param_1,FObjectProperty *param_2)

{
  return;
}

