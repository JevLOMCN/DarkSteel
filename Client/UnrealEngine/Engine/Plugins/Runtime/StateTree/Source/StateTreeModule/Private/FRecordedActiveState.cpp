// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d4d92a0

UScriptStruct * __cdecl FRecordedActiveState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRecordedActiveState.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FRecordedActiveState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRecordedActiveState,(UObject *)pUVar1,
                         L"RecordedActiveState");
  }
  return Z_Registration_Info_UScriptStruct_FRecordedActiveState.OuterSingleton;
}

