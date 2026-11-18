// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 1

// StaticStruct @ 14a68bfd0

UScriptStruct * __cdecl FAnimationBudgetAllocatorParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimationBudgetAllocatorParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationBudgetAllocator();
    Z_Registration_Info_UScriptStruct_FAnimationBudgetAllocatorParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters,
                         (UObject *)pUVar1,L"AnimationBudgetAllocatorParameters");
  }
  return Z_Registration_Info_UScriptStruct_FAnimationBudgetAllocatorParameters.OuterSingleton;
}

