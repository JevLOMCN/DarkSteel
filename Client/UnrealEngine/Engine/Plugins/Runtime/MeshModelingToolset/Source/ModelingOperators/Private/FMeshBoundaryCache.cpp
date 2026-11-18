// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// operator() @ 14c94b660

void __thiscall
`UE::Geometry::FMeshBoundaryCache::Calculate'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  undefined1 uVar6;
  uint uVar7;
  
  bVar4 = UE::Geometry::FDynamicMesh3::IsBoundaryVertex
                    (*(FDynamicMesh3 **)((longlong)this + 8),param_1);
  if (((bVar4) && (-1 < param_1)) &&
     (lVar1 = *(longlong *)((longlong)this + 8),
     param_1 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24))) {
    uVar5 = *(ushort *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
             (ulonglong)(param_1 & 0x1ff) * 2);
    if (uVar5 == 0xffff) {
      uVar5 = 0;
    }
    if (1 < uVar5) {
      uVar6 = 1;
      goto LAB_14c94b6d9;
    }
  }
  uVar6 = 0;
LAB_14c94b6d9:
  plVar2 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  *(undefined1 *)((longlong)param_1 + *plVar2) = uVar6;
  return;
}

// Calculate @ 14c95fee0

void __thiscall
UE::Geometry::FMeshBoundaryCache::Calculate(FMeshBoundaryCache *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  <lambda_1> local_res8;
  uint local_58 [2];
  FMeshBoundaryCache *local_50;
  FDynamicMesh3 *local_48;
  TArrayView<std::nullptr_t,int> local_40;
  code *local_30;
  FMeshBoundaryCache **local_28;
  
  piVar1 = &(this->bIsBoundary).ArrayNum;
  iVar7 = *piVar1;
  uVar10 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if (iVar7 < (int)uVar10) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar10 - iVar7,(ForAnyElementType *)this,piVar1,
                       &(this->bIsBoundary).ArrayMax);
    memset((this->bIsBoundary).AllocatorInstance.Data + iVar5,0,(longlong)(int)(uVar10 - iVar7));
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar7) {
      uVar9 = iVar7 - uVar10;
      if (((int)(uVar9 | uVar10) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 != 0) {
        pFVar8 = (this->bIsBoundary).AllocatorInstance.Data + (int)uVar10;
        iVar7 = (*piVar1 - uVar9) - uVar10;
        if (iVar7 != 0) {
          memmove(pFVar8,pFVar8 + (int)uVar9,(longlong)iVar7);
        }
        *piVar1 = *piVar1 - uVar9;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(ForAnyElementType *)this,*piVar1,&(this->bIsBoundary).ArrayMax);
      }
    }
  }
  local_30 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshBoundaryCache::Calculate'::__l2::<lambda_1>,void,int>
             ::Call;
  local_28 = &local_50;
  local_40.DataPtr = (void **)0x0;
  local_40.ArrayNum = 0;
  local_50 = this;
  local_48 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar10,1,(TFunctionRef<void___cdecl(int)> *)&local_30,local_res8,
             None,&local_40);
  local_58[0] = 0;
  if (0 < (int)uVar10) {
    do {
      uVar9 = local_58[0];
      uVar6 = 0;
      if ((int)local_58[0] < *piVar1) {
        uVar6 = ~local_58[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this->bIsBoundary).AllocatorInstance.Data[(int)uVar9] != (FScriptContainerElement)0x0) {
        pFVar8 = (this->BoundaryVerts).AllocatorInstance.Data;
        if (((pFVar8 <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 <
             pFVar8 + (longlong)(this->BoundaryVerts).ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->BoundaryVerts).ArrayNum;
        piVar2 = &(this->BoundaryVerts).ArrayMax;
        if (iVar7 == *piVar2) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->BoundaryVerts).AllocatorInstance,piVar2);
        }
        (this->BoundaryVerts).ArrayNum = iVar7 + 1;
        *(uint *)((this->BoundaryVerts).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_58[0];
      }
      local_58[0] = local_58[0] + 1;
    } while ((int)local_58[0] < (int)uVar10);
  }
  return;
}

