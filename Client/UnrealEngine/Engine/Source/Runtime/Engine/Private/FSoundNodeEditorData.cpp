// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 148679100

UScriptStruct * __cdecl FSoundNodeEditorData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundNodeEditorData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoundNodeEditorData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundNodeEditorData,(UObject *)pUVar1,
                         L"SoundNodeEditorData");
  }
  return Z_Registration_Info_UScriptStruct_FSoundNodeEditorData.OuterSingleton;
}

