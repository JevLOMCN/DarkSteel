// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// FFrame @ 14596e040

FFrame * __thiscall FD3D11DynamicRHI::FProfiler::FFrame::FFrame(FFrame *this,FFrame *param_1)

{
  void *pvVar1;
  
  (this->EndFrameQuery).Ptr = (param_1->EndFrameQuery).Ptr;
  (param_1->EndFrameQuery).Ptr = (FD3D11RenderQuery *)0x0;
  (this->EventStream).First = (param_1->EventStream).First;
  (this->EventStream).Current = (param_1->EventStream).Current;
  (this->EventStream).Queue.field0_0x0 = (param_1->EventStream).Queue.field0_0x0;
  (param_1->EventStream).First = (FChunk *)0x0;
  (param_1->EventStream).Current = (FChunk *)0x0;
  *(undefined8 *)&(this->BreadcrumbAllocators).field_0x20 = 0;
  if (*(longlong *)&(param_1->BreadcrumbAllocators).field_0x20 == 0) {
    memmove(&this->BreadcrumbAllocators,&param_1->BreadcrumbAllocators,0x20);
  }
  pvVar1 = *(void **)&(this->BreadcrumbAllocators).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined8 *)&(this->BreadcrumbAllocators).field_0x20 =
       *(undefined8 *)&(param_1->BreadcrumbAllocators).field_0x20;
  *(undefined8 *)&(param_1->BreadcrumbAllocators).field_0x20 = 0;
  *(undefined4 *)&(this->BreadcrumbAllocators).field_0x28 =
       *(undefined4 *)&(param_1->BreadcrumbAllocators).field_0x28;
  *(undefined4 *)&(this->BreadcrumbAllocators).field_0x2c =
       *(undefined4 *)&(param_1->BreadcrumbAllocators).field_0x2c;
  *(undefined4 *)&(param_1->BreadcrumbAllocators).field_0x28 = 0;
  *(undefined4 *)&(param_1->BreadcrumbAllocators).field_0x2c = 2;
  return this;
}

