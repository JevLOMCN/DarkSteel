// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e7420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FGLTFJsonLightIES * __thiscall
FGLTFLightIESConverter::Convert(FGLTFLightIESConverter *this,ULightComponent *param_1)

{
  FGLTFLogBuilder *this_00;
  FName local_res8 [4];
  FString local_28;
  FString local_18;
  
  local_res8[0] = (FName)param_1->_padding_;
  this_00 = *(FGLTFLogBuilder **)&this->field_0x58;
  ::FName::ToString(local_res8,&local_28);
  ::FString::PrintfImpl(&local_18,L"[%s] IES Light Export is not supported at Runtime.");
  FGLTFLogBuilder::LogWarning(this_00,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FGLTFJsonLightIES *)0x0;
}

