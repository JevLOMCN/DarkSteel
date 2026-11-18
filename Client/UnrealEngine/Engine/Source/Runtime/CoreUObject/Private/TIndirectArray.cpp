// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Empty @ 141f2e240

void __thiscall
TIndirectArray<TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar6 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar6;
    if (pvVar2 != (void *)0x0) {
      lVar5 = 8;
      puVar3 = (undefined8 *)((longlong)pvVar2 + 0xc0);
      do {
        FIoRequest::~FIoRequest((FIoRequest *)(puVar3 + -1));
        puVar3[-3] = &___7IHandle_FBulkDataRequest__6B_;
        lVar5 = lVar5 + -1;
        puVar3 = puVar3 + -3;
      } while (lVar5 != 0);
      ::operator_delete(pvVar2,0xc0);
    }
    pFVar6 = pFVar6 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

