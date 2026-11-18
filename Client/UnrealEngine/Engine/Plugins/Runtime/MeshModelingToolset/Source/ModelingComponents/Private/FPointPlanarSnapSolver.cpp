// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 15

// ~FPointPlanarSnapSolver @ 14cad1a00

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::~FPointPlanarSnapSolver(FPointPlanarSnapSolver *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = (this->GeneratedTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointHistory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->IgnoreTargets).HashSize = 0;
  FVar2 = (this->IgnoreTargets).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->IgnoreTargets).Elements);
  pFVar1 = (this->IntersectionSecondLinePointers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IntersectionPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GeneratedLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBasePositionSnapSolver3::~FBasePositionSnapSolver3((FBasePositionSnapSolver3 *)this);
  return;
}

// FPointPlanarSnapSolver @ 14cb61e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPointPlanarSnapSolver * __thiscall
UE::Geometry::FPointPlanarSnapSolver::FPointPlanarSnapSolver(FPointPlanarSnapSolver *this)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FBasePositionSnapSolver3::FBasePositionSnapSolver3((FBasePositionSnapSolver3 *)this);
  this->_padding_ = (longlong)&___7FPointPlanarSnapSolver_Geometry_UE__6B_;
  (this->Plane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->Plane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.X = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Plane).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Plane).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->Plane).Origin.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  (this->Plane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.W = 1.0;
  dVar2 = _UNK_15061cbc8;
  dVar1 = ___xmm_3ff00000000000000000000000000000;
  (this->GeneratedLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedLines).ArrayNum = 0;
  (this->GeneratedLines).ArrayMax = 0;
  (this->IntersectionPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntersectionPoints).ArrayNum = 0;
  (this->IntersectionPoints).ArrayMax = 0;
  (this->IntersectionSecondLinePointers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntersectionSecondLinePointers).ArrayNum = 0;
  (this->IntersectionSecondLinePointers).ArrayMax = 0;
  this->bEnableSnapToKnownLengths = true;
  this->CardinalAxisPriority = 0x96;
  this->LastSegmentPriority = 0x8c;
  this->KnownLengthPriorityDelta = 10;
  this->IntersectionPriorityDelta = 0xb;
  this->bActiveSnapIsIntersection = false;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->IntersectionSecondLine).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->IntersectionSecondLine).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->IntersectionSecondLine).Origin.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  uVar3 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  (this->IntersectionSecondLine).Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  (this->IntersectionSecondLine).Direction.field0_0x0._s_0.Y = (double)uVar3;
  (this->IntersectionSecondLine).Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->IgnoreTargets).Elements = 0;
  *(undefined8 *)&(this->IgnoreTargets).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IgnoreTargets).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IgnoreTargets).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IgnoreTargets).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IgnoreTargets).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IgnoreTargets).Elements.field_0x34 = 0;
  (this->IgnoreTargets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IgnoreTargets).HashSize = 0;
  (this->PointHistory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointHistory).ArrayNum = 0;
  (this->PointHistory).ArrayMax = 0;
  (this->GeneratedTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedTargets).ArrayNum = 0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GeneratedTargets).ArrayMax = 0;
  (this->Plane).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Plane).Origin.field0_0x0._s_0.Y = (double)uVar3;
  *(undefined4 *)((longlong)&(this->Plane).Origin.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->Plane).Origin.field0_0x0 + 0x14) = uVar5;
  *(undefined4 *)&(this->Plane).Rotation.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->Plane).Rotation.field0_0x0 + 4) = 0;
  (this->Plane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Plane).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->Plane).Rotation.field0_0x0._s_0.W = dVar2;
  return this;
}

// AppendHistoryPoint @ 14cb73de0

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::AppendHistoryPoint
          (FPointPlanarSnapSolver *this,TVector<double> *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  
  pTVar2 = &this->PointHistory;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->PointHistory).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->PointHistory).ArrayNum;
  piVar1 = &(this->PointHistory).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PointHistory).ArrayNum = iVar8 + 1;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(double *)pFVar3 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar3 + 8) = dVar6;
  *(double *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  ResetGenerated(this);
  return;
}

// DebugRender @ 14cb805c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::DebugRender
          (FPointPlanarSnapSolver *this,IToolsContextRenderAPI *param_1)

