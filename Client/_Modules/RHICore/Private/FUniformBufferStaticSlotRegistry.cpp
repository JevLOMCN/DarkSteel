// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 1

// GetDebugDescription @ 1446de010

FString * __thiscall
FUniformBufferStaticSlotRegistry::GetDebugDescription
          (FUniformBufferStaticSlotRegistry *this,FString *__return_storage_ptr__,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FName local_res8;
  FString local_18;
  
  if (((this->SlotNames).ArrayNum <= (int)(uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Slot < SlotNames.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x71,L"Requesting name for an invalid slot: %u."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  if (((this->SlotNames).ArrayNum <= (int)(uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  local_res8 = *(FName *)((this->SlotNames).AllocatorInstance.Data + (ulonglong)param_1 * 8);
  ::FName::ToString(&local_res8,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[Name: %s, Slot: %u]");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

