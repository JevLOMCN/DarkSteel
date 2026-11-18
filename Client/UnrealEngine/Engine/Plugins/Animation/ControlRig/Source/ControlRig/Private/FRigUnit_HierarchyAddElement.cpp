// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a470450

UScriptStruct * __cdecl FRigUnit_HierarchyAddElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddElement.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddElement,(UObject *)pUVar1,
                         L"RigUnit_HierarchyAddElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddElement.OuterSingleton;
}

// GetElementTypeToSpawn @ 14a470520

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

ERigElementType __thiscall
FRigUnit_HierarchyAddElement::GetElementTypeToSpawn(FRigUnit_HierarchyAddElement *this)

{
  return None;
}

