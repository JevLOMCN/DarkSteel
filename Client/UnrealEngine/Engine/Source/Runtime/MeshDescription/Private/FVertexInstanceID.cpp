// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 2

// StaticStruct @ 143632860

UScriptStruct * __cdecl FVertexInstanceID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVertexInstanceID.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshDescription();
    Z_Registration_Info_UScriptStruct_FVertexInstanceID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVertexInstanceID,(UObject *)pUVar1,
                         L"VertexInstanceID");
  }
  return Z_Registration_Info_UScriptStruct_FVertexInstanceID.OuterSingleton;
}

// FVertexInstanceID @ 143657760

FVertexInstanceID * __thiscall FVertexInstanceID::FVertexInstanceID(FVertexInstanceID *this)

{
  *this = (FVertexInstanceID)0xffffffff;
  return this;
}

