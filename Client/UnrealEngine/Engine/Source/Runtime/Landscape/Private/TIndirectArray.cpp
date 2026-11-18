// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// Empty @ 145f50570

void __thiscall
TIndirectArray<TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar7 = (this->Array).AllocatorInstance.Data;
  for (iVar5 = (this->Array).ArrayNum; iVar5 != 0; iVar5 = iVar5 + -1) {
    pvVar3 = *(void **)pFVar7;
    if (pvVar3 != (void *)0x0) {
      lVar6 = 0xaa;
      puVar4 = (undefined8 *)((longlong)pvVar3 + 0x4010);
      do {
        puVar1 = puVar4 + -0xc;
        lVar6 = lVar6 + -1;
        DestructItems<TArray<FColor,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<FColor,TSizedDefaultAllocator<32>_> *)*puVar1,*(int *)(puVar4 + -0xb));
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
        if ((FRHIResource *)puVar4[-0xe] != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)puVar4[-0xe]);
        }
        DestructItems<TRefCountPtr<FRHITexture>,int>
                  ((TRefCountPtr<FRHITexture> *)puVar4[-0x10],*(int *)(puVar4 + -0xf));
        if ((void *)puVar4[-0x10] != (void *)0x0) {
          FMemory::Free((void *)puVar4[-0x10]);
        }
        if ((void *)puVar4[-0x15] != (void *)0x0) {
          FMemory::Free((void *)puVar4[-0x15]);
        }
        puVar4 = puVar1;
      } while (lVar6 != 0);
      ::operator_delete(pvVar3,0x3fc0);
    }
    pFVar7 = pFVar7 + 8;
  }
  if (-1 < param_1) {
    piVar2 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar2 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

