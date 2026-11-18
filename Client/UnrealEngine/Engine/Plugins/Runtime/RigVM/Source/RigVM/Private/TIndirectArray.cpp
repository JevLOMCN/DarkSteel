// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// Empty @ 14a0d6120

void __thiscall
TIndirectArray<TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
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
      lVar6 = 0x92;
      puVar4 = (undefined8 *)((longlong)pvVar2 + 0x3fe0);
      do {
        lVar6 = lVar6 + -1;
        if ((void *)puVar4[-2] != (void *)0x0) {
          FMemory::Free((void *)puVar4[-2]);
        }
        if ((void *)puVar4[-4] != (void *)0x0) {
          FMemory::Free((void *)puVar4[-4]);
        }
        DestructItems<FRigVMFunctionArgument,int>
                  ((FRigVMFunctionArgument *)puVar4[-6],*(int *)(puVar4 + -5));
        if ((void *)puVar4[-6] != (void *)0x0) {
          FMemory::Free((void *)puVar4[-6]);
        }
        pvVar3 = (void *)puVar4[-0xe];
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        puVar4 = puVar4 + -0xe;
      } while (lVar6 != 0);
      ::operator_delete(pvVar2,0x3fe0);
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

// Empty @ 14a0d6240

void __thiscall
TIndirectArray<TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar6 = (this->Array).AllocatorInstance.Data;
  for (iVar4 = (this->Array).ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
    pvVar2 = *(void **)pFVar6;
    if (pvVar2 != (void *)0x0) {
      lVar5 = 0x30;
      puVar3 = (undefined4 *)((longlong)pvVar2 + 0x3fd8);
      do {
        lVar5 = lVar5 + -1;
        if (*(void **)(puVar3 + -0x3a) != (void *)0x0) {
          FMemory::Free(*(void **)(puVar3 + -0x3a));
        }
        if (*(void **)(puVar3 + -0x3e) != (void *)0x0) {
          FMemory::Free(*(void **)(puVar3 + -0x3e));
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar3 + -0x44));
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar3 + -0x4a));
        if (*(void **)(puVar3 + -0x52) != (void *)0x0) {
          FMemory::Free(*(void **)(puVar3 + -0x52));
        }
        puVar3[-0x54] = 0;
        if (*(void **)(puVar3 + -0x56) != (void *)0x0) {
          FMemory::Free(*(void **)(puVar3 + -0x56));
        }
        TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(puVar3 + -0x66));
        puVar3[-0x68] = 0;
        if (*(void **)(puVar3 + -0x6a) != (void *)0x0) {
          FMemory::Free(*(void **)(puVar3 + -0x6a));
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(puVar3 + -0x7a));
        if (*(void **)(puVar3 + -0x7e) != (void *)0x0) {
          FMemory::Free(*(void **)(puVar3 + -0x7e));
        }
        if (*(void **)(puVar3 + -0x82) != (void *)0x0) {
          FMemory::Free(*(void **)(puVar3 + -0x82));
        }
        DestructItems<FRigVMTemplateArgument,int>
                  (*(FRigVMTemplateArgument **)(puVar3 + -0x86),puVar3[-0x84]);
        if (*(void **)(puVar3 + -0x86) != (void *)0x0) {
          FMemory::Free(*(void **)(puVar3 + -0x86));
        }
        puVar3 = puVar3 + -0x54;
      } while (lVar5 != 0);
      ::operator_delete(pvVar2,0x3f00);
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

