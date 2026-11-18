// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// Empty @ 1494ccc00

void __thiscall
TIndirectArray<TChunkedArray<FString,512,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<FString,512,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar7 = (this->Array).AllocatorInstance.Data;
  for (iVar5 = (this->Array).ArrayNum; iVar5 != 0; iVar5 = iVar5 + -1) {
    pvVar3 = *(void **)pFVar7;
    if (pvVar3 != (void *)0x0) {
      lVar6 = (longlong)pvVar3 + 0x200;
      lVar4 = 0x20;
      do {
        puVar1 = (undefined8 *)(lVar6 + -0x10);
        lVar6 = lVar6 + -0x10;
        lVar4 = lVar4 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar4 != 0);
      ::operator_delete(pvVar3,0x200);
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

