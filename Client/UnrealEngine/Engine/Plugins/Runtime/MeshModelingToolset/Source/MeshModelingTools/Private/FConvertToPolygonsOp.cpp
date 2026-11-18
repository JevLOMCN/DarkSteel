// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FConvertToPolygonsOp @ 14cbdb500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FConvertToPolygonsOp * __thiscall
FConvertToPolygonsOp::FConvertToPolygonsOp(FConvertToPolygonsOp *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FDynamicMesh3 *pFVar11;
  FDynamicMesh3 *pFVar12;
  undefined8 *puVar13;
  longlong local_68 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pFVar12 = (FDynamicMesh3 *)0x0;
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)&___7FDynamicMeshOperator_Geometry_UE__6B_;
  *plVar1 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0x3ff0000000000000;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar4;
  this->_padding_ =
       CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  this->_padding_ = uVar4;
  this->_padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  pFVar11 = ::operator_new(0x230);
  if (pFVar11 != (FDynamicMesh3 *)0x0) {
    pFVar12 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar11);
  }
  if (plVar1 == local_68) {
    if (pFVar12 == (FDynamicMesh3 *)0x0) goto LAB_14cbdb5d8;
    puVar13 = (undefined8 *)pFVar12->_padding_;
  }
  else {
    pFVar11 = (FDynamicMesh3 *)*plVar1;
    *plVar1 = (longlong)pFVar12;
    if (pFVar11 == (FDynamicMesh3 *)0x0) goto LAB_14cbdb5d8;
    puVar13 = (undefined8 *)pFVar11->_padding_;
    pFVar12 = pFVar11;
  }
  (*(code *)*puVar13)(pFVar12,1);
LAB_14cbdb5d8:
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = (longlong)&___7FConvertToPolygonsOp__6B_;
  lVar3 = _UNK_15061cbc8;
  lVar2 = ___xmm_3ff00000000000000000000000000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ConversionMode = FaceNormalDeviation;
  this->_padding_ = lVar2;
  this->_padding_ = lVar3;
  this->AngleTolerance = 0.10000000149011612;
  this->_padding_ = uVar4;
  this->_padding_ = uVar5;
  this->bSubdivideExisting = false;
  this->WeightingType = None;
  this->bUseAverageGroupNormal = true;
  this->NumPoints = 10;
  local_28 = (undefined4)uVar8;
  uStack_24 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_20 = (undefined4)uVar9;
  uStack_1c = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)&this->_padding_ = uVar6;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(undefined4 *)&this->_padding_ = local_28;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_24;
  *(undefined4 *)&this->_padding_ = uStack_20;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_1c;
  *(int *)&this->_padding_ = (int)uVar10;
  *(int *)((longlong)&this->_padding_ + 4) = (int)((ulonglong)uVar10 >> 0x20);
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->WeightingCoeffs).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X
  ;
  (this->WeightingCoeffs).field0_0x0._s_0.Y = (double)uVar4;
  (this->WeightingCoeffs).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
  ;
  this->bRespectUVSeams = false;
  this->bRespectHardNormals = false;
  this->QuadMetricClamp = 1.0;
  this->QuadAdjacencyWeight = 1.0;
  this->bCalculateNormals = false;
  (this->OriginalMesh).Object = (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->SourcePolyGroups).Object = (FPolygroupSet *)0x0;
  (this->SourcePolyGroups).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Generator).Mesh = (FDynamicMesh3 *)0x0;
  (this->Generator).MinGroupSize = 0;
  (this->Generator).InitialGroupID = 0;
  (this->Generator).FoundPolygroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Generator).FoundPolygroups.ArrayNum = 0;
  (this->Generator).FoundPolygroups.ArrayMax = 0;
  (this->Generator).PolygroupEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Generator).PolygroupEdges.ArrayNum = 0;
  (this->Generator).PolygroupEdges.ArrayMax = 0;
  this->QuadSearchRounds = 1;
  this->MinGroupSize = 2;
  this->InitialGroupID = 0;
  (this->Generator).bApplyPostProcessing = true;
  (this->Generator).bCopyToMesh = true;
  return this;
}

