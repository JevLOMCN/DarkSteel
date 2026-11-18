// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149a150b0

UScriptStruct * __cdecl FPCGAttributeFilterThresholdSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGAttributeFilterThresholdSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGAttributeFilterThresholdSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributeFilterThresholdSettings,
                         (UObject *)pUVar1,L"PCGAttributeFilterThresholdSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPCGAttributeFilterThresholdSettings.OuterSingleton;
}

// ~FPCGAttributeFilterThresholdSettings @ 149ad2a80

void __thiscall
FPCGAttributeFilterThresholdSettings::~FPCGAttributeFilterThresholdSettings
          (FPCGAttributeFilterThresholdSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->AttributeTypes).SoftObjectPathValue.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->AttributeTypes).SoftClassPathValue.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->AttributeTypes).StringValue.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ThresholdAttribute).field_0x28,
             *(int *)&(this->ThresholdAttribute).field_0x30);
  pvVar2 = *(void **)&(this->ThresholdAttribute).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

