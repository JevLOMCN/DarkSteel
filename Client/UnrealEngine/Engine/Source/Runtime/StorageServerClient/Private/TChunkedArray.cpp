// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 3

// TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_> @ 148cb26b0

TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0xb9) / 0xba;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x3ff0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0xba;
        puVar9 = (undefined4 *)((longlong)pvVar7 + 8);
        do {
          *(undefined8 *)(puVar9 + -2) = 0;
          *puVar9 = 0;
          *(undefined8 *)(puVar9 + 2) = 0;
          *(undefined8 *)(puVar9 + 4) = 0;
          *(undefined8 *)(puVar9 + 6) = 0;
          *(undefined8 *)(puVar9 + 8) = 0;
          *(undefined8 *)(puVar9 + 10) = 0;
          *(undefined8 *)(puVar9 + 0xc) = 0;
          *(undefined8 *)(puVar9 + 0xe) = 0;
          *(undefined8 *)(puVar9 + 0x10) = 0;
          *(undefined8 *)(puVar9 + 0x12) = 0;
          puVar9 = puVar9 + 0x16;
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
        pTVar8 = (TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_> *)
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

// operator[] @ 148cb7940

FPackageStoreEntryResource * __thiscall
TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FPackageStoreEntryResource *pFVar5;
  
  uVar2 = param_1 / 0xba;
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
      pFVar5 = (FPackageStoreEntryResource *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FPackageStoreEntryResource *)
         ((ulonglong)(uint)(param_1 % 0xba) * 0x58 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// Add @ 148cbacd0

int __thiscall
TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
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
  iVar4 = (iVar6 + 0xb9) / 0xba;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3ff0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0xba;
        puVar8 = (undefined4 *)((longlong)pvVar7 + 8);
        do {
          *(undefined8 *)(puVar8 + -2) = 0;
          *puVar8 = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 8) = 0;
          *(undefined8 *)(puVar8 + 10) = 0;
          *(undefined8 *)(puVar8 + 0xc) = 0;
          *(undefined8 *)(puVar8 + 0xe) = 0;
          *(undefined8 *)(puVar8 + 0x10) = 0;
          *(undefined8 *)(puVar8 + 0x12) = 0;
          puVar8 = puVar8 + 0x16;
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

