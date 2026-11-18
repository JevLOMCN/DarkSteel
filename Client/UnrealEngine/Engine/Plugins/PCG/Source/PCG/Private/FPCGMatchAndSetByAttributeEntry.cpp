// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 149ce7180

UScriptStruct * __cdecl FPCGMatchAndSetByAttributeEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGMatchAndSetByAttributeEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGMatchAndSetByAttributeEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGMatchAndSetByAttributeEntry,(UObject *)pUVar1
                         ,L"PCGMatchAndSetByAttributeEntry");
  }
  return Z_Registration_Info_UScriptStruct_FPCGMatchAndSetByAttributeEntry.OuterSingleton;
}

// FPCGMatchAndSetByAttributeEntry @ 149d33aa0

FPCGMatchAndSetByAttributeEntry * __thiscall
FPCGMatchAndSetByAttributeEntry::FPCGMatchAndSetByAttributeEntry
          (FPCGMatchAndSetByAttributeEntry *this)

{
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(&this->ValueToMatch);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(&this->Value);
  (this->ValueToMatch).bAllowsTypeChange = false;
  (this->Value).bAllowsTypeChange = false;
  return this;
}

// ~FPCGMatchAndSetByAttributeEntry @ 149d34d70

void __thiscall
FPCGMatchAndSetByAttributeEntry::~FPCGMatchAndSetByAttributeEntry
          (FPCGMatchAndSetByAttributeEntry *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Value).SoftObjectPathValue.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->Value).SoftClassPathValue.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->Value).StringValue.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ValueToMatch).SoftObjectPathValue.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->ValueToMatch).SoftClassPathValue.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->ValueToMatch).StringValue.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

