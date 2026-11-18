// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// FExtrudeEdgeOp @ 14cd4ed90

FExtrudeEdgeOp * __thiscall
PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::FExtrudeEdgeOp(FExtrudeEdgeOp *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  *(undefined ***)this = &___7FExtrudeEdgeOp_PolyEditExtrudeEdgeActivityLocals__6B_;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->OriginalMeshTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->OriginalMeshTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->OriginalMeshTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OriginalMeshTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->OriginalMeshTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->OriginalMeshTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->OriginalMeshTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OriginalMeshTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->OriginalMeshTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->OriginalMeshTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->OriginalMeshTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->OriginalMeshTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->ScalingAdjustmentLimit = 1.0;
  (this->SelectedEids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedEids).ArrayNum = 0;
  (this->SelectedEids).ArrayMax = 0;
  (this->GroupsToSetPerEid).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupsToSetPerEid).ArrayNum = 0;
  (this->GroupsToSetPerEid).ArrayMax = 0;
  this->bAssignAnyBoundaryNeighborToUnmatched = false;
  this->bGatherGroupBoundariesForRender = false;
  this->bGatherAllEdgesForRender = false;
  (this->NewSelectionEids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewSelectionEids).ArrayNum = 0;
  (this->NewSelectionEids).ArrayMax = 0;
  (this->EdgesToRender).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgesToRender).ArrayNum = 0;
  (this->EdgesToRender).ArrayMax = 0;
  *(undefined8 *)&this->DesiredExtrudeDirections = 0;
  *(undefined8 *)&(this->DesiredExtrudeDirections).field_0x8 = 0;
  *(undefined8 *)&(this->DesiredExtrudeDirections).field_0x20 = 0;
  *(undefined4 *)&(this->DesiredExtrudeDirections).field_0x28 = 0;
  *(undefined4 *)&(this->DesiredExtrudeDirections).field_0x2c = 0x80;
  *(undefined4 *)&(this->DesiredExtrudeDirections).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DesiredExtrudeDirections).field_0x34 = 0;
  *(undefined8 *)&(this->DesiredExtrudeDirections).field_0x40 = 0;
  *(undefined4 *)&(this->DesiredExtrudeDirections).field_0x48 = 0;
  return this;
}

// ~FExtrudeEdgeOp @ 14cd530c0

void __thiscall
PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::~FExtrudeEdgeOp(FExtrudeEdgeOp *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7FExtrudeEdgeOp_PolyEditExtrudeEdgeActivityLocals__6B_;
  *(undefined4 *)&(this->DesiredExtrudeDirections).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DesiredExtrudeDirections).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DesiredExtrudeDirections);
  pFVar2 = (this->EdgesToRender).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NewSelectionEids).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GroupsToSetPerEid).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SelectedEids).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

// CalculateResult @ 14cd60a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::CalculateResult
          (FExtrudeEdgeOp *this,FProgressCancel *param_1)

