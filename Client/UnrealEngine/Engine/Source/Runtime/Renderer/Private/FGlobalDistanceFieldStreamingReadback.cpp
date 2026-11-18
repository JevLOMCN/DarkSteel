// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FGlobalDistanceFieldStreamingReadback @ 1453f9b00

FGlobalDistanceFieldStreamingReadback * __thiscall
FGlobalDistanceFieldStreamingReadback::FGlobalDistanceFieldStreamingReadback
          (FGlobalDistanceFieldStreamingReadback *this)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  piVar1 = &(this->PendingStreamingReadbackBuffers).ArrayNum;
  piVar2 = &(this->PendingStreamingReadbackBuffers).ArrayMax;
  *piVar1 = 0;
  (this->PendingStreamingReadbackBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  this->ReadbackBuffersNumPending = 0;
  this->MaxPendingStreamingReadbackBuffers = 4;
  this->ReadbackBuffersWriteIndex = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,4,(ForAnyElementType *)this,piVar1,piVar2);
  pFVar4 = (this->PendingStreamingReadbackBuffers).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar5 * 8;
  *(undefined8 *)pFVar3 = 0;
  *(undefined8 *)(pFVar3 + 8) = 0;
  pFVar4 = pFVar4 + (longlong)iVar5 * 8 + 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)(pFVar4 + 8) = 0;
  return this;
}

// ~FGlobalDistanceFieldStreamingReadback @ 1454051d0

void __thiscall
FGlobalDistanceFieldStreamingReadback::~FGlobalDistanceFieldStreamingReadback
          (FGlobalDistanceFieldStreamingReadback *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_>,int>
            ((TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *)
             (this->PendingStreamingReadbackBuffers).AllocatorInstance.Data,
             (this->PendingStreamingReadbackBuffers).ArrayNum);
  pFVar1 = (this->PendingStreamingReadbackBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

