// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 1497220a0

UScriptStruct * __cdecl FPCGInteractiveToolWorkingBaseData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingBaseData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingBaseData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingBaseData,
                         (UObject *)pUVar1,L"PCGInteractiveToolWorkingBaseData");
  }
  return Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingBaseData.OuterSingleton;
}

// ~FPCGInteractiveToolWorkingBaseData @ 149725d30

void __thiscall
FPCGInteractiveToolWorkingBaseData::~FPCGInteractiveToolWorkingBaseData
          (FPCGInteractiveToolWorkingBaseData *this)

{
  return;
}

// GetWorkingDataIdentifier @ 1498ca520

FName __thiscall
FPCGInteractiveToolWorkingBaseData::GetWorkingDataIdentifier
          (FPCGInteractiveToolWorkingBaseData *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->WorkingDataIdentifier;
  return in_RDX;
}

