// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FQueueTimestamps @ 145c45f80

FQueueTimestamps * __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps::FQueueTimestamps
          (FQueueTimestamps *this,FQueueTimestamps *param_1)

{
  TMap<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,0>_>
  *pTVar1;
  TMap<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  bool bVar3;
  ulong64 uVar4;
  void *pvVar5;
  
  (this->Queue).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Queue).Values.AllocatorInstance.Data = (param_1->Queue).Values.AllocatorInstance.Data;
  (param_1->Queue).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Queue).Values.ArrayNum = (param_1->Queue).Values.ArrayNum;
  (this->Queue).Values.ArrayMax = (param_1->Queue).Values.ArrayMax;
  (param_1->Queue).Values.ArrayNum = 0;
  (param_1->Queue).Values.ArrayMax = 0;
  uVar4 = (param_1->WholeQueueStat).Exclusive.IdleCycles;
  (this->WholeQueueStat).Exclusive.BusyCycles = (param_1->WholeQueueStat).Exclusive.BusyCycles;
  (this->WholeQueueStat).Exclusive.IdleCycles = uVar4;
  uVar4 = (param_1->WholeQueueStat).Inclusive.BusyCycles;
  (this->WholeQueueStat).Exclusive.WaitCycles = (param_1->WholeQueueStat).Exclusive.WaitCycles;
  (this->WholeQueueStat).Inclusive.BusyCycles = uVar4;
  uVar4 = (param_1->WholeQueueStat).Inclusive.WaitCycles;
  (this->WholeQueueStat).Inclusive.IdleCycles = (param_1->WholeQueueStat).Inclusive.IdleCycles;
  (this->WholeQueueStat).Inclusive.WaitCycles = uVar4;
  (param_1->WholeQueueStat).Exclusive.BusyCycles = 0;
  (param_1->WholeQueueStat).Exclusive.IdleCycles = 0;
  (param_1->WholeQueueStat).Exclusive.WaitCycles = 0;
  (param_1->WholeQueueStat).Inclusive.BusyCycles = 0;
  (param_1->WholeQueueStat).Inclusive.IdleCycles = 0;
  (param_1->WholeQueueStat).Inclusive.WaitCycles = 0;
  uVar4 = param_1->CPUFrameBoundary;
  (this->TotalBusyCycles).bIsSet = false;
  this->CPUFrameBoundary = uVar4;
  bVar3 = (param_1->TotalBusyCycles).bIsSet;
  (this->TotalBusyCycles).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->TotalBusyCycles).TypedValue = (param_1->TotalBusyCycles).TypedValue;
  }
  pTVar1 = &this->Stats;
  *(undefined8 *)pTVar1 = 0;
  pTVar2 = &param_1->Stats;
  *(undefined8 *)&(this->Stats).field_0x8 = 0;
  *(undefined8 *)&(this->Stats).field_0x20 = 0;
  *(undefined4 *)&(this->Stats).field_0x28 = 0;
  *(undefined4 *)&(this->Stats).field_0x2c = 0x80;
  *(undefined4 *)&(this->Stats).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Stats).field_0x34 = 0;
  *(undefined8 *)&(this->Stats).field_0x40 = 0;
  *(undefined4 *)&(this->Stats).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->Stats).field_0x10;
    *(undefined4 *)&(this->Stats).field_0x8 = *(undefined4 *)&(param_1->Stats).field_0x8;
    _Src = &(param_1->Stats).field_0x10;
    *(undefined4 *)&(this->Stats).field_0xc = *(undefined4 *)&(param_1->Stats).field_0xc;
    *(undefined8 *)&(param_1->Stats).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Stats).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar5 = *(void **)&(this->Stats).field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->Stats).field_0x20 = *(undefined8 *)&(param_1->Stats).field_0x20;
      *(undefined8 *)&(param_1->Stats).field_0x20 = 0;
      *(undefined4 *)&(this->Stats).field_0x28 = *(undefined4 *)&(param_1->Stats).field_0x28;
      *(undefined4 *)&(this->Stats).field_0x2c = *(undefined4 *)&(param_1->Stats).field_0x2c;
      *(undefined8 *)&(param_1->Stats).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Stats).field_0x30 = *(undefined4 *)&(param_1->Stats).field_0x30;
    *(undefined4 *)&(this->Stats).field_0x34 = *(undefined4 *)&(param_1->Stats).field_0x34;
    *(undefined4 *)&(param_1->Stats).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Stats).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Stats).field_0x40 == 0) {
    *(undefined4 *)&(this->Stats).field_0x38 = *(undefined4 *)&(param_1->Stats).field_0x38;
  }
  pvVar5 = *(void **)&(this->Stats).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  *(undefined8 *)&(this->Stats).field_0x40 = *(undefined8 *)&(param_1->Stats).field_0x40;
  *(undefined8 *)&(param_1->Stats).field_0x40 = 0;
  *(undefined4 *)&(this->Stats).field_0x48 = *(undefined4 *)&(param_1->Stats).field_0x48;
  *(undefined4 *)&(param_1->Stats).field_0x48 = 0;
  return this;
}

