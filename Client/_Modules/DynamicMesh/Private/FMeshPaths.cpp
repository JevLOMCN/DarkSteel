// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// Compute @ 14c71f510

bool __thiscall UE::Geometry::FMeshPaths::Compute(FMeshPaths *this)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int *piVar14;
  uint uVar15;
  FScriptContainerElement *pFVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint local_res8 [2];
  uint local_res10 [2];
  int local_res18;
  undefined8 local_res20;
  uint local_b8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  ForAnyElementType local_a0;
  undefined8 local_98;
  FEdgeSpan local_88;
  ulonglong uVar11;
  ulonglong uVar16;
  
  if (this->Mesh == (FDynamicMesh3 *)0x0) {
    return false;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->UnvisitedEdges,&this->Edges);
  if (*(int *)&(this->UnvisitedEdges).Elements.field_0x8 !=
      *(int *)&(this->UnvisitedEdges).Elements.field_0x34) {
    do {
      uVar19 = 0;
      piVar14 = &(this->Spans).ArrayMax;
      uVar1 = *(uint *)&(this->UnvisitedEdges).Elements.field_0x28;
      uVar15 = 0;
      uVar8 = uVar15;
      if (uVar1 != 0) {
        puVar3 = *(uint **)&(this->UnvisitedEdges).Elements.field_0x20;
        puVar18 = (uint *)&(this->UnvisitedEdges).Elements.field_0x10;
        if (puVar3 != (uint *)0x0) {
          puVar18 = puVar3;
        }
        uVar8 = *puVar18;
        uVar11 = uVar19;
        uVar16 = uVar19;
        while (uVar8 == 0) {
          iVar9 = (int)uVar11;
          uVar15 = (int)uVar16 + 0x20;
          uVar16 = (ulonglong)uVar15;
          uVar10 = iVar9 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar8 = uVar1;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
          goto LAB_14c71f60c;
          uVar8 = puVar18[(longlong)iVar9 + 1];
        }
        uVar11 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res18 = (int)lVar12;
        uVar8 = local_res18 + -1 + uVar15;
        if ((int)uVar1 < (int)uVar8) {
          uVar8 = uVar1;
        }
      }
LAB_14c71f60c:
      local_res8[0] = 0xffffffff;
      uVar1 = *(uint *)(*(longlong *)&(this->UnvisitedEdges).Elements + (longlong)(int)uVar8 * 0xc);
      uVar11 = *(ulonglong *)
                (*(longlong *)
                  ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8)
                + (ulonglong)(uVar1 & 0x1ff) * 0x10);
      local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.ArrayNum = 0;
      local_b0.ArrayMax = 0;
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98 = 0;
      uVar16 = uVar19;
      local_res20 = uVar11;
      local_b8[0] = uVar1;
      if (uVar1 != 0xffffffff) {
        while( true ) {
          iVar9 = (int)uVar16;
          if ((local_b0.AllocatorInstance.Data <= (FScriptContainerElement *)local_b8) &&
             ((FScriptContainerElement *)local_b8 <
              local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayMax * 4)) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            iVar9 = local_b0.ArrayNum;
          }
          if (iVar9 == local_b0.ArrayMax) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
          }
          local_b0.ArrayNum = iVar9 + 1;
          *(uint *)(local_b0.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_b8[0];
          local_res10[0] = local_b8[0];
          if (*(int *)&(this->UnvisitedEdges).Elements.field_0x8 !=
              *(int *)&(this->UnvisitedEdges).Elements.field_0x34) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&this->UnvisitedEdges,local_b8[0],(int *)local_res10);
          }
          local_b8[0] = GetNextEdge(this,local_b8[0],(int)uVar11,(int *)local_res8);
          uVar11 = (ulonglong)local_res8[0];
          if (local_b8[0] == 0xffffffff) break;
          uVar16 = local_b0._8_8_ & 0xffffffff;
        }
        local_res8[0] = 0xffffffff;
        uVar15 = local_res20._4_4_;
        local_b8[0] = uVar1;
        do {
          if (local_b8[0] != uVar1) {
            if (((local_a0.Data <= (FScriptContainerElement *)local_b8) &&
                ((FScriptContainerElement *)local_b8 < local_a0.Data + (longlong)local_98._4_4_ * 4)
                ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            iVar9 = (int)local_98;
            if ((int)local_98 == local_98._4_4_) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_a0,(int *)((longlong)&local_98 + 4));
            }
            local_98 = CONCAT44(local_98._4_4_,iVar9 + 1);
            *(uint *)(local_a0.Data + (longlong)iVar9 * 4) = local_b8[0];
          }
          local_res10[0] = local_b8[0];
          if (*(int *)&(this->UnvisitedEdges).Elements.field_0x8 !=
              *(int *)&(this->UnvisitedEdges).Elements.field_0x34) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&this->UnvisitedEdges,local_b8[0],(int *)local_res10);
          }
          local_b8[0] = GetNextEdge(this,local_b8[0],uVar15,(int *)local_res8);
          uVar15 = local_res8[0];
        } while (local_b8[0] != 0xffffffff);
        uVar16 = local_b0._8_8_ & 0xffffffff;
        local_b8[0] = 0xffffffff;
      }
      iVar9 = (int)uVar16 / 2;
      if (0 < iVar9) {
        pFVar17 = local_b0.AllocatorInstance.Data + (longlong)((int)uVar16 + -1) * 4;
        do {
          uVar2 = *(undefined4 *)(local_b0.AllocatorInstance.Data + uVar19 * 4);
          *(undefined4 *)(local_b0.AllocatorInstance.Data + uVar19 * 4) = *(undefined4 *)pFVar17;
          uVar19 = uVar19 + 1;
          *(undefined4 *)pFVar17 = uVar2;
          pFVar17 = pFVar17 + -4;
        } while ((longlong)uVar19 < (longlong)iVar9);
      }
      lVar12 = (longlong)(int)local_98;
      if ((int)local_98 != 0) {
        iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,(int)local_98,&local_b0.AllocatorInstance,&local_b0.ArrayNum,
                           &local_b0.ArrayMax);
        memcpy(local_b0.AllocatorInstance.Data + (longlong)iVar9 * 4,local_a0.Data,lVar12 << 2);
      }
      local_88.Mesh = this->Mesh;
      local_88.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Vertices.ArrayNum = 0;
      local_88.Vertices.ArrayMax = 0;
      local_88.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Edges.ArrayNum = 0;
      local_88.Edges.ArrayMax = 0;
      local_88.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.BowtieVertices.ArrayNum = 0;
      local_88.BowtieVertices.ArrayMax = 0;
      local_88.bBowtiesCalculated = false;
      FEdgeSpan::InitializeFromEdges(&local_88,&local_b0);
      iVar9 = (this->Spans).ArrayNum;
      if (iVar9 == *piVar14) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&(this->Spans).AllocatorInstance,piVar14);
      }
      FVar5.Data = local_88.Vertices.AllocatorInstance.Data;
      (this->Spans).ArrayNum = iVar9 + 1;
      pFVar13 = (this->Spans).AllocatorInstance.Data + (longlong)iVar9 * 0x40;
      *(FDynamicMesh3 **)pFVar13 = local_88.Mesh;
      pFVar17 = pFVar13 + 8;
      *(FScriptContainerElement **)&pFVar17->field_0x0 = (FScriptContainerElement *)0x0;
      lVar12 = (longlong)local_88.Vertices.ArrayNum;
      *(int *)(pFVar13 + 0x10) = local_88.Vertices.ArrayNum;
      if (local_88.Vertices.ArrayNum == 0) {
        *(int *)(pFVar13 + 0x14) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_88.Vertices.ArrayNum,0,(ForAnyElementType *)pFVar17,
                   local_88.Vertices.ArrayNum,(int *)(pFVar13 + 0x14));
        memcpy(*(FScriptContainerElement **)&pFVar17->field_0x0,FVar5.Data,lVar12 << 2);
      }
      FVar5.Data = local_88.Edges.AllocatorInstance.Data;
      *(undefined8 *)(pFVar13 + 0x18) = 0;
      lVar12 = (longlong)local_88.Edges.ArrayNum;
      *(int *)(pFVar13 + 0x20) = local_88.Edges.ArrayNum;
      if (local_88.Edges.ArrayNum == 0) {
        *(int *)(pFVar13 + 0x24) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_88.Edges.ArrayNum,0,(ForAnyElementType *)(pFVar13 + 0x18),
                   local_88.Edges.ArrayNum,(int *)(pFVar13 + 0x24));
        memcpy(*(FScriptContainerElement **)&pFVar13[0x18].field_0x0,FVar5.Data,lVar12 << 2);
      }
      FVar5.Data = local_88.BowtieVertices.AllocatorInstance.Data;
      *(undefined8 *)(pFVar13 + 0x28) = 0;
      lVar12 = (longlong)local_88.BowtieVertices.ArrayNum;
      *(int *)(pFVar13 + 0x30) = local_88.BowtieVertices.ArrayNum;
      if (local_88.BowtieVertices.ArrayNum == 0) {
        *(int *)(pFVar13 + 0x34) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_88.BowtieVertices.ArrayNum,0,(ForAnyElementType *)(pFVar13 + 0x28),
                   local_88.BowtieVertices.ArrayNum,(int *)(pFVar13 + 0x34));
        memcpy(*(FScriptContainerElement **)&pFVar13[0x28].field_0x0,FVar5.Data,lVar12 << 2);
      }
      pFVar13[0x38] = (FScriptContainerElement)local_88.bBowtiesCalculated;
      if (local_88.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.BowtieVertices.AllocatorInstance.Data);
      }
      if (local_88.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Edges.AllocatorInstance.Data);
      }
      if (local_88.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Vertices.AllocatorInstance.Data);
      }
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
    } while (*(int *)&(this->UnvisitedEdges).Elements.field_0x8 !=
             *(int *)&(this->UnvisitedEdges).Elements.field_0x34);
  }
  return true;
}

