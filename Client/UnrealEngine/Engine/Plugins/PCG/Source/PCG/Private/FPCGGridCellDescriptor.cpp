// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149c95ff0

UScriptStruct * __cdecl FPCGGridCellDescriptor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGGridCellDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGGridCellDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGGridCellDescriptor,(UObject *)pUVar1,
                         L"PCGGridCellDescriptor");
  }
  return Z_Registration_Info_UScriptStruct_FPCGGridCellDescriptor.OuterSingleton;
}

// operator== @ 149ca6d80

bool __thiscall
FPCGGridCellDescriptor::operator==(FPCGGridCellDescriptor *this,FPCGGridCellDescriptor *param_1)

{
  if (((((this->Descriptor).GridSize == (param_1->Descriptor).GridSize) &&
       ((this->Descriptor).bIs2DGrid == (param_1->Descriptor).bIs2DGrid)) &&
      ((this->Descriptor).bIsRuntime == (param_1->Descriptor).bIsRuntime)) &&
     ((((this->Descriptor).RuntimeHash == (param_1->Descriptor).RuntimeHash &&
       ((this->GridCoords).field0_0x0._s_0.X == (param_1->GridCoords).field0_0x0._s_0.X)) &&
      (((this->GridCoords).field0_0x0._s_0.Y == (param_1->GridCoords).field0_0x0._s_0.Y &&
       ((this->GridCoords).field0_0x0._s_0.Z == (param_1->GridCoords).field0_0x0._s_0.Z)))))) {
    return true;
  }
  return false;
}

