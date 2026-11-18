// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// Empty @ 148cc2570

void __thiscall
TIndirectArray<TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar7 = (this->Array).AllocatorInstance.Data;
  for (iVar5 = (this->Array).ArrayNum; iVar5 != 0; iVar5 = iVar5 + -1) {
    pvVar2 = *(void **)pFVar7;
    if (pvVar2 != (void *)0x0) {
      lVar6 = 0xba;
      puVar4 = (undefined8 *)((longlong)pvVar2 + 0x4028);
      do {
        lVar6 = lVar6 + -1;
        if ((void *)puVar4[-9] != (void *)0x0) {
          FMemory::Free((void *)puVar4[-9]);
        }
        pvVar3 = (void *)puVar4[-0xb];
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        if ((void *)puVar4[-0xd] != (void *)0x0) {
          FMemory::Free((void *)puVar4[-0xd]);
        }
        if ((void *)puVar4[-0xf] != (void *)0x0) {
          FMemory::Free((void *)puVar4[-0xf]);
        }
        puVar4 = puVar4 + -0xb;
      } while (lVar6 != 0);
      ::operator_delete(pvVar2,0x3ff0);
    }
    pFVar7 = pFVar7 + 8;
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

