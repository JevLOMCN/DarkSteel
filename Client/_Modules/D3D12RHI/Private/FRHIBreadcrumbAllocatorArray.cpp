// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FRHIBreadcrumbAllocatorArray @ 145a46a40

FRHIBreadcrumbAllocatorArray * __thiscall
FRHIBreadcrumbAllocatorArray::FRHIBreadcrumbAllocatorArray
          (FRHIBreadcrumbAllocatorArray *this,FRHIBreadcrumbAllocatorArray *param_1)

{
  *(undefined8 *)&this->field_0x20 = 0;
  if (*(longlong *)&param_1->field_0x20 == 0) {
    memmove(this,param_1,0x20);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&param_1->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
  *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&param_1->field_0x28 = 0;
  *(undefined4 *)&param_1->field_0x2c = 2;
  return this;
}

