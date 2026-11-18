// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 1

// StaticStruct @ 14cf24bf0

UScriptStruct * __cdecl FRuntimeProxyValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRuntimeProxyValue.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FRuntimeProxyValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeProxyValue,(UObject *)pUVar1,
                         L"RuntimeProxyValue");
  }
  return Z_Registration_Info_UScriptStruct_FRuntimeProxyValue.OuterSingleton;
}

