// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// GetEdgeIDs<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14cd492f0

void __thiscall
UE::Geometry::FMeshEdgesFromTriangleSubIndices::GetEdgeIDs<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FMeshEdgesFromTriangleSubIndices *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  pFVar11 = (this->EdgeTriIndexPairs).AllocatorInstance.Data;
  iVar4 = (this->EdgeTriIndexPairs).ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar4 * 8;
LAB_14cd49354:
  do {
    if ((this->EdgeTriIndexPairs).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<int,signed_char>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar2) {
      return;
    }
    uVar5 = *(uint *)pFVar11;
    if ((-1 < (int)uVar5) &&
       ((int)uVar5 <
        (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
      uVar10 = (ulonglong)(uVar5 & 0x1ff);
      lVar3 = (ulonglong)(uVar5 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + lVar3) + uVar10 * 2) - 1U) < 0xfffe) {
        pFVar6 = (param_2->AllocatorInstance).Data;
        lVar3 = *(longlong *)((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + lVar3);
        local_2c = *(undefined4 *)(lVar3 + 8 + uVar10 * 0xc);
        local_34 = *(undefined8 *)(lVar3 + uVar10 * 0xc);
        local_38 = *(undefined4 *)((longlong)&local_34 + (longlong)(char)pFVar11[4] * 4);
        if ((pFVar6 <= (FScriptContainerElement *)&local_38) &&
           ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)*piVar1 * 4)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        pFVar11 = pFVar11 + 8;
        param_2->ArrayNum = iVar9 + 1;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_38;
        goto LAB_14cd49354;
      }
    }
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4139865482796728220>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Selection\\StoredMeshSelectionUtil.h"
                       ,100,"Mesh.IsTriangle(VidPair.Key)");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// InitializeFromEdgeIDs<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14cd49500

void __thiscall
UE::Geometry::FMeshEdgesFromTriangleSubIndices::
InitializeFromEdgeIDs<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FMeshEdgesFromTriangleSubIndices *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  uint local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  uint local_38;
  
  uVar4 = param_2->ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->EdgeTriIndexPairs).ArrayMax;
  (this->EdgeTriIndexPairs).ArrayNum = 0;
  if ((this->EdgeTriIndexPairs).ArrayMax < (int)uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar4,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar11 = (param_2->AllocatorInstance).Data;
  iVar5 = param_2->ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar5 * 4;
LAB_14cd49574:
  do {
    if (param_2->ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar2) {
      return;
    }
    uVar4 = *(uint *)pFVar11;
    if ((-1 < (int)uVar4) &&
       ((int)uVar4 <
        (int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->EdgeRefCounts).RefCounts.CurBlockUsed))) {
      lVar3 = (ulonglong)(uVar4 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               lVar3) + (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe) {
        local_48 = *(uint *)(*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar3) +
                             8 + (ulonglong)(uVar4 & 0x1ff) * 0x10);
        lVar3 = *(longlong *)
                 ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                 (ulonglong)(local_48 >> 9) * 8);
        local_40 = *(undefined8 *)(lVar3 + (ulonglong)(local_48 & 0x1ff) * 0xc);
        local_38 = *(uint *)(lVar3 + 8 + (ulonglong)(local_48 & 0x1ff) * 0xc);
        if ((uint)local_40 == uVar4) {
          uVar8 = 0;
        }
        else if ((uint)((ulonglong)local_40 >> 0x20) == uVar4) {
          uVar8 = 1;
        }
        else {
          uVar8 = 0xff;
          if (local_38 == uVar4) {
            uVar8 = 2;
          }
        }
        pFVar6 = (this->EdgeTriIndexPairs).AllocatorInstance.Data;
        uStack_44 = CONCAT31(uStack_44._1_3_,uVar8);
        if ((pFVar6 <= (FScriptContainerElement *)&local_48) &&
           ((FScriptContainerElement *)&local_48 < pFVar6 + (longlong)*piVar1 * 8)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar10 = (this->EdgeTriIndexPairs).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)this,piVar1);
        }
        pFVar11 = pFVar11 + 4;
        (this->EdgeTriIndexPairs).ArrayNum = iVar10 + 1;
        *(ulonglong *)((this->EdgeTriIndexPairs).AllocatorInstance.Data + (longlong)iVar10 * 8) =
             CONCAT44(uStack_44,local_48);
        goto LAB_14cd49574;
      }
    }
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4139865482796728236>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Selection\\StoredMeshSelectionUtil.h"
                       ,0x54,"Mesh.IsEdge(Eid)");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar11 = pFVar11 + 4;
  } while( true );
}

