// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// StaticClass @ 1462e6150

UClass * __cdecl UEdGraphNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UEdGraphNode.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EdGraphNode",
               &Z_Registration_Info_UClass_UEdGraphNode.InnerSingleton,
               StaticRegisterNativesUEdGraphNode,0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEdGraphNode>,InternalVTableHelperCtorCaller<UEdGraphNode>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEdGraphNode.InnerSingleton;
}

