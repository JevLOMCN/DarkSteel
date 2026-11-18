// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 2

// FLocalFileSerializationInfo @ 146c90e90

FLocalFileSerializationInfo * __thiscall
FLocalFileNetworkReplayStreamer::FLocalFileSerializationInfo::FLocalFileSerializationInfo
          (FLocalFileSerializationInfo *this)

{
  FName *pFVar1;
  FName local_res8;
  FGuid local_18;
  
  this->FileVersion = 7;
  (this->FileFriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileFriendlyName).Data.ArrayNum = 0;
  (this->FileFriendlyName).Data.ArrayMax = 0;
  (this->FileCustomVersions).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileCustomVersions).Versions.ArrayNum = 0;
  (this->FileCustomVersions).Versions.ArrayMax = 0;
  pFVar1 = ::FName::FName(&local_res8,L"LocalFileReplay");
  local_18 = FLocalFileReplayCustomVersion::Guid;
  FCustomVersionContainer::SetVersion(&this->FileCustomVersions,&local_18,7,*pFVar1);
  return this;
}

// GetLocalFileReplayVersion @ 146cac6e0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FLocalFileNetworkReplayStreamer::FLocalFileSerializationInfo::GetLocalFileReplayVersion
          (FLocalFileSerializationInfo *this)

{
  FCustomVersion *pFVar1;
  FGuid local_18;
  
  local_18 = FLocalFileReplayCustomVersion::Guid;
  pFVar1 = FCustomVersionContainer::GetVersion(&this->FileCustomVersions,&local_18);
  if (pFVar1 != (FCustomVersion *)0x0) {
    return pFVar1->Version;
  }
  return this->FileVersion;
}

