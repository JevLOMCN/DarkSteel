// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// FExtrudeBoundaryEdges @ 14c6de6d0

FExtrudeBoundaryEdges * __thiscall
UE::Geometry::FExtrudeBoundaryEdges::FExtrudeBoundaryEdges
          (FExtrudeBoundaryEdges *this,FDynamicMesh3 *param_1)

{
  undefined1 *puVar1;
  
  this->Mesh = param_1;
  this->_padding_ = (longlong)&___7FExtrudeBoundaryEdges_Geometry_UE__6B_;
  (this->InputEids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputEids).ArrayNum = 0;
  (this->InputEids).ArrayMax = 0;
  this->bUsePerVertexExtrudeFrames = true;
  this->bAssignAnyBoundaryNeighborToUnmatched = false;
  *(undefined8 *)&this->OffsetPositionFunc = 0;
  *(undefined8 *)&(this->OffsetPositionFunc).field_0x28 = 0;
  *(undefined ***)&(this->OffsetPositionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_29_>_FExtrudeBoundaryEdges_Geometry_UE___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->OffsetPositionFunc).field_0x18;
  *(FExtrudeBoundaryEdges **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OffsetPositionFunc =
         Core::Private::Function::
         TFunctionRefCaller<UE::Geometry::FExtrudeBoundaryEdges::<lambda_29_>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Geometry::FExtrudeBoundaryEdges::FExtrudeFrame_const_&,int>
         ::Call;
  }
  (this->GroupsToSetPerEid).field0_0x0.TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->ScalingAdjustmentLimit = 1.0;
  this->DefaultOffsetDistance = 1.0;
  (this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayNum = 0;
  (this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayMax = -1;
  (this->NewTids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewTids).ArrayNum = 0;
  (this->NewTids).ArrayMax = 0;
  (this->NewExtrudedEids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewExtrudedEids).ArrayNum = 0;
  (this->NewExtrudedEids).ArrayMax = 0;
  return this;
}

// ~FExtrudeBoundaryEdges @ 14c6e1350

void __thiscall
UE::Geometry::FExtrudeBoundaryEdges::~FExtrudeBoundaryEdges(FExtrudeBoundaryEdges *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FExtrudeBoundaryEdges_Geometry_UE__6B_;
  pFVar1 = (this->NewExtrudedEids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewTids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->GroupsToSetPerEid).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->OffsetPositionFunc != 0) {
    plVar2 = *(longlong **)&(this->OffsetPositionFunc).field_0x28;
    plVar3 = (longlong *)&(this->OffsetPositionFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar1 = (this->InputEids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14c6e9190

bool __thiscall
`UE::Geometry::FExtrudeBoundaryEdges::GetExtrudeFrame'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  char *pcVar8;
  TVector<double> *pTVar9;
  atomic<unsigned_char> *paVar10;
  int iVar11;
  uint local_58;
  uint uStack_54;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  TVector<double> local_20;
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_1 == -1) {
    (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = (double)uVar5;
    (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_4->field0_0x0)._s_0.Y = (double)uVar5;
    (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return true;
  }
  if (*(int *)(*(longlong *)
                (((*(FDynamicMesh3 **)this)->Edges).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_1 >> 9) * 8) + 0xc + (ulonglong)(param_1 & 0x1ff) * 0x10) ==
      -1) {
    UE::Geometry::FDynamicMesh3::GetOrientedBoundaryEdgeV(*(FDynamicMesh3 **)this,(int)&local_58);
    if (param_2) {
      if (uStack_54 == *(uint *)((longlong)this + 8)) {
LAB_14c6e92ac:
        pTVar9 = UE::Geometry::FDynamicMesh3::GetTriNormal
                           (*(FDynamicMesh3 **)this,&local_20,
                            *(int *)(*(longlong *)
                                      (((*(FDynamicMesh3 **)this)->Edges).Blocks.AllocatorInstance.
                                       Data + (ulonglong)((uint)param_1 >> 9) * 8) + 8 +
                                    (ulonglong)(param_1 & 0x1ff) * 0x10));
        dVar4 = (pTVar9->field0_0x0)._s_0.Y;
        (param_4->field0_0x0)._s_0.X = (pTVar9->field0_0x0)._s_0.X;
        (param_4->field0_0x0)._s_0.Y = dVar4;
        (param_4->field0_0x0)._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)(uStack_54 >> 9) * 8);
        pdVar1 = (double *)(lVar2 + (ulonglong)(uStack_54 & 0x1ff) * 0x18);
        local_50 = *pdVar1;
        dStack_48 = pdVar1[1];
        local_40 = *(double *)(lVar2 + 0x10 + (ulonglong)(uStack_54 & 0x1ff) * 0x18);
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)(local_58 >> 9) * 8);
        pdVar1 = (double *)(lVar2 + (ulonglong)(local_58 & 0x1ff) * 0x18);
        local_38 = *pdVar1;
        dStack_30 = pdVar1[1];
        local_28 = *(double *)(lVar2 + 0x10 + (ulonglong)(local_58 & 0x1ff) * 0x18);
        (param_3->field0_0x0)._s_0.X = local_50 - local_38;
        (param_3->field0_0x0)._s_0.Y = dStack_48 - dStack_30;
        (param_3->field0_0x0)._s_0.Z = local_40 - local_28;
        UE::Math::TVector<double>::Normalize(param_3,__real_3e45798ee0000000);
        return true;
      }
      pcVar8 = "Vids.B == Vid";
      iVar11 = 0x2a7;
      paVar10 = &bGEnsureHasExecuted<_8213365985634155865>;
    }
    else {
      if (local_58 == *(uint *)((longlong)this + 8)) goto LAB_14c6e92ac;
      pcVar8 = "Vids.A == Vid";
      iVar11 = 0x2ab;
      paVar10 = &bGEnsureHasExecuted<_8213365985634155861>;
    }
  }
  else {
    pcVar8 = "Mesh.IsBoundaryEdge(Eid)";
    iVar11 = 0x2a1;
    paVar10 = &bGEnsureHasExecuted<_8213365985634155871>;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                     ,iVar11,pcVar8);
  if (!bVar6) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return (bool)uVar7;
}

// operator() @ 14c6efdc0

TVector<double> * __thiscall
UE::Geometry::FExtrudeBoundaryEdges::<lambda_29_>::operator()
          (<lambda_29_> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          FExtrudeFrame *param_2,int param_3)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  TVector<double> local_80;
  TVector<double> local_68 [4];
  
  dVar6 = __real_3ff0000000000000;
  local_b8._s_0.Y = 0.0;
  local_b8._s_0.Z = 0.0;
  dVar5 = this->__this->DefaultOffsetDistance;
  local_b8._s_0.X = dVar5;
  if (((param_2->InFrameScaleDirection).bIsSet == false) ||
     (__real_3ff0000000000000 == param_2->Scaling)) {
    pTVar4 = operator*<double>(local_68,&(param_2->Frame).Rotation,(TVector<double> *)&local_b8._s_0
                              );
    dVar5 = (param_2->Frame).Origin.field0_0x0._s_0.X + (pTVar4->field0_0x0)._s_0.X;
  }
  else {
    if ((param_2->InFrameScaleDirection).bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TVector<double> *)(*pcVar2)();
        return pTVar4;
      }
    }
    dVar6 = ((param_2->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Y * 0.0 +
             (param_2->InFrameScaleDirection).TypedValue.field0_0x0._s_0.X * dVar5 +
            (param_2->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Z * 0.0) *
            (param_2->Scaling - dVar6);
    local_98._s_0.X = dVar6 * (param_2->InFrameScaleDirection).TypedValue.field0_0x0._s_0.X + dVar5;
    local_98._s_0.Y = dVar6 * (param_2->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Y + 0.0;
    local_98._s_0.Z = dVar6 * (param_2->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Z + 0.0;
    pTVar4 = operator*<double>(&local_80,&(param_2->Frame).Rotation,
                               (TVector<double> *)&local_98._s_0);
    dVar5 = (pTVar4->field0_0x0)._s_0.X + (param_2->Frame).Origin.field0_0x0._s_0.X;
  }
  dVar6 = (pTVar4->field0_0x0)._s_0.Z;
  dVar1 = (param_2->Frame).Origin.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (pTVar4->field0_0x0)._s_0.Y + (param_2->Frame).Origin.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6 + dVar1;
  return __return_storage_ptr__;
}

// Apply @ 14c708930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FExtrudeBoundaryEdges::Apply(FExtrudeBoundaryEdges *this,FProgressCancel *param_1)

{
  int *piVar1;
  FMutex *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 *puVar4;
  atomic<unsigned_char> aVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  FDynamicMesh3 *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FDynamicMeshAttributeSet *pFVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ForAnyElementType FVar17;
  int iVar18;
  bool bVar19;
  undefined1 uVar20;
  short sVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  FExtrudeFrame *pFVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  longlong *plVar30;
  longlong *plVar31;
  FDynamicMeshAttributeSet *pFVar32;
  ulonglong uVar33;
  undefined1 *puVar34;
  uint uVar35;
  ForAnyElementType FVar36;
  uint *puVar37;
  FScriptContainerElement *pFVar38;
  uint uVar39;
  FDynamicMeshAttributeSet *pFVar40;
  double *pdVar41;
  uint uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  undefined4 uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auStackY_488 [32];
  int local_438;
  undefined1 local_434;
  undefined1 local_433 [3];
  ForAnyElementType local_430;
  undefined8 local_428;
  int local_420;
  int local_41c;
  int local_418;
  int local_414;
  undefined1 local_40f;
  undefined1 local_40e [6];
  FScriptContainerElement *local_408;
  TArray<UE::Geometry::FExtrudeBoundaryEdges::FNewVertSourceData,TSizedDefaultAllocator<32>_>
  local_400;
  ForAnyElementType local_3f0;
  undefined8 local_3e8;
  code *local_3e0;
  undefined4 local_3d8;
  FProgressCancel *local_3d0;
  longlong local_3c8;
  int local_3c0;
  int local_3bc;
  FIndex3i_u_0 local_3b8;
  FIndex3i_u_0 local_3a8;
  FDynamicMesh3 *local_398;
  uint local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  code *local_370;
  undefined1 *local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  TVector<double>_u_0 local_330;
  TVector<double> local_318;
  TVector<double> local_300;
  TVector<double> local_2e8;
  TVector<double>_u_0 local_2c8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  TVector<double>_u_0 local_290;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  FScriptContainerElement local_208;
  undefined8 local_200;
  TVector<double> local_1f8;
  FDynamicMeshUVEditor local_1e0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_178;
  undefined8 local_170;
  FExtrudeFrame local_168;
  undefined1 local_108 [64];
  undefined1 *local_c8;
  int local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_3d0 = param_1;
  if ((this->Mesh == (FDynamicMesh3 *)0x0) || (*(longlong *)&this->OffsetPositionFunc == 0)) {
    bVar19 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8213365985634156203>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                        ,0x155,"Mesh && OffsetPositionFunc");
    if (!bVar19) {
      return false;
    }
    pcVar14 = (code *)swi(3);
    uVar20 = (*pcVar14)();
    return (bool)uVar20;
  }
  if ((this->InputEids).ArrayNum == 0) {
    return true;
  }
  if ((param_1 != (FProgressCancel *)0x0) && (bVar19 = FProgressCancel::Cancelled(param_1), bVar19))
  {
    return false;
  }
  local_400.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_400.ArrayNum = 0;
  local_400.ArrayMax = 0;
  local_430.Data = (FScriptContainerElement *)0x0;
  local_428 = 0;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_108._32_8_ = 0;
  local_108._40_4_ = 0;
  local_108._52_4_ = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_108._44_4_ = 0x80;
  local_108._48_4_ = 0xffffffff;
  bVar19 = GetInputEdgePairings
                     (this->Mesh,&this->InputEids,this->bAssignAnyBoundaryNeighborToUnmatched,
                      &local_400,
                      (TMap<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
                       *)local_108);
  if (!bVar19) {
    bVar19 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8213365985634156183>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                        ,0x169,"bSuccess");
    if (bVar19) {
      pcVar14 = (code *)swi(3);
      uVar20 = (*pcVar14)();
      return (bool)uVar20;
    }
    bVar19 = false;
    goto LAB_14c709aec;
  }
  if (local_400.ArrayNum == 0) {
    bVar19 = true;
    goto LAB_14c709aec;
  }
  if ((param_1 != (FProgressCancel *)0x0) && (bVar19 = FProgressCancel::Cancelled(param_1), bVar19))
  {
    bVar19 = false;
    goto LAB_14c709aec;
  }
  iVar23 = local_400.ArrayNum;
  pFVar29 = local_400.AllocatorInstance.Data + (longlong)local_400.ArrayNum * 0xc;
  FVar36.Data = local_400.AllocatorInstance.Data;
  while( true ) {
    if (local_400.ArrayNum != iVar23) {
      local_434 = 0;
      `TCheckedPointerIterator<UE::Geometry::FExtrudeBoundaryEdges::FNewVertSourceData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_434);
    }
    if (FVar36.Data == pFVar29) break;
    local_420 = FDynamicMesh3::AppendVertex(this->Mesh,this->Mesh,*(uint *)FVar36.Data);
    if (((local_430.Data <= (FScriptContainerElement *)&local_420) &&
        ((FScriptContainerElement *)&local_420 < local_430.Data + (longlong)local_428._4_4_ * 4)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar14 = (code *)swi(3);
      uVar20 = (*pcVar14)();
      return (bool)uVar20;
    }
    iVar22 = (int)local_428;
    if ((int)local_428 == local_428._4_4_) {
      iVar22 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_430,(int *)((longlong)&local_428 + 4));
    }
    FVar36.Data = FVar36.Data + 0xc;
    local_428 = CONCAT44(local_428._4_4_,iVar22 + 1);
    *(int *)(local_430.Data + (longlong)iVar22 * 4) = local_420;
  }
  if ((param_1 != (FProgressCancel *)0x0) && (bVar19 = FProgressCancel::Cancelled(param_1), bVar19))
  {
    bVar19 = false;
    goto LAB_14c709aec;
  }
  uVar27 = local_400._8_8_;
  local_3f0.Data = (FScriptContainerElement *)0x0;
  local_3e8 = 0;
  if (this->bUsePerVertexExtrudeFrames == false) {
LAB_14c708ddf:
    uVar16 = _UNK_15061cbc8;
    uVar15 = ___xmm_3ff00000000000000000000000000000;
    uVar27 = __real_3ff0000000000000;
    uVar33 = 0;
    if (0 < (int)local_428) {
      local_3c8 = 0;
      local_408 = (FScriptContainerElement *)0x0;
      uVar44 = uVar33;
      do {
        lVar28 = local_3c8;
        pFVar29 = local_408;
        uVar35 = (uint)uVar33;
        uVar39 = ~uVar35 >> 0x1f;
        uVar42 = 0;
        if ((int)uVar35 < (int)local_428) {
          uVar42 = uVar39;
        }
        if ((uVar42 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar14 = (code *)swi(3);
          uVar20 = (*pcVar14)();
          return (bool)uVar20;
        }
        uVar42 = *(uint *)(local_430.Data + lVar28);
        uVar24 = 0;
        if ((int)uVar35 < local_400.ArrayNum) {
          uVar24 = uVar39;
        }
        local_3e0 = (code *)CONCAT44(local_3e0._4_4_,uVar42);
        if ((uVar24 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar14 = (code *)swi(3);
          uVar20 = (*pcVar14)();
          return (bool)uVar20;
        }
        pFVar10 = this->Mesh;
        uVar49 = *(undefined4 *)(pFVar29 + local_400.AllocatorInstance.Data);
        if (this->bUsePerVertexExtrudeFrames == false) {
          local_178 = 0;
          pdVar41 = &local_1c8;
          local_170 = uVar27;
          local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1a0 = uVar15;
          uStack_198 = uVar16;
        }
        else {
          uVar24 = 0;
          if ((int)uVar35 < (int)local_3e8) {
            uVar24 = uVar39;
          }
          if ((uVar24 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar14 = (code *)swi(3);
            uVar20 = (*pcVar14)();
            return (bool)uVar20;
          }
          local_258 = *(double *)(local_3f0.Data + uVar44);
          uStack_250 = *(undefined8 *)(local_3f0.Data + uVar44 + 8);
          local_248 = *(undefined8 *)(local_3f0.Data + uVar44 + 0x10);
          uStack_240 = *(undefined8 *)(local_3f0.Data + uVar44 + 0x10 + 8);
          local_238 = *(undefined8 *)(local_3f0.Data + uVar44 + 0x20);
          uStack_230 = *(undefined8 *)(local_3f0.Data + uVar44 + 0x20 + 8);
          local_228 = *(undefined8 *)(local_3f0.Data + uVar44 + 0x30);
          local_208 = local_3f0.Data[uVar44 + 0x50];
          if (local_208 != (FScriptContainerElement)0x0) {
            local_220 = *(undefined8 *)(local_3f0.Data + uVar44 + 0x38);
            uStack_218 = *(undefined8 *)(local_3f0.Data + uVar44 + 0x38 + 8);
            local_210 = *(undefined8 *)(local_3f0.Data + uVar44 + 0x48);
          }
          local_200 = *(undefined8 *)(local_3f0.Data + uVar44 + 0x58);
          pdVar41 = &local_258;
        }
        uVar33 = (ulonglong)((uint)local_3e0 & 0x1ff);
        uVar43 = (ulonglong)(uVar42 >> 9);
        lVar28 = *(longlong *)((this->Mesh->Vertices).Blocks.AllocatorInstance.Data + uVar43 * 8);
        puVar4 = (undefined8 *)(lVar28 + uVar33 * 0x18);
        local_2a8 = *puVar4;
        uStack_2a0 = puVar4[1];
        local_298 = *(undefined8 *)(lVar28 + 0x10 + uVar33 * 0x18);
        local_3d8 = uVar49;
        Core::Private::Function::CheckCallable(*(void **)&this->OffsetPositionFunc);
        plVar30 = *(longlong **)&(this->OffsetPositionFunc).field_0x28;
        local_3e0 = *(code **)&this->OffsetPositionFunc;
        if (plVar30 == (longlong *)0x0) {
          plVar30 = (longlong *)&(this->OffsetPositionFunc).field_0x10;
        }
        uVar26 = (**(code **)(*plVar30 + 8))();
        (*local_3e0)(&local_388,uVar26,&local_2a8,pdVar41);
        sVar21 = _dclass(local_388);
        if (((sVar21 < 1) && (sVar21 = _dclass(uStack_380), uVar26 = local_378, sVar21 < 1)) &&
           (sVar21 = _dclass(), sVar21 < 1)) {
          lVar28 = *(longlong *)((pFVar10->Vertices).Blocks.AllocatorInstance.Data + uVar43 * 8);
          puVar4 = (undefined8 *)(lVar28 + uVar33 * 0x18);
          *puVar4 = local_388;
          puVar4[1] = uStack_380;
          *(undefined8 *)(lVar28 + 0x10 + uVar33 * 0x18) = uVar26;
          if ((pFVar10->ChangeStampShape).bIsEnabled != false) {
            this_00 = &(pFVar10->ChangeStampShape).Mutex;
            LOCK();
            bVar19 = this_00->State == (atomic<unsigned_char>)0x0;
            if (bVar19) {
              this_00->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar19) {
              FMutex::LockSlow(this_00);
            }
            puVar37 = &(pFVar10->ChangeStampShape).Value;
            *puVar37 = *puVar37 + 1;
            LOCK();
            aVar5 = this_00->State;
            this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
            UNLOCK();
            if (((byte)aVar5 & 2) != 0) {
              FMutex::WakeWaitingThread(this_00);
            }
          }
        }
        uVar33 = (ulonglong)(uVar35 + 1);
        local_3c8 = local_3c8 + 4;
        local_408 = local_408 + 0xc;
        uVar44 = uVar44 + 0x60;
        param_1 = local_3d0;
      } while ((int)(uVar35 + 1) < (int)local_428);
    }
    uVar42 = 0;
    if (param_1 != (FProgressCancel *)0x0) {
      if (param_1->WasCancelled == false) {
        Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
        pcVar14 = *(code **)&param_1->CancelF;
        plVar30 = *(longlong **)&(param_1->CancelF).field_0x28;
        plVar31 = (longlong *)&(param_1->CancelF).field_0x10;
        if (plVar30 != (longlong *)0x0) {
          plVar31 = plVar30;
        }
        uVar27 = (**(code **)(*plVar31 + 8))();
        bVar19 = (bool)(*pcVar14)(uVar27);
        param_1->WasCancelled = bVar19;
        if (bVar19 == false) goto LAB_14c70915b;
      }
      goto LAB_14c7093d8;
    }
LAB_14c70915b:
    local_438 = 0;
    if (((this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayMax != -1) &&
       ((this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayNum != (this->InputEids).ArrayNum)) {
      bVar19 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8213365985634156131>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                          ,0x19d,"GroupsToSetPerEid->Num() == InputEids.Num()");
      if (bVar19) {
        pcVar14 = (code *)swi(3);
        uVar20 = (*pcVar14)();
        return (bool)uVar20;
      }
      if ((this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayMax != -1) {
        pFVar29 = (this->GroupsToSetPerEid).field0_0x0.TypedValue.AllocatorInstance.Data;
        if (pFVar29 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar29);
        }
        (this->GroupsToSetPerEid).field0_0x0.TypedValue.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayNum = 0;
        (this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayMax = -1;
      }
    }
    pFVar10 = this->Mesh;
    if (((pFVar10->TriangleGroups).bIsSet != false) &&
       ((this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayMax == -1)) {
      local_438 = pFVar10->GroupIDCounter;
      pFVar10->GroupIDCounter = local_438 + 1;
    }
    if (0 < (this->InputEids).ArrayNum) {
      local_408 = (FScriptContainerElement *)0x0;
      do {
        pFVar29 = local_408;
        uVar35 = 0;
        if ((int)uVar42 < (this->InputEids).ArrayNum) {
          uVar35 = ~uVar42 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar14 = (code *)swi(3);
          uVar20 = (*pcVar14)();
          return (bool)uVar20;
        }
        uVar35 = *(uint *)(pFVar29 + (longlong)(this->InputEids).AllocatorInstance.Data);
        if ((this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayMax != -1) {
          uVar39 = 0;
          if ((int)uVar42 < (this->GroupsToSetPerEid).field0_0x0.TypedValue.ArrayNum) {
            uVar39 = ~uVar42 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar14 = (code *)swi(3);
            uVar20 = (*pcVar14)();
            return (bool)uVar20;
          }
          local_438 = *(int *)(pFVar29 +
                              (longlong)
                              (this->GroupsToSetPerEid).field0_0x0.TypedValue.AllocatorInstance.Data
                              );
        }
        if (*(int *)(*(longlong *)
                      ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar35 >> 9) * 8) + 0xc + (ulonglong)(uVar35 & 0x1ff) * 0x10) ==
            -1) {
          if (local_108._8_4_ != local_108._52_4_) {
            puVar34 = local_108 + 0x38;
            if (local_c8 != (undefined1 *)0x0) {
              puVar34 = local_c8;
            }
            iVar23 = *(int *)(puVar34 + (ulonglong)(local_c0 - 1U & uVar35) * 4);
            while (iVar23 != -1) {
              lVar28 = local_108._0_8_ + (longlong)iVar23 * 0x14;
              if (*(uint *)(local_108._0_8_ + (longlong)iVar23 * 0x14) == uVar35) {
                puVar37 = (uint *)(lVar28 + 4);
                if (lVar28 == 0) {
                  puVar37 = (uint *)0x0;
                }
                if ((((puVar37 != (uint *)0x0) && (-1 < (int)*puVar37)) &&
                    ((int)*puVar37 < (int)local_428)) &&
                   ((-1 < (int)puVar37[1] && ((int)puVar37[1] < (int)local_428)))) {
                  FDynamicMesh3::GetOrientedBoundaryEdgeV(this->Mesh,(int)&local_3c0);
                  iVar22 = local_3bc;
                  iVar23 = local_3c0;
                  uVar35 = *puVar37;
                  uVar39 = 0;
                  if ((int)uVar35 < (int)local_428) {
                    uVar39 = ~uVar35 >> 0x1f;
                  }
                  if (uVar39 == 0) {
                    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar19) {
                      pcVar14 = (code *)swi(3);
                      uVar20 = (*pcVar14)();
                      return (bool)uVar20;
                    }
                  }
                  uVar39 = puVar37[1];
                  local_3e0 = (code *)CONCAT44(local_3e0._4_4_,
                                               *(undefined4 *)
                                                (local_430.Data + (longlong)(int)uVar35 * 4));
                  uVar35 = 0;
                  if ((int)uVar39 < (int)local_428) {
                    uVar35 = ~uVar39 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar14 = (code *)swi(3);
                    uVar20 = (*pcVar14)();
                    return (bool)uVar20;
                  }
                  iVar9 = *(int *)(local_430.Data + (longlong)(int)uVar39 * 4);
                  pTVar2 = &this->NewTids;
                  local_3b8._s_0.A = iVar22;
                  local_3b8._s_0.B = iVar23;
                  local_3b8._s_0.C = iVar9;
                  local_41c = FDynamicMesh3::AppendTriangle
                                        (this->Mesh,(FIndex3i *)&local_3b8._s_0,local_438);
                  pFVar29 = (pTVar2->AllocatorInstance).Data;
                  if (((pFVar29 <= (FScriptContainerElement *)&local_41c) &&
                      ((FScriptContainerElement *)&local_41c <
                       pFVar29 + (longlong)(this->NewTids).ArrayMax * 4)) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar19)) {
                    pcVar14 = (code *)swi(3);
                    uVar20 = (*pcVar14)();
                    return (bool)uVar20;
                  }
                  iVar22 = (this->NewTids).ArrayNum;
                  if (iVar22 == (this->NewTids).ArrayMax) {
                    iVar22 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar2->AllocatorInstance,&(this->NewTids).ArrayMax);
                  }
                  iVar18 = (uint)local_3e0;
                  (this->NewTids).ArrayNum = iVar22 + 1;
                  *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_41c;
                  local_3a8._s_0.A = iVar23;
                  local_3a8._s_0.B = (uint)local_3e0;
                  local_3a8._s_0.C = iVar9;
                  local_418 = FDynamicMesh3::AppendTriangle
                                        (this->Mesh,(FIndex3i *)&local_3a8._s_0,local_438);
                  pFVar29 = (pTVar2->AllocatorInstance).Data;
                  if (((pFVar29 <= (FScriptContainerElement *)&local_418) &&
                      ((FScriptContainerElement *)&local_418 <
                       pFVar29 + (longlong)(this->NewTids).ArrayMax * 4)) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar19)) {
                    pcVar14 = (code *)swi(3);
                    uVar20 = (*pcVar14)();
                    return (bool)uVar20;
                  }
                  iVar23 = (this->NewTids).ArrayNum;
                  if (iVar23 == (this->NewTids).ArrayMax) {
                    iVar23 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar2->AllocatorInstance,&(this->NewTids).ArrayMax);
                  }
                  (this->NewTids).ArrayNum = iVar23 + 1;
                  pTVar3 = &this->NewExtrudedEids;
                  *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_418;
                  iVar23 = (this->NewTids).ArrayNum;
                  pFVar10 = this->Mesh;
                  uVar39 = iVar23 - 1;
                  uVar35 = 0;
                  if ((int)uVar39 < iVar23) {
                    uVar35 = ~uVar39 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar14 = (code *)swi(3);
                    uVar20 = (*pcVar14)();
                    return (bool)uVar20;
                  }
                  local_414 = FDynamicMesh3::FindEdgeFromTri
                                        (pFVar10,iVar18,iVar9,
                                         *(int *)((this->NewTids).AllocatorInstance.Data +
                                                 (longlong)(this->NewTids).ArrayNum * 4 + -4));
                  pFVar29 = (pTVar3->AllocatorInstance).Data;
                  if (((pFVar29 <= (FScriptContainerElement *)&local_414) &&
                      ((FScriptContainerElement *)&local_414 <
                       pFVar29 + (longlong)(this->NewExtrudedEids).ArrayMax * 4)) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar19)) {
                    pcVar14 = (code *)swi(3);
                    uVar20 = (*pcVar14)();
                    return (bool)uVar20;
                  }
                  iVar23 = (this->NewExtrudedEids).ArrayNum;
                  piVar1 = &(this->NewExtrudedEids).ArrayMax;
                  if (iVar23 == *piVar1) {
                    iVar23 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar3->AllocatorInstance,piVar1);
                  }
                  (this->NewExtrudedEids).ArrayNum = iVar23 + 1;
                  *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_414;
                  pFVar29 = local_408;
                  goto LAB_14c709369;
                }
                break;
              }
              iVar23 = *(int *)(lVar28 + 0xc);
            }
          }
          bVar19 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8213365985634156108>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                              ,0x1b4,
                              "NewVertIndices && NewVertIndices->A >= 0 && NewVertIndices->A < NewVertVids.Num() && NewVertIndices->B >= 0 && NewVertIndices->B < NewVertVids.Num()"
                             );
          if (bVar19) {
            pcVar14 = (code *)swi(3);
            uVar20 = (*pcVar14)();
            return (bool)uVar20;
          }
        }
LAB_14c709369:
        local_408 = pFVar29 + 4;
        uVar42 = uVar42 + 1;
        param_1 = local_3d0;
      } while ((int)uVar42 < (this->InputEids).ArrayNum);
    }
    pFVar40 = (FDynamicMeshAttributeSet *)0x0;
    if ((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
      if (param_1 != (FProgressCancel *)0x0) {
        if (param_1->WasCancelled == false) {
          Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
          pcVar14 = *(code **)&param_1->CancelF;
          plVar30 = *(longlong **)&(param_1->CancelF).field_0x28;
          plVar31 = (longlong *)&(param_1->CancelF).field_0x10;
          if (plVar30 != (longlong *)0x0) {
            plVar31 = plVar30;
          }
          uVar27 = (**(code **)(*plVar31 + 8))();
          bVar19 = (bool)(*pcVar14)(uVar27);
          param_1->WasCancelled = bVar19;
          if (bVar19 == false) goto LAB_14c709781;
        }
        goto LAB_14c7093d8;
      }
LAB_14c709781:
      pFVar38 = (this->NewTids).AllocatorInstance.Data;
      iVar23 = (this->NewTids).ArrayNum;
      local_360 = ___xmm_7fefffffffffffff7fefffffffffffff;
      uStack_358 = _UNK_150a9e648;
      pFVar29 = pFVar38 + (longlong)iVar23 * 4;
      local_340 = ___xmm_ffefffffffffffffffefffffffffffff;
      uStack_338 = _UNK_1508ffb58;
      uVar49 = (undefined4)_UNK_1508ffb58;
      uVar50 = (undefined4)((ulonglong)_UNK_1508ffb58 >> 0x20);
      uVar51 = (undefined4)___xmm_ffefffffffffffffffefffffffffffff;
      uVar52 = (undefined4)((ulonglong)___xmm_ffefffffffffffffffefffffffffffff >> 0x20);
      uVar57 = (undefined4)_UNK_150a9e648;
      uVar58 = (undefined4)((ulonglong)_UNK_150a9e648 >> 0x20);
      local_350 = ___xmm_ffefffffffffffff7fefffffffffffff;
      uStack_348 = _UNK_150a9e6d8;
      uVar53 = (undefined4)_UNK_150a9e6d8;
      uVar54 = (undefined4)((ulonglong)_UNK_150a9e6d8 >> 0x20);
      uVar55 = (undefined4)___xmm_ffefffffffffffff7fefffffffffffff;
      uVar56 = (undefined4)((ulonglong)___xmm_ffefffffffffffff7fefffffffffffff >> 0x20);
      uVar59 = (undefined4)___xmm_7fefffffffffffff7fefffffffffffff;
      uVar60 = (undefined4)((ulonglong)___xmm_7fefffffffffffff7fefffffffffffff >> 0x20);
      while( true ) {
        if ((this->NewTids).ArrayNum != iVar23) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_40f)
          ;
        }
        pFVar10 = this->Mesh;
        if (pFVar38 == pFVar29) break;
        pFVar12 = (pFVar10->Vertices).Blocks.AllocatorInstance.Data;
        uVar44 = (ulonglong)(*(uint *)pFVar38 & 0x1ff);
        lVar28 = *(longlong *)
                  ((pFVar10->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(*(uint *)pFVar38 >> 9) * 8);
        uVar42 = *(uint *)(lVar28 + uVar44 * 0xc);
        uVar33 = (ulonglong)(uVar42 & 0x1ff);
        local_2e8.field0_0x0._s_0.Z =
             *(double *)
              (*(longlong *)(pFVar12 + (ulonglong)(uVar42 >> 9) * 8) + 0x10 + uVar33 * 0x18);
        auVar6 = *(undefined1 (*) [16])
                  (*(longlong *)(pFVar12 + (ulonglong)(uVar42 >> 9) * 8) + uVar33 * 0x18);
        dVar47 = auVar6._0_8_;
        dVar48 = auVar6._8_8_;
        uVar42 = *(uint *)(lVar28 + 4 + uVar44 * 0xc);
        uVar33 = (ulonglong)(uVar42 & 0x1ff);
        local_300.field0_0x0._s_0.Z =
             *(double *)
              (*(longlong *)(pFVar12 + (ulonglong)(uVar42 >> 9) * 8) + 0x10 + uVar33 * 0x18);
        auVar7 = *(undefined1 (*) [16])
                  (*(longlong *)(pFVar12 + (ulonglong)(uVar42 >> 9) * 8) + uVar33 * 0x18);
        dVar46 = auVar7._0_8_;
        uVar42 = *(uint *)(lVar28 + 8 + uVar44 * 0xc);
        uVar33 = (ulonglong)(uVar42 & 0x1ff);
        local_318.field0_0x0._s_0.Z =
             *(double *)
              (*(longlong *)(pFVar12 + (ulonglong)(uVar42 >> 9) * 8) + 0x10 + uVar33 * 0x18);
        auVar8 = *(undefined1 (*) [16])
                  (*(longlong *)(pFVar12 + (ulonglong)(uVar42 >> 9) * 8) + uVar33 * 0x18);
        if (dVar47 < (double)CONCAT44(uVar60,uVar59)) {
          uVar59 = auVar6._0_4_;
          uVar60 = auVar6._4_4_;
        }
        if ((double)CONCAT44(uVar54,uVar53) <= dVar47 && dVar47 != (double)CONCAT44(uVar54,uVar53))
        {
          uVar53 = auVar6._0_4_;
          uVar54 = auVar6._4_4_;
        }
        if (dVar48 < (double)CONCAT44(uVar58,uVar57)) {
          uVar57 = auVar6._8_4_;
          uVar58 = auVar6._12_4_;
        }
        if ((double)CONCAT44(uVar52,uVar51) <= dVar48 && dVar48 != (double)CONCAT44(uVar52,uVar51))
        {
          uVar51 = auVar6._8_4_;
          uVar52 = auVar6._12_4_;
        }
        uVar45 = (undefined4)((ulonglong)local_2e8.field0_0x0._s_0.Z >> 0x20);
        if (local_2e8.field0_0x0._s_0.Z < (double)CONCAT44(uVar56,uVar55)) {
          uVar55 = SUB84(local_2e8.field0_0x0._s_0.Z,0);
          uVar56 = uVar45;
        }
        if ((double)CONCAT44(uVar50,uVar49) <= local_2e8.field0_0x0._s_0.Z &&
            local_2e8.field0_0x0._s_0.Z != (double)CONCAT44(uVar50,uVar49)) {
          uVar49 = SUB84(local_2e8.field0_0x0._s_0.Z,0);
          uVar50 = uVar45;
        }
        if (dVar46 < (double)CONCAT44(uVar60,uVar59)) {
          uVar59 = auVar7._0_4_;
          uVar60 = auVar7._4_4_;
        }
        if ((double)CONCAT44(uVar54,uVar53) <= dVar46 && dVar46 != (double)CONCAT44(uVar54,uVar53))
        {
          uVar53 = auVar7._0_4_;
          uVar54 = auVar7._4_4_;
        }
        dVar46 = auVar7._8_8_;
        if (dVar46 < (double)CONCAT44(uVar58,uVar57)) {
          uVar57 = auVar7._8_4_;
          uVar58 = auVar7._12_4_;
        }
        if ((double)CONCAT44(uVar52,uVar51) <= dVar46 && dVar46 != (double)CONCAT44(uVar52,uVar51))
        {
          uVar51 = auVar7._8_4_;
          uVar52 = auVar7._12_4_;
        }
        uVar45 = (undefined4)((ulonglong)local_300.field0_0x0._s_0.Z >> 0x20);
        if (local_300.field0_0x0._s_0.Z < (double)CONCAT44(uVar56,uVar55)) {
          uVar55 = SUB84(local_300.field0_0x0._s_0.Z,0);
          uVar56 = uVar45;
        }
        if ((double)CONCAT44(uVar50,uVar49) <= local_300.field0_0x0._s_0.Z &&
            local_300.field0_0x0._s_0.Z != (double)CONCAT44(uVar50,uVar49)) {
          uVar49 = SUB84(local_300.field0_0x0._s_0.Z,0);
          uVar50 = uVar45;
        }
        dVar46 = auVar8._0_8_;
        if (dVar46 < (double)CONCAT44(uVar60,uVar59)) {
          uVar59 = auVar8._0_4_;
          uVar60 = auVar8._4_4_;
        }
        if ((double)CONCAT44(uVar54,uVar53) <= dVar46 && dVar46 != (double)CONCAT44(uVar54,uVar53))
        {
          uVar53 = auVar8._0_4_;
          uVar54 = auVar8._4_4_;
        }
        dVar46 = auVar8._8_8_;
        if (dVar46 < (double)CONCAT44(uVar58,uVar57)) {
          uVar57 = auVar8._8_4_;
          uVar58 = auVar8._12_4_;
        }
        if ((double)CONCAT44(uVar52,uVar51) <= dVar46 && dVar46 != (double)CONCAT44(uVar52,uVar51))
        {
          uVar51 = auVar8._8_4_;
          uVar52 = auVar8._12_4_;
        }
        uVar45 = (undefined4)((ulonglong)local_318.field0_0x0._s_0.Z >> 0x20);
        if (local_318.field0_0x0._s_0.Z < (double)CONCAT44(uVar56,uVar55)) {
          uVar55 = SUB84(local_318.field0_0x0._s_0.Z,0);
          uVar56 = uVar45;
        }
        if ((double)CONCAT44(uVar50,uVar49) <= local_318.field0_0x0._s_0.Z &&
            local_318.field0_0x0._s_0.Z != (double)CONCAT44(uVar50,uVar49)) {
          uVar49 = SUB84(local_318.field0_0x0._s_0.Z,0);
          uVar50 = uVar45;
        }
        pFVar38 = pFVar38 + 4;
      }
      pFVar13 = (pFVar10->AttributeSet).Ptr;
      pFVar32 = pFVar40;
      if (pFVar13 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar32 = pFVar13;
      }
      if (0 < (pFVar32->UVLayers).Array.ArrayNum) {
        pFVar40 = *(FDynamicMeshAttributeSet **)(pFVar32->UVLayers).Array.AllocatorInstance.Data;
      }
      FDynamicMeshUVEditor::FDynamicMeshUVEditor
                (&local_1e0,pFVar10,
                 (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar40);
      local_368 = local_40e;
      local_330._s_0.X = (double)CONCAT44(uVar54,uVar53) - (double)CONCAT44(uVar60,uVar59);
      local_330._s_0.Z = (double)CONCAT44(uVar50,uVar49) - (double)CONCAT44(uVar56,uVar55);
      local_290._s_0.X =
           ((double)CONCAT44(uVar54,uVar53) + (double)CONCAT44(uVar60,uVar59)) *
           __real_3fe0000000000000;
      local_370 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FExtrudeBoundaryEdges::Apply'::__l59::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                  ::Call;
      local_290._s_0.Z =
           ((double)CONCAT44(uVar50,uVar49) + (double)CONCAT44(uVar56,uVar55)) *
           __real_3fe0000000000000;
      local_330._s_0.Y = (double)CONCAT44(uVar52,uVar51) - (double)CONCAT44(uVar58,uVar57);
      local_268 = uVar15;
      uStack_260 = uVar16;
      local_290._s_0.Y =
           ((double)CONCAT44(uVar58,uVar57) + (double)CONCAT44(uVar52,uVar51)) *
           __real_3fe0000000000000;
      local_278 = 0;
      uStack_270 = 0;
      FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection
                (&local_1e0,&this->NewTids,
                 (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                  *)&local_370,(TFrame3<double> *)&local_290._s_0,(TVector<double> *)&local_330._s_0
                 ,2,(FUVEditResult *)0x0);
    }
    bVar19 = true;
  }
  else {
    uVar33 = (ulonglong)local_400.ArrayNum;
    local_408 = local_400.AllocatorInstance.Data + uVar33 * 0xc;
    FVar36.Data = local_400.AllocatorInstance.Data;
    while( true ) {
      pFVar29 = local_408;
      if (local_400.ArrayNum != (int)uVar33) {
        local_433[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FExtrudeBoundaryEdges::FNewVertSourceData,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_433);
      }
      param_1 = local_3d0;
      if (FVar36.Data == pFVar29) break;
      if ((int)local_3e8 == local_3e8._4_4_) {
        iVar23 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,&local_3f0,(int *)((longlong)&local_3e8 + 4));
        local_3e8 = CONCAT44(local_3e8._4_4_,iVar23);
      }
      FVar17.Data = local_3f0.Data;
      lVar28 = (longlong)(int)local_3e8;
      local_3e8 = CONCAT44(local_3e8._4_4_,(int)local_3e8 + 1);
      lVar28 = lVar28 * 0x60;
      *(undefined8 *)(local_3f0.Data + lVar28 + 0x28) = 0;
      *(undefined8 *)(local_3f0.Data + lVar28 + 0x20) = 0;
      *(undefined8 *)(local_3f0.Data + lVar28 + 0x18) = 0;
      *(undefined8 *)(local_3f0.Data + lVar28 + 0x30) = 0x3ff0000000000000;
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)(local_3f0.Data + lVar28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
      ;
      *(undefined8 *)(local_3f0.Data + lVar28 + 8) = uVar15;
      *(double *)(local_3f0.Data + lVar28 + 0x10) =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_3f0.Data[lVar28 + 0x50] = (FScriptContainerElement)0x0;
      *(undefined8 *)(local_3f0.Data + lVar28 + 0x58) = 0x3ff0000000000000;
      uVar42 = *(uint *)FVar36.Data;
      pFVar10 = this->Mesh;
      dVar46 = this->ScalingAdjustmentLimit;
      uVar35 = *(uint *)(FVar36.Data + 8);
      local_398 = pFVar10;
      local_390 = uVar42;
      bVar19 = `UE::Geometry::FExtrudeBoundaryEdges::GetExtrudeFrame'::__l2::<lambda_1>::operator()
                         (&local_398,*(uint *)(FVar36.Data + 4),true,&local_300,&local_2e8);
      if ((bVar19) &&
         (bVar19 = `UE::Geometry::FExtrudeBoundaryEdges::GetExtrudeFrame'::__l2::<lambda_1>::
                   operator()(&local_398,uVar35,false,&local_1f8,&local_318), bVar19)) {
        lVar11 = *(longlong *)
                  ((pFVar10->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar42 >> 9) * 8)
        ;
        pdVar41 = (double *)(lVar11 + (ulonglong)(uVar42 & 0x1ff) * 0x18);
        local_2c8._s_0.X = *pdVar41;
        local_2c8._s_0.Y = pdVar41[1];
        local_2c8._s_0.Z = *(double *)(lVar11 + 0x10 + (ulonglong)(uVar42 & 0x1ff) * 0x18);
        pFVar25 = ExtrudeBoundaryEdgesLocals::GetExtrudeFrameAtVertex
                            (&local_168,(TVector<double> *)&local_2c8._s_0,&local_2e8,&local_300,
                             &local_318,&local_1f8,dVar46);
        pFVar29 = FVar17.Data + lVar28 + 0x38;
        dVar46 = (pFVar25->Frame).Origin.field0_0x0._s_0.Y;
        *(double *)(FVar17.Data + lVar28) = (pFVar25->Frame).Origin.field0_0x0._s_0.X;
        *(double *)(FVar17.Data + lVar28 + 8) = dVar46;
        dVar46 = (pFVar25->Frame).Rotation.field0_0x0._s_0.X;
        *(double *)(FVar17.Data + lVar28 + 0x10) = (pFVar25->Frame).Origin.field0_0x0._s_0.Z;
        *(double *)(FVar17.Data + lVar28 + 0x10 + 8) = dVar46;
        dVar46 = (pFVar25->Frame).Rotation.field0_0x0._s_0.Z;
        *(double *)(FVar17.Data + lVar28 + 0x20) = (pFVar25->Frame).Rotation.field0_0x0._s_0.Y;
        *(double *)(FVar17.Data + lVar28 + 0x20 + 8) = dVar46;
        *(double *)(FVar17.Data + lVar28 + 0x30) = (pFVar25->Frame).Rotation.field0_0x0._s_0.W;
        if (&pFVar25->InFrameScaleDirection != (TOptional<UE::Math::TVector<double>_> *)pFVar29) {
          if ((pFVar25->InFrameScaleDirection).bIsSet == false) {
            if (pFVar29[0x18] != (FScriptContainerElement)0x0) {
              pFVar29[0x18] = (FScriptContainerElement)0x0;
            }
          }
          else {
            dVar46 = (pFVar25->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Y;
            *(double *)pFVar29 = (pFVar25->InFrameScaleDirection).TypedValue.field0_0x0._s_0.X;
            *(double *)(pFVar29 + 8) = dVar46;
            *(double *)(pFVar29 + 0x10) =
                 (pFVar25->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Z;
            pFVar29[0x18] = (FScriptContainerElement)0x1;
          }
        }
        *(double *)(FVar17.Data + lVar28 + 0x58) = pFVar25->Scaling;
      }
      uVar33 = uVar27 & 0xffffffff;
      FVar36.Data = FVar36.Data + 0xc;
    }
    if ((local_3d0 == (FProgressCancel *)0x0) ||
       (bVar19 = FProgressCancel::Cancelled(local_3d0), !bVar19)) goto LAB_14c708ddf;
LAB_14c7093d8:
    bVar19 = false;
  }
  if (local_3f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.Data);
  }
