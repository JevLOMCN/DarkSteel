// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Empty @ 141752ac0

void __thiscall
TIndirectArray<TChunkedArray<FString,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<FString,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
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
      lVar6 = (longlong)pvVar3 + 0x4000;
      lVar4 = 0x400;
      do {
        puVar1 = (undefined8 *)(lVar6 + -0x10);
        lVar6 = lVar6 + -0x10;
        lVar4 = lVar4 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar4 != 0);
      ::operator_delete(pvVar3,0x4000);
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

// ~TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1419d08f0

void __thiscall
TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x10000);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Empty @ 1419f2db0

void __thiscall
TIndirectArray<FActiveStatGroupInfo,TSizedDefaultAllocator<32>_>::Empty
          (TIndirectArray<FActiveStatGroupInfo,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = *(undefined8 **)pFVar4;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 0x29) = 0;
      if ((void *)puVar2[0x28] != (void *)0x0) {
        FMemory::Free((void *)puVar2[0x28]);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar2 + 0x20));
      *(undefined4 *)(puVar2 + 0x1f) = 0;
      if ((void *)puVar2[0x1e] != (void *)0x0) {
        FMemory::Free((void *)puVar2[0x1e]);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar2 + 0x16));
      if ((void *)puVar2[0x14] != (void *)0x0) {
        FMemory::Free((void *)puVar2[0x14]);
      }
      if ((void *)puVar2[0x12] != (void *)0x0) {
        FMemory::Free((void *)puVar2[0x12]);
      }
      if ((void *)puVar2[0x10] != (void *)0x0) {
        FMemory::Free((void *)puVar2[0x10]);
      }
      if ((void *)puVar2[0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar2[0xe]);
      }
      if ((void *)puVar2[0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar2[0xc]);
      }
      *(undefined4 *)(puVar2 + 0xb) = 0;
      if ((void *)puVar2[10] != (void *)0x0) {
        FMemory::Free((void *)puVar2[10]);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar2 + 2));
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      ::operator_delete(puVar2,0x150);
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

// Empty @ 1419f2f40

void __thiscall
TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x10000);
    pFVar2 = pFVar2 + 8;
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

