// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 1

// FCrashResult @ 1446cedc0

FCrashResult * __thiscall
UE::RHICore::Nvidia::Aftermath::FCrashResult::FCrashResult(FCrashResult *this,FCrashResult *param_1)

{
  bool bVar1;
  
  (this->OutputLog).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputLog).Data.AllocatorInstance.Data = (param_1->OutputLog).Data.AllocatorInstance.Data;
  (param_1->OutputLog).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputLog).Data.ArrayNum = (param_1->OutputLog).Data.ArrayNum;
  (this->OutputLog).Data.ArrayMax = (param_1->OutputLog).Data.ArrayMax;
  (param_1->OutputLog).Data.ArrayNum = 0;
  (param_1->OutputLog).Data.ArrayMax = 0;
  (this->DumpPath).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->DumpPath).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->DumpPath).field0_0x0 + 0xc) = 0xffffffff;
  if (*(int *)((longlong)&(param_1->DumpPath).field0_0x0 + 0xc) != -1) {
    (this->DumpPath).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (param_1->DumpPath).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    (param_1->DumpPath).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->DumpPath).field0_0x0 + 8) =
         *(undefined4 *)((longlong)&(param_1->DumpPath).field0_0x0 + 8);
    *(undefined4 *)((longlong)&(this->DumpPath).field0_0x0 + 0xc) =
         *(undefined4 *)((longlong)&(param_1->DumpPath).field0_0x0 + 0xc);
    *(int *)((longlong)&(param_1->DumpPath).field0_0x0 + 8) = 0;
    *(int *)((longlong)&(param_1->DumpPath).field0_0x0 + 0xc) = 0;
  }
  (this->GPUFaultAddress).bIsSet = false;
  bVar1 = (param_1->GPUFaultAddress).bIsSet;
  (this->GPUFaultAddress).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->GPUFaultAddress).TypedValue = (param_1->GPUFaultAddress).TypedValue;
  }
  return this;
}

