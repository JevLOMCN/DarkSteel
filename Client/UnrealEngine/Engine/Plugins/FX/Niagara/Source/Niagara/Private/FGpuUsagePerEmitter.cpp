// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FGpuUsagePerEmitter @ 1492745f0

FGpuUsagePerEmitter * __thiscall
FNiagaraDebugHud::FGpuUsagePerEmitter::FGpuUsagePerEmitter
          (FGpuUsagePerEmitter *this,FGpuUsagePerEmitter *param_1)

{
  TMap<FName,FNiagaraDebugHud::FGpuUsagePerStage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>_>
  *pTVar1;
  TMap<FName,FNiagaraDebugHud::FGpuUsagePerStage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  ulong64 uVar4;
  bool bVar5;
  undefined3 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined7 uVar11;
  float fVar12;
  
  bVar5 = (param_1->InstanceCount).SmoothedSetOnce;
  uVar6 = *(undefined3 *)&(param_1->InstanceCount).field_0x9;
  uVar7 = (param_1->InstanceCount).SmoothedFrameMax;
  pTVar1 = &this->Stages;
  pTVar2 = &param_1->Stages;
  (this->InstanceCount).LastFrameSeen = (param_1->InstanceCount).LastFrameSeen;
  (this->InstanceCount).SmoothedSetOnce = bVar5;
  *(undefined3 *)&(this->InstanceCount).field_0x9 = uVar6;
  (this->InstanceCount).SmoothedFrameMax = uVar7;
  uVar7 = (param_1->InstanceCount).CurrentCount;
  uVar8 = (param_1->InstanceCount).CurrentFrameMax;
  uVar9 = (param_1->InstanceCount).CurrentTotalSum;
  (this->InstanceCount).SmoothedTotalAvg = (param_1->InstanceCount).SmoothedTotalAvg;
  (this->InstanceCount).CurrentCount = uVar7;
  (this->InstanceCount).CurrentFrameMax = uVar8;
  (this->InstanceCount).CurrentTotalSum = uVar9;
  uVar10 = *(undefined4 *)&(param_1->InstanceCount).field_0x24;
  (this->InstanceCount).CurrentFrameSum = (param_1->InstanceCount).CurrentFrameSum;
  *(undefined4 *)&(this->InstanceCount).field_0x24 = uVar10;
  bVar5 = (param_1->Microseconds).SmoothedSetOnce;
  uVar11 = *(undefined7 *)&(param_1->Microseconds).field_0x9;
  (this->Microseconds).LastFrameSeen = (param_1->Microseconds).LastFrameSeen;
  (this->Microseconds).SmoothedSetOnce = bVar5;
  *(undefined7 *)&(this->Microseconds).field_0x9 = uVar11;
  fVar12 = (param_1->Microseconds).SmoothedTotalAvg;
  uVar7 = (param_1->Microseconds).CurrentCount;
  (this->Microseconds).SmoothedFrameMax = (param_1->Microseconds).SmoothedFrameMax;
  (this->Microseconds).SmoothedTotalAvg = fVar12;
  (this->Microseconds).CurrentCount = uVar7;
  uVar4 = (param_1->Microseconds).CurrentTotalSum;
  (this->Microseconds).CurrentFrameMax = (param_1->Microseconds).CurrentFrameMax;
  (this->Microseconds).CurrentTotalSum = uVar4;
  (this->Microseconds).CurrentFrameSum = (param_1->Microseconds).CurrentFrameSum;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Stages).field_0x8 = 0;
  *(undefined8 *)&(this->Stages).field_0x20 = 0;
  *(undefined4 *)&(this->Stages).field_0x28 = 0;
  *(undefined4 *)&(this->Stages).field_0x2c = 0x80;
  *(undefined4 *)&(this->Stages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Stages).field_0x34 = 0;
  *(undefined8 *)&(this->Stages).field_0x40 = 0;
  *(undefined4 *)&(this->Stages).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->Stages).field_0x10;
    *(undefined4 *)&(this->Stages).field_0x8 = *(undefined4 *)&(param_1->Stages).field_0x8;
    _Src = &(param_1->Stages).field_0x10;
    *(undefined4 *)&(this->Stages).field_0xc = *(undefined4 *)&(param_1->Stages).field_0xc;
    *(undefined8 *)&(param_1->Stages).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Stages).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->Stages).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->Stages).field_0x20 = *(undefined8 *)&(param_1->Stages).field_0x20;
      *(undefined8 *)&(param_1->Stages).field_0x20 = 0;
      *(undefined4 *)&(this->Stages).field_0x28 = *(undefined4 *)&(param_1->Stages).field_0x28;
      *(undefined4 *)&(this->Stages).field_0x2c = *(undefined4 *)&(param_1->Stages).field_0x2c;
      *(undefined8 *)&(param_1->Stages).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Stages).field_0x30 = *(undefined4 *)&(param_1->Stages).field_0x30;
    *(undefined4 *)&(this->Stages).field_0x34 = *(undefined4 *)&(param_1->Stages).field_0x34;
    *(undefined4 *)&(param_1->Stages).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Stages).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Stages).field_0x40 == 0) {
    *(undefined4 *)&(this->Stages).field_0x38 = *(undefined4 *)&(param_1->Stages).field_0x38;
  }
  pvVar3 = *(void **)&(this->Stages).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->Stages).field_0x40 = *(undefined8 *)&(param_1->Stages).field_0x40;
  *(undefined8 *)&(param_1->Stages).field_0x40 = 0;
  *(undefined4 *)&(this->Stages).field_0x48 = *(undefined4 *)&(param_1->Stages).field_0x48;
  *(undefined4 *)&(param_1->Stages).field_0x48 = 0;
  return this;
}

