// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 1

// StaticStruct @ 146d397f0

UScriptStruct * __cdecl FGameplayDebuggerDebugActor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerDebugActor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayDebugger();
    Z_Registration_Info_UScriptStruct_FGameplayDebuggerDebugActor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor,(UObject *)pUVar1,
                         L"GameplayDebuggerDebugActor");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayDebuggerDebugActor.OuterSingleton;
}