{
  int iVar1;
  code *pcVar2;
  FDynamicMesh3 *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined ***pppuVar14;
  longlong lVar15;
  bool *pbVar16;
  longlong lVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStackY_2a8 [32];
  undefined1 local_268;
  undefined1 local_267 [3];
  int local_264;
  undefined8 local_260;
  uint local_258 [2];
  int local_250 [2];
  undefined8 local_248;
  undefined4 local_240;
  TArray<int,TSizedDefaultAllocator<32>_> local_238;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [64];
  undefined **local_168;
  FExtrudeEdgeOp *pFStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_140;
  ForAnyElementType local_128;
  uint local_120;
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  code *local_108;
  undefined8 uStack_100;
  longlong local_f8 [4];
  code *local_d8;
  undefined8 uStack_d0;
  longlong local_c8 [4];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar2 = *(code **)&param_1->CancelF;
    plVar12 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar11 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar12 != (longlong *)0x0) {
      plVar11 = plVar12;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    bVar8 = (bool)(*pcVar2)(uVar9);
    param_1->WasCancelled = bVar8;
    if (bVar8 != false) {
      return;
    }
  }
  pFVar3 = *(FDynamicMesh3 **)&this->field_0x8;
  if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Geometry::FDynamicMesh3::Copy(pFVar3,(this->OriginalMesh).Object,true,true,true,true);
  local_1e8 = (this->OriginalMeshTransform).Rotation.ZW.m128d_f64[0];
  dStack_1e0 = (this->OriginalMeshTransform).Rotation.ZW.m128d_f64[1];
  local_1f8 = (this->OriginalMeshTransform).Rotation.XY.m128d_f64[0];
  dStack_1f0 = (this->OriginalMeshTransform).Rotation.XY.m128d_f64[1];
  local_210 = (this->OriginalMeshTransform).Scale3D.XY.m128d_f64[0];
  dStack_208 = (this->OriginalMeshTransform).Scale3D.XY.m128d_f64[1];
  local_218 = (this->OriginalMeshTransform).Translation.ZW.m128d_f64[0];
  local_228 = (this->OriginalMeshTransform).Translation.XY.m128d_f64[0];
  dStack_220 = (this->OriginalMeshTransform).Translation.XY.m128d_f64[1];
  local_200 = (this->OriginalMeshTransform).Scale3D.ZW.m128d_f64[0];
  *(double *)&this->field_0x10 = local_1f8;
  *(double *)&this->field_0x18 = dStack_1f0;
  *(double *)&this->field_0x20 = local_1e8;
  *(double *)&this->field_0x28 = dStack_1e0;
  *(double *)&this->field_0x30 = local_228;
  *(double *)&this->field_0x38 = dStack_220;
  *(double *)&this->field_0x40 = local_218;
  *(double *)&this->field_0x48 = local_210;
  *(double *)&this->field_0x50 = dStack_208;
  *(double *)&this->field_0x58 = local_200;
  local_1d8 = local_228;
  dStack_1d0 = dStack_220;
  local_1c8 = local_218;
  dStack_1c0 = local_210;
  dStack_1b8 = dStack_208;
  dStack_1b0 = local_200;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar2 = *(code **)&param_1->CancelF;
    plVar12 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar11 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar12 != (longlong *)0x0) {
      plVar11 = plVar12;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    bVar8 = (bool)(*pcVar2)(uVar9);
    param_1->WasCancelled = bVar8;
    if (bVar8 != false) {
      return;
    }
  }
  if (this->DirectionMode == LocalExtrudeFrames) {
    uVar9 = *(undefined8 *)&(this->LocalFrameParams).field0_0x0;
    uVar20 = (uint)uVar9 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar21 = (uint)((ulonglong)uVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar21,uVar20) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar21,uVar20) == __real_3f1a36e2e0000000) &&
        (uVar9 = *(undefined8 *)((longlong)&(this->LocalFrameParams).field0_0x0 + 8),
        uVar20 = (uint)uVar9 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar21 = (uint)((ulonglong)uVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar21,uVar20) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar21,uVar20) == __real_3f1a36e2e0000000)) &&
       (uVar9 = *(undefined8 *)((longlong)&(this->LocalFrameParams).field0_0x0 + 0x10),
       uVar20 = (uint)uVar9 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar21 = (uint)((ulonglong)uVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar21,uVar20) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar21,uVar20) == __real_3f1a36e2e0000000)) {
      return;
    }
  }
  else if ((((this->DirectionMode == SingleDirection) &&
            (uVar9 = *(undefined8 *)&(this->SingleDirectionVector).field0_0x0,
            uVar20 = (uint)uVar9 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar21 = (uint)((ulonglong)uVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
            , (double)CONCAT44(uVar21,uVar20) < __real_3f1a36e2e0000000 ||
              (double)CONCAT44(uVar21,uVar20) == __real_3f1a36e2e0000000)) &&
           (uVar9 = *(undefined8 *)((longlong)&(this->SingleDirectionVector).field0_0x0 + 8),
           uVar20 = (uint)uVar9 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar21 = (uint)((ulonglong)uVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar21,uVar20) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar21,uVar20) == __real_3f1a36e2e0000000)) &&
          (uVar9 = *(undefined8 *)((longlong)&(this->SingleDirectionVector).field0_0x0 + 0x10),
          uVar20 = (uint)uVar9 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar21 = (uint)((ulonglong)uVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar21,uVar20) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar21,uVar20) == __real_3f1a36e2e0000000)) {
    return;
  }
  UE::Geometry::FExtrudeBoundaryEdges::FExtrudeBoundaryEdges
            ((FExtrudeBoundaryEdges *)local_1a8,*(FDynamicMesh3 **)&this->field_0x8);
  uVar7 = uStack_14c;
  uVar6 = uStack_150;
  uVar5 = local_1a8._56_8_;
  uVar9 = local_1a8._48_8_;
  if (this->DirectionMode == LocalExtrudeFrames) {
    local_1a8._48_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::CalculateResult'::__l13::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Geometry::FExtrudeBoundaryEdges::FExtrudeFrame_const_&,int>
         ::Call;
    local_1a8._56_8_ = uStack_d0;
    local_158 = (undefined4)local_c8[2];
    uStack_154 = local_c8[2]._4_4_;
    uStack_150 = 0;
    uStack_14c = 0;
    local_168 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__N___CalculateResult_FExtrudeEdgeOp_PolyEditExtrudeEdgeActivityLocals__UEAAXPEAVFProgressCancel___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    pFStack_160 = this;
    local_d8 = (code *)uVar9;
    uStack_d0 = uVar5;
    if ((code *)uVar9 == (code *)0x0) goto LAB_14cd60e13;
    plVar12 = local_c8;
  }
  else {
    if (this->DirectionMode != SingleDirection) goto LAB_14cd60e13;
    local_1a8._48_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::CalculateResult'::__l13::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Geometry::FExtrudeBoundaryEdges::FExtrudeFrame_const_&,int>
         ::Call;
    local_1a8._56_8_ = uStack_100;
    local_158 = (undefined4)local_f8[2];
    uStack_154 = local_f8[2]._4_4_;
    uStack_150 = 0;
    uStack_14c = 0;
    local_168 = &
                ___7__TFunction_OwnedObject_V<lambda_2>__N___CalculateResult_FExtrudeEdgeOp_PolyEditExtrudeEdgeActivityLocals__UEAAXPEAVFProgressCancel___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    pFStack_160 = this;
    local_108 = (code *)uVar9;
    uStack_100 = uVar5;
    if ((code *)uVar9 == (code *)0x0) goto LAB_14cd60e13;
    plVar12 = local_f8;
  }
  uStack_14c = 0;
  uStack_150 = 0;
  if ((longlong *)CONCAT44(uVar7,uVar6) != (longlong *)0x0) {
    plVar12 = (longlong *)CONCAT44(uVar7,uVar6);
  }
  pFStack_160 = this;
  (**(code **)(*plVar12 + 0x10))();
