// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 1497227d0

UScriptStruct * __cdecl FPCGInteractiveToolWorkingDataGeneratedResources::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingDataGeneratedResources.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingDataGeneratedResources.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingDataGeneratedResources,
                         (UObject *)pUVar1,L"PCGInteractiveToolWorkingDataGeneratedResources");
  }
  return Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingDataGeneratedResources.
         OuterSingleton;
}

// ~FPCGInteractiveToolWorkingDataGeneratedResources @ 149725d50

void __thiscall
FPCGInteractiveToolWorkingDataGeneratedResources::~FPCGInteractiveToolWorkingDataGeneratedResources
          (FPCGInteractiveToolWorkingDataGeneratedResources *this)

{
  return;
}

