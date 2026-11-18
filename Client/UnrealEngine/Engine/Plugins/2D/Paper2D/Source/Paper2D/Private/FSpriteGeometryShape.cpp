// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 1

// StaticStruct @ 14acdd3d0

UScriptStruct * __cdecl FSpriteGeometryShape::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSpriteGeometryShape.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UScriptStruct_FSpriteGeometryShape.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSpriteGeometryShape,(UObject *)pUVar1,
                         L"SpriteGeometryShape");
  }
  return Z_Registration_Info_UScriptStruct_FSpriteGeometryShape.OuterSingleton;
}