LAB_14cd60e13:
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_1a8 + 0x10) != &this->SelectedEids) {
    iVar1 = (this->SelectedEids).ArrayNum;
    pFVar4 = (this->SelectedEids).AllocatorInstance.Data;
    local_1a8._24_4_ = iVar1;
    if ((iVar1 == 0) && (local_1a8._28_4_ == 0)) {
      local_1a8._28_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,local_1a8._28_4_,(ForAnyElementType *)(local_1a8 + 0x10),iVar1,
                 (int *)(local_1a8 + 0x1c));
      if (iVar1 != 0) {
        memcpy((void *)local_1a8._16_8_,pFVar4,(longlong)iVar1 << 2);
      }
    }
  }
  if ((TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 *)&this->GroupsToSetPerEid !=
      &local_140) {
    if (local_140.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_140.TypedValue.AllocatorInstance.Data);
    }
    local_140.TypedValue.ArrayNum = (this->GroupsToSetPerEid).ArrayNum;
    lVar15 = (longlong)local_140.TypedValue.ArrayNum;
    pFVar4 = (this->GroupsToSetPerEid).AllocatorInstance.Data;
    local_140.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
    if (local_140.TypedValue.ArrayNum == 0) {
      local_140.TypedValue.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_140.TypedValue.ArrayNum,0,&local_140.TypedValue.AllocatorInstance,
                 local_140.TypedValue.ArrayNum,&local_140.TypedValue.ArrayMax);
      memcpy((void *)local_140.TypedValue.AllocatorInstance.Data,pFVar4,lVar15 << 2);
    }
    if ((local_140.TypedValue.ArrayMax == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_1a8[0x20] = this->DirectionMode == LocalExtrudeFrames;
  local_148 = this->ScalingAdjustmentLimit;
  local_1a8[0x21] = this->bAssignAnyBoundaryNeighborToUnmatched;
  if (((param_1 == (FProgressCancel *)0x0) || (bVar8 = FProgressCancel::Cancelled(param_1), !bVar8))
     && ((UE::Geometry::FExtrudeBoundaryEdges::Apply((FExtrudeBoundaryEdges *)local_1a8,param_1),
         param_1 == (FProgressCancel *)0x0 || (bVar8 = FProgressCancel::Cancelled(param_1), !bVar8))
        )) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->NewSelectionEids,&local_118);
    uVar20 = local_120;
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    if (this->bGatherAllEdgesForRender == false) {
      if (this->bGatherGroupBoundariesForRender != false) {
        uVar13 = (ulonglong)(int)local_120;
        pFVar4 = local_128.Data + uVar13 * 4;
        FVar19.Data = local_128.Data;
        while( true ) {
          if ((uint)uVar13 != uVar20) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_267);
          }
          if (FVar19.Data == pFVar4) break;
          pFVar3 = *(FDynamicMesh3 **)&this->field_0x8;
          uVar13 = (ulonglong)(*(uint *)FVar19.Data & 0x1ff);
          lVar15 = *(longlong *)
                    ((pFVar3->TriangleEdges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(*(uint *)FVar19.Data >> 9) * 8);
          local_260 = *(undefined8 *)(lVar15 + uVar13 * 0xc);
          uVar21 = *(uint *)(lVar15 + 8 + uVar13 * 0xc);
          local_258[0] = uVar21;
          if ((*(int *)(*(longlong *)
                         ((pFVar3->Edges).Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)local_260 >> 9) * 8) + 0xc +
                       (ulonglong)((uint)local_260 & 0x1ff) * 0x10) == -1) ||
             (bVar8 = UE::Geometry::FDynamicMesh3::IsGroupBoundaryEdge(pFVar3,(uint)local_260),
             bVar8)) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_a8,&local_264,(bool *)&local_260);
          }
          if ((*(int *)(*(longlong *)
                         (((*(FDynamicMesh3 **)&this->field_0x8)->Edges).Blocks.AllocatorInstance.
                          Data + (ulonglong)(local_260._4_4_ >> 9) * 8) + 0xc +
                       (ulonglong)(local_260._4_4_ & 0x1ff) * 0x10) == -1) ||
             (bVar8 = UE::Geometry::FDynamicMesh3::IsGroupBoundaryEdge
                                (*(FDynamicMesh3 **)&this->field_0x8,local_260._4_4_), bVar8)) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_a8,&local_264,(bool *)((longlong)&local_260 + 4));
          }
          if ((*(int *)(*(longlong *)
                         (((*(FDynamicMesh3 **)&this->field_0x8)->Edges).Blocks.AllocatorInstance.
                          Data + (ulonglong)(uVar21 >> 9) * 8) + 0xc +
                       (ulonglong)(local_258[0] & 0x1ff) * 0x10) == -1) ||
             (bVar8 = UE::Geometry::FDynamicMesh3::IsGroupBoundaryEdge
                                (*(FDynamicMesh3 **)&this->field_0x8,uVar21), bVar8)) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_a8,&local_264,(bool *)local_258);
          }
          uVar13 = (ulonglong)local_120;
          FVar19.Data = FVar19.Data + 4;
        }
      }
    }
    else {
      uVar13 = (ulonglong)(int)local_120;
      pFVar4 = local_128.Data + uVar13 * 4;
      FVar19.Data = local_128.Data;
      while( true ) {
        if ((uint)uVar13 != uVar20) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_268)
          ;
        }
        if (FVar19.Data == pFVar4) break;
        pbVar16 = (bool *)&local_248;
        lVar17 = 3;
        uVar13 = (ulonglong)(*(uint *)FVar19.Data & 0x1ff);
        lVar15 = *(longlong *)
                  (*(longlong *)(*(longlong *)&this->field_0x8 + 0x180) +
                  (ulonglong)(*(uint *)FVar19.Data >> 9) * 8);
        local_248 = *(undefined8 *)(lVar15 + uVar13 * 0xc);
        local_240 = *(undefined4 *)(lVar15 + 8 + uVar13 * 0xc);
        do {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_a8,local_250,pbVar16);
          pbVar16 = pbVar16 + 4;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        uVar13 = (ulonglong)local_120;
        FVar19.Data = FVar19.Data + 4;
      }
    }
    pTVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_a8,&local_238);
    pTVar18 = &this->EdgesToRender;
    if (pTVar18 != pTVar10) {
      pFVar4 = (pTVar18->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar18->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->EdgesToRender).ArrayNum = pTVar10->ArrayNum;
      (this->EdgesToRender).ArrayMax = pTVar10->ArrayMax;
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0;
    }
    if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.AllocatorInstance.Data);
    }
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
  }
  local_1a8._0_8_ = &___7FExtrudeBoundaryEdges_Geometry_UE__6B_;
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  if ((local_140.TypedValue.ArrayMax != -1) &&
     (local_140.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_140.TypedValue.AllocatorInstance.Data);
  }
  if ((code *)local_1a8._48_8_ != (code *)0x0) {
    pppuVar14 = &local_168;
    if ((undefined ***)CONCAT44(uStack_14c,uStack_150) != (undefined ***)0x0) {
      pppuVar14 = (undefined ***)CONCAT44(uStack_14c,uStack_150);
    }
    (*(code *)(*pppuVar14)[2])();
  }
  if ((FScriptContainerElement *)local_1a8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._16_8_);
  }
  return;
}

