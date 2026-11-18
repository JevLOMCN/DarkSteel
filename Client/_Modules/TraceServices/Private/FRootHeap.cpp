// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// UpdateHistogramByAllocSize @ 14d406280

void __thiscall
TraceServices::FAllocationsProvider::FRootHeap::UpdateHistogramByAllocSize
          (FRootHeap *this,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (this->MaxAllocSize < param_1) {
    this->MaxAllocSize = param_1;
  }
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar2 = (int)lVar1;
  if (param_1 == 0) {
    iVar2 = -1;
  }
  this->AllocSizeHistogramPow2[iVar2 + 1] = this->AllocSizeHistogramPow2[iVar2 + 1] + 1;
  return;
}

// UpdateHistogramByEventDistance @ 14d4062b0

void __thiscall
TraceServices::FAllocationsProvider::FRootHeap::UpdateHistogramByEventDistance
          (FRootHeap *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (this->MaxEventDistance < param_1) {
    this->MaxEventDistance = param_1;
  }
  uVar1 = (ulonglong)param_1 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  this->EventDistanceHistogramPow2[lVar2] = this->EventDistanceHistogramPow2[lVar2] + 1;
  return;
}