{
  int iVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  double *pdVar19;
  FScriptContainerElement *pFVar20;
  undefined1 (*pauVar21) [16];
  int iVar22;
  double *pdVar23;
  FScriptContainerElement *pFVar24;
  undefined1 (*pauVar25) [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar46;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar73;
  undefined4 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined4 uVar87;
  undefined4 uVar88;
  float fVar89;
  undefined1 auStack_2f8 [32];
  float local_2d8;
  float *local_2d0;
  float local_2c8;
  undefined1 local_2c0;
  undefined1 local_2b8 [8];
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  double local_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  undefined1 local_270 [16];
  double local_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  FToolDataVisualizer local_208;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  FToolDataVisualizer::FToolDataVisualizer(&local_208);
  FToolDataVisualizer::BeginFrame(&local_208,param_1);
  if ((char)this->_padding_ == '\0') {
    iVar22 = -9999;
  }
  else {
    iVar22 = (int)this->_padding_;
  }
  iVar1 = (int)this->_padding_;
  pdVar19 = (double *)this->_padding_;
  uVar73 = (undefined4)__real_3fe0000000000000;
  uVar74 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  pdVar23 = pdVar19 + (longlong)iVar1 * 7;
  fVar89 = __real_3b808081;
  dVar64 = __real_40c3880000000000;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetLine,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_2b8);
    }
    if (pdVar19 == pdVar23) break;
    cVar18 = (**(code **)(this->_padding_ + 0x50))(this,*(undefined4 *)(pdVar19 + 6));
    if (cVar18 == '\0') {
      local_2b0 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.R];
      local_2ac = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.G];
      local_2a8 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.B];
      local_2a4 = (float)FColor::Cyan.field0_0x0._3_1_ * fVar89;
      local_2a0 = (double)local_208.LineThickness;
      if (*(int *)(pdVar19 + 6) != iVar22) {
        local_2a0 = local_2a0 * (double)CONCAT44(uVar74,uVar73);
      }
      auVar14._8_8_ = local_208.TotalTransform.Rotation.ZW.m128d_f64[1];
      auVar14._0_8_ = local_208.TotalTransform.Rotation.ZW.m128d_f64[0];
      dVar10 = local_208.TotalTransform.Rotation.XY.m128d_f64[1];
      uVar74 = (undefined4)((ulonglong)local_208.TotalTransform.Rotation.ZW.m128d_f64[0] >> 0x20);
      local_248._8_4_ = SUB84(local_208.TotalTransform.Rotation.ZW.m128d_f64[0],0);
      local_248._0_8_ = dVar10;
      local_248._12_4_ = uVar74;
      dVar4 = local_208.TotalTransform.Scale3D.XY.m128d_f64[0] * (*pdVar19 + pdVar19[3] * dVar64);
      dVar5 = local_208.TotalTransform.Scale3D.XY.m128d_f64[1] * (pdVar19[4] * dVar64 + pdVar19[1]);
      uVar73 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar8 = (pdVar19[5] * dVar64 + pdVar19[2]) * local_208.TotalTransform.Scale3D.ZW.m128d_f64[0];
      dVar9 = local_208.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar75._8_4_ = SUB84(dVar5,0);
      auVar75._0_8_ = dVar4;
      auVar75._12_4_ = uVar73;
      auVar47._8_4_ = SUB84(dVar5,0);
      auVar47._0_8_ = dVar4;
      auVar47._12_4_ = uVar73;
      local_298 = local_208.TotalTransform.Rotation.ZW.m128d_f64[1];
      dStack_290 = local_208.TotalTransform.Rotation.ZW.m128d_f64[1];
      local_258 = blendpd((undefined1  [16])local_208.TotalTransform.Rotation.XY.m128d_f64,auVar14,2
                         );
      auVar27._8_4_ = SUB84(local_208.TotalTransform.Rotation.ZW.m128d_f64[0],0);
      auVar27._0_8_ = dVar10;
      auVar27._12_4_ = uVar74;
      dVar13 = local_208.TotalTransform.Rotation.XY.m128d_f64[0];
      auVar6._8_4_ = SUB84(dVar9,0);
      auVar6._0_8_ = dVar8;
      auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar48 = blendpd(auVar47,auVar6,2);
      auVar76._0_8_ = auVar75._8_8_ * dVar13 - dVar10 * dVar4;
      auVar76._8_8_ = dVar8 * dVar10 - auVar27._8_8_ * dVar5;
      dVar26 = local_258._0_8_;
      dVar46 = local_258._8_8_;
      dVar11 = local_208.TotalTransform.Scale3D.XY.m128d_f64[0] * (*pdVar19 - pdVar19[3] * dVar64);
      dVar12 = local_208.TotalTransform.Scale3D.XY.m128d_f64[1] * (pdVar19[1] - pdVar19[4] * dVar64)
      ;
      uVar87 = SUB84(dVar12,0);
      uVar88 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar49._0_8_ =
           auVar48._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] - dVar26 * dVar8;
      auVar49._8_8_ =
           auVar48._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] - dVar46 * dVar9;
      auVar48 = blendpd(auVar76,auVar49,2);
      dVar9 = auVar76._8_8_ + auVar76._8_8_;
      dVar2 = auVar49._0_8_ + auVar49._0_8_;
      uVar73 = SUB84(dVar2,0);
      uVar74 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar77._0_8_ = auVar48._0_8_ + auVar48._0_8_;
      auVar77._8_8_ = auVar48._8_8_ + auVar48._8_8_;
      auVar65._8_4_ = uVar73;
      auVar65._0_8_ = dVar9;
      auVar65._12_4_ = uVar74;
      auVar28._8_4_ = uVar73;
      auVar28._0_8_ = dVar9;
      auVar28._12_4_ = uVar74;
      auVar50._8_4_ = uVar73;
      auVar50._0_8_ = dVar9;
      auVar50._12_4_ = uVar74;
      auVar48 = blendpd(auVar50,auVar77,2);
      auVar66._0_8_ = auVar65._8_8_ * dVar13 - dVar9 * dVar10;
      auVar66._8_8_ =
           auVar77._0_8_ * dVar10 -
           auVar28._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0];
      auVar29._8_4_ = SUB84(auVar77._8_8_,0);
      auVar29._0_8_ = auVar77._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
      auVar51._0_8_ =
           auVar48._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] -
           auVar77._0_8_ * dVar26;
      auVar51._8_8_ =
           auVar48._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar29._8_8_ * dVar46;
      auVar30._8_4_ = SUB84(auVar66._8_8_,0);
      auVar30._0_8_ = auVar66._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
      auVar48 = blendpd(auVar66,auVar51,2);
      dVar2 = dVar2 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar5 + auVar51._0_8_ +
              local_208.TotalTransform.Translation.XY.m128d_f64[1];
      local_278 = auVar77._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar8 +
                  auVar48._0_8_ + local_208.TotalTransform.Translation.ZW.m128d_f64[0];
      local_288._8_4_ = SUB84(dVar2,0);
      local_288._0_8_ =
           dVar9 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar4 + auVar30._8_8_ +
           local_208.TotalTransform.Translation.XY.m128d_f64[0];
      local_288._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = (pdVar19[2] - pdVar19[5] * dVar64) * local_208.TotalTransform.Scale3D.ZW.m128d_f64[0];
      uVar73 = SUB84(local_208.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0,0);
      uVar74 = (undefined4)
               ((ulonglong)(local_208.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0) >> 0x20);
      local_2d0 = (float *)CONCAT71(local_2d0._1_7_,local_208.bDepthTested);
      auVar78._8_4_ = uVar87;
      auVar78._0_8_ = dVar11;
      auVar78._12_4_ = uVar88;
      auVar31._8_4_ = uVar87;
      auVar31._0_8_ = dVar11;
      auVar31._12_4_ = uVar88;
      auVar52._8_4_ = uVar87;
      auVar52._0_8_ = dVar11;
      auVar52._12_4_ = uVar88;
      auVar3._8_4_ = uVar73;
      auVar3._0_8_ = dVar2;
      auVar3._12_4_ = uVar74;
      auVar48 = blendpd(auVar52,auVar3,2);
      auVar79._0_8_ = auVar78._8_8_ * dVar13 - dVar11 * dVar10;
      auVar79._8_8_ =
           dVar2 * dVar10 - auVar31._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0];
      auVar32._8_4_ = uVar73;
      auVar32._0_8_ = dVar2;
      auVar32._12_4_ = uVar74;
      auVar53._0_8_ =
           auVar48._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] - dVar2 * dVar26;
      auVar53._8_8_ =
           auVar48._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar32._8_8_ * dVar46;
      auVar48 = blendpd(auVar79,auVar53,2);
      dVar64 = auVar79._8_8_ + auVar79._8_8_;
      dVar9 = auVar53._0_8_ + auVar53._0_8_;
      uVar73 = SUB84(dVar9,0);
      uVar74 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar80._0_8_ = auVar48._0_8_ + auVar48._0_8_;
      auVar80._8_8_ = auVar48._8_8_ + auVar48._8_8_;
      auVar67._8_4_ = uVar73;
      auVar67._0_8_ = dVar64;
      auVar67._12_4_ = uVar74;
      auVar33._8_4_ = uVar73;
      auVar33._0_8_ = dVar64;
      auVar33._12_4_ = uVar74;
      auVar54._8_4_ = uVar73;
      auVar54._0_8_ = dVar64;
      auVar54._12_4_ = uVar74;
      auVar48 = blendpd(auVar54,auVar80,2);
      auVar68._0_8_ = auVar67._8_8_ * dVar13 - dVar64 * dVar10;
      auVar68._8_8_ =
           auVar80._0_8_ * dVar10 -
           auVar33._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0];
      auVar34._8_4_ = SUB84(auVar80._8_8_,0);
      auVar34._0_8_ = auVar80._0_8_;
      auVar34._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
      auVar55._0_8_ =
           auVar48._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] -
           auVar80._0_8_ * dVar26;
      auVar55._8_8_ =
           auVar48._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar34._8_8_ * dVar46;
      auVar35._8_4_ = SUB84(auVar68._8_8_,0);
      auVar35._0_8_ = auVar68._0_8_;
      auVar35._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
      dVar9 = dVar9 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar12 + auVar55._0_8_ +
              local_208.TotalTransform.Translation.XY.m128d_f64[1];
      auVar48 = blendpd(auVar68,auVar55,2);
      local_2d8 = (float)local_2a0;
      local_260 = auVar80._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar2 +
                  auVar48._0_8_ + local_208.TotalTransform.Translation.ZW.m128d_f64[0];
      local_270._8_4_ = SUB84(dVar9,0);
      local_270._0_8_ =
           dVar64 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar11 + auVar35._8_8_ +
           local_208.TotalTransform.Translation.XY.m128d_f64[0];
      local_270._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      (**(code **)(local_208._padding_ + 8))(&local_208,local_270,local_288,&local_2b0);
      uVar73 = (undefined4)__real_3fe0000000000000;
      uVar74 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      fVar89 = __real_3b808081;
      dVar64 = __real_40c3880000000000;
    }
    pdVar19 = pdVar19 + 7;
  }
  iVar1 = (this->GeneratedLines).ArrayNum;
  pFVar20 = (this->GeneratedLines).AllocatorInstance.Data;
  pFVar24 = pFVar20 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->GeneratedLines).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetLine,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_2b8);
    }
    uVar17 = _UNK_150689518;
    uVar16 = ___xmm_00000000000000003ff0000000000000;
    uVar87 = __real_40400000;
    if (pFVar20 == pFVar24) break;
    cVar18 = (**(code **)(this->_padding_ + 0x50))(this,*(undefined4 *)(pFVar20 + 0x30));
    if (cVar18 == '\0') {
      local_2b0 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.R];
      local_2ac = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.G];
      local_2a8 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.B];
      local_2a4 = (float)FColor::Cyan.field0_0x0._3_1_ * fVar89;
      local_2a0 = (double)local_208.LineThickness;
      if (*(int *)(pFVar20 + 0x30) != iVar22) {
        local_2a0 = local_2a0 * (double)CONCAT44(uVar74,uVar73);
      }
      auVar15._8_8_ = local_208.TotalTransform.Rotation.ZW.m128d_f64[1];
      auVar15._0_8_ = local_208.TotalTransform.Rotation.ZW.m128d_f64[0];
      dVar10 = local_208.TotalTransform.Rotation.XY.m128d_f64[1];
      local_248._8_4_ = SUB84(local_208.TotalTransform.Rotation.ZW.m128d_f64[0],0);
      local_248._0_8_ = dVar10;
      local_248._12_4_ = (int)((ulonglong)local_208.TotalTransform.Rotation.ZW.m128d_f64[0] >> 0x20)
      ;
      dVar4 = local_208.TotalTransform.Scale3D.XY.m128d_f64[0] *
              (*(double *)pFVar20 + *(double *)(pFVar20 + 0x18) * dVar64);
      dVar5 = local_208.TotalTransform.Scale3D.XY.m128d_f64[1] *
              (*(double *)(pFVar20 + 0x20) * dVar64 + *(double *)(pFVar20 + 8));
      uVar73 = SUB84(dVar5,0);
      uVar74 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar8 = (*(double *)(pFVar20 + 0x28) * dVar64 + *(double *)(pFVar20 + 0x10)) *
              local_208.TotalTransform.Scale3D.ZW.m128d_f64[0];
      uVar87 = SUB84(local_208.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0,0);
      uVar88 = (undefined4)
               ((ulonglong)(local_208.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0) >> 0x20);
      auVar81._8_4_ = uVar73;
      auVar81._0_8_ = dVar4;
      auVar81._12_4_ = uVar74;
      auVar56._8_4_ = uVar73;
      auVar56._0_8_ = dVar4;
      auVar56._12_4_ = uVar74;
      local_298 = local_208.TotalTransform.Rotation.ZW.m128d_f64[1];
      dStack_290 = local_208.TotalTransform.Rotation.ZW.m128d_f64[1];
      local_258 = blendpd((undefined1  [16])local_208.TotalTransform.Rotation.XY.m128d_f64,auVar15,2
                         );
      auVar36._8_4_ = uVar73;
      auVar36._0_8_ = dVar4;
      auVar36._12_4_ = uVar74;
      dVar13 = local_208.TotalTransform.Rotation.XY.m128d_f64[0];
      auVar7._8_4_ = uVar87;
      auVar7._0_8_ = dVar8;
      auVar7._12_4_ = uVar88;
      auVar48 = blendpd(auVar56,auVar7,2);
      auVar82._0_8_ = auVar81._8_8_ * dVar13 - dVar4 * dVar10;
      auVar82._8_8_ =
           dVar8 * dVar10 - auVar36._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0];
      auVar37._8_4_ = uVar87;
      auVar37._0_8_ = dVar8;
      auVar37._12_4_ = uVar88;
      dVar26 = local_258._0_8_;
      dVar46 = local_258._8_8_;
      dVar11 = local_208.TotalTransform.Scale3D.XY.m128d_f64[0] *
               (*(double *)pFVar20 - *(double *)(pFVar20 + 0x18) * dVar64);
      dVar12 = local_208.TotalTransform.Scale3D.XY.m128d_f64[1] *
               (*(double *)(pFVar20 + 8) - *(double *)(pFVar20 + 0x20) * dVar64);
      uVar87 = SUB84(dVar12,0);
      uVar88 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar57._0_8_ =
           auVar48._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] - dVar8 * dVar26;
      auVar57._8_8_ =
           auVar48._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar37._8_8_ * dVar46;
      auVar48 = blendpd(auVar82,auVar57,2);
      dVar9 = auVar82._8_8_ + auVar82._8_8_;
      dVar2 = auVar57._0_8_ + auVar57._0_8_;
      uVar73 = SUB84(dVar2,0);
      uVar74 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar83._0_8_ = auVar48._0_8_ + auVar48._0_8_;
      auVar83._8_8_ = auVar48._8_8_ + auVar48._8_8_;
      auVar69._8_4_ = uVar73;
      auVar69._0_8_ = dVar9;
      auVar69._12_4_ = uVar74;
      auVar38._8_4_ = uVar73;
      auVar38._0_8_ = dVar9;
      auVar38._12_4_ = uVar74;
      auVar58._8_4_ = uVar73;
      auVar58._0_8_ = dVar9;
      auVar58._12_4_ = uVar74;
      auVar48 = blendpd(auVar58,auVar83,2);
      auVar70._0_8_ = auVar69._8_8_ * dVar13 - dVar9 * dVar10;
      auVar70._8_8_ =
           auVar83._0_8_ * dVar10 -
           auVar38._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0];
      auVar39._8_4_ = SUB84(auVar83._8_8_,0);
      auVar39._0_8_ = auVar83._0_8_;
      auVar39._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
      auVar59._0_8_ =
           auVar48._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] -
           auVar83._0_8_ * dVar26;
      auVar59._8_8_ =
           auVar48._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar39._8_8_ * dVar46;
      auVar40._8_4_ = SUB84(auVar70._8_8_,0);
      auVar40._0_8_ = auVar70._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
      auVar48 = blendpd(auVar70,auVar59,2);
      dVar2 = dVar2 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar5 + auVar59._0_8_ +
              local_208.TotalTransform.Translation.XY.m128d_f64[1];
      local_260 = auVar83._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar8 +
                  auVar48._0_8_ + local_208.TotalTransform.Translation.ZW.m128d_f64[0];
      local_270._8_4_ = SUB84(dVar2,0);
      local_270._0_8_ =
           dVar9 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar4 + auVar40._8_8_ +
           local_208.TotalTransform.Translation.XY.m128d_f64[0];
      local_270._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = (*(double *)(pFVar20 + 0x10) - *(double *)(pFVar20 + 0x28) * dVar64) *
              local_208.TotalTransform.Scale3D.ZW.m128d_f64[0];
      uVar73 = SUB84(local_208.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0,0);
      uVar74 = (undefined4)
               ((ulonglong)(local_208.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0) >> 0x20);
      local_2d0 = (float *)CONCAT71(local_2d0._1_7_,local_208.bDepthTested);
      auVar84._8_4_ = uVar87;
      auVar84._0_8_ = dVar11;
      auVar84._12_4_ = uVar88;
      auVar41._8_4_ = uVar87;
      auVar41._0_8_ = dVar11;
      auVar41._12_4_ = uVar88;
      auVar60._8_4_ = uVar87;
      auVar60._0_8_ = dVar11;
      auVar60._12_4_ = uVar88;
      auVar48._8_4_ = uVar73;
      auVar48._0_8_ = dVar2;
      auVar48._12_4_ = uVar74;
      auVar48 = blendpd(auVar60,auVar48,2);
      auVar85._0_8_ = auVar84._8_8_ * dVar13 - dVar11 * dVar10;
      auVar85._8_8_ =
           dVar2 * dVar10 - auVar41._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0];
      auVar42._8_4_ = uVar73;
      auVar42._0_8_ = dVar2;
      auVar42._12_4_ = uVar74;
      auVar61._0_8_ =
           auVar48._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] - dVar2 * dVar26;
      auVar61._8_8_ =
           auVar48._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar42._8_8_ * dVar46;
      auVar48 = blendpd(auVar85,auVar61,2);
      dVar64 = auVar85._8_8_ + auVar85._8_8_;
      dVar9 = auVar61._0_8_ + auVar61._0_8_;
      uVar73 = SUB84(dVar9,0);
      uVar74 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar86._0_8_ = auVar48._0_8_ + auVar48._0_8_;
      auVar86._8_8_ = auVar48._8_8_ + auVar48._8_8_;
      auVar71._8_4_ = uVar73;
      auVar71._0_8_ = dVar64;
      auVar71._12_4_ = uVar74;
      auVar43._8_4_ = uVar73;
      auVar43._0_8_ = dVar64;
      auVar43._12_4_ = uVar74;
      auVar62._8_4_ = uVar73;
      auVar62._0_8_ = dVar64;
      auVar62._12_4_ = uVar74;
      auVar48 = blendpd(auVar62,auVar86,2);
      auVar72._0_8_ = auVar71._8_8_ * dVar13 - dVar64 * dVar10;
      auVar72._8_8_ =
           auVar86._0_8_ * dVar10 -
           auVar43._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0];
      auVar44._8_4_ = SUB84(auVar86._8_8_,0);
      auVar44._0_8_ = auVar86._0_8_;
      auVar44._12_4_ = (int)((ulonglong)auVar86._8_8_ >> 0x20);
      auVar63._0_8_ =
           auVar48._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[0] -
           auVar86._0_8_ * dVar26;
      auVar63._8_8_ =
           auVar48._8_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] -
           auVar44._8_8_ * dVar46;
      auVar45._8_4_ = SUB84(auVar72._8_8_,0);
      auVar45._0_8_ = auVar72._0_8_;
      auVar45._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
      dVar9 = dVar9 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar12 + auVar63._0_8_ +
              local_208.TotalTransform.Translation.XY.m128d_f64[1];
      auVar48 = blendpd(auVar72,auVar63,2);
      local_2d8 = (float)local_2a0;
      local_278 = auVar86._0_8_ * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar2 +
                  auVar48._0_8_ + local_208.TotalTransform.Translation.ZW.m128d_f64[0];
      local_288._8_4_ = SUB84(dVar9,0);
      local_288._0_8_ =
           dVar64 * local_208.TotalTransform.Rotation.ZW.m128d_f64[1] + dVar11 + auVar45._8_8_ +
           local_208.TotalTransform.Translation.XY.m128d_f64[0];
      local_288._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      (**(code **)(local_208._padding_ + 8))(&local_208,local_288,local_270,&local_2b0);
      uVar73 = (undefined4)__real_3fe0000000000000;
      uVar74 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      fVar89 = __real_3b808081;
      dVar64 = __real_40c3880000000000;
    }
    pFVar20 = pFVar20 + 0x38;
  }
  iVar1 = (this->IntersectionPoints).ArrayNum;
  pFVar20 = (this->IntersectionPoints).AllocatorInstance.Data;
  pFVar24 = pFVar20 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((this->IntersectionPoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_2b8);
    }
    if (pFVar20 == pFVar24) break;
    cVar18 = (**(code **)(this->_padding_ + 0x50))(this,*(undefined4 *)(pFVar20 + 0x18));
    if (cVar18 == '\0') {
      dVar64 = (double)local_208.LineThickness;
      local_2b0 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.R];
      local_2ac = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.G];
      local_2a8 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.B];
      local_2a4 = (float)FColor::Cyan.field0_0x0._3_1_ * fVar89;
      if (*(int *)(pFVar20 + 0x18) != iVar22) {
        dVar64 = dVar64 * (double)CONCAT44(uVar74,uVar73);
      }
      local_288 = *(undefined1 (*) [16])pFVar20;
      local_278 = *(double *)&pFVar20[0x10].field_0x0;
      local_2c0 = local_208.bDepthTested;
      local_2d0 = &local_2b0;
      local_2c8 = (float)dVar64;
      local_260 = 0.0;
      local_2d8 = 8.96831e-44;
      local_270._8_8_ = uVar17;
      local_270._0_8_ = uVar16;
      (**(code **)(local_208._padding_ + 0x20))(&local_208,local_288,local_270,uVar87);
    }
    pFVar20 = pFVar20 + 0x90;
  }
  iVar1 = (int)this->_padding_;
  pauVar21 = (undefined1 (*) [16])this->_padding_;
  pauVar25 = pauVar21 + (longlong)iVar1 * 9;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_2b8);
    }
    if (pauVar21 == pauVar25) break;
    cVar18 = (**(code **)(this->_padding_ + 0x50))(this,*(undefined4 *)(pauVar21[1] + 8));
    if (cVar18 == '\0') {
      dVar64 = (double)local_208.LineThickness;
      local_2b0 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.R];
      local_2ac = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.G];
      local_2a8 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.B];
      local_2a4 = (float)FColor::Cyan.field0_0x0._3_1_ * fVar89;
      if (*(int *)(pauVar21[1] + 8) != iVar22) {
        dVar64 = dVar64 * (double)CONCAT44(uVar74,uVar73);
      }
      local_288 = *pauVar21;
      local_278 = *(double *)pauVar21[1];
      local_2c0 = local_208.bDepthTested;
      local_2d0 = &local_2b0;
      local_2c8 = (float)dVar64;
      local_260 = 0.0;
      local_2d8 = 8.96831e-44;
      local_270._8_8_ = uVar17;
      local_270._0_8_ = uVar16;
      (**(code **)(local_208._padding_ + 0x20))(&local_208,local_288,local_270,uVar87);
    }
    pauVar21 = pauVar21 + 9;
  }
  FToolDataVisualizer::~FToolDataVisualizer(&local_208);
  return;
}

