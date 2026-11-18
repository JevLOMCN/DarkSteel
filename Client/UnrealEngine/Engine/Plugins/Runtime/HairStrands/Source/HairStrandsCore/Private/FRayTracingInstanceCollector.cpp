// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// AddRDGPooledBuffer @ 14dff7fa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRayTracingInstanceCollector::AddRDGPooledBuffer
          (FRayTracingInstanceCollector *this,int param_1,FRDGPooledBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *pTVar4;
  FRDGPooledBuffer *local_res10;
  FRDGPooledBuffer *local_res18;
  
  uVar3 = 0;
  if (param_1 < (this->RDGPooledBuffers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  local_res18 = param_2;
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar4 = (this->RDGPooledBuffers).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 == (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
                 *)0x0) {
    pTVar4 = (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *)
             &this->RDGPooledBuffers;
  }
  TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>::
  Emplace<FRDGPooledBuffer_*_const_&>(pTVar4 + param_1,&local_res10,(bool *)&local_res18);
  return;
}