LAB_14c709aec:
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FMemory::Free(local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  if (local_430.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data);
  }
  if (local_400.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.AllocatorInstance.Data);
  }
  return bVar19;
}

// GetExtrudeFrame @ 14c73b230

bool __cdecl
UE::Geometry::FExtrudeBoundaryEdges::GetExtrudeFrame
          (FDynamicMesh3 *param_1,int param_2,int param_3,int param_4,FExtrudeFrame *param_5,
          double param_6)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  bool bVar4;
  FExtrudeFrame *pFVar5;
  TVector<double>_u_0 local_e8;
  TVector<double> local_c8;
  TVector<double> local_b0;
  TVector<double> local_98;
  TVector<double> local_80;
  FExtrudeFrame local_68;
  
  local_e8._8_4_ = param_2;
  local_e8._s_0.X = (double)param_1;
  bVar4 = `UE::Geometry::FExtrudeBoundaryEdges::GetExtrudeFrame'::__l2::<lambda_1>::operator()
                    (&local_e8,param_3,true,&local_98,&local_80);
  if ((bVar4) &&
     (bVar4 = `UE::Geometry::FExtrudeBoundaryEdges::GetExtrudeFrame'::__l2::<lambda_1>::operator()
                        (&local_e8,param_4,false,&local_c8,&local_b0), bVar4)) {
    lVar2 = *(longlong *)
             ((param_1->Vertices).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_2 >> 9) * 8);
    pdVar1 = (double *)(lVar2 + (ulonglong)(param_2 & 0x1ff) * 0x18);
    local_e8._s_0.X = *pdVar1;
    local_e8._s_0.Y = pdVar1[1];
    local_e8._s_0.Z = *(double *)(lVar2 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
    pFVar5 = ExtrudeBoundaryEdgesLocals::GetExtrudeFrameAtVertex
                       (&local_68,(TVector<double> *)&local_e8._s_0,&local_80,&local_98,&local_b0,
                        &local_c8,param_6);
    dVar3 = (pFVar5->Frame).Origin.field0_0x0._s_0.Y;
    (param_5->Frame).Origin.field0_0x0._s_0.X = (pFVar5->Frame).Origin.field0_0x0._s_0.X;
    (param_5->Frame).Origin.field0_0x0._s_0.Y = dVar3;
    dVar3 = (pFVar5->Frame).Rotation.field0_0x0._s_0.X;
    (param_5->Frame).Origin.field0_0x0._s_0.Z = (pFVar5->Frame).Origin.field0_0x0._s_0.Z;
    (param_5->Frame).Rotation.field0_0x0._s_0.X = dVar3;
    dVar3 = (pFVar5->Frame).Rotation.field0_0x0._s_0.Z;
    (param_5->Frame).Rotation.field0_0x0._s_0.Y = (pFVar5->Frame).Rotation.field0_0x0._s_0.Y;
    (param_5->Frame).Rotation.field0_0x0._s_0.Z = dVar3;
    (param_5->Frame).Rotation.field0_0x0._s_0.W = (pFVar5->Frame).Rotation.field0_0x0._s_0.W;
    if (&pFVar5->InFrameScaleDirection != &param_5->InFrameScaleDirection) {
      if ((pFVar5->InFrameScaleDirection).bIsSet != false) {
        dVar3 = (pFVar5->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Y;
        (param_5->InFrameScaleDirection).TypedValue.field0_0x0._s_0.X =
             (pFVar5->InFrameScaleDirection).TypedValue.field0_0x0._s_0.X;
        (param_5->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Y = dVar3;
        (param_5->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Z =
             (pFVar5->InFrameScaleDirection).TypedValue.field0_0x0._s_0.Z;
        (param_5->InFrameScaleDirection).bIsSet = true;
        param_5->Scaling = pFVar5->Scaling;
        return true;
      }
      if ((param_5->InFrameScaleDirection).bIsSet != false) {
        (param_5->InFrameScaleDirection).bIsSet = false;
      }
    }
    param_5->Scaling = pFVar5->Scaling;
    return true;
  }
  return false;
}

// GetInputEdgePairings @ 14c73ca00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Geometry::FExtrudeBoundaryEdges::GetInputEdgePairings
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          TArray<UE::Geometry::FExtrudeBoundaryEdges::FNewVertSourceData,TSizedDefaultAllocator<32>_>
          *param_4,TMap<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
                   *param_5)

{
  FSmallListSet *pFVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  TArrayView<int_const_,int> *pTVar17;
  TVector<double> *pTVar18;
  ForElementType<int> FVar19;
  longlong lVar20;
  byte bVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ForElementType<FSetElementId> FVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  int iVar28;
  uint uVar29;
  TArray<UE::Geometry::FExtrudeBoundaryEdges::FNewVertSourceData,TSizedDefaultAllocator<32>_>
  *pTVar30;
  undefined8 uVar31;
  ForAnyElementType FVar32;
  ForElementType<int> FVar33;
  FDynamicMesh3 *pFVar34;
  double dVar35;
  undefined1 auStackY_778 [32];
  uint local_728;
  uint local_724;
  undefined1 local_720;
  undefined1 local_71f;
  undefined1 local_71e;
  undefined1 local_71d;
  char local_71c;
  undefined1 local_71b;
  undefined1 local_71a [2];
  ForAnyElementType local_718;
  undefined8 local_710;
  uint local_708 [2];
  TArray<UE::Geometry::FExtrudeBoundaryEdges::FNewVertSourceData,TSizedDefaultAllocator<32>_>
  *local_700;
  uint local_6f8;
  TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&> local_6f4;
  undefined8 local_6e4;
  TVector<double>_u_0 local_6d8;
  uint local_6c0 [2];
  uint local_6b8;
  ForElementType<int> local_6b0;
  TMap<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
  *local_6a8;
  FDynamicMesh3 *local_6a0;
  TVector<double>_u_0 local_698;
  int local_680;
  uint uStack_67c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_678;
  undefined4 local_670;
  uint uStack_66c;
  int iStack_668;
  undefined4 uStack_664;
  FScriptContainerElement *local_660;
  uint local_658;
  uint uStack_654;
  uint local_650;
  uint local_64c;
  ForElementType<int> local_648;
  uint *local_640;
  undefined8 *local_638;
  uint local_630 [2];
  TMap<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
  *local_628;
  uint local_620 [2];
  TMap<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
  *local_618;
  FScriptContainerElement *local_610;
  int local_608;
  int local_604;
  longlong *local_600;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5f8;
  undefined8 uStack_5d8;
  uint local_5d0 [2];
  TMap<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
  *local_5c8;
  BaseValueIterator local_5c0;
  longlong *local_598;
  longlong lStack_590;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  int local_570;
  undefined4 uStack_56c;
  TArrayView<int_const_,int> local_568;
  double local_558;
  double local_550;
  TArrayView<int_const_,int> local_548;
  TVector<double> local_538;
  TVector<double> local_520;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_508;
  undefined1 local_4d8 [32];
  uint *local_4b8;
  uint local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  int local_4a4;
  undefined1 local_4a0 [8];
  ForElementType<FSetElementId> local_498;
  int local_490;
  ForElementType<int> local_488;
  uint local_460;
  uint local_45c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_458;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_408;
  undefined1 local_3d8 [48];
  ValueIterator local_3a8;
  ValueIterator local_380;
  undefined1 local_358 [48];
  ValueIterator local_328;
  ValueIterator local_300;
  undefined1 local_2d8 [144];
  undefined1 local_248 [144];
  undefined1 local_1b8 [144];
  undefined1 local_128 [144];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_778;
  local_6a8 = param_5;
  param_4->ArrayNum = 0;
  local_71c = param_3;
  local_700 = param_4;
  local_6a0 = param_1;
  if (param_4->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
           *)param_5);
  pFVar27 = (param_2->AllocatorInstance).Data;
  iVar28 = param_2->ArrayNum;
  local_4d8._0_8_ = 0;
  local_4d8._8_8_ = 0;
  local_4b8 = (uint *)0x0;
  pFVar3 = pFVar27 + (longlong)iVar28 * 4;
  local_4b0 = 0;
  local_4ac = 0x80;
  local_4a8 = 0xffffffff;
  local_4a4 = 0;
  local_498 = (ForElementType<FSetElementId>)0x0;
  local_490 = 0;
  local_718.Data = (FScriptContainerElement *)0x0;
  local_710 = 0;
  while( true ) {
    if (param_2->ArrayNum != iVar28) {
      local_71a[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_71a);
    }
    if (pFVar27 == pFVar3) break;
    uVar29 = *(uint *)pFVar27;
    if (*(int *)(*(longlong *)
                  ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar29 >> 9) * 8) +
                 0xc + (ulonglong)(uVar29 & 0x1ff) * 0x10) == -1) {
      FDynamicMesh3::GetOrientedBoundaryEdgeV(param_1,(int)&local_658);
      local_728 = local_658;
      if (local_4d8._8_4_ != local_4a4) {
        FVar25 = (ForElementType<FSetElementId>)local_4a0;
        if (local_498 != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_498;
        }
        iVar12 = *(int *)((longlong)FVar25 + (ulonglong)(local_490 - 1U & local_658) * 4);
        while (iVar12 != -1) {
          lVar20 = local_4d8._0_8_ + (longlong)iVar12 * 0x14;
          if (*(uint *)(local_4d8._0_8_ + (longlong)iVar12 * 0x14) == local_658) {
            puVar16 = (uint *)(lVar20 + 4);
            if (lVar20 == 0) {
              puVar16 = (uint *)0x0;
            }
            if (puVar16 != (uint *)0x0) goto LAB_14c73cc22;
            break;
          }
          iVar12 = *(int *)(lVar20 + 0xc);
        }
      }
      local_640 = &local_728;
      local_6e4 = 0xffffffffffffffff;
      local_638 = &local_6e4;
      TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&>_>
                ((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                  *)local_4d8,&local_6f4,(bool *)&local_640);
      puVar16 = (uint *)(local_4d8._0_8_ + (longlong)(int)local_6f4.Key * 0x14 + 4);
LAB_14c73cc22:
      if (puVar16[1] == 0xffffffff) {
        puVar16[1] = uVar29;
      }
      else {
        if (((local_718.Data <= (FScriptContainerElement *)&local_728) &&
            ((FScriptContainerElement *)&local_728 < local_718.Data + (longlong)local_710._4_4_ * 4)
            ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        iVar12 = (uint)local_710;
        if ((uint)local_710 == local_710._4_4_) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_718,(int *)((longlong)&local_710 + 4));
        }
        local_710 = CONCAT44(local_710._4_4_,iVar12 + 1);
        *(uint *)(local_718.Data + (longlong)iVar12 * 4) = local_728;
      }
      local_728 = uStack_654;
      if (local_4d8._8_4_ != local_4a4) {
        FVar25 = (ForElementType<FSetElementId>)local_4a0;
        if (local_498 != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_498;
        }
        iVar12 = *(int *)((longlong)FVar25 + (ulonglong)(local_490 - 1U & uStack_654) * 4);
        while (iVar12 != -1) {
          lVar20 = local_4d8._0_8_ + (longlong)iVar12 * 0x14;
          if (*(uint *)(local_4d8._0_8_ + (longlong)iVar12 * 0x14) == uStack_654) {
            puVar16 = (uint *)(lVar20 + 4);
            if (lVar20 == 0) {
              puVar16 = (uint *)0x0;
            }
            if (puVar16 != (uint *)0x0) goto LAB_14c73cd91;
            break;
          }
          iVar12 = *(int *)(lVar20 + 0xc);
        }
      }
      local_640 = &local_728;
      local_6e4 = 0xffffffffffffffff;
      local_638 = &local_6e4;
      TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&>_>
                ((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                  *)local_4d8,&local_6f4,(bool *)&local_640);
      puVar16 = (uint *)(local_4d8._0_8_ + ((longlong)(int)local_6f4.Key * 5 + 1) * 4);
LAB_14c73cd91:
      if (*puVar16 == 0xffffffff) {
        *puVar16 = uVar29;
        goto LAB_14c73ce4d;
      }
      if (((local_718.Data <= (FScriptContainerElement *)&local_728) &&
          ((FScriptContainerElement *)&local_728 < local_718.Data + (longlong)local_710._4_4_ * 4))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      iVar12 = (uint)local_710;
      if ((uint)local_710 == local_710._4_4_) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_718,(int *)((longlong)&local_710 + 4));
      }
      pFVar27 = pFVar27 + 4;
      local_710 = CONCAT44(local_710._4_4_,iVar12 + 1);
      *(uint *)(local_718.Data + (longlong)iVar12 * 4) = local_728;
    }
    else {
LAB_14c73ce4d:
      pFVar27 = pFVar27 + 4;
    }
  }
  pTVar17 = TArrayView<int_const_,int>::
            TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                      (&local_548,param_2);
  local_568.DataPtr = pTVar17->DataPtr;
  local_568.ArrayNum = pTVar17->ArrayNum;
  local_568._12_4_ = *(undefined4 *)&pTVar17->field_0xc;
  local_458.Elements._0_8_ = 0;
  local_458.Elements._8_8_ = 0;
  local_458.Elements._32_8_ = 0;
  local_458.Elements._40_4_ = 0;
  local_458.Elements._44_4_ = 0x80;
  local_458.Elements._48_4_ = 0xffffffff;
  local_458.Elements._52_4_ = 0;
  local_458.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_458.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(&local_458,&local_568);
  dVar9 = __real_3e45798ee0000000;
  dVar8 = __real_3ff0000000000000;
  uVar22 = (ulonglong)(int)(uint)local_710;
  local_6b8 = (uint)local_710;
  local_610 = local_718.Data + uVar22 * 4;
  uVar26 = uVar22;
  FVar32.Data = local_718.Data;
