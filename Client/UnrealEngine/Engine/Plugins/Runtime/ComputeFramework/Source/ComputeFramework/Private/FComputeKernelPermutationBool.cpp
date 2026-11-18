// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// StaticStruct @ 1494bbac0

UScriptStruct * __cdecl FComputeKernelPermutationBool::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FComputeKernelPermutationBool.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UScriptStruct_FComputeKernelPermutationBool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelPermutationBool,(UObject *)pUVar1,
                         L"ComputeKernelPermutationBool");
  }
  return Z_Registration_Info_UScriptStruct_FComputeKernelPermutationBool.OuterSingleton;
}