// GetNextEdge @ 14c73e140

int __thiscall
UE::Geometry::FMeshPaths::GetNextEdge(FMeshPaths *this,int param_1,int param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  FSmallListSet *pFVar12;
  BaseValueIterator local_48;
  
  if (*(int *)&(this->UnvisitedEdges).Elements.field_0x8 !=
      *(int *)&(this->UnvisitedEdges).Elements.field_0x34) {
    FVar11 = (this->UnvisitedEdges).Hash.SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&(this->UnvisitedEdges).Hash;
    }
    iVar5 = *(int *)((longlong)FVar11 +
                    (ulonglong)((this->UnvisitedEdges).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->UnvisitedEdges).Elements;
      do {
        if (*(int *)(lVar1 + (longlong)iVar5 * 0xc) == param_1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnvisitedEdges.Contains(CurrentEdge)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\MeshPaths.cpp"
                             ,10,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 4 + (longlong)iVar5 * 0xc);
      } while (iVar5 != -1);
    }
  }
  uVar2 = *(ulonglong *)
           (*(longlong *)
             ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar8 = 0xffffffff;
  if ((int)uVar2 == param_2) {
    uVar2 = uVar2 >> 0x20;
  }
  iVar5 = (int)uVar2;
  *param_3 = iVar5;
  iVar9 = 0;
  pFVar12 = &this->Mesh->VertexEdgeLists;
  FSmallListSet::BaseValueIterator::BaseValueIterator(&local_48,pFVar12,iVar5,false);
LAB_14c73e240:
  if ((((local_48.ListSet == pFVar12) && (local_48.ListIndex == iVar5)) && (local_48.iCur == -1)) &&
     (local_48.cur_ptr == -1)) {
    iVar5 = -1;
    if (iVar9 == 1) {
      iVar5 = (int)uVar8;
    }
    return iVar5;
  }
  iVar10 = local_48.cur_value;
  if ((iVar10 != param_1) &&
     (*(int *)&(this->Edges).Elements.field_0x8 != *(int *)&(this->Edges).Elements.field_0x34)) {
    FVar11 = (this->Edges).Hash.SecondaryData;
    FVar7 = (ForElementType<FSetElementId>)&(this->Edges).Hash;
    if (FVar11 != (ForElementType<FSetElementId>)0x0) {
      FVar7 = FVar11;
    }
    iVar6 = *(int *)((longlong)FVar7 +
                    ((ulonglong)((this->Edges).HashSize - 1) & local_48._32_8_ & 0xffffffff) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->Edges).Elements;
      do {
        if (*(int *)(lVar1 + (longlong)iVar6 * 0xc) == iVar10) {
          iVar9 = iVar9 + 1;
          if (*(int *)&(this->UnvisitedEdges).Elements.field_0x8 ==
              *(int *)&(this->UnvisitedEdges).Elements.field_0x34) goto LAB_14c73e329;
          FVar11 = (this->UnvisitedEdges).Hash.SecondaryData;
          FVar7 = (ForElementType<FSetElementId>)&(this->UnvisitedEdges).Hash;
          if (FVar11 != (ForElementType<FSetElementId>)0x0) {
            FVar7 = FVar11;
          }
          iVar6 = *(int *)((longlong)FVar7 +
                          ((ulonglong)((this->UnvisitedEdges).HashSize - 1) &
                          local_48._32_8_ & 0xffffffff) * 4);
          if (iVar6 == -1) goto LAB_14c73e329;
          lVar1 = *(longlong *)&(this->UnvisitedEdges).Elements;
          goto LAB_14c73e301;
        }
        iVar6 = *(int *)(lVar1 + 4 + (longlong)iVar6 * 0xc);
      } while (iVar6 != -1);
      FSmallListSet::BaseValueIterator::GotoNext(&local_48);
      goto LAB_14c73e240;
    }
  }
LAB_14c73e329:
  FSmallListSet::BaseValueIterator::GotoNext(&local_48);
  goto LAB_14c73e240;
  while (iVar6 = *(int *)(lVar1 + 4 + (longlong)iVar6 * 0xc), iVar6 != -1) {
LAB_14c73e301:
    if (*(int *)(lVar1 + (longlong)iVar6 * 0xc) == iVar10) {
      uVar8 = local_48._32_8_ & 0xffffffff;
      goto LAB_14c73e329;
    }
  }
  FSmallListSet::BaseValueIterator::GotoNext(&local_48);
  goto LAB_14c73e240;
}

