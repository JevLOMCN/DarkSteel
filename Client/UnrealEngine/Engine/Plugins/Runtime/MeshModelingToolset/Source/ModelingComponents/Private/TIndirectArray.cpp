// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// Empty @ 14ca88dc0

void __thiscall
TIndirectArray<UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet,TSizedDefaultAllocator<32>_>::
Empty(TIndirectArray<UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    pvVar2 = *(void **)pFVar4;
    if (pvVar2 != (void *)0x0) {
      if (*(void **)((longlong)pvVar2 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar2 + 8));
      }
      ::operator_delete(pvVar2,0x18);
    }
    pFVar4 = pFVar4 + 8;
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

