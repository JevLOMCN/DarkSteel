// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149edd960

UScriptStruct * __cdecl FPCGPartitionActorRecord::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPartitionActorRecord.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPartitionActorRecord.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPartitionActorRecord,(UObject *)pUVar1,
                         L"PCGPartitionActorRecord");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPartitionActorRecord.OuterSingleton;
}

// operator== @ 149f35df0

bool __thiscall
FPCGPartitionActorRecord::operator==
          (FPCGPartitionActorRecord *this,FPCGPartitionActorRecord *param_1)

{
  if (((((((param_1->GridGuid).D == (this->GridGuid).D &&
          (param_1->GridGuid).C == (this->GridGuid).C) &&
         (param_1->GridGuid).B == (this->GridGuid).B) && (param_1->GridGuid).A == (this->GridGuid).A
        ) && (this->GridSize == param_1->GridSize)) &&
      ((this->GridCoords).field0_0x0._s_0.X == (param_1->GridCoords).field0_0x0._s_0.X)) &&
     (((this->GridCoords).field0_0x0._s_0.Y == (param_1->GridCoords).field0_0x0._s_0.Y &&
      ((this->GridCoords).field0_0x0._s_0.Z == (param_1->GridCoords).field0_0x0._s_0.Z)))) {
    return true;
  }
  return false;
}

