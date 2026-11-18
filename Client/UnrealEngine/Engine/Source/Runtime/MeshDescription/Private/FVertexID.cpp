// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 2

// StaticStruct @ 1436327d0

UScriptStruct * __cdecl FVertexID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVertexID.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshDescription();
    Z_Registration_Info_UScriptStruct_FVertexID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVertexID,(UObject *)pUVar1,L"VertexID");
  }
  return Z_Registration_Info_UScriptStruct_FVertexID.OuterSingleton;
}

// FVertexID @ 143657750

FVertexID * __thiscall FVertexID::FVertexID(FVertexID *this)

{
  *this = (FVertexID)0xffffffff;
  return this;
}

