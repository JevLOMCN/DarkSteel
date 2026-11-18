// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 1

// StaticStruct @ 14e971010

UScriptStruct * __cdecl FChaosDestructionEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosDestructionEvent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosNiagara();
    Z_Registration_Info_UScriptStruct_FChaosDestructionEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosDestructionEvent,(UObject *)pUVar1,
                         L"ChaosDestructionEvent");
  }
  return Z_Registration_Info_UScriptStruct_FChaosDestructionEvent.OuterSingleton;
}

