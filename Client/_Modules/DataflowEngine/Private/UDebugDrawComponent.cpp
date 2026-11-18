// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 2

// GetDebugDrawDelegateHelper @ 1462dcba0

FDebugDrawDelegateHelper * __thiscall
UDebugDrawComponent::GetDebugDrawDelegateHelper(UDebugDrawComponent *this)

{
  return &this->DebugDrawDelegateHelper;
}

// StaticClass @ 1462e6130

UClass * __cdecl UDebugDrawComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugDrawComponent",
               &Z_Registration_Info_UClass_UDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUDebugDrawComponent,0x5b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UDebugDrawComponent>,aFStackX_8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDebugDrawComponent.InnerSingleton;
}

