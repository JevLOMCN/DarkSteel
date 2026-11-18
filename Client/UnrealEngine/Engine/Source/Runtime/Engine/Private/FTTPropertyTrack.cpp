// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1488a23a0

UScriptStruct * __cdecl FTTPropertyTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTTPropertyTrack.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTTPropertyTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTTPropertyTrack,(UObject *)pUVar1,
                         L"TTPropertyTrack");
  }
  return Z_Registration_Info_UScriptStruct_FTTPropertyTrack.OuterSingleton;
}

// SetTrackName @ 1488a23e0

void __thiscall
FTTPropertyTrack::SetTrackName(FTTPropertyTrack *this,FName param_1,UTimelineTemplate *param_2)

{
  ForAnyElementType FVar1;
  FName local_res8;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this->_padding_ = (longlong)param_1;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FGuid::AppendString(&param_2->TimelineGuid,&local_58,Digits);
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  local_res10 = param_2->VariableName;
  ::FName::ToString(&local_res10,&local_38);
  ::FString::PrintfImpl(&local_48,L"%s_%s_%s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::`anonymous_namespace'::SanitizePropertyName(&local_48);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar1.Data = local_48.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar1.Data);
  this->PropertyName = local_res8;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

