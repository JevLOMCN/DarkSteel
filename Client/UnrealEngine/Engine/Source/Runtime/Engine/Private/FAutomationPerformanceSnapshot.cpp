// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToCommaDelimetedString @ 148b7b800

FString * __thiscall
FAutomationPerformanceSnapshot::ToCommaDelimetedString
          (FAutomationPerformanceSnapshot *this,FString *__return_storage_ptr__)

{
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::ConcatFC(&local_18,&this->Changelist,L",");
  ::FString::ConcatFF(&local_28,&local_18,&this->BuildConfiguration);
  ::FString::ConcatFC(&local_38,&local_28,L",");
  ::FString::ConcatFF(&local_48,&local_38,&this->MapName);
  ::FString::ConcatFC(&local_58,&local_48,L",");
  ::FString::ConcatFF(&local_68,&local_58,&this->SequenceName);
  ::FString::ConcatFC(&local_78,&local_68,L",");
  ::FString::ConcatFF(&local_88,&local_78,&this->AverageFPS);
  ::FString::ConcatFC(&local_98,&local_88,L",");
  ::FString::ConcatFF(&local_a8,&local_98,&this->AverageFrameTime);
  ::FString::ConcatFC(&local_b8,&local_a8,L",");
  ::FString::ConcatFF(&local_c8,&local_b8,&this->AverageGameThreadTime);
  ::FString::ConcatFC(&local_d8,&local_c8,L",");
  ::FString::ConcatFF(&local_e8,&local_d8,&this->AverageRenderThreadTime);
  ::FString::ConcatFC(&local_f8,&local_e8,L",");
  ::FString::ConcatFF(&local_108,&local_f8,&this->AverageGPUTime);
  ::FString::ConcatFC(&local_118,&local_108,L",");
  ::FString::ConcatFF(&local_128,&local_118,&this->PercentOfFramesAtLeast30FPS);
  ::FString::ConcatFC(&local_138,&local_128,L",");
  ::FString::ConcatFF(__return_storage_ptr__,&local_138,&this->PercentOfFramesAtLeast60FPS);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

