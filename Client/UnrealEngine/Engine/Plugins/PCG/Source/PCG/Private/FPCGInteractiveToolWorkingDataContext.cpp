// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149722890

UScriptStruct * __cdecl FPCGInteractiveToolWorkingDataContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingDataContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingDataContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingDataContext,
                         (UObject *)pUVar1,L"PCGInteractiveToolWorkingDataContext");
  }
  return Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingDataContext.OuterSingleton;
}

// ~FPCGInteractiveToolWorkingDataContext @ 149725d40

void __thiscall
FPCGInteractiveToolWorkingDataContext::~FPCGInteractiveToolWorkingDataContext
          (FPCGInteractiveToolWorkingDataContext *this)

{
  return;
}

