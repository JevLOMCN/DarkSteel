// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 1

// StaticStruct @ 14cf249f0

UScriptStruct * __cdecl FProxyStructOutput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProxyStructOutput.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FProxyStructOutput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProxyStructOutput,(UObject *)pUVar1,
                         L"ProxyStructOutput");
  }
  return Z_Registration_Info_UScriptStruct_FProxyStructOutput.OuterSingleton;
}