// GenerateLineIntersectionTargets @ 14cb91b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::GenerateLineIntersectionTargets(FPointPlanarSnapSolver *this)

{
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetLine_const_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  FPointPlanarSnapSolver *pFVar9;
  bool bVar10;
  int iVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  double *pdVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  double *pdVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  double dVar26;
  undefined1 auStackY_2e8 [32];
  ForAnyElementType local_298;
  undefined8 local_290;
  ForAnyElementType local_288;
  int local_280;
  int local_27c;
  undefined1 local_278;
  undefined1 local_277 [7];
  longlong local_270;
  longlong local_268;
  uint local_260;
  FScriptContainerElement *local_258;
  double *local_250;
  FPointPlanarSnapSolver *local_248;
  undefined8 local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double> local_150;
  double local_138;
  double dStack_130;
  double local_128;
  undefined4 uStack_120;
  int iStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined2 local_108;
  undefined6 uStack_106;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  iVar11 = 0;
  (this->IntersectionPoints).ArrayNum = 0;
  local_248 = this;
  if ((this->IntersectionPoints).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,&(this->IntersectionPoints).AllocatorInstance,0,
               &(this->IntersectionPoints).ArrayMax);
  }
  (this->IntersectionSecondLinePointers).ArrayNum = 0;
  if ((this->IntersectionSecondLinePointers).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->IntersectionSecondLinePointers).AllocatorInstance,0,
               &(this->IntersectionSecondLinePointers).ArrayMax);
  }
  dVar26 = __real_3f50624dcc000000;
  iVar3 = (this->GeneratedLines).ArrayNum;
  local_108 = 0;
  dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uStack_d0 = uStack_d0 & 0xffffff00;
  dStack_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_e8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  dStack_e0 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  local_d8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  local_c8 = 0;
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_27c = 0;
  pFVar17 = (this->GeneratedLines).AllocatorInstance.Data;
  pFVar21 = pFVar17 + (longlong)iVar3 * 0x38;
  uStack_cc = 0xffffffff;
  uStack_120 = 0xc;
  local_280 = 0;
  while( true ) {
    if ((this->GeneratedLines).ArrayNum != iVar3) {
      local_278 = 0;
      `TCheckedPointerIterator<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetLine,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_278);
      iVar11 = local_280;
    }
    if (pFVar17 == pFVar21) break;
    dVar5 = *(double *)(pFVar17 + 8) - (this->Plane).Origin.field0_0x0._s_0.Y;
    local_180._s_0.Z = *(double *)(pFVar17 + 0x10) - (this->Plane).Origin.field0_0x0._s_0.Z;
    local_180._8_4_ = SUB84(dVar5,0);
    local_180._0_8_ = *(double *)pFVar17 - (this->Plane).Origin.field0_0x0._s_0.X;
    local_180._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    TQuaternion<double>::InverseMultiply
              (&(this->Plane).Rotation,(TVector<double> *)&local_1f8._s_0,
               (TVector<double> *)&local_180._s_0);
    if ((local_1f8._s_0.Z < dVar26) &&
       (TQuaternion<double>::InverseMultiply
                  (&(this->Plane).Rotation,(TVector<double> *)&local_1e0._s_0,
                   (TVector<double> *)(pFVar17 + 0x18)), local_1e0._s_0.Z < dVar26)) {
      local_238 = local_1f8._s_0.X;
      dStack_230 = local_1f8._s_0.Y;
      local_228 = local_1e0._s_0.X;
      dStack_220 = local_1e0._s_0.Y;
      if ((local_288.Data <= (FScriptContainerElement *)&local_238) &&
         (((FScriptContainerElement *)&local_238 < local_288.Data + (longlong)local_27c * 0x20 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), iVar11 = local_280, bVar10)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar11 == local_27c) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_288,&local_27c);
      }
      local_280 = iVar11 + 1;
      *(double *)(local_288.Data + (longlong)iVar11 * 0x20) = local_238;
      *(double *)(local_288.Data + (longlong)iVar11 * 0x20 + 8) = dStack_230;
      *(double *)(local_288.Data + (longlong)iVar11 * 0x20 + 0x10) = local_228;
      *(double *)(local_288.Data + (longlong)iVar11 * 0x20 + 0x10 + 8) = dStack_220;
      local_258 = pFVar17;
      if (((local_298.Data <= (FScriptContainerElement *)&local_258) &&
          ((FScriptContainerElement *)&local_258 < local_298.Data + (longlong)local_290._4_4_ * 8))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (int)local_290;
      if ((int)local_290 == local_290._4_4_) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_298,(int *)((longlong)&local_290 + 4));
      }
      local_290 = CONCAT44(local_290._4_4_,iVar11 + 1);
      *(FScriptContainerElement **)(local_298.Data + (longlong)iVar11 * 8) = local_258;
      iVar11 = local_280;
    }
    pFVar17 = pFVar17 + 0x38;
    this = local_248;
  }
  iVar3 = (int)this->_padding_;
  pdVar14 = (double *)this->_padding_;
  pdVar22 = pdVar14 + (longlong)iVar3 * 7;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_277[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetLine,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_277);
      iVar11 = local_280;
    }
    uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar5 = __real_3e45798ee2308c3a;
    if (pdVar14 == pdVar22) break;
    dVar5 = pdVar14[1] - (this->Plane).Origin.field0_0x0._s_0.Y;
    local_168._s_0.Z = pdVar14[2] - (this->Plane).Origin.field0_0x0._s_0.Z;
    local_168._8_4_ = SUB84(dVar5,0);
    local_168._0_8_ = *pdVar14 - (this->Plane).Origin.field0_0x0._s_0.X;
    local_168._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    TQuaternion<double>::InverseMultiply
              (&(this->Plane).Rotation,(TVector<double> *)&local_1c8._s_0,
               (TVector<double> *)&local_168._s_0);
    if ((local_1c8._s_0.Z < dVar26) &&
       (TQuaternion<double>::InverseMultiply
                  (&(this->Plane).Rotation,(TVector<double> *)&local_1b0._s_0,
                   (TVector<double> *)(pdVar14 + 3)), local_1b0._s_0.Z < dVar26)) {
      local_218 = local_1c8._s_0.X;
      dStack_210 = local_1c8._s_0.Y;
      local_208 = local_1b0._s_0.X;
      dStack_200 = local_1b0._s_0.Y;
      if ((local_288.Data <= (FScriptContainerElement *)&local_218) &&
         (((FScriptContainerElement *)&local_218 < local_288.Data + (longlong)local_27c * 0x20 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), iVar11 = local_280, bVar10)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar11 == local_27c) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_288,&local_27c);
      }
      local_280 = iVar11 + 1;
      *(double *)(local_288.Data + (longlong)iVar11 * 0x20) = local_218;
      *(double *)(local_288.Data + (longlong)iVar11 * 0x20 + 8) = dStack_210;
      *(double *)(local_288.Data + (longlong)iVar11 * 0x20 + 0x10) = local_208;
      *(double *)(local_288.Data + (longlong)iVar11 * 0x20 + 0x10 + 8) = dStack_200;
      local_250 = pdVar14;
      if (((local_298.Data <= (FScriptContainerElement *)&local_250) &&
          ((FScriptContainerElement *)&local_250 < local_298.Data + (longlong)local_290._4_4_ * 8))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (int)local_290;
      if ((int)local_290 == local_290._4_4_) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_298,(int *)((longlong)&local_290 + 4));
      }
      local_290 = CONCAT44(local_290._4_4_,iVar11 + 1);
      *(double **)(local_298.Data + (longlong)iVar11 * 8) = local_250;
      iVar11 = local_280;
    }
    pdVar14 = pdVar14 + 7;
    this = local_248;
  }
  uVar23 = 0;
  if (0 < iVar11) {
    lVar19 = 0;
    local_268 = 0;
    do {
      lVar13 = local_268;
      if ((int)uVar23 < iVar11) {
        uVar20 = ~uVar23 >> 0x1f;
        local_270 = local_268;
        lVar18 = lVar19;
        uVar15 = uVar23;
        local_260 = uVar20;
        do {
          uVar16 = 0;
          if ((int)uVar23 < iVar11) {
            uVar16 = uVar20;
          }
          if ((uVar16 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             lVar13 = local_268, iVar11 = local_280, bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar8.Data = local_288.Data;
          uVar16 = ~uVar15 >> 0x1f;
          uVar20 = 0;
          if ((int)uVar15 < iVar11) {
            uVar20 = uVar16;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             lVar13 = local_268, iVar11 = local_280, bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar9 = local_248;
          dVar26 = *(double *)(FVar8.Data + lVar13 + 0x10) *
                   *(double *)(local_288.Data + local_270 + 0x18) -
                   *(double *)(FVar8.Data + lVar13 + 0x18) *
                   *(double *)(local_288.Data + local_270 + 0x10);
          uVar24 = SUB84(dVar26,0) & uVar6;
          uVar25 = (uint)((ulonglong)dVar26 >> 0x20) & uVar7;
          uVar20 = local_260;
          if (dVar5 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar5)
          {
            local_198._s_0.Z = 0.0;
            dVar26 = ((*(double *)(local_288.Data + local_270) - *(double *)(FVar8.Data + lVar13)) *
                      *(double *)(local_288.Data + local_270 + 0x18) -
                     (*(double *)(local_288.Data + local_270 + 8) -
                     *(double *)(FVar8.Data + lVar13 + 8)) *
                     *(double *)(local_288.Data + local_270 + 0x10)) / dVar26;
            local_198._s_0.Y =
                 dVar26 * *(double *)(FVar8.Data + lVar13 + 0x18) +
                 *(double *)(FVar8.Data + lVar13 + 8);
            local_198._s_0.X =
                 dVar26 * *(double *)(FVar8.Data + lVar13 + 0x10) + *(double *)(FVar8.Data + lVar13)
            ;
            pTVar12 = operator*<double>(&local_150,&(local_248->Plane).Rotation,
                                        (TVector<double> *)&local_198._s_0);
            uVar20 = local_260;
            dStack_130 = (pFVar9->Plane).Origin.field0_0x0._s_0.Y + (pTVar12->field0_0x0)._s_0.Y;
            local_128 = (pFVar9->Plane).Origin.field0_0x0._s_0.Z + (pTVar12->field0_0x0)._s_0.Z;
            local_138 = (pFVar9->Plane).Origin.field0_0x0._s_0.X + (pTVar12->field0_0x0)._s_0.X;
            uVar24 = 0;
            if ((int)uVar23 < (int)local_290) {
              uVar24 = local_260;
            }
            if ((uVar24 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar11 = *(int *)(*(longlong *)(local_298.Data + lVar19 * 8) + 0x34);
            uVar24 = 0;
            if ((int)uVar15 < (int)local_290) {
              uVar24 = uVar16;
            }
            if ((uVar24 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(int *)(*(longlong *)(local_298.Data + lVar18 * 8) + 0x34) < iVar11) {
              uVar24 = 0;
              if ((int)uVar15 < (int)local_290) {
                uVar24 = uVar16;
              }
              if ((uVar24 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pdVar14 = *(double **)(local_298.Data + lVar18 * 8);
              uVar16 = 0;
              if ((int)uVar23 < (int)local_290) {
                uVar16 = uVar20;
              }
              if ((uVar16 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_240 = *(undefined8 *)(local_298.Data + lVar19 * 8);
            }
            else {
              uVar24 = 0;
              if ((int)uVar23 < (int)local_290) {
                uVar24 = uVar20;
              }
              if ((uVar24 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pdVar14 = *(double **)(local_298.Data + lVar19 * 8);
              uVar24 = 0;
              if ((int)uVar15 < (int)local_290) {
                uVar24 = uVar16;
              }
              if ((uVar24 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_240 = *(undefined8 *)(local_298.Data + lVar18 * 8);
            }
            pFVar9 = local_248;
            iStack_11c = *(int *)((longlong)pdVar14 + 0x34) - local_248->IntersectionPriorityDelta;
            dStack_100 = *pdVar14;
            dStack_f8 = pdVar14[1];
            dStack_f0 = pdVar14[2];
            dStack_e8 = pdVar14[3];
            dStack_e0 = pdVar14[4];
            local_d8 = pdVar14[5];
            pTVar1 = &local_248->IntersectionSecondLinePointers;
            pFVar17 = (pTVar1->AllocatorInstance).Data;
            if (((pFVar17 <= (FScriptContainerElement *)&local_240) &&
                ((FScriptContainerElement *)&local_240 <
                 pFVar17 + (longlong)(local_248->IntersectionSecondLinePointers).ArrayMax * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar11 = (pFVar9->IntersectionSecondLinePointers).ArrayNum;
            if (iVar11 == (pFVar9->IntersectionSecondLinePointers).ArrayMax) {
              iVar11 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar1->AllocatorInstance,
                                  &(pFVar9->IntersectionSecondLinePointers).ArrayMax);
            }
            (pFVar9->IntersectionSecondLinePointers).ArrayNum = iVar11 + 1;
            pTVar2 = &pFVar9->IntersectionPoints;
            *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_240;
            pFVar17 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar17 <= (FScriptContainerElement *)&local_138) &&
                ((FScriptContainerElement *)&local_138 <
                 pFVar17 + (longlong)(pFVar9->IntersectionPoints).ArrayMax * 0x90)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar11 = (pFVar9->IntersectionPoints).ArrayNum;
            if (iVar11 == (pFVar9->IntersectionPoints).ArrayMax) {
              iVar11 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x890,&pTVar2->AllocatorInstance,
                                  &(pFVar9->IntersectionPoints).ArrayMax);
            }
            (pFVar9->IntersectionPoints).ArrayNum = iVar11 + 1;
            lVar13 = (longlong)iVar11;
            pFVar17 = (pTVar2->AllocatorInstance).Data;
            *(double *)(pFVar17 + lVar13 * 0x90) = local_138;
            *(double *)(pFVar17 + lVar13 * 0x90 + 8) = dStack_130;
            *(double *)(pFVar17 + lVar13 * 0x90 + 0x10) = local_128;
            *(ulonglong *)(pFVar17 + lVar13 * 0x90 + 0x10 + 8) = CONCAT44(iStack_11c,uStack_120);
            *(undefined8 *)(pFVar17 + lVar13 * 0x90 + 0x20) = local_118;
            *(undefined8 *)(pFVar17 + lVar13 * 0x90 + 0x20 + 8) = uStack_110;
            *(ulonglong *)(pFVar17 + lVar13 * 0x90 + 0x30) = CONCAT62(uStack_106,local_108);
            *(double *)(pFVar17 + lVar13 * 0x90 + 0x30 + 8) = dStack_100;
            *(double *)(pFVar17 + lVar13 * 0x90 + 0x40) = dStack_f8;
            *(double *)(pFVar17 + lVar13 * 0x90 + 0x40 + 8) = dStack_f0;
            *(double *)(pFVar17 + lVar13 * 0x90 + 0x50) = dStack_e8;
            *(double *)(pFVar17 + lVar13 * 0x90 + 0x50 + 8) = dStack_e0;
            *(double *)(pFVar17 + lVar13 * 0x90 + 0x60) = local_d8;
            *(ulonglong *)(pFVar17 + lVar13 * 0x90 + 0x60 + 8) = CONCAT44(uStack_cc,uStack_d0);
            *(ulonglong *)(pFVar17 + lVar13 * 0x90 + 0x70) = CONCAT71(uStack_c7,local_c8);
            *(undefined8 *)(pFVar17 + lVar13 * 0x90 + 0x70 + 8) = uStack_c0;
            *(undefined8 *)(pFVar17 + lVar13 * 0x90 + 0x80) = local_b8;
            *(undefined8 *)(pFVar17 + lVar13 * 0x90 + 0x80 + 8) = uStack_b0;
            lVar13 = local_268;
            iVar11 = local_280;
          }
          local_270 = local_270 + 0x20;
          uVar15 = uVar15 + 1;
          lVar18 = lVar18 + 1;
        } while ((int)uVar15 < iVar11);
      }
      local_268 = lVar13 + 0x20;
      uVar23 = uVar23 + 1;
      lVar19 = lVar19 + 1;
    } while ((int)uVar23 < iVar11);
  }
  if (local_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data);
  }
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  return;
}

// GenerateTargets @ 14cb93250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::GenerateTargets
          (FPointPlanarSnapSolver *this,TVector<double> *param_1)

{
  int *piVar1;
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,TSizedDefaultAllocator<32>_>
  *pTVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  ulonglong uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  undefined1 unaff_XMM7 [16];
  uint uVar26;
  undefined1 auStackY_288 [32];
  longlong local_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined4 uStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined1 uStack_1e7;
  undefined6 uStack_1e6;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double local_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined1 uStack_157;
  undefined6 uStack_156;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double local_128;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined1 uStack_c7;
  undefined6 uStack_c6;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pTVar2 = &this->GeneratedTargets;
  piVar1 = &(this->GeneratedTargets).ArrayMax;
  (this->GeneratedTargets).ArrayNum = 0;
  if ((this->GeneratedTargets).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  lVar15 = (longlong)(this->GeneratedLines).ArrayNum;
  uVar17 = 0;
  if (0 < lVar15) {
    lVar19 = 0;
    lVar20 = 0;
    do {
      local_158 = 0;
      uStack_157 = 0;
      dStack_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uStack_120 = uStack_120 & 0xffffff00;
      uVar18 = ~uVar17 >> 0x1f;
      dStack_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar26 = 0;
      if ((int)uVar17 < (this->GeneratedLines).ArrayNum) {
        uVar26 = uVar18;
      }
      dStack_138 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      dStack_130 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_128 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      uStack_11c = 0xffffffff;
      local_118 = 0;
      if (uVar26 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar6 = (this->GeneratedLines).AllocatorInstance.Data;
      dVar24 = ((param_1->field0_0x0)._s_0.X - *(double *)(pFVar6 + lVar20)) *
               *(double *)(pFVar6 + lVar20 + 0x18) +
               ((param_1->field0_0x0)._s_0.Y - *(double *)(pFVar6 + lVar20 + 8)) *
               *(double *)(pFVar6 + lVar20 + 0x20) +
               ((param_1->field0_0x0)._s_0.Z - *(double *)(pFVar6 + lVar20 + 0x10)) *
               *(double *)(pFVar6 + lVar20 + 0x28);
      local_188 = dVar24 * *(double *)(pFVar6 + lVar20 + 0x18) + *(double *)(pFVar6 + lVar20);
      dStack_180 = dVar24 * *(double *)(pFVar6 + lVar20 + 0x20) + *(double *)(pFVar6 + lVar20 + 8);
      unaff_XMM7._0_8_ =
           dVar24 * *(double *)(pFVar6 + lVar20 + 0x28) + *(double *)(pFVar6 + lVar20 + 0x10);
      unaff_XMM7._8_8_ = 0;
      uVar26 = 0;
      if ((int)uVar17 < (this->GeneratedLines).ArrayNum) {
        uVar26 = uVar18;
      }
      local_178 = unaff_XMM7._0_8_;
      if (uVar26 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uStack_170 = *(undefined4 *)((this->GeneratedLines).AllocatorInstance.Data + lVar20 + 0x30);
      uVar26 = 0;
      if ((int)uVar17 < (this->GeneratedLines).ArrayNum) {
        uVar26 = uVar18;
      }
      if (uVar26 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uStack_16c = *(undefined4 *)((this->GeneratedLines).AllocatorInstance.Data + lVar20 + 0x34);
      uStack_157 = 1;
      uVar26 = 0;
      if ((int)uVar17 < (this->GeneratedLines).ArrayNum) {
        uVar26 = uVar18;
      }
      if (uVar26 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar6 = (this->GeneratedLines).AllocatorInstance.Data;
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      dStack_150 = *(double *)(pFVar6 + lVar20);
      dStack_148 = *(double *)(pFVar6 + lVar20 + 8);
      dStack_140 = *(double *)(pFVar6 + lVar20 + 0x10);
      dStack_138 = *(double *)(pFVar6 + lVar20 + 0x10 + 8);
      dStack_130 = *(double *)(pFVar6 + lVar20 + 0x20);
      local_128 = *(double *)(pFVar6 + lVar20 + 0x20 + 8);
      if ((pFVar7 <= (FScriptContainerElement *)&local_188) &&
         ((FScriptContainerElement *)&local_188 <
          pFVar7 + (longlong)(this->GeneratedTargets).ArrayMax * 0x90)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar12 = (this->GeneratedTargets).ArrayNum;
      if (iVar12 == (this->GeneratedTargets).ArrayMax) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x890,&pTVar2->AllocatorInstance,&(this->GeneratedTargets).ArrayMax);
      }
      (this->GeneratedTargets).ArrayNum = iVar12 + 1;
      uVar17 = uVar17 + 1;
      lVar16 = (longlong)iVar12;
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0x38;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      *(double *)(pFVar6 + lVar16 * 0x90) = local_188;
      *(double *)(pFVar6 + lVar16 * 0x90 + 8) = dStack_180;
      *(double *)(pFVar6 + lVar16 * 0x90 + 0x10) = local_178;
      *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x10 + 8) = CONCAT44(uStack_16c,uStack_170);
      *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x20) = local_168;
      *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x20 + 8) = uStack_160;
      *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x30) =
           CONCAT62(uStack_156,CONCAT11(uStack_157,local_158));
      *(double *)(pFVar6 + lVar16 * 0x90 + 0x30 + 8) = dStack_150;
      *(double *)(pFVar6 + lVar16 * 0x90 + 0x40) = dStack_148;
      *(double *)(pFVar6 + lVar16 * 0x90 + 0x40 + 8) = dStack_140;
      *(double *)(pFVar6 + lVar16 * 0x90 + 0x50) = dStack_138;
      *(double *)(pFVar6 + lVar16 * 0x90 + 0x50 + 8) = dStack_130;
      *(double *)(pFVar6 + lVar16 * 0x90 + 0x60) = local_128;
      *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x60 + 8) = CONCAT44(uStack_11c,uStack_120);
      *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x70) = CONCAT71(uStack_117,local_118);
      *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x70 + 8) = uStack_110;
      *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x80) = local_108;
      *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x80 + 8) = uStack_100;
    } while (lVar19 < lVar15);
  }
  uVar17 = 0;
  if (0 < (int)this->_padding_) {
    pTVar2 = &this->GeneratedTargets;
    lVar19 = 0;
    do {
      local_c8 = 0;
      uStack_c7 = 0;
      dStack_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uStack_90 = uStack_90 & 0xffffff00;
      uVar18 = ~uVar17 >> 0x1f;
      dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar26 = 0;
      if ((int)uVar17 < (int)this->_padding_) {
        uVar26 = uVar18;
      }
      dStack_a8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      dStack_a0 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_98 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      uStack_8c = 0xffffffff;
      local_88 = 0;
      if (uVar26 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar20 = this->_padding_;
      dStack_f0 = *(double *)(lVar19 + 8 + lVar20);
      dVar24 = *(double *)(lVar19 + 0x10 + lVar20);
      dVar4 = *(double *)(lVar19 + 0x20 + lVar20);
      dVar5 = *(double *)(lVar19 + 0x28 + lVar20);
      dVar25 = ((param_1->field0_0x0)._s_0.X - *(double *)(lVar19 + lVar20)) *
               *(double *)(lVar19 + 0x18 + lVar20) +
               ((param_1->field0_0x0)._s_0.Y - dStack_f0) * dVar4 +
               ((param_1->field0_0x0)._s_0.Z - dVar24) * dVar5;
      local_f8 = dVar25 * *(double *)(lVar19 + 0x18 + lVar20) + *(double *)(lVar19 + lVar20);
      dStack_f0 = dVar25 * dVar4 + dStack_f0;
      unaff_XMM7._0_8_ = dVar25 * dVar5 + dVar24;
      unaff_XMM7._8_8_ = 0;
      uVar26 = 0;
      if ((int)uVar17 < (int)this->_padding_) {
        uVar26 = uVar18;
      }
      local_e8 = unaff_XMM7._0_8_;
      if (uVar26 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uStack_e0 = *(undefined4 *)(lVar19 + 0x30 + this->_padding_);
      uVar26 = 0;
      if ((int)uVar17 < (int)this->_padding_) {
        uVar26 = uVar18;
      }
      if (uVar26 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uStack_dc = *(undefined4 *)(lVar19 + 0x34 + this->_padding_);
      uStack_c7 = 1;
      uVar26 = 0;
      if ((int)uVar17 < (int)this->_padding_) {
        uVar26 = uVar18;
      }
      if (uVar26 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar20 = this->_padding_;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      dStack_c0 = *(double *)(lVar19 + lVar20);
      dStack_b8 = (double)((undefined8 *)(lVar19 + lVar20))[1];
      puVar3 = (undefined8 *)(lVar19 + 0x10 + lVar20);
      dStack_b0 = (double)*puVar3;
      dStack_a8 = (double)puVar3[1];
      puVar3 = (undefined8 *)(lVar19 + 0x20 + lVar20);
      dStack_a0 = (double)*puVar3;
      local_98 = (double)puVar3[1];
      if ((pFVar6 <= (FScriptContainerElement *)&local_f8) &&
         ((FScriptContainerElement *)&local_f8 <
          pFVar6 + (longlong)(this->GeneratedTargets).ArrayMax * 0x90)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar12 = (this->GeneratedTargets).ArrayNum;
      if (iVar12 == (this->GeneratedTargets).ArrayMax) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x890,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->GeneratedTargets).ArrayNum = iVar12 + 1;
      uVar17 = uVar17 + 1;
      lVar20 = (longlong)iVar12;
      lVar19 = lVar19 + 0x38;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      *(double *)(pFVar6 + lVar20 * 0x90) = local_f8;
      *(double *)(pFVar6 + lVar20 * 0x90 + 8) = dStack_f0;
      *(double *)(pFVar6 + lVar20 * 0x90 + 0x10) = local_e8;
      *(ulonglong *)(pFVar6 + lVar20 * 0x90 + 0x10 + 8) = CONCAT44(uStack_dc,uStack_e0);
      *(undefined8 *)(pFVar6 + lVar20 * 0x90 + 0x20) = local_d8;
      *(undefined8 *)(pFVar6 + lVar20 * 0x90 + 0x20 + 8) = uStack_d0;
      *(ulonglong *)(pFVar6 + lVar20 * 0x90 + 0x30) =
           CONCAT62(uStack_c6,CONCAT11(uStack_c7,local_c8));
      *(double *)(pFVar6 + lVar20 * 0x90 + 0x30 + 8) = dStack_c0;
      *(double *)(pFVar6 + lVar20 * 0x90 + 0x40) = dStack_b8;
      *(double *)(pFVar6 + lVar20 * 0x90 + 0x40 + 8) = dStack_b0;
      *(double *)(pFVar6 + lVar20 * 0x90 + 0x50) = dStack_a8;
      *(double *)(pFVar6 + lVar20 * 0x90 + 0x50 + 8) = dStack_a0;
      *(double *)(pFVar6 + lVar20 * 0x90 + 0x60) = local_98;
      *(ulonglong *)(pFVar6 + lVar20 * 0x90 + 0x60 + 8) = CONCAT44(uStack_8c,uStack_90);
      *(ulonglong *)(pFVar6 + lVar20 * 0x90 + 0x70) = CONCAT71(uStack_87,local_88);
      *(undefined8 *)(pFVar6 + lVar20 * 0x90 + 0x70 + 8) = uStack_80;
      *(undefined8 *)(pFVar6 + lVar20 * 0x90 + 0x80) = local_78;
      *(undefined8 *)(pFVar6 + lVar20 * 0x90 + 0x80 + 8) = uStack_70;
    } while ((int)uVar17 < (int)this->_padding_);
  }
  if (this->bEnableSnapToKnownLengths != false) {
    uVar17 = 0;
    iVar12 = (this->PointHistory).ArrayNum + -1;
    if (0 < iVar12) {
      uVar26 = (uint)__xmm_80000000000000008000000000000000;
      uVar10 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      pTVar2 = &this->GeneratedTargets;
      local_220 = 0;
      do {
        uVar18 = 0;
        if ((int)(uVar17 + 1) < (this->PointHistory).ArrayNum) {
          uVar18 = ~(uVar17 + 1) >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pFVar6 = (this->PointHistory).AllocatorInstance.Data;
        uVar18 = 0;
        if ((int)uVar17 < (this->PointHistory).ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pFVar7 = (this->PointHistory).AllocatorInstance.Data;
        lVar19 = 0;
        uVar18 = 0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (*(double *)(pFVar6 + local_220 + 0x20) - *(double *)(pFVar7 + local_220 + 8)
                       ) * (*(double *)(pFVar6 + local_220 + 0x20) -
                           *(double *)(pFVar7 + local_220 + 8)) +
                       (*(double *)(pFVar6 + local_220 + 0x18) - *(double *)(pFVar7 + local_220)) *
                       (*(double *)(pFVar6 + local_220 + 0x18) - *(double *)(pFVar7 + local_220)) +
                       (*(double *)(pFVar6 + local_220 + 0x28) -
                       *(double *)(pFVar7 + local_220 + 0x10)) *
                       (*(double *)(pFVar6 + local_220 + 0x28) -
                       *(double *)(pFVar7 + local_220 + 0x10));
        unaff_XMM7 = sqrtpd(unaff_XMM7,auVar9);
        if (0 < lVar15) {
          lVar20 = 0;
          uVar22 = unaff_XMM7._0_4_ ^ uVar26;
          uVar23 = unaff_XMM7._4_4_ ^ (uint)uVar10;
          do {
            local_1e8 = 0;
            uStack_1e7 = 0;
            dStack_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uStack_1b0 = uStack_1b0 & 0xffffff00;
            uVar21 = ~uVar18 >> 0x1f;
            dStack_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar13 = 0;
            if ((int)uVar18 < (this->GeneratedLines).ArrayNum) {
              uVar13 = uVar21;
            }
            dStack_1c8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
            dStack_1c0 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
            local_1b8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
            uStack_1ac = 0xffffffff;
            local_1a8 = 0;
            if (uVar13 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            uStack_200 = *(undefined4 *)
                          ((this->GeneratedLines).AllocatorInstance.Data + lVar20 + 0x30);
            uVar13 = 0;
            if ((int)uVar18 < (this->GeneratedLines).ArrayNum) {
              uVar13 = uVar21;
            }
            if (uVar13 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            iStack_1fc = *(int *)((this->GeneratedLines).AllocatorInstance.Data + lVar20 + 0x34) -
                         this->KnownLengthPriorityDelta;
            uStack_1e7 = 1;
            uVar13 = 0;
            if ((int)uVar18 < (this->GeneratedLines).ArrayNum) {
              uVar13 = uVar21;
            }
            if (uVar13 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            pFVar6 = (this->GeneratedLines).AllocatorInstance.Data;
            dStack_1e0 = *(double *)(pFVar6 + lVar20);
            dStack_1d8 = *(double *)(pFVar6 + lVar20 + 8);
            dStack_1d0 = *(double *)(pFVar6 + lVar20 + 0x10);
            dStack_1c8 = *(double *)(pFVar6 + lVar20 + 0x10 + 8);
            dStack_1c0 = *(double *)(pFVar6 + lVar20 + 0x20);
            local_1b8 = *(double *)(pFVar6 + lVar20 + 0x20 + 8);
            uStack_1b0 = CONCAT31(uStack_1b0._1_3_,1);
            uVar13 = 0;
            if ((int)uVar18 < (this->GeneratedLines).ArrayNum) {
              uVar13 = uVar21;
            }
            uStack_1ac = uVar17;
            if (uVar13 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            pFVar6 = (this->GeneratedLines).AllocatorInstance.Data;
            pFVar7 = (pTVar2->AllocatorInstance).Data;
            dVar24 = unaff_XMM7._0_8_;
            dStack_210 = dVar24 * *(double *)(pFVar6 + lVar20 + 0x20) +
                         *(double *)(pFVar6 + lVar20 + 8);
            local_208 = dVar24 * *(double *)(pFVar6 + lVar20 + 0x28) +
                        *(double *)(pFVar6 + lVar20 + 0x10);
            local_218 = dVar24 * *(double *)(pFVar6 + lVar20 + 0x18) + *(double *)(pFVar6 + lVar20);
            if ((pFVar7 <= (FScriptContainerElement *)&local_218) &&
               ((FScriptContainerElement *)&local_218 <
                pFVar7 + (longlong)(this->GeneratedTargets).ArrayMax * 0x90)) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            iVar14 = (this->GeneratedTargets).ArrayNum;
            if (iVar14 == (this->GeneratedTargets).ArrayMax) {
              iVar14 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x890,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->GeneratedTargets).ArrayNum = iVar14 + 1;
            lVar16 = (longlong)iVar14;
            pFVar6 = (pTVar2->AllocatorInstance).Data;
            *(double *)(pFVar6 + lVar16 * 0x90) = local_218;
            *(double *)(pFVar6 + lVar16 * 0x90 + 8) = dStack_210;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x10) = local_208;
            *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x10 + 8) = CONCAT44(iStack_1fc,uStack_200);
            *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x20) = local_1f8;
            *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x20 + 8) = uStack_1f0;
            *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x30) =
                 CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,local_1e8));
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x30 + 8) = dStack_1e0;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x40) = dStack_1d8;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x40 + 8) = dStack_1d0;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x50) = dStack_1c8;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x50 + 8) = dStack_1c0;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x60) = local_1b8;
            *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x60 + 8) = CONCAT44(uStack_1ac,uStack_1b0);
            *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x70) = CONCAT71(uStack_1a7,local_1a8);
            *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x70 + 8) = uStack_1a0;
            *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x80) = local_198;
            *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x80 + 8) = uStack_190;
            uVar13 = 0;
            if ((int)uVar18 < (this->GeneratedLines).ArrayNum) {
              uVar13 = uVar21;
            }
            if (uVar13 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            pFVar6 = (this->GeneratedLines).AllocatorInstance.Data;
            pFVar7 = (pTVar2->AllocatorInstance).Data;
            dStack_210 = (double)CONCAT44(uVar23,uVar22) * *(double *)(pFVar6 + lVar20 + 0x20) +
                         *(double *)(pFVar6 + lVar20 + 8);
            local_208 = (double)CONCAT44(uVar23,uVar22) * *(double *)(pFVar6 + lVar20 + 0x28) +
                        *(double *)(pFVar6 + lVar20 + 0x10);
            local_218 = (double)CONCAT44(uVar23,uVar22) * *(double *)(pFVar6 + lVar20 + 0x18) +
                        *(double *)(pFVar6 + lVar20);
            if ((pFVar7 <= (FScriptContainerElement *)&local_218) &&
               ((FScriptContainerElement *)&local_218 <
                pFVar7 + (longlong)(this->GeneratedTargets).ArrayMax * 0x90)) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            iVar14 = (this->GeneratedTargets).ArrayNum;
            if (iVar14 == (this->GeneratedTargets).ArrayMax) {
              iVar14 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x890,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->GeneratedTargets).ArrayNum = iVar14 + 1;
            uVar18 = uVar18 + 1;
            lVar16 = (longlong)iVar14;
            lVar19 = lVar19 + 1;
            lVar20 = lVar20 + 0x38;
            pFVar6 = (pTVar2->AllocatorInstance).Data;
            *(double *)(pFVar6 + lVar16 * 0x90) = local_218;
            *(double *)(pFVar6 + lVar16 * 0x90 + 8) = dStack_210;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x10) = local_208;
            *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x10 + 8) = CONCAT44(iStack_1fc,uStack_200);
            *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x20) = local_1f8;
            *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x20 + 8) = uStack_1f0;
            *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x30) =
                 CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,local_1e8));
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x30 + 8) = dStack_1e0;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x40) = dStack_1d8;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x40 + 8) = dStack_1d0;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x50) = dStack_1c8;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x50 + 8) = dStack_1c0;
            *(double *)(pFVar6 + lVar16 * 0x90 + 0x60) = local_1b8;
            *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x60 + 8) = CONCAT44(uStack_1ac,uStack_1b0);
            *(ulonglong *)(pFVar6 + lVar16 * 0x90 + 0x70) = CONCAT71(uStack_1a7,local_1a8);
            *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x70 + 8) = uStack_1a0;
            *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x80) = local_198;
            *(undefined8 *)(pFVar6 + lVar16 * 0x90 + 0x80 + 8) = uStack_190;
          } while (lVar19 < lVar15);
        }
        uVar17 = uVar17 + 1;
        local_220 = local_220 + 0x18;
      } while ((int)uVar17 < iVar12);
    }
  }
  return;
}

// InsertHistoryPoint @ 14cba3570

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::InsertHistoryPoint
          (FPointPlanarSnapSolver *this,TVector<double> *param_1,int param_2)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  pTVar2 = &this->PointHistory;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar9 <= param_1) && (param_1 < pFVar9 + (longlong)(this->PointHistory).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->PointHistory).ArrayNum;
  piVar1 = &(this->PointHistory).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar3 = (longlong)param_2 * 0x18;
  (this->PointHistory).ArrayNum = iVar8 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + lVar3;
  memmove(pFVar9 + 0x18,pFVar9,(longlong)(iVar8 - param_2) * 0x18);
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  pFVar9 = pFVar4 + lVar3;
  *(double *)pFVar9 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar9 + 8) = dVar6;
  *(double *)(pFVar4 + lVar3 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  ResetGenerated(this);
  return;
}

// RegenerateTargetLines @ 14cba9cc0

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::RegenerateTargetLines
          (FPointPlanarSnapSolver *this,bool param_1,bool param_2)

{
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetLine,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  TVector<double> *pTVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double local_1d8;
  double dStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined4 local_1a8;
  int iStack_1a4;
  double local_1a0;
  double dStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  TVector<double>_u_0 TStack_188;
  undefined4 local_170;
  int iStack_16c;
  undefined1 local_168 [16];
  double local_158;
  TQuaternion<double>_u_0 local_150;
  undefined4 local_120;
  undefined4 uStack_11c;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  TVector<double> local_a0 [5];
  
  ResetGenerated(this);
  iVar17 = (this->PointHistory).ArrayNum;
  if (iVar17 != 0) {
    uVar21 = iVar17 - 1;
    uVar19 = 0;
    if ((int)uVar21 < iVar17) {
      uVar19 = ~uVar21 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar14 = __real_3ff0000000000000;
    pFVar7 = (this->PointHistory).AllocatorInstance.Data;
    pFVar2 = pFVar7 + (longlong)(int)uVar21 * 0x18 + 0x10;
    uVar12 = *(undefined4 *)pFVar2;
    uVar13 = *(undefined4 *)(pFVar2 + 4);
    pFVar7 = pFVar7 + (longlong)(int)uVar21 * 0x18;
    dVar5 = *(double *)pFVar7;
    dVar6 = *(double *)(pFVar7 + 8);
    local_120 = uVar12;
    uStack_11c = uVar13;
    if (param_1) {
      dVar26 = (this->Plane).Rotation.field0_0x0._s_0.Z;
      pTVar1 = &this->GeneratedLines;
      dVar25 = (this->Plane).Rotation.field0_0x0._s_0.Y;
      dVar3 = (this->Plane).Rotation.field0_0x0._s_0.X;
      dVar10 = dVar26 + dVar26;
      dVar4 = (this->Plane).Rotation.field0_0x0._s_0.W;
      iStack_1a4 = this->CardinalAxisPriority;
      dVar11 = dVar25 + dVar25;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      local_1a8 = 10;
      dStack_1c0 = __real_3ff0000000000000 - (dVar10 * dVar26 + dVar11 * dVar25);
      local_1b8 = dVar4 * dVar10 + dVar3 * dVar11;
      dStack_1b0 = dVar3 * dVar10 - dVar4 * dVar11;
      local_1d8 = dVar5;
      dStack_1d0 = dVar6;
      local_1c8 = uVar12;
      uStack_1c4 = uVar13;
      local_100 = dVar5;
      dStack_f8 = dVar6;
      local_f0 = uVar12;
      uStack_ec = uVar13;
      dStack_e8 = dStack_1c0;
      local_e0 = local_1b8;
      dStack_d8 = dStack_1b0;
      if (((pFVar7 <= (FScriptContainerElement *)&local_1d8) &&
          ((FScriptContainerElement *)&local_1d8 <
           pFVar7 + (longlong)(this->GeneratedLines).ArrayMax * 0x38)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = (this->GeneratedLines).ArrayNum;
      if (iVar16 == (this->GeneratedLines).ArrayMax) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar1->AllocatorInstance,&(this->GeneratedLines).ArrayMax);
      }
      (this->GeneratedLines).ArrayNum = iVar16 + 1;
      lVar20 = (longlong)iVar16 * 0x38;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar7 + lVar20) = local_1d8;
      *(double *)(pFVar7 + lVar20 + 8) = dStack_1d0;
      *(ulonglong *)(pFVar7 + lVar20 + 0x10) = CONCAT44(uStack_1c4,local_1c8);
      *(double *)(pFVar7 + lVar20 + 0x10 + 8) = dStack_1c0;
      *(double *)(pFVar7 + lVar20 + 0x20) = local_1b8;
      *(double *)(pFVar7 + lVar20 + 0x20 + 8) = dStack_1b0;
      *(ulonglong *)(pFVar7 + lVar20 + 0x30) = CONCAT44(iStack_1a4,local_1a8);
      dVar26 = (this->Plane).Rotation.field0_0x0._s_0.Z;
      dVar25 = (this->Plane).Rotation.field0_0x0._s_0.X;
      dVar3 = (this->Plane).Rotation.field0_0x0._s_0.Y;
      dVar10 = dVar26 + dVar26;
      dVar4 = (this->Plane).Rotation.field0_0x0._s_0.W;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      dStack_1c0 = (dVar3 + dVar3) * dVar25 - dVar4 * dVar10;
      dStack_1b0 = dVar3 * dVar10 + dVar4 * (dVar25 + dVar25);
      local_1b8 = dVar14 - (dVar10 * dVar26 + (dVar25 + dVar25) * dVar25);
      local_1d8 = dVar5;
      dStack_1d0 = dVar6;
      local_1c8 = uVar12;
      uStack_1c4 = uVar13;
      local_d0 = dVar5;
      dStack_c8 = dVar6;
      local_c0 = uVar12;
      uStack_bc = uVar13;
      dStack_b8 = dStack_1c0;
      local_b0 = local_1b8;
      dStack_a8 = dStack_1b0;
      if (((pFVar7 <= (FScriptContainerElement *)&local_1d8) &&
          ((FScriptContainerElement *)&local_1d8 <
           pFVar7 + (longlong)(this->GeneratedLines).ArrayMax * 0x38)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = (this->GeneratedLines).ArrayNum;
      if (iVar16 == (this->GeneratedLines).ArrayMax) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar1->AllocatorInstance,&(this->GeneratedLines).ArrayMax);
      }
      (this->GeneratedLines).ArrayNum = iVar16 + 1;
      lVar20 = (longlong)iVar16 * 0x38;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar7 + lVar20) = local_1d8;
      *(double *)(pFVar7 + lVar20 + 8) = dStack_1d0;
      *(ulonglong *)(pFVar7 + lVar20 + 0x10) = CONCAT44(uStack_1c4,local_1c8);
      *(double *)(pFVar7 + lVar20 + 0x10 + 8) = dStack_1c0;
      *(double *)(pFVar7 + lVar20 + 0x20) = local_1b8;
      *(double *)(pFVar7 + lVar20 + 0x20 + 8) = dStack_1b0;
      *(ulonglong *)(pFVar7 + lVar20 + 0x30) = CONCAT44(iStack_1a4,local_1a8);
    }
    if ((param_2) && (1 < iVar17)) {
      iStack_16c = this->LastSegmentPriority;
      uVar21 = iVar17 - 2;
      local_170 = 0xb;
      uVar19 = 0;
      if ((int)uVar21 < (this->PointHistory).ArrayNum) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar20 = (longlong)(int)uVar21;
      pFVar7 = (this->PointHistory).AllocatorInstance.Data;
      dVar25 = *(double *)(pFVar7 + lVar20 * 0x18) - dVar5;
      dVar26 = *(double *)(pFVar7 + lVar20 * 0x18 + 8) - dVar6;
      local_158 = *(double *)(pFVar7 + lVar20 * 0x18 + 0x10) -
                  (double)CONCAT44(uStack_11c,local_120);
      auVar22._0_8_ = local_158 * local_158;
      auVar22._8_8_ = 0;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = dVar26 * dVar26 + dVar25 * dVar25 + auVar22._0_8_;
      auVar23 = sqrtpd(auVar22,auVar23);
      if (auVar23._0_8_ <= 0.0) {
        local_158 = 0.0;
        TStack_188._s_0.X = 0.0;
        dVar26 = 0.0;
      }
      else {
        dVar3 = dVar14 / auVar23._0_8_;
        TStack_188._s_0.X = dVar25 * dVar3;
        dVar26 = dVar26 * dVar3;
        local_158 = local_158 * dVar3;
      }
      uVar24 = (undefined4)((ulonglong)dVar26 >> 0x20);
      auVar9._8_4_ = SUB84(dVar26,0);
      auVar9._0_8_ = TStack_188._s_0.X;
      auVar9._12_4_ = uVar24;
      pTVar1 = &this->GeneratedLines;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      dStack_110 = auVar9._8_8_;
      local_168._8_4_ = SUB84(dVar26,0);
      local_168._0_8_ = TStack_188._s_0.X;
      local_168._12_4_ = uVar24;
      dStack_118 = TStack_188._s_0.X;
      dStack_108 = local_158;
      TStack_188._s_0.Y = dStack_110;
      TStack_188._s_0.Z = local_158;
      local_1a0 = dVar5;
      dStack_198 = dVar6;
      local_190 = uVar12;
      uStack_18c = uVar13;
      local_120 = uVar12;
      uStack_11c = uVar13;
      if (((pFVar7 <= (FScriptContainerElement *)&local_1a0) &&
          ((FScriptContainerElement *)&local_1a0 <
           pFVar7 + (longlong)(this->GeneratedLines).ArrayMax * 0x38)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar17 = (this->GeneratedLines).ArrayNum;
      if (iVar17 == (this->GeneratedLines).ArrayMax) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar1->AllocatorInstance,&(this->GeneratedLines).ArrayMax);
      }
      (this->GeneratedLines).ArrayNum = iVar17 + 1;
      lVar20 = (longlong)iVar17 * 0x38;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar7 + lVar20) = local_1a0;
      *(double *)(pFVar7 + lVar20 + 8) = dStack_198;
      *(ulonglong *)(pFVar7 + lVar20 + 0x10) = CONCAT44(uStack_18c,local_190);
      *(double *)(pFVar7 + lVar20 + 0x10 + 8) = TStack_188._s_0.X;
      *(double *)(pFVar7 + lVar20 + 0x20) = TStack_188._s_0.Y;
      *(double *)(pFVar7 + lVar20 + 0x20 + 8) = TStack_188._s_0.Z;
      *(ulonglong *)(pFVar7 + lVar20 + 0x30) = CONCAT44(iStack_16c,local_170);
      dVar5 = (this->Plane).Rotation.field0_0x0._s_0.X;
      dVar6 = (this->Plane).Rotation.field0_0x0._s_0.Y;
      dVar26 = (this->Plane).Rotation.field0_0x0._s_0.Z;
      dVar25 = (this->Plane).Rotation.field0_0x0._s_0.W;
      dVar26 = dVar26 + dVar26;
      __libm_sse2_sincos_();
      local_150._s_0.Y =
           (dVar26 * dVar6 - dVar25 * (dVar5 + dVar5)) *
           (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      local_150._s_0.X =
           (dVar25 * (dVar6 + dVar6) + dVar26 * dVar5) *
           (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      local_150._s_0.Z =
           (dVar14 - ((dVar6 + dVar6) * dVar6 + (dVar5 + dVar5) * dVar5)) *
           (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      pTVar18 = operator*<double>(local_a0,(TQuaternion<double> *)&local_150._s_0,
                                  (TVector<double> *)&TStack_188._s_0);
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      TStack_188._s_0.X = (pTVar18->field0_0x0)._s_0.X;
      TStack_188._s_0.Y = (pTVar18->field0_0x0)._s_0.Y;
      TStack_188._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
      if (((pFVar7 <= (FScriptContainerElement *)&local_1a0) &&
          ((FScriptContainerElement *)&local_1a0 <
           pFVar7 + (longlong)(this->GeneratedLines).ArrayMax * 0x38)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar17 = (this->GeneratedLines).ArrayNum;
      if (iVar17 == (this->GeneratedLines).ArrayMax) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar1->AllocatorInstance,&(this->GeneratedLines).ArrayMax);
      }
      (this->GeneratedLines).ArrayNum = iVar17 + 1;
      lVar20 = (longlong)iVar17 * 0x38;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar7 + lVar20) = local_1a0;
      *(double *)(pFVar7 + lVar20 + 8) = dStack_198;
      *(ulonglong *)(pFVar7 + lVar20 + 0x10) = CONCAT44(uStack_18c,local_190);
      *(double *)(pFVar7 + lVar20 + 0x10 + 8) = TStack_188._s_0.X;
      *(double *)(pFVar7 + lVar20 + 0x20) = TStack_188._s_0.Y;
      *(double *)(pFVar7 + lVar20 + 0x20 + 8) = TStack_188._s_0.Z;
      *(ulonglong *)(pFVar7 + lVar20 + 0x30) = CONCAT44(iStack_16c,local_170);
    }
  }
  return;
}

// RegenerateTargetLinesAround @ 14cbaa470

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::RegenerateTargetLinesAround
          (FPointPlanarSnapSolver *this,int param_1,bool param_2,bool param_3)

{
  int *piVar1;
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetLine,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TQuaternion<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 auStack_168 [16];
  undefined4 local_158;
  int iStack_154;
  uint local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  double dStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  double dStack_a0;
  undefined1 local_98 [16];
  
  ResetGenerated(this);
  dVar12 = __real_3ff0000000000000;
  iVar15 = (this->PointHistory).ArrayNum;
  if (((iVar15 != 0) && (-2 < param_1)) && (param_1 <= iVar15)) {
    iStack_154 = this->CardinalAxisPriority;
    local_158 = 10;
    local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_180 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_170 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    auStack_168._8_8_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    auStack_168._0_8_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    if ((0 < param_1) || ((param_2 && (param_1 == 0)))) {
      dVar5 = (this->Plane).Rotation.field0_0x0._s_0.Z;
      dVar6 = (this->Plane).Rotation.field0_0x0._s_0.Y;
      dVar7 = (this->Plane).Rotation.field0_0x0._s_0.X;
      dVar19 = dVar5 + dVar5;
      uVar18 = (param_1 + -1 + iVar15) % iVar15;
      dVar20 = dVar6 + dVar6;
      local_150 = ~uVar18 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar18 < iVar15) {
        uVar14 = local_150;
      }
      dVar11 = __real_3ff0000000000000 - (dVar19 * dVar5 + dVar20 * dVar6);
      dVar5 = (this->Plane).Rotation.field0_0x0._s_0.W;
      dVar6 = dVar7 * dVar19 - dVar5 * dVar20;
      uVar21 = SUB84(dVar6,0);
      uVar22 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar5 = dVar5 * dVar19 + dVar7 * dVar20;
      if (uVar14 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      pFVar8 = (this->PointHistory).AllocatorInstance.Data;
      pTVar2 = &this->GeneratedLines;
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      pFVar4 = pFVar8 + (longlong)(int)uVar18 * 0x18;
      local_188 = *(double *)pFVar4;
      dStack_180 = *(double *)(pFVar4 + 8);
      pFVar8 = pFVar8 + (longlong)(int)uVar18 * 0x18 + 0x10;
      local_138 = *(undefined4 *)pFVar8;
      uStack_134 = *(undefined4 *)(pFVar8 + 4);
      local_178 = *(double *)pFVar8;
      local_128._8_4_ = uVar21;
      local_128._0_8_ = dVar5;
      local_128._12_4_ = uVar22;
      auStack_168._8_4_ = uVar21;
      auStack_168._0_8_ = dVar5;
      auStack_168._12_4_ = uVar22;
      dStack_170 = dVar11;
      local_148 = local_188;
      uStack_140 = dStack_180;
      dStack_130 = dVar11;
      if ((pFVar9 <= (FScriptContainerElement *)&local_188) &&
         ((FScriptContainerElement *)&local_188 <
          pFVar9 + (longlong)(this->GeneratedLines).ArrayMax * 0x38)) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iVar15 = (this->GeneratedLines).ArrayNum;
      piVar1 = &(this->GeneratedLines).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->GeneratedLines).ArrayNum = iVar15 + 1;
      lVar16 = (longlong)iVar15 * 0x38;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      *(double *)(pFVar4 + lVar16) = local_188;
      *(double *)(pFVar4 + lVar16 + 8) = dStack_180;
      *(double *)(pFVar4 + lVar16 + 0x10) = local_178;
      *(double *)(pFVar4 + lVar16 + 0x10 + 8) = dStack_170;
      *(undefined8 *)(pFVar4 + lVar16 + 0x20) = auStack_168._0_8_;
      *(undefined8 *)(pFVar4 + lVar16 + 0x20 + 8) = auStack_168._8_8_;
      *(ulonglong *)(pFVar4 + lVar16 + 0x30) = CONCAT44(iStack_154,local_158);
      dVar5 = (this->Plane).Rotation.field0_0x0._s_0.X;
      dVar6 = (this->Plane).Rotation.field0_0x0._s_0.Z;
      dVar7 = (this->Plane).Rotation.field0_0x0._s_0.Y;
      dVar19 = (this->Plane).Rotation.field0_0x0._s_0.W;
      dVar20 = dVar6 + dVar6;
      uVar14 = 0;
      if ((int)uVar18 < (this->PointHistory).ArrayNum) {
        uVar14 = local_150;
      }
      dVar11 = (dVar7 + dVar7) * dVar5 - dVar19 * dVar20;
      dVar7 = dVar7 * dVar20 + dVar19 * (dVar5 + dVar5);
      uVar21 = SUB84(dVar7,0);
      uVar22 = (undefined4)((ulonglong)dVar7 >> 0x20);
      dVar5 = dVar12 - (dVar20 * dVar6 + (dVar5 + dVar5) * dVar5);
      if (uVar14 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      pFVar8 = (this->PointHistory).AllocatorInstance.Data;
      pFVar4 = pFVar8 + (longlong)(int)uVar18 * 0x18;
      local_188 = *(double *)pFVar4;
      dStack_180 = *(double *)(pFVar4 + 8);
      pFVar8 = pFVar8 + (longlong)(int)uVar18 * 0x18 + 0x10;
      local_108 = *(undefined4 *)pFVar8;
      uStack_104 = *(undefined4 *)(pFVar8 + 4);
      local_178 = *(double *)pFVar8;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      local_f8._8_4_ = uVar21;
      local_f8._0_8_ = dVar5;
      local_f8._12_4_ = uVar22;
      auStack_168._8_4_ = uVar21;
      auStack_168._0_8_ = dVar5;
      auStack_168._12_4_ = uVar22;
      dStack_170 = dVar11;
      local_118 = local_188;
      dStack_110 = dStack_180;
      dStack_100 = dVar11;
      if ((pFVar4 <= (FScriptContainerElement *)&local_188) &&
         ((FScriptContainerElement *)&local_188 < pFVar4 + (longlong)*piVar1 * 0x38)) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iVar15 = (this->GeneratedLines).ArrayNum;
      if (iVar15 == (this->GeneratedLines).ArrayMax) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar2->AllocatorInstance,&(this->GeneratedLines).ArrayMax);
        (this->GeneratedLines).ArrayNum = iVar15;
      }
      (this->GeneratedLines).ArrayNum = iVar15 + 1;
      lVar16 = (longlong)iVar15 * 0x38;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      *(double *)(pFVar4 + lVar16) = local_188;
      *(double *)(pFVar4 + lVar16 + 8) = dStack_180;
      *(double *)(pFVar4 + lVar16 + 0x10) = local_178;
      *(double *)(pFVar4 + lVar16 + 0x10 + 8) = dStack_170;
      *(undefined8 *)(pFVar4 + lVar16 + 0x20) = auStack_168._0_8_;
      *(undefined8 *)(pFVar4 + lVar16 + 0x20 + 8) = auStack_168._8_8_;
      *(ulonglong *)(pFVar4 + lVar16 + 0x30) = CONCAT44(iStack_154,local_158);
    }
    iVar15 = (this->PointHistory).ArrayNum;
    if ((param_1 < iVar15 + -1) || ((param_2 && (param_1 == iVar15 + -1)))) {
      pTVar3 = &(this->Plane).Rotation;
      dVar5 = (this->Plane).Rotation.field0_0x0._s_0.Z;
      dVar6 = (this->Plane).Rotation.field0_0x0._s_0.Y;
      dVar7 = (pTVar3->field0_0x0)._s_0.X;
      dVar19 = dVar5 + dVar5;
      uVar18 = (param_1 + 1) % iVar15;
      dVar20 = dVar6 + dVar6;
      lVar16 = (longlong)(int)uVar18;
      uVar14 = 0;
      if ((int)uVar18 < iVar15) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      dVar11 = dVar12 - (dVar19 * dVar5 + dVar20 * dVar6);
      dVar5 = (this->Plane).Rotation.field0_0x0._s_0.W;
      dVar6 = dVar7 * dVar19 - dVar5 * dVar20;
      uVar21 = SUB84(dVar6,0);
      uVar22 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar5 = dVar5 * dVar19 + dVar7 * dVar20;
      if (uVar14 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      pFVar8 = (this->PointHistory).AllocatorInstance.Data;
      pTVar2 = &this->GeneratedLines;
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      pFVar4 = pFVar8 + lVar16 * 0x18;
      local_188 = *(double *)pFVar4;
      dStack_180 = *(double *)(pFVar4 + 8);
      pFVar8 = pFVar8 + lVar16 * 0x18 + 0x10;
      local_d8 = *(undefined4 *)pFVar8;
      uStack_d4 = *(undefined4 *)(pFVar8 + 4);
      local_178 = *(double *)pFVar8;
      local_c8._8_4_ = uVar21;
      local_c8._0_8_ = dVar5;
      local_c8._12_4_ = uVar22;
      auStack_168._8_4_ = uVar21;
      auStack_168._0_8_ = dVar5;
      auStack_168._12_4_ = uVar22;
      dStack_170 = dVar11;
      local_e8 = local_188;
      uStack_e0 = dStack_180;
      dStack_d0 = dVar11;
      if ((pFVar9 <= (FScriptContainerElement *)&local_188) &&
         ((FScriptContainerElement *)&local_188 <
          pFVar9 + (longlong)(this->GeneratedLines).ArrayMax * 0x38)) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iVar15 = (this->GeneratedLines).ArrayNum;
      if (iVar15 == (this->GeneratedLines).ArrayMax) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar2->AllocatorInstance,&(this->GeneratedLines).ArrayMax);
      }
      (this->GeneratedLines).ArrayNum = iVar15 + 1;
      lVar17 = (longlong)iVar15 * 0x38;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      *(double *)(pFVar4 + lVar17) = local_188;
      *(double *)(pFVar4 + lVar17 + 8) = dStack_180;
      *(double *)(pFVar4 + lVar17 + 0x10) = local_178;
      *(double *)(pFVar4 + lVar17 + 0x10 + 8) = dStack_170;
      *(undefined8 *)(pFVar4 + lVar17 + 0x20) = auStack_168._0_8_;
      *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = auStack_168._8_8_;
      *(ulonglong *)(pFVar4 + lVar17 + 0x30) = CONCAT44(iStack_154,local_158);
      dVar5 = (pTVar3->field0_0x0)._s_0.X;
      dVar6 = (this->Plane).Rotation.field0_0x0._s_0.Z;
      dVar7 = (this->Plane).Rotation.field0_0x0._s_0.Y;
      dVar19 = (this->Plane).Rotation.field0_0x0._s_0.W;
      dVar20 = dVar6 + dVar6;
      uVar14 = 0;
      if ((int)uVar18 < (this->PointHistory).ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      dVar11 = (dVar7 + dVar7) * dVar5 - dVar19 * dVar20;
      dVar7 = dVar7 * dVar20 + dVar19 * (dVar5 + dVar5);
      uVar21 = SUB84(dVar7,0);
      uVar22 = (undefined4)((ulonglong)dVar7 >> 0x20);
      dVar12 = dVar12 - (dVar20 * dVar6 + (dVar5 + dVar5) * dVar5);
      if (uVar14 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      pFVar8 = (this->PointHistory).AllocatorInstance.Data;
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      pFVar4 = pFVar8 + lVar16 * 0x18;
      local_188 = *(double *)pFVar4;
      dStack_180 = *(double *)(pFVar4 + 8);
      pFVar8 = pFVar8 + lVar16 * 0x18 + 0x10;
      local_a8 = *(undefined4 *)pFVar8;
      uStack_a4 = *(undefined4 *)(pFVar8 + 4);
      local_178 = *(double *)pFVar8;
      local_98._8_4_ = uVar21;
      local_98._0_8_ = dVar12;
      local_98._12_4_ = uVar22;
      auStack_168._8_4_ = uVar21;
      auStack_168._0_8_ = dVar12;
      auStack_168._12_4_ = uVar22;
      dStack_170 = dVar11;
      local_b8 = local_188;
      dStack_b0 = dStack_180;
      dStack_a0 = dVar11;
      if ((pFVar9 <= (FScriptContainerElement *)&local_188) &&
         ((FScriptContainerElement *)&local_188 <
          pFVar9 + (longlong)(this->GeneratedLines).ArrayMax * 0x38)) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iVar15 = (this->GeneratedLines).ArrayNum;
      if (iVar15 == (this->GeneratedLines).ArrayMax) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar2->AllocatorInstance,&(this->GeneratedLines).ArrayMax);
        (this->GeneratedLines).ArrayNum = iVar15;
      }
      (this->GeneratedLines).ArrayNum = iVar15 + 1;
      lVar16 = (longlong)iVar15 * 0x38;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      *(double *)(pFVar4 + lVar16) = local_188;
      *(double *)(pFVar4 + lVar16 + 8) = dStack_180;
      *(double *)(pFVar4 + lVar16 + 0x10) = local_178;
      *(double *)(pFVar4 + lVar16 + 0x10 + 8) = dStack_170;
      *(undefined8 *)(pFVar4 + lVar16 + 0x20) = auStack_168._0_8_;
      *(undefined8 *)(pFVar4 + lVar16 + 0x20 + 8) = auStack_168._8_8_;
      *(ulonglong *)(pFVar4 + lVar16 + 0x30) = CONCAT44(iStack_154,local_158);
    }
    if (param_3) {
      GenerateLineIntersectionTargets(this);
    }
  }
  return;
}

// RemoveHistoryPoint @ 14cbabf80

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::RemoveHistoryPoint(FPointPlanarSnapSolver *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 < (this->PointHistory).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  _Dst = (this->PointHistory).AllocatorInstance.Data + (longlong)param_1 * 0x18;
  iVar5 = (this->PointHistory).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x18,(longlong)iVar5 * 0x18);
  }
  piVar1 = &(this->PointHistory).ArrayNum;
  *piVar1 = *piVar1 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&(this->PointHistory).AllocatorInstance,(this->PointHistory).ArrayNum,
             &(this->PointHistory).ArrayMax);
  ResetGenerated(this);
  return;
}

// Reset @ 14cbacf50

void __thiscall UE::Geometry::FPointPlanarSnapSolver::Reset(FPointPlanarSnapSolver *this)

{
  FBasePositionSnapSolver3::Reset((FBasePositionSnapSolver3 *)this);
  (this->PointHistory).ArrayNum = 0;
  if ((this->PointHistory).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->PointHistory).AllocatorInstance,0,&(this->PointHistory).ArrayMax);
  }
  ResetGenerated(this);
  return;
}

// ResetGenerated @ 14cbacfc0

void __thiscall UE::Geometry::FPointPlanarSnapSolver::ResetGenerated(FPointPlanarSnapSolver *this)

{
  (this->GeneratedLines).ArrayNum = 0;
  if ((this->GeneratedLines).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->GeneratedLines).AllocatorInstance,0,&(this->GeneratedLines).ArrayMax
              );
  }
  (this->IntersectionPoints).ArrayNum = 0;
  if ((this->IntersectionPoints).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,&(this->IntersectionPoints).AllocatorInstance,0,
               &(this->IntersectionPoints).ArrayMax);
  }
  (this->IntersectionSecondLinePointers).ArrayNum = 0;
  if ((this->IntersectionSecondLinePointers).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->IntersectionSecondLinePointers).AllocatorInstance,0,
               &(this->IntersectionSecondLinePointers).ArrayMax);
  }
  (this->GeneratedTargets).ArrayNum = 0;
  if ((this->GeneratedTargets).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,&(this->GeneratedTargets).AllocatorInstance,0,
               &(this->GeneratedTargets).ArrayMax);
  }
  return;
}

// UpdatePointHistory @ 14cbb8b10

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::UpdatePointHistory
          (FPointPlanarSnapSolver *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  double local_38;
  double dStack_30;
  double local_28;
  
  pTVar2 = &this->PointHistory;
  piVar1 = &(this->PointHistory).ArrayMax;
  (this->PointHistory).ArrayNum = 0;
  if ((this->PointHistory).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  lVar11 = (longlong)param_1->ArrayNum;
  uVar10 = 0;
  if (0 < lVar11) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      local_28 = (double)*(float *)(pFVar3 + lVar9 + 8);
      dStack_30 = (double)*(float *)(pFVar3 + lVar9 + 4);
      local_38 = (double)*(float *)(pFVar3 + lVar9);
      if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)*piVar1 * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->PointHistory).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&pTVar2->AllocatorInstance,piVar1);
      }
      uVar10 = uVar10 + 1;
      (this->PointHistory).ArrayNum = iVar8 + 1;
      lVar9 = lVar9 + 0xc;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
      *(double *)pFVar3 = local_38;
      *(double *)(pFVar3 + 8) = dStack_30;
      *(double *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_28;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  ResetGenerated(this);
  return;
}

// UpdatePointHistory @ 14cbb8cf0

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::UpdatePointHistory
          (FPointPlanarSnapSolver *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->PointHistory,param_1);
  ResetGenerated(this);
  return;
}

// UpdateSnappedPoint @ 14cbbbf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint
          (FPointPlanarSnapSolver *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined ***pppuVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  double dVar15;
  undefined1 auStackY_118 [32];
  int local_e8 [2];
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  code *local_b8 [2];
  undefined **local_a8;
  TVector<double> *local_a0;
  undefined ***local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_e0 = __real_7fefffffffffffff;
  local_e8[0] = 0x7fffffff;
  this->bActiveSnapIsIntersection = false;
  GenerateTargets(this,param_1);
  local_a8 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  pFVar12 = (FScriptContainerElement *)0x0;
  local_b8[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                ::Call;
  local_90 = (undefined ***)0x0;
  local_a0 = param_1;
  uVar9 = FBasePositionSnapSolver3::FindIndexOfBestSnapInSet
                    ((FBasePositionSnapSolver3 *)this,
                     (TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,TSizedDefaultAllocator<32>_>
                      *)&this->_padding_,&local_e0,local_e8,
                     (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                      *)local_b8);
  uVar13 = 0;
  pFVar14 = pFVar12;
  if (-1 < (int)uVar9) {
    uVar10 = uVar13;
    if ((int)uVar9 < (int)this->_padding_) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar14 = (FScriptContainerElement *)((longlong)(int)uVar9 * 0x90 + this->_padding_);
  }
  uVar9 = FBasePositionSnapSolver3::FindIndexOfBestSnapInSet
                    ((FBasePositionSnapSolver3 *)this,&this->GeneratedTargets,&local_e0,local_e8,
                     (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                      *)local_b8);
  if (-1 < (int)uVar9) {
    uVar10 = uVar13;
    if ((int)uVar9 < (this->GeneratedTargets).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar12 = (this->GeneratedTargets).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x90;
  }
  uVar9 = FBasePositionSnapSolver3::FindIndexOfBestSnapInSet
                    ((FBasePositionSnapSolver3 *)this,&this->IntersectionPoints,&local_e0,local_e8,
                     (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                      *)local_b8);
  if (pFVar12 == (FScriptContainerElement *)0x0) {
    pFVar12 = pFVar14;
  }
  if (-1 < (int)uVar9) {
    uVar10 = uVar13;
    if ((int)uVar9 < (this->IntersectionPoints).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar12 = (this->IntersectionPoints).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x90;
    this->bActiveSnapIsIntersection = true;
    if ((int)uVar9 < (this->IntersectionSecondLinePointers).ArrayNum) {
      uVar13 = ~uVar9 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pdVar4 = *(double **)
              ((this->IntersectionSecondLinePointers).AllocatorInstance.Data +
              (longlong)(int)uVar9 * 8);
    dVar1 = pdVar4[1];
    (this->IntersectionSecondLine).Origin.field0_0x0._s_0.X = *pdVar4;
    (this->IntersectionSecondLine).Origin.field0_0x0._s_0.Y = dVar1;
    dVar1 = pdVar4[3];
    (this->IntersectionSecondLine).Origin.field0_0x0._s_0.Z = pdVar4[2];
    (this->IntersectionSecondLine).Direction.field0_0x0._s_0.X = dVar1;
    dVar1 = pdVar4[5];
    (this->IntersectionSecondLine).Direction.field0_0x0._s_0.Y = pdVar4[4];
    (this->IntersectionSecondLine).Direction.field0_0x0._s_0.Z = dVar1;
  }
  if ((((char)this->_padding_ != '\0') && ((char)this->_padding_ != '\0')) &&
     (*(char *)((longlong)&this->_padding_ + 1) == '\0')) {
    bVar8 = FBasePositionSnapSolver3::TestSnapTarget
                      ((FBasePositionSnapSolver3 *)this,(FSnapTargetPoint *)&this->_padding_,
                       local_e0 * (double)this->_padding_,local_e8[0],
                       (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                        *)local_b8);
    if (bVar8) goto LAB_14cbbc3b9;
  }
  if (pFVar12 == (FScriptContainerElement *)0x0) {
    (**(code **)(this->_padding_ + 0x70))(this);
  }
  else {
    dVar1 = (this->Plane).Rotation.field0_0x0._s_0.X;
    dVar15 = (this->Plane).Rotation.field0_0x0._s_0.Y;
    dVar2 = (this->Plane).Rotation.field0_0x0._s_0.W;
    dVar3 = (this->Plane).Rotation.field0_0x0._s_0.Z;
    dVar3 = dVar3 + dVar3;
    dVar7 = dVar2 * (dVar15 + dVar15) + dVar3 * dVar1;
    dVar6 = __real_3ff0000000000000 - ((dVar15 + dVar15) * dVar15 + (dVar1 + dVar1) * dVar1);
    dVar1 = dVar3 * dVar15 - dVar2 * (dVar1 + dVar1);
    dVar15 = (*(double *)(pFVar12 + 8) - (this->Plane).Origin.field0_0x0._s_0.Y) * dVar1 +
             (*(double *)pFVar12 - (this->Plane).Origin.field0_0x0._s_0.X) * dVar7 +
             (*(double *)(pFVar12 + 0x10) - (this->Plane).Origin.field0_0x0._s_0.Z) * dVar6;
    local_d8 = *(double *)pFVar12 - dVar15 * dVar7;
    local_d0 = *(double *)(pFVar12 + 8) - dVar15 * dVar1;
    local_c8 = *(double *)(pFVar12 + 0x10) - dVar15 * dVar6;
    (**(code **)(this->_padding_ + 0x68))(this,pFVar12,pFVar12,&local_d8);
  }
LAB_14cbbc3b9:
  if (local_b8[0] != (code *)0x0) {
    pppuVar11 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar11 = local_90;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  return;
}

