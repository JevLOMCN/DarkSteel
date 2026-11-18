// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 12

// FDeformableEdgePath @ 14c6de160

FDeformableEdgePath * __thiscall
UE::Geometry::FDeformableEdgePath::FDeformableEdgePath
          (FDeformableEdgePath *this,FDynamicMesh3 *param_1,
          TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_> *param_2)

{
  TDynamicVector<int,512> *pTVar1;
  TDynamicVector<UE::Geometry::FIndex3i,512> *this_00;
  TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
  *this_01;
  FNormalCoordinates *this_02;
  FEdgePath *this_03;
  TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_04;
  TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512> *this_05;
  TDoubleLinkedListNode *pTVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FDeformableEdgePath *pFVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  FDirectedSegment *pFVar12;
  uint uVar13;
  int iVar14;
  undefined1 local_res8 [8];
  uint local_res18 [2];
  int local_res20 [2];
  int local_58 [2];
  FDirectedSegment *local_50;
  uint *local_48 [2];
  
  this->_padding_ = (longlong)&___7FDeformableEdgePath_Geometry_UE__6B_;
  FSimpleIntrinsicEdgeFlipMesh::FSimpleIntrinsicEdgeFlipMesh
            ((FSimpleIntrinsicEdgeFlipMesh *)&this->EdgeFlipMesh);
  this_02 = &(this->EdgeFlipMesh).NormalCoordinates;
  pTVar1 = &(this->EdgeFlipMesh).NormalCoordinates.NormalCoord;
  this_02->_padding_ = 0;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->EdgeFlipMesh).NormalCoordinates.NormalCoord.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EdgeFlipMesh).NormalCoordinates.NormalCoord.Blocks.ArrayNum = 0;
  (this->EdgeFlipMesh).NormalCoordinates.NormalCoord.Blocks.ArrayMax = 0;
  (this->EdgeFlipMesh).NormalCoordinates._padding_ = 0;
  (this->EdgeFlipMesh).NormalCoordinates._padding_ = 0;
  (this->EdgeFlipMesh).NormalCoordinates._padding_ = 0;
  (this->EdgeFlipMesh).NormalCoordinates._padding_ = 0;
  (this->EdgeFlipMesh).NormalCoordinates._padding_ = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  this_00 = &(this->EdgeFlipMesh).NormalCoordinates.RoundaboutOrder;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->EdgeFlipMesh).NormalCoordinates.RoundaboutOrder.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EdgeFlipMesh).NormalCoordinates.RoundaboutOrder.Blocks.ArrayNum = 0;
  (this->EdgeFlipMesh).NormalCoordinates.RoundaboutOrder.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(this_00);
  (this->EdgeFlipMesh).NormalCoordinates.RefVertDegree.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EdgeFlipMesh).NormalCoordinates.RefVertDegree.ArrayNum = 0;
  (this->EdgeFlipMesh).NormalCoordinates.RefVertDegree.ArrayMax = 0;
  (this->EdgeFlipMesh).NormalCoordinates.EdgeOrder.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EdgeFlipMesh).NormalCoordinates.EdgeOrder.ArrayNum = 0;
  (this->EdgeFlipMesh).NormalCoordinates.EdgeOrder.ArrayMax = 0;
  FSimpleIntrinsicEdgeFlipMesh::Reset((FSimpleIntrinsicEdgeFlipMesh *)&this->EdgeFlipMesh,param_1);
  IntrinsicCorrespondenceUtils::FMeshConnection::Reset((FMeshConnection *)this_02,param_1);
  IntrinsicCorrespondenceUtils::FNormalCoordinates::RebuildNormalCoordinates(this_02,param_1);
  this->PathLength = 0.0;
  this_03 = &this->EdgePath;
  this_01 = &(this->EdgePath).SIDtoNode;
  this->NumFlips = 0;
  this_01->CurBlock = 0;
  this_01->CurBlockUsed = 0;
  (this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgePath).SIDtoNode.Blocks.ArrayNum = 0;
  (this->EdgePath).SIDtoNode.Blocks.ArrayMax = 0;
  (this_03->PathLinkList)._padding_ =
       (longlong)&___7__TDoubleLinkedList_UFSegmentAndSID_FEdgePath_Geometry_UE____6B_;
  (this->EdgePath).PathLinkList.HeadNode = (TDoubleLinkedListNode *)0x0;
  (this->EdgePath).PathLinkList.TailNode = (TDoubleLinkedListNode *)0x0;
  (this->EdgePath).PathLinkList.ListSize = 0;
  TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
  ::AddAllocatedBlock(this_01);
  (this->EdgePath).DirectedSegmentRefCounts.FreeIndices.CurBlock = 0;
  (this->EdgePath).DirectedSegmentRefCounts.FreeIndices.CurBlockUsed = 0;
  (this->EdgePath).DirectedSegmentRefCounts.FreeIndices.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EdgePath).DirectedSegmentRefCounts.FreeIndices.Blocks.ArrayNum = 0;
  (this->EdgePath).DirectedSegmentRefCounts.FreeIndices.Blocks.ArrayMax = 0;
  *(undefined8 *)&(this->EdgePath).DirectedSegmentRefCounts.UsedCount = 0;
  (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock = 0;
  (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed = 0;
  (this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks.ArrayNum = 0;
  (this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock
            (&(this->EdgePath).DirectedSegmentRefCounts.RefCounts);
  pTVar1 = &(this->EdgePath).DirectedSegmentRefCounts.FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->EdgePath).DirectedSegmentRefCounts.FreeIndices.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EdgePath).DirectedSegmentRefCounts.FreeIndices.Blocks.ArrayNum = 0;
  (this->EdgePath).DirectedSegmentRefCounts.FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  (this->EdgePath).DirectedSegmentRefCounts.UsedCount = 0;
  this_04 = &this->EIDToSIDsMap;
  *(undefined8 *)&this_04->field_0x0 = 0;
  this_05 = &this->PathJoints;
  *(undefined8 *)&(this->EIDToSIDsMap).field_0x8 = 0;
  *(undefined8 *)&(this->EIDToSIDsMap).field_0x20 = 0;
  *(undefined4 *)&(this->EIDToSIDsMap).field_0x28 = 0;
  *(undefined4 *)&(this->EIDToSIDsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EIDToSIDsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EIDToSIDsMap).field_0x34 = 0;
  *(undefined8 *)&(this->EIDToSIDsMap).field_0x40 = 0;
  *(undefined4 *)&(this->EIDToSIDsMap).field_0x48 = 0;
  this_05->CurBlock = 0;
  this_05->CurBlockUsed = 0;
  (this->PathJoints).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathJoints).Blocks.ArrayNum = 0;
  (this->PathJoints).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::AddAllocatedBlock(this_05);
  (this->JointAngleQueue).HeapNum = 0;
  (this->JointAngleQueue).HeapSize = 0;
  (this->JointAngleQueue).IndexSize = 0;
  (this->JointAngleQueue).Heap = (uint *)0x0;
  (this->JointAngleQueue).Keys = (double *)0x0;
  (this->JointAngleQueue).HeapIndexes = (uint *)0x0;
  pFVar12 = (FDirectedSegment *)(param_2->AllocatorInstance).Data;
  iVar14 = param_2->ArrayNum;
  local_50 = pFVar12 + iVar14;
  do {
    while( true ) {
      while( true ) {
        if (param_2->ArrayNum != iVar14) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::FEdgePath::FDirectedSegment_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar12 == local_50) {
          if ((this->EdgePath).PathLinkList.ListSize != 0) {
            uVar6 = (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed;
            pTVar2 = (this->EdgePath).PathLinkList.HeadNode;
            iVar14 = (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock * 0x200;
            if (pTVar2 == (TDoubleLinkedListNode *)0x0) {
              uVar13 = 0xffffffff;
            }
            else {
              uVar13 = (pTVar2->Value).SID;
            }
            for (; (int)uVar13 < (int)(uVar6 + iVar14); uVar13 = uVar13 + 1) {
              if ((-1 < (int)uVar13) &&
                 ((int)uVar13 <
                  (int)((this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed + iVar14)))
              {
                uVar11 = (ulonglong)(uVar13 & 0x1ff);
                if ((ushort)(*(short *)(*(longlong *)
                                         ((this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks
                                          .AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8) +
                                       uVar11 * 2) - 1U) < 0xfffe) {
                  if (((int)uVar13 <
                       (int)((this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed +
                            iVar14)) &&
                     ((ushort)(*(short *)(*(longlong *)
                                           ((this->EdgePath).DirectedSegmentRefCounts.RefCounts.
                                            Blocks.AllocatorInstance.Data +
                                           (ulonglong)(uVar13 >> 9) * 8) + uVar11 * 2) - 1U) <
                      0xfffe)) {
                    uVar8 = **(uint **)(*(longlong *)
                                         ((this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data +
                                         (ulonglong)(uVar13 >> 9) * 8) + uVar11 * 8);
                  }
                  else {
                    uVar8 = 0xffffffff;
                  }
                  this->PathLength =
                       *(double *)
                        (*(longlong *)((this->EdgeFlipMesh)._padding_ + (ulonglong)(uVar8 >> 9) * 8)
                        + (ulonglong)(uVar8 & 0x1ff) * 8) + this->PathLength;
                }
              }
            }
          }
          return this;
        }
        local_res18[0] = pFVar12->EID;
        if (((-1 < (int)local_res18[0]) &&
            ((int)local_res18[0] <
             (int)(this->EdgeFlipMesh)._padding_ * 0x200 +
             *(int *)((longlong)&(this->EdgeFlipMesh)._padding_ + 4))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((this->EdgeFlipMesh)._padding_ +
                                 (ulonglong)(local_res18[0] >> 9) * 8) +
                               (ulonglong)(local_res18[0] & 0x1ff) * 2) - 1U) < 0xfffe)) break;
        pFVar12 = pFVar12 + 1;
      }
      pTVar2 = (this->EdgePath).PathLinkList.TailNode;
      if (((pTVar2 != (TDoubleLinkedListNode *)0x0) &&
          (uVar6 = (pTVar2->Value).SID, -1 < (int)uVar6)) &&
         ((int)uVar6 <
          (int)((this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock * 0x200 +
               (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed))) break;
LAB_14c6de42f:
      local_58[0] = FEdgePath::AppendSegment(this_03,pFVar12);
      if (*(int *)&(this->EIDToSIDsMap).field_0x8 != *(int *)&(this->EIDToSIDsMap).field_0x34) {
        puVar3 = *(undefined1 **)&(this->EIDToSIDsMap).field_0x40;
        puVar10 = &(this->EIDToSIDsMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar10 = puVar3;
        }
        uVar6 = *(uint *)(puVar10 +
                         (ulonglong)(*(int *)&(this->EIDToSIDsMap).field_0x48 - 1U & local_res18[0])
                         * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar9 = (uint *)((longlong)(int)uVar6 * 0x20 + *(longlong *)&this_04->field_0x0);
            if (*puVar9 == local_res18[0]) {
              if (puVar9 != (uint *)0x0) goto LAB_14c6de4d8;
              break;
            }
            uVar6 = puVar9[6];
          } while (uVar6 != 0xffffffff);
        }
      }
      local_48[0] = local_res18;
      TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)this_04,(uint)local_res20,
                 (TKeyInitializer<int_const_&> *)(ulonglong)local_res18[0],(bool *)local_48);
      puVar9 = (uint *)((longlong)local_res20[0] * 0x20 + *(longlong *)&this_04->field_0x0);
LAB_14c6de4d8:
      if (((*(int **)(puVar9 + 2) <= local_58) &&
          (local_58 < *(int **)(puVar9 + 2) + (int)puVar9[5])) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FDeformableEdgePath *)(*pcVar4)();
        return pFVar7;
      }
      uVar6 = puVar9[4];
      if (uVar6 == puVar9[5]) {
        uVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(puVar9 + 2),(int *)(puVar9 + 5));
      }
      puVar9[4] = uVar6 + 1;
      *(int *)(((ForAnyElementType *)(puVar9 + 2))->Data + (longlong)(int)uVar6 * 4) = local_58[0];
      UpdateJointAndQueue(this,local_58[0]);
      pFVar12 = pFVar12 + 1;
    }
    if (((0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
                                      (ulonglong)(uVar6 & 0x1ff) * 2) - 1U)) ||
        (puVar9 = *(uint **)(*(longlong *)
                              ((this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 8),
        *puVar9 != local_res18[0])) || (puVar9[1] == pFVar12->HeadIndex)) goto LAB_14c6de42f;
    FEdgePath::RemoveSegment(this_03,uVar6);
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// ~FDeformableEdgePath @ 14c6e1210

void __thiscall UE::Geometry::FDeformableEdgePath::~FDeformableEdgePath(FDeformableEdgePath *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FDeformableEdgePath_Geometry_UE__6B_;
  operator_delete__((this->JointAngleQueue).Heap);
  operator_delete__((this->JointAngleQueue).Keys);
  operator_delete__((this->JointAngleQueue).HeapIndexes);
  (this->JointAngleQueue).HeapNum = 0;
  (this->JointAngleQueue).HeapSize = 0;
  (this->JointAngleQueue).IndexSize = 0;
  (this->JointAngleQueue).Heap = (uint *)0x0;
  (this->JointAngleQueue).Keys = (double *)0x0;
  (this->JointAngleQueue).HeapIndexes = (uint *)0x0;
  TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::
  ~TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>(&this->PathJoints);
  *(undefined4 *)&(this->EIDToSIDsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EIDToSIDsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EIDToSIDsMap);
  FEdgePath::~FEdgePath(&this->EdgePath);
  IntrinsicCorrespondenceUtils::FNormalCoordinates::~FNormalCoordinates
            (&(this->EdgeFlipMesh).NormalCoordinates);
  FSimpleIntrinsicEdgeFlipMesh::~FSimpleIntrinsicEdgeFlipMesh
            ((FSimpleIntrinsicEdgeFlipMesh *)&this->EdgeFlipMesh);
  return;
}

// AsSurfacePoints @ 14c714f20

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::FDeformableEdgePath::AsSurfacePoints
          (FDeformableEdgePath *this,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,double param_1)

{
  TDoubleLinkedListNode *pTVar1;
  code *pcVar2;
  FIntrinsicEdgeFlipMesh *pFVar3;
  FDynamicMesh3 *pFVar4;
  ForAnyElementType _Src;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  <lambda_1> local_res20;
  ForAnyElementType local_88;
  undefined8 local_80;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_78;
  TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh> local_68;
  
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if ((this->EdgePath).PathLinkList.ListSize == 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    local_68.SurfaceEdgesCrossed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.SurfaceEdgesCrossed.ArrayNum = 0;
    local_68.SurfaceEdgesCrossed.ArrayMax = 0;
    TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::Setup(&local_68,&this->EdgeFlipMesh);
    pTVar1 = (this->EdgePath).PathLinkList.HeadNode;
    if (pTVar1 != (TDoubleLinkedListNode *)0x0) {
      uVar6 = (pTVar1->Value).SID;
      pFVar3 = local_68.IntrinsicMesh;
      pFVar4 = local_68.SurfaceMesh;
      while (uVar6 != 0xffffffff) {
        if (((int)uVar6 < 0) ||
           ((int)((this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock * 0x200 +
                 (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed) <= (int)uVar6)) {
LAB_14c715036:
          uVar14 = (ulonglong)(uVar6 & 0x1ff);
          uVar15 = (ulonglong)(uVar6 >> 9);
          uVar13 = (ulonglong)(uVar6 >> 9);
          uVar16 = 0xffffffff;
          if (-1 < (int)uVar6) goto LAB_14c715069;
LAB_14c7150bc:
          lVar11 = uVar13 * 8;
          iVar7 = -1;
          uVar10 = 0xffffffff;
          uVar12 = 0xffffffff;
          if (-1 < (int)uVar6) goto LAB_14c7150d5;
        }
        else {
          uVar13 = (ulonglong)(uVar6 >> 9);
          uVar14 = (ulonglong)(uVar6 & 0x1ff);
          if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            ((this->EdgePath).DirectedSegmentRefCounts.RefCounts.
                                             Blocks.AllocatorInstance.Data + uVar13 * 8) +
                                          uVar14 * 2) - 1U)) goto LAB_14c715036;
          uVar15 = (ulonglong)(uVar6 >> 9);
          lVar11 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        ((this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data + uVar13 * 8) +
                      uVar14 * 8) + 0x10);
          if (lVar11 == 0) {
            uVar16 = 0xffffffff;
          }
          else {
            uVar16 = *(uint *)(lVar11 + 8);
          }
LAB_14c715069:
          if (((int)((this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock * 0x200 +
                    (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed) <= (int)uVar6)
             || (lVar11 = uVar15 * 8,
                0xfffd < (ushort)(*(short *)(*(longlong *)
                                              ((this->EdgePath).DirectedSegmentRefCounts.RefCounts.
                                               Blocks.AllocatorInstance.Data + lVar11) + uVar14 * 2)
                                 - 1U))) goto LAB_14c7150bc;
          uVar12 = **(uint **)(*(longlong *)
                                ((this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data + lVar11)
                              + (ulonglong)(uVar6 & 0x1ff) * 8);
LAB_14c7150d5:
          iVar7 = -1;
          uVar10 = uVar12;
          if (((int)uVar6 <
               (int)((this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock * 0x200 +
                    (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed)) &&
             ((ushort)(*(short *)(*(longlong *)
                                   ((this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks.
                                    AllocatorInstance.Data + lVar11) +
                                 (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            iVar7 = *(int *)(*(longlong *)
                              (*(longlong *)
                                ((this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data + lVar11)
                              + (ulonglong)(uVar6 & 0x1ff) * 8) + 4);
          }
        }
        uVar6 = 0;
        if ((int)uVar10 < local_68.SurfaceEdgesCrossed.ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        local_68.IntrinsicMesh = pFVar3;
        local_68.SurfaceMesh = pFVar4;
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                    *)(*pcVar2)();
          return pTVar9;
        }
        FNormalCoordSurfaceTraceImpl::
        TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge_::__l2::<lambda_1>_>
                  (&local_78,uVar10,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)
                   (local_68.SurfaceEdgesCrossed.AllocatorInstance.Data +
                   (longlong)(int)uVar10 * 0x10),pFVar4,pFVar3,param_1,iVar7 == 0,&local_res20);
        _Src.Data = local_78.AllocatorInstance.Data;
        lVar11 = (longlong)local_78.ArrayNum;
        if (local_78.ArrayNum != 0) {
          iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x28,8,local_78.ArrayNum,&local_88,(int *)&local_80,
                             (int *)((longlong)&local_80 + 4));
          memmove(local_88.Data + (longlong)iVar7 * 0x28,_Src.Data,lVar11 * 0x28);
          local_78.ArrayNum = 0;
        }
        if (uVar16 != 0xffffffff) {
          if ((int)local_80 < 1) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              pTVar9 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar9;
            }
          }
          iVar8 = ((int)local_80 - ((int)local_80 + -1)) + -1;
          iVar7 = (int)local_80;
          if (iVar8 != 0) {
            memmove(local_88.Data + (longlong)((int)local_80 + -1) * 0x28,
                    local_88.Data + (longlong)((int)local_80 + -1) * 0x28 + 0x28,
                    (longlong)iVar8 * 0x28);
            iVar7 = (int)local_80;
          }
          local_80 = CONCAT44(local_80._4_4_,iVar7 + -1);
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&local_88,iVar7 + -1,(int *)((longlong)&local_80 + 4));
        }
        uVar6 = uVar16;
        pFVar3 = local_68.IntrinsicMesh;
        pFVar4 = local_68.SurfaceMesh;
        if (_Src.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(_Src.Data);
          pFVar3 = local_68.IntrinsicMesh;
          pFVar4 = local_68.SurfaceMesh;
        }
      }
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_88.Data;
    __return_storage_ptr__->ArrayNum = (int)local_80;
    __return_storage_ptr__->ArrayMax = local_80._4_4_;
    local_80 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_68.SurfaceEdgesCrossed.AllocatorInstance.Data,
               local_68.SurfaceEdgesCrossed.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)
        local_68.SurfaceEdgesCrossed.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_68.SurfaceEdgesCrossed.AllocatorInstance.Data);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return __return_storage_ptr__;
}

// ComputeWedgeAngles @ 14c725000

void __thiscall
UE::Geometry::FDeformableEdgePath::ComputeWedgeAngles
          (FDeformableEdgePath *this,int param_1,int param_2,int param_3,double *param_4,
          double *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  double dVar4;
  double local_res8;
  <lambda_1> local_48 [3];
  
  local_res8 = 0.0;
  local_48[0].WedgeAngle = &local_res8;
  local_48[0].__this = this;
  bVar1 = VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FDeformableEdgePath::ComputeWedgeAngles_::__l2::<lambda_1>_>
                    (&this->EdgeFlipMesh,param_2,param_1,param_3,local_48,false);
  uVar3 = SUB84(local_res8,0);
  uVar5 = (undefined4)((ulonglong)local_res8 >> 0x20);
  local_res8 = 0.0;
  bVar2 = VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FDeformableEdgePath::ComputeWedgeAngles_::__l2::<lambda_1>_>
                    (&this->EdgeFlipMesh,param_1,param_2,param_3,local_48,false);
  dVar4 = __real_7fefffffffffffff;
  if (!bVar1) {
    uVar3 = SUB84(__real_7fefffffffffffff,0);
    uVar5 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  }
  *param_4 = (double)CONCAT44(uVar5,uVar3);
  if (bVar2) {
    dVar4 = local_res8;
  }
  *param_5 = dVar4;
  return;
}

// DeformJoint @ 14c72a540

void __thiscall
UE::Geometry::FDeformableEdgePath::DeformJoint(FDeformableEdgePath *this,FPathJoint *param_1)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  FPathJoint local_28;
  TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_> local_18;
  
  uVar1 = param_1->OutgoingSID;
  if ((int)uVar1 < 0) {
    return;
  }
  if ((int)((this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock * 0x200 +
           (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed) <= (int)uVar1) {
    return;
  }
  uVar8 = (ulonglong)(uVar1 >> 9);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks.
                                     AllocatorInstance.Data + uVar8 * 8) +
                                  (ulonglong)(uVar1 & 0x1ff) * 2) - 1U)) {
    return;
  }
  pFVar3 = (this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data;
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(pFVar3 + uVar8 * 8) + (ulonglong)(uVar1 & 0x1ff) * 8) + 0x18
           );
  if (lVar4 == 0) {
    return;
  }
  uVar2 = *(uint *)(lVar4 + 8);
  if ((int)uVar2 < 0) {
    return;
  }
  if (param_1->VID == -1) {
    return;
  }
  if ((int)uVar2 <
      (int)((this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock * 0x200 +
           (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed)) {
    lVar4 = (ulonglong)(uVar2 >> 9) * 8;
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks.
                                       AllocatorInstance.Data + lVar4) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U)) goto LAB_14c72a644;
    iVar7 = **(int **)(*(longlong *)(pFVar3 + lVar4) + (ulonglong)(uVar2 & 0x1ff) * 8);
  }
  else {
LAB_14c72a644:
    iVar7 = -1;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (param_1->InteriorSide == Left) {
    bVar6 = true;
  }
  else {
    if (param_1->InteriorSide != Right) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GeodesicPath.cpp"
                         ,0x148,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14c72a6bd;
    }
    bVar6 = false;
  }
  DeformJoint(this,iVar7,
              **(int **)(*(longlong *)(pFVar3 + uVar8 * 8) + (ulonglong)(uVar1 & 0x1ff) * 8),
              param_1->VID,&local_18,bVar6);
LAB_14c72a6bd:
  local_28.OutgoingSID = param_1->OutgoingSID;
  local_28.InteriorSide = param_1->InteriorSide;
  local_28.VID = param_1->VID;
  ReplaceJointWithPath(this,&local_28,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// DeformJoint @ 14c72a710

bool __thiscall
UE::Geometry::FDeformableEdgePath::DeformJoint
          (FDeformableEdgePath *this,int param_1,int param_2,int param_3,
          TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_> *param_4,
          bool param_5)

{
  bool bVar1;
  bool bVar2;
  <lambda_1> local_28;
  
  bVar1 = OuterArcFlipEdges(this,param_1,param_2,param_3,param_5);
  bVar2 = false;
  if (bVar1) {
    local_28.HeadOffset = (param_5 ^ 1) + 1;
    local_28.bClockwise = param_5;
    local_28.DeformedPath = param_4;
    local_28.__this = this;
    local_28.JointVID = param_3;
    bVar2 = VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FDeformableEdgePath::DeformJoint_::__l5::<lambda_1>_>
                      (&this->EdgeFlipMesh,param_1,param_2,param_3,&local_28,param_5);
  }
  return bVar2;
}

// IsJointFlexible @ 14c750d90

bool __thiscall
UE::Geometry::FDeformableEdgePath::IsJointFlexible(FDeformableEdgePath *this,FPathJoint *param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar10;
  ulonglong uVar11;
  bool local_res8 [8];
  <lambda_1> local_48;
  
  uVar3 = param_1->OutgoingSID;
  local_48.EndEID = 0xffffffff;
  if ((-1 < (int)uVar3) &&
     ((int)uVar3 <
      (int)((this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock * 0x200 +
           (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed))) {
    uVar11 = (ulonglong)(uVar3 >> 9);
    uVar6 = (ulonglong)(uVar3 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks.
                              AllocatorInstance.Data + uVar11 * 8) + uVar6 * 2) - 1U) < 0xfffe) {
      lVar1 = *(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   ((this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data + uVar11 * 8) +
                 uVar6 * 8) + 0x18);
      if (lVar1 == 0) {
        return false;
      }
      uVar8 = *(uint *)(lVar1 + 8);
      goto LAB_14c750e3b;
    }
  }
  uVar11 = (ulonglong)(uVar3 >> 9);
  uVar6 = (ulonglong)(uVar3 & 0x1ff);
  uVar8 = 0xffffffff;
  if ((int)uVar3 < 0) {
    return false;
  }
LAB_14c750e3b:
  pTVar10 = &(this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks;
  if (-1 < (int)uVar8) {
    iVar9 = (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock * 0x200 +
            (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed;
    local_res8[0] = false;
    if (((int)uVar3 < iVar9) &&
       ((ushort)(*(short *)(*(longlong *)((pTVar10->AllocatorInstance).Data + uVar11 * 8) +
                           uVar6 * 2) - 1U) < 0xfffe)) {
      local_48.StartEID =
           **(uint **)(*(longlong *)
                        ((this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data + uVar11 * 8) +
                      uVar6 * 8);
    }
    else {
      local_48.StartEID = 0xffffffff;
    }
    if ((int)uVar8 < iVar9) {
      lVar1 = (ulonglong)(uVar8 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)((pTVar10->AllocatorInstance).Data + lVar1) +
                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe) {
        local_48.EndEID =
             **(uint **)(*(longlong *)
                          ((this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data + lVar1) +
                        (ulonglong)(uVar8 & 0x1ff) * 8);
      }
    }
    local_48.bIsBlocked = local_res8;
    if (*(int *)&(this->EIDToSIDsMap).field_0x8 != *(int *)&(this->EIDToSIDsMap).field_0x34) {
      puVar7 = *(undefined1 **)&(this->EIDToSIDsMap).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->EIDToSIDsMap).field_0x38;
      }
      uVar3 = *(uint *)(puVar7 + (ulonglong)
                                 (*(int *)&(this->EIDToSIDsMap).field_0x48 - 1U & local_48.StartEID)
                                 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->EIDToSIDsMap);
          if (*puVar5 == local_48.StartEID) {
            puVar4 = puVar5 + 2;
            if (puVar5 == (uint *)0x0) {
              puVar4 = (uint *)0x0;
            }
            if (puVar4 != (uint *)0x0) {
              local_res8[0] = 1 < (int)puVar4[2];
            }
            break;
          }
          uVar3 = puVar5[6];
        } while (uVar3 != 0xffffffff);
      }
      puVar7 = *(undefined1 **)&(this->EIDToSIDsMap).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->EIDToSIDsMap).field_0x38;
      }
      uVar3 = *(uint *)(puVar7 + (ulonglong)
                                 (*(int *)&(this->EIDToSIDsMap).field_0x48 - 1U & local_48.EndEID) *
                                 4);
      if (uVar3 != 0xffffffff) {
        do {
          puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->EIDToSIDsMap);
          if (*puVar5 == local_48.EndEID) {
            puVar4 = puVar5 + 2;
            if (puVar5 == (uint *)0x0) {
              puVar4 = (uint *)0x0;
            }
            if (puVar4 != (uint *)0x0) {
              if ((local_res8[0]) || (1 < (int)puVar4[2])) {
                local_res8[0] = true;
              }
              else {
                local_res8[0] = false;
              }
            }
            break;
          }
          uVar3 = puVar5[6];
        } while (uVar3 != 0xffffffff);
      }
    }
    local_48.__this = this;
    bVar2 = VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FDeformableEdgePath::IsJointFlexible_::__l2::<lambda_1>_>
                      (&this->EdgeFlipMesh,local_48.StartEID,local_48.EndEID,param_1->VID,&local_48,
                       param_1->InteriorSide == Right);
    if ((bVar2) && (local_res8[0] == false)) {
      return true;
    }
  }
  return false;
}

