// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FStatCategory @ 145c465c0

FStatCategory * __thiscall
UE::RHI::GPUProfiler::FGPUStat::FStatCategory::FStatCategory(FStatCategory *this,FQueue param_1)

{
  FScriptContainerElement *pFVar1;
  FStatCategory *pFVar2;
  int iVar3;
  FString local_58;
  FString local_48;
  FAnsiString local_38;
  
  ::FString::PrintfImpl(&local_48,L"GPU%d_%s%d");
  ::FString::PrintfImpl(&local_58,L"STATGROUP_%s");
  (this->GroupName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupName).Data.ArrayNum = 0;
  (this->GroupName).Data.ArrayMax = 0;
  iVar3 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar2 = (FStatCategory *)
           FAnsiString::ConstructFromPtrSize
                     (&local_38,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar3);
  if (this != pFVar2) {
    pFVar1 = (this->GroupName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->GroupName).Data.AllocatorInstance.Data = (pFVar2->GroupName).Data.AllocatorInstance.Data;
    (pFVar2->GroupName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GroupName).Data.ArrayNum = (pFVar2->GroupName).Data.ArrayNum;
    (this->GroupName).Data.ArrayMax = (pFVar2->GroupName).Data.ArrayMax;
    (pFVar2->GroupName).Data.ArrayNum = 0;
    (pFVar2->GroupName).Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_48,L"GPU %d %s Queue %d");
  ::FString::PrintfImpl(&this->GroupDesc,L"%s Timing");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return this;
}

