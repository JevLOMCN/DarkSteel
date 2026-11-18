// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// GetAllTriangles @ 1433a2360

void __thiscall
UE::Geometry::FDynamicMeshEditResult::GetAllTriangles
          (FDynamicMeshEditResult *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  local_48.ArrayNum = (this->NewTriangles).ArrayNum;
  lVar7 = (longlong)local_48.ArrayNum;
  pFVar1 = (this->NewTriangles).AllocatorInstance.Data;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.ArrayNum == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
               &local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,pFVar1,lVar7 << 2);
  }
  BufferUtil::AppendElements<int,TArray<int,TSizedDefaultAllocator<32>_>_>(param_1,&local_48);
  lVar7 = (longlong)(this->NewQuads).ArrayNum;
  uVar10 = 0;
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar10 < (this->NewQuads).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = (this->NewQuads).AllocatorInstance.Data + lVar9 * 8;
      if ((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)param_1->ArrayMax * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           *(undefined4 *)pFVar1;
      uVar5 = 0;
      if ((int)uVar10 < (this->NewQuads).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = (this->NewQuads).AllocatorInstance.Data + lVar9 * 8 + 4;
      if ((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)param_1->ArrayMax * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           *(undefined4 *)pFVar1;
    } while (lVar9 < lVar7);
  }
  lVar7 = (longlong)(this->NewPolygons).ArrayNum;
  uVar10 = 0;
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar10 < (this->NewPolygons).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = (this->NewPolygons).AllocatorInstance.Data;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = *(int *)(pFVar1 + lVar9 + 8);
      lVar8 = (longlong)local_38.ArrayNum;
      _Src = *(void **)(pFVar1 + lVar9);
      if (local_38.ArrayNum == 0) {
        local_38.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                   &local_38.ArrayMax);
        memcpy(local_38.AllocatorInstance.Data,_Src,lVar8 << 2);
      }
      BufferUtil::AppendElements<int,TArray<int,TSizedDefaultAllocator<32>_>_>(param_1,&local_38);
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// Reset @ 1433c5740

void __thiscall UE::Geometry::FDynamicMeshEditResult::Reset(FDynamicMeshEditResult *this)

{
  int *piVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  (this->NewVertices).ArrayNum = 0;
  if ((this->NewVertices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->NewVertices).ArrayMax);
  }
  (this->NewTriangles).ArrayNum = 0;
  if ((this->NewTriangles).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->NewTriangles).AllocatorInstance,0,&(this->NewTriangles).ArrayMax);
  }
  (this->NewQuads).ArrayNum = 0;
  if ((this->NewQuads).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->NewQuads).AllocatorInstance,0,&(this->NewQuads).ArrayMax);
  }
  piVar1 = &(this->NewPolygons).ArrayMax;
  pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this->NewPolygons).AllocatorInstance.Data;
  iVar2 = (this->NewPolygons).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->NewPolygons).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->NewPolygons).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->NewPolygons).ArrayNum = 0;
  }
  (this->NewGroups).ArrayNum = 0;
  if ((this->NewGroups).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->NewGroups).AllocatorInstance,0,&(this->NewGroups).ArrayMax);
  }
  piVar1 = &(this->NewNormalOverlayElements).ArrayMax;
  pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           (this->NewNormalOverlayElements).AllocatorInstance.Data;
  iVar2 = (this->NewNormalOverlayElements).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->NewNormalOverlayElements).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->NewNormalOverlayElements).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->NewNormalOverlayElements).ArrayNum = 0;
  }
  (this->NewColorOverlayElements).ArrayNum = 0;
  if ((this->NewColorOverlayElements).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->NewColorOverlayElements).AllocatorInstance,0,
               &(this->NewColorOverlayElements).ArrayMax);
  }
  return;
}

