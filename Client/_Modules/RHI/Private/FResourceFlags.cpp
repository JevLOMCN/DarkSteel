// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// GetString @ 145cacd10

FString * __thiscall
RHIInternal::FResourceFlags::GetString(FResourceFlags *this,FString *__return_storage_ptr__)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar4 = this->bResident != false;
  if (bVar4) {
    ::FString::AppendChars(__return_storage_ptr__,"Resident",8);
  }
  if (this->bMarkedForDelete != false) {
    pcVar3 = "MarkedForDelete";
    if (bVar4) {
      pcVar3 = " | MarkedForDelete";
    }
    sVar1 = strlen(pcVar3);
    ::FString::AppendChars(__return_storage_ptr__,pcVar3,(int)sVar1);
    bVar4 = true;
  }
  if (this->bTransient != false) {
    pcVar3 = "Transient";
    if (bVar4) {
      pcVar3 = " | Transient";
    }
    sVar1 = strlen(pcVar3);
    ::FString::AppendChars(__return_storage_ptr__,pcVar3,(int)sVar1);
    bVar4 = true;
  }
  if (this->bStreaming != false) {
    pcVar3 = "Streaming";
    if (bVar4) {
      pcVar3 = " | Streaming";
    }
    sVar1 = strlen(pcVar3);
    ::FString::AppendChars(__return_storage_ptr__,pcVar3,(int)sVar1);
    bVar4 = true;
  }
  if (this->bRT == false) {
    if (this->bDS == false) goto LAB_145cace28;
    pcVar2 = " | DS";
    pcVar3 = "DS";
  }
  else {
    pcVar2 = " | RT";
    pcVar3 = "RT";
  }
  if (bVar4) {
    pcVar3 = pcVar2;
  }
  sVar1 = strlen(pcVar3);
  ::FString::AppendChars(__return_storage_ptr__,pcVar3,(int)sVar1);
  bVar4 = true;
LAB_145cace28:
  if (this->bUAV != false) {
    pcVar3 = "UAV";
    if (bVar4) {
      pcVar3 = " | UAV";
    }
    sVar1 = strlen(pcVar3);
    ::FString::AppendChars(__return_storage_ptr__,pcVar3,(int)sVar1);
    bVar4 = true;
  }
  if (this->bRTAS != false) {
    pcVar3 = "RTAS";
    if (bVar4) {
      pcVar3 = " | RTAS";
    }
    sVar1 = strlen(pcVar3);
    ::FString::AppendChars(__return_storage_ptr__,pcVar3,(int)sVar1);
  }
  return __return_storage_ptr__;
}

