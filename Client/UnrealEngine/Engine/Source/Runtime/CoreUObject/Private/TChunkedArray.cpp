// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_> @ 141f205d0

TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>::
TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>
          (TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  undefined8 *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  (this->Chunks).Array.ArrayMax = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  uVar5 = (int)(param_1 + 7 + (param_1 + 7 >> 0x1f & 7U)) >> 3;
  uVar9 = (ulonglong)uVar5;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  if (uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,(ForAnyElementType *)this,0,piVar1);
  }
  if (0 < (int)uVar5) {
    do {
      puVar7 = ::operator_new(0xc0);
      local_18[0] = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &___7FChunkBatchReadRequest__6B_;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = &___7FChunkBatchReadRequest__6B_;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = &___7FChunkBatchReadRequest__6B_;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = &___7FChunkBatchReadRequest__6B_;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[0xc] = &___7FChunkBatchReadRequest__6B_;
        puVar7[0xd] = 0;
        puVar7[0xe] = 0;
        puVar7[0xf] = &___7FChunkBatchReadRequest__6B_;
        puVar7[0x10] = 0;
        puVar7[0x11] = 0;
        puVar7[0x12] = &___7FChunkBatchReadRequest__6B_;
        puVar7[0x13] = 0;
        puVar7[0x14] = 0;
        puVar7[0x15] = &___7FChunkBatchReadRequest__6B_;
        puVar7[0x16] = 0;
        puVar7[0x17] = 0;
        local_18[0] = puVar7;
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(undefined8 **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) =
           local_18[0];
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return this;
}

// Add @ 141f28be0

int __thiscall
TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *local_28 [2];
  
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar1 = this->NumElements;
  iVar5 = iVar1 + param_1;
  iVar6 = iVar5 + 7;
  this->NumElements = iVar5;
  iVar5 = (this->Chunks).Array.ArrayNum;
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
  if (iVar5 < iVar6) {
    uVar8 = (ulonglong)(uint)(iVar6 - iVar5);
    do {
      puVar7 = ::operator_new(0xc0);
      local_28[0] = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &___7FChunkBatchReadRequest__6B_;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = &___7FChunkBatchReadRequest__6B_;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = &___7FChunkBatchReadRequest__6B_;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = &___7FChunkBatchReadRequest__6B_;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[0xc] = &___7FChunkBatchReadRequest__6B_;
        puVar7[0xd] = 0;
        puVar7[0xe] = 0;
        puVar7[0xf] = &___7FChunkBatchReadRequest__6B_;
        puVar7[0x10] = 0;
        puVar7[0x11] = 0;
        puVar7[0x12] = &___7FChunkBatchReadRequest__6B_;
        puVar7[0x13] = 0;
        puVar7[0x14] = 0;
        puVar7[0x15] = &___7FChunkBatchReadRequest__6B_;
        puVar7[0x16] = 0;
        puVar7[0x17] = 0;
        local_28[0] = puVar7;
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar5 = (this->Chunks).Array.ArrayNum;
      if (iVar5 == (this->Chunks).Array.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar5 + 1;
      *(undefined8 **)(pFVar2 + (longlong)iVar5 * 8) = local_28[0];
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return iVar1;
}

