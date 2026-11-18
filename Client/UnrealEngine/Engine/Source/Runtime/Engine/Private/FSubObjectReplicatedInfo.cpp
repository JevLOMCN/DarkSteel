// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Describe @ 147a3e9a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
DataChannelInternal::FSubObjectReplicatedInfo::Describe
          (FSubObjectReplicatedInfo *this,FString *__return_storage_ptr__,AActor *param_1)

{
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((UObjectBaseUtility *)this->SubObjectOwner == (UObjectBaseUtility *)0x0) {
    ::FString::FString(&local_48,L"None");
  }
  else {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)this->SubObjectOwner,&local_48,(UObject *)0x0);
  }
  local_res8.ComparisonIndex.Value = *(uint *)&this->SubObject->field_0x18;
  local_res8.Number = *(uint *)&this->SubObject->field_0x1c;
  ::FName::ToString(&local_res8,&local_28);
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&local_38);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Subobject %s(%s)::%s [owner %s]");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

