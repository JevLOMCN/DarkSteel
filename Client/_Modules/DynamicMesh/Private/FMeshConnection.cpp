// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// FMeshConnection @ 14c6df850

FMeshConnection * __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FMeshConnection::FMeshConnection
          (FMeshConnection *this,FDynamicMesh3 *param_1)

{
  (this->OwnedSurfaceMesh).Ptr = (FDynamicMesh3 *)0x0;
  (this->VIDToReferenceEID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VIDToReferenceEID).ArrayNum = 0;
  (this->VIDToReferenceEID).ArrayMax = 0;
  (this->TIDToReferenceEID).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TIDToReferenceEID).ArrayNum = 0;
  (this->TIDToReferenceEID).ArrayMax = 0;
  Reset(this,param_1);
  return this;
}

// Reset @ 14c75e1d0

void __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FMeshConnection::Reset
          (FMeshConnection *this,
          TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
          *param_1)

{
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar1;
  FDynamicMesh3 *pFVar2;
  
  Reset(this,param_1->Ptr);
  pTVar1 = &this->OwnedSurfaceMesh;
  if (pTVar1 != param_1) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = param_1->Ptr;
    param_1->Ptr = (FDynamicMesh3 *)0x0;
    if (pFVar2 != (FDynamicMesh3 *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  this->SurfaceMesh = pTVar1->Ptr;
  return;
}

// Reset @ 14c75e240

void __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FMeshConnection::Reset
          (FMeshConnection *this,FDynamicMesh3 *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  FDynamicMesh3 *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  uint local_a8;
  uint local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  BaseValueIterator local_90;
  BaseValueIterator local_68;
  
  pFVar9 = (this->OwnedSurfaceMesh).Ptr;
  if (pFVar9 != (FDynamicMesh3 *)0x0) {
    (this->OwnedSurfaceMesh).Ptr = (FDynamicMesh3 *)0x0;
    (**(code **)pFVar9->_padding_)(pFVar9,1);
  }
  pTVar1 = &this->VIDToReferenceEID;
  this->SurfaceMesh = param_1;
  piVar6 = &(this->VIDToReferenceEID).ArrayMax;
  (this->VIDToReferenceEID).ArrayNum = 0;
  if ((this->VIDToReferenceEID).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar6);
  }
  pTVar2 = &this->TIDToReferenceEID;
  piVar3 = &(this->TIDToReferenceEID).ArrayMax;
  (this->TIDToReferenceEID).ArrayNum = 0;
  if ((this->TIDToReferenceEID).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar3);
  }
  iVar17 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  iVar18 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar17,&pTVar1->AllocatorInstance,&(this->VIDToReferenceEID).ArrayNum,piVar6);
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar18,&pTVar2->AllocatorInstance,&(this->TIDToReferenceEID).ArrayNum,piVar3);
  uVar19 = 0;
  if (0 < iVar17) {
    lVar20 = 0;
    do {
      if (((-1 < (int)uVar19) &&
          ((int)uVar19 <
           (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 2) - 1U
                  ) < 0xfffe)) {
        bVar13 = FDynamicMesh3::IsBoundaryVertex(param_1,uVar19);
        if ((!bVar13) || (bVar13 = FDynamicMesh3::IsBowtieVertex(param_1,uVar19), bVar13)) {
          FSmallListSet::BaseValueIterator::BaseValueIterator
                    (&local_68,&param_1->VertexEdgeLists,uVar19,false);
          if ((((local_68.ListSet != &param_1->VertexEdgeLists) || (local_68.ListIndex != uVar19))
              || (local_68.iCur != -1)) || (uVar16 = 0xffffffff, local_68.cur_ptr != -1)) {
            uVar16 = local_68.cur_value;
          }
        }
        else {
          FSmallListSet::BaseValueIterator::BaseValueIterator
                    (&local_90,&param_1->VertexEdgeLists,uVar19,false);
          while (((local_90.ListSet != &param_1->VertexEdgeLists || (local_90.ListIndex != uVar19))
                 || ((local_90.iCur != -1 || (uVar16 = 0xffffffff, local_90.cur_ptr != -1))))) {
            pFVar10 = (param_1->Edges).Blocks.AllocatorInstance.Data;
            uVar16 = local_90.cur_value;
            if (*(int *)(*(longlong *)(pFVar10 + ((local_90._32_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                        (ulonglong)(uVar16 & 0x1ff) * 0x10) == -1) {
              uVar15 = *(uint *)(*(longlong *)(pFVar10 + ((local_90._32_8_ & 0xffffffff) >> 9) * 8)
                                 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0x10);
              lVar4 = (ulonglong)(uVar15 >> 9) * 8;
              lVar5 = (ulonglong)(uVar15 & 0x1ff) * 0xc;
              lVar11 = *(longlong *)((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + lVar4)
              ;
              uVar7 = *(undefined8 *)(lVar11 + lVar5);
              local_a8 = (uint)uVar7;
              if (local_a8 == uVar16) {
                iVar14 = 0;
              }
              else if ((uint)((ulonglong)uVar7 >> 0x20) == uVar16) {
                iVar14 = 1;
              }
              else {
                iVar14 = -1;
                if (*(uint *)(lVar11 + 8 + lVar5) == uVar16) {
                  iVar14 = 2;
                }
              }
              lVar4 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + lVar4);
              local_94 = *(undefined4 *)(lVar4 + 8 + lVar5);
              local_9c = *(undefined8 *)(lVar4 + lVar5);
              if (*(uint *)((longlong)&local_9c + (longlong)iVar14 * 4) == uVar19) break;
            }
            FSmallListSet::BaseValueIterator::GotoNext(&local_90);
          }
        }
        uVar15 = 0;
        if ((int)uVar19 < (this->VIDToReferenceEID).ArrayNum) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(uint *)((pTVar1->AllocatorInstance).Data + lVar20 * 4) = uVar16;
      }
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar17);
  }
  uVar19 = 0;
  if (0 < iVar18) {
    lVar20 = 0;
    do {
      if ((-1 < (int)uVar19) &&
         ((int)uVar19 <
          (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        lVar4 = (ulonglong)(uVar19 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + lVar4) + (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uVar8 = *(undefined4 *)
                   (*(longlong *)((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + lVar4) +
                   (ulonglong)(uVar19 & 0x1ff) * 0xc);
          uVar16 = 0;
          if ((int)uVar19 < (this->TIDToReferenceEID).ArrayNum) {
            uVar16 = ~uVar19 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar20 * 4) = uVar8;
        }
      }
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar18);
  }
  return;
}