// CalculateResult @ 14cbe7180

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FConvertToPolygonsOp::CalculateResult(FConvertToPolygonsOp *this,FProgressCancel *param_1)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  FPolygroupsGenerator *this_00;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  FPolygroupSet *pFVar7;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar8;
  FDynamicMesh3 *pFVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  bool bVar12;
  undefined8 uVar13;
  FPolygroupsGenerator *pFVar14;
  TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *pTVar15;
  FDynamicMeshAttributeSet *pFVar16;
  TVector<double> *pTVar17;
  int iVar18;
  longlong *plVar19;
  FDynamicMeshAttributeSet *pFVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar25;
  uint uVar26;
  FDynamicMeshAttributeSet *pFVar27;
  int iVar28;
  FDynamicMeshAttributeSet *pFVar29;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar30;
  undefined1 local_res10 [8];
  FConvertToPolygonsOp *local_res18;
  FConvertToPolygonsOp *local_res20;
  TVector<float>_u_0 local_138;
  FMeshNormals local_128;
  FDynamicMeshEditor local_110;
  code *local_108;
  FConvertToPolygonsOp **local_100;
  code *local_f8;
  FConvertToPolygonsOp **local_f0;
  TVector<double>_u_0 local_e8;
  FPolygroupsGenerator local_c8;
  TFunction<bool___cdecl(int,int)> local_88;
  TVector<double> local_58;
  
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar3 = *(code **)&param_1->CancelF;
    plVar4 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar19 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar19 = plVar4;
    }
    uVar13 = (**(code **)(*plVar19 + 8))();
    bVar12 = (bool)(*pcVar3)(uVar13);
    param_1->WasCancelled = bVar12;
    if (bVar12 != false) {
      return;
    }
  }
  pTVar15 = (this->OriginalMesh).Object;
  if (pTVar15 == (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0) {
    return;
  }
  local_100 = &local_res18;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`FConvertToPolygonsOp::CalculateResult'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
              ::Call;
  local_res18 = this;
  UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>::AccessSharedObject
            (pTVar15,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_108);
  if ((param_1 != (FProgressCancel *)0x0) && (bVar12 = FProgressCancel::Cancelled(param_1), bVar12))
  {
    return;
  }
  if (this->ConversionMode != CopyFromLayer) {
    pFVar14 = UE::Geometry::FPolygroupsGenerator::FPolygroupsGenerator
                        (&local_c8,(FDynamicMesh3 *)this->_padding_);
    this_00 = &this->Generator;
    pFVar29 = (FDynamicMeshAttributeSet *)0x0;
    pTVar1 = &(this->Generator).FoundPolygroups;
    pTVar2 = &pFVar14->FoundPolygroups;
    this_00->Mesh = pFVar14->Mesh;
    (this->Generator).bApplyPostProcessing = pFVar14->bApplyPostProcessing;
    (this->Generator).MinGroupSize = pFVar14->MinGroupSize;
    (this->Generator).bCopyToMesh = pFVar14->bCopyToMesh;
    (this->Generator).InitialGroupID = pFVar14->InitialGroupID;
    if (pTVar1 != pTVar2) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar1->AllocatorInstance).Data,
                 (this->Generator).FoundPolygroups.ArrayNum);
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (pTVar1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Generator).FoundPolygroups.ArrayNum = (pFVar14->FoundPolygroups).ArrayNum;
      (this->Generator).FoundPolygroups.ArrayMax = (pFVar14->FoundPolygroups).ArrayMax;
      (pFVar14->FoundPolygroups).ArrayNum = 0;
      (pFVar14->FoundPolygroups).ArrayMax = 0;
    }
    pTVar30 = &pFVar14->PolygroupEdges;
    pTVar25 = &(this->Generator).PolygroupEdges;
    if (pTVar25 != pTVar30) {
      pFVar10 = (pTVar25->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (pTVar25->AllocatorInstance).Data = (pTVar30->AllocatorInstance).Data;
      (pTVar30->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Generator).PolygroupEdges.ArrayNum = (pFVar14->PolygroupEdges).ArrayNum;
      (this->Generator).PolygroupEdges.ArrayMax = (pFVar14->PolygroupEdges).ArrayMax;
      (pFVar14->PolygroupEdges).ArrayNum = 0;
      (pFVar14->PolygroupEdges).ArrayMax = 0;
    }
    if (local_c8.PolygroupEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.PolygroupEdges.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_c8.FoundPolygroups.AllocatorInstance.Data,local_c8.FoundPolygroups.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_c8.FoundPolygroups.AllocatorInstance.Data
        != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_c8.FoundPolygroups.AllocatorInstance.Data);
    }
    (this->Generator).MinGroupSize = this->MinGroupSize;
    (this->Generator).InitialGroupID = this->InitialGroupID;
    switch(this->ConversionMode) {
    case FaceNormalDeviation:
      dVar11 = cos(this->AngleTolerance * __real_3f91df46a2529d39);
      UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFaceNormals
                (this_00,__real_3ff0000000000000 - dVar11,this->bRespectUVSeams,
                 this->bRespectHardNormals,this->bUseAverageGroupNormal);
      break;
    case FindPolygons:
      iVar28 = 100;
      if (this->QuadSearchRounds < 100) {
        iVar28 = this->QuadSearchRounds;
      }
      iVar21 = 1;
      if (1 < iVar28) {
        iVar21 = iVar28;
      }
      UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups
                (this_00,this->bRespectUVSeams,this->bRespectHardNormals,this->QuadMetricClamp,
                 this->QuadAdjacencyWeight,iVar21);
      break;
    case FromUVIslands:
      UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromUVIslands(this_00,0);
      break;
    case FromNormalSeams:
      UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromHardNormalSeams(this_00);
      break;
    case FromConnectedTris:
      local_88._0_8_ = 0;
      local_88._40_8_ = 0;
      UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromConnectedTris(this_00,&local_88);
      break;
    case FromFurthestPointSampling:
      if (this->bSubdivideExisting == false) {
        local_e8._s_0.X = (this->WeightingCoeffs).field0_0x0._s_0.X;
        local_e8._s_0.Y = (this->WeightingCoeffs).field0_0x0._s_0.Y;
        local_e8._s_0.Z = (this->WeightingCoeffs).field0_0x0._s_0.Z;
        UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFurthestPointSampling
                  (this_00,this->NumPoints,this->WeightingType,(TVector<double> *)&local_e8._s_0,
                   (FPolygroupSet *)0x0);
      }
      else {
        pTVar15 = TSharedPtr<UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>,1>
                  ::operator->(&this->OriginalMesh);
        local_f0 = &local_res20;
        local_f8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FConvertToPolygonsOp::CalculateResult'::__l29::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
                   ::Call;
        local_res20 = this;
        UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>::AccessSharedObject
                  (pTVar15,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                           &local_f8);
      }
      break;
    default:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ConvertToPolygonsTool.cpp"
                          ,0xb0,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      break;
    case FromMaterialIDs:
      UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromMaterialIDs(this_00);
    }
    UE::Geometry::FPolygroupsGenerator::FindPolygroupEdges(this_00);
    if (this->bCalculateNormals == false) {
      return;
    }
    if (this->ConversionMode != FaceNormalDeviation) {
      return;
    }
    if ((((FDynamicMesh3 *)this->_padding_)->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
      UE::Geometry::FDynamicMesh3::EnableAttributes((FDynamicMesh3 *)this->_padding_);
    }
    pFVar27 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
    pFVar16 = pFVar29;
    if (pFVar27 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar16 = pFVar27;
    }
    pFVar27 = pFVar29;
    if (0 < (pFVar16->NormalLayers).Array.ArrayNum) {
      pFVar27 = *(FDynamicMeshAttributeSet **)(pFVar16->NormalLayers).Array.AllocatorInstance.Data;
    }
    UE::Geometry::TDynamicMeshOverlay<float,3>::ClearElements
              ((TDynamicMeshOverlay<float,3> *)pFVar27);
    iVar28 = (this->Generator).FoundPolygroups.ArrayNum;
    local_110.Mesh = (FDynamicMesh3 *)this->_padding_;
    pTVar25 = (TArray<int,TSizedDefaultAllocator<32>_> *)
              (this->Generator).FoundPolygroups.AllocatorInstance.Data;
    pTVar30 = pTVar25 + iVar28;
    while( true ) {
      if ((this->Generator).FoundPolygroups.ArrayNum != iVar28) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      pFVar9 = (FDynamicMesh3 *)this->_padding_;
      if (pTVar25 == pTVar30) break;
      if ((pTVar25->ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar17 = UE::Geometry::FDynamicMesh3::GetTriNormal
                          (pFVar9,&local_58,*(int *)(pTVar25->AllocatorInstance).Data);
      local_138._s_0.Z = (float)(pTVar17->field0_0x0)._s_0.Z;
      local_138._s_0.Y = (float)(pTVar17->field0_0x0)._s_0.Y;
      local_138._s_0.X = (float)(pTVar17->field0_0x0)._s_0.X;
      UE::Geometry::FDynamicMeshEditor::SetTriangleNormals
                (&local_110,pTVar25,(TVector<float> *)&local_138._s_0);
      pTVar25 = pTVar25 + 1;
    }
    local_128.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Normals.ArrayNum = 0;
    local_128.Normals.ArrayMax = 0;
    pFVar16 = (pFVar9->AttributeSet).Ptr;
    pFVar20 = pFVar29;
    if (pFVar16 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar20 = pFVar16;
    }
    if (0 < (pFVar20->NormalLayers).Array.ArrayNum) {
      pFVar29 = *(FDynamicMeshAttributeSet **)(pFVar20->NormalLayers).Array.AllocatorInstance.Data;
    }
    local_128.Mesh = pFVar9;
    UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg
              (&local_128,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar29,
               true,true);
    UE::Geometry::FMeshNormals::CopyToOverlay
              (&local_128,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar27,
               false);
    if (local_128.Normals.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_128.Normals.AllocatorInstance.Data);
    return;
  }
  if ((this->SourcePolyGroups).Object == (FPolygroupSet *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7157263858606801000>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ConvertToPolygonsTool.cpp"
                        ,0x68,"SourcePolyGroups.IsValid()");
    if (!bVar12) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar5 = this->_padding_;
  iVar28 = 0;
  uVar26 = *(int *)(lVar5 + 0x144) + *(int *)(lVar5 + 0x140) * 0x200;
  uVar24 = 0;
  if ((uVar26 != 0) &&
     (uVar24 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x148) - 1U))) {
    uVar24 = 1;
    uVar23 = 1;
    if ((int)uVar26 < 2) goto joined_r0x00014cbe7308;
    do {
      uVar22 = (ulonglong)((uint)uVar24 & 0x1ff);
      lVar6 = (*(undefined8 **)(lVar5 + 0x148))[uVar24 >> 9];
      if ((*(short *)(lVar6 + uVar22 * 2) != 0) && (*(short *)(lVar6 + uVar22 * 2) != -1)) break;
      uVar23 = (uint)uVar24 + 1;
      uVar24 = (ulonglong)uVar23;
    } while ((int)uVar23 < (int)uVar26);
  }
  uVar23 = (uint)uVar24;
joined_r0x00014cbe7308:
  do {
    if (uVar23 == uVar26) {
      return;
    }
    while( true ) {
      lVar6 = this->_padding_;
      if (((this->SourcePolyGroups).Object == (FPolygroupSet *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (this->SourcePolyGroups).Object;
      pTVar8 = pFVar7->PolygroupAttrib;
      uVar23 = (uint)uVar24;
      if (pTVar8 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        pFVar9 = pFVar7->Mesh;
        if ((pFVar9->TriangleGroups).bIsSet == false) {
          iVar21 = -1;
        }
        else {
          iVar21 = iVar28;
          if ((-1 < (int)uVar23) &&
             ((int)uVar23 <
              (int)((pFVar9->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar9->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar9->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                      .Data + (uVar24 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 2)
                        - 1U) < 0xfffe) {
              iVar21 = *(int *)(*(longlong *)
                                 ((pFVar9->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                 + (uVar24 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
            }
          }
        }
      }
      else {
        iVar21 = *(int *)(*(longlong *)(*(longlong *)&pTVar8->field_0x20 + (uVar24 >> 9) * 8) +
                         (ulonglong)(uVar23 & 0x1ff) * 4);
      }
      if (*(char *)(lVar6 + 0x1a8) != '\0') {
        *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x198) + (uVar24 >> 9) * 8) +
                (ulonglong)(uVar23 & 0x1ff) * 4) = iVar21;
        iVar18 = iVar21 + 1;
        if (iVar21 + 1 < *(int *)(lVar6 + 0x1b0)) {
          iVar18 = *(int *)(lVar6 + 0x1b0);
        }
        *(int *)(lVar6 + 0x1b0) = iVar18;
      }
      uVar23 = uVar23 + 1;
      uVar24 = (ulonglong)uVar23;
      if ((int)uVar26 <= (int)uVar23) break;
      while( true ) {
        uVar22 = (ulonglong)((uint)uVar24 & 0x1ff);
        lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x148) + (uVar24 >> 9) * 8);
        if ((*(short *)(lVar6 + uVar22 * 2) != 0) && (*(short *)(lVar6 + uVar22 * 2) != -1)) break;
        uVar23 = (uint)uVar24 + 1;
        uVar24 = (ulonglong)uVar23;
        if ((int)uVar26 <= (int)uVar23) goto joined_r0x00014cbe7308;
      }
    }
  } while( true );
}