// Minimize @ 14c752190

void __thiscall
UE::Geometry::FDeformableEdgePath::Minimize
          (FDeformableEdgePath *this,FEdgePathDeformationInfo *param_1,int param_2)

{
  FPathJoint *pFVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  
  param_1->NumIterations = 0;
  param_1->NumEdgeFlips = 0;
  param_1->OriginalLength = 0.0;
  param_1->FinalLength = 0.0;
  iVar8 = 0;
  param_1->OriginalLength = this->PathLength;
  dVar6 = __real_40091fef0a89cee3;
  uVar3 = (this->JointAngleQueue).HeapNum;
  while ((uVar3 != 0 && (iVar8 < param_2))) {
    puVar5 = (this->JointAngleQueue).Heap;
    uVar4 = *puVar5;
    dVar2 = (this->JointAngleQueue).Keys[uVar4];
    (this->JointAngleQueue).HeapNum = uVar3 - 1;
    *puVar5 = puVar5[uVar3 - 1];
    (this->JointAngleQueue).HeapIndexes[*(this->JointAngleQueue).Heap] = 0;
    (this->JointAngleQueue).HeapIndexes[uVar4] = 0xffffffff;
    FBinaryHeap<double,unsigned_int>::DownHeap(&this->JointAngleQueue,0);
    if (dVar2 <= dVar6) {
      pFVar1 = (FPathJoint *)
               (*(longlong *)
                 ((this->PathJoints).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
               (ulonglong)(uVar4 & 0x1ff) * 0xc);
      bVar7 = IsJointFlexible(this,pFVar1);
      if (bVar7) {
        DeformJoint(this,pFVar1);
        iVar8 = iVar8 + 1;
      }
    }
    uVar3 = (this->JointAngleQueue).HeapNum;
  }
  param_1->NumIterations = iVar8;
  param_1->NumEdgeFlips = this->NumFlips;
  param_1->FinalLength = this->PathLength;
  return;
}

// OuterArcFlipEdges @ 14c754ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FDeformableEdgePath::OuterArcFlipEdges
          (FDeformableEdgePath *this,int param_1,int param_2,int param_3,bool param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  EMeshResult EVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined8 local_88;
  uint local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  FEdgeFlipInfo local_68;
  
  uVar6 = _UNK_15060db28;
  uVar5 = ___xmm_ffffffffffffffffffffffffffffffff;
  lVar3 = (this->EdgeFlipMesh)._padding_;
  uVar12 = *(ulonglong *)
            (*(longlong *)((this->EdgeFlipMesh)._padding_ + (ulonglong)((uint)param_1 >> 9) * 8) + 8
            + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar15 = uVar12 & 0xffffffff;
  lVar1 = ((uVar12 & 0xffffffff) >> 9) * 8;
  lVar2 = (ulonglong)((uint)uVar12 & 0x1ff) * 0xc;
  lVar4 = *(longlong *)(lVar3 + lVar1);
  local_88 = *(undefined8 *)(lVar4 + lVar2);
  local_80 = *(uint *)(lVar4 + 8 + lVar2);
  uVar7 = local_88;
  if ((uint)local_88 == param_1) {
    iVar13 = 0;
  }
  else if ((int)((ulonglong)local_88 >> 0x20) == param_1) {
    iVar13 = 1;
  }
  else {
    iVar13 = -1;
    if (local_80 == param_1) {
      iVar13 = 2;
    }
  }
  lVar1 = *(longlong *)((this->EdgeFlipMesh)._padding_ + lVar1);
  local_78 = *(undefined8 *)(lVar1 + lVar2);
  local_70 = *(undefined4 *)(lVar1 + 8 + lVar2);
  local_88 = uVar7;
  if (param_4) {
    if (*(int *)((longlong)&local_78 + (longlong)iVar13 * 4) != param_3) goto LAB_14c754c32;
  }
  else if (*(int *)((longlong)&local_78 + (longlong)iVar13 * 4) == param_3) goto LAB_14c754c32;
  uVar15 = uVar12 >> 0x20;
  uVar8 = (uint)(uVar12 >> 0x20);
  if (uVar8 == 0xffffffff) {
    return false;
  }
  uVar11 = (ulonglong)(uVar8 & 0x1ff);
  lVar1 = *(longlong *)(lVar3 + (uVar12 >> 0x29) * 8);
  local_88 = *(undefined8 *)(lVar1 + uVar11 * 0xc);
  local_80 = *(uint *)(lVar1 + 8 + uVar11 * 0xc);
  uVar7 = local_88;
  if ((uint)local_88 == param_1) {
    iVar13 = 0;
    local_88 = uVar7;
  }
  else if ((int)((ulonglong)local_88 >> 0x20) == param_1) {
    iVar13 = 1;
    local_88 = uVar7;
  }
  else {
    iVar13 = -1;
    local_88 = uVar7;
    if (local_80 == param_1) {
      iVar13 = 2;
    }
  }
LAB_14c754c32:
  iVar9 = (param_4 ^ 1) + 1;
  iVar13 = iVar9 + iVar13;
  uVar8 = *(uint *)((longlong)&local_88 +
                   (longlong)
                   (iVar13 + (iVar13 / 3 + (iVar13 >> 0x1f) +
                             (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -3) * 4);
  do {
    uVar14 = uVar8;
    if (uVar14 == param_2) {
      return true;
    }
    iVar13 = (int)uVar15;
    uVar12 = *(ulonglong *)
              (*(longlong *)((this->EdgeFlipMesh)._padding_ + (ulonglong)(uVar14 >> 9) * 8) + 8 +
              (ulonglong)(uVar14 & 0x1ff) * 0x10);
    if ((param_4) && (uVar15 = uVar12 >> 0x20, iVar13 == (int)(uVar12 >> 0x20))) {
      uVar15 = uVar12 & 0xffffffff;
    }
    local_68._20_8_ = 0xffffffffffffffff;
    local_68.bHadSameOrientations = true;
    local_68._4_8_ = uVar5;
    local_68._12_8_ = uVar6;
    EVar10 = FIntrinsicEdgeFlipMesh::FlipEdge(&this->EdgeFlipMesh,uVar14,&local_68);
    if (EVar10 == Failed_IsBoundaryEdge) {
      return false;
    }
    if (EVar10 == Ok) {
      this->NumFlips = this->NumFlips + 1;
      uVar12 = (ulonglong)((uint)uVar15 & 0x1ff);
      lVar1 = *(longlong *)((this->EdgeFlipMesh)._padding_ + (uVar15 >> 9) * 8);
      local_88 = *(undefined8 *)(lVar1 + uVar12 * 0xc);
      local_80 = *(uint *)(lVar1 + 8 + uVar12 * 0xc);
      uVar7 = local_88;
      uVar14 = param_1;
      if ((uint)local_88 == param_1) {
        iVar13 = 0;
        local_88 = uVar7;
      }
      else if ((uint)((ulonglong)local_88 >> 0x20) == param_1) {
        iVar13 = 1;
        local_88 = uVar7;
      }
      else {
        bVar16 = local_80 == param_1;
        local_88 = uVar7;
LAB_14c754d9d:
        iVar13 = -1;
        if (bVar16) {
          iVar13 = 2;
        }
      }
    }
    else {
      if ((int)uVar12 == iVar13) {
        uVar12 = uVar12 >> 0x20;
      }
      uVar15 = uVar12 & 0xffffffff;
      uVar12 = (ulonglong)((uint)uVar12 & 0x1ff);
      lVar1 = *(longlong *)((this->EdgeFlipMesh)._padding_ + (uVar15 >> 9) * 8);
      local_88 = *(undefined8 *)(lVar1 + uVar12 * 0xc);
      local_80 = *(uint *)(lVar1 + 8 + uVar12 * 0xc);
      uVar7 = local_88;
      if ((uint)local_88 == uVar14) {
        iVar13 = 0;
        local_88 = uVar7;
      }
      else {
        if ((uint)((ulonglong)local_88 >> 0x20) != uVar14) {
          bVar16 = local_80 == uVar14;
          local_88 = uVar7;
          goto LAB_14c754d9d;
        }
        iVar13 = 1;
        local_88 = uVar7;
      }
    }
    iVar13 = iVar9 + iVar13;
    uVar8 = *(uint *)((longlong)&local_88 +
                     (longlong)
                     (iVar13 + (iVar13 / 3 + (iVar13 >> 0x1f) +
                               (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) &
                                     0xffffffffU) >> 0x1f)) * -3) * 4);
    param_1 = uVar14;
  } while( true );
}

// RemoveSegment @ 14c75d620

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDeformableEdgePath::RemoveSegment(FDeformableEdgePath *this,int param_1)

{
  FBinaryHeap<double,unsigned_int> *this_00;
  double dVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  int local_res10 [2];
  uint local_res18 [4];
  
  if (param_1 < 0) {
    return;
  }
  if (param_1 < (int)((this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock * 0x200 +
                     (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed)) {
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks.
                              AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar5 = **(uint **)(*(longlong *)
                           ((this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 8);
      goto LAB_14c75d697;
    }
  }
  uVar5 = 0xffffffff;
LAB_14c75d697:
  this_00 = &this->JointAngleQueue;
  local_res10[0] = param_1;
  if ((uint)param_1 < (this->JointAngleQueue).IndexSize) {
    uVar2 = (this->JointAngleQueue).HeapIndexes[(uint)param_1];
    if (uVar2 != 0xffffffff) {
      puVar3 = (this->JointAngleQueue).Heap;
      dVar1 = (this->JointAngleQueue).Keys[(uint)param_1];
      this_00->HeapNum = this_00->HeapNum - 1;
      puVar3[uVar2] = puVar3[this_00->HeapNum];
      (this->JointAngleQueue).HeapIndexes[(this->JointAngleQueue).Heap[uVar2]] = uVar2;
      (this->JointAngleQueue).HeapIndexes[(uint)param_1] = 0xffffffff;
      if ((this->JointAngleQueue).Keys[(this->JointAngleQueue).Heap[uVar2]] <= dVar1) {
        FBinaryHeap<double,unsigned_int>::UpHeap(this_00,uVar2);
      }
      else {
        FBinaryHeap<double,unsigned_int>::DownHeap(this_00,uVar2);
      }
    }
  }
  FEdgePath::RemoveSegment(&this->EdgePath,local_res10[0]);
  if (*(int *)&(this->EIDToSIDsMap).field_0x8 != *(int *)&(this->EIDToSIDsMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->EIDToSIDsMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->EIDToSIDsMap).field_0x38;
    }
    uVar2 = *(uint *)(puVar4 + (ulonglong)(*(int *)&(this->EIDToSIDsMap).field_0x48 - 1U & uVar5) *
                               4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&(this->EIDToSIDsMap).field_0x0
                         );
        if (*puVar3 == uVar5) {
          this_01 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar3 + 2);
          if (puVar3 == (uint *)0x0) {
            this_01 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (((this_01 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
              (TArray<int,TSizedDefaultAllocator<32>_>::RemoveSwap(this_01,local_res10,Default),
              this_01->ArrayNum == 0)) &&
             (*(int *)&(this->EIDToSIDsMap).field_0x8 != *(int *)&(this->EIDToSIDsMap).field_0x34))
          {
            local_res18[0] = uVar5;
            TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                               *)&this->EIDToSIDsMap,uVar5,(int *)local_res18);
          }
          break;
        }
        uVar2 = puVar3[6];
      } while (uVar2 != 0xffffffff);
    }
  }
  this->PathLength =
       this->PathLength -
       *(double *)
        (*(longlong *)((this->EdgeFlipMesh)._padding_ + (ulonglong)(uVar5 >> 9) * 8) +
        (ulonglong)(uVar5 & 0x1ff) * 8);
  return;
}

// ReplaceJointWithPath @ 14c75d9b0

void __thiscall
UE::Geometry::FDeformableEdgePath::ReplaceJointWithPath
          (FDeformableEdgePath *this,FPathJoint *param_1,
          TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_> *param_2)

{
  FEdgePath *this_00;
  FDirectedSegment *pFVar1;
  TDoubleLinkedListNode *pTVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  TDoubleLinkedListNode *pTVar9;
  TDoubleLinkedListNode *pTVar10;
  FDirectedSegment *pFVar11;
  TDoubleLinkedListNode *local_res10 [2];
  uint local_res20;
  
  iVar7 = param_1->OutgoingSID;
  if (-1 < iVar7) {
    this_00 = &this->EdgePath;
    iVar4 = FEdgePath::GetPrevSegmentID(this_00,iVar7);
    uVar5 = FEdgePath::GetNextSegmentID(this_00,iVar7);
    RemoveSegment(this,iVar4);
    RemoveSegment(this,iVar7);
    local_res20 = param_2->ArrayNum;
    uVar8 = (ulonglong)(int)local_res20;
    pFVar11 = (FDirectedSegment *)(param_2->AllocatorInstance).Data;
    pFVar1 = pFVar11 + uVar8;
    if (uVar5 == 0xffffffff) {
      while( true ) {
        if (param_2->ArrayNum != (int)uVar8) {
          `TCheckedPointerIterator<UE::Geometry::FEdgePath::FDirectedSegment_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar11 == pFVar1) break;
        iVar7 = FEdgePath::AppendSegment(this_00,pFVar11);
        this->PathLength =
             *(double *)
              (*(longlong *)
                ((this->EdgeFlipMesh)._padding_ + (ulonglong)((uint)pFVar11->EID >> 9) * 8) +
              (ulonglong)(pFVar11->EID & 0x1ff) * 8) + this->PathLength;
        UpdateJointAndQueue(this,iVar7);
        uVar8 = (ulonglong)local_res20;
        pFVar11 = pFVar11 + 1;
      }
    }
    else {
      while( true ) {
        if (param_2->ArrayNum != (int)uVar8) {
          `TCheckedPointerIterator<UE::Geometry::FEdgePath::FDirectedSegment_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar11 == pFVar1) break;
        if ((int)uVar5 < 0) {
          pTVar10 = (TDoubleLinkedListNode *)0x0;
        }
        else {
          pTVar10 = *(TDoubleLinkedListNode **)
                     (*(longlong *)
                       ((this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 8);
        }
        iVar6 = FRefCountVector::Allocate(&(this->EdgePath).DirectedSegmentRefCounts);
        iVar7 = pFVar11->EID;
        iVar4 = pFVar11->HeadIndex;
        local_res10[0] = (TDoubleLinkedListNode *)CONCAT44(local_res10[0]._4_4_,iVar6);
        pTVar9 = ::operator_new(0x20);
        uVar3 = (uint)local_res10[0];
        if (pTVar9 == (TDoubleLinkedListNode *)0x0) {
LAB_14c75db2c:
          if (pTVar10 == (TDoubleLinkedListNode *)0x0) {
            local_res10[0] = (this->EdgePath).PathLinkList.TailNode;
          }
          else {
            local_res10[0] = pTVar10->PrevNode;
          }
        }
        else {
          *(int *)&pTVar9->Value = iVar7;
          *(int *)&(pTVar9->Value).field_0x4 = iVar4;
          (pTVar9->Value).SID = (uint)local_res10[0];
          pTVar9->NextNode = (TDoubleLinkedListNode *)0x0;
          pTVar9->PrevNode = (TDoubleLinkedListNode *)0x0;
          if ((pTVar10 == (TDoubleLinkedListNode *)0x0) ||
             (pTVar10 == (this->EdgePath).PathLinkList.HeadNode)) {
            pTVar2 = (this->EdgePath).PathLinkList.HeadNode;
            if (pTVar2 == (TDoubleLinkedListNode *)0x0) {
              (this->EdgePath).PathLinkList.TailNode = pTVar9;
            }
            else {
              pTVar9->NextNode = pTVar2;
              ((this->EdgePath).PathLinkList.HeadNode)->PrevNode = pTVar9;
            }
            (this->EdgePath).PathLinkList.HeadNode = pTVar9;
            (**(code **)((this_00->PathLinkList)._padding_ + 8))
                      (this_00,(this->EdgePath).PathLinkList.ListSize + 1);
            goto LAB_14c75db2c;
          }
          pTVar9->PrevNode = pTVar10->PrevNode;
          pTVar9->NextNode = pTVar10;
          pTVar10->PrevNode->NextNode = pTVar9;
          pTVar10->PrevNode = pTVar9;
          (**(code **)((this_00->PathLinkList)._padding_ + 8))
                    (this_00,(this->EdgePath).PathLinkList.ListSize + 1);
          local_res10[0] = pTVar10->PrevNode;
        }
        TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
        ::InsertAt(&(this->EdgePath).SIDtoNode,local_res10,uVar3);
        this->PathLength =
             *(double *)
              (*(longlong *)
                ((this->EdgeFlipMesh)._padding_ + (ulonglong)((uint)pFVar11->EID >> 9) * 8) +
              (ulonglong)(pFVar11->EID & 0x1ff) * 8) + this->PathLength;
        UpdateJointAndQueue(this,uVar3);
        uVar8 = (ulonglong)local_res20;
        pFVar11 = pFVar11 + 1;
      }
      UpdateJointAndQueue(this,uVar5);
    }
  }
  return;
}

// UpdateJointAndQueue @ 14c774070

void __thiscall
UE::Geometry::FDeformableEdgePath::UpdateJointAndQueue(FDeformableEdgePath *this,int param_1)

{
  TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512> *this_00;
  FBinaryHeap<double,unsigned_int> *this_01;
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double local_res8;
  <lambda_1> local_68 [3];
  
  if (param_1 < 0) {
    return;
  }
  iVar16 = (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlockUsed +
           (this->EdgePath).DirectedSegmentRefCounts.RefCounts.CurBlock * 0x200;
  if (iVar16 <= param_1) {
    return;
  }
  pFVar2 = (this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
  uVar7 = (ulonglong)((uint)param_1 >> 9);
  uVar18 = (ulonglong)(param_1 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar2 + uVar7 * 8) + uVar18 * 2) - 1U)) {
    return;
  }
  pFVar3 = (this->EdgePath).SIDtoNode.Blocks.AllocatorInstance.Data;
  piVar4 = *(int **)(*(longlong *)(pFVar3 + uVar7 * 8) + uVar18 * 8);
  lVar5 = *(longlong *)(piVar4 + 6);
  if (lVar5 == 0) {
    return;
  }
  uVar15 = *(uint *)(lVar5 + 8);
  if (uVar15 == 0xffffffff) {
    return;
  }
  iVar17 = -1;
  uVar14 = 0xffffffff;
  uVar13 = 0xffffffff;
  if (((int)uVar15 < 0) || (iVar16 <= (int)uVar15)) {
LAB_14c77418f:
    uVar12 = (ulonglong)(uVar15 >> 9);
  }
  else {
    uVar12 = (ulonglong)(uVar15 >> 9);
    if (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar15 >> 9) * 8) +
                                    (ulonglong)(uVar15 & 0x1ff) * 2) - 1U)) goto LAB_14c77418f;
    puVar6 = *(uint **)(*(longlong *)(pFVar3 + uVar12 * 8) + (ulonglong)(uVar15 & 0x1ff) * 8);
    uVar14 = *puVar6;
    uVar13 = puVar6[1];
  }
  local_res8 = *(double *)
                (*(longlong *)((this->EdgeFlipMesh)._padding_ + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 0x10);
  iVar1 = *(int *)((longlong)&local_res8 + (longlong)(int)uVar13 * 4);
  if (((-1 < (int)uVar15) && ((int)uVar15 < iVar16)) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->EdgePath).DirectedSegmentRefCounts.RefCounts.Blocks.
                            AllocatorInstance.Data + uVar12 * 8) + (ulonglong)(uVar15 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    iVar17 = **(int **)(*(longlong *)(pFVar3 + (ulonglong)(uVar15 >> 9) * 8) +
                       (ulonglong)(uVar15 & 0x1ff) * 8);
  }
  local_68[0].WedgeAngle = &local_res8;
  local_res8 = 0.0;
  iVar16 = *piVar4;
  local_68[0].__this = this;
  bVar8 = VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FDeformableEdgePath::ComputeWedgeAngles_::__l2::<lambda_1>_>
                    (&this->EdgeFlipMesh,iVar16,iVar17,iVar1,local_68,false);
  uVar21 = SUB84(local_res8,0);
  uVar12 = (ulonglong)local_res8 >> 0x20;
  local_res8 = 0.0;
  bVar9 = VisitWedgeTriangles<UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FDeformableEdgePath::ComputeWedgeAngles_::__l2::<lambda_1>_>
                    (&this->EdgeFlipMesh,iVar17,iVar16,iVar1,local_68,false);
  uVar19 = (undefined4)__real_7fefffffffffffff;
  uVar20 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar22 = (int)uVar12;
  if (!bVar8) {
    uVar21 = uVar19;
    uVar22 = uVar20;
  }
  if (bVar9) {
    uVar19 = SUB84(local_res8,0);
    uVar20 = (undefined4)((ulonglong)local_res8 >> 0x20);
  }
  this_00 = &this->PathJoints;
  uVar14 = this_00->CurBlock;
  uVar15 = (this->PathJoints).CurBlockUsed;
  uVar13 = (uint)((double)CONCAT44(uVar20,uVar19) < (double)CONCAT44(uVar22,uVar21) ||
                 (double)CONCAT44(uVar20,uVar19) == (double)CONCAT44(uVar22,uVar21));
  uVar11 = uVar14 * 0x200 + uVar15;
  if (param_1 == uVar11) {
    if (uVar15 == 0x200) {
      if (uVar14 == (this->PathJoints).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::AddAllocatedBlock
                  (this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar14 = this_00->CurBlock;
      (this->PathJoints).CurBlockUsed = 0;
      uVar15 = 0;
    }
  }
  else {
    if ((uint)param_1 <= uVar11) {
      lVar5 = *(longlong *)((this->PathJoints).Blocks.AllocatorInstance.Data + uVar7 * 8);
      *(int *)(lVar5 + uVar18 * 0xc) = param_1;
      *(uint *)(lVar5 + 4 + uVar18 * 0xc) = uVar13;
      *(int *)(lVar5 + 8 + uVar18 * 0xc) = iVar1;
      goto LAB_14c774370;
    }
    TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::Resize(this_00,param_1);
    uVar15 = (this->PathJoints).CurBlockUsed;
    if (uVar15 == 0x200) {
      if (this_00->CurBlock == (this->PathJoints).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::AddAllocatedBlock
                  (this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      (this->PathJoints).CurBlockUsed = 0;
      uVar15 = 0;
    }
    uVar14 = this_00->CurBlock;
  }
  lVar10 = (longlong)(int)uVar15;
  lVar5 = *(longlong *)
           ((this->PathJoints).Blocks.AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
  *(int *)(lVar5 + lVar10 * 0xc) = param_1;
  *(uint *)(lVar5 + 4 + lVar10 * 0xc) = uVar13;
  *(int *)(lVar5 + 8 + lVar10 * 0xc) = iVar1;
  puVar6 = &(this->PathJoints).CurBlockUsed;
  *puVar6 = *puVar6 + 1;
LAB_14c774370:
  if ((double)CONCAT44(uVar22,uVar21) <= (double)CONCAT44(uVar20,uVar19)) {
    uVar19 = uVar21;
    uVar20 = uVar22;
  }
  this_01 = &this->JointAngleQueue;
  if (((uint)param_1 < (this->JointAngleQueue).IndexSize) &&
     ((this->JointAngleQueue).HeapIndexes[(uint)param_1] != 0xffffffff)) {
    (this->JointAngleQueue).Keys[(uint)param_1] = (double)CONCAT44(uVar20,uVar19);
    uVar15 = (this->JointAngleQueue).HeapIndexes[(uint)param_1];
    if ((uVar15 == 0) ||
       ((this->JointAngleQueue).Keys[(this->JointAngleQueue).Heap[uVar15 - 1 >> 1]] <=
        (double)CONCAT44(uVar20,uVar19))) {
      FBinaryHeap<double,unsigned_int>::DownHeap(this_01,uVar15);
    }
    else {
      FBinaryHeap<double,unsigned_int>::UpHeap(this_01,uVar15);
    }
  }
  else {
    FBinaryHeap<double,unsigned_int>::Add(this_01,(double)CONCAT44(uVar20,uVar19),param_1);
  }
  return;
}

