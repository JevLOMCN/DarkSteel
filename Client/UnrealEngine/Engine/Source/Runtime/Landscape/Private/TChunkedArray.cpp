// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_> @ 145f40610

TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0xa9) / 0xaa;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x3fc0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0xaa;
        puVar9 = (undefined8 *)((longlong)pvVar7 + 0x10);
        do {
          puVar9[-2] = 0;
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
          *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          puVar9 = puVar9 + 0xc;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_> *)
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
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// operator[] @ 145f448f0

FLandscapeEditReadbackTaskImpl * __thiscall
TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FLandscapeEditReadbackTaskImpl *pFVar5;
  
  uVar2 = param_1 / 0xaa;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FLandscapeEditReadbackTaskImpl *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FLandscapeEditReadbackTaskImpl *)
         ((ulonglong)(uint)(param_1 % 0xaa) * 0x60 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// Add @ 145f49470

int __thiscall
TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_18 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 0xa9) / 0xaa;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3fc0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0xaa;
        puVar8 = (undefined8 *)((longlong)pvVar7 + 0x10);
        do {
          puVar8[-2] = 0;
          puVar8[-1] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *(undefined1 *)(puVar8 + 3) = 0;
          *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
          puVar8 = puVar8 + 0xc;
          lVar9 = lVar9 + -1;
          local_18[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_18[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

// Add @ 145f80a80

int __thiscall
TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::Add
          (TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           *this,int param_1)

{
  int iVar1;
  void **ppvVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  longlong lVar11;
  ulonglong uVar12;
  void *local_38 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 0x48) / 0x49;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar12 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3fe0);
      pvVar10 = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar11 = 0x49;
        puVar9 = (undefined8 *)((longlong)pvVar7 + 0xb0);
        do {
          puVar9[-3] = 0;
          *(undefined4 *)(puVar9 + -2) = 0;
          *(undefined4 *)((longlong)puVar9 + -0xc) = 1;
          puVar9[-1] = 0;
          *puVar9 = 0;
          *(uint *)((longlong)puVar9 + 0x24) =
               *(uint *)((longlong)puVar9 + 0x24) & 0xf081803c | 0x81803c;
          puVar9[1] = 0;
          puVar9[2] = 0xffffffffffffffff;
          *(undefined4 *)(puVar9 + 3) = 0;
          *(undefined4 *)((longlong)puVar9 + 0x1c) = 0xffffffff;
          *(undefined2 *)(puVar9 + 4) = 0;
          *(undefined1 *)((longlong)puVar9 + 0x22) = 0xff;
          *(undefined2 *)(puVar9 + 5) = 0xffff;
          *(undefined4 *)(puVar9 + -2) = 1;
          puVar8 = (undefined8 *)puVar9[-3];
          if ((undefined8 *)puVar9[-3] == (undefined8 *)0x0) {
            puVar8 = puVar9 + -0x16;
          }
          DefaultConstructItems<FMeshBatchElement,int>(puVar8,1);
          puVar9 = puVar9 + 0x1c;
          lVar11 = lVar11 + -1;
          pvVar10 = pvVar7;
        } while (lVar11 != 0);
      }
      ppvVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      local_38[0] = pvVar10;
      if (((ppvVar2 <= local_38) && (local_38 < ppvVar2 + (this->Chunks).Array.ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<void_*>_>
                          (0x808,(ForElementType<void_*> *)this,&(this->Chunks).Array.ArrayMax);
      }
      ppvVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      ppvVar2[iVar6] = local_38[0];
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return iVar1;
}

