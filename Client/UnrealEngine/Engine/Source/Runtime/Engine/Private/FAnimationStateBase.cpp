// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147511200

UScriptStruct * __cdecl FAnimationStateBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimationStateBase.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimationStateBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimationStateBase,(UObject *)pUVar1,
                         L"AnimationStateBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimationStateBase.OuterSingleton;
}