LAB_14c73cef5:
  pFVar3 = local_610;
  local_660 = FVar32.Data;
  if ((int)uVar22 != (int)uVar26) {
    local_720 = 0;
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_720);
  }
  uVar29 = local_4b0;
  if (FVar32.Data != pFVar3) {
    uVar29 = *(uint *)FVar32.Data;
    local_6f4.Value._0_4_ = uVar29;
    local_6c0[0] = uVar29;
    if (local_4d8._8_4_ != local_4a4) {
      TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                         *)local_4d8,uVar29,(int *)local_6c0);
    }
    pFVar34 = local_6a0;
    local_488.SecondaryData = (ForElementType<int>)0x0;
    local_460 = 0;
    local_45c = 8;
    pFVar1 = &local_6a0->VertexEdgeLists;
    local_508.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_508.ArrayNum = 0;
    local_508.ArrayMax = 8;
    FSmallListSet::BaseValueIterator::BaseValueIterator(&local_5c0,pFVar1,uVar29,false);
LAB_14c73cf96:
    do {
      if ((((local_5c0.ListSet == pFVar1) && (local_5c0.ListIndex == uVar29)) &&
          (local_5c0.iCur == -1)) && (local_5c0.cur_ptr == -1)) goto LAB_14c73d295;
      local_724 = local_5c0.cur_value;
      if ((*(int *)(*(longlong *)
                     ((pFVar34->Edges).Blocks.AllocatorInstance.Data +
                     ((local_5c0._32_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                   (ulonglong)(local_724 & 0x1ff) * 0x10) == -1) &&
         (local_458.Elements._8_4_ != local_458.Elements._52_4_)) {
        FVar25 = (ForElementType<FSetElementId>)&local_458.Hash;
        if (local_458.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_458.Hash.SecondaryData;
        }
        iVar28 = *(int *)((longlong)FVar25 +
                         ((ulonglong)(local_458.HashSize - 1) & local_5c0._32_8_ & 0xffffffff) * 4);
        if (iVar28 != -1) {
          do {
            if (*(uint *)(local_458.Elements._0_8_ + (longlong)iVar28 * 0xc) == local_724) {
              FDynamicMesh3::GetOrientedBoundaryEdgeV(pFVar34,(int)&local_650);
              if (local_650 == uVar29) {
                FVar33 = (ForElementType<int>)&local_508;
                if (local_508.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                  FVar33 = local_508.AllocatorInstance.SecondaryData;
                }
                if ((ulonglong)FVar33 <= &local_724) {
                  FVar33 = (ForElementType<int>)&local_508;
                  if (local_508.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                    FVar33 = local_508.AllocatorInstance.SecondaryData;
                  }
                  if ((&local_724 < (uint *)((longlong)FVar33 + (longlong)local_508.ArrayMax * 4))
                     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    uVar11 = (*pcVar5)();
                    return (bool)uVar11;
                  }
                }
                if (local_508.ArrayNum == local_508.ArrayMax) {
                  local_508.ArrayNum =
                       Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,&local_508.AllocatorInstance,&local_508.ArrayMax);
                }
                FVar33 = (ForElementType<int>)&local_508;
                FVar19 = local_508.AllocatorInstance.SecondaryData;
                uVar13 = local_508.ArrayNum;
                local_508.ArrayNum = local_508.ArrayNum + 1;
              }
              else {
                if ((local_64c != uVar29) &&
                   (bVar10 = Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<_8213365985634155946>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                                        ,0x256,"Vids.B == AmbiguousVid"), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  uVar11 = (*pcVar5)();
                  return (bool)uVar11;
                }
                FVar33 = (ForElementType<int>)&local_488;
                if (local_488.SecondaryData != (ForElementType<int>)0x0) {
                  FVar33 = local_488.SecondaryData;
                }
                if ((ulonglong)FVar33 <= &local_724) {
                  FVar33 = (ForElementType<int>)&local_488;
                  if (local_488.SecondaryData != (ForElementType<int>)0x0) {
                    FVar33 = local_488.SecondaryData;
                  }
                  if ((&local_724 < (uint *)((longlong)FVar33 + (longlong)(int)local_45c * 4)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    uVar11 = (*pcVar5)();
                    return (bool)uVar11;
                  }
                }
                uVar13 = local_460;
                if (local_460 == local_45c) {
                  uVar13 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                     (0x404,&local_488,(int *)&local_45c);
                }
                local_460 = uVar13 + 1;
                FVar33 = (ForElementType<int>)&local_488;
                FVar19 = local_488.SecondaryData;
              }
              if (FVar19 != (ForElementType<int>)0x0) {
                FVar33 = FVar19;
              }
              *(uint *)((longlong)FVar33 + (longlong)(int)uVar13 * 4) = local_724;
              goto LAB_14c73d284;
            }
            iVar28 = *(int *)(local_458.Elements._0_8_ + 4 + (longlong)iVar28 * 0xc);
          } while (iVar28 != -1);
          FSmallListSet::BaseValueIterator::GotoNext(&local_5c0);
          goto LAB_14c73cf96;
        }
      }
LAB_14c73d284:
      FSmallListSet::BaseValueIterator::GotoNext(&local_5c0);
    } while( true );
  }
  pTStack_678 = (TBitArray<FDefaultBitArrayAllocator> *)(local_4d8 + 0x10);
  local_680 = 0;
  uStack_67c = 1;
  uStack_66c = 0;
  iStack_668 = 0;
  if (local_4b0 == 0) goto LAB_14c73da0d;
  puVar16 = (uint *)(local_4d8 + 0x10);
  if (local_4b8 != (uint *)0x0) {
    puVar16 = local_4b8;
  }
  uVar13 = *puVar16;
joined_r0x00014c73d9b6:
  if (uVar13 != 0) goto LAB_14c73d9e5;
  iStack_668 = iStack_668 + 0x20;
  lVar20 = (longlong)local_680;
  local_680 = local_680 + 1;
  if ((int)((local_4b0 - 1) + ((int)(local_4b0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_680) {
    uStack_66c = local_4b0;
    goto LAB_14c73da0d;
  }
  uVar13 = puVar16[lVar20 + 1];
  goto joined_r0x00014c73d9b6;
LAB_14c73d295:
  local_698._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_698._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_698._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDynamicMesh3::VtxTrianglesItr
            (pFVar34,(TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_3d8,
             uVar29);
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_2d8,&local_3a8
             ,&local_380,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_3d8);
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1b8,&local_380
             ,&local_380,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_3d8);
  uVar7 = local_698._s_0.X;
  uVar6 = local_698._s_0.Y;
  uVar31 = local_698._s_0.Z;
  while ((((local_2d8._0_8_ != local_1b8._0_8_ || (local_2d8._8_4_ != local_1b8._8_4_)) ||
          (local_2d8._24_4_ != local_1b8._24_4_)) || (local_2d8._28_4_ != local_1b8._28_4_))) {
    pTVar18 = FDynamicMesh3::GetTriNormal(pFVar34,&local_538,local_2d8._88_4_);
    uVar7 = (double)uVar7 + (pTVar18->field0_0x0)._s_0.X;
    uVar6 = (double)uVar6 + (pTVar18->field0_0x0)._s_0.Y;
    uVar31 = (double)uVar31 + (pTVar18->field0_0x0)._s_0.Z;
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_2d8);
  }
  local_698._s_0.X = (double)uVar7;
  local_698._s_0.Y = (double)uVar6;
  local_698._s_0.Z = (double)uVar31;
  if (local_1b8._96_8_ != 0) {
    plVar24 = (longlong *)(local_1b8 + 0x70);
    if ((longlong *)local_1b8._136_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_1b8._136_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  if (local_2d8._96_8_ != 0) {
    plVar24 = (longlong *)(local_2d8 + 0x70);
    if ((longlong *)local_2d8._136_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_2d8._136_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  if (local_3d8._0_8_ != 0) {
    plVar24 = (longlong *)(local_3d8 + 0x10);
    if ((longlong *)local_3d8._40_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_3d8._40_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  dVar35 = (double)uVar6 * (double)uVar6 + (double)uVar7 * (double)uVar7 +
           (double)uVar31 * (double)uVar31;
  if (dVar9 < dVar35) {
    local_558 = dVar8 / SQRT(dVar35);
    local_698._s_0.X = (double)uVar7 * local_558;
    local_698._s_0.Y = (double)uVar6 * local_558;
    local_698._s_0.Z = (double)uVar31 * local_558;
  }
  uVar26 = (ulonglong)(int)local_460;
  local_6f4.Value._4_4_ = local_460;
  FVar33 = (ForElementType<int>)&local_488;
  if (local_488.SecondaryData != (ForElementType<int>)0x0) {
    FVar33 = local_488.SecondaryData;
  }
  local_6b0 = (ForElementType<int>)((longlong)FVar33 + uVar26 * 4);
  pTVar30 = local_700;
  uVar22 = uVar26;
  while( true ) {
    FVar19 = local_6b0;
    local_648 = FVar33;
    if ((int)uVar26 != (int)uVar22) {
      local_71f = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_71f);
    }
    if (FVar33 == FVar19) break;
    local_6f8 = *(uint *)FVar33;
    local_708[0] = ExtrudeBoundaryEdgesLocals::FindSharpestAngleMatchEdge
                             (pFVar34,local_6f8,uVar29,(TVector<double> *)&local_698._s_0,&local_508
                             );
    uVar13 = local_708[0];
    if (local_708[0] != 0xffffffff) {
      FVar19 = (ForElementType<int>)&local_508;
      if (local_508.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar19 = local_508.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar19 <= local_708) {
        FVar19 = (ForElementType<int>)&local_508;
        if (local_508.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar19 = local_508.AllocatorInstance.SecondaryData;
        }
        if ((local_708 < (uint *)((longlong)FVar19 + (longlong)local_508.ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
      }
      lVar20 = (longlong)local_508.ArrayNum;
      uVar13 = local_708[0];
      if (local_508.ArrayNum != 0) {
        FVar33 = (ForElementType<int>)&local_508;
        if (local_508.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar33 = local_508.AllocatorInstance.SecondaryData;
        }
        uVar23 = 0;
        local_6f4.Key._4_4_ = 0;
        bVar10 = *(uint *)FVar33 != local_708[0];
        uVar26 = uVar23;
        uVar22 = uVar23;
        do {
          uVar29 = (uint)uVar22;
          uVar26 = uVar26 + 1;
          uVar22 = (ulonglong)(uVar29 + 1);
          if ((longlong)uVar26 < lVar20) {
            do {
              if (bVar10 != (*(uint *)((longlong)FVar33 + uVar26 * 4) != uVar13)) break;
              uVar22 = (ulonglong)((int)uVar22 + 1);
              uVar26 = uVar26 + 1;
            } while ((longlong)uVar26 < lVar20);
            uVar23 = (ulonglong)local_6f4.Key._4_4_;
          }
          uVar14 = (uint)uVar23;
          iVar28 = (int)uVar22 - uVar29;
          if (bVar10 != false) {
            if (uVar14 != uVar29) {
              memmove((uint *)((longlong)FVar33 + (longlong)(int)uVar14 * 4),
                      (uint *)((longlong)FVar33 + (longlong)(int)uVar29 * 4),(longlong)iVar28 << 2);
              uVar13 = local_708[0];
              uVar14 = local_6f4.Key._4_4_;
            }
            local_6f4.Key._4_4_ = uVar14 + iVar28;
            uVar23 = (ulonglong)local_6f4.Key._4_4_;
          }
          bVar10 = (bool)(bVar10 ^ 1);
        } while ((longlong)uVar26 < lVar20);
        local_508.ArrayNum = (int)uVar23;
        pTVar30 = local_700;
        FVar33 = local_648;
        uVar29 = (uint)local_6f4.Value;
      }
    }
    uVar14 = pTVar30->ArrayNum;
    if (uVar14 == pTVar30->ArrayMax) {
      uVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&pTVar30->AllocatorInstance,&pTVar30->ArrayMax);
    }
    lVar20 = (longlong)(int)uVar14;
    pTVar30->ArrayNum = uVar14 + 1;
    pFVar3 = (pTVar30->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + lVar20 * 0xc) = 0xffffffffffffffff;
    *(undefined4 *)(pFVar3 + lVar20 * 0xc + 8) = 0xffffffff;
    uVar15 = 0;
    if ((int)uVar14 < local_700->ArrayNum) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    *(uint *)((local_700->AllocatorInstance).Data + lVar20 * 0xc) = uVar29;
    uVar31 = CONCAT44(uVar13,local_6f8);
    uVar29 = 0;
    if ((int)uVar14 < local_700->ArrayNum) {
      uVar29 = ~uVar14 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    pTVar30 = local_700;
    *(undefined8 *)((local_700->AllocatorInstance).Data + lVar20 * 0xc + 4) = uVar31;
    local_628 = local_6a8;
    local_630[0] = uVar14;
    ``UE::Geometry::FExtrudeBoundaryEdges::GetInputEdgePairings'::__l2::<lambda_1>::operator()'::
    __l2::<lambda_1>::operator()(local_630,local_6f8,false);
    ``UE::Geometry::FExtrudeBoundaryEdges::GetInputEdgePairings'::__l2::<lambda_1>::operator()'::
    __l2::<lambda_1>::operator()(local_630,uVar13,true);
    uVar26 = (ulonglong)local_460;
    FVar33 = (ForElementType<int>)((longlong)FVar33 + 4);
    uVar22 = (ulonglong)local_6f4.Value._4_4_;
    pFVar34 = local_6a0;
    uVar29 = (uint)local_6f4.Value;
  }
  uVar26 = (ulonglong)local_508.ArrayNum;
  local_6f4.Value._4_4_ = local_508.ArrayNum;
  FVar33 = (ForElementType<int>)&local_508;
  if (local_508.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FVar33 = local_508.AllocatorInstance.SecondaryData;
  }
  local_6b0 = (ForElementType<int>)((longlong)FVar33 + uVar26 * 4);
  uVar22 = uVar26;
  while( true ) {
    FVar19 = local_6b0;
    if ((int)uVar26 != (int)uVar22) {
      local_71e = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_71e);
    }
    if (FVar33 == FVar19) break;
    uVar13 = pTVar30->ArrayNum;
    uVar14 = *(uint *)FVar33;
    if (uVar13 == pTVar30->ArrayMax) {
      uVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&pTVar30->AllocatorInstance,&pTVar30->ArrayMax);
    }
    lVar20 = (longlong)(int)uVar13;
    pTVar30->ArrayNum = uVar13 + 1;
    pFVar3 = (pTVar30->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + lVar20 * 0xc) = 0xffffffffffffffff;
    *(undefined4 *)(pFVar3 + lVar20 * 0xc + 8) = 0xffffffff;
    uVar15 = 0;
    if ((int)uVar13 < local_700->ArrayNum) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    *(uint *)((local_700->AllocatorInstance).Data + lVar20 * 0xc) = uVar29;
    uVar29 = 0;
    if ((int)uVar13 < local_700->ArrayNum) {
      uVar29 = ~uVar13 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    pTVar30 = local_700;
    *(ulonglong *)((local_700->AllocatorInstance).Data + lVar20 * 0xc + 4) =
         (ulonglong)uVar14 << 0x20 | 0xffffffff;
    local_5c8 = local_6a8;
    local_5d0[0] = uVar13;
    ``UE::Geometry::FExtrudeBoundaryEdges::GetInputEdgePairings'::__l2::<lambda_1>::operator()'::
    __l2::<lambda_1>::operator()(local_5d0,uVar14,true);
    uVar26 = (ulonglong)(uint)local_508.ArrayNum;
    FVar33 = (ForElementType<int>)((longlong)FVar33 + 4);
    uVar22 = (ulonglong)local_6f4.Value._4_4_;
    uVar29 = (uint)local_6f4.Value;
  }
  if (local_508.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_508.AllocatorInstance.SecondaryData);
  }
  if (local_488.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_488.SecondaryData);
  }
  uVar22 = local_710 & 0xffffffff;
  FVar32.Data = local_660 + 4;
  uVar26 = (ulonglong)local_6b8;
  goto LAB_14c73cef5;
LAB_14c73d9e5:
  uStack_67c = -uVar13 & uVar13;
  uVar26 = (ulonglong)uStack_67c * 2 + 1;
  lVar20 = 0x3f;
  if (uVar26 != 0) {
    for (; uVar26 >> lVar20 == 0; lVar20 = lVar20 + -1) {
    }
  }
  local_608 = (int)lVar20;
  uStack_66c = local_608 + -1 + iStack_668;
  if ((int)local_4b0 < (int)uStack_66c) {
    uStack_66c = local_4b0;
  }
LAB_14c73da0d:
  local_670 = 0xffffffff;
  TStack_5f8._padding_ = CONCAT44(uStack_67c,local_680);
  local_600 = (longlong *)local_4d8;
  TStack_5f8.CurrentBitIndex = uStack_66c;
  TStack_5f8.UnvisitedBitMask = 0xffffffff;
  TStack_5f8._28_4_ = uStack_664;
  TStack_5f8.BaseBitIndex = iStack_668;
  local_570 = local_4d8._8_4_ - local_4a4;
  uVar13 = local_4b0 & 0xffffffe0;
  iVar28 = (int)local_4b0 >> 5;
  bVar21 = (byte)local_4b0;
  uStack_5d8 = CONCAT44(uStack_56c,local_570);
  TStack_5f8.Array = pTStack_678;
  local_598 = local_600;
  lStack_590 = TStack_5f8._padding_;
  pTStack_588 = pTStack_678;
  uStack_580 = TStack_5f8._16_8_;
  uStack_578 = TStack_5f8._24_8_;
  if (((int)local_4b0 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  pTVar30 = local_700;
  if (uVar29 != local_4b0) {
    puVar16 = (uint *)(local_4d8 + 0x10);
    if (local_4b8 != (uint *)0x0) {
      puVar16 = local_4b8;
    }
    uVar29 = -1 << (bVar21 & 0x1f) & puVar16[iVar28];
    while (uVar29 == 0) {
      lVar20 = (longlong)iVar28;
      uVar13 = uVar13 + 0x20;
      iVar28 = iVar28 + 1;
      uVar29 = local_4b0;
      if ((int)((local_4b0 - 1) + ((int)(local_4b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
      goto LAB_14c73db40;
      uVar29 = puVar16[lVar20 + 1];
    }
    uVar26 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_604 = (int)lVar20;
    uVar29 = local_604 + -1 + uVar13;
    if ((int)local_4b0 < (int)uVar29) {
      uVar29 = local_4b0;
    }
  }
LAB_14c73db40:
  while( true ) {
    plVar24 = local_600;
    if ((int)local_600[1] - *(int *)((longlong)local_600 + 0x34) != (int)uStack_5d8) {
      local_71d = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_71d);
    }
    pFVar34 = local_6a0;
    lVar20 = (longlong)TStack_5f8.CurrentBitIndex;
    if (((TStack_5f8.CurrentBitIndex == uVar29) &&
        (TStack_5f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_4d8 + 0x10))) &&
       (plVar24 == (longlong *)local_4d8)) break;
    lVar4 = *plVar24;
    uVar13 = pTVar30->ArrayNum;
    local_6f8 = *(uint *)(lVar4 + 4 + lVar20 * 0x14);
    iVar28 = *(int *)(lVar4 + 8 + lVar20 * 0x14);
    uVar2 = *(undefined4 *)(lVar4 + lVar20 * 0x14);
    if (uVar13 == pTVar30->ArrayMax) {
      uVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&pTVar30->AllocatorInstance,&pTVar30->ArrayMax);
    }
    lVar20 = (longlong)(int)uVar13;
    pTVar30->ArrayNum = uVar13 + 1;
    pFVar3 = (pTVar30->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + lVar20 * 0xc) = 0xffffffffffffffff;
    *(undefined4 *)(pFVar3 + lVar20 * 0xc + 8) = 0xffffffff;
    uVar14 = 0;
    if ((int)uVar13 < local_700->ArrayNum) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    *(undefined4 *)((local_700->AllocatorInstance).Data + lVar20 * 0xc) = uVar2;
    uVar31 = CONCAT44(iVar28,local_6f8);
    uVar14 = 0;
    if ((int)uVar13 < local_700->ArrayNum) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    pTVar30 = local_700;
    *(undefined8 *)((local_700->AllocatorInstance).Data + lVar20 * 0xc + 4) = uVar31;
    local_618 = local_6a8;
    local_620[0] = uVar13;
    ``UE::Geometry::FExtrudeBoundaryEdges::GetInputEdgePairings'::__l2::<lambda_1>::operator()'::
    __l2::<lambda_1>::operator()(local_620,local_6f8,false);
    ``UE::Geometry::FExtrudeBoundaryEdges::GetInputEdgePairings'::__l2::<lambda_1>::operator()'::
    __l2::<lambda_1>::operator()(local_620,iVar28,true);
    TStack_5f8.UnvisitedBitMask = TStack_5f8.UnvisitedBitMask & ~TStack_5f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5f8);
  }
  if (local_71c != '\0') {
    iVar28 = pTVar30->ArrayNum;
    pFVar27 = (pTVar30->AllocatorInstance).Data;
    pFVar3 = pFVar27 + (longlong)iVar28 * 0xc;
    while( true ) {
      if (local_700->ArrayNum != iVar28) {
        local_71b = 0;
        `TCheckedPointerIterator<UE::Geometry::FExtrudeBoundaryEdges::FNewVertSourceData,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_71b);
      }
      if (pFVar27 == pFVar3) break;
      if ((*(int *)(pFVar27 + 4) == -1) || (*(int *)(pFVar27 + 8) == -1)) {
        local_6d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_6d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_6d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FDynamicMesh3::VtxTrianglesItr
                  (pFVar34,(TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)
                           local_358,*(int *)pFVar27);
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_248,
                   &local_328,&local_300,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_358
                  );
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_128,
                   &local_300,&local_300,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_358
                  );
        uVar7 = local_6d8._s_0.X;
        uVar6 = local_6d8._s_0.Y;
        uVar31 = local_6d8._s_0.Z;
        while (((local_248._0_8_ != local_128._0_8_ || (local_248._8_4_ != local_128._8_4_)) ||
               ((local_248._24_4_ != local_128._24_4_ || (local_248._28_4_ != local_128._28_4_)))))
        {
          pTVar18 = FDynamicMesh3::GetTriNormal(pFVar34,&local_520,local_248._88_4_);
          uVar7 = (double)uVar7 + (pTVar18->field0_0x0)._s_0.X;
          uVar6 = (double)uVar6 + (pTVar18->field0_0x0)._s_0.Y;
          uVar31 = (double)uVar31 + (pTVar18->field0_0x0)._s_0.Z;
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                    ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_248);
        }
        local_6d8._s_0.X = (double)uVar7;
        local_6d8._s_0.Y = (double)uVar6;
        local_6d8._s_0.Z = (double)uVar31;
        if (local_128._96_8_ != 0) {
          plVar24 = (longlong *)(local_128 + 0x70);
          if ((longlong *)local_128._136_8_ != (longlong *)0x0) {
            plVar24 = (longlong *)local_128._136_8_;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
        if (local_248._96_8_ != 0) {
          plVar24 = (longlong *)(local_248 + 0x70);
          if ((longlong *)local_248._136_8_ != (longlong *)0x0) {
            plVar24 = (longlong *)local_248._136_8_;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
        if (local_358._0_8_ != 0) {
          plVar24 = (longlong *)(local_358 + 0x10);
          if ((longlong *)local_358._40_8_ != (longlong *)0x0) {
            plVar24 = (longlong *)local_358._40_8_;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
        dVar35 = (double)uVar6 * (double)uVar6 + (double)uVar7 * (double)uVar7 +
                 (double)uVar31 * (double)uVar31;
        if (dVar9 < dVar35) {
          local_550 = dVar8 / SQRT(dVar35);
          local_6d8._s_0.X = (double)uVar7 * local_550;
          local_6d8._s_0.Y = (double)uVar6 * local_550;
          local_6d8._s_0.Z = (double)uVar31 * local_550;
        }
        local_408.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        local_408.ArrayNum = 0;
        local_408.ArrayMax = 8;
        FDynamicMesh3::
        GetAllVtxBoundaryEdges<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                  (pFVar34,*(int *)pFVar27,&local_408);
        if (*(int *)(pFVar27 + 4) == -1) {
          if (*(int *)(pFVar27 + 8) == -1) {
            bVar10 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_8213365985634155903>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                                ,0x281,"VertData.SourceEidPair.B != IndexConstants::InvalidID");
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (bool)uVar11;
            }
            goto LAB_14c73df7b;
          }
          iVar12 = ExtrudeBoundaryEdgesLocals::FindSharpestAngleMatchEdge
                             (pFVar34,*(int *)(pFVar27 + 8),*(int *)pFVar27,
                              (TVector<double> *)&local_6d8._s_0,&local_408);
          *(int *)(pFVar27 + 4) = iVar12;
        }
        else {
LAB_14c73df7b:
          if (*(int *)(pFVar27 + 8) == -1) {
            if (*(int *)(pFVar27 + 4) == -1) {
              bVar10 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_8213365985634155897>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\ExtrudeBoundaryEdges.cpp"
                                  ,0x287,"VertData.SourceEidPair.A != IndexConstants::InvalidID");
              if (bVar10) {
                pcVar5 = (code *)swi(3);
                uVar11 = (*pcVar5)();
                return (bool)uVar11;
              }
            }
            else {
              iVar12 = ExtrudeBoundaryEdgesLocals::FindSharpestAngleMatchEdge
                                 (pFVar34,*(int *)(pFVar27 + 4),*(int *)pFVar27,
                                  (TVector<double> *)&local_6d8._s_0,&local_408);
              *(int *)(pFVar27 + 8) = iVar12;
            }
          }
        }
        if (local_408.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_408.AllocatorInstance.SecondaryData);
        }
      }
      pFVar27 = pFVar27 + 0xc;
    }
  }
  local_458.HashSize = 0;
  if (local_458.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_458.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_458.Elements);
  if (local_718.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_718.Data);
  }
  local_490 = 0;
  if (local_498 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_498);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_4d8);
  return true;
}

