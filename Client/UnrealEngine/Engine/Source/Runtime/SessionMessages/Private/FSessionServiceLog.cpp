// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionMessages
// Functions: 1

// StaticStruct @ 148ce7d60

UScriptStruct * __cdecl FSessionServiceLog::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSessionServiceLog.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SessionMessages();
    Z_Registration_Info_UScriptStruct_FSessionServiceLog.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSessionServiceLog,(UObject *)pUVar1,
                         L"SessionServiceLog");
  }
  return Z_Registration_Info_UScriptStruct_FSessionServiceLog.OuterSingleton;
}

