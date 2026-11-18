// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// Empty @ 142caad50

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TIndirectArray<TChunkedArray<TTypedElementInternalData<FTestTypedElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<TTypedElementInternalData<FTestTypedElementData>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  FTypedElementInternalData *this_00;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar5;
    if (pvVar2 != (void *)0x0) {
      this_00 = (FTypedElementInternalData *)((longlong)pvVar2 + 0x4000);
      lVar3 = 0x200;
      do {
        this_00 = (FTypedElementInternalData *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x10);
        FTypedElementInternalData::~FTypedElementInternalData(this_00);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      ::operator_delete(pvVar2,0x4000);
    }
    pFVar5 = pFVar5 + 8;
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

// Empty @ 142caae30

void __thiscall
TIndirectArray<TChunkedArray<TTypedElementInternalData<void>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<TTypedElementInternalData<void>,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  FTypedElementInternalData *this_00;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar5;
    if (pvVar2 != (void *)0x0) {
      this_00 = (FTypedElementInternalData *)((longlong)pvVar2 + 0x3ff0);
      lVar3 = 0x2aa;
      do {
        this_00 = this_00 + -1;
        FTypedElementInternalData::~FTypedElementInternalData(this_00);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      ::operator_delete(pvVar2,0x3ff0);
    }
    pFVar5 = pFVar5 + 8;
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

