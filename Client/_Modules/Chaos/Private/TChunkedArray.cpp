// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// operator[] @ 14388d530

FConvexFace * __thiscall
TChunkedArray<Chaos::FConvexBuilder::FConvexFace,16384,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<Chaos::FConvexBuilder::FConvexFace,16384,TSizedDefaultAllocator<32>_> *this
          ,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConvexFace *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0xff;
  uVar3 = param_1 + uVar6;
  uVar7 = (int)uVar3 >> 8;
  uVar5 = 0;
  if ((int)uVar7 < (this->Chunks).Array.ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvexFace *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FConvexFace *)
         ((ulonglong)((uVar3 & 0xff) - uVar6) * 0x40 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8));
}

// operator[] @ 14388d5d0

FHalfEdge * __thiscall
TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FHalfEdge *pFVar5;
  
  uVar2 = param_1 / 0x155;
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
      pFVar5 = (FHalfEdge *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FHalfEdge *)
         ((ulonglong)(uint)(param_1 % 0x155) * 0x30 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> @ 143af2850

TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::
TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>
          (TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar5 = (int)(param_1 + 0xff + (param_1 + 0xff >> 0x1f & 0xffU)) >> 8;
  uVar11 = (ulonglong)uVar5;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar11);
  }
  if (uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,(ForAnyElementType *)this,0,piVar1);
  }
  if (0 < (int)uVar5) {
    do {
      pvVar7 = ::operator_new(0x16000);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0x100;
        puVar9 = (undefined8 *)((longlong)pvVar7 + 0x80);
        do {
          puVar9[-8] = 0;
          puVar9[-7] = 0;
          puVar9[-6] = 0;
          puVar9[-5] = 0;
          puVar9[-4] = 0;
          puVar9[-3] = 0;
          puVar9[-2] = 0;
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          puVar9[10] = 0;
          puVar9[0xb] = 0;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
          puVar9 = puVar9 + 0x2c;
        } while (lVar10 != 0);
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
        pTVar8 = (TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
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

// operator[] @ 143afe340

FSolverBody * __thiscall
TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSolverBody *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0xff;
  uVar3 = param_1 + uVar6;
  uVar7 = (int)uVar3 >> 8;
  uVar5 = 0;
  if ((int)uVar7 < (this->Chunks).Array.ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSolverBody *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSolverBody *)
         ((ulonglong)((uVar3 & 0xff) - uVar6) * 0x160 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8));
}

// Add @ 143b0ef30

int __thiscall
TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *local_18 [2];
  
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
  iVar6 = iVar5 + 0xff;
  this->NumElements = iVar5;
  iVar5 = (this->Chunks).Array.ArrayNum;
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0xffU)) >> 8;
  if (iVar5 < iVar6) {
    uVar9 = (ulonglong)(uint)(iVar6 - iVar5);
    do {
      local_18[0] = ::operator_new(0x16000);
      if (local_18[0] != (void *)0x0) {
        lVar8 = 0x100;
        puVar7 = (undefined8 *)((longlong)local_18[0] + 0x80);
        do {
          puVar7[-8] = 0;
          puVar7[-7] = 0;
          puVar7[-6] = 0;
          puVar7[-5] = 0;
          puVar7[-4] = 0;
          puVar7[-3] = 0;
          puVar7[-2] = 0;
          puVar7[-1] = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          lVar8 = lVar8 + -1;
          puVar7 = puVar7 + 0x2c;
        } while (lVar8 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
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
      *(void **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return iVar1;
}

