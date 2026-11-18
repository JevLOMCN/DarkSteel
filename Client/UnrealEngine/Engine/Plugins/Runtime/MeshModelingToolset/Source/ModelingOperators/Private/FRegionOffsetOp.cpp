// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// CalculateResult @ 14c967d20

void __thiscall
UE::Geometry::FRegionOffsetOp::CalculateResult(FRegionOffsetOp *this,FProgressCancel *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRegionOffsetOp *local_res8;
  code *local_18;
  FRegionOffsetOp **local_10;
  
  if ((this->OriginalMeshShared).Object ==
      (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FRegionOffsetOp::CalculateResult'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_res8 = this;
  bVar2 = TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>::AccessSharedObject
                    ((this->OriginalMeshShared).Object,
                     (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  if (bVar2) {
    (**(code **)(this->_padding_ + 0x20))(this,this->_padding_,param_1);
  }
  return;
}

// CalculateResultInPlace @ 14c9720a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FRegionOffsetOp::CalculateResultInPlace
          (FRegionOffsetOp *this,FDynamicMesh3 *param_1,FProgressCancel *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *_Src;
  undefined ***pppuVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  undefined1 auStackY_198 [32];
  undefined **local_148 [4];
  undefined1 local_128 [48];
  undefined4 local_f8;
  undefined4 uStack_f4;
  FRegionOffsetOp *pFStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  EVertexExtrusionVectorType local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  FRegionOffsetOp *pFStack_b0;
  FDynamicMesh3 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  bool local_94;
  bool local_93;
  int local_88;
  bool local_84;
  bool local_83;
  bool local_82;
  bool local_81;
  double local_80;
  int local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_2 != (FProgressCancel *)0x0) {
    if (param_2->WasCancelled != false) {
      return false;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_2->CancelF);
    pcVar2 = *(code **)&param_2->CancelF;
    plVar3 = *(longlong **)&(param_2->CancelF).field_0x28;
    plVar7 = (longlong *)&(param_2->CancelF).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    bVar5 = (bool)(*pcVar2)(uVar6);
    param_2->WasCancelled = bVar5;
    if (bVar5 != false) {
      return false;
    }
  }
  if ((double)CONCAT44((uint)((ulonglong)this->OffsetDistance >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(this->OffsetDistance,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
      < __real_3e45798ee2308c3a) {
    return true;
  }
  FOffsetMeshRegion::FOffsetMeshRegion((FOffsetMeshRegion *)local_128,param_1);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_128 + 0x10) != &this->TriangleSelection) {
    iVar1 = (this->TriangleSelection).ArrayNum;
    _Src = (this->TriangleSelection).AllocatorInstance.Data;
    local_128._24_4_ = iVar1;
    if ((iVar1 == 0) && (local_128._28_4_ == 0)) {
      local_128._28_4_ = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,local_128._28_4_,(ForAnyElementType *)(local_128 + 0x10),iVar1,
                 (int *)(local_128 + 0x1c));
      if (iVar1 != 0) {
        memcpy((void *)local_128._16_8_,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  pcVar2 = local_c8;
  local_148[2]._0_4_ = local_a8._0_4_;
  local_148[2]._4_4_ = local_a8._4_4_;
  pppuVar4 = (undefined ***)CONCAT44(uStack_9c,uStack_a0);
  local_88 = this->NumSubdivisions;
  if (this->bInferGroupsFromNeighbours == false) {
    local_148[0] = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::`13'::<lambda_2>,0,0>
                    ::_vftable_;
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l13::<lambda_2>,bool,int,int>
               ::Call;
  }
  else {
    local_148[0] = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::`11'::<lambda_1>,0,0>
                    ::_vftable_;
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l11::<lambda_1>,bool,int,int>
               ::Call;
  }
  local_a8 = param_1;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_b8 = local_148[0]._0_4_;
  uStack_b4 = local_148[0]._4_4_;
  pFStack_b0 = this;
  if (pcVar2 != (code *)0x0) {
    pppuVar8 = local_148;
    if (pppuVar4 != (undefined ***)0x0) {
      pppuVar8 = pppuVar4;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  uVar6 = local_128._32_8_;
  local_84 = this->bRemapExtrudeGroups == false;
  local_83 = this->bNewGroupPerSubdivision;
  local_82 = this->bUVIslandPerGroup;
  local_78 = this->SetMaterialID;
  local_81 = this->bInferMaterialID;
  local_80 = this->CreaseAngleThresholdDeg;
  local_98 = (float)this->UVScaleFactor;
  local_d0 = VertexNormal;
  if (this->OffsetMode == FaceNormals) {
    local_d0 = SelectionTriNormalsAngleWeightedAverage;
  }
  else {
    if (this->OffsetMode == ApproximateConstantThickness) {
      local_d0 = SelectionTriNormalsAngleWeightedAdjusted;
    }
  }
  pppuVar4 = (undefined ***)CONCAT44(uStack_dc,uStack_e0);
  local_128._32_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l2::<lambda_3>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
       ::Call;
  local_128._40_8_ = uStack_c0;
  local_e8 = local_148[2]._0_4_;
  uStack_e4 = local_148[2]._4_4_;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_f8 = 0x528d86c8;
  uStack_f4 = 1;
  pFStack_f0 = this;
  if (uVar6 != 0) {
    pppuVar8 = local_148;
    if (pppuVar4 != (undefined ***)0x0) {
      pppuVar8 = pppuVar4;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  local_94 = this->bShellsToSolids;
  local_93 = 0.0 < this->OffsetDistance;
  FOffsetMeshRegion::Apply((FOffsetMeshRegion *)local_128);
  if (param_2 != (FProgressCancel *)0x0) {
    bVar5 = FProgressCancel::Cancelled(param_2);
    if (bVar5) {
      bVar5 = false;
      goto LAB_14c9723b9;
    }
  }
  if (this->bRecomputeNormals != false) {
    FMeshNormals::RecomputeOverlayTriNormals(param_1,&local_60,true,true);
  }
  bVar5 = true;
LAB_14c9723b9:
  FOffsetMeshRegion::~FOffsetMeshRegion((FOffsetMeshRegion *)local_128);
  return bVar5;
}

