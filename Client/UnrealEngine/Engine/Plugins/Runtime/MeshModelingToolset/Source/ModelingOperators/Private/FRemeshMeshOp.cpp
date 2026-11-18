// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 5

// CalculateResult @ 14c967dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FRemeshMeshOp::CalculateResult(FRemeshMeshOp *this,FProgressCancel *param_1)

{
  undefined1 *this_00;
  ERemeshType EVar1;
  ERemeshSmoothingType EVar2;
  code *pcVar3;
  longlong *plVar4;
  FDynamicMesh3 *pFVar5;
  TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *pTVar6;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar7;
  FDynamicMesh3 *pFVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  FScriptContainerElement *pFVar16;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar17;
  double dVar18;
  bool bVar19;
  undefined1 uVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  FNormalFlowRemesher *this_01;
  FNormalFlowRemesher *this_02;
  FRemesher *this_03;
  FQueueRemesher *this_04;
  FDynamicMeshAttributeSet *pFVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  FDynamicMeshAttributeSet *pFVar28;
  FDynamicMeshAttributeSet *pFVar29;
  byte bVar30;
  FDynamicMeshAttributeSet *pFVar31;
  uint uVar32;
  bool bVar33;
  undefined1 auStackY_268 [32];
  FMeshConstraints local_200;
  char local_148;
  undefined1 local_138 [64];
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
  local_e8;
  int local_98;
  ForAnyElementType local_90;
  int local_88;
  int local_84 [3];
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId69,"RemeshMeshOp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\RemeshMeshOp.cpp"
               ,0x45);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId69);
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) goto LAB_14c96894d;
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar3 = *(code **)&param_1->CancelF;
    plVar4 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar27 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar27 = plVar4;
    }
    uVar24 = (**(code **)(*plVar27 + 8))();
    bVar19 = (bool)(*pcVar3)(uVar24);
    param_1->WasCancelled = bVar19;
    if (bVar19 != false) goto LAB_14c96894d;
  }
  if ((this->bDiscardAttributes == false) || (this->bPreserveSharpEdges != false)) {
    bVar30 = 0;
  }
  else {
    bVar30 = 1;
  }
  pFVar5 = (FDynamicMesh3 *)this->_padding_;
  if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar19)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FDynamicMesh3::Copy(pFVar5,(this->OriginalMesh).Object,true,true,true,(bool)(bVar30 ^ 1));
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) goto LAB_14c96894d;
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar3 = *(code **)&param_1->CancelF;
    plVar4 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar27 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar27 = plVar4;
    }
    uVar24 = (**(code **)(*plVar27 + 8))();
    bVar19 = (bool)(*pcVar3)(uVar24);
    param_1->WasCancelled = bVar19;
    if (bVar19 != false) goto LAB_14c96894d;
  }
  EVar1 = this->RemeshType;
  pFVar5 = (FDynamicMesh3 *)this->_padding_;
  if (EVar1 == Standard) {
    this_04 = ::operator_new(0x380);
    this_02 = (FNormalFlowRemesher *)0x0;
    if (this_04 != (FQueueRemesher *)0x0) {
      this_02 = (FNormalFlowRemesher *)FQueueRemesher::FQueueRemesher(this_04,pFVar5);
    }
    *(int *)&this_02->field_0x264 = this->MaxRemeshIterations;
    *(double *)&this_02->field_0x268 = this->MinActiveEdgeFraction;
  }
  else if (EVar1 == FullPass) {
    this_03 = ::operator_new(0x260);
    if (this_03 == (FRemesher *)0x0) goto LAB_14c967fb7;
    this_02 = (FNormalFlowRemesher *)FRemesher::FRemesher(this_03,pFVar5);
  }
  else if (EVar1 == NormalFlow) {
    this_01 = ::operator_new(0x3e0);
    this_02 = (FNormalFlowRemesher *)0x0;
    if (this_01 != (FNormalFlowRemesher *)0x0) {
      this_02 = FNormalFlowRemesher::FNormalFlowRemesher(this_01,pFVar5);
    }
    *(int *)&this_02->field_0x264 = this->MaxRemeshIterations;
    *(undefined8 *)&this_02->field_0x268 = 0;
    this_02->NumExtraProjectionIterations = this->ExtraProjectionIterations;
    iVar22 = this->TriangleCountHint;
    if (iVar22 < 0) {
      iVar22 = 0;
    }
    this_02->MaxTriangleCount = iVar22;
    this_02->FaceProjectionPassesPerRemeshIteration = this->FaceProjectionPassesPerRemeshIteration;
    this_02->SurfaceProjectionSpeed = this->SurfaceProjectionSpeed;
    this_02->NormalAlignmentSpeed = this->NormalAlignmentSpeed;
    this_02->bSmoothInFillAreas = this->bSmoothInFillAreas;
    this_02->FillAreaDistanceMultiplier = this->FillAreaDistanceMultiplier;
    this_02->FillAreaSmoothMultiplier = this->FillAreaSmoothMultiplier;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\RemeshMeshOp.cpp"
                        ,0x33,L"Encountered unexpected Remesh Type");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14c967fb7:
    this_02 = (FNormalFlowRemesher *)0x0;
  }
  pFVar29 = (FDynamicMeshAttributeSet *)0x0;
  this_02->field_0x210 = this->bParallel;
  this_02->field_0x142 = this->bSplits;
  this_02->field_0x140 = this->bFlips;
  this_02->field_0x141 = this->bCollapses;
  FRemesher::SetTargetEdgeLength((FRemesher *)this_02,this->TargetEdgeLength);
  this_02->field_0x128 = this->bReproject != false;
  this_02->field_0x143 = 0.0 < this->SmoothingStrength;
  *(double *)&this_02->field_0x168 = (double)this->SmoothingStrength;
  *(undefined4 *)&this_02->field_0x170 = 0;
  if (this->bDiscardAttributes == false) {
    EVar2 = this->SmoothingType;
    if (EVar2 == Uniform) {
      *(undefined4 *)&this_02->field_0x148 = 0;
    }
    else if (EVar2 == Cotangent) {
      *(undefined4 *)&this_02->field_0x170 = 1;
      *(undefined4 *)&this_02->field_0x148 = 1;
    }
    else if (EVar2 == MeanValue) {
      *(undefined4 *)&this_02->field_0x170 = 2;
      *(undefined4 *)&this_02->field_0x148 = 1;
    }
    else {
      bVar19 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4555256118162489224>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\RemeshMeshOp.cpp"
                          ,0x78,"false");
      if (bVar19) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  iVar22 = *(int *)&this_02->field_0x170;
  this_02->field_0x144 = this->bPreventNormalFlips;
  this_02->field_0x145 = this->bPreventTinyTriangles;
  *(undefined4 *)&this_02->field_0x12c = 0;
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  local_138._32_8_ = 0;
  local_138._40_4_ = 0;
  local_138._44_4_ = 0x80;
  local_138._48_4_ = 0xffffffff;
  local_138._52_4_ = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
               *)local_138,
              (TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
               *)&this->UserSpecifiedConstraints);
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
  ::operator=(&local_e8,
              (TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
               *)&(this->UserSpecifiedConstraints).Vertices);
  local_98 = (this->UserSpecifiedConstraints).FixedSetIDCounter;
  pTVar6 = (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)
           (this->UserSpecifiedConstraints).ProjectionData.ProjectionCurves.AllocatorInstance.Data;
  iVar23 = (this->UserSpecifiedConstraints).ProjectionData.ProjectionCurves.ArrayNum;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = iVar23;
  if (iVar23 == 0) {
    local_84[0] = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar23,0,&local_90,iVar23,local_84);
    ConstructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
              (local_90.Data,pTVar6,iVar23);
  }
  bVar19 = this->bPreserveSharpEdges == false;
  FMeshConstraintsUtil::ConstrainAllBoundariesAndSeams
            ((FMeshConstraints *)local_138,pFVar5,this->MeshBoundaryConstraint,
             this->GroupBoundaryConstraint,this->MaterialBoundaryConstraint,true,bVar19,bVar19,true)
  ;
  if (this->bReprojectConstraints != false) {
    if (local_84[0] < 0) {
      DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
                ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_90.Data,local_88);
      local_88 = 0;
      if (local_84[0] != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_90,0,local_84);
      }
    }
    else {
      DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
                ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_90.Data,local_88);
      local_88 = 0;
    }
    if (this->MeshBoundaryConstraint != NoConstraint) {
      FMeshConstraintsUtil::SetBoundaryConstraintsWithProjection
                ((FMeshConstraints *)local_138,Mesh,pFVar5,this->BoundaryCornerAngleThreshold);
    }
    if (this->GroupBoundaryConstraint != NoConstraint) {
      FMeshConstraintsUtil::SetBoundaryConstraintsWithProjection
                ((FMeshConstraints *)local_138,Group,pFVar5,this->BoundaryCornerAngleThreshold);
    }
    if (this->MaterialBoundaryConstraint != NoConstraint) {
      FMeshConstraintsUtil::SetBoundaryConstraintsWithProjection
                ((FMeshConstraints *)local_138,MaterialID,pFVar5,this->BoundaryCornerAngleThreshold)
      ;
    }
  }
  FMeshConstraints::FMeshConstraints(&local_200,(FMeshConstraints *)local_138);
  local_148 = '\x01';
  this_00 = &this_02->field_0x10;
  if (&local_200 == (FMeshConstraints *)this_00) {
LAB_14c968481:
    FMeshConstraints::~FMeshConstraints(&local_200);
  }
  else {
    if (this_02->field_0xc8 != '\0') {
      FMeshConstraints::~FMeshConstraints((FMeshConstraints *)this_00);
    }
    FMeshConstraints::FMeshConstraints((FMeshConstraints *)this_00,&local_200);
    this_02->field_0xc8 = 1;
    if (local_148 != '\0') goto LAB_14c968481;
  }
  if (this->ProjectionTarget == (FDynamicMesh3 *)0x0) {
    if ((this->ProjectionTargetSpatial != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ProjectionTargetSpatial == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\RemeshMeshOp.cpp"
                            ,0xa9,L""), bVar19)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this->ProjectionTarget = (this->OriginalMesh).Object;
    this->ProjectionTargetSpatial = (this->OriginalMeshSpatial).Object;
  }
  pFVar31 = pFVar29;
  if (this->bUseWorldSpace == false) {
    pFVar25 = ::operator_new(0x18);
    if (pFVar25 != (FDynamicMeshAttributeSet *)0x0) {
      pTVar7 = this->ProjectionTargetSpatial;
      pFVar8 = this->ProjectionTarget;
      pFVar25->_padding_ = (longlong)&___7FMeshProjectionTarget_Geometry_UE__6B_;
      pFVar25->_padding_ = (longlong)pFVar8;
      pFVar25->_padding_ = (longlong)pTVar7;
      pFVar31 = pFVar25;
    }
  }
  else {
    pFVar25 = ::operator_new(0xb8);
    if (pFVar25 != (FDynamicMeshAttributeSet *)0x0) {
      pTVar7 = this->ProjectionTargetSpatial;
      pFVar25->_padding_ = (longlong)this->ProjectionTarget;
      pFVar25->_padding_ = (longlong)&___7FWorldSpaceProjectionTarget_Geometry_UE__6B_;
      pFVar25->_padding_ = (longlong)pTVar7;
      pFVar16 = (FScriptContainerElement *)(this->TargetMeshLocalToWorld).Rotation.field0_0x0._s_0.Y
      ;
      pFVar25->ParentMesh =
           (FDynamicMesh3 *)(this->TargetMeshLocalToWorld).Rotation.field0_0x0._s_0.X;
      (pFVar25->UVLayers).Array.AllocatorInstance.Data = pFVar16;
      pFVar16 = (FScriptContainerElement *)(this->TargetMeshLocalToWorld).Rotation.field0_0x0._s_0.W
      ;
      *(double *)&(pFVar25->UVLayers).Array.ArrayNum =
           (this->TargetMeshLocalToWorld).Rotation.field0_0x0._s_0.Z;
      (pFVar25->NormalLayers).Array.AllocatorInstance.Data = pFVar16;
      pTVar17 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
                (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.Y;
      *(double *)&(pFVar25->NormalLayers).Array.ArrayNum =
           (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.X;
      (pFVar25->ColorLayer).Ptr = pTVar17;
      pFVar16 = (FScriptContainerElement *)(this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.X;
      (pFVar25->MaterialIDAttrib).Ptr =
           (TDynamicMeshScalarTriangleAttribute<int> *)
           (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.Z;
      (pFVar25->WeightLayers).Array.AllocatorInstance.Data = pFVar16;
      pFVar16 = (FScriptContainerElement *)(this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.Z;
      *(double *)&(pFVar25->WeightLayers).Array.ArrayNum =
           (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.Y;
      (pFVar25->PolygroupLayers).Array.AllocatorInstance.Data = pFVar16;
      dVar18 = (this->ToolMeshLocalToWorld).Rotation.field0_0x0._s_0.Y;
      *(double *)&(pFVar25->PolygroupLayers).Array.ArrayNum =
           (this->ToolMeshLocalToWorld).Rotation.field0_0x0._s_0.X;
      *(double *)&pFVar25->SkinWeightAttributes = dVar18;
      dVar18 = (this->ToolMeshLocalToWorld).Rotation.field0_0x0._s_0.W;
      *(double *)&(pFVar25->SkinWeightAttributes).field_0x8 =
           (this->ToolMeshLocalToWorld).Rotation.field0_0x0._s_0.Z;
      *(double *)&(pFVar25->SkinWeightAttributes).field_0x10 = dVar18;
      dVar18 = (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.Y;
      *(double *)&(pFVar25->SkinWeightAttributes).field_0x18 =
           (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.X;
      *(double *)&(pFVar25->SkinWeightAttributes).field_0x20 = dVar18;
      dVar18 = (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.X;
      *(double *)&(pFVar25->SkinWeightAttributes).field_0x28 =
           (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.Z;
      *(double *)&(pFVar25->SkinWeightAttributes).field_0x30 = dVar18;
      dVar18 = (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.Z;
      *(double *)&(pFVar25->SkinWeightAttributes).field_0x38 =
           (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.Y;
      *(double *)&(pFVar25->SkinWeightAttributes).field_0x40 = dVar18;
      pFVar31 = pFVar25;
    }
  }
  *(FDynamicMeshAttributeSet **)&this_02->field_0xd0 = pFVar31;
  local_78 = *(longlong *)&this->CustomEdgeLengthScaleF;
  uStack_50 = (longlong *)0x0;
  if (local_78 != 0) {
    puVar9 = *(undefined8 **)&(this->CustomEdgeLengthScaleF).field_0x28;
    puVar26 = (undefined8 *)&(this->CustomEdgeLengthScaleF).field_0x10;
    if (puVar9 != (undefined8 *)0x0) {
      puVar26 = puVar9;
    }
    (**(code **)*puVar26)();
  }
  lVar14 = *(longlong *)&this_02->field_0x1e0;
  uVar15 = *(undefined8 *)&this_02->field_0x1e8;
  uVar10 = *(undefined4 *)&this_02->field_0x1f0;
  uVar11 = *(undefined4 *)&this_02->field_0x1f4;
  uVar12 = *(undefined4 *)&this_02->field_0x1f8;
  uVar13 = *(undefined4 *)&this_02->field_0x1fc;
  uVar24 = *(undefined8 *)&this_02->field_0x200;
  plVar4 = *(longlong **)&this_02->field_0x208;
  *(longlong *)&this_02->field_0x1e0 = local_78;
  *(undefined8 *)&this_02->field_0x1e8 = uStack_70;
  *(undefined4 *)&this_02->field_0x1f0 = local_68;
  *(undefined4 *)&this_02->field_0x1f4 = uStack_64;
  *(undefined4 *)&this_02->field_0x1f8 = uStack_60;
  *(undefined4 *)&this_02->field_0x1fc = uStack_5c;
  *(undefined4 *)&this_02->field_0x200 = (undefined4)local_58;
  *(undefined4 *)&this_02->field_0x204 = local_58._4_4_;
  *(undefined4 *)&this_02->field_0x208 = (undefined4)uStack_50;
  *(undefined4 *)&this_02->field_0x20c = uStack_50._4_4_;
  local_68 = uVar10;
  uStack_64 = uVar11;
  uStack_60 = uVar12;
  uStack_5c = uVar13;
  local_58 = uVar24;
  uStack_50 = plVar4;
  local_78 = lVar14;
  uStack_70 = uVar15;
  if (lVar14 != 0) {
    plVar27 = (longlong *)&local_68;
    if (plVar4 != (longlong *)0x0) {
      plVar27 = plVar4;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  *(FProgressCancel **)&this_02->field_0x110 = param_1;
  if ((this->bDiscardAttributes != false) && (bVar30 == 0)) {
    FDynamicMesh3::DiscardAttributes(pFVar5);
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId195,"RemeshMeshOp_Remesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\RemeshMeshOp.cpp"
               ,0xc3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId195);
  }
  EVar1 = this->RemeshType;
  if (EVar1 == FullPass) {
    iVar23 = this->RemeshIterations;
    pFVar25 = pFVar29;
    if (0 < iVar23) {
      do {
        if (iVar22 != 0) {
          if (((((ulonglong)pFVar25 & 1) == 0) && ((int)pFVar25 < iVar23 / 2)) &&
             (this->bFlips != false)) {
            uVar20 = 1;
          }
          else {
            uVar20 = 0;
          }
          this_02->field_0x140 = uVar20;
        }
        (**(code **)(*(longlong *)this_02 + 0x38))(this_02);
        iVar23 = this->RemeshIterations;
        uVar32 = (int)pFVar25 + 1;
        pFVar25 = (FDynamicMeshAttributeSet *)(ulonglong)uVar32;
      } while ((int)uVar32 < iVar23);
    }
  }
  else if ((EVar1 == Standard) || (EVar1 == NormalFlow)) {
    (**(code **)(*(longlong *)this_02 + 0x38))(this_02);
  }
  else {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Encountered unexpected Remesh Type\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\RemeshMeshOp.cpp"
                        ,0xde,L"");
    if (bVar21) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId227,"RemeshMeshOp_Normals",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\RemeshMeshOp.cpp"
               ,0xe3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId227);
  }
  if ((pFVar5->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    FMeshNormals::QuickComputeVertexNormals(pFVar5,false);
  }
  else {
    FMeshNormals::QuickRecomputeOverlayNormals(pFVar5,false,true,true,true);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((pFVar5->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) &&
     (this->bResultMustHaveAttributesEnabled != false)) {
    FDynamicMesh3::EnableAttributes(pFVar5);
    if ((pFVar5->VertexUVs).bIsSet != false) {
      pFVar25 = (pFVar5->AttributeSet).Ptr;
      pFVar28 = pFVar29;
      if (pFVar25 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar28 = pFVar25;
      }
      pFVar25 = pFVar29;
      if (0 < (pFVar28->UVLayers).Array.ArrayNum) {
        pFVar25 = *(FDynamicMeshAttributeSet **)(pFVar28->UVLayers).Array.AllocatorInstance.Data;
      }
      CopyVertexUVsToOverlay
                (pFVar5,(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar25,
                 false);
    }
    if ((pFVar5->VertexNormals).bIsSet != false) {
      pFVar25 = (pFVar5->AttributeSet).Ptr;
      pFVar28 = pFVar29;
      if (pFVar25 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar28 = pFVar25;
      }
      if (0 < (pFVar28->NormalLayers).Array.ArrayNum) {
        pFVar29 = *(FDynamicMeshAttributeSet **)(pFVar28->NormalLayers).Array.AllocatorInstance.Data
        ;
      }
      CopyVertexNormalsToOverlay
                (pFVar5,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar29,
                 false);
    }
  }
  if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
    (**(code **)pFVar31->_padding_)(pFVar31,1);
  }
  DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
            ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_90.Data,local_88);
  if ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_90.Data !=
      (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0) {
    FMemory::Free(local_90.Data);
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FVertexConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FVertexConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  (*(code *)**(undefined8 **)this_02)(this_02,1);
LAB_14c96894d:
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CalculateTargetEdgeLength @ 14c975dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl
UE::Geometry::FRemeshMeshOp::CalculateTargetEdgeLength
          (FDynamicMesh3 *param_1,int param_2,double param_3)

{
  code *pcVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  double dVar4;
  TVector2<double> local_18;
  
  if (param_3 <= 0.0) {
    if (param_1 == (FDynamicMesh3 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\RemeshMeshOp.cpp"
                         ,0x103,
                         L"FRemeshMeshOp: Expected either a non-zero precomputed mesh area or a valid Mesh pointer"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        dVar4 = (double)(*pcVar1)();
        return dVar4;
      }
    }
    pTVar3 = TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea(&local_18,param_1);
    param_3 = (pTVar3->field0_0x0)._s_0.Y;
  }
  return (double)((longlong)
                  ROUND(SQRT((param_3 / (double)param_2) * ___real_400279a74590331d) *
                        __real_4069000000000000 + __real_3fe0000000000000) >> 1) *
         __real_3f847ae147ae147b;
}

// CreateRemesher @ 14c97b700

TUniquePtr<UE::Geometry::FRemesher,TDefaultDelete<UE::Geometry::FRemesher>_> __thiscall
UE::Geometry::FRemeshMeshOp::CreateRemesher
          (FRemeshMeshOp *this,ERemeshType param_1,FDynamicMesh3 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TUniquePtr<UE::Geometry::FRemesher,TDefaultDelete<UE::Geometry::FRemesher>_> TVar4;
  FNormalFlowRemesher *this_00;
  FNormalFlowRemesher *pFVar5;
  FRemesher *this_01;
  FQueueRemesher *pFVar6;
  uint uVar7;
  undefined7 in_register_00000011;
  FRemesher *pFVar8;
  FDynamicMesh3 *in_R9;
  
  pFVar8 = (FRemesher *)CONCAT71(in_register_00000011,param_1);
  uVar7 = (uint)param_2 & 0xff;
  if ((char)param_2 == '\0') {
    pFVar6 = ::operator_new(0x380);
    if (pFVar6 == (FQueueRemesher *)0x0) {
      pFVar6 = (FQueueRemesher *)0x0;
    }
    else {
      pFVar6 = FQueueRemesher::FQueueRemesher(pFVar6,in_R9);
    }
    pFVar6->MaxRemeshIterations = this->MaxRemeshIterations;
    pFVar6->MinActiveEdgeFraction = this->MinActiveEdgeFraction;
  }
  else {
    if (uVar7 == 1) {
      this_01 = ::operator_new(0x260);
      if (this_01 != (FRemesher *)0x0) {
        pFVar6 = (FQueueRemesher *)FRemesher::FRemesher(this_01,in_R9);
        goto LAB_14c97b869;
      }
    }
    else {
      if (uVar7 == 2) {
        this_00 = ::operator_new(0x3e0);
        pFVar5 = (FNormalFlowRemesher *)0x0;
        if (this_00 != (FNormalFlowRemesher *)0x0) {
          pFVar5 = FNormalFlowRemesher::FNormalFlowRemesher(this_00,in_R9);
        }
        *(int *)&pFVar5->field_0x264 = this->MaxRemeshIterations;
        *(undefined8 *)&pFVar5->field_0x268 = 0;
        pFVar5->NumExtraProjectionIterations = this->ExtraProjectionIterations;
        iVar3 = this->TriangleCountHint;
        pFVar8->_padding_ = (longlong)pFVar5;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        pFVar5->MaxTriangleCount = iVar3;
        pFVar5->FaceProjectionPassesPerRemeshIteration =
             this->FaceProjectionPassesPerRemeshIteration;
        pFVar5->SurfaceProjectionSpeed = this->SurfaceProjectionSpeed;
        pFVar5->NormalAlignmentSpeed = this->NormalAlignmentSpeed;
        pFVar5->bSmoothInFillAreas = this->bSmoothInFillAreas;
        pFVar5->FillAreaDistanceMultiplier = this->FillAreaDistanceMultiplier;
        pFVar5->FillAreaSmoothMultiplier = this->FillAreaSmoothMultiplier;
        return (TUniquePtr<UE::Geometry::FRemesher,TDefaultDelete<UE::Geometry::FRemesher>_>)pFVar8;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\RemeshMeshOp.cpp"
                         ,0x33,L"Encountered unexpected Remesh Type");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (FRemesher *)(*pcVar1)();
        return (TUniquePtr<UE::Geometry::FRemesher,TDefaultDelete<UE::Geometry::FRemesher>_>)
               TVar4.Ptr;
      }
    }
    pFVar6 = (FQueueRemesher *)0x0;
  }
LAB_14c97b869:
  pFVar8->_padding_ = (longlong)pFVar6;
  return (TUniquePtr<UE::Geometry::FRemesher,TDefaultDelete<UE::Geometry::FRemesher>_>)pFVar8;
}

// SetTransform @ 14c9858c0

void __thiscall
UE::Geometry::FRemeshMeshOp::SetTransform(FRemeshMeshOp *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->Scale3D).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  return;
}

// SetUserSpecifiedConstraints @ 14c986300

void __thiscall
UE::Geometry::FRemeshMeshOp::SetUserSpecifiedConstraints
          (FRemeshMeshOp *this,FMeshConstraints *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *pTVar4;
  FConstraintProjectionData *pFVar5;
  
  TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
               *)&this->UserSpecifiedConstraints,
              (TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
               *)param_1);
  TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
               *)&(this->UserSpecifiedConstraints).Vertices,
              (TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
               *)&param_1->Vertices);
  (this->UserSpecifiedConstraints).FixedSetIDCounter = param_1->FixedSetIDCounter;
  pFVar5 = &(this->UserSpecifiedConstraints).ProjectionData;
  if (pFVar5 != &param_1->ProjectionData) {
    DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
              ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)
               (pFVar5->ProjectionCurves).AllocatorInstance.Data,
               (this->UserSpecifiedConstraints).ProjectionData.ProjectionCurves.ArrayNum);
    iVar2 = (param_1->ProjectionData).ProjectionCurves.ArrayNum;
    piVar1 = &(this->UserSpecifiedConstraints).ProjectionData.ProjectionCurves.ArrayMax;
    pTVar4 = (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)
             (param_1->ProjectionData).ProjectionCurves.AllocatorInstance.Data;
    iVar3 = *piVar1;
    (this->UserSpecifiedConstraints).ProjectionData.ProjectionCurves.ArrayNum = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
      return;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,iVar3,(ForAnyElementType *)pFVar5,iVar2,piVar1);
    ConstructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
              ((pFVar5->ProjectionCurves).AllocatorInstance.Data,pTVar4,iVar2);
  }
  return;
}

