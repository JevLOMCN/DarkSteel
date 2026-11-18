// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// DoTask @ 142a6a330

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncIOCPUWorkTask::DoTask
          (FAsyncIOCPUWorkTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FAsyncIOCPUWorkTask_DoTask");
  if (CpuChannel->Enabled < 0) {
    FPakAsyncReadFileHandle::DoProcessing(this->Owner,this->BlockPtr);
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId3850,"FAsyncIOCPUWorkTask_DoTask",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
             ,0xf0a);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3850);
  FPakAsyncReadFileHandle::DoProcessing(this->Owner,this->BlockPtr);
  FCpuProfilerTrace::OutputEndEvent();
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

