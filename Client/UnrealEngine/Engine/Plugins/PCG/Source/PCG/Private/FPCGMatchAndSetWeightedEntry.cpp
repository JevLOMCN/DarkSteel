// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149ce42e0

UScriptStruct * __cdecl FPCGMatchAndSetWeightedEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGMatchAndSetWeightedEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGMatchAndSetWeightedEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedEntry,(UObject *)pUVar1,
                         L"PCGMatchAndSetWeightedEntry");
  }
  return Z_Registration_Info_UScriptStruct_FPCGMatchAndSetWeightedEntry.OuterSingleton;
}

// FPCGMatchAndSetWeightedEntry @ 149d33ae0

FPCGMatchAndSetWeightedEntry * __thiscall
FPCGMatchAndSetWeightedEntry::FPCGMatchAndSetWeightedEntry(FPCGMatchAndSetWeightedEntry *this)

{
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(&this->Value);
  this->Weight = 1;
  (this->Value).bAllowsTypeChange = false;
  return this;
}

