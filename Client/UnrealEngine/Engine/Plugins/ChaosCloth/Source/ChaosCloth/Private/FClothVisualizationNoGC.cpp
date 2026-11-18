// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 41

// FClothVisualizationNoGC @ 14db8ee90

FClothVisualizationNoGC * __thiscall
Chaos::FClothVisualizationNoGC::FClothVisualizationNoGC
          (FClothVisualizationNoGC *this,FClothingSimulationSolver *param_1)

{
  this->Solver = param_1;
  this->_padding_ = (longlong)&___7FClothVisualizationNoGC_Chaos__6B_;
  return this;
}

// ~FClothVisualizationNoGC @ 14db9f390

void __thiscall
Chaos::FClothVisualizationNoGC::~FClothVisualizationNoGC(FClothVisualizationNoGC *this)

{
  this->_padding_ = (longlong)&___7FClothVisualizationNoGC_Chaos__6B_;
  return;
}

// operator() @ 14dba3110

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
`Chaos::FClothVisualizationNoGC::DrawBackstops'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,double param_3,
          TVector<double> *param_4,FLinearColor *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double>_u_0 local_68 [4];
  
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  dVar2 = (param_4->field0_0x0)._s_0.Z;
  dVar3 = dVar4 * dVar1 + (param_2->field0_0x0)._s_0.X * (param_4->field0_0x0)._s_0.X +
          (param_2->field0_0x0)._s_0.Z * dVar2;
  if ((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_3fefae147ae147ae) {
    dVar3 = param_3 * __real_401921fb60000000;
    if (param_3 * __real_401921fb60000000 <= __real_4014000000000000) {
      dVar3 = __real_4014000000000000;
    }
    local_68[0]._16_8_ = dVar4 * (param_4->field0_0x0)._s_0.X - dVar1 * (param_2->field0_0x0)._s_0.X
    ;
    local_68[0]._0_8_ = dVar1 * (param_2->field0_0x0)._s_0.Z - dVar4 * dVar2;
    local_68[0]._8_8_ =
         (param_2->field0_0x0)._s_0.X * dVar2 -
         (param_4->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.Z;
    dVar4 = (double)local_68[0]._8_8_ * (double)local_68[0]._8_8_ +
            (double)local_68[0]._0_8_ * (double)local_68[0]._0_8_ +
            (double)local_68[0]._16_8_ * (double)local_68[0]._16_8_;
    if (dVar4 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar4) {
        dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
        local_68[0]._0_8_ = (double)local_68[0]._0_8_ * dVar4;
        local_68[0]._8_8_ = (double)local_68[0]._8_8_ * dVar4;
        local_68[0]._16_8_ = (double)local_68[0]._16_8_ * dVar4;
      }
      else {
        local_68[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_68[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_68[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    Chaos::DrawArc(*(FPrimitiveDrawInterface **)this,param_1,param_2,
                   (TVector<double> *)&local_68[0]._s_0,
                   (__real_409c200000000000 / dVar3) * __real_bfe0000000000000,
                   (float)((__real_409c200000000000 / dVar3) * __real_3fe0000000000000),param_3,
                   param_5);
  }
  return;
}

// operator() @ 14dba32d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
`Chaos::FClothVisualizationNoGC::DrawCollision'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationCollider *param_1,FClothingSimulationCloth *param_2,
          ECollisionDataType param_3)

{
  FWindowsRecursiveMutex *pFVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FClothingSimulationSolver *pFVar5;
  FEvolution *pFVar6;
  FPBDEvolution *pFVar7;
  FSkinnedTriangleMesh *this_00;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  uchar uVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  FLinearColor *pFVar22;
  TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *this_01;
  FSolverCollisionParticlesRange *this_02;
  TArrayView<Chaos::TRotation<float,3>,int> *pTVar23;
  FTaperedCylinder *pFVar24;
  TVector<double> *pTVar25;
  FDebugDrawQueue *pFVar26;
  FDebugDrawQueue *pFVar27;
  FConvex *pFVar28;
  TImplicitObjectTransformed<double,3,1> *pTVar29;
  void *pvVar30;
  ulonglong uVar31;
  uint uVar32;
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar33;
  uint uVar34;
  undefined8 uVar35;
  longlong lVar36;
  FScriptContainerElement *pFVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStackY_d88 [32];
  undefined1 local_d48 [8];
  TVector<double>_u_0 local_d40;
  double local_d28;
  undefined1 local_d18 [24];
  double dStack_d00;
  undefined1 local_cf8 [16];
  TRotation<float,3> *local_ce8;
  longlong lStack_ce0;
  FLinearColor_u_0 local_cd8;
  double local_cc8;
  undefined4 local_cc0;
  FColor_u_0 local_cbc;
  undefined4 local_cb8;
  undefined4 local_cb4;
  TArrayView<TRefCountPtr<Chaos::FImplicitObject>_const_,int> local_cb0 [2];
  double local_c90;
  FScriptContainerElement *local_c88;
  TVector<float,3> *local_c78;
  int iStack_c70;
  TRotation<float,3> *local_c68;
  int iStack_c60;
  double local_c58;
  double local_c50;
  double local_c48;
  TArrayView<Chaos::TVector<float,3>,int> local_c40;
  undefined8 local_c28;
  undefined4 uStack_c20;
  undefined4 uStack_c1c;
  undefined8 local_c18;
  undefined4 uStack_c10;
  uint uStack_c0c;
  TArrayView<bool_const_,int> local_c08;
  double local_bf8;
  double local_bf0;
  double local_be8;
  TVector<double>_u_0 local_bd8;
  FLinearColor_u_0 local_bb8;
  TVector<double>_u_0 local_ba8;
  FScriptContainerElement *local_b90;
  double dStack_b88;
  FScriptContainerElement *local_b80;
  double local_b78;
  double dStack_b70;
  double local_b68;
  TVector<double>_u_0 local_b60;
  double local_b48;
  double dStack_b40;
  double local_b38;
  double local_b30;
  double dStack_b28;
  double local_b20;
  double local_b18;
  double dStack_b10;
  double local_b08;
  TVector<double>_u_0 local_af8;
  double local_ad8;
  double dStack_ad0;
  double local_ac8;
  undefined1 local_ab8 [32];
  undefined1 local_a98 [32];
  double local_a78;
  double dStack_a70;
  double local_a68;
  double local_a60;
  double dStack_a58;
  double local_a50;
  undefined4 local_a3c;
  undefined4 local_a2c;
  undefined4 local_a1c;
  undefined4 local_a0c;
  TArrayView<Chaos::TRotation<float,3>,int> local_a08;
  TVector<double> local_9f8;
  TVector<double> local_9e0 [3];
  double local_988;
  double dStack_980;
  double local_978;
  double dStack_970;
  undefined1 local_968 [32];
  float local_948;
  float local_944;
  float local_940;
  undefined1 local_938 [32];
  float local_918;
  float local_914;
  float local_910;
  TTransform<double> local_908;
  TTransform<double> local_8a8;
  undefined1 local_848 [200];
  ForAnyElementType local_780;
  undefined8 local_778;
  AActor *local_770;
  EDrawType local_6a0;
  TVector<double>_u_0 local_698;
  double local_680;
  double local_678;
  double local_670;
  undefined4 local_668;
  undefined1 local_660;
  undefined4 local_658;
  byte local_654;
  undefined4 local_650;
  void *local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined4 local_4f0;
  TVector<double>_u_0 local_4e8 [2];
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined1 local_4b0;
  undefined4 local_4a8;
  byte local_4a4;
  undefined4 local_4a0;
  double local_498;
  void *local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined4 local_340;
  TVector<double>_u_0 local_338 [2];
  undefined4 local_308;
  undefined4 local_304;
  undefined1 local_300;
  undefined4 local_2f8;
  byte local_2f4;
  undefined4 local_2f0;
  double local_2e8;
  void *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_190;
  FTaperedCylinder local_188;
  ulonglong local_f8;
  
  fVar53 = __real_3b808081;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_d88;
  lVar36 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar36 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    GlobalColor.field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.R];
    GlobalColor.field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.G];
    GlobalColor.field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.B];
    GlobalColor.field0_0x0._s_0.A = (float)FColor::Cyan.field0_0x0._3_1_ * fVar53;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar36 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    DynamicColor.field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.R];
    DynamicColor.field0_0x0._s_0.G =
         FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.G];
    DynamicColor.field0_0x0._s_0.B =
         FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.B];
    DynamicColor.field0_0x0._s_0.A = (float)FColor::Orange.field0_0x0._3_1_ * fVar53;
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar36 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    LODsColor.field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.R];
    LODsColor.field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.G];
    LODsColor.field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.B];
    LODsColor.field0_0x0._s_0.A = (float)FColor::Silver.field0_0x0._3_1_ * fVar53;
    _Init_thread_footer(&::_TSS2);
  }
  if ((*(int *)(lVar36 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    CollidedColor.field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R]
    ;
    CollidedColor.field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G]
    ;
    CollidedColor.field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B]
    ;
    CollidedColor.field0_0x0._s_0.A = (float)FColor::Red.field0_0x0._3_1_ * fVar53;
    _Init_thread_footer(&::_TSS3);
  }
  if (param_3 == LODless) {
    pFVar22 = &GlobalColor;
  }
  else {
    pFVar22 = &LODsColor;
    if (param_3 == External) {
      pFVar22 = &DynamicColor;
    }
  }
  local_bb8._0_8_ = *(undefined8 *)&pFVar22->field0_0x0;
  local_bb8._8_8_ = *(undefined8 *)((longlong)&pFVar22->field0_0x0 + 8);
  Chaos::FClothingSimulationCollider::GetCollisionGeometry
            (param_1,local_cb0,*(FClothingSimulationSolver **)(*(longlong *)this + 8),param_2,
             param_3);
  pFVar5 = *(FClothingSimulationSolver **)(*(longlong *)this + 8);
  if ((pFVar5 == (FClothingSimulationSolver *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Solver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                          ,0x3d1,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cloth",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                          ,0x3d2,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar20 = Chaos::FClothingSimulationCollider::GetCollisionRangeId(param_1,pFVar5,param_2,param_3);
  if (iVar20 == -1) {
    local_c28 = 0;
    uStack_c20 = 0;
    auVar48._12_4_ = uStack_c1c;
    auVar48._0_12_ = ZEXT812(0);
  }
  else {
    pFVar6 = (pFVar5->Evolution).Ptr;
    if (pFVar6 == (FEvolution *)0x0) {
      pFVar7 = (pFVar5->PBDEvolution).Ptr;
      local_c40.ArrayNum = Chaos::Softs::FPBDEvolution::GetCollisionParticleRangeSize(pFVar7,iVar20)
      ;
      local_c40.DataPtr =
           (TVector<float,3> *)((pFVar7->MCollisionParticles)._padding_ + (longlong)iVar20 * 0xc);
      local_a3c = local_a2c;
      if ((local_c40.ArrayNum < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), local_a3c = local_a2c, bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else {
      this_01 = (TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void> *)
                Chaos::Softs::FEvolution::GetCollisionParticleRange(pFVar6,iVar20);
      if ((this_01->Particles == (FSolverCollisionParticles *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x57,L""), bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverCollisionParticles,void>::
      GetArrayView<Chaos::TVector<float,3>_>
                (this_01,&local_c40,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &this_01->Particles->_padding_);
    }
    auVar48._8_4_ = local_c40.ArrayNum;
    auVar48._0_8_ = local_c40.DataPtr;
    auVar48._12_4_ = local_a3c;
    local_c78 = local_c40.DataPtr;
    iStack_c70 = local_c40.ArrayNum;
  }
  pFVar5 = *(FClothingSimulationSolver **)(*(longlong *)this + 8);
  local_cf8 = auVar48;
  if ((pFVar5 == (FClothingSimulationSolver *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Solver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                          ,0x3da,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_2 == (FClothingSimulationCloth *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cloth",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCollider.cpp"
                          ,0x3db,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar20 = Chaos::FClothingSimulationCollider::GetCollisionRangeId(param_1,pFVar5,param_2,param_3);
  if (iVar20 == -1) {
    local_c18 = 0;
    uStack_c10 = 0;
    local_ce8 = (TRotation<float,3> *)0x0;
    lVar36 = (ulonglong)uStack_c0c << 0x20;
  }
  else {
    pFVar6 = (pFVar5->Evolution).Ptr;
    if (pFVar6 == (FEvolution *)0x0) {
      pFVar7 = (pFVar5->PBDEvolution).Ptr;
      iStack_c60 = Chaos::Softs::FPBDEvolution::GetCollisionParticleRangeSize(pFVar7,iVar20);
      local_ce8 = (TRotation<float,3> *)
                  ((longlong)iVar20 * 0x10 + (pFVar7->MCollisionParticles)._padding_);
      local_a0c = local_a1c;
      if ((iStack_c60 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), local_a0c = local_a1c, bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else {
      this_02 = Chaos::Softs::FEvolution::GetCollisionParticleRange(pFVar6,iVar20);
      pTVar23 = Chaos::Softs::FSolverCollisionParticlesRange::GetR(this_02,&local_a08);
      local_ce8 = pTVar23->DataPtr;
      iStack_c60 = pTVar23->ArrayNum;
    }
    lVar36 = CONCAT44(local_a0c,iStack_c60);
    local_c68 = local_ce8;
  }
  lStack_ce0 = lVar36;
  Chaos::FClothingSimulationCollider::GetCollisionStatus
            (param_1,&local_c08,*(FClothingSimulationSolver **)(*(longlong *)this + 8),param_2,
             param_3);
  if ((local_cb0[0].ArrayNum != auVar48._8_4_) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("CollisionGeometries.Num() == Translations.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                          ,0x654,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((local_cb0[0].ArrayNum != (int)lVar36) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("CollisionGeometries.Num() == Rotations.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                          ,0x655,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar34 = 0;
  if (0 < local_cb0[0].ArrayNum) {
    uVar55 = SUB84(__real_3fe0000000000000,0);
    uVar56 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    local_cc8 = 0.0;
    uVar35 = local_cf8._8_8_;
    lVar36 = lStack_ce0;
    fVar53 = __real_3f800000;
    fVar54 = __real_41200000;
    do {
      dVar33 = local_cc8;
      uVar32 = ~uVar34 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar34 < local_cb0[0].ArrayNum) {
        uVar21 = uVar32;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_00 = (FSkinnedTriangleMesh *)local_cb0[0].DataPtr[(longlong)dVar33].Reference;
      if (this_00 == (FSkinnedTriangleMesh *)0x0) goto LAB_14dba3f88;
      uVar21 = 0;
      if ((int)uVar34 < local_c08.ArrayNum) {
        uVar21 = uVar32;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar22 = (FLinearColor *)&local_bb8;
      if (local_c08.DataPtr[(longlong)dVar33] != false) {
        pFVar22 = &CollidedColor;
      }
      uVar21 = 0;
      if ((int)uVar34 < (int)uVar35) {
        uVar21 = uVar32;
      }
      local_cd8._0_8_ = *(undefined8 *)&((FLinearColor_u_0_s_0 *)pFVar22)->R;
      local_cd8._8_4_ = *(float *)((longlong)pFVar22 + 8);
      local_cd8._12_4_ = *(float *)((longlong)pFVar22 + 0xc);
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar8 = *(longlong *)(*(longlong *)this + 8);
      dVar38 = *(double *)(lVar8 + 0x338);
      local_d40._s_0.X =
           (double)*(float *)(local_cf8._0_8_ + (longlong)dVar33 * 0xc) * dVar38 +
           *(double *)(lVar8 + 0x358);
      local_d40._s_0.Y =
           (double)*(float *)(local_cf8._0_8_ + 4 + (longlong)dVar33 * 0xc) * dVar38 +
           *(double *)(lVar8 + 0x360);
      uVar21 = 0;
      if ((int)uVar34 < (int)lVar36) {
        uVar21 = uVar32;
      }
      local_d40._s_0.Z =
           (double)*(float *)(local_cf8._0_8_ + 8 + (longlong)dVar33 * 0xc) * dVar38 +
           *(double *)(lVar8 + 0x368);
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      dVar38 = (double)(float)*(undefined8 *)&local_ce8[(longlong)dVar33].field_0x8;
      dVar10 = (double)(float)((ulonglong)*(undefined8 *)&local_ce8[(longlong)dVar33].field_0x8 >>
                              0x20);
      uVar50 = SUB84(dVar10,0);
      uVar51 = (undefined4)((ulonglong)dVar10 >> 0x20);
      dVar11 = (double)*(float *)(local_ce8 + (longlong)dVar33);
      dVar12 = (double)*(float *)&local_ce8[(longlong)dVar33].field_0x4;
      unique0x10000aeb = uVar50;
      local_d18._16_8_ = dVar38;
      unique0x10000aef = uVar51;
      local_d18._0_8_ = dVar11;
      local_d18._8_8_ = dVar12;
      uVar18 = Chaos::FImplicitObject::GetType((FImplicitObject *)this_00);
      uVar15 = local_d40._s_0.Z;
      switch(uVar18) {
      case '\0':
        dVar38 = *(double *)(*(longlong *)(*(longlong *)this + 8) + 0x338);
        if ((this_00->field_0x18 != '\0') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        dVar41 = (double)(float)(this_00->TriangleMesh).MElements.ArrayNum * dVar38;
        dVar46 = (double)*(float *)((longlong)
                                    &(this_00->TriangleMesh).MElements.AllocatorInstance.Data + 4) *
                 dVar38;
        dVar10 = (double)*(float *)&(this_00->TriangleMesh).MElements.AllocatorInstance.Data *
                 dVar38;
        dVar39 = dVar12 * dVar41 - (double)local_d18._16_8_ * dVar46;
        dVar39 = dVar39 + dVar39;
        dVar47 = (double)local_d18._16_8_ * dVar10 - dVar11 * dVar41;
        dVar47 = dVar47 + dVar47;
        dVar40 = dVar11 * dVar46 - dVar12 * dVar10;
        dVar40 = dVar40 + dVar40;
        dVar43 = (dVar12 * dVar40 - (double)local_d18._16_8_ * dVar47) +
                 dStack_d00 * dVar39 + dVar10 + local_d40._s_0.X;
        dVar12 = (dVar11 * dVar47 - dVar12 * dVar39) + dStack_d00 * dVar40 + dVar41 +
                 local_d40._s_0.Z;
        dVar10 = ((double)local_d18._16_8_ * dVar39 - dVar11 * dVar40) +
                 dStack_d00 * dVar47 + dVar46 + local_d40._s_0.Y;
        fVar53 = __real_3f800000;
        fVar54 = __real_41200000;
        local_c90 = dVar12;
        if (*(longlong *)((longlong)this + 8) == 0) {
          fVar53 = *(float *)&this_00->field_0x10;
          pFVar26 = Chaos::FDebugDrawQueue::GetInstance();
          bVar17 = Chaos::Private::bDrawInForeground != false;
          FLinearColor::ToFColorSRGB((FLinearColor *)&local_cd8._s_0);
          pFVar27 = Chaos::FDebugDrawQueue::GetInstance();
          if ((pFVar27->bEnableDebugDrawing != false) &&
             (pFVar27 = Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar27->NumConsumers)) {
            lpCriticalSection = (LPCRITICAL_SECTION)&pFVar26->CommandQueueCS;
            if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection(lpCriticalSection);
            local_b38 = local_c90;
            local_b48 = dVar43;
            dStack_b40 = dVar10;
            bVar19 = Chaos::FDebugDrawQueue::AcceptCommand
                               (pFVar26,0x90,(TVector<double,3> *)&local_b48);
            if (bVar19) {
              local_420 = (void *)0x0;
              local_418 = 0;
              local_410 = 0;
              local_4b8 = local_cc0;
              local_4b4 = 0xc;
              local_4b0 = 0;
              local_4a8 = 0x38d1b717;
              local_4a0 = 0;
              local_340 = 3;
              local_4e8[0]._0_8_ = dVar43;
              local_4e8[0]._8_8_ = dVar10;
              local_4e8[0]._16_8_ = dVar12;
              local_4a4 = -bVar17 & 2;
              local_498 = (double)fVar53 * dVar38;
              Chaos::FDebugDrawQueue::AddCommand(pFVar26,(FLatentDrawCommand *)&local_4e8[0]._s_0);
              pvVar30 = local_420;
LAB_14dba3be2:
              if (pvVar30 != (void *)0x0) {
                FMemory::Free(pvVar30);
              }
            }
LAB_14dba3bec:
            LeaveCriticalSection(lpCriticalSection);
          }
          goto LAB_14dba3f6a;
        }
        break;
      case '\x01':
        local_d28 = *(double *)(*(longlong *)(*(longlong *)this + 8) + 0x338);
        if ((this_00->field_0x18 != '\x01') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_b80 = (this_00->TriangleMesh).MPointToTriangleMap.AllocatorInstance.Data;
        local_b90 = (this_00->TriangleMesh).MElements.AllocatorInstance.Data;
        dStack_b88 = *(double *)&(this_00->TriangleMesh).MElements.ArrayNum;
        local_b78 = *(double *)&(this_00->TriangleMesh).MPointToTriangleMap.ArrayNum;
        dStack_b70 = *(double *)&(this_00->TriangleMesh).MPointToNeighborsMap.field_0x0;
        local_b68 = *(double *)&(this_00->TriangleMesh).MPointToNeighborsMap.field_0x8;
        if (*(longlong *)((longlong)this + 8) == 0) {
          local_cc8 = local_b68 - (double)local_b80;
          dVar47 = dStack_b70 - dStack_b88;
          dVar43 = local_b78 - (double)local_b90;
          dVar45 = (local_cc8 * (double)CONCAT44(uVar56,uVar55) + (double)local_b80) * local_d28;
          dVar40 = (dVar47 * (double)CONCAT44(uVar56,uVar55) + dStack_b88) * local_d28;
          dVar41 = (dVar43 * (double)CONCAT44(uVar56,uVar55) + (double)local_b90) * local_d28;
          dVar42 = dVar45 * dVar12 - dVar40 * dVar38;
          dVar42 = dVar42 + dVar42;
          dVar39 = dVar38 * dVar41 - dVar45 * dVar11;
          dVar39 = dVar39 + dVar39;
          dVar46 = dVar40 * dVar11 - dVar12 * dVar41;
          dVar46 = dVar46 + dVar46;
          dVar41 = (dVar12 * dVar46 - dVar38 * dVar39) + dVar10 * dVar42 + dVar41 + local_d40._s_0.X
          ;
          dVar40 = (dVar38 * dVar42 - dVar11 * dVar46) + dVar10 * dVar39 + dVar40 + local_d40._s_0.Y
          ;
          dVar46 = (dVar11 * dVar39 - dVar12 * dVar42) + dVar10 * dVar46 + dVar45 + local_d40._s_0.Z
          ;
          local_c90 = dVar46;
          pFVar26 = Chaos::FDebugDrawQueue::GetInstance();
          bVar17 = Chaos::Private::bDrawInForeground != false;
          FLinearColor::ToFColorSRGB((FLinearColor *)&local_cd8._s_0);
          dVar39 = local_d28 * dVar43 * __real_3fe0000000000000;
          dVar43 = local_cc8 * local_d28 * __real_3fe0000000000000;
          dVar10 = dVar47 * local_d28 * __real_3fe0000000000000;
          pFVar27 = Chaos::FDebugDrawQueue::GetInstance();
          if ((pFVar27->bEnableDebugDrawing != false) &&
             (pFVar27 = Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar27->NumConsumers)) {
            pFVar1 = &pFVar26->CommandQueueCS;
            if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
            local_b20 = local_c90;
            local_b30 = dVar41;
            dStack_b28 = dVar40;
            bVar19 = Chaos::FDebugDrawQueue::AcceptCommand
                               (pFVar26,0xc,(TVector<double,3> *)&local_b30);
            if (bVar19) {
              local_780.Data = (FScriptContainerElement *)0x0;
              local_778._0_4_ = 0;
              local_778._4_4_ = 0;
              local_770 = (AActor *)0x0;
              local_848._48_4_ = local_cbc;
              local_848._168_4_ = uVar50;
              local_848._160_8_ = dVar38;
              local_848._172_4_ = uVar51;
              local_848[0x38] = false;
              local_848._64_4_ = 0.0001;
              local_848._72_4_ = 0.0;
              local_6a0 = Box;
              local_d18._0_8_ = dVar11;
              local_d18._8_8_ = dVar12;
              local_848[0x44] = -bVar17 & 2;
              local_848._96_8_ = dVar41;
              local_848._104_8_ = dVar40;
              local_848._112_8_ = dVar46;
              local_848._120_8_ = dVar39;
              local_848._128_8_ = dVar10;
              local_848._136_8_ = dVar43;
              local_848._144_8_ = dVar11;
              local_848._152_8_ = dVar12;
              Chaos::FDebugDrawQueue::AddCommand(pFVar26,(FLatentDrawCommand *)local_848);
              if (local_780.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_780.Data);
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          }
          goto LAB_14dba3f61;
        }
        break;
      default:
        goto switchD_14dba3958_caseD_2;
      case '\x03':
        dVar38 = *(double *)(*(longlong *)(*(longlong *)this + 8) + 0x338);
        if ((this_00->field_0x18 != '\x03') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        Chaos::DrawCapsule(*(FPrimitiveDrawInterface **)((longlong)this + 8),(FCapsule *)this_00,
                           (TQuat<double> *)local_d18,(TVector<double> *)&local_d40._s_0,dVar38,
                           (FLinearColor *)&local_cd8._s_0);
        break;
      case '\x04':
        if ((this_00->field_0x18 != '\x04') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar18 = Chaos::FImplicitObject::GetType
                           ((FImplicitObject *)
                            (this_00->TriangleMesh).MElements.AllocatorInstance.Data);
        if (uVar18 == '\x06') {
          pTVar29 = Chaos::FImplicitObject::
                    GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                              ((FImplicitObject *)this_00);
          local_8a8.Scale3D.XY.m128d_f64[0] =
               *(double *)(*(longlong *)(*(longlong *)this + 8) + 0x338);
          local_8a8.Rotation.XY.m128d_f64[0] = (double)local_d18._0_8_;
          local_8a8.Rotation.XY.m128d_f64[1] = (double)local_d18._8_8_;
          local_8a8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar50;
          local_8a8.Rotation.ZW.m128d_f64[0] = dVar38;
          local_8a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar51;
          local_8a8.Translation.XY.m128d_f64[0] = local_d40._s_0.X;
          local_8a8.Translation.XY.m128d_f64[1] = local_d40._s_0.Y;
          local_8a8.Translation.ZW.m128d_f64[0] = local_d40._s_0.Z;
          local_8a8.Translation.ZW.m128d_f64[1] = 0.0;
          local_908.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_908.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_908.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_908.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_8a8.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_908.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_908.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_908.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_908.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_908.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_908.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_908.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_908.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_908.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_908.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_8a8.Scale3D.XY.m128d_f64[1] = local_8a8.Scale3D.XY.m128d_f64[0];
          local_8a8.Scale3D.ZW.m128d_f64[0] = local_8a8.Scale3D.XY.m128d_f64[0];
          UE::Math::TTransform<double>::Multiply
                    (&local_908,(TTransform<double> *)&pTVar29->MTransform,&local_8a8);
          dVar41 = local_908.Translation.ZW.m128d_f64[0];
          dVar10 = local_908.Rotation.XY.m128d_f64[1];
          dVar38 = local_908.Rotation.XY.m128d_f64[0];
          auVar14._8_8_ = local_908.Rotation.ZW.m128d_f64[1];
          auVar14._0_8_ = local_908.Rotation.ZW.m128d_f64[0];
          dVar11 = local_908.Translation.XY.m128d_f64[0];
          dVar12 = local_908.Translation.XY.m128d_f64[1];
          local_988 = local_908.Scale3D.XY.m128d_f64[0];
          dStack_980 = local_908.Scale3D.XY.m128d_f64[1];
          local_978 = local_908.Scale3D.ZW.m128d_f64[0];
          dStack_970 = local_908.Scale3D.ZW.m128d_f64[1];
          pTVar29 = Chaos::FImplicitObject::
                    GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                              ((FImplicitObject *)this_00);
          if ((((pTVar29->MObject).Reference)->Type != '\x06') &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("T_DERIVED::StaticType() == Type",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                  ,0xc2,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_b60._s_0.Z = dVar41;
          local_b60._s_0.X = dVar11;
          local_b60._s_0.Y = dVar12;
          local_ab8._0_8_ = dVar38;
          local_ab8._8_8_ = dVar10;
          local_ab8._16_16_ = auVar14;
          Chaos::DrawCoordinateSystem
                    (*(FPrimitiveDrawInterface **)((longlong)this + 8),(TQuat<double> *)local_ab8,
                     (TVector<double> *)&local_b60._s_0,fVar54,fVar53);
        }
        break;
      case '\x05':
        if ((this_00->field_0x18 != '\x05') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar20 = (this_00->TriangleMesh).MElements.ArrayNum;
        uVar31 = (ulonglong)iVar20;
        pFVar37 = (this_00->TriangleMesh).MElements.AllocatorInstance.Data;
        dVar38 = dStack_d00;
        uVar35 = local_d18._16_8_;
        local_d28 = (double)CONCAT44(local_d28._4_4_,iVar20);
        local_c88 = pFVar37 + uVar31 * 8;
        while( true ) {
          pFVar16 = local_c88;
          if ((this_00->TriangleMesh).MElements.ArrayNum != (int)uVar31) {
            local_d48[0] = 0;
            `TCheckedPointerIterator<TRefCountPtr<Chaos::FImplicitObject>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_d48);
          }
          dVar33 = local_cc8;
          if (pFVar37 == pFVar16) break;
          pFVar24 = *(FTaperedCylinder **)pFVar37;
          if (pFVar24 == (FTaperedCylinder *)0x0) {
LAB_14dba4449:
            uVar31 = (ulonglong)local_d28 & 0xffffffff;
            pFVar37 = pFVar37 + 8;
          }
          else {
            uVar18 = Chaos::FImplicitObject::GetType((FImplicitObject *)pFVar24);
            if (uVar18 == '\0') {
              dVar33 = *(double *)(*(longlong *)(*(longlong *)this + 8) + 0x338);
              if (((char)pFVar24->_padding_ != '\0') &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("T_DERIVED::StaticType() == Type",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                      ,0xbb,L""), bVar17)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              dVar46 = (double)*(float *)&(pFVar24->MPlane1).MX.field_0x8 * dVar33;
              dVar41 = (double)*(float *)&(pFVar24->MPlane1).MX.field_0x4 * dVar33;
              dVar10 = (double)*(float *)&(pFVar24->MPlane1).MX * dVar33;
              dVar47 = dVar12 * dVar46 - (double)uVar35 * dVar41;
              dVar47 = dVar47 + dVar47;
              dVar40 = (double)uVar35 * dVar10 - dVar11 * dVar46;
              dVar40 = dVar40 + dVar40;
              dVar43 = dVar11 * dVar41 - dVar12 * dVar10;
              dVar43 = dVar43 + dVar43;
              dVar10 = (dVar12 * dVar43 - (double)uVar35 * dVar40) + dVar38 * dVar47 + dVar10 +
                       local_d40._s_0.X;
              dVar41 = ((double)uVar35 * dVar47 - dVar11 * dVar43) + dVar38 * dVar40 + dVar41 +
                       local_d40._s_0.Y;
              dVar43 = (dVar11 * dVar40 - dVar12 * dVar47) + dVar38 * dVar43 + dVar46 +
                       local_d40._s_0.Z;
              local_c90 = dVar43;
              if (*(longlong *)((longlong)this + 8) == 0) {
                fVar53 = *(float *)&pFVar24->_padding_;
                pFVar26 = Chaos::FDebugDrawQueue::GetInstance();
                bVar17 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB((FLinearColor *)&local_cd8._s_0);
                pFVar27 = Chaos::FDebugDrawQueue::GetInstance();
                if ((pFVar27->bEnableDebugDrawing != false) &&
                   (pFVar27 = Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar27->NumConsumers)) {
                  pFVar1 = &pFVar26->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_b08 = local_c90;
                  local_b18 = dVar10;
                  dStack_b10 = dVar41;
                  bVar19 = Chaos::FDebugDrawQueue::AcceptCommand
                                     (pFVar26,0x90,(TVector<double,3> *)&local_b18);
                  if (bVar19) {
                    local_270 = (void *)0x0;
                    local_268 = 0;
                    local_260 = 0;
                    local_308 = local_cb8;
                    local_304 = 0xc;
                    local_300 = 0;
                    local_2f8 = 0x38d1b717;
                    local_2f0 = 0;
                    local_190 = 3;
                    local_338[0]._0_8_ = dVar10;
                    local_338[0]._8_8_ = dVar41;
                    local_338[0]._16_8_ = dVar43;
                    local_2f4 = -bVar17 & 2;
                    local_2e8 = (double)fVar53 * dVar33;
                    Chaos::FDebugDrawQueue::AddCommand
                              (pFVar26,(FLatentDrawCommand *)&local_338[0]._s_0);
                    if (local_270 != (void *)0x0) {
                      FMemory::Free(local_270);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
              }
              goto LAB_14dba4449;
            }
            if (uVar18 != '\t') goto LAB_14dba4449;
            dVar33 = *(double *)(*(longlong *)(*(longlong *)this + 8) + 0x338);
            if (((char)pFVar24->_padding_ != '\t') &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("T_DERIVED::StaticType() == Type",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                    ,0xbb,L""), bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            Chaos::DrawTaperedCylinder
                      (*(FPrimitiveDrawInterface **)((longlong)this + 8),pFVar24,
                       (TQuat<double> *)local_d18,(TVector<double> *)&local_d40._s_0,dVar33,
                       (FLinearColor *)&local_cd8._s_0);
            uVar31 = (ulonglong)local_d28 & 0xffffffff;
            pFVar37 = pFVar37 + 8;
          }
        }
LAB_14dba3f61:
        uVar55 = SUB84(__real_3fe0000000000000,0);
        uVar56 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
LAB_14dba3f6a:
        uVar35 = local_cf8._8_8_;
        lVar36 = lStack_ce0;
        fVar53 = __real_3f800000;
        fVar54 = __real_41200000;
        break;
      case '\b':
        dVar38 = *(double *)(*(longlong *)(*(longlong *)this + 8) + 0x338);
        pFVar28 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                            ((FImplicitObject *)this_00);
        Chaos::DrawConvex(*(FPrimitiveDrawInterface **)((longlong)this + 8),pFVar28,
                          (TQuat<double> *)local_d18,(TVector<double> *)&local_d40._s_0,dVar38,
                          (FLinearColor *)&local_cd8._s_0);
        break;
      case '\x10':
        if ((this_00->field_0x18 != '\x10') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar53 = *(float *)(&(this_00->TriangleMesh).MPointToNeighborsMap.field_0x0 + 4);
        fVar54 = *(float *)&(this_00->TriangleMesh).MElements.AllocatorInstance.Data;
        fVar52 = fVar53 * *(float *)((longlong)
                                     &(this_00->TriangleMesh).MPointToTriangleMap.AllocatorInstance.
                                      Data + 4) + (float)(this_00->TriangleMesh).MElements.ArrayNum;
        fVar44 = fVar53 * *(float *)&(this_00->TriangleMesh).MPointToTriangleMap.AllocatorInstance.
                                     Data +
                 *(float *)((longlong)&(this_00->TriangleMesh).MElements.AllocatorInstance.Data + 4)
        ;
        fVar2 = *(float *)((longlong)&(this_00->TriangleMesh).MElements.AllocatorInstance.Data + 4);
        fVar49 = fVar53 * (float)(this_00->TriangleMesh).MElements.ArrayMax + fVar54;
        fVar53 = *(float *)(&(this_00->TriangleMesh).MPointToNeighborsMap.field_0x8 + 4);
        dVar38 = *(double *)(*(longlong *)(*(longlong *)this + 8) + 0x338);
        dVar11 = (double)fVar44;
        dVar12 = (double)fVar52;
        dVar43 = (double)fVar2;
        local_c48 = (double)(float)(this_00->TriangleMesh).MElements.ArrayNum;
        dVar10 = (double)fVar49;
        local_d28 = (double)*(float *)&(this_00->TriangleMesh).MPointToNeighborsMap.field_0x8;
        dVar41 = (double)fVar53;
        local_c58 = (double)fVar54;
        local_c50 = dVar43;
        local_bf8 = dVar10;
        local_bf0 = dVar11;
        local_be8 = dVar12;
        Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)local_968,3,'\0');
        local_968._0_8_ = &___7__TSphere_N_02_Chaos__6B_;
        local_940 = (float)local_c48;
        local_968._16_4_ = (undefined4)local_d28;
        local_948 = fVar54;
        local_944 = fVar2;
        Chaos::DrawSphere(*(FPrimitiveDrawInterface **)((longlong)this + 8),
                          (TSphere<double,3> *)local_968,(TQuat<double> *)local_d18,
                          (TVector<double> *)&local_d40._s_0,dVar38,(FLinearColor *)&local_cd8._s_0,
                          (FMaterialRenderProxy *)0x0);
        local_968._0_8_ = &___7__TSphere_N_02_Chaos__6B_;
        Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)local_968);
        dVar38 = *(double *)(*(longlong *)(*(longlong *)this + 8) + 0x338);
        Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)local_938,3,'\0');
        local_938._0_8_ = &___7__TSphere_N_02_Chaos__6B_;
        local_938._16_4_ = fVar53;
        local_918 = fVar49;
        local_914 = fVar44;
        local_910 = fVar52;
        Chaos::DrawSphere(*(FPrimitiveDrawInterface **)((longlong)this + 8),
                          (TSphere<double,3> *)local_938,(TQuat<double> *)local_d18,
                          (TVector<double> *)&local_d40._s_0,dVar38,(FLinearColor *)&local_cd8._s_0,
                          (FMaterialRenderProxy *)0x0);
        local_938._0_8_ = &___7__TSphere_N_02_Chaos__6B_;
        Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)local_938);
        dVar40 = local_d28;
        dVar38 = *(double *)(*(longlong *)(*(longlong *)this + 8) + 0x338);
        pFVar24 = Chaos::FTaperedCylinder::FTaperedCylinder
                            (&local_188,(TVector<double,3> *)&local_c58,
                             (TVector<double,3> *)&local_bf8,local_d28,dVar41);
        Chaos::DrawTaperedCylinder
                  (*(FPrimitiveDrawInterface **)((longlong)this + 8),pFVar24,
                   (TQuat<double> *)local_d18,(TVector<double> *)&local_d40._s_0,dVar38,
                   (FLinearColor *)&local_cd8._s_0);
        local_188._padding_ = (longlong)&___7FTaperedCylinder_Chaos__6B_;
        Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)&local_188);
        if ((this_00->TriangleMesh).MPointToNeighborsMap.field_0x10 == '\0') {
          uVar55 = SUB84(__real_3fe0000000000000,0);
          uVar56 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
          fVar53 = __real_3f800000;
          fVar54 = __real_41200000;
        }
        else {
          lVar8 = *(longlong *)this;
          dVar38 = *(double *)(*(longlong *)(lVar8 + 8) + 0x338) * __real_3fe0000000000000;
          local_bd8._s_0.X = (dVar10 + (double)fVar54) * dVar38;
          local_bd8._s_0.Y = (dVar11 + dVar43) * dVar38;
          local_bd8._s_0.Z = (dVar12 + local_c48) * dVar38;
          pTVar25 = UE::Math::TQuat<double>::RotateVector
                              ((TQuat<double> *)local_d18,&local_9f8,
                               (TVector<double> *)&local_bd8._s_0);
          uVar3 = (this_00->TriangleMesh).MPointToTriangleMap.ArrayNum;
          uVar4 = (this_00->TriangleMesh).MPointToTriangleMap.ArrayMax;
          uVar55 = SUB84(__real_3fe0000000000000,0);
          uVar56 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
          local_a78 = (pTVar25->field0_0x0)._s_0.X;
          dStack_a70 = (pTVar25->field0_0x0)._s_0.Y;
          local_a68 = (pTVar25->field0_0x0)._s_0.Z;
          dVar47 = dStack_a70 + local_d40._s_0.Y;
          dVar10 = local_a68 + local_d40._s_0.Z;
          dVar43 = local_a78 + local_d40._s_0.X;
          dVar38 = *(double *)(*(longlong *)(lVar8 + 8) + 0x338) * __real_3fe0000000000000 *
                   (dVar41 + dVar40);
          local_af8._8_4_ = SUB84((double)(float)uVar4 * dVar38,0);
          local_af8._0_8_ = (double)(float)uVar3 * dVar38;
          local_af8._12_4_ = (int)((ulonglong)((double)(float)uVar4 * dVar38) >> 0x20);
          local_af8._s_0.Z =
               (double)*(float *)&(this_00->TriangleMesh).MPointToNeighborsMap.field_0x0 * dVar38;
          local_c90 = dVar10;
          pTVar25 = UE::Math::TQuat<double>::RotateVector
                              ((TQuat<double> *)local_d18,local_9e0,
                               (TVector<double> *)&local_af8._s_0);
          dVar11 = (pTVar25->field0_0x0)._s_0.X;
          dVar12 = (pTVar25->field0_0x0)._s_0.Y;
          dVar38 = (pTVar25->field0_0x0)._s_0.Z;
          local_a50 = dVar38;
          local_a60 = dVar11;
          dStack_a58 = dVar12;
          fVar53 = __real_3f800000;
          fVar54 = __real_41200000;
          if (*(longlong *)((longlong)this + 8) == 0) {
            pFVar26 = Chaos::FDebugDrawQueue::GetInstance();
            bVar17 = Chaos::Private::bDrawInForeground != false;
            FLinearColor::ToFColorSRGB((FLinearColor *)&local_cd8._s_0);
            pFVar27 = Chaos::FDebugDrawQueue::GetInstance();
            if ((pFVar27->bEnableDebugDrawing != false) &&
               (pFVar27 = Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar27->NumConsumers)) {
              lpCriticalSection = (LPCRITICAL_SECTION)&pFVar26->CommandQueueCS;
              if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection(lpCriticalSection);
              local_ac8 = local_c90;
              local_ad8 = dVar43;
              dStack_ad0 = dVar47;
              bVar19 = Chaos::FDebugDrawQueue::AcceptCommand
                                 (pFVar26,1,(TVector<double,3> *)&local_ad8);
              if (bVar19) {
                local_5d0 = (void *)0x0;
                local_5c8 = 0;
                local_5c0 = 0;
                local_668 = local_cb4;
                local_660 = 0;
                local_658 = 0x38d1b717;
                local_650 = 0;
                local_4f0 = 1;
                local_698._s_0.X = dVar43;
                local_698._s_0.Y = dVar47;
                local_698._s_0.Z = dVar10;
                local_680 = dVar11 + dVar43;
                local_678 = dVar12 + dVar47;
                local_670 = dVar38 + dVar10;
                local_654 = -bVar17 & 2;
                Chaos::FDebugDrawQueue::AddCommand(pFVar26,(FLatentDrawCommand *)&local_698._s_0);
                pvVar30 = local_5d0;
                goto LAB_14dba3be2;
              }
              goto LAB_14dba3bec;
            }
            goto LAB_14dba3f6a;
          }
        }
        break;
      case '\x11':
        auVar13._8_8_ = local_d40._s_0.Y;
        auVar13._0_8_ = local_d40._s_0.X;
        local_d18._0_8_ = dVar11;
        local_d18._8_8_ = dVar12;
        if ((this_00->field_0x18 != '\x11') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_ba8._s_0.Z = (double)uVar15;
        local_a98._24_4_ = uVar50;
        local_a98._16_8_ = dVar38;
        local_a98._28_4_ = uVar51;
        local_ba8._0_16_ = auVar13;
        local_a98._0_8_ = dVar11;
        local_a98._8_8_ = dVar12;
        Chaos::DrawCoordinateSystem
                  (*(FPrimitiveDrawInterface **)((longlong)this + 8),(TQuat<double> *)local_a98,
                   (TVector<double> *)&local_ba8._s_0,fVar54,fVar53);
        break;
      case '\x12':
        if ((this_00->field_0x18 != '\x12') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        Chaos::DrawSkinnedTriangleMesh
                  (*(FPrimitiveDrawInterface **)((longlong)this + 8),(FMaterialRenderProxy *)0x0,
                   *(FClothingSimulationSolver **)(*(longlong *)this + 8),
                   (FLinearColor *)&local_cd8._s_0,this_00);
        goto switchD_14dba3958_caseD_2;
      case '&':
        if ((this_00->field_0x18 != '&') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("T_DERIVED::StaticType() == Type",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                ,0xbb,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
switchD_14dba3958_caseD_2:
        Chaos::DrawCoordinateSystem
                  (*(FPrimitiveDrawInterface **)((longlong)this + 8),(TQuat<double> *)local_d18,
                   (TVector<double> *)&local_d40._s_0,fVar54,fVar53);
      }
LAB_14dba3f88:
      local_cc8 = (double)((longlong)dVar33 + 1);
      uVar34 = uVar34 + 1;
    } while ((int)uVar34 < local_cb0[0].ArrayNum);
  }
  return;
}

// operator() @ 14dbabce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
`Chaos::FClothVisualizationNoGC::DrawSelfIntersection'::__l15::<lambda_1>::operator()
          (void *this,
          TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
          *param_1,FLinearColor *param_2)

{
  FWindowsRecursiveMutex *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
  *pTVar20;
  double dVar21;
  bool bVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  FDebugDrawQueue *pFVar26;
  FDebugDrawQueue *pFVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar32;
  uint uVar33;
  longlong lVar34;
  FLinearColor *this_00;
  float fVar35;
  undefined4 uVar36;
  undefined1 auStack_6b8 [32];
  longlong local_698;
  longlong local_690;
  undefined4 local_688;
  undefined4 local_684;
  undefined4 local_680;
  FLinearColor *local_678;
  TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
  *local_670;
  undefined1 local_668 [16];
  double local_658;
  undefined1 local_650 [16];
  double local_640;
  undefined1 local_638 [16];
  double local_628;
  double local_610;
  double local_5f8;
  TVector<double>_u_0 local_5e8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  undefined4 local_5b8;
  undefined1 local_5b0;
  undefined4 local_5a8;
  byte local_5a4;
  undefined4 local_5a0;
  void *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_440;
  TVector<double>_u_0 local_438 [2];
  undefined4 local_408;
  undefined1 local_400;
  undefined4 local_3f8;
  byte local_3f4;
  undefined4 local_3f0;
  void *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_290;
  TVector<double>_u_0 local_288 [2];
  undefined4 local_258;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  fVar19 = __real_3f800000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_6b8;
  iVar32 = param_1->ArrayNum;
  uVar33 = 0;
  if (0 < iVar32 + -1) {
    lVar34 = 0;
    local_678 = param_2;
    local_670 = param_1;
    do {
      pTVar20 = local_670;
      uVar24 = 0;
      if ((int)uVar33 < iVar32) {
        uVar24 = ~uVar33 >> 0x1f;
      }
      if (uVar24 == 0) {
        local_690 = (longlong)iVar32;
        local_698 = (longlong)(int)uVar33;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar22) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      pFVar12 = (pTVar20->AllocatorInstance).Data;
      plVar13 = *(longlong **)((longlong)this + 0x10);
      uVar24 = *(uint *)(pFVar12 + lVar34 + 8);
      lVar28 = (longlong)(int)uVar24;
      iVar32 = (int)plVar13[1];
      uVar25 = 0;
      if ((int)uVar24 < iVar32) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (local_698 = lVar28, local_690 = (longlong)iVar32,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar30 = *plVar13;
      uVar24 = *(uint *)(pFVar12 + lVar34 + 0xc);
      lVar29 = (longlong)(int)uVar24;
      plVar13 = *(longlong **)((longlong)this + 0x10);
      fVar35 = (fVar19 - *(float *)(pFVar12 + lVar34)) - *(float *)(pFVar12 + lVar34 + 4);
      iVar32 = (int)plVar13[1];
      fVar2 = *(float *)(lVar30 + lVar28 * 0xc);
      fVar3 = *(float *)(lVar30 + 4 + lVar28 * 0xc);
      fVar4 = *(float *)(lVar30 + 8 + lVar28 * 0xc);
      uVar25 = 0;
      if ((int)uVar24 < iVar32) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (local_698 = lVar29, local_690 = (longlong)iVar32,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar28 = *plVar13;
      fVar5 = *(float *)(pFVar12 + lVar34);
      uVar24 = *(uint *)(pFVar12 + lVar34 + 0x10);
      lVar30 = (longlong)(int)uVar24;
      plVar13 = *(longlong **)((longlong)this + 0x10);
      fVar6 = *(float *)(lVar28 + lVar29 * 0xc);
      iVar32 = (int)plVar13[1];
      fVar7 = *(float *)(lVar28 + 4 + lVar29 * 0xc);
      fVar8 = *(float *)(lVar28 + 8 + lVar29 * 0xc);
      uVar25 = 0;
      if ((int)uVar24 < iVar32) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (local_698 = lVar30, local_690 = (longlong)iVar32,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar28 = *plVar13;
      fVar9 = *(float *)(pFVar12 + lVar34 + 4);
      lVar29 = *(longlong *)(*(longlong *)this + 8);
      dVar10 = *(double *)(lVar29 + 0x338);
      uVar33 = uVar33 + 1;
      dVar17 = (double)(fVar9 * *(float *)(lVar28 + lVar30 * 0xc) + fVar5 * fVar6 + fVar35 * fVar2)
               * dVar10 + *(double *)(lVar29 + 0x358);
      dVar18 = (double)(fVar9 * *(float *)(lVar28 + 8 + lVar30 * 0xc) +
                       fVar5 * fVar8 + fVar35 * fVar4) * dVar10 + *(double *)(lVar29 + 0x368);
      dVar10 = (double)(fVar9 * *(float *)(lVar28 + 4 + lVar30 * 0xc) +
                       fVar5 * fVar7 + fVar35 * fVar3) * dVar10 + *(double *)(lVar29 + 0x360);
      uVar36 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uVar24 = 0;
      if ((int)uVar33 < pTVar20->ArrayNum) {
        uVar24 = ~uVar33 >> 0x1f;
      }
      local_610 = dVar18;
      if (uVar24 == 0) {
        local_698 = (longlong)(int)uVar33;
        local_690 = (longlong)pTVar20->ArrayNum;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar22) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      pFVar12 = (pTVar20->AllocatorInstance).Data;
      lVar28 = lVar34 + 0x14;
      plVar13 = *(longlong **)((longlong)this + 0x10);
      uVar24 = *(uint *)(pFVar12 + lVar34 + 0x1c);
      lVar30 = (longlong)(int)uVar24;
      iVar32 = (int)plVar13[1];
      uVar25 = 0;
      if ((int)uVar24 < iVar32) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (local_698 = lVar30, local_690 = (longlong)iVar32,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar29 = *plVar13;
      uVar24 = *(uint *)(pFVar12 + lVar34 + 0x20);
      lVar31 = (longlong)(int)uVar24;
      plVar13 = *(longlong **)((longlong)this + 0x10);
      fVar35 = (fVar19 - *(float *)(pFVar12 + lVar28)) - *(float *)(pFVar12 + lVar34 + 0x18);
      iVar32 = (int)plVar13[1];
      fVar2 = *(float *)(lVar29 + lVar30 * 0xc);
      fVar3 = *(float *)(lVar29 + 4 + lVar30 * 0xc);
      fVar4 = *(float *)(lVar29 + 8 + lVar30 * 0xc);
      uVar25 = 0;
      if ((int)uVar24 < iVar32) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (local_698 = lVar31, local_690 = (longlong)iVar32,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar30 = *plVar13;
      fVar5 = *(float *)(pFVar12 + lVar28);
      uVar24 = *(uint *)(pFVar12 + lVar34 + 0x24);
      lVar29 = (longlong)(int)uVar24;
      plVar13 = *(longlong **)((longlong)this + 0x10);
      fVar6 = *(float *)(lVar30 + lVar31 * 0xc);
      iVar32 = (int)plVar13[1];
      fVar7 = *(float *)(lVar30 + 4 + lVar31 * 0xc);
      fVar8 = *(float *)(lVar30 + 8 + lVar31 * 0xc);
      uVar25 = 0;
      if ((int)uVar24 < iVar32) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (local_698 = lVar29, local_690 = (longlong)iVar32,
         bVar22 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      dVar21 = local_610;
      fVar9 = *(float *)(pFVar12 + lVar34 + 0x18);
      lVar34 = *plVar13;
      lVar30 = *(longlong *)(*(longlong *)this + 8);
      dVar11 = *(double *)(lVar30 + 0x338);
      dVar15 = (double)(fVar9 * *(float *)(lVar34 + lVar29 * 0xc) + fVar5 * fVar6 + fVar35 * fVar2)
               * dVar11 + *(double *)(lVar30 + 0x358);
      dVar16 = (double)(fVar9 * *(float *)(lVar34 + 8 + lVar29 * 0xc) +
                       fVar5 * fVar8 + fVar35 * fVar4) * dVar11 + *(double *)(lVar30 + 0x368);
      dVar11 = (double)(fVar9 * *(float *)(lVar34 + 4 + lVar29 * 0xc) +
                       fVar5 * fVar7 + fVar35 * fVar3) * dVar11 + *(double *)(lVar30 + 0x360);
      this_00 = local_678;
      local_5f8 = dVar16;
      if (*(longlong *)((longlong)this + 8) == 0) {
        pFVar26 = Chaos::FDebugDrawQueue::GetInstance();
        this_00 = local_678;
        bVar22 = Chaos::Private::bDrawInForeground != false;
        FLinearColor::ToFColorSRGB(local_678);
        pFVar27 = Chaos::FDebugDrawQueue::GetInstance();
        if ((pFVar27->bEnableDebugDrawing != false) &&
           (pFVar27 = Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar27->NumConsumers)) {
          pFVar1 = &pFVar26->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_658 = dVar21;
          local_668._8_4_ = SUB84(dVar10,0);
          local_668._0_8_ = dVar17;
          local_668._12_4_ = uVar36;
          bVar23 = Chaos::FDebugDrawQueue::AcceptCommand(pFVar26,1,(TVector<double,3> *)local_668);
          if (bVar23) {
            local_520 = (void *)0x0;
            local_518 = 0;
            local_510 = 0;
            local_5b8 = local_688;
            local_5b0 = 0;
            local_5a8 = 0x38d1b717;
            local_5a0 = 0;
            local_440 = 1;
            local_5e8._s_0.X = dVar17;
            local_5e8._s_0.Y = dVar10;
            local_5e8._s_0.Z = dVar18;
            local_5d0 = dVar15;
            local_5c8 = dVar11;
            local_5c0 = dVar16;
            local_5a4 = -bVar22 & 2;
            Chaos::FDebugDrawQueue::AddCommand(pFVar26,(FLatentDrawCommand *)&local_5e8._s_0);
            if (local_520 != (void *)0x0) {
              FMemory::Free(local_520);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
      }
      if (*(longlong *)((longlong)this + 8) == 0) {
        pFVar26 = Chaos::FDebugDrawQueue::GetInstance();
        bVar22 = Chaos::Private::bDrawInForeground != false;
        FLinearColor::ToFColorSRGB(this_00);
        pFVar27 = Chaos::FDebugDrawQueue::GetInstance();
        if ((pFVar27->bEnableDebugDrawing != false) &&
           (pFVar27 = Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar27->NumConsumers)) {
          pFVar1 = &pFVar26->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_640 = dVar21;
          local_650._8_4_ = SUB84(dVar10,0);
          local_650._0_8_ = dVar17;
          local_650._12_4_ = uVar36;
          bVar23 = Chaos::FDebugDrawQueue::AcceptCommand(pFVar26,1,(TVector<double,3> *)local_650);
          if (bVar23) {
            local_370 = (void *)0x0;
            local_368 = 0;
            local_360 = 0;
            local_400 = 0;
            local_290 = 0;
            local_408 = local_684;
            local_3f8 = 0x38d1b717;
            local_3f0 = 0x3f800000;
            local_438[0]._0_8_ = dVar17;
            local_438[0]._8_8_ = dVar10;
            local_438[0]._16_8_ = dVar18;
            local_3f4 = -bVar22 & 2;
            Chaos::FDebugDrawQueue::AddCommand(pFVar26,(FLatentDrawCommand *)&local_438[0]._s_0);
            if (local_370 != (void *)0x0) {
              FMemory::Free(local_370);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
        if (*(longlong *)((longlong)this + 8) == 0) {
          pFVar26 = Chaos::FDebugDrawQueue::GetInstance();
          bVar22 = Chaos::Private::bDrawInForeground != false;
          FLinearColor::ToFColorSRGB(this_00);
          pFVar27 = Chaos::FDebugDrawQueue::GetInstance();
          if ((pFVar27->bEnableDebugDrawing != false) &&
             (pFVar27 = Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar27->NumConsumers)) {
            pFVar1 = &pFVar26->CommandQueueCS;
            if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
            local_638._8_4_ = SUB84(dVar11,0);
            local_638._0_8_ = dVar15;
            local_638._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            local_628 = local_5f8;
            bVar23 = Chaos::FDebugDrawQueue::AcceptCommand(pFVar26,1,(TVector<double,3> *)local_638)
            ;
            if (bVar23) {
              local_1c0 = (void *)0x0;
              local_1b8 = 0;
              local_1b0 = 0;
              local_250 = 0;
              local_e0 = 0;
              local_258 = local_680;
              local_248 = 0x38d1b717;
              local_240 = 0x3f800000;
              local_288[0]._0_8_ = dVar15;
              local_288[0]._8_8_ = dVar11;
              local_288[0]._16_8_ = dVar16;
              local_244 = -bVar22 & 2;
              Chaos::FDebugDrawQueue::AddCommand(pFVar26,(FLatentDrawCommand *)&local_288[0]._s_0);
              if (local_1c0 != (void *)0x0) {
                FMemory::Free(local_1c0);
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          }
        }
      }
      iVar32 = local_670->ArrayNum;
      lVar34 = lVar28;
    } while ((int)uVar33 < iVar32 + -1);
  }
  return;
}

// operator() @ 14dbacb40

void __thiscall
`Chaos::FClothVisualizationNoGC::DrawOpenEdges'::__l2::<lambda_2>::operator()
          (void *this,TArrayView<Chaos::TVector<int,3>_const_,int> *param_1,
          TMap<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  ForAnyElementType *pFVar1;
  TVector<int,3> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90 [2];
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 local_70;
  uint *local_68;
  undefined8 local_60;
  uint *local_58;
  undefined8 local_50;
  uint *local_48 [2];
  ulonglong uVar12;
  
  TSet<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)param_2,param_1->ArrayNum * 2);
  iVar7 = param_1->ArrayNum;
  uVar10 = 0;
  uVar12 = uVar10;
  if (0 < iVar7) {
    do {
      uVar11 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar11 < iVar7) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar2 = param_1->DataPtr;
      uVar6 = *(uint *)((longlong)&pTVar2->field0_0x0 + uVar10);
      uStack_7c = *(uint *)((longlong)&pTVar2->field0_0x0 + uVar10 + 4);
      uStack_74 = *(uint *)((longlong)&pTVar2->field0_0x0 + uVar10 + 8);
      local_88 = uStack_7c;
      uStack_84 = uVar6;
      if (uVar6 < uStack_7c) {
        local_88 = uVar6;
        uStack_84 = uStack_7c;
      }
      local_80 = uStack_74;
      if (uStack_7c < uStack_74) {
        local_80 = uStack_7c;
        uStack_7c = uStack_74;
      }
      local_78 = uVar6;
      if (uStack_74 < uVar6) {
        local_78 = uStack_74;
        uStack_74 = uVar6;
      }
      local_70 = CONCAT44(uStack_84,local_88);
      uVar6 = (*FCrc::MemCrc32Func)(&local_70,8,0);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar8 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar7 = *(int *)(puVar8 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar6) * 4);
        if (iVar7 != -1) {
          do {
            puVar9 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)param_2);
            if (((uint)*puVar9 == local_88) && ((uint)((ulonglong)*puVar9 >> 0x20) == uStack_84)) {
              if ((iVar7 != -1) && (puVar9 != (undefined8 *)0x0)) goto LAB_14dbaccee;
              break;
            }
            iVar7 = *(int *)(puVar9 + 3);
          } while (iVar7 != -1);
        }
      }
      local_68 = &local_88;
      TSet<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<UE::Math::TIntVector2<unsigned_int>_const_&>_>
                ((TSet<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)param_2,(uint)local_res10,
                 (TKeyInitializer<UE::Math::TIntVector2<unsigned_int>_const_&> *)(ulonglong)uVar6,
                 (bool *)&local_68);
      puVar9 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)param_2);
LAB_14dbaccee:
      pFVar1 = (ForAnyElementType *)(puVar9 + 1);
      local_98 = uVar11;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar9 + 0x14) * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(puVar9 + 2);
      if (iVar7 == *(int *)((longlong)puVar9 + 0x14)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar1,(int *)((longlong)puVar9 + 0x14));
      }
      pFVar3 = pFVar1->Data;
      *(int *)(puVar9 + 2) = iVar7 + 1;
      *(uint *)(pFVar3 + (longlong)iVar7 * 4) = local_98;
      local_60 = CONCAT44(uStack_7c,local_80);
      uVar6 = (*FCrc::MemCrc32Func)(&local_60,8,0);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar8 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar7 = *(int *)(puVar8 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar6) * 4);
        if (iVar7 != -1) {
          do {
            puVar9 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)param_2);
            if (((uint)*puVar9 == local_80) && ((uint)((ulonglong)*puVar9 >> 0x20) == uStack_7c)) {
              if ((iVar7 != -1) && (puVar9 != (undefined8 *)0x0)) goto LAB_14dbace63;
              break;
            }
            iVar7 = *(int *)(puVar9 + 3);
          } while (iVar7 != -1);
        }
      }
      local_58 = &local_80;
      TSet<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<UE::Math::TIntVector2<unsigned_int>_const_&>_>
                ((TSet<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)param_2,(uint)local_res18,
                 (TKeyInitializer<UE::Math::TIntVector2<unsigned_int>_const_&> *)(ulonglong)uVar6,
                 (bool *)&local_58);
      puVar9 = (undefined8 *)((longlong)local_res18[0] * 0x20 + *(longlong *)param_2);
LAB_14dbace63:
      pFVar1 = (ForAnyElementType *)(puVar9 + 1);
      local_94 = uVar11;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_94) &&
          ((FScriptContainerElement *)&local_94 <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar9 + 0x14) * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(puVar9 + 2);
      if (iVar7 == *(int *)((longlong)puVar9 + 0x14)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar1,(int *)((longlong)puVar9 + 0x14));
      }
      *(int *)(puVar9 + 2) = iVar7 + 1;
      *(uint *)(pFVar1->Data + (longlong)iVar7 * 4) = local_94;
      local_50 = CONCAT44(uStack_74,local_78);
      uVar6 = (*FCrc::MemCrc32Func)(&local_50,8,0);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar8 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar7 = *(int *)(puVar8 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar6) * 4);
        if (iVar7 != -1) {
          do {
            puVar9 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)param_2);
            if (((uint)*puVar9 == local_78) && ((uint)((ulonglong)*puVar9 >> 0x20) == uStack_74)) {
              if ((iVar7 != -1) && (puVar9 != (undefined8 *)0x0)) goto LAB_14dbacfb3;
              break;
            }
            iVar7 = *(int *)(puVar9 + 3);
          } while (iVar7 != -1);
        }
      }
      local_48[0] = &local_78;
      TSet<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<UE::Math::TIntVector2<unsigned_int>_const_&>_>
                ((TSet<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)param_2,(uint)local_res20,
                 (TKeyInitializer<UE::Math::TIntVector2<unsigned_int>_const_&> *)(ulonglong)uVar6,
                 (bool *)local_48);
      puVar9 = (undefined8 *)((longlong)local_res20[0] * 0x20 + *(longlong *)param_2);
LAB_14dbacfb3:
      pFVar1 = (ForAnyElementType *)(puVar9 + 1);
      local_90[0] = uVar11;
      if (((pFVar1->Data <= (FScriptContainerElement *)local_90) &&
          ((FScriptContainerElement *)local_90 <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar9 + 0x14) * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(puVar9 + 2);
      if (iVar7 == *(int *)((longlong)puVar9 + 0x14)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar1,(int *)((longlong)puVar9 + 0x14));
      }
      *(int *)(puVar9 + 2) = iVar7 + 1;
      uVar10 = uVar10 + 0xc;
      *(uint *)(pFVar1->Data + (longlong)iVar7 * 4) = local_90[0];
      iVar7 = param_1->ArrayNum;
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < iVar7);
  }
  return;
}

// DrawAccessoryMesh @ 14dbd4c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawAccessoryMesh
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1,FName *param_2)

{
  FWindowsRecursiveMutex *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FClothingSimulationCloth *this_00;
  FClothingSimulationSolver *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  FTriangleMesh *pFVar18;
  FDebugDrawQueue *pFVar19;
  FDebugDrawQueue *pFVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  uint uVar25;
  undefined1 auStack_6f8 [32];
  ulonglong local_6d8;
  longlong local_6d0;
  int local_6c8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_6c0;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  FClothVisualizationNoGC *local_6a0;
  FName *local_698;
  FScriptContainerElement *local_690;
  FPrimitiveDrawInterface *local_688;
  FScriptContainerElement *local_680;
  double local_678;
  double dStack_670;
  double local_668;
  double local_660;
  double dStack_658;
  double local_650;
  double local_648;
  double dStack_640;
  double local_638;
  double local_620;
  double local_608;
  double local_5f0;
  TVector<double>_u_0 local_5e8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  undefined4 local_5b8;
  undefined1 local_5b0;
  undefined4 local_5a8;
  byte local_5a4;
  undefined4 local_5a0;
  void *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_440;
  TVector<double>_u_0 local_438;
  double local_420;
  double local_418;
  double local_410;
  undefined4 local_408;
  undefined1 local_400;
  undefined4 local_3f8;
  byte local_3f4;
  undefined4 local_3f0;
  void *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_290;
  TVector<double>_u_0 local_288;
  double local_270;
  double local_268;
  double local_260;
  undefined4 local_258;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_6f8;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    local_6a0 = this;
    local_698 = param_2;
    local_688 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      AccessoryColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.R];
      AccessoryColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.G];
      AccessoryColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.B];
      AccessoryColor.field0_0x0._s_0.A = (float)FColor::Turquoise.field0_0x0._3_1_ * __real_3b808081
      ;
      _Init_thread_footer(&::_TSS0);
    }
    iVar16 = (this->Solver->Cloths).ArrayNum;
    pFVar23 = (this->Solver->Cloths).AllocatorInstance.Data;
    local_690 = pFVar23;
    if ((iVar16 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_680 = pFVar23 + (longlong)iVar16 * 8;
    if (pFVar23 != local_680) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar23;
        iVar16 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if ((iVar16 != -1) &&
           (bVar14 = FClothingSimulationCloth::AccessoryMeshExists(this_00,this->Solver,param_2),
           bVar14)) {
          iVar24 = 0;
          if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
            iVar24 = iVar16;
          }
          local_6c8 = iVar24;
          pFVar18 = FClothingSimulationCloth::GetTriangleMesh(this_00,this->Solver);
          iVar16 = (pFVar18->MElements).ArrayNum;
          pFVar23 = (pFVar18->MElements).AllocatorInstance.Data;
          if ((iVar16 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FClothingSimulationCloth::GetAccessoryMeshPositions
                    (this_00,&local_6c0,this->Solver,param_2);
          iVar13 = local_6c0.ArrayNum;
          uVar25 = 0;
          param_2 = local_698;
          if (0 < iVar16) {
            pFVar23 = pFVar23 + 8;
            do {
              if ((int)uVar25 < 0) {
                local_6d8 = (ulonglong)uVar25;
                local_6d0 = (longlong)iVar16;
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar14) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              uVar21 = *(int *)(pFVar23 + -8) - iVar24;
              uVar17 = 0;
              if ((int)uVar21 < iVar13) {
                uVar17 = ~uVar21 >> 0x1f;
              }
              if (uVar17 == 0) {
                local_6d0 = (longlong)iVar13;
                local_6d8 = (ulonglong)(int)uVar21;
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar14) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pFVar5 = this->Solver;
              uVar22 = *(int *)(pFVar23 + -4) - iVar24;
              dVar2 = pFVar5->LocalSpaceScale;
              uVar17 = 0;
              if ((int)uVar22 < iVar13) {
                uVar17 = ~uVar22 >> 0x1f;
              }
              dVar12 = (double)*(float *)&local_6c0.DataPtr[(int)uVar21].field_0x8 * dVar2 +
                       *(double *)&(pFVar5->LocalSpaceLocation).field_0x10;
              dVar11 = (double)*(float *)(local_6c0.DataPtr + (int)uVar21) * dVar2 +
                       *(double *)&pFVar5->LocalSpaceLocation;
              dVar2 = (double)*(float *)&local_6c0.DataPtr[(int)uVar21].field_0x4 * dVar2 +
                      *(double *)&(pFVar5->LocalSpaceLocation).field_0x8;
              local_620 = dVar12;
              if (uVar17 == 0) {
                local_6d0 = (longlong)iVar13;
                local_6d8 = (ulonglong)(int)uVar22;
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar14) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pFVar5 = this->Solver;
              uVar21 = *(int *)pFVar23 - iVar24;
              dVar3 = pFVar5->LocalSpaceScale;
              uVar17 = 0;
              if ((int)uVar21 < iVar13) {
                uVar17 = ~uVar21 >> 0x1f;
              }
              dVar10 = (double)*(float *)&local_6c0.DataPtr[(int)uVar22].field_0x8 * dVar3 +
                       *(double *)&(pFVar5->LocalSpaceLocation).field_0x10;
              dVar9 = (double)*(float *)(local_6c0.DataPtr + (int)uVar22) * dVar3 +
                      *(double *)&pFVar5->LocalSpaceLocation;
              dVar3 = (double)*(float *)&local_6c0.DataPtr[(int)uVar22].field_0x4 * dVar3 +
                      *(double *)&(pFVar5->LocalSpaceLocation).field_0x8;
              local_608 = dVar10;
              if (uVar17 == 0) {
                local_6d0 = (longlong)iVar13;
                local_6d8 = (ulonglong)(int)uVar21;
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar14) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pFVar5 = this->Solver;
              dVar4 = pFVar5->LocalSpaceScale;
              dVar8 = (double)*(float *)&local_6c0.DataPtr[(int)uVar21].field_0x8 * dVar4 +
                      *(double *)&(pFVar5->LocalSpaceLocation).field_0x10;
              dVar7 = (double)*(float *)(local_6c0.DataPtr + (int)uVar21) * dVar4 +
                      *(double *)&pFVar5->LocalSpaceLocation;
              dVar4 = (double)*(float *)&local_6c0.DataPtr[(int)uVar21].field_0x4 * dVar4 +
                      *(double *)&(pFVar5->LocalSpaceLocation).field_0x8;
              local_5f0 = dVar8;
              if (local_688 == (FPrimitiveDrawInterface *)0x0) {
                pFVar19 = FDebugDrawQueue::GetInstance();
                bVar14 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&AccessoryColor);
                pFVar20 = FDebugDrawQueue::GetInstance();
                if ((pFVar20->bEnableDebugDrawing != false) &&
                   (pFVar20 = FDebugDrawQueue::GetInstance(), 0 < pFVar20->NumConsumers)) {
                  pFVar1 = &pFVar19->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_668 = local_620;
                  local_678 = dVar11;
                  dStack_670 = dVar2;
                  bVar15 = FDebugDrawQueue::AcceptCommand(pFVar19,1,(TVector<double,3> *)&local_678)
                  ;
                  if (bVar15) {
                    local_520 = (void *)0x0;
                    local_518 = 0;
                    local_510 = 0;
                    local_5b8 = local_6b0;
                    local_5b0 = 0;
                    local_5a8 = 0x38d1b717;
                    local_5a0 = 0;
                    local_440 = 1;
                    local_5e8._s_0.X = dVar11;
                    local_5e8._s_0.Y = dVar2;
                    local_5e8._s_0.Z = dVar12;
                    local_5d0 = dVar9;
                    local_5c8 = dVar3;
                    local_5c0 = dVar10;
                    local_5a4 = -bVar14 & 2;
                    FDebugDrawQueue::AddCommand(pFVar19,(FLatentDrawCommand *)&local_5e8._s_0);
                    if (local_520 != (void *)0x0) {
                      FMemory::Free(local_520);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
                pFVar19 = FDebugDrawQueue::GetInstance();
                bVar14 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&AccessoryColor);
                pFVar20 = FDebugDrawQueue::GetInstance();
                if ((pFVar20->bEnableDebugDrawing != false) &&
                   (pFVar20 = FDebugDrawQueue::GetInstance(), 0 < pFVar20->NumConsumers)) {
                  pFVar1 = &pFVar19->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_650 = local_608;
                  local_660 = dVar9;
                  dStack_658 = dVar3;
                  bVar15 = FDebugDrawQueue::AcceptCommand(pFVar19,1,(TVector<double,3> *)&local_660)
                  ;
                  if (bVar15) {
                    local_370 = (void *)0x0;
                    local_368 = 0;
                    local_360 = 0;
                    local_408 = local_6ac;
                    local_400 = 0;
                    local_3f8 = 0x38d1b717;
                    local_3f0 = 0;
                    local_290 = 1;
                    local_438._s_0.X = dVar9;
                    local_438._s_0.Y = dVar3;
                    local_438._s_0.Z = dVar10;
                    local_420 = dVar7;
                    local_418 = dVar4;
                    local_410 = dVar8;
                    local_3f4 = -bVar14 & 2;
                    FDebugDrawQueue::AddCommand(pFVar19,(FLatentDrawCommand *)&local_438._s_0);
                    if (local_370 != (void *)0x0) {
                      FMemory::Free(local_370);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
                pFVar19 = FDebugDrawQueue::GetInstance();
                bVar14 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&AccessoryColor);
                pFVar20 = FDebugDrawQueue::GetInstance();
                this = local_6a0;
                iVar24 = local_6c8;
                if ((pFVar20->bEnableDebugDrawing != false) &&
                   (pFVar20 = FDebugDrawQueue::GetInstance(), this = local_6a0, iVar24 = local_6c8,
                   0 < pFVar20->NumConsumers)) {
                  pFVar1 = &pFVar19->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_638 = local_5f0;
                  local_648 = dVar7;
                  dStack_640 = dVar4;
                  bVar15 = FDebugDrawQueue::AcceptCommand(pFVar19,1,(TVector<double,3> *)&local_648)
                  ;
                  if (bVar15) {
                    local_1c0 = (void *)0x0;
                    local_1b8 = 0;
                    local_1b0 = 0;
                    local_258 = local_6a8;
                    local_250 = 0;
                    local_248 = 0x38d1b717;
                    local_240 = 0;
                    local_e0 = 1;
                    local_288._s_0.X = dVar7;
                    local_288._s_0.Y = dVar4;
                    local_288._s_0.Z = dVar8;
                    local_270 = dVar11;
                    local_268 = dVar2;
                    local_260 = dVar12;
                    local_244 = -bVar14 & 2;
                    FDebugDrawQueue::AddCommand(pFVar19,(FLatentDrawCommand *)&local_288._s_0);
                    if (local_1c0 != (void *)0x0) {
                      FMemory::Free(local_1c0);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  this = local_6a0;
                  iVar24 = local_6c8;
                }
              }
              uVar25 = uVar25 + 1;
              pFVar23 = pFVar23 + 0xc;
              param_2 = local_698;
            } while ((int)uVar25 < iVar16);
          }
        }
        pFVar23 = local_690 + 8;
        local_690 = pFVar23;
      } while (pFVar23 != local_680);
    }
  }
  return;
}

// DrawAccessoryMeshNormals @ 14dbd5560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawAccessoryMeshNormals
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1,FName *param_2,
          double param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  FClothingSimulationCloth *this_00;
  FClothingSimulationSolver *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FDebugDrawQueue *this_01;
  FDebugDrawQueue *pFVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStack_318 [32];
  longlong local_2f8;
  longlong local_2f0;
  undefined4 local_2e8;
  FClothVisualizationNoGC *local_2e0;
  FPrimitiveDrawInterface *local_2d8;
  FName *local_2d0;
  FScriptContainerElement *local_2c8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2c0;
  FScriptContainerElement *local_2b0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  double local_270;
  TVector<double>_u_0 local_268;
  double local_250;
  double local_248;
  double local_240;
  undefined4 local_238;
  undefined1 local_230;
  undefined4 local_228;
  byte local_224;
  undefined4 local_220;
  void *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_318;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    local_2e0 = this;
    local_2d8 = param_1;
    local_2d0 = param_2;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      AccessoryColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.R];
      AccessoryColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.G];
      AccessoryColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.B];
      AccessoryColor.field0_0x0._s_0.A = (float)FColor::Turquoise.field0_0x0._3_1_ * __real_3b808081
      ;
      _Init_thread_footer(&::_TSS0);
    }
    iVar12 = (this->Solver->Cloths).ArrayNum;
    pFVar18 = (this->Solver->Cloths).AllocatorInstance.Data;
    local_2c8 = pFVar18;
    if ((iVar12 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_2b0 = pFVar18 + (longlong)iVar12 * 8;
    if (pFVar18 != local_2b0) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar18;
        iVar12 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if ((iVar12 != -1) &&
           (bVar10 = FClothingSimulationCloth::AccessoryMeshExists(this_00,this->Solver,param_2),
           bVar10)) {
          FClothingSimulationCloth::GetAccessoryMeshPositions
                    (this_00,&local_2c0,this->Solver,param_2);
          FClothingSimulationCloth::GetAccessoryMeshNormals(this_00,&local_2a8,this->Solver,param_2)
          ;
          iVar12 = local_2c0.ArrayNum;
          if ((local_2a8.ArrayNum != iVar12) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Normals.Num() == Positions.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0x51e,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar15 = 0;
          lVar16 = 0;
          param_2 = local_2d0;
          if (0 < iVar12) {
            lVar17 = 0;
            do {
              uVar13 = 0;
              if ((int)uVar15 < iVar12) {
                uVar13 = ~uVar15 >> 0x1f;
              }
              if (uVar13 == 0) {
                local_2f0 = (longlong)iVar12;
                local_2f8 = (longlong)(int)uVar15;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              pFVar6 = this->Solver;
              dVar4 = pFVar6->LocalSpaceScale;
              dVar8 = (double)*(float *)(&(local_2c0.DataPtr)->field_0x0 + lVar17) * dVar4 +
                      *(double *)&pFVar6->LocalSpaceLocation;
              dVar9 = (double)*(float *)(&(local_2c0.DataPtr)->field_0x4 + lVar17) * dVar4 +
                      *(double *)&(pFVar6->LocalSpaceLocation).field_0x8;
              dVar4 = (double)*(float *)(&(local_2c0.DataPtr)->field_0x8 + lVar17) * dVar4 +
                      *(double *)&(pFVar6->LocalSpaceLocation).field_0x10;
              uVar13 = 0;
              if ((int)uVar15 < local_2a8.ArrayNum) {
                uVar13 = ~uVar15 >> 0x1f;
              }
              local_270 = dVar4;
              if (uVar13 == 0) {
                local_2f0 = (longlong)local_2a8.ArrayNum;
                local_2f8 = lVar16;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              fVar1 = *(float *)(&(local_2a8.DataPtr)->field_0x0 + lVar17);
              dVar5 = this->Solver->LocalSpaceScale;
              fVar2 = *(float *)(&(local_2a8.DataPtr)->field_0x4 + lVar17);
              fVar3 = *(float *)(&(local_2a8.DataPtr)->field_0x8 + lVar17);
              if (param_1 == (FPrimitiveDrawInterface *)0x0) {
                this_01 = FDebugDrawQueue::GetInstance();
                bVar10 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&AccessoryColor);
                pFVar14 = FDebugDrawQueue::GetInstance();
                param_1 = local_2d8;
                this = local_2e0;
                if ((pFVar14->bEnableDebugDrawing != false) &&
                   (pFVar14 = FDebugDrawQueue::GetInstance(), param_1 = local_2d8, this = local_2e0,
                   0 < pFVar14->NumConsumers)) {
                  lpCriticalSection = &this_01->CommandQueueCS;
                  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  local_288 = local_270;
                  local_298 = dVar8;
                  dStack_290 = dVar9;
                  bVar11 = FDebugDrawQueue::AcceptCommand(this_01,1,(TVector<double,3> *)&local_298)
                  ;
                  if (bVar11) {
                    local_1a0 = (void *)0x0;
                    local_198 = 0;
                    local_190 = 0;
                    local_238 = local_2e8;
                    local_230 = 0;
                    local_228 = 0x38d1b717;
                    local_220 = 0;
                    local_c0 = 1;
                    local_268._s_0.X = dVar8;
                    local_268._s_0.Y = dVar9;
                    local_268._s_0.Z = dVar4;
                    local_250 = (double)fVar1 * dVar5 * param_3 + dVar8;
                    local_248 = (double)fVar2 * dVar5 * param_3 + dVar9;
                    local_240 = (double)fVar3 * dVar5 * param_3 + dVar4;
                    local_224 = -bVar10 & 2;
                    FDebugDrawQueue::AddCommand(this_01,(FLatentDrawCommand *)&local_268._s_0);
                    if (local_1a0 != (void *)0x0) {
                      FMemory::Free(local_1a0);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  param_1 = local_2d8;
                  this = local_2e0;
                }
              }
              uVar15 = uVar15 + 1;
              lVar16 = lVar16 + 1;
              lVar17 = lVar17 + 0xc;
              param_2 = local_2d0;
              pFVar18 = local_2c8;
            } while ((int)uVar15 < iVar12);
          }
        }
        pFVar18 = pFVar18 + 8;
        local_2c8 = pFVar18;
      } while (pFVar18 != local_2b0);
    }
  }
  return;
}

// DrawAnimDrive @ 14dbd5ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawAnimDrive
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FClothingSimulationSolver *pFVar5;
  FClothingSimulationCloth *this_00;
  undefined1 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  FColor_u_0 FVar19;
  FDebugDrawQueue *this_01;
  FDebugDrawQueue *pFVar20;
  uint uVar21;
  undefined1 *puVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  float fVar31;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  undefined4 local_308;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_300;
  undefined8 local_2f0;
  FClothVisualizationNoGC *local_2e8;
  FPrimitiveDrawInterface *local_2e0;
  FScriptContainerElement *local_2d8;
  FLinearColor_u_0 local_2d0;
  FScriptContainerElement *local_2c0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2b8;
  TArrayView<float_const_,int> local_2a8;
  undefined1 local_298 [16];
  double local_288;
  double local_270;
  TVector<double>_u_0 local_268;
  double local_250;
  undefined1 local_248 [16];
  undefined4 local_238;
  undefined1 local_230;
  undefined4 local_228;
  byte local_224;
  undefined4 local_220;
  void *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_338;
  pFVar5 = this->Solver;
  if (pFVar5 != (FClothingSimulationSolver *)0x0) {
    iVar23 = (pFVar5->Cloths).ArrayNum;
    pFVar24 = (pFVar5->Cloths).AllocatorInstance.Data;
    local_2e8 = this;
    local_2e0 = param_1;
    local_2d8 = pFVar24;
    if ((iVar23 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar14 = __real_3b808081;
    local_2c0 = pFVar24 + (longlong)iVar23 * 8;
    if (pFVar24 != local_2c0) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar24;
        uVar18 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (uVar18 != 0xffffffff) {
          pFVar5 = this->Solver;
          if (*(int *)&(pFVar5->ClothsConstraints).field_0x8 !=
              *(int *)&(pFVar5->ClothsConstraints).field_0x34) {
            puVar6 = *(undefined1 **)&(pFVar5->ClothsConstraints).field_0x40;
            puVar22 = &(pFVar5->ClothsConstraints).field_0x38;
            if (puVar6 != (undefined1 *)0x0) {
              puVar22 = puVar6;
            }
            iVar23 = *(int *)(puVar22 +
                             (ulonglong)
                             (*(int *)&(pFVar5->ClothsConstraints).field_0x48 - 1U & uVar18) * 4);
            if (iVar23 != -1) {
              do {
                lVar30 = *(longlong *)&pFVar5->ClothsConstraints + (longlong)iVar23 * 0x18;
                if (*(uint *)(*(longlong *)&pFVar5->ClothsConstraints + (longlong)iVar23 * 0x18) ==
                    uVar18) {
                  if (lVar30 == 0) goto LAB_14dbd5c5e;
                  goto LAB_14dbd5c84;
                }
                iVar23 = *(int *)(lVar30 + 0x10);
              } while (iVar23 != -1);
            }
          }
          lVar30 = 0;
LAB_14dbd5c5e:
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L"");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
LAB_14dbd5c84:
          lVar30 = *(longlong *)(*(longlong *)(lVar30 + 8) + 0xe0);
          if (lVar30 != 0) {
            FClothingSimulationCloth::GetWeightMapByProperty
                      (this_00,&local_2a8,this->Solver,
                       &Softs::FPBDAnimDriveConstraint::AnimDriveStiffnessName);
            FClothingSimulationCloth::GetAnimationPositions(this_00,&local_2b8,this->Solver);
            FClothingSimulationCloth::GetParticlePositions(this_00,&local_300,this->Solver);
            iVar23 = local_300.ArrayNum;
            if ((iVar23 != local_2b8.ArrayNum) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ParticlePositions.Num() == AnimationPositions.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                    ,0x7df,L""), bVar16)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar7 = *(undefined8 *)(lVar30 + 0x40);
            lVar30 = 0;
            uVar18 = 0;
            local_2f0._0_4_ = (float)uVar7;
            fVar15 = (float)local_2f0;
            local_2f0._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
            fVar13 = local_2f0._4_4_ - (float)local_2f0;
            local_2f0 = uVar7;
            if (0 < iVar23) {
              lVar29 = 0;
              uVar26 = (uint)FColor::Cyan.field0_0x0 >> 0x18;
              uVar27 = (uint)FColor::Cyan.field0_0x0 >> 0x10 & 0xff;
              uVar28 = (uint)FColor::Cyan.field0_0x0 >> 8 & 0xff;
              FVar19 = FColor::Cyan.field0_0x0;
              do {
                fVar31 = fVar15;
                if ((-1 < (int)uVar18) && (iVar25 = local_2a8.ArrayNum, (int)uVar18 < iVar25)) {
                  uVar21 = 0;
                  if ((int)uVar18 < iVar25) {
                    uVar21 = ~uVar18 >> 0x1f;
                  }
                  if (uVar21 == 0) {
                    local_310 = (longlong)iVar25;
                    local_318 = (longlong)(int)uVar18;
                    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       );
                    if (bVar16) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar28 = (uint)FColor::Cyan.field0_0x0 >> 8 & 0xff;
                    uVar27 = (uint)FColor::Cyan.field0_0x0 >> 0x10 & 0xff;
                    uVar26 = (uint)FColor::Cyan.field0_0x0 >> 0x18;
                    FVar19 = FColor::Cyan.field0_0x0;
                  }
                  fVar31 = fVar13 * local_2a8.DataPtr[lVar30] + fVar15;
                }
                uVar21 = 0;
                if ((int)uVar18 < local_2b8.ArrayNum) {
                  uVar21 = ~uVar18 >> 0x1f;
                }
                if (uVar21 == 0) {
                  local_310 = (longlong)local_2b8.ArrayNum;
                  local_318 = (longlong)(int)uVar18;
                  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar16) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar28 = (uint)FColor::Cyan.field0_0x0 >> 8 & 0xff;
                  uVar27 = (uint)FColor::Cyan.field0_0x0 >> 0x10 & 0xff;
                  uVar26 = (uint)FColor::Cyan.field0_0x0 >> 0x18;
                  FVar19 = FColor::Cyan.field0_0x0;
                }
                pFVar5 = this->Solver;
                dVar2 = pFVar5->LocalSpaceScale;
                uVar21 = 0;
                if ((int)uVar18 < iVar23) {
                  uVar21 = ~uVar18 >> 0x1f;
                }
                dVar11 = (double)*(float *)(&(local_2b8.DataPtr)->field_0x8 + lVar29) * dVar2 +
                         *(double *)&(pFVar5->LocalSpaceLocation).field_0x10;
                dVar10 = (double)*(float *)(&(local_2b8.DataPtr)->field_0x0 + lVar29) * dVar2 +
                         *(double *)&pFVar5->LocalSpaceLocation;
                dVar2 = (double)*(float *)(&(local_2b8.DataPtr)->field_0x4 + lVar29) * dVar2 +
                        *(double *)&(pFVar5->LocalSpaceLocation).field_0x8;
                local_270 = dVar11;
                if (uVar21 == 0) {
                  local_310 = (longlong)iVar23;
                  local_318 = lVar30;
                  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar16) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar28 = (uint)FColor::Cyan.field0_0x0 >> 8 & 0xff;
                  uVar27 = (uint)FColor::Cyan.field0_0x0 >> 0x10 & 0xff;
                  uVar26 = (uint)FColor::Cyan.field0_0x0 >> 0x18;
                  FVar19 = FColor::Cyan.field0_0x0;
                }
                pFVar5 = this->Solver;
                dVar3 = pFVar5->LocalSpaceScale;
                fVar1 = *(float *)(&(local_300.DataPtr)->field_0x0 + lVar29);
                local_2d0._s_0.R = fVar31 * FLinearColor::sRGBToLinearTable[uVar27];
                local_2d0._s_0.G = fVar31 * FLinearColor::sRGBToLinearTable[uVar28];
                local_2d0._s_0.B = fVar31 * FLinearColor::sRGBToLinearTable[FVar19.Bits & 0xff];
                dVar4 = *(double *)&pFVar5->LocalSpaceLocation;
                local_2d0._s_0.A = (float)uVar26 * fVar14 * fVar31;
                uVar7 = *(undefined8 *)(&(local_300.DataPtr)->field_0x4 + lVar29);
                dVar12 = *(double *)&(pFVar5->LocalSpaceLocation).field_0x8;
                dVar9 = (double)(float)((ulonglong)uVar7 >> 0x20) * dVar3 +
                        *(double *)&(pFVar5->LocalSpaceLocation).field_0x10;
                if (param_1 == (FPrimitiveDrawInterface *)0x0) {
                  this_01 = FDebugDrawQueue::GetInstance();
                  bVar16 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB((FLinearColor *)&local_2d0._s_0);
                  pFVar20 = FDebugDrawQueue::GetInstance();
                  if ((pFVar20->bEnableDebugDrawing != false) &&
                     (pFVar20 = FDebugDrawQueue::GetInstance(), 0 < pFVar20->NumConsumers)) {
                    lpCriticalSection = &this_01->CommandQueueCS;
                    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    local_298._8_4_ = SUB84(dVar2,0);
                    local_298._0_8_ = dVar10;
                    local_298._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
                    local_288 = local_270;
                    bVar17 = FDebugDrawQueue::AcceptCommand
                                       (this_01,1,(TVector<double,3> *)local_298);
                    if (bVar17) {
                      local_1a0 = (void *)0x0;
                      local_198 = 0;
                      local_190 = 0;
                      local_238 = local_308;
                      local_248._8_4_ = SUB84(dVar9,0);
                      local_248._0_8_ = (double)(float)uVar7 * dVar3 + dVar12;
                      local_248._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                      local_230 = 0;
                      local_228 = 0x38d1b717;
                      local_220 = 0;
                      local_c0 = 1;
                      local_268._s_0.X = dVar10;
                      local_268._s_0.Y = dVar2;
                      local_268._s_0.Z = dVar11;
                      local_250 = (double)fVar1 * dVar3 + dVar4;
                      local_224 = -bVar16 & 2;
                      FDebugDrawQueue::AddCommand(this_01,(FLatentDrawCommand *)&local_268._s_0);
                      if (local_1a0 != (void *)0x0) {
                        FMemory::Free(local_1a0);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  }
                  uVar28 = (uint)FColor::Cyan.field0_0x0 >> 8 & 0xff;
                  uVar27 = (uint)FColor::Cyan.field0_0x0 >> 0x10 & 0xff;
                  uVar26 = (uint)FColor::Cyan.field0_0x0 >> 0x18;
                  this = local_2e8;
                  param_1 = local_2e0;
                  FVar19 = FColor::Cyan.field0_0x0;
                }
                uVar18 = uVar18 + 1;
                lVar30 = lVar30 + 1;
                lVar29 = lVar29 + 0xc;
              } while ((int)uVar18 < iVar23);
            }
          }
        }
        pFVar24 = local_2d8 + 8;
        local_2d8 = pFVar24;
      } while (pFVar24 != local_2c0);
    }
  }
  return;
}

// DrawAnimMeshWired @ 14dbd61d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawAnimMeshWired
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FClothingSimulationCloth *this_00;
  FClothingSimulationSolver *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FTriangleMesh *pFVar17;
  FDebugDrawQueue *pFVar18;
  FDebugDrawQueue *pFVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 auStack_6e8 [32];
  ulonglong local_6c8;
  longlong local_6c0;
  int local_6b8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_6b0;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  FClothVisualizationNoGC *local_690;
  FScriptContainerElement *local_688;
  FPrimitiveDrawInterface *local_680;
  FScriptContainerElement *local_678;
  double local_670;
  double dStack_668;
  double local_660;
  double local_658;
  double dStack_650;
  double local_648;
  double local_640;
  double dStack_638;
  double local_630;
  double local_618;
  double local_600;
  double local_5e8;
  TVector<double>_u_0 local_5d8;
  double local_5c0;
  double local_5b8;
  double local_5b0;
  undefined4 local_5a8;
  undefined1 local_5a0;
  undefined4 local_598;
  byte local_594;
  undefined4 local_590;
  void *local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined4 local_430;
  TVector<double>_u_0 local_428;
  double local_410;
  double local_408;
  double local_400;
  undefined4 local_3f8;
  undefined1 local_3f0;
  undefined4 local_3e8;
  byte local_3e4;
  undefined4 local_3e0;
  void *local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_280;
  TVector<double>_u_0 local_278;
  double local_260;
  double local_258;
  double local_250;
  undefined4 local_248;
  undefined1 local_240;
  undefined4 local_238;
  byte local_234;
  undefined4 local_230;
  void *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_6e8;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    local_690 = this;
    local_680 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      KinematicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
      KinematicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
      KinematicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
      KinematicColor.field0_0x0._s_0.A = (float)FColor::Purple.field0_0x0._3_1_ * __real_3b808081;
      _Init_thread_footer(&::_TSS0);
    }
    iVar16 = (this->Solver->Cloths).ArrayNum;
    pFVar24 = (this->Solver->Cloths).AllocatorInstance.Data;
    local_688 = pFVar24;
    if ((iVar16 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_678 = pFVar24 + (longlong)iVar16 * 8;
    if (pFVar24 != local_678) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar24;
        iVar16 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (iVar16 != -1) {
          iVar22 = 0;
          if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
            iVar22 = iVar16;
          }
          local_6b8 = iVar22;
          pFVar17 = FClothingSimulationCloth::GetTriangleMesh(this_00,this->Solver);
          iVar16 = (pFVar17->MElements).ArrayNum;
          pFVar23 = (pFVar17->MElements).AllocatorInstance.Data;
          if ((iVar16 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FClothingSimulationCloth::GetAnimationPositions(this_00,&local_6b0,this->Solver);
          iVar13 = local_6b0.ArrayNum;
          uVar26 = 0;
          if (0 < iVar16) {
            pFVar23 = pFVar23 + 8;
            do {
              if (((int)uVar26 < 0) &&
                 (local_6c8 = uVar26, local_6c0 = (longlong)iVar16,
                 bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar20 = *(int *)(pFVar23 + -8) - iVar22;
              uVar25 = 0;
              if ((int)uVar20 < iVar13) {
                uVar25 = ~uVar20 >> 0x1f;
              }
              if (uVar25 == 0) {
                local_6c0 = (longlong)iVar13;
                local_6c8 = (ulonglong)(int)uVar20;
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar14) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pFVar5 = this->Solver;
              uVar21 = *(int *)(pFVar23 + -4) - iVar22;
              dVar2 = pFVar5->LocalSpaceScale;
              uVar25 = 0;
              if ((int)uVar21 < iVar13) {
                uVar25 = ~uVar21 >> 0x1f;
              }
              dVar12 = (double)*(float *)&local_6b0.DataPtr[(int)uVar20].field_0x8 * dVar2 +
                       *(double *)&(pFVar5->LocalSpaceLocation).field_0x10;
              dVar11 = (double)*(float *)(local_6b0.DataPtr + (int)uVar20) * dVar2 +
                       *(double *)&pFVar5->LocalSpaceLocation;
              dVar2 = (double)*(float *)&local_6b0.DataPtr[(int)uVar20].field_0x4 * dVar2 +
                      *(double *)&(pFVar5->LocalSpaceLocation).field_0x8;
              local_618 = dVar12;
              if (uVar25 == 0) {
                local_6c0 = (longlong)iVar13;
                local_6c8 = (ulonglong)(int)uVar21;
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar14) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pFVar5 = this->Solver;
              uVar20 = *(int *)pFVar23 - iVar22;
              dVar3 = pFVar5->LocalSpaceScale;
              uVar25 = 0;
              if ((int)uVar20 < iVar13) {
                uVar25 = ~uVar20 >> 0x1f;
              }
              dVar10 = (double)*(float *)&local_6b0.DataPtr[(int)uVar21].field_0x8 * dVar3 +
                       *(double *)&(pFVar5->LocalSpaceLocation).field_0x10;
              dVar9 = (double)*(float *)(local_6b0.DataPtr + (int)uVar21) * dVar3 +
                      *(double *)&pFVar5->LocalSpaceLocation;
              dVar3 = (double)*(float *)&local_6b0.DataPtr[(int)uVar21].field_0x4 * dVar3 +
                      *(double *)&(pFVar5->LocalSpaceLocation).field_0x8;
              local_600 = dVar10;
              if (uVar25 == 0) {
                local_6c0 = (longlong)iVar13;
                local_6c8 = (ulonglong)(int)uVar20;
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar14) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pFVar5 = this->Solver;
              dVar4 = pFVar5->LocalSpaceScale;
              dVar8 = (double)*(float *)&local_6b0.DataPtr[(int)uVar20].field_0x8 * dVar4 +
                      *(double *)&(pFVar5->LocalSpaceLocation).field_0x10;
              dVar7 = (double)*(float *)(local_6b0.DataPtr + (int)uVar20) * dVar4 +
                      *(double *)&pFVar5->LocalSpaceLocation;
              dVar4 = (double)*(float *)&local_6b0.DataPtr[(int)uVar20].field_0x4 * dVar4 +
                      *(double *)&(pFVar5->LocalSpaceLocation).field_0x8;
              local_5e8 = dVar8;
              if (local_680 == (FPrimitiveDrawInterface *)0x0) {
                pFVar18 = FDebugDrawQueue::GetInstance();
                bVar14 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&KinematicColor);
                pFVar19 = FDebugDrawQueue::GetInstance();
                if ((pFVar19->bEnableDebugDrawing != false) &&
                   (pFVar19 = FDebugDrawQueue::GetInstance(), 0 < pFVar19->NumConsumers)) {
                  pFVar1 = &pFVar18->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_660 = local_618;
                  local_670 = dVar11;
                  dStack_668 = dVar2;
                  bVar15 = FDebugDrawQueue::AcceptCommand(pFVar18,1,(TVector<double,3> *)&local_670)
                  ;
                  if (bVar15) {
                    local_510 = (void *)0x0;
                    local_508 = 0;
                    local_500 = 0;
                    local_5a8 = local_6a0;
                    local_5a0 = 0;
                    local_598 = 0x38d1b717;
                    local_590 = 0;
                    local_430 = 1;
                    local_5d8._s_0.X = dVar11;
                    local_5d8._s_0.Y = dVar2;
                    local_5d8._s_0.Z = dVar12;
                    local_5c0 = dVar9;
                    local_5b8 = dVar3;
                    local_5b0 = dVar10;
                    local_594 = -bVar14 & 2;
                    FDebugDrawQueue::AddCommand(pFVar18,(FLatentDrawCommand *)&local_5d8._s_0);
                    if (local_510 != (void *)0x0) {
                      FMemory::Free(local_510);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
                pFVar18 = FDebugDrawQueue::GetInstance();
                bVar14 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&KinematicColor);
                pFVar19 = FDebugDrawQueue::GetInstance();
                if ((pFVar19->bEnableDebugDrawing != false) &&
                   (pFVar19 = FDebugDrawQueue::GetInstance(), 0 < pFVar19->NumConsumers)) {
                  pFVar1 = &pFVar18->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_648 = local_600;
                  local_658 = dVar9;
                  dStack_650 = dVar3;
                  bVar15 = FDebugDrawQueue::AcceptCommand(pFVar18,1,(TVector<double,3> *)&local_658)
                  ;
                  if (bVar15) {
                    local_360 = (void *)0x0;
                    local_358 = 0;
                    local_350 = 0;
                    local_3f8 = local_69c;
                    local_3f0 = 0;
                    local_3e8 = 0x38d1b717;
                    local_3e0 = 0;
                    local_280 = 1;
                    local_428._s_0.X = dVar9;
                    local_428._s_0.Y = dVar3;
                    local_428._s_0.Z = dVar10;
                    local_410 = dVar7;
                    local_408 = dVar4;
                    local_400 = dVar8;
                    local_3e4 = -bVar14 & 2;
                    FDebugDrawQueue::AddCommand(pFVar18,(FLatentDrawCommand *)&local_428._s_0);
                    if (local_360 != (void *)0x0) {
                      FMemory::Free(local_360);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
                pFVar18 = FDebugDrawQueue::GetInstance();
                bVar14 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&KinematicColor);
                pFVar19 = FDebugDrawQueue::GetInstance();
                this = local_690;
                iVar22 = local_6b8;
                if ((pFVar19->bEnableDebugDrawing != false) &&
                   (pFVar19 = FDebugDrawQueue::GetInstance(), this = local_690, iVar22 = local_6b8,
                   0 < pFVar19->NumConsumers)) {
                  pFVar1 = &pFVar18->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_630 = local_5e8;
                  local_640 = dVar7;
                  dStack_638 = dVar4;
                  bVar15 = FDebugDrawQueue::AcceptCommand(pFVar18,1,(TVector<double,3> *)&local_640)
                  ;
                  if (bVar15) {
                    local_1b0 = (void *)0x0;
                    local_1a8 = 0;
                    local_1a0 = 0;
                    local_248 = local_698;
                    local_240 = 0;
                    local_238 = 0x38d1b717;
                    local_230 = 0;
                    local_d0 = 1;
                    local_278._s_0.X = dVar7;
                    local_278._s_0.Y = dVar4;
                    local_278._s_0.Z = dVar8;
                    local_260 = dVar11;
                    local_258 = dVar2;
                    local_250 = dVar12;
                    local_234 = -bVar14 & 2;
                    FDebugDrawQueue::AddCommand(pFVar18,(FLatentDrawCommand *)&local_278._s_0);
                    if (local_1b0 != (void *)0x0) {
                      FMemory::Free(local_1b0);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  this = local_690;
                  iVar22 = local_6b8;
                }
              }
              uVar25 = (int)uVar26 + 1;
              uVar26 = (ulonglong)uVar25;
              pFVar23 = pFVar23 + 0xc;
              pFVar24 = local_688;
            } while ((int)uVar25 < iVar16);
          }
        }
        pFVar24 = pFVar24 + 8;
        local_688 = pFVar24;
      } while (pFVar24 != local_678);
    }
  }
  return;
}

// DrawAnimNormals @ 14dbd6b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawAnimNormals
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1,double param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  FClothingSimulationCloth *this_00;
  FClothingSimulationSolver *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FDebugDrawQueue *this_01;
  FDebugDrawQueue *pFVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  longlong local_2e0;
  undefined4 local_2d8;
  FClothVisualizationNoGC *local_2d0;
  FPrimitiveDrawInterface *local_2c8;
  FScriptContainerElement *local_2c0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2b8;
  FScriptContainerElement *local_2a8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2a0;
  double local_290;
  double dStack_288;
  double local_280;
  double local_268;
  TVector<double>_u_0 local_258;
  double local_240;
  double local_238;
  double local_230;
  undefined4 local_228;
  undefined1 local_220;
  undefined4 local_218;
  byte local_214;
  undefined4 local_210;
  void *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_308;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    local_2d0 = this;
    local_2c8 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      KinematicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Magenta.field0_0x0._s_0.R];
      KinematicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Magenta.field0_0x0._s_0.G];
      KinematicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Magenta.field0_0x0._s_0.B];
      KinematicColor.field0_0x0._s_0.A = (float)FColor::Magenta.field0_0x0._3_1_ * __real_3b808081;
      _Init_thread_footer(&::_TSS0);
    }
    iVar12 = (this->Solver->Cloths).ArrayNum;
    pFVar18 = (this->Solver->Cloths).AllocatorInstance.Data;
    local_2c0 = pFVar18;
    if ((iVar12 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_2a8 = pFVar18 + (longlong)iVar12 * 8;
    if (pFVar18 != local_2a8) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar18;
        iVar12 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (iVar12 != -1) {
          FClothingSimulationCloth::GetAnimationPositions(this_00,&local_2b8,this->Solver);
          FClothingSimulationCloth::GetAnimationNormals(this_00,&local_2a0,this->Solver);
          iVar12 = local_2b8.ArrayNum;
          if ((local_2a0.ArrayNum != iVar12) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Normals.Num() == Positions.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0x5bf,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar15 = 0;
          lVar16 = 0;
          if (0 < iVar12) {
            lVar17 = 0;
            do {
              uVar13 = 0;
              if ((int)uVar15 < iVar12) {
                uVar13 = ~uVar15 >> 0x1f;
              }
              if (uVar13 == 0) {
                local_2e0 = (longlong)iVar12;
                local_2e8 = (longlong)(int)uVar15;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              pFVar6 = this->Solver;
              dVar4 = pFVar6->LocalSpaceScale;
              dVar8 = (double)*(float *)(&(local_2b8.DataPtr)->field_0x0 + lVar17) * dVar4 +
                      *(double *)&pFVar6->LocalSpaceLocation;
              dVar9 = (double)*(float *)(&(local_2b8.DataPtr)->field_0x4 + lVar17) * dVar4 +
                      *(double *)&(pFVar6->LocalSpaceLocation).field_0x8;
              dVar4 = (double)*(float *)(&(local_2b8.DataPtr)->field_0x8 + lVar17) * dVar4 +
                      *(double *)&(pFVar6->LocalSpaceLocation).field_0x10;
              uVar13 = 0;
              if ((int)uVar15 < local_2a0.ArrayNum) {
                uVar13 = ~uVar15 >> 0x1f;
              }
              local_268 = dVar4;
              if (uVar13 == 0) {
                local_2e0 = (longlong)local_2a0.ArrayNum;
                local_2e8 = lVar16;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              fVar1 = *(float *)(&(local_2a0.DataPtr)->field_0x0 + lVar17);
              dVar5 = this->Solver->LocalSpaceScale;
              fVar2 = *(float *)(&(local_2a0.DataPtr)->field_0x4 + lVar17);
              fVar3 = *(float *)(&(local_2a0.DataPtr)->field_0x8 + lVar17);
              if (param_1 == (FPrimitiveDrawInterface *)0x0) {
                this_01 = FDebugDrawQueue::GetInstance();
                bVar10 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&KinematicColor);
                pFVar14 = FDebugDrawQueue::GetInstance();
                param_1 = local_2c8;
                this = local_2d0;
                if ((pFVar14->bEnableDebugDrawing != false) &&
                   (pFVar14 = FDebugDrawQueue::GetInstance(), param_1 = local_2c8, this = local_2d0,
                   0 < pFVar14->NumConsumers)) {
                  lpCriticalSection = &this_01->CommandQueueCS;
                  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  local_280 = local_268;
                  local_290 = dVar8;
                  dStack_288 = dVar9;
                  bVar11 = FDebugDrawQueue::AcceptCommand(this_01,1,(TVector<double,3> *)&local_290)
                  ;
                  if (bVar11) {
                    local_190 = (void *)0x0;
                    local_188 = 0;
                    local_180 = 0;
                    local_228 = local_2d8;
                    local_220 = 0;
                    local_218 = 0x38d1b717;
                    local_210 = 0;
                    local_b0 = 1;
                    local_258._s_0.X = dVar8;
                    local_258._s_0.Y = dVar9;
                    local_258._s_0.Z = dVar4;
                    local_240 = (double)fVar1 * dVar5 * param_2 + dVar8;
                    local_238 = (double)fVar2 * dVar5 * param_2 + dVar9;
                    local_230 = (double)fVar3 * dVar5 * param_2 + dVar4;
                    local_214 = -bVar10 & 2;
                    FDebugDrawQueue::AddCommand(this_01,(FLatentDrawCommand *)&local_258._s_0);
                    if (local_190 != (void *)0x0) {
                      FMemory::Free(local_190);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  param_1 = local_2c8;
                  this = local_2d0;
                }
              }
              uVar15 = uVar15 + 1;
              lVar16 = lVar16 + 1;
              lVar17 = lVar17 + 0xc;
              pFVar18 = local_2c0;
            } while ((int)uVar15 < iVar12);
          }
        }
        pFVar18 = pFVar18 + 8;
        local_2c0 = pFVar18;
      } while (pFVar18 != local_2a8);
    }
  }
  return;
}

// DrawAnimVelocities @ 14dbd7060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawAnimVelocities
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  FClothingSimulationCloth *this_00;
  FClothingSimulationSolver *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  TVector<float,3> *pTVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar23;
  FDebugDrawQueue *pFVar24;
  FDebugDrawQueue *pFVar25;
  FTriangleMesh *pFVar26;
  uint uVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  int iVar31;
  float *pfVar32;
  FScriptContainerElement *pFVar33;
  undefined1 auStackY_8d8 [32];
  TArrayView<Chaos::TVector<float,3>_const_,int> local_860;
  FClothingSimulationCloth *local_850;
  FScriptContainerElement *local_848;
  double local_830;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_828;
  double local_818;
  double dStack_810;
  double local_808;
  double local_800;
  double dStack_7f8;
  double local_7f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double local_7d0;
  double dStack_7c8;
  double local_7c0;
  double local_7a8;
  double local_790;
  TVector<double>_u_0 local_788;
  double local_770;
  double local_768;
  double local_760;
  undefined1 local_750;
  undefined4 local_748;
  byte local_744;
  undefined4 local_740;
  void *local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined4 local_5e0;
  TVector<double>_u_0 local_5d8;
  double local_5c0;
  double local_5b8;
  double local_5b0;
  undefined1 local_5a0;
  undefined4 local_598;
  byte local_594;
  undefined4 local_590;
  void *local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined4 local_430;
  TVector<double>_u_0 local_428;
  double local_410;
  double local_408;
  double local_400;
  undefined1 local_3f0;
  undefined4 local_3e8;
  byte local_3e4;
  undefined4 local_3e0;
  void *local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_280;
  TVector<double>_u_0 local_278;
  double local_260;
  double local_258;
  double local_250;
  undefined1 local_240;
  undefined4 local_238;
  byte local_234;
  undefined4 local_230;
  void *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar10 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      KinematicColor.field0_0x0._s_0.G = FLinearColor::Black.field0_0x0._s_0.G;
      KinematicColor.field0_0x0._s_0.R = FLinearColor::Black.field0_0x0._s_0.R;
      KinematicColor.field0_0x0._s_0.B = FLinearColor::Black.field0_0x0._s_0.B;
      KinematicColor.field0_0x0._s_0.A = FLinearColor::Black.field0_0x0._s_0.A;
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar10 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      KinematicMeshColor.field0_0x0._s_0.R =
           (FLinearColor::Black.field0_0x0._s_0.R +
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R]) * __real_3f000000;
      KinematicMeshColor.field0_0x0._s_0.G =
           (FLinearColor::Black.field0_0x0._s_0.G +
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G]) * __real_3f000000;
      KinematicMeshColor.field0_0x0._s_0.B =
           (FLinearColor::Black.field0_0x0._s_0.B +
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B]) * __real_3f000000;
      KinematicMeshColor.field0_0x0._s_0.A =
           ((float)FColor::Purple.field0_0x0._3_1_ * __real_3b808081 +
           FLinearColor::Black.field0_0x0._s_0.A) * __real_3f000000;
      _Init_thread_footer(&::_TSS1);
    }
    iVar20 = (this->Solver->Cloths).ArrayNum;
    pFVar29 = (this->Solver->Cloths).AllocatorInstance.Data;
    if ((iVar20 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar18)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_848 = pFVar29 + (longlong)iVar20 * 8;
    if (pFVar29 != local_848) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar29;
        local_850 = this_00;
        iVar20 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (iVar20 != -1) {
          FClothingSimulationCloth::GetAnimationPositions(this_00,&local_860,this->Solver);
          pFVar11 = this->Solver;
          if ((pFVar11 == (FClothingSimulationSolver *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Solver",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                                  ,0x531,L""), bVar18)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar23 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                            *)&this_00->LODIndices,pFVar11);
          if ((pTVar23 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L""), bVar18)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar22 = *(int *)&pTVar23->field_0x8;
          iVar21 = FClothingSimulationCloth::GetParticleRangeId(this_00,pFVar11,iVar22);
          if ((iVar21 == -1) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GetParticleRangeId(Solver, LODIndex) != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                                  ,0x533,L""), bVar18)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar21 = FClothingSimulationCloth::GetNumParticles(this_00,iVar22);
          iVar22 = FClothingSimulationCloth::GetParticleRangeId(this_00,pFVar11,iVar22);
          Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
                    (&local_828,&pFVar11->Evolution,&pFVar11->PBDEvolution,iVar22,
                     (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                     &(pFVar11->OldAnimationPositions).field_0x8);
          pTVar17 = local_828.DataPtr;
          if ((iVar21 < 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar18)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar22 = local_860.ArrayNum;
          uVar30 = 0;
          if (0 < local_860.ArrayNum) {
            pfVar32 = (float *)&pTVar17->field_0x8;
            do {
              uVar27 = 0;
              if ((int)uVar30 < iVar22) {
                uVar27 = ~uVar30 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar18)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              lVar10 = (-8 - (longlong)pTVar17) + (longlong)pfVar32;
              pFVar11 = this->Solver;
              uVar27 = 0;
              if ((int)uVar30 < iVar21) {
                uVar27 = ~uVar30 >> 0x1f;
              }
              dVar5 = pFVar11->LocalSpaceScale;
              dVar16 = (double)*(float *)(lVar10 + 8 + (longlong)local_860.DataPtr) * dVar5 +
                       *(double *)&(pFVar11->LocalSpaceLocation).field_0x10;
              dVar15 = (double)*(float *)(lVar10 + (longlong)local_860.DataPtr) * dVar5 +
                       *(double *)&pFVar11->LocalSpaceLocation;
              dVar5 = (double)*(float *)(lVar10 + 4 + (longlong)local_860.DataPtr) * dVar5 +
                      *(double *)&(pFVar11->LocalSpaceLocation).field_0x8;
              local_830 = dVar16;
              if ((uVar27 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar18)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              fVar2 = pfVar32[-2];
              fVar3 = pfVar32[-1];
              fVar4 = *pfVar32;
              pFVar11 = this->Solver;
              dVar6 = pFVar11->LocalSpaceScale;
              dVar7 = *(double *)&pFVar11->LocalSpaceLocation;
              dVar8 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x8;
              dVar9 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x10;
              if (param_1 == (FPrimitiveDrawInterface *)0x0) {
                pFVar24 = FDebugDrawQueue::GetInstance();
                bVar18 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&KinematicColor);
                pFVar25 = FDebugDrawQueue::GetInstance();
                if ((pFVar25->bEnableDebugDrawing != false) &&
                   (pFVar25 = FDebugDrawQueue::GetInstance(), 0 < pFVar25->NumConsumers)) {
                  pFVar1 = &pFVar24->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_808 = local_830;
                  local_818 = dVar15;
                  dStack_810 = dVar5;
                  bVar19 = FDebugDrawQueue::AcceptCommand(pFVar24,1,(TVector<double,3> *)&local_818)
                  ;
                  if (bVar19) {
                    local_6c0 = (void *)0x0;
                    local_6b8 = 0;
                    local_6b0 = 0;
                    local_750 = 0;
                    local_748 = 0x38d1b717;
                    local_740 = 0;
                    local_5e0 = 1;
                    local_788._s_0.X = dVar15;
                    local_788._s_0.Y = dVar5;
                    local_788._s_0.Z = dVar16;
                    local_770 = (double)fVar2 * dVar6 + dVar7;
                    local_768 = (double)fVar3 * dVar6 + dVar8;
                    local_760 = (double)fVar4 * dVar6 + dVar9;
                    local_744 = -bVar18 & 2;
                    FDebugDrawQueue::AddCommand(pFVar24,(FLatentDrawCommand *)&local_788._s_0);
                    if (local_6c0 != (void *)0x0) {
                      FMemory::Free(local_6c0);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
              }
              uVar30 = uVar30 + 1;
              pfVar32 = pfVar32 + 3;
            } while ((int)uVar30 < iVar22);
          }
          iVar22 = 0;
          if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
            iVar22 = iVar20;
          }
          pFVar26 = FClothingSimulationCloth::GetTriangleMesh(local_850,this->Solver);
          iVar20 = (pFVar26->MElements).ArrayNum;
          pFVar33 = (pFVar26->MElements).AllocatorInstance.Data;
          if ((iVar20 < 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar18)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar31 = 0;
          if (0 < iVar20) {
            pFVar33 = pFVar33 + 8;
            do {
              if ((iVar31 < 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar18)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar27 = *(int *)(pFVar33 + -8) - iVar22;
              uVar30 = 0;
              if ((int)uVar27 < iVar21) {
                uVar30 = ~uVar27 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar18)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar28 = *(int *)(pFVar33 + -4) - iVar22;
              pFVar11 = this->Solver;
              dVar5 = pFVar11->LocalSpaceScale;
              dVar15 = (double)*(float *)(pTVar17 + (int)uVar27) * dVar5 +
                       *(double *)&pFVar11->LocalSpaceLocation;
              dVar16 = (double)*(float *)&pTVar17[(int)uVar27].field_0x4 * dVar5 +
                       *(double *)&(pFVar11->LocalSpaceLocation).field_0x8;
              dVar5 = (double)*(float *)&pTVar17[(int)uVar27].field_0x8 * dVar5 +
                      *(double *)&(pFVar11->LocalSpaceLocation).field_0x10;
              uVar30 = 0;
              if ((int)uVar28 < iVar21) {
                uVar30 = ~uVar28 >> 0x1f;
              }
              local_830 = dVar5;
              if ((uVar30 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar18)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar27 = *(int *)pFVar33 - iVar22;
              pFVar11 = this->Solver;
              dVar6 = pFVar11->LocalSpaceScale;
              dVar7 = (double)*(float *)(pTVar17 + (int)uVar28) * dVar6 +
                      *(double *)&pFVar11->LocalSpaceLocation;
              dVar8 = (double)*(float *)&pTVar17[(int)uVar28].field_0x4 * dVar6 +
                      *(double *)&(pFVar11->LocalSpaceLocation).field_0x8;
              dVar6 = (double)*(float *)&pTVar17[(int)uVar28].field_0x8 * dVar6 +
                      *(double *)&(pFVar11->LocalSpaceLocation).field_0x10;
              uVar30 = 0;
              if ((int)uVar27 < iVar21) {
                uVar30 = ~uVar27 >> 0x1f;
              }
              local_7a8 = dVar6;
              if ((uVar30 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar18)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar11 = this->Solver;
              dVar9 = pFVar11->LocalSpaceScale;
              dVar14 = (double)*(float *)&pTVar17[(int)uVar27].field_0x8 * dVar9 +
                       *(double *)&(pFVar11->LocalSpaceLocation).field_0x10;
              dVar13 = (double)*(float *)(pTVar17 + (int)uVar27) * dVar9 +
                       *(double *)&pFVar11->LocalSpaceLocation;
              dVar9 = (double)*(float *)&pTVar17[(int)uVar27].field_0x4 * dVar9 +
                      *(double *)&(pFVar11->LocalSpaceLocation).field_0x8;
              local_790 = dVar14;
              if (param_1 == (FPrimitiveDrawInterface *)0x0) {
                pFVar24 = FDebugDrawQueue::GetInstance();
                bVar18 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&KinematicMeshColor);
                pFVar25 = FDebugDrawQueue::GetInstance();
                if ((pFVar25->bEnableDebugDrawing != false) &&
                   (pFVar25 = FDebugDrawQueue::GetInstance(), 0 < pFVar25->NumConsumers)) {
                  pFVar1 = &pFVar24->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_7f0 = local_830;
                  local_800 = dVar15;
                  dStack_7f8 = dVar16;
                  bVar19 = FDebugDrawQueue::AcceptCommand(pFVar24,1,(TVector<double,3> *)&local_800)
                  ;
                  if (bVar19) {
                    local_510 = (void *)0x0;
                    local_508 = 0;
                    local_500 = 0;
                    local_5a0 = 0;
                    local_598 = 0x38d1b717;
                    local_590 = 0;
                    local_430 = 1;
                    local_5d8._s_0.X = dVar15;
                    local_5d8._s_0.Y = dVar16;
                    local_5d8._s_0.Z = dVar5;
                    local_5c0 = dVar7;
                    local_5b8 = dVar8;
                    local_5b0 = dVar6;
                    local_594 = -bVar18 & 2;
                    FDebugDrawQueue::AddCommand(pFVar24,(FLatentDrawCommand *)&local_5d8._s_0);
                    if (local_510 != (void *)0x0) {
                      FMemory::Free(local_510);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
                pFVar24 = FDebugDrawQueue::GetInstance();
                bVar18 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&KinematicMeshColor);
                pFVar25 = FDebugDrawQueue::GetInstance();
                if ((pFVar25->bEnableDebugDrawing != false) &&
                   (pFVar25 = FDebugDrawQueue::GetInstance(), 0 < pFVar25->NumConsumers)) {
                  pFVar1 = &pFVar24->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_7d8 = local_7a8;
                  local_7e8 = dVar7;
                  dStack_7e0 = dVar8;
                  bVar19 = FDebugDrawQueue::AcceptCommand(pFVar24,1,(TVector<double,3> *)&local_7e8)
                  ;
                  if (bVar19) {
                    local_360 = (void *)0x0;
                    local_358 = 0;
                    local_350 = 0;
                    local_3f0 = 0;
                    local_3e8 = 0x38d1b717;
                    local_3e0 = 0;
                    local_280 = 1;
                    local_428._s_0.X = dVar7;
                    local_428._s_0.Y = dVar8;
                    local_428._s_0.Z = dVar6;
                    local_410 = dVar13;
                    local_408 = dVar9;
                    local_400 = dVar14;
                    local_3e4 = -bVar18 & 2;
                    FDebugDrawQueue::AddCommand(pFVar24,(FLatentDrawCommand *)&local_428._s_0);
                    if (local_360 != (void *)0x0) {
                      FMemory::Free(local_360);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
                pFVar24 = FDebugDrawQueue::GetInstance();
                bVar18 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&KinematicMeshColor);
                pFVar25 = FDebugDrawQueue::GetInstance();
                if ((pFVar25->bEnableDebugDrawing != false) &&
                   (pFVar25 = FDebugDrawQueue::GetInstance(), 0 < pFVar25->NumConsumers)) {
                  pFVar1 = &pFVar24->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_7c0 = local_790;
                  local_7d0 = dVar13;
                  dStack_7c8 = dVar9;
                  bVar19 = FDebugDrawQueue::AcceptCommand(pFVar24,1,(TVector<double,3> *)&local_7d0)
                  ;
                  if (bVar19) {
                    local_1b0 = (void *)0x0;
                    local_1a8 = 0;
                    local_1a0 = 0;
                    local_240 = 0;
                    local_238 = 0x38d1b717;
                    local_230 = 0;
                    local_d0 = 1;
                    local_278._s_0.X = dVar13;
                    local_278._s_0.Y = dVar9;
                    local_278._s_0.Z = dVar14;
                    local_260 = dVar15;
                    local_258 = dVar16;
                    local_250 = dVar5;
                    local_234 = -bVar18 & 2;
                    FDebugDrawQueue::AddCommand(pFVar24,(FLatentDrawCommand *)&local_278._s_0);
                    if (local_1b0 != (void *)0x0) {
                      FMemory::Free(local_1b0);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
              }
              iVar31 = iVar31 + 1;
              pFVar33 = pFVar33 + 0xc;
            } while (iVar31 < iVar20);
          }
        }
        pFVar29 = pFVar29 + 8;
      } while (pFVar29 != local_848);
    }
  }
  return;
}

// DrawBackstopDistances @ 14dbd8c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawBackstopDistances
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FClothingSimulationSolver *pFVar7;
  FClothingSimulationCloth *this_00;
  undefined1 *puVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  FString *pFVar19;
  FName *pFVar20;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar21;
  float *pfVar22;
  FDebugDrawQueue *this_01;
  FDebugDrawQueue *pFVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uchar uVar27;
  FScriptContainerElement *pFVar28;
  float *pfVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  int iVar34;
  undefined1 auStack_398 [32];
  longlong local_378;
  longlong local_370;
  uchar local_368;
  char local_367;
  int local_364;
  undefined4 local_360;
  FName local_358;
  FClothVisualizationNoGC *local_350;
  longlong local_348;
  FScriptContainerElement *local_340;
  longlong local_338;
  FPrimitiveDrawInterface *local_330;
  FScriptContainerElement *local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  int iStack_318;
  undefined4 uStack_314;
  TVector<float,3> *local_310;
  undefined8 uStack_308;
  double local_300;
  FName local_2f8;
  FString local_2f0;
  FLinearColor local_2e0;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2b8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2a8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_298;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_288;
  FLinearColor local_278;
  TVector<double>_u_0 local_268;
  double local_250;
  double local_248;
  double local_240;
  undefined4 local_238;
  undefined1 local_230;
  undefined4 local_228;
  byte local_224;
  undefined4 local_220;
  void *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_398;
  pFVar7 = this->Solver;
  if (pFVar7 != (FClothingSimulationSolver *)0x0) {
    iVar34 = (pFVar7->Cloths).ArrayNum;
    pFVar28 = (pFVar7->Cloths).AllocatorInstance.Data;
    local_368 = '\0';
    local_350 = this;
    local_340 = pFVar28;
    local_330 = param_1;
    if ((iVar34 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_328 = pFVar28 + (longlong)iVar34 * 8;
    if (pFVar28 != local_328) {
      do {
        uVar26 = 0;
        this_00 = *(FClothingSimulationCloth **)pFVar28;
        uVar17 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (uVar17 != 0xffffffff) {
          pFVar7 = this->Solver;
          uVar25 = uVar26;
          if (*(int *)&(pFVar7->ClothsConstraints).field_0x8 !=
              *(int *)&(pFVar7->ClothsConstraints).field_0x34) {
            puVar8 = *(undefined1 **)&(pFVar7->ClothsConstraints).field_0x40;
            puVar24 = &(pFVar7->ClothsConstraints).field_0x38;
            if (puVar8 != (undefined1 *)0x0) {
              puVar24 = puVar8;
            }
            iVar34 = *(int *)(puVar24 +
                             (ulonglong)
                             (*(int *)&(pFVar7->ClothsConstraints).field_0x48 - 1U & uVar17) * 4);
            if (iVar34 != -1) {
              do {
                uVar25 = *(longlong *)&pFVar7->ClothsConstraints + (longlong)iVar34 * 0x18;
                if (*(uint *)(*(longlong *)&pFVar7->ClothsConstraints + (longlong)iVar34 * 0x18) ==
                    uVar17) {
                  if (uVar25 != 0) goto LAB_14dbd8e45;
                  break;
                }
                iVar34 = *(int *)(uVar25 + 0x10);
                uVar25 = uVar26;
              } while (iVar34 != -1);
            }
          }
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L"");
          if (bVar15) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
LAB_14dbd8e45:
          lVar9 = *(longlong *)(*(longlong *)(uVar25 + 8) + 0xd0);
          if (lVar9 != 0) {
            local_367 = *(char *)(lVar9 + 0x4d);
            pFVar19 = FClothingSimulationCloth::GetPropertyString
                                (this_00,&local_2f0,this->Solver,
                                 &Softs::FPBDSphericalBackstopConstraint::BackstopMeshNameName);
            iVar6 = (pFVar19->Data).ArrayNum;
            iVar34 = iVar6 + -1;
            if (iVar6 == 0) {
              iVar34 = 0;
            }
            pFVar20 = ::FName::FName(&local_2f8,iVar34,
                                     (wchar_t *)(pFVar19->Data).AllocatorInstance.Data,FNAME_Add);
            local_358 = *pFVar20;
            if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
            }
            bVar15 = FClothingSimulationCloth::AccessoryMeshExists(this_00,this->Solver,&local_358);
            if (bVar15) {
              pTVar21 = FClothingSimulationCloth::GetAccessoryMeshPositions
                                  (this_00,&local_2b8,this->Solver,&local_358);
              uVar32 = *(undefined4 *)&pTVar21->DataPtr;
              uVar33 = *(undefined4 *)((longlong)&pTVar21->DataPtr + 4);
              iVar34 = pTVar21->ArrayNum;
              uStack_314 = *(undefined4 *)&pTVar21->field_0xc;
              local_320 = uVar32;
              uStack_31c = uVar33;
              iStack_318 = iVar34;
              pTVar21 = FClothingSimulationCloth::GetAccessoryMeshNormals
                                  (this_00,&local_2a8,this->Solver,&local_358);
            }
            else {
              pTVar21 = FClothingSimulationCloth::GetAnimationPositions
                                  (this_00,&local_298,this->Solver);
              uVar32 = *(undefined4 *)&pTVar21->DataPtr;
              uVar33 = *(undefined4 *)((longlong)&pTVar21->DataPtr + 4);
              iVar34 = pTVar21->ArrayNum;
              uStack_314 = *(undefined4 *)&pTVar21->field_0xc;
              local_320 = uVar32;
              uStack_31c = uVar33;
              iStack_318 = iVar34;
              pTVar21 = FClothingSimulationCloth::GetAnimationNormals
                                  (this_00,&local_288,this->Solver);
            }
            local_310 = pTVar21->DataPtr;
            uStack_308 = *(undefined8 *)&pTVar21->ArrayNum;
            local_348 = 0;
            if (0 < iVar34) {
              local_338 = CONCAT44(uVar33,uVar32) - (longlong)local_310;
              pfVar29 = (float *)&local_310->field_0x8;
              local_364 = (int)uStack_308;
              do {
                lVar14 = local_348;
                uVar27 = local_368 + 0x9d;
                local_368 = uVar27;
                FLinearColor::MakeFromHSV8(&local_278,uVar27,0xa0,0x80);
                FLinearColor::MakeFromHSV8(&local_2e0,uVar27,0xa0,'@');
                uVar17 = (uint)uVar26;
                if (*(int *)(lVar9 + 0x18) == *(int *)(lVar9 + 0x34)) {
                  pfVar22 = TArrayView<float_const_,int>::operator[]
                                      ((TArrayView<float_const_,int> *)(lVar9 + 0x10),uVar17);
                  fVar30 = *(float *)(lVar9 + 0x40) * *pfVar22 + *(float *)(lVar9 + 0x3c);
                }
                else {
                  fVar30 = *(float *)(lVar9 + 0x3c);
                }
                fVar1 = *(float *)(lVar9 + 0x38);
                dVar4 = this->Solver->LocalSpaceScale;
                if (*(int *)(lVar9 + 0x28) == *(int *)(lVar9 + 0x34)) {
                  pfVar22 = TArrayView<float_const_,int>::operator[]
                                      ((TArrayView<float_const_,int> *)(lVar9 + 0x20),uVar17);
                  fVar31 = *(float *)(lVar9 + 0x48) * *pfVar22 + *(float *)(lVar9 + 0x44);
                }
                else {
                  fVar31 = *(float *)(lVar9 + 0x44);
                }
                dVar11 = (double)(fVar31 * *(float *)(lVar9 + 0x38)) * this->Solver->LocalSpaceScale
                ;
                uVar18 = 0;
                if ((int)uVar17 < local_364) {
                  uVar18 = ~uVar17 >> 0x1f;
                }
                if (uVar18 == 0) {
                  local_378 = (longlong)(int)uVar17;
                  local_370 = (longlong)local_364;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                fVar31 = pfVar29[-2];
                fVar2 = pfVar29[-1];
                fVar3 = *pfVar29;
                uVar18 = 0;
                if ((int)uVar17 < iVar34) {
                  uVar18 = ~uVar17 >> 0x1f;
                }
                if (uVar18 == 0) {
                  local_370 = (longlong)iVar34;
                  local_378 = lVar14;
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                pFVar7 = this->Solver;
                dVar5 = pFVar7->LocalSpaceScale;
                dVar13 = (double)*(float *)((longlong)pfVar29 + local_338) * dVar5 +
                         *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
                dVar12 = (double)*(float *)((longlong)pfVar29 + local_338 + -8) * dVar5 +
                         *(double *)&pFVar7->LocalSpaceLocation;
                dVar5 = (double)*(float *)((longlong)pfVar29 + local_338 + -4) * dVar5 +
                        *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
                if (local_367 != '\0') {
                  dVar11 = dVar11 - (double)(fVar30 * fVar1) * dVar4;
                }
                local_300 = dVar13;
                if (local_330 == (FPrimitiveDrawInterface *)0x0) {
                  this_01 = FDebugDrawQueue::GetInstance();
                  bVar15 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&local_2e0);
                  pFVar23 = FDebugDrawQueue::GetInstance();
                  this = local_350;
                  if ((pFVar23->bEnableDebugDrawing != false) &&
                     (pFVar23 = FDebugDrawQueue::GetInstance(), this = local_350,
                     0 < pFVar23->NumConsumers)) {
                    lpCriticalSection = &this_01->CommandQueueCS;
                    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    local_2c0 = local_300;
                    local_2d0 = dVar12;
                    dStack_2c8 = dVar5;
                    bVar16 = FDebugDrawQueue::AcceptCommand
                                       (this_01,1,(TVector<double,3> *)&local_2d0);
                    if (bVar16) {
                      local_1a0 = (void *)0x0;
                      local_198 = 0;
                      local_190 = 0;
                      local_238 = local_360;
                      local_230 = 0;
                      local_228 = 0x38d1b717;
                      local_220 = 0;
                      local_c0 = 1;
                      local_268._s_0.X = dVar12;
                      local_268._s_0.Y = dVar5;
                      local_268._s_0.Z = dVar13;
                      local_250 = dVar12 - (double)fVar31 * dVar11;
                      local_248 = dVar5 - (double)fVar2 * dVar11;
                      local_240 = dVar13 - (double)fVar3 * dVar11;
                      local_224 = -bVar15 & 2;
                      FDebugDrawQueue::AddCommand(this_01,(FLatentDrawCommand *)&local_268._s_0);
                      if (local_1a0 != (void *)0x0) {
                        FMemory::Free(local_1a0);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    this = local_350;
                  }
                }
                local_348 = local_348 + 1;
                uVar26 = (ulonglong)(uVar17 + 1);
                pfVar29 = pfVar29 + 3;
              } while ((int)(uVar17 + 1) < iVar34);
            }
          }
        }
        pFVar28 = local_340 + 8;
        local_340 = pFVar28;
      } while (pFVar28 != local_328);
    }
  }
  return;
}

// DrawBackstops @ 14dbd9360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawBackstops
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  FClothingSimulationSolver *pFVar8;
  FClothingSimulationCloth *this_00;
  undefined1 *puVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TVector<float,3> *pTVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  FString *pFVar23;
  FName *pFVar24;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar25;
  float *pfVar26;
  FDebugDrawQueue *pFVar27;
  FDebugDrawQueue *pFVar28;
  float *pfVar29;
  undefined1 *puVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  int iVar43;
  float fVar44;
  undefined1 auStackY_be8 [32];
  uchar local_bb8;
  FName local_b78;
  FClothVisualizationNoGC *local_b70;
  FPrimitiveDrawInterface *local_b68;
  FPrimitiveDrawInterface *local_b60;
  TVector<double>_u_0 local_b58;
  undefined4 local_b40;
  undefined4 uStack_b3c;
  int iStack_b38;
  undefined4 uStack_b34;
  FScriptContainerElement *local_b30;
  TVector<float,3> *local_b28;
  double dStack_b20;
  double local_b18;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_b10;
  longlong local_b00;
  longlong local_af8;
  FScriptContainerElement *local_af0;
  FLinearColor local_ae8;
  TVector<double>_u_0 local_ad8;
  FLinearColor local_ac0;
  FLinearColor local_ab0;
  FLinearColor local_aa0;
  FName local_a90;
  FString local_a88;
  double local_a78;
  double dStack_a70;
  double local_a68;
  TVector<float,3> *local_a60;
  double dStack_a58;
  double local_a50;
  double local_a38;
  TVector<float,3> *local_a30;
  double dStack_a28;
  double local_a20;
  double local_a18;
  double dStack_a10;
  double local_a08;
  double local_a00;
  double dStack_9f8;
  TVector<float,3> *local_9f0;
  double local_9d8;
  TVector<float,3> *local_9c0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_9b8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_9a8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_998;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_988;
  FImplicitObject local_978;
  float local_958;
  float local_954;
  float local_950;
  TVector<double>_u_0 local_948;
  double local_930;
  double local_928;
  double local_920;
  undefined1 local_910;
  undefined4 local_908;
  byte local_904;
  undefined4 local_900;
  void *local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined4 local_7a0;
  TVector<double>_u_0 local_798;
  double local_780;
  double local_778;
  double local_770;
  undefined1 local_760;
  undefined4 local_758;
  byte local_754;
  undefined4 local_750;
  void *local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined4 local_5f0;
  TVector<double>_u_0 local_5e8 [2];
  undefined4 local_5b4;
  undefined1 local_5b0;
  undefined4 local_5a8;
  byte local_5a4;
  undefined4 local_5a0;
  double local_598;
  void *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_440;
  TVector<double>_u_0 local_438;
  double local_420;
  undefined1 local_418 [16];
  undefined1 local_400;
  undefined4 local_3f8;
  byte local_3f4;
  undefined4 local_3f0;
  void *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_290;
  TVector<double>_u_0 local_288 [2];
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_be8;
  pFVar8 = this->Solver;
  if (pFVar8 != (FClothingSimulationSolver *)0x0) {
    iVar43 = (pFVar8->Cloths).ArrayNum;
    pFVar34 = (pFVar8->Cloths).AllocatorInstance.Data;
    local_bb8 = '\0';
    local_b70 = this;
    local_b68 = param_1;
    local_b60 = param_1;
    local_b30 = pFVar34;
    if ((iVar43 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_af0 = pFVar34 + (longlong)iVar43 * 8;
    if (pFVar34 != local_af0) {
      do {
        lVar31 = 0;
        this_00 = *(FClothingSimulationCloth **)pFVar34;
        uVar21 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (uVar21 != 0xffffffff) {
          pFVar8 = this->Solver;
          lVar32 = lVar31;
          if (*(int *)&(pFVar8->ClothsConstraints).field_0x8 !=
              *(int *)&(pFVar8->ClothsConstraints).field_0x34) {
            puVar9 = *(undefined1 **)&(pFVar8->ClothsConstraints).field_0x40;
            puVar30 = &(pFVar8->ClothsConstraints).field_0x38;
            if (puVar9 != (undefined1 *)0x0) {
              puVar30 = puVar9;
            }
            iVar43 = *(int *)(puVar30 +
                             (ulonglong)
                             (*(int *)&(pFVar8->ClothsConstraints).field_0x48 - 1U & uVar21) * 4);
            if (iVar43 != -1) {
              do {
                lVar32 = *(longlong *)&pFVar8->ClothsConstraints + (longlong)iVar43 * 0x18;
                if (*(uint *)(*(longlong *)&pFVar8->ClothsConstraints + (longlong)iVar43 * 0x18) ==
                    uVar21) {
                  if (lVar32 != 0) goto LAB_14dbd9525;
                  break;
                }
                iVar43 = *(int *)(lVar32 + 0x10);
                lVar32 = lVar31;
              } while (iVar43 != -1);
            }
          }
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L"");
          if (bVar19) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
LAB_14dbd9525:
          lVar31 = *(longlong *)(*(longlong *)(lVar32 + 8) + 0xd0);
          if (lVar31 != 0) {
            cVar6 = *(char *)(lVar31 + 0x4d);
            pFVar23 = FClothingSimulationCloth::GetPropertyString
                                (this_00,&local_a88,this->Solver,
                                 &Softs::FPBDSphericalBackstopConstraint::BackstopMeshNameName);
            iVar7 = (pFVar23->Data).ArrayNum;
            iVar43 = iVar7 + -1;
            if (iVar7 == 0) {
              iVar43 = 0;
            }
            pFVar24 = ::FName::FName(&local_a90,iVar43,
                                     (wchar_t *)(pFVar23->Data).AllocatorInstance.Data,FNAME_Add);
            local_b78 = *pFVar24;
            if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a88.Data.AllocatorInstance.Data);
            }
            bVar19 = FClothingSimulationCloth::AccessoryMeshExists(this_00,this->Solver,&local_b78);
            if (bVar19) {
              pTVar25 = FClothingSimulationCloth::GetAccessoryMeshPositions
                                  (this_00,&local_9b8,this->Solver,&local_b78);
              uVar41 = *(undefined4 *)&pTVar25->DataPtr;
              uVar42 = *(undefined4 *)((longlong)&pTVar25->DataPtr + 4);
              iVar43 = pTVar25->ArrayNum;
              uStack_b34 = *(undefined4 *)&pTVar25->field_0xc;
              local_b40 = uVar41;
              uStack_b3c = uVar42;
              iStack_b38 = iVar43;
              pTVar25 = FClothingSimulationCloth::GetAccessoryMeshNormals
                                  (this_00,&local_9a8,this->Solver,&local_b78);
            }
            else {
              pTVar25 = FClothingSimulationCloth::GetAnimationPositions
                                  (this_00,&local_998,this->Solver);
              uVar41 = *(undefined4 *)&pTVar25->DataPtr;
              uVar42 = *(undefined4 *)((longlong)&pTVar25->DataPtr + 4);
              iVar43 = pTVar25->ArrayNum;
              uStack_b34 = *(undefined4 *)&pTVar25->field_0xc;
              local_b40 = uVar41;
              uStack_b3c = uVar42;
              iStack_b38 = iVar43;
              pTVar25 = FClothingSimulationCloth::GetAnimationNormals
                                  (this_00,&local_988,this->Solver);
            }
            pTVar15 = pTVar25->DataPtr;
            dVar4 = *(double *)&pTVar25->ArrayNum;
            local_b28 = pTVar15;
            dStack_b20 = dVar4;
            FClothingSimulationCloth::GetParticlePositions(this_00,&local_b10,this->Solver);
            if ((Chaos::Private::BackstopVertexIndex < 0) ||
               (iVar43 <= Chaos::Private::BackstopVertexIndex)) {
              uVar21 = 0;
              param_1 = local_b60;
              if (0 < iVar43) {
                local_b00 = CONCAT44(uVar42,uVar41) - (longlong)pTVar15;
                local_af8 = -8 - (longlong)pTVar15;
                pfVar26 = (float *)&pTVar15->field_0x8;
                iVar7 = dStack_b20._0_4_;
                do {
                  local_bb8 = local_bb8 + 0x9d;
                  FLinearColor::MakeFromHSV8(&local_aa0,local_bb8,0xa0,0x80);
                  FLinearColor::MakeFromHSV8(&local_ae8,local_bb8,0xa0,'@');
                  fVar44 = *(float *)(lVar31 + 0x38);
                  if (*(int *)(lVar31 + 0x18) == *(int *)(lVar31 + 0x34)) {
                    pfVar29 = TArrayView<float_const_,int>::operator[]
                                        ((TArrayView<float_const_,int> *)(lVar31 + 0x10),uVar21);
                    fVar35 = *(float *)(lVar31 + 0x40) * *pfVar29 + *(float *)(lVar31 + 0x3c);
                  }
                  else {
                    fVar35 = *(float *)(lVar31 + 0x3c);
                  }
                  fVar2 = *(float *)(lVar31 + 0x38);
                  dVar4 = this->Solver->LocalSpaceScale;
                  dVar3 = (double)(fVar35 * fVar44) * dVar4;
                  if (*(int *)(lVar31 + 0x28) == *(int *)(lVar31 + 0x34)) {
                    pfVar29 = TArrayView<float_const_,int>::operator[]
                                        ((TArrayView<float_const_,int> *)(lVar31 + 0x20),uVar21);
                    fVar44 = *(float *)(lVar31 + 0x48) * *pfVar29 + *(float *)(lVar31 + 0x44);
                  }
                  else {
                    fVar44 = *(float *)(lVar31 + 0x44);
                  }
                  uVar33 = ~uVar21 >> 0x1f;
                  uVar22 = 0;
                  if ((int)uVar21 < iVar7) {
                    uVar22 = uVar33;
                  }
                  dVar4 = (double)(fVar44 * fVar2) * dVar4;
                  if ((uVar22 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  local_b58._s_0.X = (double)(float)*(undefined8 *)(pfVar26 + -2);
                  local_b58._s_0.Y =
                       (double)(float)((ulonglong)*(undefined8 *)(pfVar26 + -2) >> 0x20);
                  uVar22 = 0;
                  if ((int)uVar21 < iVar43) {
                    uVar22 = uVar33;
                  }
                  dVar38 = (double)*pfVar26;
                  local_b58._s_0.Z = dVar38;
                  if ((uVar22 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  uVar18 = local_b58._s_0.Y;
                  uVar17 = local_b58._s_0.X;
                  pFVar8 = this->Solver;
                  dVar12 = pFVar8->LocalSpaceScale;
                  dVar13 = (double)*(float *)((longlong)pfVar26 + local_b00 + -8) * dVar12 +
                           *(double *)&pFVar8->LocalSpaceLocation;
                  dVar36 = (double)*(float *)((longlong)pfVar26 + local_b00 + -4) * dVar12 +
                           *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
                  dVar12 = (double)*(float *)((longlong)pfVar26 + local_b00) * dVar12 +
                           *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
                  dVar37 = dVar4;
                  if (cVar6 != '\0') {
                    dVar37 = dVar4 - dVar3;
                  }
                  uVar22 = 0;
                  if ((int)uVar21 < local_b10.ArrayNum) {
                    uVar22 = uVar33;
                  }
                  dVar39 = dVar13 - local_b58._s_0.X * dVar37;
                  dVar40 = dVar36 - local_b58._s_0.Y * dVar37;
                  local_b28 = (TVector<float,3> *)(dVar12 - dVar38 * dVar37);
                  local_9c0 = local_b28;
                  if ((uVar22 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar19)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pFVar8 = this->Solver;
                  dVar37 = pFVar8->LocalSpaceScale;
                  uVar5 = *(undefined8 *)
                           ((longlong)pfVar26 +
                           (longlong)(&(local_b10.DataPtr)->field_0x4 + local_af8));
                  fVar44 = *(float *)((longlong)pfVar26 +
                                     (longlong)(&(local_b10.DataPtr)->field_0x0 + local_af8));
                  dVar16 = *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
                  dVar14 = (double)(float)((ulonglong)uVar5 >> 0x20) * dVar37 +
                           *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
                  dVar11 = *(double *)&pFVar8->LocalSpaceLocation;
                  if (local_b60 == (FPrimitiveDrawInterface *)0x0) {
                    pFVar27 = FDebugDrawQueue::GetInstance();
                    bVar19 = Chaos::Private::bDrawInForeground != false;
                    FLinearColor::ToFColorSRGB(&local_aa0);
                    pFVar28 = FDebugDrawQueue::GetInstance();
                    this = local_b70;
                    if ((pFVar28->bEnableDebugDrawing != false) &&
                       (pFVar28 = FDebugDrawQueue::GetInstance(), this = local_b70,
                       0 < pFVar28->NumConsumers)) {
                      pFVar1 = &pFVar27->CommandQueueCS;
                      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::ReportNotNullPtr();
                      }
                      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                      local_9f0 = local_9c0;
                      local_a00 = dVar39;
                      dStack_9f8 = dVar40;
                      bVar20 = FDebugDrawQueue::AcceptCommand
                                         (pFVar27,1,(TVector<double,3> *)&local_a00);
                      if (bVar20) {
                        local_370 = (void *)0x0;
                        local_368 = 0;
                        local_360 = 0;
                        local_438._s_0.Z = (double)local_b28;
                        local_418._8_4_ = SUB84(dVar14,0);
                        local_418._0_8_ = (double)(float)uVar5 * dVar37 + dVar16;
                        local_418._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
                        local_400 = 0;
                        local_3f8 = 0x38d1b717;
                        local_3f0 = 0;
                        local_290 = 1;
                        local_438._s_0.X = dVar39;
                        local_438._s_0.Y = dVar40;
                        local_420 = (double)fVar44 * dVar37 + dVar11;
                        local_3f4 = -bVar19 & 2;
                        FDebugDrawQueue::AddCommand(pFVar27,(FLatentDrawCommand *)&local_438._s_0);
                        if (local_370 != (void *)0x0) {
                          FMemory::Free(local_370);
                        }
                      }
                      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                      this = local_b70;
                    }
                  }
                  if (__real_0000000000000000 < dVar3) {
                    if (cVar6 == '\0') {
                      dVar4 = dVar4 + dVar3;
                    }
                    local_ad8._s_0.X = dVar13 - (double)uVar17 * dVar4;
                    local_ad8._s_0.Z = dVar12 - dVar38 * dVar4;
                    local_ad8._s_0.Y = dVar36 - (double)uVar18 * dVar4;
                    `Chaos::FClothVisualizationNoGC::DrawBackstops'::__l2::<lambda_1>::operator()
                              (&local_b68,(TVector<double> *)&local_ad8._s_0,
                               (TVector<double> *)&local_b58._s_0,dVar3,
                               &UE::Math::TVector<double>::ForwardVector,&local_ae8);
                    `Chaos::FClothVisualizationNoGC::DrawBackstops'::__l2::<lambda_1>::operator()
                              (&local_b68,(TVector<double> *)&local_ad8._s_0,
                               (TVector<double> *)&local_b58._s_0,dVar3,
                               &UE::Math::TVector<double>::UpVector,&local_ae8);
                    `Chaos::FClothVisualizationNoGC::DrawBackstops'::__l2::<lambda_1>::operator()
                              (&local_b68,(TVector<double> *)&local_ad8._s_0,
                               (TVector<double> *)&local_b58._s_0,dVar3,
                               &UE::Math::TVector<double>::RightVector,&local_ae8);
                  }
                  uVar21 = uVar21 + 1;
                  pfVar26 = pfVar26 + 3;
                  param_1 = local_b60;
                } while ((int)uVar21 < iVar43);
              }
            }
            else {
              FLinearColor::MakeFromHSV8(&local_ab0,local_bb8,0xa0,0x80);
              FLinearColor::MakeFromHSV8(&local_ac0,local_bb8,0xa0,'@');
              fVar44 = *(float *)(lVar31 + 0x38);
              dVar3 = this->Solver->LocalSpaceScale;
              if (*(int *)(lVar31 + 0x18) == *(int *)(lVar31 + 0x34)) {
                pfVar26 = TArrayView<float_const_,int>::operator[]
                                    ((TArrayView<float_const_,int> *)(lVar31 + 0x10),
                                     Chaos::Private::BackstopVertexIndex);
                fVar35 = *(float *)(lVar31 + 0x40) * *pfVar26 + *(float *)(lVar31 + 0x3c);
              }
              else {
                fVar35 = *(float *)(lVar31 + 0x3c);
              }
              dVar38 = this->Solver->LocalSpaceScale;
              dVar3 = (double)(fVar35 * fVar44) * dVar3;
              fVar44 = *(float *)(lVar31 + 0x38);
              if (*(int *)(lVar31 + 0x28) == *(int *)(lVar31 + 0x34)) {
                pfVar26 = TArrayView<float_const_,int>::operator[]
                                    ((TArrayView<float_const_,int> *)(lVar31 + 0x20),
                                     Chaos::Private::BackstopVertexIndex);
                fVar35 = *(float *)(lVar31 + 0x48) * *pfVar26 + *(float *)(lVar31 + 0x44);
              }
              else {
                fVar35 = *(float *)(lVar31 + 0x44);
              }
              lVar31 = (longlong)Chaos::Private::BackstopVertexIndex;
              dVar38 = (double)(fVar35 * fVar44) * dVar38;
              uVar21 = 0;
              if (Chaos::Private::BackstopVertexIndex < SUB84(dVar4,0)) {
                uVar21 = (uint)~Chaos::Private::BackstopVertexIndex >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar19)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar32 = (longlong)Chaos::Private::BackstopVertexIndex;
              fVar44 = *(float *)(pTVar15 + lVar31);
              fVar35 = *(float *)&pTVar15[lVar31].field_0x4;
              fVar2 = *(float *)&pTVar15[lVar31].field_0x8;
              uVar21 = 0;
              if (Chaos::Private::BackstopVertexIndex < iVar43) {
                uVar21 = (uint)~Chaos::Private::BackstopVertexIndex >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar19)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar8 = this->Solver;
              lVar31 = CONCAT44(uStack_b3c,local_b40);
              dVar4 = pFVar8->LocalSpaceScale;
              dVar12 = (double)*(float *)(lVar31 + lVar32 * 0xc) * dVar4 +
                       *(double *)&pFVar8->LocalSpaceLocation;
              dVar13 = (double)*(float *)(lVar31 + 4 + lVar32 * 0xc) * dVar4 +
                       *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
              dVar4 = (double)*(float *)(lVar31 + 8 + lVar32 * 0xc) * dVar4 +
                      *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
              dVar36 = dVar38;
              if (cVar6 != '\0') {
                dVar36 = dVar38 - dVar3;
              }
              lVar31 = (longlong)Chaos::Private::BackstopVertexIndex;
              pTVar15 = (TVector<float,3> *)(dVar12 - (double)fVar44 * dVar36);
              dVar37 = dVar13 - (double)fVar35 * dVar36;
              uVar21 = 0;
              if (Chaos::Private::BackstopVertexIndex < local_b10.ArrayNum) {
                uVar21 = (uint)~Chaos::Private::BackstopVertexIndex >> 0x1f;
              }
              dVar36 = dVar4 - (double)fVar2 * dVar36;
              local_a38 = dVar36;
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar19)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar8 = this->Solver;
              dVar39 = pFVar8->LocalSpaceScale;
              dVar11 = (double)*(float *)&local_b10.DataPtr[lVar31].field_0x8 * dVar39 +
                       *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
              dVar40 = (double)*(float *)(local_b10.DataPtr + lVar31) * dVar39 +
                       *(double *)&pFVar8->LocalSpaceLocation;
              dVar39 = (double)*(float *)&local_b10.DataPtr[lVar31].field_0x4 * dVar39 +
                       *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
              local_b28 = pTVar15;
              dStack_b20 = dVar37;
              local_9d8 = dVar11;
              if (param_1 == (FPrimitiveDrawInterface *)0x0) {
                pFVar27 = FDebugDrawQueue::GetInstance();
                bVar19 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&local_ab0);
                pFVar28 = FDebugDrawQueue::GetInstance();
                if ((pFVar28->bEnableDebugDrawing != false) &&
                   (pFVar28 = FDebugDrawQueue::GetInstance(), 0 < pFVar28->NumConsumers)) {
                  pFVar1 = &pFVar27->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_a68 = local_9d8;
                  local_a78 = dVar40;
                  dStack_a70 = dVar39;
                  bVar20 = FDebugDrawQueue::AcceptCommand(pFVar27,1,(TVector<double,3> *)&local_a78)
                  ;
                  if (bVar20) {
                    local_1c0 = (void *)0x0;
                    local_1b8 = 0;
                    local_1b0 = 0;
                    local_250 = 0;
                    local_248 = 0x38d1b717;
                    local_240 = 0x40a00000;
                    local_e0 = 0;
                    local_288[0]._0_8_ = dVar40;
                    local_288[0]._8_8_ = dVar39;
                    local_288[0]._16_8_ = dVar11;
                    local_244 = -bVar19 & 2;
                    FDebugDrawQueue::AddCommand(pFVar27,(FLatentDrawCommand *)&local_288[0]._s_0);
                    if (local_1c0 != (void *)0x0) {
                      FMemory::Free(local_1c0);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
                pFVar27 = FDebugDrawQueue::GetInstance();
                bVar19 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&local_ab0);
                pFVar28 = FDebugDrawQueue::GetInstance();
                if ((pFVar28->bEnableDebugDrawing != false) &&
                   (pFVar28 = FDebugDrawQueue::GetInstance(), 0 < pFVar28->NumConsumers)) {
                  pFVar1 = &pFVar27->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_a60 = local_b28;
                  dStack_a58 = dStack_b20;
                  local_a50 = local_a38;
                  bVar20 = FDebugDrawQueue::AcceptCommand(pFVar27,1,(TVector<double,3> *)&local_a60)
                  ;
                  if (bVar20) {
                    local_880 = (void *)0x0;
                    local_878 = 0;
                    local_870 = 0;
                    local_910 = 0;
                    local_908 = 0x38d1b717;
                    local_900 = 0;
                    local_7a0 = 1;
                    local_948._s_0.X = (double)pTVar15;
                    local_948._s_0.Y = dVar37;
                    local_948._s_0.Z = dVar36;
                    local_930 = dVar40;
                    local_928 = dVar39;
                    local_920 = dVar11;
                    local_904 = -bVar19 & 2;
                    FDebugDrawQueue::AddCommand(pFVar27,(FLatentDrawCommand *)&local_948._s_0);
                    if (local_880 != (void *)0x0) {
                      FMemory::Free(local_880);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
              }
              if (__real_0000000000000000 < dVar3) {
                if (cVar6 == '\0') {
                  dVar38 = dVar38 + dVar3;
                }
                dVar12 = dVar12 - (double)fVar44 * dVar38;
                dVar13 = dVar13 - (double)fVar35 * dVar38;
                dVar4 = dVar4 - (double)fVar2 * dVar38;
                if (param_1 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar27 = FDebugDrawQueue::GetInstance();
                  bVar19 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&local_ac0);
                  pFVar28 = FDebugDrawQueue::GetInstance();
                  if ((pFVar28->bEnableDebugDrawing != false) &&
                     (pFVar28 = FDebugDrawQueue::GetInstance(), 0 < pFVar28->NumConsumers)) {
                    pFVar1 = &pFVar27->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_a30 = local_b28;
                    dStack_a28 = dStack_b20;
                    local_a20 = local_a38;
                    bVar20 = FDebugDrawQueue::AcceptCommand
                                       (pFVar27,1,(TVector<double,3> *)&local_a30);
                    if (bVar20) {
                      local_6d0 = (void *)0x0;
                      local_6c8 = 0;
                      local_6c0 = 0;
                      local_760 = 0;
                      local_758 = 0x38d1b717;
                      local_750 = 0;
                      local_5f0 = 1;
                      local_798._0_8_ = pTVar15;
                      local_798._s_0.Y = dVar37;
                      local_798._s_0.Z = dVar36;
                      local_780 = dVar12;
                      local_778 = dVar13;
                      local_770 = dVar4;
                      local_754 = -bVar19 & 2;
                      FDebugDrawQueue::AddCommand(pFVar27,(FLatentDrawCommand *)&local_798._s_0);
                      if (local_6d0 != (void *)0x0) {
                        FMemory::Free(local_6d0);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                }
                uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                FImplicitObject::FImplicitObject(&local_978,3,'\0');
                local_978._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
                local_954 = (float)(double)uVar18;
                dVar40 = (double)local_954;
                local_958 = (float)(double)uVar17;
                dVar38 = (double)local_958;
                fVar44 = (float)dVar3;
                local_950 = (float)(double)uVar5;
                dVar3 = (double)local_950;
                dVar39 = UE::Math::TQuat<double>::Identity.Y * dVar3 -
                         UE::Math::TQuat<double>::Identity.Z * dVar40;
                dVar39 = dVar39 + dVar39;
                dVar37 = UE::Math::TQuat<double>::Identity.Z * dVar38 -
                         UE::Math::TQuat<double>::Identity.X * dVar3;
                dVar37 = dVar37 + dVar37;
                dVar36 = UE::Math::TQuat<double>::Identity.X * dVar40 -
                         UE::Math::TQuat<double>::Identity.Y * dVar38;
                dVar36 = dVar36 + dVar36;
                dVar38 = (UE::Math::TQuat<double>::Identity.Y * dVar36 -
                         UE::Math::TQuat<double>::Identity.Z * dVar37) + dVar12 +
                         UE::Math::TQuat<double>::Identity.W * dVar39 + dVar38;
                dVar3 = (UE::Math::TQuat<double>::Identity.X * dVar37 -
                        UE::Math::TQuat<double>::Identity.Y * dVar39) + dVar4 +
                        UE::Math::TQuat<double>::Identity.W * dVar36 + dVar3;
                dVar4 = (UE::Math::TQuat<double>::Identity.Z * dVar39 -
                        UE::Math::TQuat<double>::Identity.X * dVar36) + dVar13 +
                        UE::Math::TQuat<double>::Identity.W * dVar37 + dVar40;
                local_b18 = dVar3;
                local_978.Margin = fVar44;
                if (param_1 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar27 = FDebugDrawQueue::GetInstance();
                  bVar19 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&local_ac0);
                  pFVar28 = FDebugDrawQueue::GetInstance();
                  if ((pFVar28->bEnableDebugDrawing != false) &&
                     (pFVar28 = FDebugDrawQueue::GetInstance(), 0 < pFVar28->NumConsumers)) {
                    pFVar1 = &pFVar27->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_a08 = local_b18;
                    local_a18 = dVar38;
                    dStack_a10 = dVar4;
                    bVar20 = FDebugDrawQueue::AcceptCommand
                                       (pFVar27,0x90,(TVector<double,3> *)&local_a18);
                    if (bVar20) {
                      local_598 = (double)fVar44;
                      local_520 = (void *)0x0;
                      local_518 = 0;
                      local_510 = 0;
                      local_5b4 = 0xc;
                      local_5b0 = 0;
                      local_5a8 = 0x38d1b717;
                      local_5a0 = 0;
                      local_440 = 3;
                      local_5e8[0]._0_8_ = dVar38;
                      local_5e8[0]._8_8_ = dVar4;
                      local_5e8[0]._16_8_ = dVar3;
                      local_5a4 = -bVar19 & 2;
                      FDebugDrawQueue::AddCommand(pFVar27,(FLatentDrawCommand *)&local_5e8[0]._s_0);
                      if (local_520 != (void *)0x0) {
                        FMemory::Free(local_520);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                }
                local_978._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
                FImplicitObject::~FImplicitObject(&local_978);
              }
            }
          }
        }
        pFVar34 = local_b30 + 8;
        local_b30 = pFVar34;
      } while (pFVar34 != local_af0);
    }
  }
  return;
}

// DrawBendingConstraint @ 14dbda630

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
Chaos::FClothVisualizationNoGC::DrawBendingConstraint
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  FClothingSimulationSolver *pFVar2;
  undefined1 *puVar3;
  FPBDEvolution *pFVar4;
  FEvolution *pFVar5;
  FPBDBendingSpringConstraints *pFVar6;
  FXPBDBendingSpringConstraints *pFVar7;
  FPBDBendingConstraints *pFVar8;
  FXPBDBendingConstraints *pFVar9;
  FXPBDAnisotropicBendingConstraints *pFVar10;
  code *pcVar11;
  FSolverParticles *pFVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar16;
  undefined1 *puVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  FPBDBendingSpringConstraints *local_res8 [2];
  FXPBDBendingSpringConstraints *local_res18;
  FPBDBendingConstraints *local_res20;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_c8;
  FXPBDBendingConstraints *local_b8;
  FXPBDAnisotropicBendingConstraints *local_b0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_a8;
  <lambda_1> local_98;
  <lambda_1> local_88;
  <lambda_1> local_78;
  <lambda_1> local_68;
  <lambda_1> local_58;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_48;
  
  pFVar2 = this->Solver;
  if (pFVar2 != (FClothingSimulationSolver *)0x0) {
    iVar15 = (pFVar2->Cloths).ArrayNum;
    pFVar19 = (pFVar2->Cloths).AllocatorInstance.Data;
    if ((iVar15 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar1 = pFVar19 + (longlong)iVar15 * 8;
    for (; pFVar19 != pFVar1; pFVar19 = pFVar19 + 8) {
      uVar14 = FClothingSimulationCloth::GetParticleRangeId
                         (*(FClothingSimulationCloth **)pFVar19,this->Solver);
      if (uVar14 != 0xffffffff) {
        pFVar2 = this->Solver;
        if (*(int *)&(pFVar2->ClothsConstraints).field_0x8 !=
            *(int *)&(pFVar2->ClothsConstraints).field_0x34) {
          puVar3 = *(undefined1 **)&(pFVar2->ClothsConstraints).field_0x40;
          puVar17 = &(pFVar2->ClothsConstraints).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar17 = puVar3;
          }
          iVar15 = *(int *)(puVar17 +
                           (ulonglong)
                           (*(int *)&(pFVar2->ClothsConstraints).field_0x48 - 1U & uVar14) * 4);
          if (iVar15 != -1) {
            do {
              lVar18 = *(longlong *)&pFVar2->ClothsConstraints + (longlong)iVar15 * 0x18;
              if (*(uint *)(*(longlong *)&pFVar2->ClothsConstraints + (longlong)iVar15 * 0x18) ==
                  uVar14) {
                if (lVar18 != 0) goto LAB_14dbda754;
                goto LAB_14dbda72e;
              }
              iVar15 = *(int *)(lVar18 + 0x10);
            } while (iVar15 != -1);
          }
        }
        lVar18 = 0;
LAB_14dbda72e:
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L"");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
LAB_14dbda754:
        pFVar2 = this->Solver;
        lVar18 = *(longlong *)(lVar18 + 8);
        pFVar4 = (pFVar2->PBDEvolution).Ptr;
        if (pFVar4 == (FPBDEvolution *)0x0) {
          pTVar16 = FClothingSimulationSolver::GetParticleXsView(pFVar2,&local_48,uVar14);
        }
        else {
          pFVar5 = (pFVar2->Evolution).Ptr;
          pFVar12 = &pFVar5->Particles;
          if (pFVar5 == (FEvolution *)0x0) {
            pFVar12 = &pFVar4->MParticles;
          }
          iVar15 = (int)(&pFVar12->_padding_)[2];
          local_a8.DataPtr = (TVector<float,3> *)(&pFVar12->_padding_)[1];
          if ((iVar15 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_a8.ArrayNum = iVar15;
          pTVar16 = &local_a8;
        }
        local_c8.DataPtr = pTVar16->DataPtr;
        local_c8.ArrayNum = pTVar16->ArrayNum;
        local_c8._12_4_ = *(undefined4 *)&pTVar16->field_0xc;
        pFVar6 = *(FPBDBendingSpringConstraints **)(lVar18 + 0x40);
        if (pFVar6 != (FPBDBendingSpringConstraints *)0x0) {
          local_98.SpringConstraints = local_res8;
          local_98.Positions = &local_c8;
          local_res8[0] = pFVar6;
          DrawSpringConstraintColors<Chaos::Softs::FPBDBendingSpringConstraints,_Chaos::DrawSpringConstraintColors<Chaos::Softs::FPBDBendingSpringConstraints>_::__l2::<lambda_1>_>
                    (param_1,this->Solver,pFVar6,&local_98);
        }
        pFVar7 = *(FXPBDBendingSpringConstraints **)(lVar18 + 0x50);
        if (pFVar7 != (FXPBDBendingSpringConstraints *)0x0) {
          local_88.SpringConstraints = &local_res18;
          local_88.Positions = &local_c8;
          local_res18 = pFVar7;
          DrawSpringConstraintColors<Chaos::Softs::FXPBDBendingSpringConstraints,_Chaos::DrawSpringConstraintColors<Chaos::Softs::FXPBDBendingSpringConstraints>_::__l2::<lambda_1>_>
                    (param_1,this->Solver,pFVar7,&local_88);
        }
        pFVar8 = *(FPBDBendingConstraints **)(lVar18 + 0x60);
        if (pFVar8 != (FPBDBendingConstraints *)0x0) {
          if (Chaos::Private::BendingDrawMode == 0) {
LAB_14dbda891:
            DrawBendingElementBuckleStatus
                      (param_1,&local_c8,this->Solver,(FPBDBendingConstraintsBase *)pFVar8);
          }
          else if (Chaos::Private::BendingDrawMode == 1) {
            local_78.SpringConstraints = &local_res20;
            local_78.Positions = &local_c8;
            local_res20 = pFVar8;
            DrawSpringConstraintColors<Chaos::Softs::FPBDBendingConstraints,_Chaos::DrawSpringConstraintColors<Chaos::Softs::FPBDBendingConstraints>_::__l2::<lambda_1>_>
                      (param_1,this->Solver,pFVar8,&local_78);
          }
          else {
            if (Chaos::Private::BendingDrawMode != 3) goto LAB_14dbda891;
            DrawBendingElementRestAngle
                      (param_1,&local_c8,this->Solver,(FPBDBendingConstraintsBase *)pFVar8);
          }
        }
        pFVar9 = *(FXPBDBendingConstraints **)(lVar18 + 0x70);
        if (pFVar9 != (FXPBDBendingConstraints *)0x0) {
          if (Chaos::Private::BendingDrawMode == 0) {
LAB_14dbda8ff:
            DrawBendingElementBuckleStatus
                      (param_1,&local_c8,this->Solver,(FPBDBendingConstraintsBase *)pFVar9);
          }
          else if (Chaos::Private::BendingDrawMode == 1) {
            local_68.SpringConstraints = &local_b8;
            local_68.Positions = &local_c8;
            local_b8 = pFVar9;
            DrawSpringConstraintColors<Chaos::Softs::FXPBDBendingConstraints,_Chaos::DrawSpringConstraintColors<Chaos::Softs::FXPBDBendingConstraints>_::__l2::<lambda_1>_>
                      (param_1,this->Solver,pFVar9,&local_68);
          }
          else {
            if (Chaos::Private::BendingDrawMode != 3) goto LAB_14dbda8ff;
            DrawBendingElementRestAngle
                      (param_1,&local_c8,this->Solver,(FPBDBendingConstraintsBase *)pFVar9);
          }
        }
        pFVar10 = *(FXPBDAnisotropicBendingConstraints **)(lVar18 + 0x80);
        if (pFVar10 != (FXPBDAnisotropicBendingConstraints *)0x0) {
          if (Chaos::Private::BendingDrawMode == 0) {
LAB_14dbda98a:
            DrawBendingElementBuckleStatus
                      (param_1,&local_c8,this->Solver,(FPBDBendingConstraintsBase *)pFVar10);
          }
          else if (Chaos::Private::BendingDrawMode == 1) {
            local_58.SpringConstraints = &local_b0;
            local_58.Positions = &local_c8;
            local_b0 = pFVar10;
            DrawSpringConstraintColors<Chaos::Softs::FXPBDAnisotropicBendingConstraints,_Chaos::DrawSpringConstraintColors<Chaos::Softs::FXPBDAnisotropicBendingConstraints>_::__l2::<lambda_1>_>
                      (param_1,this->Solver,pFVar10,&local_58);
          }
          else if (Chaos::Private::BendingDrawMode == 2) {
            DrawEdgeAnisotropy<Chaos::Softs::FXPBDAnisotropicBendingConstraints>
                      (param_1,&local_c8,this->Solver,pFVar10);
          }
          else {
            if (Chaos::Private::BendingDrawMode != 3) goto LAB_14dbda98a;
            DrawBendingElementRestAngle
                      (param_1,&local_c8,this->Solver,(FPBDBendingConstraintsBase *)pFVar10);
          }
        }
      }
    }
  }
  return;
}

// DrawBounds @ 14dbdb380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawBounds
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  FScriptContainerElement *pFVar2;
  FClothingSimulationCloth *this_00;
  code *pcVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  FDebugDrawQueue *pFVar12;
  FDebugDrawQueue *pFVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  undefined1 auStack_728 [32];
  FColor_u_0 local_708;
  undefined4 local_704;
  double local_700;
  FLinearColor_u_0 local_6f8;
  FLinearColor_u_0 local_6e8;
  FLinearColor_u_0 local_6d8;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  double local_6b0;
  double local_6a8;
  double local_6a0;
  double local_698;
  double local_690;
  double local_688;
  double local_680;
  double dStack_678;
  double local_670;
  TVector<double>_u_0 local_668;
  double local_650;
  double local_648;
  double local_640;
  double local_638;
  double local_630;
  double dStack_628;
  double local_620;
  FImplicitObject local_618;
  float local_5f8;
  float local_5f4;
  float local_5f0;
  FLatentDrawCommand local_5e8;
  FLatentDrawCommand local_438;
  TVector<double>_u_0 local_288 [2];
  undefined4 local_258;
  undefined4 local_254;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  double local_238;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_728;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    FClothingSimulationSolver::CalculateBounds
              (this->Solver,(TBoxSphereBounds<double,double> *)&local_668._s_0);
    local_6f8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
    local_6f8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
    local_6f8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
    local_6f8._s_0.A = (float)FColor::Purple.field0_0x0._3_1_ * __real_3b808081;
    uVar16 = (uint)__xmm_80000000000000008000000000000000;
    uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar18 = (double)CONCAT44((uint)((ulonglong)local_640 >> 0x20) ^ uVar17,
                              SUB84(local_640,0) ^ uVar16);
    uVar25 = SUB84(local_648,0) ^ uVar16;
    uVar26 = (uint)((ulonglong)local_648 >> 0x20) ^ uVar17;
    dVar19 = (double)CONCAT44((uint)((ulonglong)local_650 >> 0x20) ^ uVar17,
                              SUB84(local_650,0) ^ uVar16);
    if (param_1 == (FPrimitiveDrawInterface *)0x0) {
      dVar21 = (local_650 - dVar19) * __real_3fe0000000000000;
      dVar5 = (local_648 - (double)CONCAT44(uVar26,uVar25)) * __real_3fe0000000000000;
      dVar23 = (local_640 - dVar18) * __real_3fe0000000000000;
      dVar19 = dVar21 + dVar19;
      dVar24 = (double)CONCAT44(uVar26,uVar25) + dVar5;
      dVar18 = dVar23 + dVar18;
      dVar4 = dVar24 * UE::Math::TQuat<double>::Identity.X -
              dVar19 * UE::Math::TQuat<double>::Identity.Y;
      dVar4 = dVar4 + dVar4;
      dVar20 = dVar19 * UE::Math::TQuat<double>::Identity.Z -
               dVar18 * UE::Math::TQuat<double>::Identity.X;
      dVar20 = dVar20 + dVar20;
      dVar22 = dVar18 * UE::Math::TQuat<double>::Identity.Y -
               dVar24 * UE::Math::TQuat<double>::Identity.Z;
      dVar22 = dVar22 + dVar22;
      dVar19 = (dVar4 * UE::Math::TQuat<double>::Identity.Y -
               dVar20 * UE::Math::TQuat<double>::Identity.Z) +
               UE::Math::TQuat<double>::Identity.W * dVar22 + dVar19 + local_668._s_0.X;
      local_700 = (dVar22 * UE::Math::TQuat<double>::Identity.Z -
                  dVar4 * UE::Math::TQuat<double>::Identity.X) +
                  UE::Math::TQuat<double>::Identity.W * dVar20 + dVar24 + local_668._s_0.Y;
      dVar18 = (dVar20 * UE::Math::TQuat<double>::Identity.X -
               dVar22 * UE::Math::TQuat<double>::Identity.Y) +
               UE::Math::TQuat<double>::Identity.W * dVar4 + dVar18 + local_668._s_0.Z;
      local_6b8 = dVar18;
      pFVar12 = FDebugDrawQueue::GetInstance();
      bVar15 = Chaos::Private::bDrawInForeground != false;
      FLinearColor::ToFColorSRGB((FLinearColor *)&local_6f8._s_0);
      pFVar13 = FDebugDrawQueue::GetInstance();
      if ((pFVar13->bEnableDebugDrawing != false) &&
         (pFVar13 = FDebugDrawQueue::GetInstance(), 0 < pFVar13->NumConsumers)) {
        pFVar1 = &pFVar12->CommandQueueCS;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        dVar4 = local_700;
        dStack_628 = local_700;
        local_620 = local_6b8;
        local_630 = dVar19;
        bVar10 = FDebugDrawQueue::AcceptCommand(pFVar12,0xc,(TVector<double,3> *)&local_630);
        if (bVar10) {
          local_5e8.Rotation.X = UE::Math::TQuat<double>::Identity.X;
          local_5e8.Rotation.Y = UE::Math::TQuat<double>::Identity.Y;
          local_5e8.Rotation.Z = UE::Math::TQuat<double>::Identity.Z;
          local_5e8.Rotation.W = UE::Math::TQuat<double>::Identity.W;
          local_5e8.Center.field0_0x0._s_0.Y = dVar4;
          local_5e8.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5e8.Text.Data.ArrayNum = 0;
          local_5e8.Text.Data.ArrayMax = 0;
          local_5e8.TestBaseActor = (AActor *)0x0;
          local_5e8.Color.field0_0x0 = local_708;
          local_5e8.bPersistentLines = false;
          local_5e8.LifeTime = 0.0001;
          local_5e8.Thickness = 0.0;
          local_5e8.Type = Box;
          local_5e8.DepthPriority = -bVar15 & 2;
          local_5e8.Center.field0_0x0._s_0.X = dVar19;
          local_5e8.Center.field0_0x0._s_0.Z = dVar18;
          local_5e8.Extent.field0_0x0._s_0.X = dVar21;
          local_5e8.Extent.field0_0x0._s_0.Y = dVar5;
          local_5e8.Extent.field0_0x0._s_0.Z = dVar23;
          FDebugDrawQueue::AddCommand(pFVar12,&local_5e8);
          if (local_5e8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5e8.Text.Data.AllocatorInstance.Data);
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      }
    }
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    fVar6 = __real_3b808081;
    local_6e8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.R];
    local_6e8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.G];
    local_6e8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.B];
    local_6e8._s_0.A = (float)FColor::Orange.field0_0x0._3_1_ * __real_3b808081;
    FImplicitObject::FImplicitObject(&local_618,3,'\0');
    local_5f4 = (float)(double)uVar8;
    local_618._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
    local_5f8 = (float)(double)uVar7;
    dVar20 = (double)local_5f8;
    local_5f0 = (float)(double)uVar9;
    dVar18 = (double)local_5f4;
    dVar19 = (double)local_5f0;
    fVar27 = (float)local_638;
    dVar4 = dVar18 * UE::Math::TQuat<double>::Identity.X -
            dVar20 * UE::Math::TQuat<double>::Identity.Y;
    dVar4 = dVar4 + dVar4;
    dVar24 = dVar20 * UE::Math::TQuat<double>::Identity.Z -
             dVar19 * UE::Math::TQuat<double>::Identity.X;
    dVar24 = dVar24 + dVar24;
    dVar23 = dVar19 * UE::Math::TQuat<double>::Identity.Y -
             dVar18 * UE::Math::TQuat<double>::Identity.Z;
    dVar23 = dVar23 + dVar23;
    dVar20 = (dVar4 * UE::Math::TQuat<double>::Identity.Y -
             dVar24 * UE::Math::TQuat<double>::Identity.Z) +
             dVar23 * UE::Math::TQuat<double>::Identity.W + dVar20 + local_668._s_0.X;
    dVar18 = (dVar23 * UE::Math::TQuat<double>::Identity.Z -
             dVar4 * UE::Math::TQuat<double>::Identity.X) +
             dVar24 * UE::Math::TQuat<double>::Identity.W + dVar18 + local_668._s_0.Y;
    dVar19 = (dVar24 * UE::Math::TQuat<double>::Identity.X -
             dVar23 * UE::Math::TQuat<double>::Identity.Y) +
             dVar4 * UE::Math::TQuat<double>::Identity.W + dVar19 + local_668._s_0.Z;
    local_6b8 = dVar19;
    local_618.Margin = fVar27;
    if (param_1 == (FPrimitiveDrawInterface *)0x0) {
      pFVar12 = FDebugDrawQueue::GetInstance();
      bVar15 = Chaos::Private::bDrawInForeground != false;
      FLinearColor::ToFColorSRGB((FLinearColor *)&local_6e8._s_0);
      pFVar13 = FDebugDrawQueue::GetInstance();
      if ((pFVar13->bEnableDebugDrawing != false) &&
         (pFVar13 = FDebugDrawQueue::GetInstance(), 0 < pFVar13->NumConsumers)) {
        pFVar1 = &pFVar12->CommandQueueCS;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        local_670 = local_6b8;
        local_680 = dVar20;
        dStack_678 = dVar18;
        bVar10 = FDebugDrawQueue::AcceptCommand(pFVar12,0x90,(TVector<double,3> *)&local_680);
        if (bVar10) {
          local_238 = (double)fVar27;
          local_1c0 = (void *)0x0;
          local_1b8 = 0;
          local_1b0 = 0;
          local_258 = local_704;
          local_254 = 0xc;
          local_250 = 0;
          local_248 = 0x38d1b717;
          local_240 = 0;
          local_e0 = 3;
          local_288[0]._0_8_ = dVar20;
          local_288[0]._8_8_ = dVar18;
          local_288[0]._16_8_ = dVar19;
          local_244 = -bVar15 & 2;
          FDebugDrawQueue::AddCommand(pFVar12,(FLatentDrawCommand *)&local_288[0]._s_0);
          if (local_1c0 != (void *)0x0) {
            FMemory::Free(local_1c0);
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      }
    }
    local_618._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
    FImplicitObject::~FImplicitObject(&local_618);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_6d8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
      local_6d8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
      local_6d8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
      local_6d8._s_0.A = (float)FColor::Purple.field0_0x0._3_1_ * fVar6;
      FLinearColor::Desaturate((FLinearColor *)&local_6d8._s_0,&::Color,__real_3f000000);
      _Init_thread_footer(&::_TSS0);
    }
    iVar11 = (this->Solver->Cloths).ArrayNum;
    pFVar14 = (this->Solver->Cloths).AllocatorInstance.Data;
    if ((iVar11 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = pFVar14 + (longlong)iVar11 * 8;
    for (; pFVar14 != pFVar2; pFVar14 = pFVar14 + 8) {
      this_00 = *(FClothingSimulationCloth **)pFVar14;
      iVar11 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
      if ((iVar11 != -1) &&
         (FClothingSimulationCloth::CalculateBoundingBox
                    (this_00,(TAABB<double,3> *)&local_6b0,this->Solver),
         dVar18 = __real_3fe0000000000000, param_1 == (FPrimitiveDrawInterface *)0x0)) {
        dVar20 = (local_688 - local_6a0) * __real_3fe0000000000000 + local_6a0;
        dVar4 = (local_690 - local_6a8) * __real_3fe0000000000000 + local_6a8;
        dVar24 = (local_698 - local_6b0) * __real_3fe0000000000000 + local_6b0;
        dVar19 = dVar20 * UE::Math::TQuat<double>::Identity.Y -
                 dVar4 * UE::Math::TQuat<double>::Identity.Z;
        dVar19 = dVar19 + dVar19;
        dVar23 = dVar24 * UE::Math::TQuat<double>::Identity.Z -
                 dVar20 * UE::Math::TQuat<double>::Identity.X;
        dVar23 = dVar23 + dVar23;
        dVar21 = dVar4 * UE::Math::TQuat<double>::Identity.X -
                 dVar24 * UE::Math::TQuat<double>::Identity.Y;
        dVar21 = dVar21 + dVar21;
        dVar24 = (dVar21 * UE::Math::TQuat<double>::Identity.Y -
                 dVar23 * UE::Math::TQuat<double>::Identity.Z) +
                 dVar19 * UE::Math::TQuat<double>::Identity.W + dVar24 +
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dVar5 = (dVar23 * UE::Math::TQuat<double>::Identity.X -
                dVar19 * UE::Math::TQuat<double>::Identity.Y) +
                dVar21 * UE::Math::TQuat<double>::Identity.W + dVar20 +
                UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dVar23 = (dVar19 * UE::Math::TQuat<double>::Identity.Z -
                 dVar21 * UE::Math::TQuat<double>::Identity.X) +
                 dVar23 * UE::Math::TQuat<double>::Identity.W + dVar4 +
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_670 = dVar5;
        pFVar12 = FDebugDrawQueue::GetInstance();
        bVar15 = Chaos::Private::bDrawInForeground != false;
        FLinearColor::ToFColorSRGB(&::Color);
        dVar19 = local_698 - local_6b0;
        dVar4 = local_690 - local_6a8;
        dVar20 = local_688 - local_6a0;
        pFVar13 = FDebugDrawQueue::GetInstance();
        if ((pFVar13->bEnableDebugDrawing != false) &&
           (pFVar13 = FDebugDrawQueue::GetInstance(), 0 < pFVar13->NumConsumers)) {
          pFVar1 = &pFVar12->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_6b8 = local_670;
          local_6c8 = dVar24;
          dStack_6c0 = dVar23;
          bVar10 = FDebugDrawQueue::AcceptCommand(pFVar12,0xc,(TVector<double,3> *)&local_6c8);
          if (bVar10) {
            local_438.Rotation.X = UE::Math::TQuat<double>::Identity.X;
            local_438.Rotation.Y = UE::Math::TQuat<double>::Identity.Y;
            local_438.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_438.Text.Data.ArrayNum = 0;
            local_438.Text.Data.ArrayMax = 0;
            local_438.TestBaseActor = (AActor *)0x0;
            local_438.Rotation.Z = UE::Math::TQuat<double>::Identity.Z;
            local_438.Rotation.W = UE::Math::TQuat<double>::Identity.W;
            local_438.Color.field0_0x0.Bits = (FColor_u_0)local_700._0_4_;
            local_438.bPersistentLines = false;
            local_438.LifeTime = 0.0001;
            local_438.Thickness = 0.0;
            local_438.Type = Box;
            local_438.DepthPriority = -bVar15 & 2;
            local_438.Center.field0_0x0._s_0.X = dVar24;
            local_438.Center.field0_0x0._s_0.Y = dVar23;
            local_438.Center.field0_0x0._s_0.Z = dVar5;
            local_438.Extent.field0_0x0._s_0.X = dVar19 * dVar18;
            local_438.Extent.field0_0x0._s_0.Y = dVar4 * dVar18;
            local_438.Extent.field0_0x0._s_0.Z = dVar20 * dVar18;
            FDebugDrawQueue::AddCommand(pFVar12,&local_438);
            if (local_438.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_438.Text.Data.AllocatorInstance.Data);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
      }
    }
  }
  return;
}

// DrawClothClothConstraints @ 14dbdc300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawClothClothConstraints
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  TVector<float,3> *pTVar2;
  TVector<float,3> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  FClothingSimulationSolver *pFVar11;
  longlong *plVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  uint uVar19;
  undefined8 uVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>
  *pTVar28;
  FDebugDrawQueue *pFVar29;
  FDebugDrawQueue *pFVar30;
  FPBDFlatWeightMap *pFVar31;
  uint uVar32;
  FLinearColor *pFVar33;
  FPrimitiveDrawInterface *pFVar34;
  FClothingSimulationCloth *pFVar35;
  uint uVar36;
  longlong lVar37;
  longlong lVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined1 auStackY_f28 [32];
  longlong local_ef0;
  longlong local_ee8;
  longlong local_ee0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_ed8;
  FClothingSimulationCloth *local_ec8;
  FPrimitiveDrawInterface *local_ec0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_eb8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_ea8;
  undefined4 local_e98;
  undefined4 local_e94;
  undefined4 local_e90;
  undefined4 local_e8c;
  undefined4 local_e88;
  undefined4 local_e84;
  undefined4 local_e80;
  TVector<float,3> *local_e78;
  TVector<float,3> *local_e70;
  TVector<float,3> *local_e68;
  TVector<float,3> *local_e60;
  TVector<float,3> *local_e58;
  FClothingSimulationCloth **local_e50;
  float local_e48;
  float local_e44;
  float local_e40;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_e38;
  FClothingSimulationCloth **local_e28;
  longlong local_e20;
  TVector<float,3> *local_e18;
  TVector<float,3> *local_e10;
  double local_e08;
  double dStack_e00;
  undefined8 local_df8;
  TVector<double>_u_0 local_df0;
  TVector<double>_u_0 local_dd8;
  TVector<double>_u_0 local_dc0;
  TArrayView<Chaos::FClothingSimulationCloth_const_*_const,int> local_da8 [2];
  double local_d88;
  double local_d70;
  undefined1 local_d68 [16];
  double local_d58;
  undefined1 local_d50 [16];
  double local_d40;
  undefined1 local_d38 [16];
  double local_d28;
  double local_d20;
  double dStack_d18;
  double local_d10;
  undefined1 local_d08 [16];
  double local_cf8;
  undefined1 local_cf0 [16];
  double local_ce0;
  double local_cd8;
  double dStack_cd0;
  double local_cc8;
  TVector<float,3> local_cc0 [2];
  TVector<double>_u_0 local_ca8;
  double local_c90;
  double local_c88;
  double local_c80;
  undefined4 local_c78;
  undefined1 local_c70;
  undefined4 local_c68;
  byte local_c64;
  undefined4 local_c60;
  void *local_be0;
  undefined8 local_bd8;
  undefined8 local_bd0;
  undefined4 local_b00;
  TVector<double>_u_0 local_af8;
  double local_ae0;
  double local_ad8;
  double local_ad0;
  undefined4 local_ac8;
  undefined1 local_ac0;
  undefined4 local_ab8;
  byte local_ab4;
  undefined4 local_ab0;
  void *local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined4 local_950;
  TVector<double>_u_0 local_948;
  double local_930;
  double dStack_928;
  double local_920;
  undefined4 local_918;
  undefined1 local_910;
  undefined4 local_908;
  byte local_904;
  undefined4 local_900;
  void *local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined4 local_7a0;
  TVector<double>_u_0 local_798 [2];
  undefined4 local_768;
  undefined1 local_760;
  undefined4 local_758;
  byte local_754;
  undefined4 local_750;
  void *local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined4 local_5f0;
  TVector<double>_u_0 local_5e8 [2];
  undefined4 local_5b8;
  undefined1 local_5b0;
  undefined4 local_5a8;
  byte local_5a4;
  undefined4 local_5a0;
  void *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_440;
  TVector<double>_u_0 local_438 [2];
  undefined4 local_408;
  undefined1 local_400;
  undefined4 local_3f8;
  byte local_3f4;
  undefined4 local_3f0;
  void *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_290;
  TVector<double>_u_0 local_288 [2];
  undefined4 local_258;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  fVar18 = __real_3b808081;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_f28;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    lVar37 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_ec0 = param_1;
    if ((*(int *)(lVar37 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ActiveConstraintColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.R];
      ActiveConstraintColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.G];
      ActiveConstraintColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Turquoise.field0_0x0._s_0.B];
      ActiveConstraintColor.field0_0x0._s_0.A = (float)FColor::Turquoise.field0_0x0._3_1_ * fVar18;
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar37 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      InactiveConstraintColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.R];
      InactiveConstraintColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.G];
      InactiveConstraintColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.B];
      InactiveConstraintColor.field0_0x0._s_0.A = (float)FColor::Silver.field0_0x0._3_1_ * fVar18;
      _Init_thread_footer(&::_TSS1);
    }
    FClothingSimulationSolver::GetCloths(this->Solver,local_da8);
    uVar19 = __xmm_80000000800000008000000080000000;
    fVar18 = __real_3f800000;
    local_e28 = local_da8[0].DataPtr + local_da8[0].ArrayNum;
    if (local_da8[0].DataPtr != local_e28) {
      do {
        pFVar35 = *local_da8[0].DataPtr;
        local_ec8 = pFVar35;
        local_e50 = local_da8[0].DataPtr;
        iVar23 = FClothingSimulationCloth::GetParticleRangeId(pFVar35,this->Solver);
        if (iVar23 != -1) {
          pTVar28 = TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
                            *)&this->Solver->ClothsConstraints,iVar23);
          if ((pTVar28 ==
               (TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>
                *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L""), bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar37 = *(longlong *)&pTVar28->field_0x8;
          lVar10 = *(longlong *)(lVar37 + 0x1c0);
          if (lVar10 != 0) {
            FClothingSimulationCloth::GetParticlePositions(pFVar35,&local_e38,this->Solver);
            iVar23 = *(int *)(lVar10 + 0x10);
            uVar36 = 0;
            pFVar35 = local_ec8;
            if (0 < iVar23) {
              local_ef0 = 0;
              local_ee0 = 0;
              do {
                uVar32 = ~uVar36 >> 0x1f;
                uVar24 = 0;
                if ((int)uVar36 < iVar23) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar24 = *(uint *)(local_ee0 + *(longlong *)(lVar10 + 8));
                uVar25 = 0;
                if ((int)uVar24 < local_e38.ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pTVar2 = local_e38.DataPtr;
                uVar25 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x10)) {
                  uVar25 = uVar32;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar25 = *(uint *)(local_ee0 + 4 + *(longlong *)(lVar10 + 8));
                uVar26 = 0;
                if ((int)uVar25 < local_e38.ArrayNum) {
                  uVar26 = ~uVar25 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pTVar3 = local_e38.DataPtr;
                fVar40 = *(float *)(local_e38.DataPtr + (int)uVar25);
                uVar26 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x30)) {
                  uVar26 = uVar32;
                }
                fVar41 = *(float *)&local_e38.DataPtr[(int)uVar25].field_0x4 -
                         *(float *)&pTVar2[(int)uVar24].field_0x4;
                fVar44 = *(float *)(pTVar2 + (int)uVar24);
                fVar39 = *(float *)&local_e38.DataPtr[(int)uVar25].field_0x8 -
                         *(float *)&pTVar2[(int)uVar24].field_0x8;
                if ((uVar26 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar43 = *(float *)(local_ef0 + *(longlong *)(lVar10 + 0x28));
                pFVar31 = (FPBDFlatWeightMap *)(lVar10 + 0x78);
                if (fVar41 * fVar41 + (fVar40 - fVar44) * (fVar40 - fVar44) + fVar39 * fVar39 <
                    fVar43 * fVar43) {
                  pFVar31 = (FPBDFlatWeightMap *)(lVar10 + 0xa8);
                }
                fVar40 = Softs::FPBDFlatWeightMap::GetValue(pFVar31,uVar36);
                pFVar34 = local_ec0;
                pFVar33 = &InactiveConstraintColor;
                pFVar11 = this->Solver;
                dVar7 = pFVar11->LocalSpaceScale;
                dVar8 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x10;
                dVar9 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x8;
                local_dd8._s_0.Z = (double)*(float *)&pTVar2[(int)uVar24].field_0x8 * dVar7 + dVar8;
                local_dd8._s_0.X =
                     (double)*(float *)(pTVar2 + (int)uVar24) * dVar7 +
                     *(double *)&pFVar11->LocalSpaceLocation;
                local_dc0._s_0.X =
                     (double)*(float *)(pTVar3 + (int)uVar25) * dVar7 +
                     *(double *)&pFVar11->LocalSpaceLocation;
                local_dd8._s_0.Y = (double)*(float *)&pTVar2[(int)uVar24].field_0x4 * dVar7 + dVar9;
                if (0.0 < fVar40) {
                  pFVar33 = &ActiveConstraintColor;
                }
                local_dc0._s_0.Y = (double)*(float *)&pTVar3[(int)uVar25].field_0x4 * dVar7 + dVar9;
                local_dc0._s_0.Z = (double)*(float *)&pTVar3[(int)uVar25].field_0x8 * dVar7 + dVar8;
                Chaos::DrawLine(local_ec0,(TVector<double> *)&local_dd8._s_0,
                                (TVector<double> *)&local_dc0._s_0,pFVar33);
                DrawPoint(pFVar34,(TVector<double> *)&local_dd8._s_0,pFVar33,(UMaterial *)0x0,fVar18
                         );
                DrawPoint(pFVar34,(TVector<double> *)&local_dc0._s_0,pFVar33,(UMaterial *)0x0,fVar18
                         );
                uVar36 = uVar36 + 1;
                local_ef0 = local_ef0 + 4;
                local_ee0 = local_ee0 + 8;
                iVar23 = *(int *)(lVar10 + 0x10);
                pFVar35 = local_ec8;
              } while ((int)uVar36 < iVar23);
            }
          }
          lVar10 = *(longlong *)(lVar37 + 0x1d0);
          if (lVar10 != 0) {
            FClothingSimulationCloth::GetParticlePositions(pFVar35,&local_eb8,this->Solver);
            iVar23 = *(int *)(lVar10 + 0x10);
            uVar36 = 0;
            if (0 < iVar23) {
              local_ef0 = 0;
              lVar38 = 0;
              do {
                uVar32 = ~uVar36 >> 0x1f;
                uVar24 = 0;
                if ((int)uVar36 < iVar23) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar24 = *(uint *)(lVar38 + *(longlong *)(lVar10 + 8));
                uVar25 = 0;
                if ((int)uVar24 < local_eb8.ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_e68 = (TVector<float,3> *)((longlong)(int)uVar24 * 3);
                local_e60 = local_eb8.DataPtr;
                uVar24 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x10)) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar24 = *(uint *)(lVar38 + 4 + *(longlong *)(lVar10 + 8));
                uVar25 = 0;
                if ((int)uVar24 < local_eb8.ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_e78 = local_eb8.DataPtr;
                uVar25 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x10)) {
                  uVar25 = uVar32;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar25 = *(uint *)(lVar38 + 8 + *(longlong *)(lVar10 + 8));
                uVar26 = 0;
                if ((int)uVar25 < local_eb8.ArrayNum) {
                  uVar26 = ~uVar25 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pTVar2 = local_eb8.DataPtr;
                uVar26 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x10)) {
                  uVar26 = uVar32;
                }
                if ((uVar26 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar26 = *(uint *)(lVar38 + 0xc + *(longlong *)(lVar10 + 8));
                uVar27 = 0;
                if ((int)uVar26 < local_eb8.ArrayNum) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_e70 = local_eb8.DataPtr;
                uVar27 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x20)) {
                  uVar27 = uVar32;
                }
                if ((uVar27 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar41 = (float)(*(uint *)(lVar38 + 4 + *(longlong *)(lVar10 + 0x18)) ^ uVar19);
                fVar40 = *(float *)(local_e78 + (int)uVar24);
                fVar44 = *(float *)&local_e78[(int)uVar24].field_0x4;
                fVar39 = *(float *)&local_e78[(int)uVar24].field_0x8;
                uVar24 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x20)) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar43 = *(float *)(lVar38 + 8 + *(longlong *)(lVar10 + 0x18));
                fVar47 = *(float *)(pTVar2 + (int)uVar25);
                fVar42 = *(float *)&pTVar2[(int)uVar25].field_0x4;
                uVar24 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x20)) {
                  uVar24 = uVar32;
                }
                fVar48 = *(float *)&pTVar2[(int)uVar25].field_0x8;
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pTVar3 = local_e60;
                pTVar2 = local_e68;
                fVar4 = *(float *)(lVar38 + 0xc + *(longlong *)(lVar10 + 0x18));
                fVar39 = (fVar41 * fVar39 - fVar43 * fVar48) -
                         fVar4 * *(float *)&local_e70[(int)uVar26].field_0x8;
                fVar44 = (fVar41 * fVar44 - fVar43 * fVar42) -
                         fVar4 * *(float *)&local_e70[(int)uVar26].field_0x4;
                uVar24 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x30)) {
                  uVar24 = uVar32;
                }
                fVar43 = (fVar41 * fVar40 - fVar43 * fVar47) -
                         fVar4 * *(float *)(local_e70 + (int)uVar26);
                fVar40 = fVar39 - *(float *)(&local_e60->field_0x8 + (longlong)local_e68 * 4);
                fVar41 = fVar44 - *(float *)(&local_e60->field_0x4 + (longlong)local_e68 * 4);
                fVar47 = fVar43 - *(float *)(&local_e60->field_0x0 + (longlong)local_e68 * 4);
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar42 = *(float *)(local_ef0 + *(longlong *)(lVar10 + 0x28));
                pFVar31 = (FPBDFlatWeightMap *)(lVar10 + 0x78);
                if (fVar47 * fVar47 + fVar41 * fVar41 + fVar40 * fVar40 < fVar42 * fVar42) {
                  pFVar31 = (FPBDFlatWeightMap *)(lVar10 + 0xa8);
                }
                fVar40 = Softs::FPBDFlatWeightMap::GetValue(pFVar31,uVar36);
                pFVar34 = local_ec0;
                pFVar33 = &InactiveConstraintColor;
                pFVar11 = this->Solver;
                dVar7 = pFVar11->LocalSpaceScale;
                dVar8 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x10;
                dVar9 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x8;
                local_df8 = (double)*(float *)(&pTVar3->field_0x8 + (longlong)pTVar2 * 4) * dVar7 +
                            dVar8;
                if (0.0 < fVar40) {
                  pFVar33 = &ActiveConstraintColor;
                }
                local_df0._s_0.Z = (double)fVar39 * dVar7 + dVar8;
                dVar8 = (double)*(float *)(&pTVar3->field_0x0 + (longlong)pTVar2 * 4) * dVar7 +
                        *(double *)&pFVar11->LocalSpaceLocation;
                dStack_e00 = (double)*(float *)(&pTVar3->field_0x4 + (longlong)pTVar2 * 4) * dVar7 +
                             dVar9;
                uVar46 = SUB84(dStack_e00,0);
                uVar49 = (undefined4)((ulonglong)dStack_e00 >> 0x20);
                dVar16 = (double)fVar43 * dVar7 + *(double *)&pFVar11->LocalSpaceLocation;
                dVar9 = (double)fVar44 * dVar7 + dVar9;
                local_e08 = dVar8;
                local_df0._s_0.X = dVar16;
                local_df0._s_0.Y = dVar9;
                if (local_ec0 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar21 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(pFVar33);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    uVar20 = local_df8;
                    local_d58 = (double)local_df8;
                    unique0x1000070d = uVar46;
                    unique0x10000711 = uVar49;
                    local_d68._8_4_ = uVar46;
                    local_d68._0_8_ = dVar8;
                    local_d68._12_4_ = uVar49;
                    bVar22 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)local_d68);
                    if (bVar22) {
                      local_948._8_4_ = uVar46;
                      local_948._0_8_ = dVar8;
                      local_948._12_4_ = uVar49;
                      local_880 = (void *)0x0;
                      local_878 = 0;
                      local_870 = 0;
                      local_920 = local_df0._s_0.Z;
                      local_948._s_0.Z = (double)uVar20;
                      local_918 = local_e84;
                      local_910 = 0;
                      local_908 = 0x38d1b717;
                      local_900 = 0;
                      local_7a0 = 1;
                      local_df0._s_0.X = dVar16;
                      local_df0._s_0.Y = dVar9;
                      local_930 = dVar16;
                      dStack_928 = dVar9;
                      local_904 = -bVar21 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_948._s_0);
                      if (local_880 != (void *)0x0) {
                        FMemory::Free(local_880);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    pFVar34 = local_ec0;
                  }
                }
                DrawPoint(pFVar34,(TVector<double> *)&local_e08,pFVar33,(UMaterial *)0x0,fVar18);
                DrawPoint(pFVar34,(TVector<double> *)&local_df0._s_0,pFVar33,(UMaterial *)0x0,fVar18
                         );
                local_ef0 = local_ef0 + 4;
                uVar36 = uVar36 + 1;
                iVar23 = *(int *)(lVar10 + 0x10);
                lVar38 = lVar38 + 0x10;
              } while ((int)uVar36 < iVar23);
            }
          }
          pFVar35 = local_ec8;
          lVar10 = *(longlong *)(lVar37 + 0x1e0);
          if (lVar10 != 0) {
            FClothingSimulationCloth::GetParticlePositions(local_ec8,&local_ed8,this->Solver);
            iVar23 = *(int *)(lVar10 + 0x10);
            uVar36 = 0;
            if (0 < iVar23) {
              local_ef0 = 0;
              lVar38 = 0;
              do {
                uVar32 = ~uVar36 >> 0x1f;
                uVar24 = 0;
                if ((int)uVar36 < iVar23) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar24 = *(uint *)(lVar38 + *(longlong *)(lVar10 + 8));
                uVar25 = 0;
                if ((int)uVar24 < local_ed8.ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_e60 = (TVector<float,3> *)((longlong)(int)uVar24 * 3);
                local_e68 = local_ed8.DataPtr;
                uVar24 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x10)) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar24 = *(uint *)(lVar38 + 4 + *(longlong *)(lVar10 + 8));
                uVar25 = 0;
                if ((int)uVar24 < local_ed8.ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_e70 = (TVector<float,3> *)((longlong)(int)uVar24 * 3);
                local_e78 = local_ed8.DataPtr;
                uVar24 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x10)) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar24 = *(uint *)(lVar38 + 8 + *(longlong *)(lVar10 + 8));
                uVar25 = 0;
                if ((int)uVar24 < local_ed8.ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_e18 = local_ed8.DataPtr;
                uVar25 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x10)) {
                  uVar25 = uVar32;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar25 = *(uint *)(lVar38 + 0xc + *(longlong *)(lVar10 + 8));
                uVar26 = 0;
                if ((int)uVar25 < local_ed8.ArrayNum) {
                  uVar26 = ~uVar25 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_e20 = (longlong)(int)uVar25 * 3;
                local_e10 = local_ed8.DataPtr;
                uVar25 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x10)) {
                  uVar25 = uVar32;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar25 = *(uint *)(lVar38 + 0x10 + *(longlong *)(lVar10 + 8));
                uVar26 = 0;
                if ((int)uVar25 < local_ed8.ArrayNum) {
                  uVar26 = ~uVar25 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pTVar2 = local_ed8.DataPtr;
                uVar26 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x10)) {
                  uVar26 = uVar32;
                }
                if ((uVar26 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar26 = *(uint *)(lVar38 + 0x14 + *(longlong *)(lVar10 + 8));
                uVar27 = 0;
                if ((int)uVar26 < local_ed8.ArrayNum) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_e58 = local_ed8.DataPtr;
                uVar27 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x20)) {
                  uVar27 = uVar32;
                }
                if ((uVar27 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar40 = *(float *)(lVar38 + *(longlong *)(lVar10 + 0x18));
                fVar44 = *(float *)(&local_e68->field_0x0 + (longlong)local_e60 * 4);
                fVar39 = *(float *)(&local_e68->field_0x4 + (longlong)local_e60 * 4);
                fVar41 = *(float *)(&local_e68->field_0x8 + (longlong)local_e60 * 4);
                uVar27 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x20)) {
                  uVar27 = uVar32;
                }
                if ((uVar27 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar43 = *(float *)(lVar38 + 4 + *(longlong *)(lVar10 + 0x18));
                fVar47 = *(float *)(&local_e78->field_0x0 + (longlong)local_e70 * 4);
                fVar42 = *(float *)(&local_e78->field_0x4 + (longlong)local_e70 * 4);
                fVar48 = *(float *)(&local_e78->field_0x8 + (longlong)local_e70 * 4);
                uVar27 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x20)) {
                  uVar27 = uVar32;
                }
                if ((uVar27 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar4 = *(float *)(lVar38 + 8 + *(longlong *)(lVar10 + 0x18));
                fVar44 = fVar4 * *(float *)(local_e18 + (int)uVar24) +
                         fVar43 * fVar47 + fVar40 * fVar44;
                fVar39 = fVar4 * *(float *)&local_e18[(int)uVar24].field_0x4 +
                         fVar43 * fVar42 + fVar40 * fVar39;
                uVar27 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x20)) {
                  uVar27 = uVar32;
                }
                fVar40 = fVar4 * *(float *)&local_e18[(int)uVar24].field_0x8 +
                         fVar43 * fVar48 + fVar40 * fVar41;
                if ((uVar27 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar42 = (float)(*(uint *)(lVar38 + 0xc + *(longlong *)(lVar10 + 0x18)) ^ uVar19);
                fVar41 = *(float *)(&local_e10->field_0x0 + local_e20 * 4);
                fVar43 = *(float *)(&local_e10->field_0x4 + local_e20 * 4);
                fVar47 = *(float *)(&local_e10->field_0x8 + local_e20 * 4);
                uVar24 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x20)) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar48 = *(float *)(lVar38 + 0x10 + *(longlong *)(lVar10 + 0x18));
                fVar4 = *(float *)(pTVar2 + (int)uVar25);
                fVar45 = *(float *)&pTVar2[(int)uVar25].field_0x4;
                uVar24 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x20)) {
                  uVar24 = uVar32;
                }
                fVar5 = *(float *)&pTVar2[(int)uVar25].field_0x8;
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar6 = *(float *)(lVar38 + 0x14 + *(longlong *)(lVar10 + 0x18));
                fVar47 = (fVar42 * fVar47 - fVar48 * fVar5) -
                         fVar6 * *(float *)&local_e58[(int)uVar26].field_0x8;
                fVar45 = (fVar42 * fVar43 - fVar48 * fVar45) -
                         fVar6 * *(float *)&local_e58[(int)uVar26].field_0x4;
                fVar43 = fVar47 - fVar40;
                uVar24 = 0;
                if ((int)uVar36 < *(int *)(lVar10 + 0x30)) {
                  uVar24 = uVar32;
                }
                fVar42 = (fVar42 * fVar41 - fVar48 * fVar4) -
                         fVar6 * *(float *)(local_e58 + (int)uVar26);
                fVar48 = fVar45 - fVar39;
                fVar41 = fVar42 - fVar44;
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar4 = *(float *)(local_ef0 + *(longlong *)(lVar10 + 0x28));
                pFVar31 = (FPBDFlatWeightMap *)(lVar10 + 0x78);
                if (fVar48 * fVar48 + fVar41 * fVar41 + fVar43 * fVar43 < fVar4 * fVar4) {
                  pFVar31 = (FPBDFlatWeightMap *)(lVar10 + 0xa8);
                }
                fVar41 = Softs::FPBDFlatWeightMap::GetValue(pFVar31,uVar36);
                pFVar33 = &InactiveConstraintColor;
                pFVar11 = this->Solver;
                dVar7 = pFVar11->LocalSpaceScale;
                dVar8 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x10;
                dVar9 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x8;
                if (__real_00000000 < fVar41) {
                  pFVar33 = &ActiveConstraintColor;
                }
                dVar15 = (double)fVar40 * dVar7 + dVar8;
                dVar8 = (double)fVar47 * dVar7 + dVar8;
                dVar14 = (double)fVar44 * dVar7 + *(double *)&pFVar11->LocalSpaceLocation;
                dVar17 = (double)fVar39 * dVar7 + dVar9;
                uVar46 = (undefined4)((ulonglong)dVar17 >> 0x20);
                dVar16 = (double)fVar42 * dVar7 + *(double *)&pFVar11->LocalSpaceLocation;
                dVar9 = (double)fVar45 * dVar7 + dVar9;
                local_d88 = dVar15;
                local_d70 = dVar8;
                if (local_ec0 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar21 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(pFVar33);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  dVar7 = local_d88;
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_d40 = dVar7;
                    local_d50._8_4_ = SUB84(dVar17,0);
                    local_d50._0_8_ = dVar14;
                    local_d50._12_4_ = uVar46;
                    bVar22 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)local_d50);
                    if (bVar22) {
                      local_be0 = (void *)0x0;
                      local_bd8 = 0;
                      local_bd0 = 0;
                      local_c78 = local_e98;
                      local_c70 = 0;
                      local_c68 = 0x38d1b717;
                      local_c60 = 0;
                      local_b00 = 1;
                      local_ca8._s_0.X = dVar14;
                      local_ca8._s_0.Y = dVar17;
                      local_ca8._s_0.Z = dVar15;
                      local_c90 = dVar16;
                      local_c88 = dVar9;
                      local_c80 = dVar8;
                      local_c64 = -bVar21 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_ca8._s_0);
                      if (local_be0 != (void *)0x0) {
                        FMemory::Free(local_be0);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar21 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(pFVar33);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_d28 = dVar7;
                    local_d38._8_4_ = SUB84(dVar17,0);
                    local_d38._0_8_ = dVar14;
                    local_d38._12_4_ = uVar46;
                    bVar22 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)local_d38);
                    if (bVar22) {
                      local_6d0 = (void *)0x0;
                      local_6c8 = 0;
                      local_6c0 = 0;
                      local_760 = 0;
                      local_5f0 = 0;
                      local_768 = local_e94;
                      local_758 = 0x38d1b717;
                      local_750 = 0x3f800000;
                      local_798[0]._0_8_ = dVar14;
                      local_798[0]._8_8_ = dVar17;
                      local_798[0]._16_8_ = dVar15;
                      local_754 = -bVar21 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_798[0]._s_0);
                      if (local_6d0 != (void *)0x0) {
                        FMemory::Free(local_6d0);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar21 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(pFVar33);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_d10 = local_d70;
                    local_d20 = dVar16;
                    dStack_d18 = dVar9;
                    bVar22 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)&local_d20);
                    if (bVar22) {
                      local_520 = (void *)0x0;
                      local_518 = 0;
                      local_510 = 0;
                      local_5b0 = 0;
                      local_440 = 0;
                      local_5b8 = local_e90;
                      local_5a8 = 0x38d1b717;
                      local_5a0 = 0x3f800000;
                      local_5e8[0]._0_8_ = dVar16;
                      local_5e8[0]._8_8_ = dVar9;
                      local_5e8[0]._16_8_ = dVar8;
                      local_5a4 = -bVar21 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_5e8[0]._s_0);
                      if (local_520 != (void *)0x0) {
                        FMemory::Free(local_520);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                }
                local_ef0 = local_ef0 + 4;
                uVar36 = uVar36 + 1;
                iVar23 = *(int *)(lVar10 + 0x10);
                lVar38 = lVar38 + 0x18;
                pFVar35 = local_ec8;
              } while ((int)uVar36 < iVar23);
            }
          }
          plVar12 = *(longlong **)(lVar37 + 0x1f0);
          if (plVar12 != (longlong *)0x0) {
            FClothingSimulationCloth::GetParticlePositions(pFVar35,&local_ea8,this->Solver);
            iVar23 = (int)plVar12[1];
            uVar36 = 0;
            local_ee8 = 0;
            if (0 < iVar23) {
              lVar37 = 0;
              do {
                uVar32 = ~uVar36 >> 0x1f;
                uVar24 = 0;
                if ((int)uVar36 < iVar23) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar24 = *(uint *)(*plVar12 + lVar37);
                uVar25 = 0;
                if ((int)uVar24 < local_ea8.ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pTVar2 = local_ea8.DataPtr + (int)uVar24;
                uVar24 = 0;
                if ((int)uVar36 < (int)plVar12[1]) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar24 = *(uint *)(*plVar12 + 4 + lVar37);
                uVar25 = 0;
                if ((int)uVar24 < local_ea8.ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_e58 = local_ea8.DataPtr + (int)uVar24;
                uVar24 = 0;
                if ((int)uVar36 < (int)plVar12[1]) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar24 = *(uint *)(*plVar12 + 8 + lVar37);
                uVar25 = 0;
                if ((int)uVar24 < local_ea8.ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pTVar3 = local_ea8.DataPtr + (int)uVar24;
                uVar24 = 0;
                if ((int)uVar36 < (int)plVar12[1]) {
                  uVar24 = uVar32;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar24 = *(uint *)(*plVar12 + 0xc + lVar37);
                uVar25 = 0;
                if ((int)uVar24 < local_ea8.ArrayNum) {
                  uVar25 = ~uVar24 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                FindClosestPointAndBaryOnTriangle<float,3>
                          ((TVector<float,3> *)&local_e48,local_e58,pTVar3,
                           local_ea8.DataPtr + (int)uVar24,pTVar2,local_cc0);
                pFVar11 = this->Solver;
                dVar7 = pFVar11->LocalSpaceScale;
                dVar8 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x8;
                dVar9 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x10;
                uVar24 = 0;
                if ((int)uVar36 < (int)plVar12[7]) {
                  uVar24 = uVar32;
                }
                dVar15 = (double)*(float *)&pTVar2->field_0x8 * dVar7 + dVar9;
                dVar9 = (double)local_e40 * dVar7 + dVar9;
                dVar16 = (double)*(float *)pTVar2 * dVar7 + *(double *)&pFVar11->LocalSpaceLocation;
                dVar14 = (double)*(float *)&pTVar2->field_0x4 * dVar7 + dVar8;
                dVar17 = (double)local_e48 * dVar7 + *(double *)&pFVar11->LocalSpaceLocation;
                dVar8 = (double)local_e44 * dVar7 + dVar8;
                local_d88 = dVar9;
                local_d70 = dVar15;
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar33 = &InactiveConstraintColor;
                if (*(char *)(local_ee8 + plVar12[6]) != '\0') {
                  pFVar33 = &ActiveConstraintColor;
                }
                if (local_ec0 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar21 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(pFVar33);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  dVar7 = local_d70;
                  uVar46 = (undefined4)((ulonglong)dVar14 >> 0x20);
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_cf8 = dVar7;
                    local_d08._8_4_ = SUB84(dVar14,0);
                    local_d08._0_8_ = dVar16;
                    local_d08._12_4_ = uVar46;
                    bVar22 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)local_d08);
                    if (bVar22) {
                      local_a30 = (void *)0x0;
                      local_a28 = 0;
                      local_a20 = 0;
                      local_ac8 = local_e8c;
                      local_ac0 = 0;
                      local_ab8 = 0x38d1b717;
                      local_ab0 = 0;
                      local_950 = 1;
                      local_af8._s_0.X = dVar16;
                      local_af8._s_0.Y = dVar14;
                      local_af8._s_0.Z = dVar15;
                      local_ae0 = dVar17;
                      local_ad8 = dVar8;
                      local_ad0 = dVar9;
                      local_ab4 = -bVar21 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_af8._s_0);
                      if (local_a30 != (void *)0x0) {
                        FMemory::Free(local_a30);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar21 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(pFVar33);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_ce0 = dVar7;
                    local_cf0._8_4_ = SUB84(dVar14,0);
                    local_cf0._0_8_ = dVar16;
                    local_cf0._12_4_ = uVar46;
                    bVar22 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)local_cf0);
                    if (bVar22) {
                      local_370 = (void *)0x0;
                      local_368 = 0;
                      local_360 = 0;
                      local_400 = 0;
                      local_290 = 0;
                      local_408 = local_e88;
                      local_3f8 = 0x38d1b717;
                      local_3f0 = 0x3f800000;
                      local_438[0]._0_8_ = dVar16;
                      local_438[0]._8_8_ = dVar14;
                      local_438[0]._16_8_ = dVar15;
                      local_3f4 = -bVar21 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_438[0]._s_0);
                      if (local_370 != (void *)0x0) {
                        FMemory::Free(local_370);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar21 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(pFVar33);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_cc8 = local_d88;
                    local_cd8 = dVar17;
                    dStack_cd0 = dVar8;
                    bVar22 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)&local_cd8);
                    if (bVar22) {
                      local_1c0 = (void *)0x0;
                      local_1b8 = 0;
                      local_1b0 = 0;
                      local_258 = local_e80;
                      local_250 = 0;
                      local_248 = 0x38d1b717;
                      local_240 = 0x3f800000;
                      local_e0 = 0;
                      local_288[0]._0_8_ = dVar17;
                      local_288[0]._8_8_ = dVar8;
                      local_288[0]._16_8_ = dVar9;
                      local_244 = -bVar21 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_288[0]._s_0);
                      if (local_1c0 != (void *)0x0) {
                        FMemory::Free(local_1c0);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                }
                local_ee8 = local_ee8 + 1;
                uVar36 = uVar36 + 1;
                iVar23 = (int)plVar12[1];
                lVar37 = lVar37 + 0x10;
              } while ((int)uVar36 < iVar23);
            }
          }
        }
        local_da8[0].DataPtr = local_e50 + 1;
      } while (local_da8[0].DataPtr != local_e28);
    }
  }
  return;
}

// DrawCollision @ 14dbde4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawCollision
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1,bool param_2)

{
  FWindowsRecursiveMutex *pFVar1;
  double dVar2;
  double dVar3;
  FClothingSimulationCloth *pFVar4;
  FClothingSimulationCollider *pFVar5;
  FClothingSimulationSolver *pFVar6;
  FEvolution *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar23;
  FDebugDrawQueue *pFVar24;
  FDebugDrawQueue *pFVar25;
  int iVar26;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar27;
  FPrimitiveDrawInterface *pFVar28;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar29;
  FScriptContainerElement *pFVar30;
  FClothingSimulationCloth **ppFVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStack_ed8 [32];
  longlong local_eb8;
  longlong local_eb0;
  undefined1 local_ea8 [8];
  FPrimitiveDrawInterface *local_ea0;
  FClothVisualizationNoGC *local_e98;
  int local_e90;
  undefined4 local_e8c;
  undefined4 local_e88;
  undefined4 local_e84;
  undefined4 local_e80;
  int local_e7c;
  undefined4 local_e78;
  undefined4 local_e74;
  undefined4 local_e70;
  double local_e68;
  double local_e60;
  double local_e58;
  TVector<double>_u_0 local_e50;
  TVector<double>_u_0 local_e38;
  double local_e20;
  double local_e18;
  double local_e10;
  FClothVisualizationNoGC *local_e08;
  FPrimitiveDrawInterface *local_e00;
  undefined1 local_df8;
  undefined1 local_df0 [16];
  double local_de0;
  undefined1 local_dd8 [16];
  double local_dc8;
  undefined1 local_dc0 [16];
  double local_db0;
  undefined1 local_da8 [16];
  double local_d98;
  TArrayView<Chaos::FClothingSimulationCloth_const_*_const,int> local_d90;
  TVector<double>_u_0 local_d80;
  double local_d58;
  undefined1 local_d50 [16];
  double local_d40;
  undefined1 local_d38 [16];
  double local_d28;
  undefined1 local_d20 [16];
  double local_d10;
  undefined1 local_d08 [16];
  double local_cf8;
  undefined1 local_cf0 [16];
  double local_ce0;
  undefined1 local_cd8 [16];
  double local_cc8;
  undefined1 local_cc0 [16];
  double local_cb0;
  TVector<double>_u_0 local_ca8;
  double local_c90;
  double local_c88;
  double local_c80;
  undefined4 local_c78;
  undefined1 local_c70;
  undefined4 local_c68;
  byte local_c64;
  undefined4 local_c60;
  void *local_be0;
  undefined8 local_bd8;
  undefined8 local_bd0;
  undefined4 local_b00;
  TVector<double>_u_0 local_af8;
  double local_ae0;
  double local_ad8;
  double local_ad0;
  undefined4 local_ac8;
  undefined1 local_ac0;
  undefined4 local_ab8;
  byte local_ab4;
  undefined4 local_ab0;
  void *local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined4 local_950;
  TVector<double>_u_0 local_948;
  double local_930;
  double local_928;
  double local_920;
  undefined4 local_918;
  undefined1 local_910;
  undefined4 local_908;
  byte local_904;
  undefined4 local_900;
  void *local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined4 local_7a0;
  TVector<double>_u_0 local_798;
  double local_780;
  double local_778;
  double local_770;
  undefined4 local_768;
  undefined1 local_760;
  undefined4 local_758;
  byte local_754;
  undefined4 local_750;
  void *local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined4 local_5f0;
  TVector<double>_u_0 local_5e8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  undefined4 local_5b8;
  undefined1 local_5b0;
  undefined4 local_5a8;
  byte local_5a4;
  undefined4 local_5a0;
  void *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_440;
  TVector<double>_u_0 local_438;
  double local_420;
  double local_418;
  double local_410;
  undefined4 local_408;
  undefined1 local_400;
  undefined4 local_3f8;
  byte local_3f4;
  undefined4 local_3f0;
  void *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_290;
  TVector<double>_u_0 local_288 [2];
  undefined4 local_258;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_ed8;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    local_ea0 = param_1;
    local_e98 = this;
    local_e08 = this;
    local_e00 = param_1;
    local_df8 = param_2;
    FClothingSimulationSolver::GetCloths(this->Solver,&local_d90);
    for (ppFVar31 = local_d90.DataPtr; ppFVar31 != local_d90.DataPtr + local_d90.ArrayNum;
        ppFVar31 = ppFVar31 + 1) {
      pFVar4 = *ppFVar31;
      pFVar30 = (pFVar4->Colliders).AllocatorInstance.Data;
      iVar26 = (pFVar4->Colliders).ArrayNum;
      pFVar8 = pFVar30 + (longlong)iVar26 * 8;
      while( true ) {
        if ((pFVar4->Colliders).ArrayNum != iVar26) {
          local_ea8[0] = 0;
          `TCheckedPointerIterator<Chaos::FClothingSimulationCollider_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_ea8);
        }
        if (pFVar30 == pFVar8) break;
        pFVar5 = *(FClothingSimulationCollider **)pFVar30;
        `Chaos::FClothVisualizationNoGC::DrawCollision'::__l2::<lambda_1>::operator()
                  (&local_e08,pFVar5,pFVar4,LODless);
        `Chaos::FClothVisualizationNoGC::DrawCollision'::__l2::<lambda_1>::operator()
                  (&local_e08,pFVar5,pFVar4,External);
        `Chaos::FClothVisualizationNoGC::DrawCollision'::__l2::<lambda_1>::operator()
                  (&local_e08,pFVar5,pFVar4,LODs);
        pFVar30 = pFVar30 + 8;
      }
      this = local_e98;
    }
    pFVar6 = this->Solver;
    if ((pFVar6->Evolution).Ptr == (FEvolution *)0x0) {
      pTVar27 = &((pFVar6->PBDEvolution).Ptr)->MCollisionContacts;
      iVar26 = (((pFVar6->PBDEvolution).Ptr)->MCollisionNormals).ArrayNum;
    }
    else {
      iVar26 = (pFVar6->CollisionNormals).ArrayNum;
      pTVar27 = &pFVar6->CollisionContacts;
    }
    if ((pTVar27->ArrayNum != iVar26) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Solver->GetCollisionContacts().Num() == Solver->GetCollisionNormals().Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                            ,0x6e3,L""), bVar20)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar6 = this->Solver;
    if ((pFVar6->Evolution).Ptr == (FEvolution *)0x0) {
      pTVar29 = &((pFVar6->PBDEvolution).Ptr)->MCollisionPhis;
      local_e90 = (((pFVar6->PBDEvolution).Ptr)->MCollisionContacts).ArrayNum;
    }
    else {
      pTVar29 = &pFVar6->CollisionPhis;
      local_e90 = (pFVar6->CollisionContacts).ArrayNum;
    }
    uVar35 = 0;
    lVar33 = 0;
    lVar32 = 0;
    local_e7c = pTVar29->ArrayNum;
    while( true ) {
      pFVar6 = this->Solver;
      pFVar7 = (pFVar6->Evolution).Ptr;
      pTVar27 = &pFVar6->CollisionContacts;
      pTVar23 = pTVar27;
      if (pFVar7 == (FEvolution *)0x0) {
        pTVar23 = &((pFVar6->PBDEvolution).Ptr)->MCollisionContacts;
      }
      if (pTVar23->ArrayNum <= (int)uVar35) break;
      if (pFVar7 == (FEvolution *)0x0) {
        pTVar27 = &((pFVar6->PBDEvolution).Ptr)->MCollisionContacts;
      }
      uVar34 = ~uVar35 >> 0x1f;
      uVar22 = 0;
      if ((int)uVar35 < pTVar27->ArrayNum) {
        uVar22 = uVar34;
      }
      if (uVar22 == 0) {
        local_eb8 = (longlong)(int)uVar35;
        local_eb0 = (longlong)pTVar27->ArrayNum;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar6 = this->Solver;
      pFVar8 = (pTVar27->AllocatorInstance).Data;
      dVar2 = pFVar6->LocalSpaceScale;
      dVar13 = (double)*(float *)(pFVar8 + lVar32 + 8) * dVar2 +
               *(double *)&(pFVar6->LocalSpaceLocation).field_0x10;
      dVar12 = (double)*(float *)(pFVar8 + lVar32) * dVar2 + *(double *)&pFVar6->LocalSpaceLocation;
      dVar2 = (double)*(float *)(pFVar8 + lVar32 + 4) * dVar2 +
              *(double *)&(pFVar6->LocalSpaceLocation).field_0x8;
      uVar38 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if ((pFVar6->Evolution).Ptr == (FEvolution *)0x0) {
        pTVar27 = &((pFVar6->PBDEvolution).Ptr)->MCollisionNormals;
      }
      else {
        pTVar27 = &pFVar6->CollisionNormals;
      }
      uVar22 = 0;
      if ((int)uVar35 < pTVar27->ArrayNum) {
        uVar22 = uVar34;
      }
      local_d58 = dVar13;
      if ((uVar22 == 0) &&
         (local_eb8 = lVar33, local_eb0 = (longlong)pTVar27->ArrayNum,
         bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (pTVar27->AllocatorInstance).Data;
      dVar3 = this->Solver->LocalSpaceScale;
      local_e68 = (double)*(float *)(pFVar8 + lVar32) * dVar3;
      local_e38._s_0.Y = (double)*(float *)(pFVar8 + lVar32 + 4) * dVar3;
      local_e38._s_0.Z = (double)*(float *)(pFVar8 + lVar32 + 8) * dVar3;
      local_e38._s_0.X = local_e68;
      local_e18 = local_e38._s_0.Z;
      local_e10 = local_e38._s_0.Y;
      UE::Math::TVector<double>::FindBestAxisVectors
                ((TVector<double> *)&local_e38._s_0,(TVector<double> *)&local_e50._s_0,
                 (TVector<double> *)&local_d80._s_0);
      uVar18 = local_d80._s_0.Z;
      uVar17 = local_d80._s_0.Y;
      uVar16 = local_d80._s_0.X;
      pFVar28 = local_ea0;
      local_e58 = local_d80._s_0.Y + dVar2;
      dVar14 = local_d80._s_0.Z + dVar13;
      dVar11 = local_e50._s_0.Z + dVar13;
      dVar10 = local_e50._s_0.Y + dVar2;
      uVar36 = SUB84(dVar10,0);
      uVar37 = (undefined4)((ulonglong)dVar10 >> 0x20);
      local_e60 = local_d80._s_0.X + dVar12;
      dVar3 = local_e50._s_0.X + dVar12;
      local_df0._8_8_ = dVar10;
      local_df0._0_8_ = dVar3;
      local_e20 = dVar14;
      local_de0 = dVar11;
      if (local_ea0 == (FPrimitiveDrawInterface *)0x0) {
        pFVar24 = FDebugDrawQueue::GetInstance();
        bVar20 = Chaos::Private::bDrawInForeground != false;
        FLinearColor::ToFColorSRGB(&FLinearColor::Black);
        pFVar25 = FDebugDrawQueue::GetInstance();
        if ((pFVar25->bEnableDebugDrawing != false) &&
           (pFVar25 = FDebugDrawQueue::GetInstance(), 0 < pFVar25->NumConsumers)) {
          pFVar1 = &pFVar24->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_df0._8_4_ = uVar36;
          local_df0._12_4_ = uVar37;
          local_d50._8_4_ = uVar36;
          local_d50._0_8_ = dVar3;
          local_d50._12_4_ = uVar37;
          local_d40 = local_de0;
          bVar21 = FDebugDrawQueue::AcceptCommand(pFVar24,1,(TVector<double,3> *)local_d50);
          if (bVar21) {
            local_c90 = local_e60;
            local_be0 = (void *)0x0;
            local_bd8 = 0;
            local_bd0 = 0;
            local_c88 = local_e58;
            local_c78 = local_e8c;
            local_c70 = 0;
            local_c68 = 0x38d1b717;
            local_c60 = 0;
            local_b00 = 1;
            local_ca8._0_8_ = dVar3;
            local_ca8._8_8_ = dVar10;
            local_ca8._s_0.Z = dVar11;
            local_c80 = dVar14;
            local_c64 = -bVar20 & 2;
            FDebugDrawQueue::AddCommand(pFVar24,(FLatentDrawCommand *)&local_ca8._s_0);
            if (local_be0 != (void *)0x0) {
              FMemory::Free(local_be0);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          pFVar28 = local_ea0;
        }
      }
      local_dd8._8_8_ = dVar10;
      local_dd8._0_8_ = dVar3;
      local_dc8 = dVar11;
      if (pFVar28 == (FPrimitiveDrawInterface *)0x0) {
        pFVar24 = FDebugDrawQueue::GetInstance();
        bVar20 = Chaos::Private::bDrawInForeground != false;
        FLinearColor::ToFColorSRGB(&FLinearColor::Black);
        pFVar25 = FDebugDrawQueue::GetInstance();
        if ((pFVar25->bEnableDebugDrawing != false) &&
           (pFVar25 = FDebugDrawQueue::GetInstance(), 0 < pFVar25->NumConsumers)) {
          pFVar1 = &pFVar24->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_dd8._8_4_ = uVar36;
          local_dd8._12_4_ = uVar37;
          local_d38._8_4_ = uVar36;
          local_d38._0_8_ = dVar3;
          local_d38._12_4_ = uVar37;
          local_d28 = local_dc8;
          bVar21 = FDebugDrawQueue::AcceptCommand(pFVar24,1,(TVector<double,3> *)local_d38);
          if (bVar21) {
            local_a30 = (void *)0x0;
            local_a28 = 0;
            local_a20 = 0;
            local_ac8 = local_e88;
            local_ac0 = 0;
            local_ab8 = 0x38d1b717;
            local_ab0 = 0;
            local_950 = 1;
            local_af8._0_8_ = dVar3;
            local_af8._8_8_ = dVar10;
            local_af8._s_0.Z = dVar11;
            local_ae0 = dVar12 - (double)uVar16;
            local_ad8 = dVar2 - (double)uVar17;
            local_ad0 = dVar13 - (double)uVar18;
            local_ab4 = -bVar20 & 2;
            FDebugDrawQueue::AddCommand(pFVar24,(FLatentDrawCommand *)&local_af8._s_0);
            if (local_a30 != (void *)0x0) {
              FMemory::Free(local_a30);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          pFVar28 = local_ea0;
        }
      }
      dVar11 = dVar13 - local_e50._s_0.Z;
      dVar10 = dVar2 - local_e50._s_0.Y;
      uVar36 = SUB84(dVar10,0);
      uVar37 = (undefined4)((ulonglong)dVar10 >> 0x20);
      dVar3 = dVar12 - local_e50._s_0.X;
      local_dc0._8_8_ = dVar10;
      local_dc0._0_8_ = dVar3;
      local_db0 = dVar11;
      if (pFVar28 == (FPrimitiveDrawInterface *)0x0) {
        pFVar24 = FDebugDrawQueue::GetInstance();
        bVar20 = Chaos::Private::bDrawInForeground != false;
        FLinearColor::ToFColorSRGB(&FLinearColor::Black);
        pFVar25 = FDebugDrawQueue::GetInstance();
        if ((pFVar25->bEnableDebugDrawing != false) &&
           (pFVar25 = FDebugDrawQueue::GetInstance(), 0 < pFVar25->NumConsumers)) {
          pFVar1 = &pFVar24->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_dc0._8_4_ = uVar36;
          local_dc0._12_4_ = uVar37;
          local_d20._8_4_ = uVar36;
          local_d20._0_8_ = dVar3;
          local_d20._12_4_ = uVar37;
          local_d10 = local_db0;
          bVar21 = FDebugDrawQueue::AcceptCommand(pFVar24,1,(TVector<double,3> *)local_d20);
          if (bVar21) {
            local_880 = (void *)0x0;
            local_878 = 0;
            local_870 = 0;
            local_918 = local_e84;
            local_910 = 0;
            local_908 = 0x38d1b717;
            local_900 = 0;
            local_7a0 = 1;
            local_948._0_8_ = dVar3;
            local_948._8_8_ = dVar10;
            local_948._s_0.Z = dVar11;
            local_930 = dVar12 - (double)uVar16;
            local_928 = dVar2 - (double)uVar17;
            local_920 = dVar13 - (double)uVar18;
            local_904 = -bVar20 & 2;
            FDebugDrawQueue::AddCommand(pFVar24,(FLatentDrawCommand *)&local_948._s_0);
            if (local_880 != (void *)0x0) {
              FMemory::Free(local_880);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          pFVar28 = local_ea0;
        }
      }
      local_da8._8_8_ = dVar10;
      local_da8._0_8_ = dVar3;
      local_d98 = dVar11;
      if (pFVar28 == (FPrimitiveDrawInterface *)0x0) {
        pFVar24 = FDebugDrawQueue::GetInstance();
        bVar20 = Chaos::Private::bDrawInForeground != false;
        FLinearColor::ToFColorSRGB(&FLinearColor::Black);
        pFVar25 = FDebugDrawQueue::GetInstance();
        if ((pFVar25->bEnableDebugDrawing != false) &&
           (pFVar25 = FDebugDrawQueue::GetInstance(), 0 < pFVar25->NumConsumers)) {
          pFVar1 = &pFVar24->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_da8._8_4_ = uVar36;
          local_da8._12_4_ = uVar37;
          local_d08._8_4_ = uVar36;
          local_d08._0_8_ = dVar3;
          local_d08._12_4_ = uVar37;
          local_cf8 = local_d98;
          bVar21 = FDebugDrawQueue::AcceptCommand(pFVar24,1,(TVector<double,3> *)local_d08);
          if (bVar21) {
            local_780 = local_e60;
            local_778 = local_e58;
            local_6d0 = (void *)0x0;
            local_6c8 = 0;
            local_6c0 = 0;
            local_770 = local_e20;
            local_768 = local_e70;
            local_760 = 0;
            local_758 = 0x38d1b717;
            local_750 = 0;
            local_5f0 = 1;
            local_798._0_8_ = dVar3;
            local_798._8_8_ = dVar10;
            local_798._s_0.Z = dVar11;
            local_754 = -bVar20 & 2;
            FDebugDrawQueue::AddCommand(pFVar24,(FLatentDrawCommand *)&local_798._s_0);
            if (local_6d0 != (void *)0x0) {
              FMemory::Free(local_6d0);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          pFVar28 = local_ea0;
        }
      }
      dVar19 = local_d58;
      dVar15 = local_e10;
      dVar14 = local_e18;
      dVar3 = local_e18 * __real_4024000000000000;
      dVar10 = local_e10 * __real_4024000000000000;
      dVar11 = local_e68 * __real_4024000000000000;
      if (pFVar28 == (FPrimitiveDrawInterface *)0x0) {
        pFVar24 = FDebugDrawQueue::GetInstance();
        bVar20 = Chaos::Private::bDrawInForeground != false;
        FLinearColor::ToFColorSRGB(&Brown);
        pFVar25 = FDebugDrawQueue::GetInstance();
        if ((pFVar25->bEnableDebugDrawing != false) &&
           (pFVar25 = FDebugDrawQueue::GetInstance(), 0 < pFVar25->NumConsumers)) {
          pFVar1 = &pFVar24->CommandQueueCS;
          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_ce0 = dVar19;
          local_cf0._8_4_ = SUB84(dVar2,0);
          local_cf0._0_8_ = dVar12;
          local_cf0._12_4_ = uVar38;
          bVar21 = FDebugDrawQueue::AcceptCommand(pFVar24,1,(TVector<double,3> *)local_cf0);
          if (bVar21) {
            local_520 = (void *)0x0;
            local_518 = 0;
            local_510 = 0;
            local_5b8 = local_e80;
            local_5b0 = 0;
            local_5a8 = 0x38d1b717;
            local_5a0 = 0;
            local_440 = 1;
            local_5e8._s_0.X = dVar12;
            local_5e8._s_0.Y = dVar2;
            local_5e8._s_0.Z = dVar13;
            local_5d0 = dVar11 + dVar12;
            local_5c8 = dVar10 + dVar2;
            local_5c0 = dVar3 + dVar13;
            local_5a4 = -bVar20 & 2;
            FDebugDrawQueue::AddCommand(pFVar24,(FLatentDrawCommand *)&local_5e8._s_0);
            if (local_520 != (void *)0x0) {
              FMemory::Free(local_520);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
      }
      this = local_e98;
      if (local_e90 == local_e7c) {
        pFVar6 = local_e98->Solver;
        if ((pFVar6->Evolution).Ptr == (FEvolution *)0x0) {
          pTVar29 = &((pFVar6->PBDEvolution).Ptr)->MCollisionPhis;
        }
        else {
          pTVar29 = &pFVar6->CollisionPhis;
        }
        uVar22 = 0;
        if ((int)uVar35 < pTVar29->ArrayNum) {
          uVar22 = uVar34;
        }
        if ((uVar22 == 0) &&
           (local_eb8 = lVar33, local_eb0 = (longlong)pTVar29->ArrayNum,
           bVar20 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        dVar3 = (double)*(float *)((pTVar29->AllocatorInstance).Data + lVar33 * 4);
        dVar11 = dVar13 - dVar14 * dVar3;
        dVar10 = dVar2 - dVar15 * dVar3;
        dVar3 = dVar12 - dVar3 * local_e68;
        local_d58 = dVar11;
        if (local_ea0 == (FPrimitiveDrawInterface *)0x0) {
          pFVar24 = FDebugDrawQueue::GetInstance();
          bVar20 = Chaos::Private::bDrawInForeground != false;
          FLinearColor::ToFColorSRGB(&Brown);
          pFVar25 = FDebugDrawQueue::GetInstance();
          if ((pFVar25->bEnableDebugDrawing != false) &&
             (pFVar25 = FDebugDrawQueue::GetInstance(), 0 < pFVar25->NumConsumers)) {
            pFVar1 = &pFVar24->CommandQueueCS;
            if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
            local_cc8 = dVar19;
            local_cd8._8_4_ = SUB84(dVar2,0);
            local_cd8._0_8_ = dVar12;
            local_cd8._12_4_ = uVar38;
            bVar21 = FDebugDrawQueue::AcceptCommand(pFVar24,1,(TVector<double,3> *)local_cd8);
            if (bVar21) {
              local_370 = (void *)0x0;
              local_368 = 0;
              local_360 = 0;
              local_408 = local_e78;
              local_400 = 0;
              local_3f8 = 0x38d1b717;
              local_3f0 = 0;
              local_290 = 1;
              local_438._s_0.X = dVar12;
              local_438._s_0.Y = dVar2;
              local_438._s_0.Z = dVar13;
              local_420 = dVar3;
              local_418 = dVar10;
              local_410 = dVar11;
              local_3f4 = -bVar20 & 2;
              FDebugDrawQueue::AddCommand(pFVar24,(FLatentDrawCommand *)&local_438._s_0);
              if (local_370 != (void *)0x0) {
                FMemory::Free(local_370);
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          }
          pFVar24 = FDebugDrawQueue::GetInstance();
          bVar20 = Chaos::Private::bDrawInForeground != false;
          FLinearColor::ToFColorSRGB(&FLinearColor::Red);
          pFVar25 = FDebugDrawQueue::GetInstance();
          this = local_e98;
          if ((pFVar25->bEnableDebugDrawing != false) &&
             (pFVar25 = FDebugDrawQueue::GetInstance(), this = local_e98, 0 < pFVar25->NumConsumers)
             ) {
            pFVar1 = &pFVar24->CommandQueueCS;
            if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
            local_cc0._8_4_ = SUB84(dVar10,0);
            local_cc0._0_8_ = dVar3;
            local_cc0._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            local_cb0 = local_d58;
            bVar21 = FDebugDrawQueue::AcceptCommand(pFVar24,1,(TVector<double,3> *)local_cc0);
            if (bVar21) {
              local_1c0 = (void *)0x0;
              local_1b8 = 0;
              local_1b0 = 0;
              local_250 = 0;
              local_e0 = 0;
              local_258 = local_e74;
              local_248 = 0x38d1b717;
              local_240 = 0x40a00000;
              local_288[0]._0_8_ = dVar3;
              local_288[0]._8_8_ = dVar10;
              local_288[0]._16_8_ = dVar11;
              local_244 = -bVar20 & 2;
              FDebugDrawQueue::AddCommand(pFVar24,(FLatentDrawCommand *)&local_288[0]._s_0);
              if (local_1c0 != (void *)0x0) {
                FMemory::Free(local_1c0);
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
            this = local_e98;
          }
        }
      }
      uVar35 = uVar35 + 1;
      lVar33 = lVar33 + 1;
      lVar32 = lVar32 + 0xc;
    }
  }
  return;
}

// DrawEdgeConstraint @ 14dbe01b0

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
Chaos::FClothVisualizationNoGC::DrawEdgeConstraint
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  FClothingSimulationSolver *pFVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  FPBDEvolution *pFVar5;
  FEvolution *pFVar6;
  FPBDEdgeSpringConstraints *pFVar7;
  FXPBDEdgeSpringConstraints *pFVar8;
  FXPBDAnisotropicEdgeSpringConstraints *pFVar9;
  code *pcVar10;
  FSolverParticles *pFVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar15;
  undefined1 *puVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FPBDEdgeSpringConstraints *local_res8 [2];
  FXPBDEdgeSpringConstraints *local_res18;
  FXPBDAnisotropicEdgeSpringConstraints *local_res20;
  FXPBDAnisotropicAxialSpringConstraints *local_b8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_b0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_a0;
  <lambda_1> local_88;
  <lambda_1> local_78;
  <lambda_1> local_68;
  <lambda_1> local_58;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_48;
  
  pFVar2 = this->Solver;
  if (pFVar2 != (FClothingSimulationSolver *)0x0) {
    iVar14 = (pFVar2->Cloths).ArrayNum;
    pFVar18 = (pFVar2->Cloths).AllocatorInstance.Data;
    if ((iVar14 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar1 = pFVar18 + (longlong)iVar14 * 8;
    for (; pFVar18 != pFVar1; pFVar18 = pFVar18 + 8) {
      uVar13 = FClothingSimulationCloth::GetParticleRangeId
                         (*(FClothingSimulationCloth **)pFVar18,this->Solver);
      if (uVar13 != 0xffffffff) {
        pFVar2 = this->Solver;
        if (*(int *)&(pFVar2->ClothsConstraints).field_0x8 !=
            *(int *)&(pFVar2->ClothsConstraints).field_0x34) {
          puVar3 = *(undefined1 **)&(pFVar2->ClothsConstraints).field_0x40;
          puVar16 = &(pFVar2->ClothsConstraints).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar16 = puVar3;
          }
          iVar14 = *(int *)(puVar16 +
                           (ulonglong)
                           (*(int *)&(pFVar2->ClothsConstraints).field_0x48 - 1U & uVar13) * 4);
          if (iVar14 != -1) {
            do {
              lVar17 = *(longlong *)&pFVar2->ClothsConstraints + (longlong)iVar14 * 0x18;
              if (*(uint *)(*(longlong *)&pFVar2->ClothsConstraints + (longlong)iVar14 * 0x18) ==
                  uVar13) {
                if (lVar17 != 0) goto LAB_14dbe02d3;
                goto LAB_14dbe02ad;
              }
              iVar14 = *(int *)(lVar17 + 0x10);
            } while (iVar14 != -1);
          }
        }
        lVar17 = 0;
LAB_14dbe02ad:
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L"");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
LAB_14dbe02d3:
        pFVar2 = this->Solver;
        puVar4 = *(undefined8 **)(lVar17 + 8);
        pFVar5 = (pFVar2->PBDEvolution).Ptr;
        if (pFVar5 == (FPBDEvolution *)0x0) {
          pTVar15 = FClothingSimulationSolver::GetParticleXsView(pFVar2,&local_48,uVar13);
        }
        else {
          pFVar6 = (pFVar2->Evolution).Ptr;
          pFVar11 = &pFVar6->Particles;
          if (pFVar6 == (FEvolution *)0x0) {
            pFVar11 = &pFVar5->MParticles;
          }
          iVar14 = (int)(&pFVar11->_padding_)[2];
          local_a0.DataPtr = (TVector<float,3> *)(&pFVar11->_padding_)[1];
          if ((iVar14 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_a0.ArrayNum = iVar14;
          pTVar15 = &local_a0;
        }
        local_b0.DataPtr = pTVar15->DataPtr;
        local_b0.ArrayNum = pTVar15->ArrayNum;
        local_b0._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
        pFVar7 = (FPBDEdgeSpringConstraints *)*puVar4;
        if (pFVar7 != (FPBDEdgeSpringConstraints *)0x0) {
          local_88.SpringConstraints = local_res8;
          local_88.Positions = &local_b0;
          local_res8[0] = pFVar7;
          DrawSpringConstraintColors<Chaos::Softs::FPBDEdgeSpringConstraints,_Chaos::DrawSpringConstraintColors<Chaos::Softs::FPBDEdgeSpringConstraints>_::__l2::<lambda_1>_>
                    (param_1,this->Solver,pFVar7,&local_88);
        }
        pFVar8 = (FXPBDEdgeSpringConstraints *)puVar4[2];
        if (pFVar8 != (FXPBDEdgeSpringConstraints *)0x0) {
          local_78.SpringConstraints = &local_res18;
          local_78.Positions = &local_b0;
          local_res18 = pFVar8;
          DrawSpringConstraintColors<Chaos::Softs::FXPBDEdgeSpringConstraints,_Chaos::DrawSpringConstraintColors<Chaos::Softs::FXPBDEdgeSpringConstraints>_::__l2::<lambda_1>_>
                    (param_1,this->Solver,pFVar8,&local_78);
        }
        pFVar9 = (FXPBDAnisotropicEdgeSpringConstraints *)puVar4[6];
        if (pFVar9 != (FXPBDAnisotropicEdgeSpringConstraints *)0x0) {
          if ((Chaos::Private::AnisoSpringDrawMode == 0) ||
             (Chaos::Private::AnisoSpringDrawMode != 1)) {
            local_68.SpringConstraints = &local_res20;
            local_68.Positions = &local_b0;
            local_res20 = pFVar9;
            DrawSpringConstraintColors<Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints,_Chaos::DrawSpringConstraintColors<Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints>_::__l2::<lambda_1>_>
                      (param_1,this->Solver,pFVar9,&local_68);
            local_58.SpringConstraints = &local_b8;
            local_b8 = (FXPBDAnisotropicAxialSpringConstraints *)(pFVar9 + 1);
            local_58.Positions = &local_b0;
            DrawSpringConstraintColors<Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints,_Chaos::DrawAxialSpringConstraintColors<Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints>_::__l2::<lambda_1>_>
                      (param_1,this->Solver,local_b8,&local_58);
          }
          else {
            DrawEdgeAnisotropy<Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints>
                      (param_1,&local_b0,this->Solver,pFVar9);
            DrawAxialSpringAnisotropy<Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints>
                      (param_1,&local_b0,this->Solver,
                       (FXPBDAnisotropicAxialSpringConstraints *)(pFVar9 + 1));
          }
        }
      }
    }
  }
  return;
}

// DrawElementIndices @ 14dbe0490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
Chaos::FClothVisualizationNoGC::DrawElementIndices
          (FClothVisualizationNoGC *this,FCanvas *param_1,FSceneView *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  FClothingSimulationCloth *this_00;
  FScriptContainerElement *pFVar9;
  FClothingSimulationSolver *pFVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  TVector<float,3> *pTVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  FTriangleMesh *pFVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FLinearColor *pFVar22;
  uint uVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_108;
  TArrayView<float_const_,int> local_f8;
  TSharedPtr<FCulture,1> local_e8;
  FText local_d8;
  TVector<double>_u_0 local_c8 [5];
  
  fVar12 = __real_3b808081;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      DynamicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
      DynamicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
      DynamicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
      DynamicColor.field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar12;
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      KinematicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
      KinematicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
      KinematicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
      KinematicColor.field0_0x0._s_0.A = (float)FColor::Purple.field0_0x0._3_1_ * fVar12;
      _Init_thread_footer(&::_TSS1);
    }
    iVar16 = (this->Solver->Cloths).ArrayNum;
    pFVar25 = (this->Solver->Cloths).AllocatorInstance.Data;
    if ((iVar16 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    fVar13 = __real_3eaaaaab;
    fVar12 = __real_3f800000;
    pFVar1 = pFVar25 + (longlong)iVar16 * 8;
    for (; pFVar25 != pFVar1; pFVar25 = pFVar25 + 8) {
      this_00 = *(FClothingSimulationCloth **)pFVar25;
      iVar16 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
      if (iVar16 != -1) {
        iVar24 = 0;
        if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
          iVar24 = iVar16;
        }
        pFVar18 = FClothingSimulationCloth::GetTriangleMesh(this_00,this->Solver);
        FClothingSimulationCloth::GetParticlePositions(this_00,&local_108,this->Solver);
        FClothingSimulationCloth::GetParticleInvMasses(this_00,&local_f8,this->Solver);
        if ((local_f8.ArrayNum != local_108.ArrayNum) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InvMasses.Num() == Positions.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                ,0x1da,L""), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar16 = (pFVar18->MElements).ArrayNum;
        uVar23 = 0;
        if (0 < iVar16) {
          lVar26 = 0;
          do {
            uVar17 = 0;
            if ((int)uVar23 < iVar16) {
              uVar17 = ~uVar23 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar9 = (pFVar18->MElements).AllocatorInstance.Data;
            uVar19 = *(int *)(pFVar9 + lVar26) - iVar24;
            uVar17 = 0;
            if ((int)uVar19 < local_108.ArrayNum) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar15)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar14 = local_108.DataPtr;
            uVar20 = *(int *)(pFVar9 + lVar26 + 4) - iVar24;
            uVar17 = 0;
            if ((int)uVar20 < local_108.ArrayNum) {
              uVar17 = ~uVar20 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar15)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            fVar2 = *(float *)(pTVar14 + (int)uVar19);
            uVar21 = *(int *)(pFVar9 + lVar26 + 8) - iVar24;
            fVar3 = *(float *)&local_108.DataPtr[(int)uVar20].field_0x8;
            fVar4 = *(float *)&local_108.DataPtr[(int)uVar20].field_0x4;
            fVar5 = *(float *)(local_108.DataPtr + (int)uVar20);
            fVar6 = *(float *)&pTVar14[(int)uVar19].field_0x8;
            fVar7 = *(float *)&pTVar14[(int)uVar19].field_0x4;
            uVar17 = 0;
            if ((int)uVar21 < local_108.ArrayNum) {
              uVar17 = ~uVar21 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar15)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar19 = *(int *)(pFVar9 + lVar26) - iVar24;
            pFVar10 = this->Solver;
            dVar8 = pFVar10->LocalSpaceScale;
            local_c8[0]._0_8_ =
                 (double)((fVar2 + fVar5 + *(float *)(local_108.DataPtr + (int)uVar21)) * fVar13) *
                 dVar8 + *(double *)&pFVar10->LocalSpaceLocation;
            local_c8[0]._8_8_ =
                 (double)((fVar4 + fVar7 + *(float *)&local_108.DataPtr[(int)uVar21].field_0x4) *
                         fVar13) * dVar8 + *(double *)&(pFVar10->LocalSpaceLocation).field_0x8;
            local_c8[0]._16_8_ =
                 (double)((fVar3 + fVar6 + *(float *)&local_108.DataPtr[(int)uVar21].field_0x8) *
                         fVar13) * dVar8 + *(double *)&(pFVar10->LocalSpaceLocation).field_0x10;
            uVar17 = 0;
            if ((int)uVar19 < local_f8.ArrayNum) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar15)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            fVar2 = local_f8.DataPtr[(int)uVar19];
            uVar19 = *(int *)(pFVar9 + lVar26 + 4) - iVar24;
            uVar17 = 0;
            if ((int)uVar19 < local_f8.ArrayNum) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar15)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            fVar3 = local_f8.DataPtr[(int)uVar19];
            uVar19 = *(int *)(pFVar9 + lVar26 + 8) - iVar24;
            uVar17 = 0;
            if ((int)uVar19 < local_f8.ArrayNum) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar15)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if (((fVar2 != 0.0) || (fVar3 != 0.0)) ||
               (pFVar22 = &KinematicColor, local_f8.DataPtr[(int)uVar19] != 0.0)) {
              pFVar22 = &DynamicColor;
            }
            local_e8.Object = (FCulture *)0x0;
            local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            FText::AsNumber(&local_d8,uVar23,(FNumberFormattingOptions *)0x0,&local_e8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e8.SharedReferenceCount.ReferenceController);
            DrawText(param_1,param_2,(TVector<double> *)&local_c8[0]._s_0,&local_d8,pFVar22,fVar12);
            if (local_d8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
            }
            uVar23 = uVar23 + 1;
            lVar26 = lVar26 + 0xc;
            iVar16 = (pFVar18->MElements).ArrayNum;
          } while ((int)uVar23 < iVar16);
        }
      }
    }
  }
  return;
}

// DrawExtremlyDeformedEdges @ 14dbe0bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawExtremlyDeformedEdges
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  FClothingSimulationCloth *this_00;
  FClothingSimulationSolver *pFVar7;
  undefined1 *puVar8;
  FPBDExtremeDeformationConstraints *this_01;
  FPBDEvolution *pFVar9;
  FEvolution *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  FSolverParticles *pFVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar21;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar22;
  FDebugDrawQueue *this_02;
  FDebugDrawQueue *pFVar23;
  undefined1 *puVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  FLinearColor *this_03;
  FScriptContainerElement *pFVar28;
  FClothVisualizationNoGC *pFVar29;
  FScriptContainerElement *pFVar30;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar31;
  uint uVar32;
  uint uVar33;
  undefined1 auStack_368 [32];
  ulonglong local_348;
  longlong local_340;
  uint local_338;
  FClothVisualizationNoGC *local_330;
  undefined4 local_328;
  FScriptContainerElement *local_320;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_318;
  TArrayView<float_const_,int> local_308;
  FPrimitiveDrawInterface *local_2f8;
  FScriptContainerElement *local_2f0;
  FScriptContainerElement *local_2e8;
  TVector<float,3> *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2c8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2b8;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_2a8;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double local_260;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_258;
  TVector<double>_u_0 local_248;
  double local_230;
  undefined1 local_228 [16];
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  byte local_204;
  undefined4 local_200;
  void *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_a0;
  ulonglong local_98;
  
  fVar1 = __real_3b808081;
  local_98 = __security_cookie.value ^ (ulonglong)auStack_368;
  uVar33 = 0;
  lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_338 = 0;
  local_330 = this;
  local_2f8 = param_1;
  if ((*(int *)(lVar27 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    DynamicColor.field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R];
    DynamicColor.field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G];
    DynamicColor.field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B];
    DynamicColor.field0_0x0._s_0.A = (float)FColor::Red.field0_0x0._3_1_ * fVar1;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar27 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    KinematicColor.field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
    KinematicColor.field0_0x0._s_0.G =
         FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
    KinematicColor.field0_0x0._s_0.B =
         FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
    KinematicColor.field0_0x0._s_0.A = (float)FColor::Purple.field0_0x0._3_1_ * fVar1;
    _Init_thread_footer(&::_TSS1);
  }
  iVar20 = (this->Solver->Cloths).ArrayNum;
  pFVar30 = (this->Solver->Cloths).AllocatorInstance.Data;
  local_320 = pFVar30;
  if ((iVar20 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_2e8 = pFVar30 + (longlong)iVar20 * 8;
  if (pFVar30 != local_2e8) {
    do {
      this_00 = *(FClothingSimulationCloth **)pFVar30;
      uVar19 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
      if (uVar19 != 0xffffffff) {
        pFVar7 = this->Solver;
        uVar32 = 0;
        if ((pFVar7->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
          uVar32 = uVar19;
        }
        if (*(int *)&(pFVar7->ClothsConstraints).field_0x8 !=
            *(int *)&(pFVar7->ClothsConstraints).field_0x34) {
          puVar8 = *(undefined1 **)&(pFVar7->ClothsConstraints).field_0x40;
          puVar24 = &(pFVar7->ClothsConstraints).field_0x38;
          if (puVar8 != (undefined1 *)0x0) {
            puVar24 = puVar8;
          }
          iVar20 = *(int *)(puVar24 +
                           (ulonglong)
                           (*(int *)&(pFVar7->ClothsConstraints).field_0x48 - 1U & uVar19) * 4);
          if (iVar20 != -1) {
            do {
              lVar27 = *(longlong *)&pFVar7->ClothsConstraints + (longlong)iVar20 * 0x18;
              if (*(uint *)(*(longlong *)&pFVar7->ClothsConstraints + (longlong)iVar20 * 0x18) ==
                  uVar19) {
                if (lVar27 != 0) goto LAB_14dbe0d94;
                break;
              }
              iVar20 = *(int *)(lVar27 + 0x10);
            } while (iVar20 != -1);
          }
        }
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L"");
        if (bVar17) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
LAB_14dbe0d94:
        pFVar7 = this->Solver;
        if (*(int *)&(pFVar7->ClothsConstraints).field_0x8 !=
            *(int *)&(pFVar7->ClothsConstraints).field_0x34) {
          puVar8 = *(undefined1 **)&(pFVar7->ClothsConstraints).field_0x40;
          puVar24 = &(pFVar7->ClothsConstraints).field_0x38;
          if (puVar8 != (undefined1 *)0x0) {
            puVar24 = puVar8;
          }
          iVar20 = *(int *)(puVar24 +
                           (ulonglong)
                           (*(int *)&(pFVar7->ClothsConstraints).field_0x48 - 1U & uVar19) * 4);
          if (iVar20 != -1) {
            do {
              lVar27 = *(longlong *)&pFVar7->ClothsConstraints + (longlong)iVar20 * 0x18;
              if (*(uint *)(*(longlong *)&pFVar7->ClothsConstraints + (longlong)iVar20 * 0x18) ==
                  uVar19) {
                if (lVar27 != 0) goto LAB_14dbe0e23;
                goto LAB_14dbe0dfd;
              }
              iVar20 = *(int *)(lVar27 + 0x10);
            } while (iVar20 != -1);
          }
        }
        lVar27 = 0;
LAB_14dbe0dfd:
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L"");
        if (bVar17) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
LAB_14dbe0e23:
        this_01 = *(FPBDExtremeDeformationConstraints **)(*(longlong *)(lVar27 + 8) + 0x160);
        if (this_01 != (FPBDExtremeDeformationConstraints *)0x0) {
          FClothingSimulationCloth::GetParticlePositions(this_00,&local_318,this->Solver);
          FClothingSimulationCloth::GetParticleInvMasses(this_00,&local_308,this->Solver);
          pFVar29 = local_330;
          pFVar7 = local_330->Solver;
          pFVar9 = (pFVar7->PBDEvolution).Ptr;
          if (pFVar9 == (FPBDEvolution *)0x0) {
            pTVar21 = FClothingSimulationSolver::GetParticleXsView(pFVar7,&local_258,uVar19);
            uVar33 = uVar33 | 2;
            pTVar31 = &local_2b8;
            pTVar22 = &local_2a8;
            local_2b8.DataPtr = pTVar21->DataPtr;
            local_2b8.ArrayNum = pTVar21->ArrayNum;
            local_2b8._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
          }
          else {
            pFVar10 = (pFVar7->Evolution).Ptr;
            pFVar16 = &pFVar10->Particles;
            if (pFVar10 == (FEvolution *)0x0) {
              pFVar16 = &pFVar9->MParticles;
            }
            local_2d8 = (TVector<float,3> *)(&pFVar16->_padding_)[1];
            iVar20 = (int)(&pFVar16->_padding_)[2];
            if ((iVar20 < 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar31 = &local_2c8;
            local_2c8._12_4_ = uStack_2cc;
            local_2c8.ArrayNum = iVar20;
            pTVar22 = &local_298;
            local_2c8.DataPtr = local_2d8;
            uVar33 = uVar33 | 1;
            iStack_2d0 = iVar20;
          }
          local_338 = uVar33;
          pTVar22 = Softs::FPBDExtremeDeformationConstraints::GetExtremelyDeformedEdges
                              (this_01,pTVar22,pTVar31);
          pFVar30 = (pTVar22->AllocatorInstance).Data;
          (pTVar22->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          iVar20 = pTVar22->ArrayNum;
          pTVar22->ArrayNum = 0;
          pTVar22->ArrayMax = 0;
          local_2f0 = pFVar30;
          if (((uVar33 & 2) != 0) &&
             (uVar33 = uVar33 & 0xfffffffd, local_338 = uVar33,
             local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_2a8.AllocatorInstance.Data);
          }
          if (((uVar33 & 1) != 0) &&
             (local_338 = uVar33 & 0xfffffffe,
             local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_298.AllocatorInstance.Data);
          }
          if ((local_308.ArrayNum != local_318.ArrayNum) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InvMasses.Num() == Positions.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0xd08,L""), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar33 = 0;
          pFVar28 = pFVar30;
          if (0 < iVar20) {
            do {
              if ((int)uVar33 < 0) {
                local_348 = (ulonglong)uVar33;
                local_340 = (longlong)iVar20;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar17) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              uVar25 = *(int *)pFVar30 - uVar32;
              uVar19 = 0;
              if ((int)uVar25 < local_318.ArrayNum) {
                uVar19 = ~uVar25 >> 0x1f;
              }
              if (uVar19 == 0) {
                local_340 = (longlong)local_318.ArrayNum;
                local_348 = (ulonglong)(int)uVar25;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar17) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              pFVar7 = pFVar29->Solver;
              uVar26 = *(int *)(pFVar30 + 4) - uVar32;
              dVar3 = pFVar7->LocalSpaceScale;
              dVar12 = (double)*(float *)(local_318.DataPtr + (int)uVar25) * dVar3 +
                       *(double *)&pFVar7->LocalSpaceLocation;
              dVar13 = (double)*(float *)&local_318.DataPtr[(int)uVar25].field_0x4 * dVar3 +
                       *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
              dVar3 = (double)*(float *)&local_318.DataPtr[(int)uVar25].field_0x8 * dVar3 +
                      *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
              uVar19 = 0;
              if ((int)uVar26 < local_318.ArrayNum) {
                uVar19 = ~uVar26 >> 0x1f;
              }
              local_260 = dVar3;
              if (uVar19 == 0) {
                local_340 = (longlong)local_318.ArrayNum;
                local_348 = (ulonglong)(int)uVar26;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar17) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              pFVar7 = pFVar29->Solver;
              uVar25 = *(int *)pFVar30 - uVar32;
              dVar4 = pFVar7->LocalSpaceScale;
              fVar1 = *(float *)(local_318.DataPtr + (int)uVar26);
              uVar5 = *(undefined8 *)&local_318.DataPtr[(int)uVar26].field_0x4;
              dVar15 = *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
              dVar14 = (double)(float)((ulonglong)uVar5 >> 0x20) * dVar4 +
                       *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
              dVar6 = *(double *)&pFVar7->LocalSpaceLocation;
              uVar19 = 0;
              if ((int)uVar25 < local_308.ArrayNum) {
                uVar19 = ~uVar25 >> 0x1f;
              }
              if (uVar19 == 0) {
                local_340 = (longlong)local_308.ArrayNum;
                local_348 = (ulonglong)(int)uVar25;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar17) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              fVar2 = local_308.DataPtr[(int)uVar25];
              uVar25 = *(int *)(pFVar30 + 4) - uVar32;
              uVar19 = 0;
              if ((int)uVar25 < local_308.ArrayNum) {
                uVar19 = ~uVar25 >> 0x1f;
              }
              if (uVar19 == 0) {
                local_340 = (longlong)local_308.ArrayNum;
                local_348 = (ulonglong)(int)uVar25;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar17) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              if ((fVar2 != 0.0) ||
                 (this_03 = &KinematicColor, local_308.DataPtr[(int)uVar25] != 0.0)) {
                this_03 = &DynamicColor;
              }
              if (local_2f8 == (FPrimitiveDrawInterface *)0x0) {
                this_02 = FDebugDrawQueue::GetInstance();
                bVar17 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(this_03);
                pFVar23 = FDebugDrawQueue::GetInstance();
                pFVar29 = local_330;
                if ((pFVar23->bEnableDebugDrawing != false) &&
                   (pFVar23 = FDebugDrawQueue::GetInstance(), pFVar29 = local_330,
                   0 < pFVar23->NumConsumers)) {
                  lpCriticalSection = &this_02->CommandQueueCS;
                  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  local_278 = local_260;
                  local_288 = dVar12;
                  dStack_280 = dVar13;
                  bVar18 = FDebugDrawQueue::AcceptCommand(this_02,1,(TVector<double,3> *)&local_288)
                  ;
                  if (bVar18) {
                    local_180 = (void *)0x0;
                    local_178 = 0;
                    local_170 = 0;
                    local_218 = local_328;
                    local_228._8_4_ = SUB84(dVar14,0);
                    local_228._0_8_ = (double)(float)uVar5 * dVar4 + dVar15;
                    local_228._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
                    local_210 = 0;
                    local_208 = 0x38d1b717;
                    local_200 = 0;
                    local_a0 = 1;
                    local_248._s_0.X = dVar12;
                    local_248._s_0.Y = dVar13;
                    local_248._s_0.Z = dVar3;
                    local_230 = (double)fVar1 * dVar4 + dVar6;
                    local_204 = -bVar17 & 2;
                    FDebugDrawQueue::AddCommand(this_02,(FLatentDrawCommand *)&local_248._s_0);
                    if (local_180 != (void *)0x0) {
                      FMemory::Free(local_180);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  pFVar29 = local_330;
                }
              }
              uVar33 = uVar33 + 1;
              pFVar30 = pFVar30 + 8;
              pFVar28 = local_2f0;
            } while ((int)uVar33 < iVar20);
          }
          this = local_330;
          uVar33 = local_338;
          if (pFVar28 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar28);
            this = local_330;
            uVar33 = local_338;
          }
        }
      }
      pFVar30 = local_320 + 8;
      local_320 = pFVar30;
    } while (pFVar30 != local_2e8);
  }
  return;
}

// DrawFictitiousAngularForces @ 14dbe14f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawFictitiousAngularForces
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  FClothingSimulationSolver *pFVar6;
  undefined1 *puVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FDebugDrawQueue *this_00;
  FDebugDrawQueue *pFVar16;
  undefined1 *puVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  longlong local_2e0;
  undefined4 local_2d8;
  FClothVisualizationNoGC *local_2d0;
  longlong local_2c8;
  FScriptContainerElement *local_2c0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2b8;
  FPrimitiveDrawInterface *local_2a8;
  FScriptContainerElement *local_2a0;
  undefined1 local_298 [16];
  double local_288;
  double local_270;
  TVector<double>_u_0 local_268;
  double local_250;
  double local_248;
  double local_240;
  undefined4 local_238;
  undefined1 local_230;
  undefined4 local_228;
  byte local_224;
  undefined4 local_220;
  void *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_308;
  pFVar6 = this->Solver;
  if (pFVar6 != (FClothingSimulationSolver *)0x0) {
    iVar14 = (pFVar6->Cloths).ArrayNum;
    pFVar19 = (pFVar6->Cloths).AllocatorInstance.Data;
    local_2d0 = this;
    local_2c0 = pFVar19;
    local_2a8 = param_1;
    if ((iVar14 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_2a0 = pFVar19 + (longlong)iVar14 * 8;
    if (pFVar19 != local_2a0) {
      do {
        uVar13 = FClothingSimulationCloth::GetParticleRangeId
                           (*(FClothingSimulationCloth **)pFVar19,this->Solver);
        if (uVar13 != 0xffffffff) {
          pFVar6 = this->Solver;
          if (*(int *)&(pFVar6->ClothsConstraints).field_0x8 !=
              *(int *)&(pFVar6->ClothsConstraints).field_0x34) {
            puVar7 = *(undefined1 **)&(pFVar6->ClothsConstraints).field_0x40;
            puVar17 = &(pFVar6->ClothsConstraints).field_0x38;
            if (puVar7 != (undefined1 *)0x0) {
              puVar17 = puVar7;
            }
            iVar14 = *(int *)(puVar17 +
                             (ulonglong)
                             (*(int *)&(pFVar6->ClothsConstraints).field_0x48 - 1U & uVar13) * 4);
            if (iVar14 != -1) {
              do {
                lVar18 = *(longlong *)&pFVar6->ClothsConstraints + (longlong)iVar14 * 0x18;
                if (*(uint *)(*(longlong *)&pFVar6->ClothsConstraints + (longlong)iVar14 * 0x18) ==
                    uVar13) {
                  if (lVar18 == 0) goto LAB_14dbe166d;
                  goto LAB_14dbe1693;
                }
                iVar14 = *(int *)(lVar18 + 0x10);
              } while (iVar14 != -1);
            }
          }
          lVar18 = 0;
LAB_14dbe166d:
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L"");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
LAB_14dbe1693:
          lVar18 = *(longlong *)(*(longlong *)(lVar18 + 8) + 400);
          local_2c8 = lVar18;
          if (lVar18 != 0) {
            if (((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!Solver->IsLegacySolver()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                    ,0x47a,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FClothingSimulationSolver::GetParticleXsView(this->Solver,&local_2b8,uVar13);
            iVar14 = local_2b8.ArrayNum;
            uVar13 = 0;
            lVar20 = 0;
            if (0 < local_2b8.ArrayNum) {
              lVar21 = 0;
              do {
                uVar15 = 0;
                if ((int)uVar13 < iVar14) {
                  uVar15 = ~uVar13 >> 0x1f;
                }
                if (uVar15 == 0) {
                  local_2e0 = (longlong)iVar14;
                  local_2e8 = (longlong)(int)uVar13;
                  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar11) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                pFVar6 = this->Solver;
                dVar4 = pFVar6->LocalSpaceScale;
                uVar15 = 0;
                if ((int)uVar13 < iVar14) {
                  uVar15 = ~uVar13 >> 0x1f;
                }
                dVar10 = (double)*(float *)(&(local_2b8.DataPtr)->field_0x8 + lVar21) * dVar4 +
                         *(double *)&(pFVar6->LocalSpaceLocation).field_0x10;
                dVar9 = (double)*(float *)(&(local_2b8.DataPtr)->field_0x0 + lVar21) * dVar4 +
                        *(double *)&pFVar6->LocalSpaceLocation;
                dVar4 = (double)*(float *)(&(local_2b8.DataPtr)->field_0x4 + lVar21) * dVar4 +
                        *(double *)&(pFVar6->LocalSpaceLocation).field_0x8;
                local_270 = dVar10;
                if (uVar15 == 0) {
                  local_2e0 = (longlong)iVar14;
                  local_2e8 = lVar20;
                  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar11) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                fVar1 = *(float *)(lVar18 + 0x4c);
                fVar2 = *(float *)(lVar18 + 0x48);
                fVar3 = *(float *)(lVar18 + 0x50);
                fVar22 = *(float *)(&(local_2b8.DataPtr)->field_0x0 + lVar21) -
                         *(float *)(lVar18 + 0x54);
                fVar23 = *(float *)(&(local_2b8.DataPtr)->field_0x4 + lVar21) -
                         *(float *)(lVar18 + 0x58);
                fVar24 = *(float *)(&(local_2b8.DataPtr)->field_0x8 + lVar21) -
                         *(float *)(lVar18 + 0x5c);
                fVar25 = fVar2 * fVar23 - fVar1 * fVar22;
                fVar26 = fVar3 * fVar22 - fVar2 * fVar24;
                dVar5 = this->Solver->LocalSpaceScale;
                fVar22 = fVar1 * fVar24 - fVar3 * fVar23;
                if (local_2a8 == (FPrimitiveDrawInterface *)0x0) {
                  this_00 = FDebugDrawQueue::GetInstance();
                  bVar11 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&FLinearColor::Red);
                  pFVar16 = FDebugDrawQueue::GetInstance();
                  lVar18 = local_2c8;
                  this = local_2d0;
                  if ((pFVar16->bEnableDebugDrawing != false) &&
                     (pFVar16 = FDebugDrawQueue::GetInstance(), lVar18 = local_2c8, this = local_2d0
                     , 0 < pFVar16->NumConsumers)) {
                    lpCriticalSection = &this_00->CommandQueueCS;
                    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    local_298._8_4_ = SUB84(dVar4,0);
                    local_298._0_8_ = dVar9;
                    local_298._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
                    local_288 = local_270;
                    bVar12 = FDebugDrawQueue::AcceptCommand
                                       (this_00,1,(TVector<double,3> *)local_298);
                    if (bVar12) {
                      local_1a0 = (void *)0x0;
                      local_198 = 0;
                      local_190 = 0;
                      local_238 = local_2d8;
                      local_230 = 0;
                      local_228 = 0x38d1b717;
                      local_220 = 0;
                      local_c0 = 1;
                      local_268._s_0.X = dVar9;
                      local_268._s_0.Y = dVar4;
                      local_268._s_0.Z = dVar10;
                      local_250 = (double)(fVar26 * fVar3 - fVar25 * fVar1) * dVar5 + dVar9;
                      local_248 = (double)(fVar25 * fVar2 - fVar22 * fVar3) * dVar5 + dVar4;
                      local_240 = (double)(fVar22 * fVar1 - fVar26 * fVar2) * dVar5 + dVar10;
                      local_224 = -bVar11 & 2;
                      FDebugDrawQueue::AddCommand(this_00,(FLatentDrawCommand *)&local_268._s_0);
                      if (local_1a0 != (void *)0x0) {
                        FMemory::Free(local_1a0);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    lVar18 = local_2c8;
                    this = local_2d0;
                  }
                }
                uVar13 = uVar13 + 1;
                lVar20 = lVar20 + 1;
                lVar21 = lVar21 + 0xc;
              } while ((int)uVar13 < iVar14);
            }
          }
        }
        pFVar19 = local_2c0 + 8;
        local_2c0 = pFVar19;
      } while (pFVar19 != local_2a0);
    }
  }
  return;
}

// DrawGravity @ 14dbe1ad0

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
Chaos::FClothVisualizationNoGC::DrawGravity
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  FClothingSimulationCloth *this_00;
  undefined1 *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  TVector<float,3> *pTVar18;
  FClothingSimulationSolver *pFVar19;
  undefined1 *puVar20;
  TVector<double>_u_0 *pTVar21;
  longlong lVar22;
  TVector<double>_u_0 *pTVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  float fVar26;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<float,3> local_c8 [13];
  
  pFVar19 = this->Solver;
  if (pFVar19 != (FClothingSimulationSolver *)0x0) {
    iVar15 = (pFVar19->Cloths).ArrayNum;
    pFVar24 = (pFVar19->Cloths).AllocatorInstance.Data;
    if ((iVar15 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    dVar11 = __real_3f847ae147ae147b;
    fVar10 = __real_3f800000;
    fVar9 = __real_38d1b717;
    pFVar1 = pFVar24 + (longlong)iVar15 * 8;
    for (; pFVar24 != pFVar1; pFVar24 = pFVar24 + 8) {
      this_00 = *(FClothingSimulationCloth **)pFVar24;
      uVar14 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
      if (uVar14 != 0xffffffff) {
        pFVar19 = this->Solver;
        if (*(int *)&(pFVar19->ClothsConstraints).field_0x8 !=
            *(int *)&(pFVar19->ClothsConstraints).field_0x34) {
          puVar5 = *(undefined1 **)&(pFVar19->ClothsConstraints).field_0x40;
          puVar20 = &(pFVar19->ClothsConstraints).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar20 = puVar5;
          }
          iVar15 = *(int *)(puVar20 +
                           (ulonglong)
                           (*(int *)&(pFVar19->ClothsConstraints).field_0x48 - 1U & uVar14) * 4);
          if (iVar15 != -1) {
            do {
              lVar22 = *(longlong *)&pFVar19->ClothsConstraints + (longlong)iVar15 * 0x18;
              if (*(uint *)(*(longlong *)&pFVar19->ClothsConstraints + (longlong)iVar15 * 0x18) ==
                  uVar14) {
                if (lVar22 != 0) goto LAB_14dbe1c83;
                goto LAB_14dbe1c5d;
              }
              iVar15 = *(int *)(lVar22 + 0x10);
            } while (iVar15 != -1);
          }
        }
        lVar22 = 0;
LAB_14dbe1c5d:
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L"");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_14dbe1c83:
        lVar22 = *(longlong *)(*(longlong *)(lVar22 + 8) + 400);
        if (lVar22 == 0) {
          dVar7 = *(double *)&(this_00->ReferenceSpaceTransform).field_0x20;
          dVar8 = *(double *)&(this_00->ReferenceSpaceTransform).field_0x28;
          dVar4 = *(double *)&(this_00->ReferenceSpaceTransform).field_0x30;
          local_e0._s_0.X = dVar7;
          local_e0._s_0.Y = dVar8;
          pTVar18 = FClothingSimulationCloth::GetGravity(this_00,local_c8,this->Solver);
          pTVar23 = &local_f8;
          pTVar21 = &local_e0;
          dVar3 = this->Solver->LocalSpaceScale;
          local_f8._s_0.X = (double)*(float *)pTVar18 * dVar3 * dVar11 + dVar7;
          local_f8._s_0.Y = (double)*(float *)&pTVar18->field_0x4 * dVar3 * dVar11 + dVar8;
          local_f8._s_0.Z = (double)*(float *)&pTVar18->field_0x8 * dVar3 * dVar11 + dVar4;
          local_e0._s_0.Z = dVar4;
        }
        else {
          if (((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Solver->IsLegacySolver()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,1099,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((*(char *)(lVar22 + 0x14) != '\0') && (0 < *(int *)(lVar22 + 0x38))) &&
             (fVar9 < (float)(*(uint *)(lVar22 + 0x44) & uVar12))) {
            FClothingSimulationSolver::GetParticleXsView(this->Solver,&local_168,uVar14);
            iVar15 = local_168.ArrayNum;
            uVar14 = 0;
            if (0 < local_168.ArrayNum) {
              lVar25 = 0;
              do {
                uVar16 = 0;
                if ((int)uVar14 < iVar15) {
                  uVar16 = ~uVar14 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar19 = this->Solver;
                dVar3 = pFVar19->LocalSpaceScale;
                dVar7 = (double)*(float *)(&(local_168.DataPtr)->field_0x0 + lVar25) * dVar3 +
                        *(double *)&pFVar19->LocalSpaceLocation;
                dVar8 = (double)*(float *)(&(local_168.DataPtr)->field_0x4 + lVar25) * dVar3 +
                        *(double *)&(pFVar19->LocalSpaceLocation).field_0x8;
                dVar3 = (double)*(float *)(&(local_168.DataPtr)->field_0x8 + lVar25) * dVar3 +
                        *(double *)&(pFVar19->LocalSpaceLocation).field_0x10;
                fVar26 = fVar10;
                local_128._s_0.X = dVar7;
                local_128._s_0.Y = dVar8;
                local_128._s_0.Z = dVar3;
                if (*(char *)(lVar22 + 0x14) != '\0') {
                  if ((*(int *)(lVar22 + 0x38) < 1) ||
                     (fVar26 = *(float *)(lVar22 + 0x44), (float)((uint)fVar26 & uVar12) <= fVar9))
                  {
                    fVar26 = *(float *)(lVar22 + 0x40);
                  }
                  else {
                    fVar2 = *(float *)(lVar22 + 0x40);
                    pfVar17 = TArrayView<float_const_,int>::operator[]
                                        ((TArrayView<float_const_,int> *)(lVar22 + 0x30),uVar14);
                    pFVar19 = this->Solver;
                    fVar26 = fVar26 * *pfVar17 + fVar2;
                  }
                }
                dVar4 = pFVar19->LocalSpaceScale;
                local_140._s_0.X =
                     (double)(fVar26 * *(float *)(lVar22 + 8)) * dVar4 * dVar11 + dVar7;
                local_140._s_0.Y =
                     (double)(fVar26 * *(float *)(lVar22 + 0xc)) * dVar4 * dVar11 + dVar8;
                local_140._s_0.Z =
                     (double)(fVar26 * *(float *)(lVar22 + 0x10)) * dVar4 * dVar11 + dVar3;
                DrawArrow(param_1,(TVector<double> *)&local_128._s_0,
                          (TVector<double> *)&local_140._s_0,&FLinearColor::Red);
                uVar14 = uVar14 + 1;
                lVar25 = lVar25 + 0xc;
              } while ((int)uVar14 < iVar15);
            }
            goto LAB_14dbe2070;
          }
          local_158._s_0.X = (double)*(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x20;
          local_158._s_0.Y = (double)*(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x28;
          local_158._s_0.Z = (double)*(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x30;
          fVar26 = fVar10;
          if (*(char *)(lVar22 + 0x14) != '\0') {
            if ((*(int *)(lVar22 + 0x38) < 1) ||
               (fVar26 = *(float *)(lVar22 + 0x44), (float)((uint)fVar26 & uVar12) <= fVar9)) {
              fVar26 = *(float *)(lVar22 + 0x40);
            }
            else {
              if ((*(int *)(lVar22 + 0x38) < 1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              fVar26 = fVar26 * **(float **)(lVar22 + 0x30) + *(float *)(lVar22 + 0x40);
            }
          }
          pTVar23 = &local_110;
          pTVar21 = &local_158;
          dVar3 = this->Solver->LocalSpaceScale;
          local_110._s_0.X =
               (double)(fVar26 * *(float *)(lVar22 + 8)) * dVar3 * dVar11 + local_158._s_0.X;
          local_110._s_0.Y =
               (double)(fVar26 * *(float *)(lVar22 + 0xc)) * dVar3 * dVar11 + local_158._s_0.Y;
          local_110._s_0.Z =
               (double)(fVar26 * *(float *)(lVar22 + 0x10)) * dVar3 * dVar11 + local_158._s_0.Z;
        }
        DrawArrow(param_1,(TVector<double> *)&pTVar21->_s_0,(TVector<double> *)&pTVar23->_s_0,
                  &FLinearColor::Red);
      }
LAB_14dbe2070:
    }
  }
  return;
}

// DrawKinematicColliderWired @ 14dbe2110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawKinematicColliderWired
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FClothingSimulationCloth *this_00;
  FClothingSimulationSolver *pFVar5;
  undefined1 *puVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  FClothVisualizationNoGC *pFVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  FDebugDrawQueue *pFVar20;
  FDebugDrawQueue *pFVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  int *piVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 auStack_6e8 [32];
  ulonglong local_6c8;
  longlong local_6c0;
  uint local_6b8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_6b0;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  FClothVisualizationNoGC *local_690;
  FScriptContainerElement *local_688;
  FPrimitiveDrawInterface *local_680;
  FScriptContainerElement *local_678;
  double local_670;
  double dStack_668;
  double local_660;
  double local_658;
  double dStack_650;
  double local_648;
  double local_640;
  double dStack_638;
  double local_630;
  double local_618;
  double local_600;
  double local_5e8;
  TVector<double>_u_0 local_5d8;
  double local_5c0;
  double local_5b8;
  double local_5b0;
  undefined4 local_5a8;
  undefined1 local_5a0;
  undefined4 local_598;
  byte local_594;
  undefined4 local_590;
  void *local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined4 local_430;
  TVector<double>_u_0 local_428;
  double local_410;
  double local_408;
  double local_400;
  undefined4 local_3f8;
  undefined1 local_3f0;
  undefined4 local_3e8;
  byte local_3e4;
  undefined4 local_3e0;
  void *local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_280;
  TVector<double>_u_0 local_278;
  double local_260;
  double local_258;
  double local_250;
  undefined4 local_248;
  undefined1 local_240;
  undefined4 local_238;
  byte local_234;
  undefined4 local_230;
  void *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_6e8;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    local_690 = this;
    local_680 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      WireframeColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.R];
      WireframeColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.G];
      WireframeColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Silver.field0_0x0._s_0.B];
      WireframeColor.field0_0x0._s_0.A = (float)FColor::Silver.field0_0x0._3_1_ * __real_3b808081;
      _Init_thread_footer(&::_TSS0);
    }
    iVar19 = (this->Solver->Cloths).ArrayNum;
    pFVar26 = (this->Solver->Cloths).AllocatorInstance.Data;
    local_688 = pFVar26;
    if ((iVar19 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_678 = pFVar26 + (longlong)iVar19 * 8;
    if (pFVar26 != local_678) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar26;
        uVar18 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (uVar18 != 0xffffffff) {
          pFVar5 = this->Solver;
          if (*(int *)&(pFVar5->ClothsConstraints).field_0x8 !=
              *(int *)&(pFVar5->ClothsConstraints).field_0x34) {
            puVar6 = *(undefined1 **)&(pFVar5->ClothsConstraints).field_0x40;
            puVar22 = &(pFVar5->ClothsConstraints).field_0x38;
            if (puVar6 != (undefined1 *)0x0) {
              puVar22 = puVar6;
            }
            iVar19 = *(int *)(puVar22 +
                             (ulonglong)
                             (*(int *)&(pFVar5->ClothsConstraints).field_0x48 - 1U & uVar18) * 4);
            if (iVar19 != -1) {
              do {
                lVar25 = *(longlong *)&pFVar5->ClothsConstraints + (longlong)iVar19 * 0x18;
                if (*(uint *)(*(longlong *)&pFVar5->ClothsConstraints + (longlong)iVar19 * 0x18) ==
                    uVar18) {
                  if (lVar25 == 0) goto LAB_14dbe22bd;
                  goto LAB_14dbe22e3;
                }
                iVar19 = *(int *)(lVar25 + 0x10);
              } while (iVar19 != -1);
            }
          }
          lVar25 = 0;
LAB_14dbe22bd:
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L"");
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_14dbe22e3:
          lVar25 = *(longlong *)(*(longlong *)(lVar25 + 8) + 0xf0);
          if (lVar25 != 0) {
            iVar19 = *(int *)(lVar25 + 0x160);
            lVar25 = *(longlong *)(lVar25 + 0x158);
            uVar28 = 0;
            if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
              uVar28 = uVar18;
            }
            local_6b8 = uVar28;
            if ((iVar19 < 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar16)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FClothingSimulationCloth::GetParticlePositions(this_00,&local_6b0,this->Solver);
            iVar14 = local_6b0.ArrayNum;
            uVar29 = 0;
            if (0 < iVar19) {
              piVar27 = (int *)(lVar25 + 8);
              do {
                if (((int)uVar29 < 0) &&
                   (local_6c8 = uVar29, local_6c0 = (longlong)iVar19,
                   bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar23 = piVar27[-2] - uVar28;
                uVar18 = 0;
                if ((int)uVar23 < iVar14) {
                  uVar18 = ~uVar23 >> 0x1f;
                }
                if (uVar18 == 0) {
                  local_6c0 = (longlong)iVar14;
                  local_6c8 = (ulonglong)(int)uVar23;
                  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar16) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                pFVar15 = local_690;
                uVar24 = piVar27[-1] - uVar28;
                pFVar5 = local_690->Solver;
                dVar2 = pFVar5->LocalSpaceScale;
                uVar18 = 0;
                if ((int)uVar24 < iVar14) {
                  uVar18 = ~uVar24 >> 0x1f;
                }
                dVar13 = (double)*(float *)&local_6b0.DataPtr[(int)uVar23].field_0x8 * dVar2 +
                         *(double *)&(pFVar5->LocalSpaceLocation).field_0x10;
                dVar12 = (double)*(float *)(local_6b0.DataPtr + (int)uVar23) * dVar2 +
                         *(double *)&pFVar5->LocalSpaceLocation;
                dVar2 = (double)*(float *)&local_6b0.DataPtr[(int)uVar23].field_0x4 * dVar2 +
                        *(double *)&(pFVar5->LocalSpaceLocation).field_0x8;
                local_618 = dVar13;
                if (uVar18 == 0) {
                  local_6c0 = (longlong)iVar14;
                  local_6c8 = (ulonglong)(int)uVar24;
                  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar16) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                pFVar5 = pFVar15->Solver;
                uVar23 = *piVar27 - uVar28;
                dVar3 = pFVar5->LocalSpaceScale;
                uVar18 = 0;
                if ((int)uVar23 < iVar14) {
                  uVar18 = ~uVar23 >> 0x1f;
                }
                dVar11 = (double)*(float *)&local_6b0.DataPtr[(int)uVar24].field_0x8 * dVar3 +
                         *(double *)&(pFVar5->LocalSpaceLocation).field_0x10;
                dVar10 = (double)*(float *)(local_6b0.DataPtr + (int)uVar24) * dVar3 +
                         *(double *)&pFVar5->LocalSpaceLocation;
                dVar3 = (double)*(float *)&local_6b0.DataPtr[(int)uVar24].field_0x4 * dVar3 +
                        *(double *)&(pFVar5->LocalSpaceLocation).field_0x8;
                local_600 = dVar11;
                if (uVar18 == 0) {
                  local_6c0 = (longlong)iVar14;
                  local_6c8 = (ulonglong)(int)uVar23;
                  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar16) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                pFVar5 = pFVar15->Solver;
                dVar4 = pFVar5->LocalSpaceScale;
                dVar9 = (double)*(float *)&local_6b0.DataPtr[(int)uVar23].field_0x8 * dVar4 +
                        *(double *)&(pFVar5->LocalSpaceLocation).field_0x10;
                dVar8 = (double)*(float *)(local_6b0.DataPtr + (int)uVar23) * dVar4 +
                        *(double *)&pFVar5->LocalSpaceLocation;
                dVar4 = (double)*(float *)&local_6b0.DataPtr[(int)uVar23].field_0x4 * dVar4 +
                        *(double *)&(pFVar5->LocalSpaceLocation).field_0x8;
                local_5e8 = dVar9;
                if (local_680 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar20 = FDebugDrawQueue::GetInstance();
                  bVar16 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&WireframeColor);
                  pFVar21 = FDebugDrawQueue::GetInstance();
                  if ((pFVar21->bEnableDebugDrawing != false) &&
                     (pFVar21 = FDebugDrawQueue::GetInstance(), 0 < pFVar21->NumConsumers)) {
                    pFVar1 = &pFVar20->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_660 = local_618;
                    local_670 = dVar12;
                    dStack_668 = dVar2;
                    bVar17 = FDebugDrawQueue::AcceptCommand
                                       (pFVar20,1,(TVector<double,3> *)&local_670);
                    if (bVar17) {
                      local_510 = (void *)0x0;
                      local_508 = 0;
                      local_500 = 0;
                      local_5a8 = local_6a0;
                      local_5a0 = 0;
                      local_598 = 0x38d1b717;
                      local_590 = 0;
                      local_430 = 1;
                      local_5d8._s_0.X = dVar12;
                      local_5d8._s_0.Y = dVar2;
                      local_5d8._s_0.Z = dVar13;
                      local_5c0 = dVar10;
                      local_5b8 = dVar3;
                      local_5b0 = dVar11;
                      local_594 = -bVar16 & 2;
                      FDebugDrawQueue::AddCommand(pFVar20,(FLatentDrawCommand *)&local_5d8._s_0);
                      if (local_510 != (void *)0x0) {
                        FMemory::Free(local_510);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                  pFVar20 = FDebugDrawQueue::GetInstance();
                  bVar16 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&WireframeColor);
                  pFVar21 = FDebugDrawQueue::GetInstance();
                  if ((pFVar21->bEnableDebugDrawing != false) &&
                     (pFVar21 = FDebugDrawQueue::GetInstance(), 0 < pFVar21->NumConsumers)) {
                    pFVar1 = &pFVar20->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_648 = local_600;
                    local_658 = dVar10;
                    dStack_650 = dVar3;
                    bVar17 = FDebugDrawQueue::AcceptCommand
                                       (pFVar20,1,(TVector<double,3> *)&local_658);
                    if (bVar17) {
                      local_360 = (void *)0x0;
                      local_358 = 0;
                      local_350 = 0;
                      local_3f8 = local_69c;
                      local_3f0 = 0;
                      local_3e8 = 0x38d1b717;
                      local_3e0 = 0;
                      local_280 = 1;
                      local_428._s_0.X = dVar10;
                      local_428._s_0.Y = dVar3;
                      local_428._s_0.Z = dVar11;
                      local_410 = dVar8;
                      local_408 = dVar4;
                      local_400 = dVar9;
                      local_3e4 = -bVar16 & 2;
                      FDebugDrawQueue::AddCommand(pFVar20,(FLatentDrawCommand *)&local_428._s_0);
                      if (local_360 != (void *)0x0) {
                        FMemory::Free(local_360);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                  pFVar20 = FDebugDrawQueue::GetInstance();
                  bVar16 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&WireframeColor);
                  pFVar21 = FDebugDrawQueue::GetInstance();
                  uVar28 = local_6b8;
                  if ((pFVar21->bEnableDebugDrawing != false) &&
                     (pFVar21 = FDebugDrawQueue::GetInstance(), uVar28 = local_6b8,
                     0 < pFVar21->NumConsumers)) {
                    pFVar1 = &pFVar20->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_630 = local_5e8;
                    local_640 = dVar8;
                    dStack_638 = dVar4;
                    bVar17 = FDebugDrawQueue::AcceptCommand
                                       (pFVar20,1,(TVector<double,3> *)&local_640);
                    if (bVar17) {
                      local_1b0 = (void *)0x0;
                      local_1a8 = 0;
                      local_1a0 = 0;
                      local_248 = local_698;
                      local_240 = 0;
                      local_238 = 0x38d1b717;
                      local_230 = 0;
                      local_d0 = 1;
                      local_278._s_0.X = dVar8;
                      local_278._s_0.Y = dVar4;
                      local_278._s_0.Z = dVar9;
                      local_260 = dVar12;
                      local_258 = dVar2;
                      local_250 = dVar13;
                      local_234 = -bVar16 & 2;
                      FDebugDrawQueue::AddCommand(pFVar20,(FLatentDrawCommand *)&local_278._s_0);
                      if (local_1b0 != (void *)0x0) {
                        FMemory::Free(local_1b0);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    uVar28 = local_6b8;
                  }
                }
                uVar18 = (int)uVar29 + 1;
                uVar29 = (ulonglong)uVar18;
                piVar27 = piVar27 + 3;
                this = local_690;
              } while ((int)uVar18 < iVar19);
            }
          }
        }
        pFVar26 = local_688 + 8;
        local_688 = pFVar26;
      } while (pFVar26 != local_678);
    }
  }
  return;
}

// DrawLocalSpace @ 14dbe2ca0

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
Chaos::FClothVisualizationNoGC::DrawLocalSpace
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  FClothingSimulationSolver *pFVar2;
  FClothingSimulationCloth *this_00;
  code *pcVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  FText *pFVar10;
  FScriptContainerElement *pFVar11;
  FName local_res8;
  TVector<double>_u_0 local_d8;
  FText local_c0;
  TVector<double>_u_0 local_b0;
  TQuat<double> local_98;
  double local_78;
  double dStack_70;
  double local_68;
  
  pFVar2 = this->Solver;
  if (pFVar2 != (FClothingSimulationSolver *)0x0) {
    DrawCoordinateSystem
              (param_1,&UE::Math::TQuat<double>::Identity,
               (TVector<double> *)&pFVar2->LocalSpaceLocation,
               (float)(pFVar2->LocalSpaceScale * __real_4014000000000000),__real_3e800000);
    pFVar2 = this->Solver;
    DrawCoordinateSystem
              (param_1,(TQuat<double> *)&pFVar2->LocalSpaceRotation,
               (TVector<double> *)&pFVar2->LocalSpaceLocation,
               (float)(pFVar2->LocalSpaceScale * __real_401c000000000000),__real_3f000000);
    iVar9 = (this->Solver->Cloths).ArrayNum;
    pFVar11 = (this->Solver->Cloths).AllocatorInstance.Data;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar7 = __real_4000000000000000;
    fVar6 = __real_40000000;
    dVar5 = __real_4024000000000000;
    fVar4 = __real_3f800000;
    pFVar1 = pFVar11 + (longlong)iVar9 * 8;
    for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 8) {
      this_00 = *(FClothingSimulationCloth **)pFVar11;
      iVar9 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
      if (iVar9 != -1) {
        local_b0._s_0.X = (double)*(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x20;
        local_b0._s_0.Y = (double)*(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x28;
        local_b0._s_0.Z = (double)*(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x30;
        local_98.Z = *(double *)&(this_00->ReferenceSpaceTransform).field_0x10;
        local_98.W = *(double *)&(this_00->ReferenceSpaceTransform).field_0x18;
        local_98.X = *(double *)&this_00->ReferenceSpaceTransform;
        local_98.Y = *(double *)&(this_00->ReferenceSpaceTransform).field_0x8;
        DrawCoordinateSystem
                  (param_1,&local_98,(TVector<double> *)&local_b0._s_0,
                   (float)(this->Solver->LocalSpaceScale * dVar5),fVar4);
        if ((this_00->Mesh == (FClothingSimulationMesh *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Cloth->GetMesh()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                               ,0xaa3,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_res8 = this_00->Mesh->ReferenceBoneName;
        pFVar10 = FText::FromName(&local_c0,&local_res8);
        local_78 = *(double *)&(this_00->ReferenceSpaceTransform).field_0x20;
        dStack_70 = *(double *)&(this_00->ReferenceSpaceTransform).field_0x28;
        local_68 = *(double *)&(this_00->ReferenceSpaceTransform).field_0x30;
        local_d8._s_0.X = local_78 + dVar7;
        local_d8._s_0.Y = dStack_70 + dVar7;
        local_d8._s_0.Z = local_68 + dVar7;
        DrawText((FCanvas *)0x0,(FSceneView *)0x0,(TVector<double> *)&local_d8._s_0,pFVar10,
                 &FLinearColor::White,fVar6);
        if (local_c0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
        }
      }
    }
  }
  return;
}

// DrawLongRangeConstraint @ 14dbe2f80

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
Chaos::FClothVisualizationNoGC::DrawLongRangeConstraint
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  uint *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  FClothingSimulationSolver *pFVar7;
  FClothingSimulationCloth *this_00;
  undefined1 *puVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  FDebugDrawQueue *pFVar22;
  FDebugDrawQueue *pFVar23;
  uchar uVar24;
  undefined1 *puVar25;
  longlong lVar26;
  FPrimitiveDrawInterface *pFVar27;
  uint *puVar28;
  int iVar29;
  FScriptContainerElement *pFVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStackY_578 [32];
  uint local_548;
  int local_544;
  float local_540;
  float fStack_53c;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_520;
  FPrimitiveDrawInterface *local_510;
  longlong local_508;
  FScriptContainerElement *local_500;
  double local_4f8;
  double local_4f0;
  longlong *local_4e8;
  FScriptContainerElement *local_4e0;
  FLinearColor local_4d8;
  FLinearColor local_4c8;
  undefined8 local_4b8;
  FLinearColor local_4a8;
  undefined1 local_498 [16];
  double local_488;
  TVector<double>_u_0 local_480;
  undefined1 local_468 [16];
  double local_458;
  double local_440;
  TVector<double>_u_0 local_438;
  undefined1 local_420 [16];
  double local_410;
  undefined1 local_400;
  undefined4 local_3f8;
  byte local_3f4;
  undefined4 local_3f0;
  void *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_290;
  TVector<double>_u_0 local_288;
  double local_270;
  double local_268;
  double local_260;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_578;
  pFVar7 = this->Solver;
  if (pFVar7 != (FClothingSimulationSolver *)0x0) {
    iVar18 = (pFVar7->Cloths).ArrayNum;
    iVar29 = 0;
    pFVar30 = (pFVar7->Cloths).AllocatorInstance.Data;
    local_544 = 0;
    local_510 = param_1;
    local_500 = pFVar30;
    if ((iVar18 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_4e0 = pFVar30 + (longlong)iVar18 * 8;
    fVar31 = __real_38d1b717;
    fVar38 = __real_3f000000;
    uVar19 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (pFVar30 != local_4e0) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar30;
        uVar17 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (uVar17 != 0xffffffff) {
          pFVar7 = this->Solver;
          if (*(int *)&(pFVar7->ClothsConstraints).field_0x8 !=
              *(int *)&(pFVar7->ClothsConstraints).field_0x34) {
            puVar8 = *(undefined1 **)&(pFVar7->ClothsConstraints).field_0x40;
            puVar25 = &(pFVar7->ClothsConstraints).field_0x38;
            if (puVar8 != (undefined1 *)0x0) {
              puVar25 = puVar8;
            }
            iVar18 = *(int *)(puVar25 +
                             (ulonglong)
                             (*(int *)&(pFVar7->ClothsConstraints).field_0x48 - 1U & uVar17) * 4);
            if (iVar18 != -1) {
              do {
                lVar26 = *(longlong *)&pFVar7->ClothsConstraints + (longlong)iVar18 * 0x18;
                if (*(uint *)(*(longlong *)&pFVar7->ClothsConstraints + (longlong)iVar18 * 0x18) ==
                    uVar17) {
                  if (lVar26 != 0) goto LAB_14dbe3154;
                  goto LAB_14dbe312e;
                }
                iVar18 = *(int *)(lVar26 + 0x10);
              } while (iVar18 != -1);
            }
          }
          lVar26 = 0;
LAB_14dbe312e:
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L"");
          if (bVar15) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
LAB_14dbe3154:
          lVar26 = *(longlong *)(lVar26 + 8);
          FClothingSimulationCloth::GetParticlePositions(this_00,&local_520,this->Solver);
          iVar18 = local_520.ArrayNum;
          lVar26 = *(longlong *)(lVar26 + 0xb0);
          if (lVar26 != 0) {
            local_4e8 = *(longlong **)(lVar26 + 8);
            local_548 = 0;
            iVar20 = (int)local_4e8[1];
            if (0 < iVar20) {
              local_508 = 0;
              do {
                plVar14 = local_4e8;
                lVar13 = local_508;
                uVar21 = (ulonglong)(local_548 + iVar29);
                uVar24 = 0x9d;
                if (0 < (int)(local_548 + iVar29)) {
                  do {
                    uVar24 = uVar24 + 0x9d;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                FLinearColor::MakeFromHSV8(&local_4c8,uVar24,0xa0,0x80);
                FLinearColor::LinearRGBToHSV(&local_4c8,&local_4d8);
                local_4d8.field0_0x0._s_0.B = local_4d8.field0_0x0._s_0.B * fVar38;
                FLinearColor::HSVToLinearRGB(&local_4d8,&local_4a8);
                uVar17 = 0;
                if ((int)local_548 < (int)plVar14[1]) {
                  uVar17 = ~local_548 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar9 = *plVar14;
                puVar28 = *(uint **)(lVar9 + lVar13);
                puVar2 = puVar28 + (longlong)*(int *)(lVar9 + 8 + lVar13) * 3;
                pFVar30 = local_500;
                for (; local_500 = pFVar30, puVar28 != puVar2; puVar28 = puVar28 + 3) {
                  uVar17 = *puVar28;
                  uVar6 = puVar28[1];
                  if ((*(int *)(lVar26 + 0x80) < 2) ||
                     ((float)((uint)(*(float *)(lVar26 + 0x88) - *(float *)(lVar26 + 0x8c)) & uVar19
                             ) <= fVar31)) {
                    fVar31 = Softs::FPBDWeightMap::GetLow((FPBDWeightMap *)(lVar26 + 0x60));
                  }
                  else {
                    fVar31 = Softs::FPBDWeightMap::operator[]
                                       ((FPBDWeightMap *)(lVar26 + 0x60),uVar6);
                  }
                  fVar38 = (float)puVar28[2];
                  uVar19 = 0;
                  if ((int)uVar17 < iVar18) {
                    uVar19 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar15)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  uVar3 = *(undefined8 *)(local_520.DataPtr + (int)uVar17);
                  fVar32 = *(float *)&local_520.DataPtr[(int)uVar17].field_0x8;
                  uVar19 = 0;
                  if ((int)uVar6 < iVar18) {
                    uVar19 = ~uVar6 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar15)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pFVar27 = local_510;
                  local_540 = (float)uVar3;
                  fStack_53c = (float)((ulonglong)uVar3 >> 0x20);
                  uVar3 = *(undefined8 *)(local_520.DataPtr + (int)uVar6);
                  fVar36 = *(float *)&local_520.DataPtr[(int)uVar6].field_0x8;
                  pFVar7 = this->Solver;
                  local_4b8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                  fVar35 = local_4b8._4_4_;
                  dVar4 = pFVar7->LocalSpaceScale;
                  local_4f8 = *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
                  dVar5 = *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
                  dVar34 = (double)(float)uVar3 * dVar4 + *(double *)&pFVar7->LocalSpaceLocation;
                  dVar11 = (double)local_540 * dVar4 + *(double *)&pFVar7->LocalSpaceLocation;
                  dVar12 = (double)fVar32 * dVar4 + dVar5;
                  dVar37 = (double)fStack_53c * dVar4 + local_4f8;
                  local_4f8 = (double)local_4b8._4_4_ * dVar4 + local_4f8;
                  uVar39 = SUB84(local_4f8,0);
                  uVar40 = (undefined4)((ulonglong)local_4f8 >> 0x20);
                  dVar5 = (double)fVar36 * dVar4 + dVar5;
                  local_480._8_4_ = uVar39;
                  local_480._0_8_ = dVar34;
                  local_480._12_4_ = uVar40;
                  local_4f0 = dVar34;
                  local_4b8 = uVar3;
                  local_480._s_0.Z = dVar5;
                  local_440 = dVar12;
                  if (local_510 == (FPrimitiveDrawInterface *)0x0) {
                    pFVar22 = FDebugDrawQueue::GetInstance();
                    bVar15 = Chaos::Private::bDrawInForeground != false;
                    FLinearColor::ToFColorSRGB(&local_4c8);
                    pFVar23 = FDebugDrawQueue::GetInstance();
                    if ((pFVar23->bEnableDebugDrawing != false) &&
                       (pFVar23 = FDebugDrawQueue::GetInstance(), 0 < pFVar23->NumConsumers)) {
                      pFVar1 = &pFVar22->CommandQueueCS;
                      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::ReportNotNullPtr();
                      }
                      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                      local_498._8_4_ = SUB84(dVar37,0);
                      local_498._0_8_ = dVar11;
                      local_498._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
                      local_488 = local_440;
                      bVar16 = FDebugDrawQueue::AcceptCommand
                                         (pFVar22,1,(TVector<double,3> *)local_498);
                      if (bVar16) {
                        local_370 = (void *)0x0;
                        local_368 = 0;
                        local_360 = 0;
                        local_420._8_4_ = uVar39;
                        local_420._0_8_ = dVar34;
                        local_420._12_4_ = uVar40;
                        local_400 = 0;
                        local_3f8 = 0x38d1b717;
                        local_3f0 = 0;
                        local_290 = 1;
                        local_438._s_0.X = dVar11;
                        local_438._s_0.Y = dVar37;
                        local_438._s_0.Z = dVar12;
                        local_410 = dVar5;
                        local_3f4 = -bVar15 & 2;
                        FDebugDrawQueue::AddCommand(pFVar22,(FLatentDrawCommand *)&local_438._s_0);
                        if (local_370 != (void *)0x0) {
                          FMemory::Free(local_370);
                        }
                      }
                      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                      pFVar27 = local_510;
                    }
                  }
                  fVar33 = __real_3f800000;
                  DrawPoint((FPrimitiveDrawInterface *)0x0,(TVector<double> *)&local_480._s_0,
                            &local_4c8,(UMaterial *)0x0,__real_3f800000);
                  fVar35 = fVar35 - fStack_53c;
                  local_540 = (float)uVar3 - local_540;
                  fVar36 = fVar36 - fVar32;
                  fVar32 = local_540 * local_540 + fVar35 * fVar35 + fVar36 * fVar36;
                  if (__real_38d1b717 <= fVar32) {
                    fVar32 = SQRT(fVar32);
                    fVar33 = fVar33 / fVar32;
                    if (__real_322bcc77 < fVar32) {
                      dVar4 = this->Solver->LocalSpaceScale;
                      fVar32 = fVar31 * fVar38 - fVar32;
                      dVar37 = (double)(fVar32 * fVar33 * fVar35) * dVar4 + local_4f8;
                      dVar11 = (double)(fVar32 * local_540 * fVar33) * dVar4 + local_4f0;
                      if (pFVar27 == (FPrimitiveDrawInterface *)0x0) {
                        pFVar22 = FDebugDrawQueue::GetInstance();
                        bVar15 = Chaos::Private::bDrawInForeground != false;
                        FLinearColor::ToFColorSRGB(&local_4a8);
                        pFVar23 = FDebugDrawQueue::GetInstance();
                        if ((pFVar23->bEnableDebugDrawing != false) &&
                           (pFVar23 = FDebugDrawQueue::GetInstance(), 0 < pFVar23->NumConsumers)) {
                          pFVar1 = &pFVar22->CommandQueueCS;
                          if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                            UE::Core::Private::ReportNotNullPtr();
                          }
                          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                          local_468._8_4_ = uVar39;
                          local_468._0_8_ = dVar34;
                          local_468._12_4_ = uVar40;
                          local_458 = dVar5;
                          bVar16 = FDebugDrawQueue::AcceptCommand
                                             (pFVar22,1,(TVector<double,3> *)local_468);
                          if (bVar16) {
                            local_1c0 = (void *)0x0;
                            local_1b8 = 0;
                            local_1b0 = 0;
                            local_288._8_4_ = uVar39;
                            local_288._0_8_ = dVar34;
                            local_288._12_4_ = uVar40;
                            local_250 = 0;
                            local_248 = 0x38d1b717;
                            local_240 = 0;
                            local_e0 = 1;
                            local_288._s_0.Z = dVar5;
                            local_270 = dVar11;
                            local_268 = dVar37;
                            local_260 = (double)(fVar32 * fVar33 * fVar36) * dVar4 + dVar5;
                            local_244 = -bVar15 & 2;
                            FDebugDrawQueue::AddCommand
                                      (pFVar22,(FLatentDrawCommand *)&local_288._s_0);
                            if (local_1c0 != (void *)0x0) {
                              FMemory::Free(local_1c0);
                            }
                          }
                          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                        }
                      }
                    }
                  }
                  fVar31 = __real_38d1b717;
                  fVar38 = __real_3f000000;
                  uVar19 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                  lVar13 = local_508;
                  pFVar30 = local_500;
                }
                local_548 = local_548 + 1;
                local_508 = lVar13 + 0x10;
                iVar20 = (int)local_4e8[1];
                iVar29 = local_544;
              } while ((int)local_548 < iVar20);
            }
            iVar29 = iVar29 + iVar20;
            local_544 = iVar29;
          }
        }
        pFVar30 = pFVar30 + 8;
        local_500 = pFVar30;
      } while (pFVar30 != local_4e0);
    }
  }
  return;
}

// DrawMaxDistanceValues @ 14dbe38b0

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
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
Chaos::FClothVisualizationNoGC::DrawMaxDistanceValues
          (FClothVisualizationNoGC *this,FCanvas *param_1,FSceneView *param_2)

{
  double dVar1;
  int iVar2;
  FClothingSimulationCloth *this_00;
  FClothingSimulationConfig *this_01;
  FClothingSimulationSolver *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TArrayView<float_const_,int> *pTVar11;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar12;
  FCollectionPropertyConstFacade *this_02;
  int *piVar13;
  float *pfVar14;
  FLinearColor *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  TArrayView<float_const_,int> local_150;
  float local_140;
  float local_13c;
  FScriptContainerElement *local_138;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_130;
  TArrayView<float_const_,int> local_120;
  FNumberFormattingOptions local_110;
  undefined8 local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  TSharedPtr<FCulture,1> local_e8;
  FText local_d8;
  TVector<double>_u_0 local_c8;
  TArrayView<float_const_,int> local_b0 [7];
  
  fVar5 = __real_3b808081;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar18 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      DynamicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
      DynamicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
      DynamicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
      DynamicColor.field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar5;
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar18 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      KinematicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
      KinematicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
      KinematicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
      KinematicColor.field0_0x0._s_0.A = (float)FColor::Purple.field0_0x0._3_1_ * fVar5;
      _Init_thread_footer(&::_TSS1);
    }
    FNumberFormattingOptions::FNumberFormattingOptions(&local_110);
    local_110.AlwaysSign = false;
    local_110.UseGrouping = false;
    local_110.RoundingMode = ___xmm_00000002000000060000000100000001;
    local_110.MinimumIntegralDigits = _UNK_152c9fda4;
    local_110.MaximumIntegralDigits = _UNK_152c9fda8;
    local_110.MinimumFractionalDigits = _UNK_152c9fdac;
    local_110.MaximumFractionalDigits = 2;
    iVar9 = (this->Solver->Cloths).ArrayNum;
    pFVar17 = (this->Solver->Cloths).AllocatorInstance.Data;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar6 = __real_3f800000;
    fVar5 = __real_38d1b717;
    local_138 = pFVar17 + (longlong)iVar9 * 8;
    if (pFVar17 != local_138) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar17;
        iVar9 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (iVar9 != -1) {
          iVar9 = FClothingSimulationCloth::GetNumParticles(this_00,this->Solver);
          pTVar11 = FClothingSimulationCloth::GetWeightMapByProperty
                              (this_00,local_b0,this->Solver,
                               &Softs::FPBDSphericalConstraint::MaxDistanceName);
          this_01 = this_00->Config;
          pTVar12 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                            *)&this_00->LODIndices,this->Solver);
          if ((pTVar12 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_02 = (FCollectionPropertyConstFacade *)
                    FClothingSimulationConfig::GetProperties(this_01,*(int *)&pTVar12->field_0x8);
          piVar13 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            *)&this_02->KeyNameIndices,
                           Softs::FPBDSphericalConstraint::MaxDistanceName);
          if ((piVar13 == (int *)0x0) || (iVar2 = *piVar13, iVar2 == -1)) {
            local_140 = 0.0;
            fVar20 = 1.0;
          }
          else {
            fVar20 = Softs::FCollectionPropertyConstFacade::
                     GetValue<float,UE::Math::TVector<float>_>
                               (this_02,iVar2,&this_02->HighValueArray);
            local_140 = Softs::FCollectionPropertyConstFacade::
                        GetValue<float,UE::Math::TVector<float>_>
                                  (this_02,iVar2,&this_02->LowValueArray);
          }
          if (pTVar11->ArrayNum == iVar9) {
            local_150.DataPtr = pTVar11->DataPtr;
            local_150._8_8_ = *(undefined8 *)&pTVar11->ArrayNum;
          }
          else {
            local_f8 = 0;
            uStack_f0 = 0;
            local_150.DataPtr = (float *)0x0;
            local_150._8_8_ = (ulonglong)uStack_ec << 0x20;
          }
          local_13c = fVar20 - local_140;
          FClothingSimulationCloth::GetAnimationPositions(this_00,&local_130,this->Solver);
          FClothingSimulationCloth::GetParticleInvMasses(this_00,&local_120,this->Solver);
          if ((iVar9 != local_130.ArrayNum) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumParticles == Positions.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                 ,0x210,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((iVar9 != local_120.ArrayNum) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumParticles == InvMasses.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                 ,0x211,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = local_150.ArrayNum;
          uVar16 = 0;
          lVar18 = 0;
          if (0 < local_150.ArrayNum) {
            lVar19 = 0;
            do {
              fVar20 = local_13c;
              fVar21 = local_140;
              if ((0 < iVar9) && (fVar5 < (float)((uint)local_13c & uVar7))) {
                pfVar14 = TArrayView<float_const_,int>::operator[](&local_150,uVar16);
                fVar21 = fVar20 * *pfVar14 + local_140;
              }
              uVar10 = 0;
              if ((int)uVar16 < local_130.ArrayNum) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar3 = this->Solver;
              dVar1 = pFVar3->LocalSpaceScale;
              local_c8._s_0.X =
                   (double)*(float *)(&(local_130.DataPtr)->field_0x0 + lVar19) * dVar1 +
                   *(double *)&pFVar3->LocalSpaceLocation;
              local_c8._s_0.Y =
                   (double)*(float *)(&(local_130.DataPtr)->field_0x4 + lVar19) * dVar1 +
                   *(double *)&(pFVar3->LocalSpaceLocation).field_0x8;
              local_c8._s_0.Z =
                   (double)*(float *)(&(local_130.DataPtr)->field_0x8 + lVar19) * dVar1 +
                   *(double *)&(pFVar3->LocalSpaceLocation).field_0x10;
              local_e8.Object = (FCulture *)0x0;
              local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              FText::AsNumber(&local_d8,(double)fVar21,&local_110,&local_e8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_e8.SharedReferenceCount.ReferenceController);
              uVar10 = 0;
              if ((int)uVar16 < local_120.ArrayNum) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar15 = &DynamicColor;
              if (local_120.DataPtr[lVar18] == 0.0) {
                pFVar15 = &KinematicColor;
              }
              DrawText(param_1,param_2,(TVector<double> *)&local_c8._s_0,&local_d8,pFVar15,fVar6);
              if (local_d8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
              }
              uVar16 = uVar16 + 1;
              lVar18 = lVar18 + 1;
              lVar19 = lVar19 + 0xc;
            } while ((int)uVar16 < iVar9);
          }
        }
        pFVar17 = pFVar17 + 8;
      } while (pFVar17 != local_138);
    }
  }
  return;
}

// DrawMaxDistances @ 14dbe3f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawMaxDistances
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  int iVar2;
  FClothingSimulationSolver *pFVar3;
  FClothingSimulationCloth *this_00;
  FClothingSimulationConfig *this_01;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  TArrayView<float_const_,int> *pTVar15;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar16;
  FCollectionPropertyConstFacade *this_02;
  int *piVar17;
  undefined8 uVar18;
  float *pfVar19;
  FDebugDrawQueue *this_03;
  FDebugDrawQueue *pFVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  undefined4 uVar28;
  undefined1 auStackY_398 [32];
  FScriptContainerElement *local_368;
  TVector<double>_u_0 local_358;
  float local_340;
  float fStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined8 local_330;
  int local_328;
  TArrayView<float_const_,int> local_320;
  float local_310;
  float local_30c;
  FPrimitiveDrawInterface *local_308;
  FScriptContainerElement *local_300;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2f8;
  TArrayView<float_const_,int> local_2e8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2d8;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined1 local_2b8 [16];
  double local_2a8;
  TArrayView<float_const_,int> local_2a0;
  TVector<double>_u_0 local_288;
  double local_270;
  double local_268;
  double local_260;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  pFVar3 = this->Solver;
  if (pFVar3 != (FClothingSimulationSolver *)0x0) {
    local_368 = (pFVar3->Cloths).AllocatorInstance.Data;
    iVar13 = (pFVar3->Cloths).ArrayNum;
    local_308 = param_1;
    if ((iVar13 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar9 = __real_3f800000;
    fVar8 = __real_38d1b717;
    local_300 = local_368 + (longlong)iVar13 * 8;
    if (local_368 != local_300) {
      do {
        this_00 = *(FClothingSimulationCloth **)local_368;
        iVar13 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (iVar13 != -1) {
          iVar13 = FClothingSimulationCloth::GetNumParticles(this_00,this->Solver);
          pTVar15 = FClothingSimulationCloth::GetWeightMapByProperty
                              (this_00,&local_2a0,this->Solver,
                               &Softs::FPBDSphericalConstraint::MaxDistanceName);
          this_01 = this_00->Config;
          local_338 = 0;
          uStack_334 = 0x3f800000;
          pTVar16 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                            *)&this_00->LODIndices,this->Solver);
          if ((pTVar16 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_02 = (FCollectionPropertyConstFacade *)
                    FClothingSimulationConfig::GetProperties(this_01,*(int *)&pTVar16->field_0x8);
          piVar17 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            *)&this_02->KeyNameIndices,
                           Softs::FPBDSphericalConstraint::MaxDistanceName);
          if ((piVar17 == (int *)0x0) || (iVar2 = *piVar17, iVar2 == -1)) {
            uVar18 = CONCAT44(uStack_334,local_338);
          }
          else {
            fVar25 = Softs::FCollectionPropertyConstFacade::
                     GetValue<float,UE::Math::TVector<float>_>
                               (this_02,iVar2,&this_02->HighValueArray);
            local_340 = Softs::FCollectionPropertyConstFacade::
                        GetValue<float,UE::Math::TVector<float>_>
                                  (this_02,iVar2,&this_02->LowValueArray);
            uVar18 = CONCAT44(fVar25,local_340);
            fStack_33c = fVar25;
          }
          if (pTVar15->ArrayNum == iVar13) {
            local_320.ArrayNum = pTVar15->ArrayNum;
            local_320.DataPtr._0_4_ = *(undefined4 *)&pTVar15->DataPtr;
            local_320.DataPtr._4_4_ = *(undefined4 *)((longlong)&pTVar15->DataPtr + 4);
            local_320._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
          }
          else {
            local_2c8 = 0;
            uStack_2c0 = 0;
            local_2c8._0_4_ = 0;
            local_2c8._4_4_ = 0;
            local_320.ArrayNum = 0;
            local_320.DataPtr._0_4_ = (undefined4)local_2c8;
            local_320.DataPtr._4_4_ = local_2c8._4_4_;
            local_320._12_4_ = uStack_2bc;
          }
          local_330._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
          local_330._0_4_ = (float)uVar18;
          local_30c = local_330._4_4_ - (float)local_330;
          local_310 = (float)local_330;
          local_330 = uVar18;
          local_328 = iVar13;
          FClothingSimulationCloth::GetParticleInvMasses(this_00,&local_2e8,this->Solver);
          FClothingSimulationCloth::GetAnimationPositions(this_00,&local_2f8,this->Solver);
          FClothingSimulationCloth::GetAnimationNormals(this_00,&local_2d8,this->Solver);
          if ((iVar13 != local_2e8.ArrayNum) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumParticles == InvMasses.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0x7b2,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((iVar13 != local_2f8.ArrayNum) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumParticles == Positions.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0x7b3,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((iVar13 != local_2d8.ArrayNum) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumParticles == Normals.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0x7b4,L""), bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar22 = 0;
          lVar23 = 0;
          if (0 < local_320.ArrayNum) {
            lVar24 = 0;
            do {
              fVar25 = local_30c;
              fVar27 = local_310;
              if ((0 < local_320.ArrayNum) && (fVar8 < (float)((uint)local_30c & uVar10))) {
                pfVar19 = TArrayView<float_const_,int>::operator[](&local_320,uVar22);
                fVar27 = fVar25 * *pfVar19 + local_310;
              }
              uVar21 = ~uVar22 >> 0x1f;
              uVar14 = 0;
              if ((int)uVar22 < local_2f8.ArrayNum) {
                uVar14 = uVar21;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar3 = this->Solver;
              dVar1 = pFVar3->LocalSpaceScale;
              dVar5 = (double)*(float *)(&(local_2f8.DataPtr)->field_0x0 + lVar24) * dVar1 +
                      *(double *)&pFVar3->LocalSpaceLocation;
              dVar6 = (double)*(float *)(&(local_2f8.DataPtr)->field_0x4 + lVar24) * dVar1 +
                      *(double *)&(pFVar3->LocalSpaceLocation).field_0x8;
              uVar28 = (undefined4)((ulonglong)dVar6 >> 0x20);
              local_358._s_0.Z =
                   (double)*(float *)(&(local_2f8.DataPtr)->field_0x8 + lVar24) * dVar1 +
                   *(double *)&(pFVar3->LocalSpaceLocation).field_0x10;
              uVar14 = 0;
              if ((int)uVar22 < local_2e8.ArrayNum) {
                uVar14 = uVar21;
              }
              local_358._s_0.X = dVar5;
              local_358._s_0.Y = dVar6;
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (local_2e8.DataPtr[lVar23] == 0.0) {
                DrawPoint((FPrimitiveDrawInterface *)0x0,(TVector<double> *)&local_358._s_0,
                          &FLinearColor::Red,(UMaterial *)0x0,fVar9);
              }
              else {
                uVar14 = 0;
                if ((int)uVar22 < local_2d8.ArrayNum) {
                  uVar14 = uVar21;
                }
                if ((uVar14 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar11)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                dVar26 = (double)fVar27;
                dVar1 = this->Solver->LocalSpaceScale;
                fVar25 = *(float *)(&(local_2d8.DataPtr)->field_0x0 + lVar24);
                fVar27 = *(float *)(&(local_2d8.DataPtr)->field_0x4 + lVar24);
                dVar7 = (double)*(float *)(&(local_2d8.DataPtr)->field_0x8 + lVar24) * dVar1 *
                        dVar26 + local_358._s_0.Z;
                if (local_308 == (FPrimitiveDrawInterface *)0x0) {
                  this_03 = FDebugDrawQueue::GetInstance();
                  bVar11 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&FLinearColor::White);
                  pFVar20 = FDebugDrawQueue::GetInstance();
                  if ((pFVar20->bEnableDebugDrawing != false) &&
                     (pFVar20 = FDebugDrawQueue::GetInstance(), 0 < pFVar20->NumConsumers)) {
                    lpCriticalSection = &this_03->CommandQueueCS;
                    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    uVar18 = local_358._s_0.Z;
                    local_2b8._8_4_ = SUB84(dVar6,0);
                    local_2b8._0_8_ = dVar5;
                    local_2b8._12_4_ = uVar28;
                    local_2a8 = local_358._s_0.Z;
                    bVar12 = FDebugDrawQueue::AcceptCommand
                                       (this_03,1,(TVector<double,3> *)local_2b8);
                    if (bVar12) {
                      local_1c0 = (void *)0x0;
                      local_1b8 = 0;
                      local_1b0 = 0;
                      local_288._8_4_ = SUB84(dVar6,0);
                      local_288._0_8_ = dVar5;
                      local_288._12_4_ = uVar28;
                      local_288._s_0.Z = (double)uVar18;
                      local_250 = 0;
                      local_248 = 0x38d1b717;
                      local_240 = 0;
                      local_e0 = 1;
                      local_270 = (double)fVar25 * dVar1 * dVar26 + dVar5;
                      local_268 = (double)fVar27 * dVar1 * dVar26 + dVar6;
                      local_260 = dVar7;
                      local_244 = -bVar11 & 2;
                      FDebugDrawQueue::AddCommand(this_03,(FLatentDrawCommand *)&local_288._s_0);
                      if (local_1c0 != (void *)0x0) {
                        FMemory::Free(local_1c0);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  }
                }
              }
              uVar22 = uVar22 + 1;
              lVar23 = lVar23 + 1;
              lVar24 = lVar24 + 0xc;
            } while ((int)uVar22 < local_320.ArrayNum);
          }
        }
        local_368 = local_368 + 8;
      } while (local_368 != local_300);
    }
  }
  return;
}

// DrawMultiResConstraint @ 14dbe4670

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
Chaos::FClothVisualizationNoGC::DrawMultiResConstraint
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  double dVar2;
  double dVar3;
  FClothingSimulationSolver *pFVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint *puVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  FDebugDrawQueue *pFVar18;
  FDebugDrawQueue *pFVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  FLinearColor *pFVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint *puVar28;
  FScriptContainerElement *pFVar29;
  FClothVisualizationNoGC *pFVar30;
  longlong lVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  float fVar38;
  undefined1 auStack_b08 [32];
  longlong local_ae8;
  longlong local_ae0;
  undefined1 local_ad8 [8];
  FPrimitiveDrawInterface *local_ad0;
  FClothVisualizationNoGC *local_ac8;
  undefined8 *local_ac0;
  undefined4 local_ab8;
  undefined4 local_ab4;
  undefined4 local_ab0;
  uint local_aac;
  uint local_aa8;
  undefined4 local_aa4;
  undefined4 local_aa0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_a98;
  TArrayView<float_const_,int> local_a88;
  FScriptContainerElement *local_a78;
  uint *local_a70;
  longlong local_a68;
  FScriptContainerElement *local_a60;
  TArrayView<float_const_,int> local_a58;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_a48;
  double local_a38;
  double dStack_a30;
  double local_a28;
  double local_a20;
  double dStack_a18;
  double local_a10;
  double local_a08;
  double dStack_a00;
  double local_9f8;
  double local_9f0;
  double dStack_9e8;
  double local_9e0;
  double local_9d8;
  double dStack_9d0;
  double local_9c8;
  double local_9b0;
  double local_998;
  double local_980;
  double local_968;
  double local_950;
  TVector<double>_u_0 local_948;
  double local_930;
  double local_928;
  double local_920;
  undefined4 local_918;
  undefined1 local_910;
  undefined4 local_908;
  byte local_904;
  undefined4 local_900;
  void *local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined4 local_7a0;
  TVector<double>_u_0 local_798;
  double local_780;
  double local_778;
  double local_770;
  undefined4 local_768;
  undefined1 local_760;
  undefined4 local_758;
  byte local_754;
  undefined4 local_750;
  void *local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined4 local_5f0;
  TVector<double>_u_0 local_5e8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  undefined4 local_5b8;
  undefined1 local_5b0;
  undefined4 local_5a8;
  byte local_5a4;
  undefined4 local_5a0;
  void *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_440;
  TVector<double>_u_0 local_438;
  double local_420;
  double local_418;
  double local_410;
  undefined4 local_408;
  undefined1 local_400;
  undefined4 local_3f8;
  byte local_3f4;
  undefined4 local_3f0;
  void *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_290;
  TVector<double>_u_0 local_288 [2];
  undefined4 local_258;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_b08;
  pFVar4 = this->Solver;
  if (pFVar4 != (FClothingSimulationSolver *)0x0) {
    iVar16 = (pFVar4->Cloths).ArrayNum;
    pFVar29 = (pFVar4->Cloths).AllocatorInstance.Data;
    local_ad0 = param_1;
    local_ac8 = this;
    local_a78 = pFVar29;
    if ((iVar16 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_a60 = pFVar29 + (longlong)iVar16 * 8;
    fVar33 = __real_3b808081;
    if (pFVar29 != local_a60) {
      do {
        local_aa8 = FClothingSimulationCloth::GetParticleRangeId
                              (*(FClothingSimulationCloth **)pFVar29,this->Solver);
        if (local_aa8 != 0xffffffff) {
          pFVar4 = this->Solver;
          if (*(int *)&(pFVar4->ClothsConstraints).field_0x8 !=
              *(int *)&(pFVar4->ClothsConstraints).field_0x34) {
            puVar5 = *(undefined1 **)&(pFVar4->ClothsConstraints).field_0x40;
            puVar20 = &(pFVar4->ClothsConstraints).field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar20 = puVar5;
            }
            iVar16 = *(int *)(puVar20 +
                             (ulonglong)
                             (*(int *)&(pFVar4->ClothsConstraints).field_0x48 - 1U & local_aa8) * 4)
            ;
            if (iVar16 != -1) {
              do {
                lVar23 = *(longlong *)&pFVar4->ClothsConstraints + (longlong)iVar16 * 0x18;
                if (*(uint *)(*(longlong *)&pFVar4->ClothsConstraints + (longlong)iVar16 * 0x18) ==
                    local_aa8) {
                  if (lVar23 != 0) goto LAB_14dbe4836;
                  goto LAB_14dbe4810;
                }
                iVar16 = *(int *)(lVar23 + 0x10);
              } while (iVar16 != -1);
            }
          }
          lVar23 = 0;
LAB_14dbe4810:
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L"");
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_14dbe4836:
          pFVar30 = local_ac8;
          local_a68 = *(longlong *)(*(longlong *)(lVar23 + 8) + 0x150);
          if (local_a68 != 0) {
            iVar16 = *(int *)(local_a68 + 4);
            puVar26 = *(undefined8 **)(local_a68 + 8);
            local_ac0 = puVar26;
            FClothingSimulationSolver::GetParticleXsView(local_ac8->Solver,&local_a98,iVar16);
            FClothingSimulationSolver::GetParticleInvMassesView(pFVar30->Solver,&local_a88,iVar16);
            lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS1) &&
               (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
              DynamicColor.field0_0x0._s_0.R =
                   FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
              DynamicColor.field0_0x0._s_0.G =
                   FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
              DynamicColor.field0_0x0._s_0.B =
                   FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
              DynamicColor.field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar33;
              _Init_thread_footer(&::_TSS1);
            }
            if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS2) &&
               (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
              KinematicColor.field0_0x0._s_0.R =
                   FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
              KinematicColor.field0_0x0._s_0.G =
                   FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
              KinematicColor.field0_0x0._s_0.B =
                   FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
              KinematicColor.field0_0x0._s_0.A = (float)FColor::Purple.field0_0x0._3_1_ * fVar33;
              _Init_thread_footer(&::_TSS2);
            }
            local_aac = *(uint *)(puVar26 + 1);
            uVar21 = (ulonglong)(int)local_aac;
            puVar28 = (uint *)*puVar26;
            local_a70 = puVar28 + uVar21 * 3;
            while( true ) {
              puVar13 = local_a70;
              if (*(int *)(puVar26 + 1) != (int)uVar21) {
                local_ad8[0] = 0;
                `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_ad8);
              }
              if (puVar28 == puVar13) break;
              uVar22 = *puVar28;
              lVar23 = (longlong)(int)uVar22;
              uVar17 = 0;
              if ((int)uVar22 < local_a98.ArrayNum) {
                uVar17 = ~uVar22 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (local_ae8 = lVar23, local_ae0 = (longlong)local_a98.ArrayNum,
                 bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar4 = pFVar30->Solver;
              uVar22 = puVar28[1];
              lVar24 = (longlong)(int)uVar22;
              dVar2 = pFVar4->LocalSpaceScale;
              dVar11 = (double)*(float *)(local_a98.DataPtr + lVar23) * dVar2 +
                       *(double *)&pFVar4->LocalSpaceLocation;
              dVar12 = (double)*(float *)&local_a98.DataPtr[lVar23].field_0x4 * dVar2 +
                       *(double *)&(pFVar4->LocalSpaceLocation).field_0x8;
              dVar2 = (double)*(float *)&local_a98.DataPtr[lVar23].field_0x8 * dVar2 +
                      *(double *)&(pFVar4->LocalSpaceLocation).field_0x10;
              uVar17 = 0;
              if ((int)uVar22 < local_a98.ArrayNum) {
                uVar17 = ~uVar22 >> 0x1f;
              }
              local_9b0 = dVar2;
              if ((uVar17 == 0) &&
                 (local_ae8 = lVar24, local_ae0 = (longlong)local_a98.ArrayNum,
                 bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar4 = pFVar30->Solver;
              uVar22 = puVar28[2];
              lVar23 = (longlong)(int)uVar22;
              dVar36 = pFVar4->LocalSpaceScale;
              dVar8 = (double)*(float *)(local_a98.DataPtr + lVar24) * dVar36 +
                      *(double *)&pFVar4->LocalSpaceLocation;
              dVar35 = (double)*(float *)&local_a98.DataPtr[lVar24].field_0x4 * dVar36 +
                       *(double *)&(pFVar4->LocalSpaceLocation).field_0x8;
              dVar36 = (double)*(float *)&local_a98.DataPtr[lVar24].field_0x8 * dVar36 +
                       *(double *)&(pFVar4->LocalSpaceLocation).field_0x10;
              uVar17 = 0;
              if ((int)uVar22 < local_a98.ArrayNum) {
                uVar17 = ~uVar22 >> 0x1f;
              }
              local_998 = dVar36;
              if ((uVar17 == 0) &&
                 (local_ae8 = lVar23, local_ae0 = (longlong)local_a98.ArrayNum,
                 bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar4 = pFVar30->Solver;
              uVar22 = *puVar28;
              dVar3 = pFVar4->LocalSpaceScale;
              dVar9 = (double)*(float *)(local_a98.DataPtr + lVar23) * dVar3 +
                      *(double *)&pFVar4->LocalSpaceLocation;
              dVar10 = (double)*(float *)&local_a98.DataPtr[lVar23].field_0x4 * dVar3 +
                       *(double *)&(pFVar4->LocalSpaceLocation).field_0x8;
              dVar3 = (double)*(float *)&local_a98.DataPtr[lVar23].field_0x8 * dVar3 +
                      *(double *)&(pFVar4->LocalSpaceLocation).field_0x10;
              uVar17 = 0;
              if ((int)uVar22 < local_a88.ArrayNum) {
                uVar17 = ~uVar22 >> 0x1f;
              }
              local_980 = dVar3;
              if ((uVar17 == 0) &&
                 (local_ae8 = (longlong)(int)uVar22, local_ae0 = (longlong)local_a88.ArrayNum,
                 bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar33 = local_a88.DataPtr[(int)uVar22];
              uVar22 = puVar28[1];
              uVar17 = 0;
              if ((int)uVar22 < local_a88.ArrayNum) {
                uVar17 = ~uVar22 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (local_ae8 = (longlong)(int)uVar22, local_ae0 = (longlong)local_a88.ArrayNum,
                 bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar38 = local_a88.DataPtr[(int)uVar22];
              uVar22 = puVar28[2];
              uVar17 = 0;
              if ((int)uVar22 < local_a88.ArrayNum) {
                uVar17 = ~uVar22 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (local_ae8 = (longlong)(int)uVar22, local_ae0 = (longlong)local_a88.ArrayNum,
                 bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              bVar14 = local_a88.DataPtr[(int)uVar22] != 0.0;
              if ((fVar33 != 0.0) || (fVar38 != 0.0)) {
                pFVar25 = &DynamicColor;
LAB_14dbe4c42:
                if (local_ad0 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar18 = FDebugDrawQueue::GetInstance();
                  bVar32 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(pFVar25);
                  pFVar19 = FDebugDrawQueue::GetInstance();
                  if ((pFVar19->bEnableDebugDrawing != false) &&
                     (pFVar19 = FDebugDrawQueue::GetInstance(), 0 < pFVar19->NumConsumers)) {
                    pFVar1 = &pFVar18->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_a28 = local_9b0;
                    local_a38 = dVar11;
                    dStack_a30 = dVar12;
                    bVar15 = FDebugDrawQueue::AcceptCommand
                                       (pFVar18,1,(TVector<double,3> *)&local_a38);
                    if (bVar15) {
                      local_880 = (void *)0x0;
                      local_878 = 0;
                      local_870 = 0;
                      local_918 = local_ab8;
                      local_910 = 0;
                      local_908 = 0x38d1b717;
                      local_900 = 0;
                      local_7a0 = 1;
                      local_948._s_0.X = dVar11;
                      local_948._s_0.Y = dVar12;
                      local_948._s_0.Z = dVar2;
                      local_930 = dVar8;
                      local_928 = dVar35;
                      local_920 = dVar36;
                      local_904 = -bVar32 & 2;
                      FDebugDrawQueue::AddCommand(pFVar18,(FLatentDrawCommand *)&local_948._s_0);
                      if (local_880 != (void *)0x0) {
                        FMemory::Free(local_880);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                }
                if ((fVar38 != 0.0) || (pFVar25 = &KinematicColor, bVar14)) {
                  pFVar25 = &DynamicColor;
                }
                if (local_ad0 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar18 = FDebugDrawQueue::GetInstance();
                  bVar32 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(pFVar25);
                  pFVar19 = FDebugDrawQueue::GetInstance();
                  if ((pFVar19->bEnableDebugDrawing != false) &&
                     (pFVar19 = FDebugDrawQueue::GetInstance(), 0 < pFVar19->NumConsumers)) {
                    pFVar1 = &pFVar18->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_a10 = local_998;
                    local_a20 = dVar8;
                    dStack_a18 = dVar35;
                    bVar15 = FDebugDrawQueue::AcceptCommand
                                       (pFVar18,1,(TVector<double,3> *)&local_a20);
                    if (bVar15) {
                      local_6d0 = (void *)0x0;
                      local_6c8 = 0;
                      local_6c0 = 0;
                      local_768 = local_ab4;
                      local_760 = 0;
                      local_758 = 0x38d1b717;
                      local_750 = 0;
                      local_5f0 = 1;
                      local_798._s_0.X = dVar8;
                      local_798._s_0.Y = dVar35;
                      local_798._s_0.Z = dVar36;
                      local_780 = dVar9;
                      local_778 = dVar10;
                      local_770 = dVar3;
                      local_754 = -bVar32 & 2;
                      FDebugDrawQueue::AddCommand(pFVar18,(FLatentDrawCommand *)&local_798._s_0);
                      if (local_6d0 != (void *)0x0) {
                        FMemory::Free(local_6d0);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                }
                if ((bVar14) || (pFVar25 = &KinematicColor, fVar33 != 0.0)) {
                  pFVar25 = &DynamicColor;
                }
                puVar26 = local_ac0;
                if (local_ad0 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar18 = FDebugDrawQueue::GetInstance();
                  bVar14 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(pFVar25);
                  pFVar19 = FDebugDrawQueue::GetInstance();
                  puVar26 = local_ac0;
                  if ((pFVar19->bEnableDebugDrawing != false) &&
                     (pFVar19 = FDebugDrawQueue::GetInstance(), puVar26 = local_ac0,
                     0 < pFVar19->NumConsumers)) {
                    pFVar1 = &pFVar18->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_9f8 = local_980;
                    local_a08 = dVar9;
                    dStack_a00 = dVar10;
                    bVar32 = FDebugDrawQueue::AcceptCommand
                                       (pFVar18,1,(TVector<double,3> *)&local_a08);
                    if (bVar32) {
                      local_520 = (void *)0x0;
                      local_518 = 0;
                      local_510 = 0;
                      local_5b8 = local_ab0;
                      local_5b0 = 0;
                      local_5a8 = 0x38d1b717;
                      local_5a0 = 0;
                      local_440 = 1;
                      local_5e8._s_0.X = dVar9;
                      local_5e8._s_0.Y = dVar10;
                      local_5e8._s_0.Z = dVar3;
                      local_5d0 = dVar11;
                      local_5c8 = dVar12;
                      local_5c0 = dVar2;
                      local_5a4 = -bVar14 & 2;
                      FDebugDrawQueue::AddCommand(pFVar18,(FLatentDrawCommand *)&local_5e8._s_0);
                      if (local_520 != (void *)0x0) {
                        FMemory::Free(local_520);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    puVar26 = local_ac0;
                  }
                }
              }
              else if (bVar14) {
                pFVar25 = &KinematicColor;
                goto LAB_14dbe4c42;
              }
              uVar21 = (ulonglong)local_aac;
              puVar28 = puVar28 + 3;
              pFVar30 = local_ac8;
            }
            FClothingSimulationSolver::GetParticleXsView(pFVar30->Solver,&local_a48,local_aa8);
            FClothingSimulationSolver::GetParticleInvMassesView
                      (pFVar30->Solver,&local_a58,local_aa8);
            lVar23 = local_a68;
            uVar22 = 0;
            lVar24 = 0;
            this = local_ac8;
            fVar33 = __real_3b808081;
            if (0 < *(int *)(local_a68 + 0xe0)) {
              lVar31 = 0;
              fVar38 = __real_38d1b717;
              uVar37 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
              do {
                uVar27 = ~uVar22 >> 0x1f;
                uVar17 = 0;
                if ((int)uVar22 < local_a58.ArrayNum) {
                  uVar17 = uVar27;
                }
                if (uVar17 == 0) {
                  local_ae8 = (longlong)(int)uVar22;
                  local_ae0 = (longlong)local_a58.ArrayNum;
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar14) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                if (local_a58.DataPtr[lVar24] != 0.0) {
                  if ((*(int *)(lVar23 + 0x58) < 2) ||
                     ((float)((uint)(*(float *)(lVar23 + 0x60) - *(float *)(lVar23 + 100)) &
                             (uint)uVar37) <= fVar38)) {
                    fVar33 = Softs::FPBDWeightMap::GetLow((FPBDWeightMap *)(lVar23 + 0x38));
                  }
                  else {
                    fVar33 = Softs::FPBDWeightMap::operator[]
                                       ((FPBDWeightMap *)(lVar23 + 0x38),uVar22);
                  }
                  if ((*(int *)(lVar23 + 0xa0) < 2) ||
                     ((float)((uint)(*(float *)(lVar23 + 0xa8) - *(float *)(lVar23 + 0xac)) &
                             (uint)uVar37) <= fVar38)) {
                    fVar34 = Softs::FPBDWeightMap::GetLow((FPBDWeightMap *)(lVar23 + 0x80));
                  }
                  else {
                    fVar34 = Softs::FPBDWeightMap::operator[]
                                       ((FPBDWeightMap *)(lVar23 + 0x80),uVar22);
                  }
                  if ((0.0 < fVar33) || (0.0 < fVar34)) {
                    uVar17 = 0;
                    if ((int)uVar22 < local_a48.ArrayNum) {
                      uVar17 = uVar27;
                    }
                    if (uVar17 == 0) {
                      local_ae8 = (longlong)(int)uVar22;
                      local_ae0 = (longlong)local_a48.ArrayNum;
                      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         );
                      if (bVar14) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                    }
                    pFVar4 = pFVar30->Solver;
                    dVar2 = pFVar4->LocalSpaceScale;
                    dVar11 = (double)*(float *)(&(local_a48.DataPtr)->field_0x0 + lVar31) * dVar2 +
                             *(double *)&pFVar4->LocalSpaceLocation;
                    dVar12 = (double)*(float *)(&(local_a48.DataPtr)->field_0x4 + lVar31) * dVar2 +
                             *(double *)&(pFVar4->LocalSpaceLocation).field_0x8;
                    dVar2 = (double)*(float *)(&(local_a48.DataPtr)->field_0x8 + lVar31) * dVar2 +
                            *(double *)&(pFVar4->LocalSpaceLocation).field_0x10;
                    uVar17 = 0;
                    if ((int)uVar22 < *(int *)(lVar23 + 0xe0)) {
                      uVar17 = uVar27;
                    }
                    local_950 = dVar2;
                    if ((uVar17 == 0) &&
                       (local_ae8 = lVar24, local_ae0 = (longlong)*(int *)(lVar23 + 0xe0),
                       bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar14)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pFVar4 = pFVar30->Solver;
                    lVar6 = *(longlong *)(lVar23 + 0xd8);
                    dVar36 = pFVar4->LocalSpaceScale;
                    dVar35 = (double)*(float *)(lVar6 + 8 + lVar31) * dVar36 +
                             *(double *)&(pFVar4->LocalSpaceLocation).field_0x10;
                    dVar8 = (double)*(float *)(lVar6 + lVar31) * dVar36 +
                            *(double *)&pFVar4->LocalSpaceLocation;
                    dVar36 = (double)*(float *)(lVar6 + 4 + lVar31) * dVar36 +
                             *(double *)&(pFVar4->LocalSpaceLocation).field_0x8;
                    fVar38 = __real_38d1b717;
                    uVar37 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
                    local_968 = dVar35;
                    if (local_ad0 == (FPrimitiveDrawInterface *)0x0) {
                      pFVar18 = FDebugDrawQueue::GetInstance();
                      bVar14 = Chaos::Private::bDrawInForeground != false;
                      FLinearColor::ToFColorSRGB(&Red);
                      pFVar19 = FDebugDrawQueue::GetInstance();
                      if ((pFVar19->bEnableDebugDrawing != false) &&
                         (pFVar19 = FDebugDrawQueue::GetInstance(), 0 < pFVar19->NumConsumers)) {
                        pFVar1 = &pFVar18->CommandQueueCS;
                        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                          UE::Core::Private::ReportNotNullPtr();
                        }
                        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                        local_9e0 = local_968;
                        local_9f0 = dVar8;
                        dStack_9e8 = dVar36;
                        bVar32 = FDebugDrawQueue::AcceptCommand
                                           (pFVar18,1,(TVector<double,3> *)&local_9f0);
                        if (bVar32) {
                          local_1c0 = (void *)0x0;
                          local_1b8 = 0;
                          local_1b0 = 0;
                          local_250 = 0;
                          local_e0 = 0;
                          local_258 = local_aa4;
                          local_248 = 0x38d1b717;
                          local_240 = 0x40000000;
                          local_288[0]._0_8_ = dVar8;
                          local_288[0]._8_8_ = dVar36;
                          local_288[0]._16_8_ = dVar35;
                          local_244 = -bVar14 & 2;
                          FDebugDrawQueue::AddCommand
                                    (pFVar18,(FLatentDrawCommand *)&local_288[0]._s_0);
                          if (local_1c0 != (void *)0x0) {
                            FMemory::Free(local_1c0);
                          }
                        }
                        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                      }
                      pFVar18 = FDebugDrawQueue::GetInstance();
                      bVar14 = Chaos::Private::bDrawInForeground != false;
                      FLinearColor::ToFColorSRGB(&Brown);
                      pFVar19 = FDebugDrawQueue::GetInstance();
                      pFVar30 = local_ac8;
                      fVar38 = __real_38d1b717;
                      uVar37 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
                      if ((pFVar19->bEnableDebugDrawing != false) &&
                         (pFVar19 = FDebugDrawQueue::GetInstance(), pFVar30 = local_ac8,
                         fVar38 = __real_38d1b717, uVar37 = ___xmm_7fffffff7fffffff7fffffff7fffffff,
                         0 < pFVar19->NumConsumers)) {
                        pFVar1 = &pFVar18->CommandQueueCS;
                        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                          UE::Core::Private::ReportNotNullPtr();
                        }
                        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                        local_9c8 = local_950;
                        local_9d8 = dVar11;
                        dStack_9d0 = dVar12;
                        bVar32 = FDebugDrawQueue::AcceptCommand
                                           (pFVar18,1,(TVector<double,3> *)&local_9d8);
                        if (bVar32) {
                          local_370 = (void *)0x0;
                          local_368 = 0;
                          local_360 = 0;
                          local_408 = local_aa0;
                          local_400 = 0;
                          local_3f8 = 0x38d1b717;
                          local_3f0 = 0;
                          local_290 = 1;
                          local_438._s_0.X = dVar11;
                          local_438._s_0.Y = dVar12;
                          local_438._s_0.Z = dVar2;
                          local_420 = dVar8;
                          local_418 = dVar36;
                          local_410 = dVar35;
                          local_3f4 = -bVar14 & 2;
                          FDebugDrawQueue::AddCommand(pFVar18,(FLatentDrawCommand *)&local_438._s_0)
                          ;
                          if (local_370 != (void *)0x0) {
                            FMemory::Free(local_370);
                          }
                        }
                        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                        pFVar30 = local_ac8;
                        fVar38 = __real_38d1b717;
                        uVar37 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
                      }
                    }
                  }
                }
                uVar22 = uVar22 + 1;
                lVar24 = lVar24 + 1;
                lVar31 = lVar31 + 0xc;
                this = local_ac8;
                fVar33 = __real_3b808081;
              } while ((int)uVar22 < *(int *)(lVar23 + 0xe0));
            }
          }
        }
        pFVar29 = local_a78 + 8;
        local_a78 = pFVar29;
      } while (pFVar29 != local_a60);
    }
  }
  return;
}

// DrawOpenEdges @ 14dbe5760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawOpenEdges
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  FClothingSimulationCloth *this_00;
  FClothingSimulationSolver *pFVar7;
  code *pcVar8;
  double dVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  FTriangleMesh *pFVar18;
  FDebugDrawQueue *this_01;
  FDebugDrawQueue *pFVar19;
  byte bVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  FLinearColor *this_02;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  uint *puVar28;
  int iVar29;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  longlong local_380;
  undefined1 local_378;
  undefined1 local_377 [3];
  undefined4 local_374;
  FScriptContainerElement *local_370;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_368;
  longlong *local_358;
  uint uStack_350;
  uint uStack_34c;
  TBitArray<FDefaultBitArrayAllocator> *local_348;
  undefined4 uStack_340;
  uint uStack_33c;
  uint local_338;
  undefined4 uStack_334;
  int iStack_330;
  undefined4 uStack_32c;
  int local_328;
  int local_324;
  undefined1 *local_320;
  FPrimitiveDrawInterface *local_318;
  FScriptContainerElement *local_310;
  longlong *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_300;
  undefined8 uStack_2e0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_2d8;
  double local_2c8;
  double dStack_2c0;
  TBitArray<FDefaultBitArrayAllocator> *local_2b8;
  undefined4 local_294;
  undefined1 local_288 [32];
  uint *local_268;
  uint local_260;
  undefined4 local_25c;
  undefined4 local_258;
  int local_254;
  void *local_248;
  undefined4 local_240;
  TVector<double>_u_0 local_238;
  double local_220;
  undefined1 local_218 [16];
  undefined4 local_208;
  undefined1 local_200;
  undefined4 local_1f8;
  byte local_1f4;
  undefined4 local_1f0;
  void *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_90;
  ulonglong local_88;
  
  fVar2 = __real_3b808081;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  local_320 = local_377;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_318 = param_1;
    if ((*(int *)(lVar21 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      OpenedEdgeColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Emerald.field0_0x0._s_0.R];
      OpenedEdgeColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Emerald.field0_0x0._s_0.G];
      OpenedEdgeColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Emerald.field0_0x0._s_0.B];
      OpenedEdgeColor.field0_0x0._s_0.A = (float)FColor::Emerald.field0_0x0._3_1_ * fVar2;
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar21 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ClosedEdgeColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
      ClosedEdgeColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
      ClosedEdgeColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
      ClosedEdgeColor.field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar2;
      _Init_thread_footer(&::_TSS1);
    }
    iVar17 = (this->Solver->Cloths).ArrayNum;
    pFVar27 = (this->Solver->Cloths).AllocatorInstance.Data;
    local_370 = pFVar27;
    if ((iVar17 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_310 = pFVar27 + (longlong)iVar17 * 8;
    if (pFVar27 != local_310) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar27;
        iVar17 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (iVar17 != -1) {
          iVar29 = 0;
          if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
            iVar29 = iVar17;
          }
          pFVar18 = FClothingSimulationCloth::GetTriangleMesh(this_00,this->Solver);
          local_2d8.DataPtr = (TVector<int,3> *)(pFVar18->MElements).AllocatorInstance.Data;
          iVar17 = (pFVar18->MElements).ArrayNum;
          if ((iVar17 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_2d8.ArrayNum = iVar17;
          FClothingSimulationCloth::GetAnimationPositions(this_00,&local_368,this->Solver);
          local_288._0_8_ = 0;
          local_288._8_8_ = 0;
          local_268 = (uint *)0x0;
          local_260 = 0;
          local_25c = 0x80;
          local_258 = 0xffffffff;
          local_254 = 0;
          local_248 = (void *)0x0;
          local_240 = 0;
          `Chaos::FClothVisualizationNoGC::DrawOpenEdges'::__l2::<lambda_2>::operator()
                    (&local_320,&local_2d8,
                     (TMap<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>_>
                      *)local_288);
          uVar26 = local_260;
          uStack_350 = 0;
          uStack_34c = 1;
          uStack_33c = uStack_350;
          local_338 = uStack_350;
          if (local_260 != 0) {
            puVar28 = (uint *)(local_288 + 0x10);
            if (local_268 != (uint *)0x0) {
              puVar28 = local_268;
            }
            uVar24 = *puVar28;
            local_338 = 0;
            uStack_350 = 0;
            while (uVar24 == 0) {
              lVar21 = (longlong)(int)uStack_350;
              local_338 = local_338 + 0x20;
              uStack_350 = uStack_350 + 1;
              uStack_33c = local_260;
              if ((int)((local_260 - 1) + ((int)(local_260 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)uStack_350) goto LAB_14dbe59c0;
              uVar24 = puVar28[lVar21 + 1];
            }
            uStack_34c = -uVar24 & uVar24;
            uVar1 = (ulonglong)uStack_34c * 2 + 1;
            lVar21 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_328 = (int)lVar21;
            uStack_33c = (local_338 - 1) + local_328;
            if ((int)local_260 < (int)uStack_33c) {
              uStack_33c = local_260;
            }
          }
LAB_14dbe59c0:
          local_358 = (longlong *)local_288;
          uStack_334 = local_294;
          local_348 = (TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x10);
          uVar24 = local_260 & 0xffffffe0;
          iStack_330 = local_288._8_4_ - local_254;
          TStack_300._padding_ = CONCAT44(uStack_34c,uStack_350);
          uStack_340 = 0xffffffff;
          TStack_300.CurrentBitIndex = uStack_33c;
          TStack_300.UnvisitedBitMask = 0xffffffff;
          iVar17 = (int)local_260 >> 5;
          TStack_300._28_4_ = local_294;
          TStack_300.BaseBitIndex = local_338;
          uStack_2e0 = CONCAT44(uStack_32c,iStack_330);
          bVar20 = (byte)local_260;
          local_308 = local_358;
          TStack_300.Array = local_348;
          if (((int)local_260 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar13 = local_368.ArrayNum;
          if (uVar26 != local_260) {
            puVar28 = (uint *)(local_288 + 0x10);
            if (local_268 != (uint *)0x0) {
              puVar28 = local_268;
            }
            uVar26 = -1 << (bVar20 & 0x1f) & puVar28[iVar17];
            while (uVar26 == 0) {
              lVar21 = (longlong)iVar17;
              uVar24 = uVar24 + 0x20;
              iVar17 = iVar17 + 1;
              uVar26 = local_260;
              if ((int)((local_260 - 1) + ((int)(local_260 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
              goto LAB_14dbe5ae0;
              uVar26 = puVar28[lVar21 + 1];
            }
            uVar1 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
            lVar21 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_324 = (int)lVar21;
            uVar26 = local_324 + -1 + uVar24;
            if ((int)local_260 < (int)uVar26) {
              uVar26 = local_260;
            }
          }
LAB_14dbe5ae0:
          while( true ) {
            plVar14 = local_308;
            if ((int)local_308[1] - *(int *)((longlong)local_308 + 0x34) != (int)uStack_2e0) {
              local_378 = 0;
              `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_378);
            }
            if (((TStack_300.CurrentBitIndex == uVar26) &&
                (TStack_300.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x10))) &&
               (plVar14 == (longlong *)local_288)) break;
            lVar21 = *plVar14;
            lVar25 = (longlong)TStack_300.CurrentBitIndex * 0x20;
            uVar22 = *(int *)(lVar25 + lVar21) - iVar29;
            uVar24 = 0;
            if ((int)uVar22 < iVar13) {
              uVar24 = ~uVar22 >> 0x1f;
            }
            if (uVar24 == 0) {
              local_380 = (longlong)iVar13;
              local_388 = (longlong)(int)uVar22;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar15) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            pFVar7 = this->Solver;
            uVar23 = *(int *)(lVar25 + 4 + lVar21) - iVar29;
            dVar3 = pFVar7->LocalSpaceScale;
            uVar24 = 0;
            if ((int)uVar23 < iVar13) {
              uVar24 = ~uVar23 >> 0x1f;
            }
            pTVar10 = (TBitArray<FDefaultBitArrayAllocator> *)
                      ((double)*(float *)&local_368.DataPtr[(int)uVar22].field_0x8 * dVar3 +
                      *(double *)&(pFVar7->LocalSpaceLocation).field_0x10);
            dVar9 = (double)*(float *)(local_368.DataPtr + (int)uVar22) * dVar3 +
                    *(double *)&pFVar7->LocalSpaceLocation;
            dVar3 = (double)*(float *)&local_368.DataPtr[(int)uVar22].field_0x4 * dVar3 +
                    *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
            local_348 = pTVar10;
            if (uVar24 == 0) {
              local_380 = (longlong)iVar13;
              local_388 = (longlong)(int)uVar23;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar15) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            pFVar7 = this->Solver;
            this_02 = &OpenedEdgeColor;
            if (1 < *(int *)(lVar25 + 0x10 + lVar21)) {
              this_02 = &ClosedEdgeColor;
            }
            dVar4 = pFVar7->LocalSpaceScale;
            uVar5 = *(undefined8 *)&local_368.DataPtr[(int)uVar23].field_0x4;
            fVar2 = *(float *)(local_368.DataPtr + (int)uVar23);
            dVar12 = *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
            dVar11 = (double)(float)((ulonglong)uVar5 >> 0x20) * dVar4 +
                     *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
            dVar6 = *(double *)&pFVar7->LocalSpaceLocation;
            if (local_318 == (FPrimitiveDrawInterface *)0x0) {
              this_01 = FDebugDrawQueue::GetInstance();
              bVar15 = Chaos::Private::bDrawInForeground != false;
              FLinearColor::ToFColorSRGB(this_02);
              pFVar19 = FDebugDrawQueue::GetInstance();
              if ((pFVar19->bEnableDebugDrawing != false) &&
                 (pFVar19 = FDebugDrawQueue::GetInstance(), 0 < pFVar19->NumConsumers)) {
                lpCriticalSection = &this_01->CommandQueueCS;
                if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::ReportNotNullPtr();
                }
                EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                local_2b8 = local_348;
                local_2c8 = dVar9;
                dStack_2c0 = dVar3;
                bVar16 = FDebugDrawQueue::AcceptCommand(this_01,1,(TVector<double,3> *)&local_2c8);
                if (bVar16) {
                  local_170 = (void *)0x0;
                  local_168 = 0;
                  local_160 = 0;
                  local_208 = local_374;
                  local_218._8_4_ = SUB84(dVar11,0);
                  local_218._0_8_ = (double)(float)uVar5 * dVar4 + dVar12;
                  local_218._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
                  local_200 = 0;
                  local_1f8 = 0x38d1b717;
                  local_1f0 = 0;
                  local_90 = 1;
                  local_238._s_0.X = dVar9;
                  local_238._s_0.Y = dVar3;
                  local_238._s_0.Z = (double)pTVar10;
                  local_220 = (double)fVar2 * dVar4 + dVar6;
                  local_1f4 = -bVar15 & 2;
                  FDebugDrawQueue::AddCommand(this_01,(FLatentDrawCommand *)&local_238._s_0);
                  if (local_170 != (void *)0x0) {
                    FMemory::Free(local_170);
                  }
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              }
            }
            TStack_300.UnvisitedBitMask = TStack_300.UnvisitedBitMask & ~TStack_300._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_300);
          }
          local_240 = 0;
          if (local_248 != (void *)0x0) {
            FMemory::Free(local_248);
          }
          TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector2<unsigned_int>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_288);
          pFVar27 = local_370;
        }
        pFVar27 = pFVar27 + 8;
        local_370 = pFVar27;
      } while (pFVar27 != local_310);
    }
  }
  return;
}

// DrawParticleIndices @ 14dbe5fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
Chaos::FClothVisualizationNoGC::DrawParticleIndices
          (FClothVisualizationNoGC *this,FCanvas *param_1,FSceneView *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FClothingSimulationCloth *this_00;
  FEvolution *this_01;
  FClothingSimulationSolver *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FSolverParticlesRange *pFVar9;
  FLinearColor *pFVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  TSharedPtr<FCulture,1> local_a8;
  FText local_98;
  TVector<double>_u_0 local_88 [3];
  
  fVar5 = __real_3b808081;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar12 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      DynamicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
      DynamicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
      DynamicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
      DynamicColor.field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar5;
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar12 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      KinematicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
      KinematicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
      KinematicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
      KinematicColor.field0_0x0._s_0.A = (float)FColor::Purple.field0_0x0._3_1_ * fVar5;
      _Init_thread_footer(&::_TSS1);
    }
    iVar7 = (this->Solver->Cloths).ArrayNum;
    pFVar14 = (this->Solver->Cloths).AllocatorInstance.Data;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar5 = __real_3f800000;
    pFVar1 = pFVar14 + (longlong)iVar7 * 8;
    for (; pFVar14 != pFVar1; pFVar14 = pFVar14 + 8) {
      this_00 = *(FClothingSimulationCloth **)pFVar14;
      iVar7 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
      if (iVar7 != -1) {
        this_01 = (this->Solver->Evolution).Ptr;
        if (this_01 != (FEvolution *)0x0) {
          pFVar9 = Softs::FEvolution::GetSoftBodyParticles(this_01,iVar7);
          iVar7 = *(int *)&pFVar9->field_0x10;
        }
        FClothingSimulationCloth::GetParticlePositions(this_00,&local_c8,this->Solver);
        FClothingSimulationCloth::GetParticleInvMasses(this_00,&local_b8,this->Solver);
        iVar13 = local_c8.ArrayNum;
        if ((local_b8.ArrayNum != iVar13) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InvMasses.Num() == Positions.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                               ,0x1b7,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = 0;
        lVar12 = 0;
        if (0 < iVar13) {
          lVar15 = 0;
          do {
            uVar8 = 0;
            if ((int)uVar11 < iVar13) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = this->Solver;
            dVar2 = pFVar3->LocalSpaceScale;
            local_88[0]._0_8_ =
                 (double)*(float *)(&(local_c8.DataPtr)->field_0x0 + lVar15) * dVar2 +
                 *(double *)&pFVar3->LocalSpaceLocation;
            local_88[0]._8_8_ =
                 (double)*(float *)(&(local_c8.DataPtr)->field_0x4 + lVar15) * dVar2 +
                 *(double *)&(pFVar3->LocalSpaceLocation).field_0x8;
            local_88[0]._16_8_ =
                 (double)*(float *)(&(local_c8.DataPtr)->field_0x8 + lVar15) * dVar2 +
                 *(double *)&(pFVar3->LocalSpaceLocation).field_0x10;
            local_a8.Object = (FCulture *)0x0;
            local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            FText::AsNumber(&local_98,uVar11 + iVar7,(FNumberFormattingOptions *)0x0,&local_a8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a8.SharedReferenceCount.ReferenceController);
            uVar8 = 0;
            if ((int)uVar11 < local_b8.ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar10 = &DynamicColor;
            if (local_b8.DataPtr[lVar12] == 0.0) {
              pFVar10 = &KinematicColor;
            }
            DrawText(param_1,param_2,(TVector<double> *)&local_88[0]._s_0,&local_98,pFVar10,fVar5);
            if (local_98.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
            }
            uVar11 = uVar11 + 1;
            lVar12 = lVar12 + 1;
            lVar15 = lVar15 + 0xc;
          } while ((int)uVar11 < iVar13);
        }
      }
    }
  }
  return;
}

// DrawPhysMeshWired @ 14dbe6450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawPhysMeshWired
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  FClothingSimulationCloth *this_00;
  FClothingSimulationSolver *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  FTriangleMesh *pFVar21;
  FDebugDrawQueue *pFVar22;
  FDebugDrawQueue *pFVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  FLinearColor *pFVar27;
  int iVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  undefined1 auStack_708 [32];
  ulonglong local_6e8;
  longlong local_6e0;
  FPrimitiveDrawInterface *local_6d8;
  uint local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  undefined4 local_6c4;
  int local_6c0;
  int local_6bc;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_6b8;
  TArrayView<float_const_,int> local_6a8;
  FScriptContainerElement *local_698;
  FClothVisualizationNoGC *local_690;
  FScriptContainerElement *local_688;
  double local_680;
  double dStack_678;
  double local_670;
  double local_668;
  double dStack_660;
  double local_658;
  double local_650;
  double dStack_648;
  double local_640;
  double local_628;
  double local_610;
  double local_5f8;
  TVector<double>_u_0 local_5e8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  undefined4 local_5b8;
  undefined1 local_5b0;
  undefined4 local_5a8;
  byte local_5a4;
  undefined4 local_5a0;
  void *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_440;
  TVector<double>_u_0 local_438;
  double local_420;
  double local_418;
  double local_410;
  undefined4 local_408;
  undefined1 local_400;
  undefined4 local_3f8;
  byte local_3f4;
  undefined4 local_3f0;
  void *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_290;
  TVector<double>_u_0 local_288;
  double local_270;
  double local_268;
  double local_260;
  undefined4 local_258;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  fVar2 = __real_3b808081;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_708;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_6d8 = param_1;
    local_690 = this;
    if ((*(int *)(lVar8 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      DynamicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
      DynamicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
      DynamicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
      DynamicColor.field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar2;
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar8 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      KinematicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
      KinematicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
      KinematicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
      KinematicColor.field0_0x0._s_0.A = (float)FColor::Purple.field0_0x0._3_1_ * fVar2;
      _Init_thread_footer(&::_TSS1);
    }
    iVar19 = (this->Solver->Cloths).ArrayNum;
    pFVar29 = (this->Solver->Cloths).AllocatorInstance.Data;
    local_698 = pFVar29;
    if ((iVar19 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_688 = pFVar29 + (longlong)iVar19 * 8;
    if (pFVar29 != local_688) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar29;
        iVar19 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (iVar19 != -1) {
          iVar28 = 0;
          if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
            iVar28 = iVar19;
          }
          local_6bc = iVar28;
          pFVar21 = FClothingSimulationCloth::GetTriangleMesh(this_00,this->Solver);
          iVar19 = (pFVar21->MElements).ArrayNum;
          pFVar30 = (pFVar21->MElements).AllocatorInstance.Data;
          local_6c0 = iVar19;
          if ((iVar19 < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FClothingSimulationCloth::GetParticlePositions(this_00,&local_6b8,this->Solver);
          FClothingSimulationCloth::GetParticleInvMasses(this_00,&local_6a8,this->Solver);
          if ((local_6a8.ArrayNum != local_6b8.ArrayNum) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InvMasses.Num() == Positions.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0x4a3,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar24 = 0;
          local_6d0 = 0;
          if (0 < iVar19) {
            pFVar30 = pFVar30 + 8;
            do {
              if ((int)uVar24 < 0) {
                local_6e0 = (longlong)iVar19;
                local_6e8 = uVar24;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar17) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              uVar25 = *(int *)(pFVar30 + -8) - iVar28;
              uVar20 = 0;
              if ((int)uVar25 < local_6b8.ArrayNum) {
                uVar20 = ~uVar25 >> 0x1f;
              }
              if (uVar20 == 0) {
                local_6e0 = (longlong)local_6b8.ArrayNum;
                local_6e8 = (ulonglong)(int)uVar25;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar17) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              pFVar9 = this->Solver;
              uVar26 = *(int *)(pFVar30 + -4) - iVar28;
              dVar5 = pFVar9->LocalSpaceScale;
              dVar15 = (double)*(float *)(local_6b8.DataPtr + (int)uVar25) * dVar5 +
                       *(double *)&pFVar9->LocalSpaceLocation;
              dVar16 = (double)*(float *)&local_6b8.DataPtr[(int)uVar25].field_0x4 * dVar5 +
                       *(double *)&(pFVar9->LocalSpaceLocation).field_0x8;
              dVar5 = (double)*(float *)&local_6b8.DataPtr[(int)uVar25].field_0x8 * dVar5 +
                      *(double *)&(pFVar9->LocalSpaceLocation).field_0x10;
              uVar20 = 0;
              if ((int)uVar26 < local_6b8.ArrayNum) {
                uVar20 = ~uVar26 >> 0x1f;
              }
              local_628 = dVar5;
              if (uVar20 == 0) {
                local_6e0 = (longlong)local_6b8.ArrayNum;
                local_6e8 = (ulonglong)(int)uVar26;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar17) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              pFVar9 = this->Solver;
              uVar25 = *(int *)pFVar30 - iVar28;
              dVar6 = pFVar9->LocalSpaceScale;
              dVar11 = (double)*(float *)(local_6b8.DataPtr + (int)uVar26) * dVar6 +
                       *(double *)&pFVar9->LocalSpaceLocation;
              dVar12 = (double)*(float *)&local_6b8.DataPtr[(int)uVar26].field_0x4 * dVar6 +
                       *(double *)&(pFVar9->LocalSpaceLocation).field_0x8;
              dVar6 = (double)*(float *)&local_6b8.DataPtr[(int)uVar26].field_0x8 * dVar6 +
                      *(double *)&(pFVar9->LocalSpaceLocation).field_0x10;
              uVar20 = 0;
              if ((int)uVar25 < local_6b8.ArrayNum) {
                uVar20 = ~uVar25 >> 0x1f;
              }
              local_610 = dVar6;
              if (uVar20 == 0) {
                local_6e0 = (longlong)local_6b8.ArrayNum;
                local_6e8 = (ulonglong)(int)uVar25;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar17) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              pFVar9 = this->Solver;
              uVar26 = *(int *)(pFVar30 + -8) - iVar28;
              dVar7 = pFVar9->LocalSpaceScale;
              dVar13 = (double)*(float *)(local_6b8.DataPtr + (int)uVar25) * dVar7 +
                       *(double *)&pFVar9->LocalSpaceLocation;
              dVar14 = (double)*(float *)&local_6b8.DataPtr[(int)uVar25].field_0x4 * dVar7 +
                       *(double *)&(pFVar9->LocalSpaceLocation).field_0x8;
              dVar7 = (double)*(float *)&local_6b8.DataPtr[(int)uVar25].field_0x8 * dVar7 +
                      *(double *)&(pFVar9->LocalSpaceLocation).field_0x10;
              uVar20 = 0;
              if ((int)uVar26 < local_6a8.ArrayNum) {
                uVar20 = ~uVar26 >> 0x1f;
              }
              local_5f8 = dVar7;
              if (uVar20 == 0) {
                local_6e0 = (longlong)local_6a8.ArrayNum;
                local_6e8 = (ulonglong)(int)uVar26;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar17) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              fVar2 = local_6a8.DataPtr[(int)uVar26];
              uVar25 = *(int *)(pFVar30 + -4) - iVar28;
              uVar20 = 0;
              if ((int)uVar25 < local_6a8.ArrayNum) {
                uVar20 = ~uVar25 >> 0x1f;
              }
              if (uVar20 == 0) {
                local_6e0 = (longlong)local_6a8.ArrayNum;
                local_6e8 = (ulonglong)(int)uVar25;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar17) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              fVar3 = local_6a8.DataPtr[(int)uVar25];
              uVar25 = *(int *)pFVar30 - iVar28;
              uVar20 = 0;
              if ((int)uVar25 < local_6a8.ArrayNum) {
                uVar20 = ~uVar25 >> 0x1f;
              }
              if (uVar20 == 0) {
                local_6e0 = (longlong)local_6a8.ArrayNum;
                local_6e8 = (ulonglong)(int)uVar25;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar17) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              fVar4 = local_6a8.DataPtr[(int)uVar25];
              if ((fVar2 != 0.0) || (pFVar27 = &KinematicColor, fVar3 != 0.0)) {
                pFVar27 = &DynamicColor;
              }
              if (local_6d8 == (FPrimitiveDrawInterface *)0x0) {
                pFVar22 = FDebugDrawQueue::GetInstance();
                bVar17 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(pFVar27);
                pFVar23 = FDebugDrawQueue::GetInstance();
                if ((pFVar23->bEnableDebugDrawing != false) &&
                   (pFVar23 = FDebugDrawQueue::GetInstance(), 0 < pFVar23->NumConsumers)) {
                  pFVar1 = &pFVar22->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_670 = local_628;
                  local_680 = dVar15;
                  dStack_678 = dVar16;
                  bVar18 = FDebugDrawQueue::AcceptCommand(pFVar22,1,(TVector<double,3> *)&local_680)
                  ;
                  if (bVar18) {
                    local_520 = (void *)0x0;
                    local_518 = 0;
                    local_510 = 0;
                    local_5b8 = local_6cc;
                    local_5b0 = 0;
                    local_5a8 = 0x38d1b717;
                    local_5a0 = 0;
                    local_440 = 1;
                    local_5e8._s_0.X = dVar15;
                    local_5e8._s_0.Y = dVar16;
                    local_5e8._s_0.Z = dVar5;
                    local_5d0 = dVar11;
                    local_5c8 = dVar12;
                    local_5c0 = dVar6;
                    local_5a4 = -bVar17 & 2;
                    FDebugDrawQueue::AddCommand(pFVar22,(FLatentDrawCommand *)&local_5e8._s_0);
                    if (local_520 != (void *)0x0) {
                      FMemory::Free(local_520);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
              }
              if ((fVar3 != 0.0) || (pFVar27 = &KinematicColor, fVar4 != 0.0)) {
                pFVar27 = &DynamicColor;
              }
              if (local_6d8 == (FPrimitiveDrawInterface *)0x0) {
                pFVar22 = FDebugDrawQueue::GetInstance();
                bVar17 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(pFVar27);
                pFVar23 = FDebugDrawQueue::GetInstance();
                if ((pFVar23->bEnableDebugDrawing != false) &&
                   (pFVar23 = FDebugDrawQueue::GetInstance(), 0 < pFVar23->NumConsumers)) {
                  pFVar1 = &pFVar22->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_658 = local_610;
                  local_668 = dVar11;
                  dStack_660 = dVar12;
                  bVar18 = FDebugDrawQueue::AcceptCommand(pFVar22,1,(TVector<double,3> *)&local_668)
                  ;
                  if (bVar18) {
                    local_370 = (void *)0x0;
                    local_368 = 0;
                    local_360 = 0;
                    local_408 = local_6c8;
                    local_400 = 0;
                    local_3f8 = 0x38d1b717;
                    local_3f0 = 0;
                    local_290 = 1;
                    local_438._s_0.X = dVar11;
                    local_438._s_0.Y = dVar12;
                    local_438._s_0.Z = dVar6;
                    local_420 = dVar13;
                    local_418 = dVar14;
                    local_410 = dVar7;
                    local_3f4 = -bVar17 & 2;
                    FDebugDrawQueue::AddCommand(pFVar22,(FLatentDrawCommand *)&local_438._s_0);
                    if (local_370 != (void *)0x0) {
                      FMemory::Free(local_370);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
              }
              if ((fVar4 != 0.0) || (pFVar27 = &KinematicColor, fVar2 != 0.0)) {
                pFVar27 = &DynamicColor;
              }
              if (local_6d8 == (FPrimitiveDrawInterface *)0x0) {
                pFVar22 = FDebugDrawQueue::GetInstance();
                bVar17 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(pFVar27);
                pFVar23 = FDebugDrawQueue::GetInstance();
                if ((pFVar23->bEnableDebugDrawing != false) &&
                   (pFVar23 = FDebugDrawQueue::GetInstance(), 0 < pFVar23->NumConsumers)) {
                  pFVar1 = &pFVar22->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_640 = local_5f8;
                  local_650 = dVar13;
                  dStack_648 = dVar14;
                  bVar18 = FDebugDrawQueue::AcceptCommand(pFVar22,1,(TVector<double,3> *)&local_650)
                  ;
                  if (bVar18) {
                    local_1c0 = (void *)0x0;
                    local_1b8 = 0;
                    local_1b0 = 0;
                    local_258 = local_6c4;
                    local_250 = 0;
                    local_248 = 0x38d1b717;
                    local_240 = 0;
                    local_e0 = 1;
                    local_288._s_0.X = dVar13;
                    local_288._s_0.Y = dVar14;
                    local_288._s_0.Z = dVar7;
                    local_270 = dVar15;
                    local_268 = dVar16;
                    local_260 = dVar5;
                    local_244 = -bVar17 & 2;
                    FDebugDrawQueue::AddCommand(pFVar22,(FLatentDrawCommand *)&local_288._s_0);
                    if (local_1c0 != (void *)0x0) {
                      FMemory::Free(local_1c0);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
              }
              pFVar30 = pFVar30 + 0xc;
              local_6d0 = local_6d0 + 1;
              uVar24 = (ulonglong)local_6d0;
              pFVar29 = local_698;
              this = local_690;
              iVar19 = local_6c0;
              iVar28 = local_6bc;
            } while ((int)local_6d0 < local_6c0);
          }
        }
        pFVar29 = pFVar29 + 8;
        local_698 = pFVar29;
      } while (pFVar29 != local_688);
    }
  }
  return;
}

// DrawPointNormals @ 14dbe7190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawPointNormals
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1,double param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  FClothingSimulationCloth *this_00;
  FClothingSimulationSolver *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FDebugDrawQueue *this_01;
  FDebugDrawQueue *pFVar14;
  uint uVar15;
  uint uVar16;
  FLinearColor *this_02;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined4 local_2f8;
  FClothVisualizationNoGC *local_2f0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2e8;
  FScriptContainerElement *local_2d8;
  FPrimitiveDrawInterface *local_2d0;
  FScriptContainerElement *local_2c8;
  TArrayView<float_const_,int> local_2c0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2b0;
  double local_2a0;
  double dStack_298;
  double local_290;
  double local_278;
  TVector<double>_u_0 local_268;
  double local_250;
  double local_248;
  double local_240;
  undefined4 local_238;
  undefined1 local_230;
  undefined4 local_228;
  byte local_224;
  undefined4 local_220;
  void *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_c0;
  ulonglong local_b8;
  
  fVar1 = __real_3b808081;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_328;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_2f0 = this;
    local_2d0 = param_1;
    if ((*(int *)(lVar19 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      DynamicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
      DynamicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
      DynamicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
      DynamicColor.field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar1;
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar19 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      KinematicColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
      KinematicColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
      KinematicColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
      KinematicColor.field0_0x0._s_0.A = (float)FColor::Purple.field0_0x0._3_1_ * fVar1;
      _Init_thread_footer(&::_TSS1);
    }
    iVar12 = (this->Solver->Cloths).ArrayNum;
    pFVar17 = (this->Solver->Cloths).AllocatorInstance.Data;
    local_2d8 = pFVar17;
    if ((iVar12 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_2c8 = pFVar17 + (longlong)iVar12 * 8;
    if (pFVar17 != local_2c8) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar17;
        iVar12 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (iVar12 != -1) {
          FClothingSimulationCloth::GetParticlePositions(this_00,&local_2e8,this->Solver);
          FClothingSimulationCloth::GetParticleNormals(this_00,&local_2b0,this->Solver);
          FClothingSimulationCloth::GetParticleInvMasses(this_00,&local_2c0,this->Solver);
          iVar12 = local_2e8.ArrayNum;
          if ((local_2b0.ArrayNum != iVar12) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Normals.Num() == Positions.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0x60d,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((local_2c0.ArrayNum != iVar12) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InvMasses.Num() == Positions.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0x60e,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar15 = 0;
          lVar19 = 0;
          if (0 < iVar12) {
            lVar18 = 0;
            do {
              uVar16 = ~uVar15 >> 0x1f;
              uVar13 = 0;
              if ((int)uVar15 < local_2c0.ArrayNum) {
                uVar13 = uVar16;
              }
              if (uVar13 == 0) {
                local_300 = (longlong)local_2c0.ArrayNum;
                local_308 = (longlong)(int)uVar15;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              fVar1 = local_2c0.DataPtr[lVar19];
              uVar13 = 0;
              if ((int)uVar15 < iVar12) {
                uVar13 = uVar16;
              }
              if (uVar13 == 0) {
                local_300 = (longlong)iVar12;
                local_308 = (longlong)(int)uVar15;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              pFVar6 = this->Solver;
              dVar4 = pFVar6->LocalSpaceScale;
              dVar8 = (double)*(float *)(&(local_2e8.DataPtr)->field_0x0 + lVar18) * dVar4 +
                      *(double *)&pFVar6->LocalSpaceLocation;
              dVar9 = (double)*(float *)(&(local_2e8.DataPtr)->field_0x4 + lVar18) * dVar4 +
                      *(double *)&(pFVar6->LocalSpaceLocation).field_0x8;
              dVar4 = (double)*(float *)(&(local_2e8.DataPtr)->field_0x8 + lVar18) * dVar4 +
                      *(double *)&(pFVar6->LocalSpaceLocation).field_0x10;
              uVar13 = 0;
              if ((int)uVar15 < local_2b0.ArrayNum) {
                uVar13 = uVar16;
              }
              local_278 = dVar4;
              if (uVar13 == 0) {
                local_300 = (longlong)local_2b0.ArrayNum;
                local_308 = lVar19;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              this_02 = &DynamicColor;
              fVar2 = *(float *)(&(local_2b0.DataPtr)->field_0x0 + lVar18);
              dVar5 = this->Solver->LocalSpaceScale;
              fVar3 = *(float *)(&(local_2b0.DataPtr)->field_0x4 + lVar18);
              if (fVar1 == 0.0) {
                this_02 = &KinematicColor;
              }
              fVar1 = *(float *)(&(local_2b0.DataPtr)->field_0x8 + lVar18);
              if (local_2d0 == (FPrimitiveDrawInterface *)0x0) {
                this_01 = FDebugDrawQueue::GetInstance();
                bVar10 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(this_02);
                pFVar14 = FDebugDrawQueue::GetInstance();
                this = local_2f0;
                if ((pFVar14->bEnableDebugDrawing != false) &&
                   (pFVar14 = FDebugDrawQueue::GetInstance(), this = local_2f0,
                   0 < pFVar14->NumConsumers)) {
                  lpCriticalSection = &this_01->CommandQueueCS;
                  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  local_290 = local_278;
                  local_2a0 = dVar8;
                  dStack_298 = dVar9;
                  bVar11 = FDebugDrawQueue::AcceptCommand(this_01,1,(TVector<double,3> *)&local_2a0)
                  ;
                  if (bVar11) {
                    local_1a0 = (void *)0x0;
                    local_198 = 0;
                    local_190 = 0;
                    local_238 = local_2f8;
                    local_c0 = 1;
                    local_230 = 0;
                    local_228 = 0x38d1b717;
                    local_220 = 0;
                    local_268._s_0.X = dVar8;
                    local_268._s_0.Y = dVar9;
                    local_268._s_0.Z = dVar4;
                    local_250 = (double)fVar2 * dVar5 * param_2 + dVar8;
                    local_248 = (double)fVar3 * dVar5 * param_2 + dVar9;
                    local_240 = (double)fVar1 * dVar5 * param_2 + dVar4;
                    local_224 = -bVar10 & 2;
                    FDebugDrawQueue::AddCommand(this_01,(FLatentDrawCommand *)&local_268._s_0);
                    if (local_1a0 != (void *)0x0) {
                      FMemory::Free(local_1a0);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  this = local_2f0;
                }
              }
              uVar15 = uVar15 + 1;
              lVar19 = lVar19 + 1;
              lVar18 = lVar18 + 0xc;
              pFVar17 = local_2d8;
            } while ((int)uVar15 < iVar12);
          }
        }
        pFVar17 = pFVar17 + 8;
        local_2d8 = pFVar17;
      } while (pFVar17 != local_2c8);
    }
  }
  return;
}

// DrawPointVelocities @ 14dbe7850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawPointVelocities
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  FClothingSimulationSolver *pFVar7;
  FClothingSimulationCloth *this_00;
  TVector<float,3> *pTVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar18;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar19;
  FDebugDrawQueue *this_01;
  FDebugDrawQueue *pFVar20;
  uint uVar21;
  FLinearColor *this_02;
  uint uVar22;
  longlong lVar23;
  float *pfVar24;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  int local_308;
  FScriptContainerElement *local_300;
  undefined4 local_2f8;
  FClothVisualizationNoGC *local_2f0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2e8;
  longlong local_2d8;
  FPrimitiveDrawInterface *local_2d0;
  FScriptContainerElement *local_2c8;
  TArrayView<float_const_,int> local_2c0;
  undefined1 local_2b0 [16];
  double local_2a0;
  double local_288;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_280;
  TVector<double>_u_0 local_268;
  double local_250;
  double local_248;
  double local_240;
  undefined4 local_238;
  undefined1 local_230;
  undefined4 local_228;
  byte local_224;
  undefined4 local_220;
  void *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_338;
  pFVar7 = this->Solver;
  if (pFVar7 != (FClothingSimulationSolver *)0x0) {
    local_300 = (pFVar7->Cloths).AllocatorInstance.Data;
    iVar15 = (pFVar7->Cloths).ArrayNum;
    local_2f0 = this;
    local_2d0 = param_1;
    if ((iVar15 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    dVar12 = __real_3f91111111111111;
    local_2c8 = local_300 + (longlong)iVar15 * 8;
    if (local_300 != local_2c8) {
      do {
        this_00 = *(FClothingSimulationCloth **)local_300;
        iVar15 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (iVar15 != -1) {
          FClothingSimulationCloth::GetParticlePositions(this_00,&local_2e8,this->Solver);
          pFVar7 = this->Solver;
          if ((pFVar7 == (FClothingSimulationSolver *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Solver",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                                  ,0x5a1,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar18 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                            *)&this_00->LODIndices,pFVar7);
          if ((pTVar18 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar15 = *(int *)&pTVar18->field_0x8;
          iVar16 = FClothingSimulationCloth::GetParticleRangeId(this_00,pFVar7,iVar15);
          if ((iVar16 == -1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GetParticleRangeId(Solver, LODIndex) != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                                  ,0x5a3,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar16 = FClothingSimulationCloth::GetNumParticles(this_00,iVar15);
          local_308 = iVar16;
          iVar15 = FClothingSimulationCloth::GetParticleRangeId(this_00,pFVar7,iVar15);
          pTVar19 = FClothingSimulationSolver::GetParticleVsView(pFVar7,&local_280,iVar15);
          pTVar8 = pTVar19->DataPtr;
          if ((iVar16 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar15 = local_2e8.ArrayNum;
          if ((iVar16 != iVar15) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Velocities.Num() == Positions.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0x62b,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FClothingSimulationCloth::GetParticleInvMasses(this_00,&local_2c0,this->Solver);
          if ((local_2c0.ArrayNum != iVar15) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InvMasses.Num() == Positions.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0x62e,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar22 = 0;
          lVar23 = 0;
          if (0 < iVar15) {
            pfVar24 = (float *)&pTVar8->field_0x8;
            local_2d8 = -8 - (longlong)pTVar8;
            do {
              uVar21 = ~uVar22 >> 0x1f;
              uVar17 = 0;
              if ((int)uVar22 < local_2c0.ArrayNum) {
                uVar17 = uVar21;
              }
              if (uVar17 == 0) {
                local_310 = (longlong)local_2c0.ArrayNum;
                local_318 = (longlong)(int)uVar22;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar13) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              fVar1 = local_2c0.DataPtr[lVar23];
              uVar17 = 0;
              if ((int)uVar22 < iVar15) {
                uVar17 = uVar21;
              }
              if (uVar17 == 0) {
                local_310 = (longlong)iVar15;
                local_318 = (longlong)(int)uVar22;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar13) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              pFVar7 = local_2f0->Solver;
              dVar5 = pFVar7->LocalSpaceScale;
              uVar17 = 0;
              if ((int)uVar22 < iVar16) {
                uVar17 = uVar21;
              }
              dVar11 = (double)*(float *)((longlong)pfVar24 +
                                         (longlong)(&(local_2e8.DataPtr)->field_0x8 + local_2d8)) *
                       dVar5 + *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
              dVar10 = (double)*(float *)((longlong)pfVar24 +
                                         (longlong)(&(local_2e8.DataPtr)->field_0x0 + local_2d8)) *
                       dVar5 + *(double *)&pFVar7->LocalSpaceLocation;
              dVar5 = (double)*(float *)((longlong)pfVar24 +
                                        (longlong)(&(local_2e8.DataPtr)->field_0x4 + local_2d8)) *
                      dVar5 + *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
              local_288 = dVar11;
              if (uVar17 == 0) {
                local_310 = (longlong)iVar16;
                local_318 = lVar23;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar13) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              this_02 = &FLinearColor::Yellow;
              fVar2 = *pfVar24;
              fVar3 = pfVar24[-1];
              fVar4 = pfVar24[-2];
              dVar6 = local_2f0->Solver->LocalSpaceScale;
              if (fVar1 == 0.0) {
                this_02 = &FLinearColor::Black;
              }
              if (local_2d0 == (FPrimitiveDrawInterface *)0x0) {
                this_01 = FDebugDrawQueue::GetInstance();
                bVar13 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(this_02);
                pFVar20 = FDebugDrawQueue::GetInstance();
                iVar16 = local_308;
                if ((pFVar20->bEnableDebugDrawing != false) &&
                   (pFVar20 = FDebugDrawQueue::GetInstance(), iVar16 = local_308,
                   0 < pFVar20->NumConsumers)) {
                  lpCriticalSection = &this_01->CommandQueueCS;
                  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  local_2b0._8_4_ = SUB84(dVar5,0);
                  local_2b0._0_8_ = dVar10;
                  local_2b0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
                  local_2a0 = local_288;
                  bVar14 = FDebugDrawQueue::AcceptCommand(this_01,1,(TVector<double,3> *)local_2b0);
                  if (bVar14) {
                    local_1a0 = (void *)0x0;
                    local_198 = 0;
                    local_190 = 0;
                    local_238 = local_2f8;
                    local_c0 = 1;
                    local_230 = 0;
                    local_228 = 0x38d1b717;
                    local_220 = 0;
                    local_268._s_0.X = dVar10;
                    local_268._s_0.Y = dVar5;
                    local_268._s_0.Z = dVar11;
                    local_250 = (double)fVar4 * dVar6 * dVar12 + dVar10;
                    local_248 = (double)fVar3 * dVar6 * dVar12 + dVar5;
                    local_240 = (double)fVar2 * dVar6 * dVar12 + dVar11;
                    local_224 = -bVar13 & 2;
                    FDebugDrawQueue::AddCommand(this_01,(FLatentDrawCommand *)&local_268._s_0);
                    if (local_1a0 != (void *)0x0) {
                      FMemory::Free(local_1a0);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  iVar16 = local_308;
                }
              }
              uVar22 = uVar22 + 1;
              lVar23 = lVar23 + 1;
              pfVar24 = pfVar24 + 3;
              this = local_2f0;
            } while ((int)uVar22 < iVar15);
          }
        }
        local_300 = local_300 + 8;
      } while (local_300 != local_2c8);
    }
  }
  return;
}

// DrawSelfCollision @ 14dbe7ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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
Chaos::FClothVisualizationNoGC::DrawSelfCollision
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  int iVar7;
  FClothingSimulationSolver *pFVar8;
  FPBDEvolution *pFVar9;
  FEvolution *pFVar10;
  longlong lVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  FSolverParticles *pFVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  TVector<float,3> *pTVar18;
  TVector<float,3> *pTVar19;
  FPrimitiveDrawInterface *pFVar20;
  uint *puVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>
  *pTVar25;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar26;
  TVector<double,3> *pTVar27;
  TVector<double> *pTVar28;
  FDebugDrawQueue *pFVar29;
  FDebugDrawQueue *pFVar30;
  TVector<float,3> *pTVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong *plVar35;
  uint uVar36;
  FPBDFlatWeightMap *this_00;
  uint *puVar37;
  ForElementType<unsigned_int> FVar38;
  FLinearColor *pFVar39;
  TBitArray<FDefaultBitArrayAllocator> *pTVar40;
  uint uVar41;
  int iVar42;
  longlong *plVar43;
  int iVar44;
  longlong lVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  uint uVar53;
  uint uVar54;
  double dVar55;
  undefined8 uVar56;
  double dVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  float fVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  uint uVar63;
  double dVar64;
  uint uVar65;
  undefined1 auStackY_10e8 [32];
  undefined1 local_10b8;
  undefined1 local_10b7;
  undefined1 local_10b6 [6];
  FClothVisualizationNoGC *local_10b0;
  TVector<float,3> *local_10a8;
  longlong local_10a0;
  ForElementType<unsigned_int> local_1098;
  double local_1090;
  ulonglong local_1088;
  TVector<float,3> *local_1080;
  double local_1078;
  uint *local_1070;
  FPrimitiveDrawInterface *local_1068;
  longlong *local_1060;
  int local_1058;
  longlong *local_1050;
  longlong *local_1048;
  undefined4 local_1040;
  undefined4 local_103c;
  undefined4 local_1038;
  int local_1034;
  undefined4 local_1030;
  undefined4 local_102c;
  undefined4 local_1028;
  undefined4 local_1024;
  uint *local_1020;
  longlong *local_1018;
  undefined8 uStack_1010;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1008;
  uint uStack_1000;
  int iStack_ffc;
  int iStack_ff8;
  undefined4 uStack_ff4;
  int local_ff0;
  undefined4 uStack_fec;
  double local_fd8;
  FClothingSimulationCloth **local_fd0;
  TVector<double>_u_0 local_fc8;
  FLinearColor_u_0 local_fb0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_fa0;
  int local_f80;
  int local_f7c;
  int local_f78;
  FClothingSimulationCloth **local_f70;
  TVector<double>_u_0 local_f68;
  longlong *local_f50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f48;
  undefined8 uStack_f28;
  longlong *local_f20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f18;
  undefined8 uStack_ef8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_ef0;
  TArrayView<Chaos::FClothingSimulationCloth_const_*_const,int> local_ee0;
  double local_ed0;
  double local_ec8;
  double local_ec0;
  double local_eb8;
  double local_eb0;
  double local_ea8;
  double local_ea0;
  double local_e98;
  double local_e90;
  double local_e88;
  double local_e80;
  double local_e78;
  longlong *local_e70;
  double dStack_e68;
  double local_e60;
  double local_e58;
  double dStack_e50;
  double local_e48;
  double local_e40;
  double dStack_e38;
  double local_e30;
  undefined1 local_e28 [16];
  double local_e18;
  undefined1 local_e10 [16];
  double local_e00;
  double local_df8;
  double dStack_df0;
  double local_de8;
  double local_de0;
  double dStack_dd8;
  double local_dd0;
  uint local_dc8;
  uint uStack_dc4;
  uint uStack_dc0;
  uint uStack_dbc;
  undefined8 local_db8;
  TVector<float,3> local_db0;
  TVector<float,3> local_da0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_d90;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_d80;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_d70;
  TVector<double> local_d60;
  TVector<double,3> local_d48;
  TVector<double> local_d30;
  TVector<double,3> local_d18 [2];
  undefined4 local_ce4;
  FImplicitObject local_ce0;
  float local_cc0;
  float local_cbc;
  float local_cb8;
  TVector<double>_u_0 local_ca8;
  double local_c90;
  double local_c88;
  double local_c80;
  undefined4 local_c78;
  undefined1 local_c70;
  undefined4 local_c68;
  byte local_c64;
  undefined4 local_c60;
  void *local_be0;
  undefined8 local_bd8;
  undefined8 local_bd0;
  undefined4 local_b00;
  TVector<double>_u_0 local_af8;
  longlong *local_ae0;
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined4 local_ac8;
  undefined1 local_ac0;
  undefined4 local_ab8;
  byte local_ab4;
  undefined4 local_ab0;
  void *local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined4 local_950;
  TVector<double>_u_0 local_948;
  double local_930;
  undefined1 local_928 [16];
  undefined4 local_918;
  undefined1 local_910;
  undefined4 local_908;
  byte local_904;
  undefined4 local_900;
  void *local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined4 local_7a0;
  TVector<double>_u_0 local_798 [2];
  undefined4 local_768;
  undefined4 local_764;
  undefined1 local_760;
  undefined4 local_758;
  byte local_754;
  undefined4 local_750;
  double local_748;
  void *local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined4 local_5f0;
  TVector<double>_u_0 local_5e8 [2];
  undefined4 local_5b8;
  undefined1 local_5b0;
  undefined4 local_5a8;
  byte local_5a4;
  undefined4 local_5a0;
  void *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_440;
  TVector<double>_u_0 local_438 [2];
  undefined4 local_408;
  undefined1 local_400;
  undefined4 local_3f8;
  byte local_3f4;
  undefined4 local_3f0;
  void *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_290;
  TVector<double>_u_0 local_288 [2];
  undefined4 local_258;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_10e8;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    local_10b0 = this;
    local_1068 = param_1;
    FClothingSimulationSolver::GetCloths(this->Solver,&local_ee0);
    local_f70 = local_ee0.DataPtr + local_ee0.ArrayNum;
    if (local_ee0.DataPtr != local_f70) {
      do {
        uVar56 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar60 = __real_38d1b717;
        local_fd0 = local_ee0.DataPtr;
        iVar24 = FClothingSimulationCloth::GetParticleRangeId(*local_ee0.DataPtr,this->Solver);
        local_1058 = iVar24;
        if (iVar24 != -1) {
          pTVar25 = TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
                            *)&this->Solver->ClothsConstraints,iVar24);
          if ((pTVar25 ==
               (TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>
                *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L""), bVar22)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_1048 = *(longlong **)&pTVar25->field_0x8;
          lVar34 = local_1048[0x20];
          local_10a0 = lVar34;
          if (lVar34 != 0) {
            pFVar8 = this->Solver;
            pFVar9 = (pFVar8->PBDEvolution).Ptr;
            if (pFVar9 == (FPBDEvolution *)0x0) {
              pTVar26 = FClothingSimulationSolver::GetParticleXsView(pFVar8,&local_d80,iVar24);
            }
            else {
              pFVar10 = (pFVar8->Evolution).Ptr;
              pFVar15 = &pFVar10->Particles;
              if (pFVar10 == (FEvolution *)0x0) {
                pFVar15 = &pFVar9->MParticles;
              }
              pTVar26 = TArrayView<Chaos::TVector<float,3>_const_,int>::
                        TArrayView<Chaos::TVector<float,3>_const_,int><TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>
                                  (&local_d90,
                                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                                   &pFVar15->_padding_);
            }
            pTVar31 = pTVar26->DataPtr;
            iVar44 = (int)*(undefined8 *)&pTVar26->ArrayNum;
            local_1034 = 0;
            if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
              local_1034 = iVar24;
            }
            uVar41 = 0;
            iVar24 = *(int *)(lVar34 + 0x120);
            local_1088 = 0;
            local_10a8 = pTVar31;
            if (0 < iVar24) {
              local_1080 = (TVector<float,3> *)0x0;
              local_1098 = (ForElementType<unsigned_int>)0x0;
              do {
                FVar38 = local_1098;
                if ((*(int *)(lVar34 + 0x28) < 1) ||
                   ((float)(*(uint *)(lVar34 + 0x34) & (uint)uVar56) <= fVar60)) {
                  fVar60 = *(float *)(lVar34 + 0x30) + *(float *)(lVar34 + 0x30);
                  uVar33 = (ulonglong)(int)uVar41;
                }
                else {
                  uVar53 = 0;
                  if ((int)uVar41 < iVar24) {
                    uVar53 = ~uVar41 >> 0x1f;
                  }
                  if ((uVar53 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  lVar45 = *(longlong *)(lVar34 + 0x118);
                  uVar53 = 0;
                  if ((int)uVar41 < *(int *)(lVar34 + 0x130)) {
                    uVar53 = ~uVar41 >> 0x1f;
                  }
                  if ((uVar53 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  iVar24 = *(int *)(lVar34 + 0x1d8);
                  lVar34 = *(longlong *)(lVar34 + 0x128);
                  iVar32 = *(int *)((longlong)FVar38 + lVar45);
                  iVar42 = *(int *)((longlong)FVar38 + 8 + lVar45);
                  iVar7 = *(int *)((longlong)FVar38 + 0xc + lVar45);
                  fVar60 = *(float *)(&local_1080->field_0x8 + lVar34);
                  fVar2 = *(float *)(&local_1080->field_0x4 + lVar34);
                  fVar3 = *(float *)(&local_1080->field_0x0 + lVar34);
                  this_00 = (FPBDFlatWeightMap *)(local_10a0 + 8);
                  fVar46 = Softs::FPBDFlatWeightMap::GetValue
                                     (this_00,*(int *)((longlong)local_1098 + 4 + lVar45) - iVar24);
                  fVar47 = Softs::FPBDFlatWeightMap::GetValue(this_00,iVar32 - iVar24);
                  fVar48 = Softs::FPBDFlatWeightMap::GetValue(this_00,iVar42 - iVar24);
                  fVar49 = Softs::FPBDFlatWeightMap::GetValue(this_00,iVar7 - iVar24);
                  fVar60 = fVar49 * fVar60 + fVar48 * fVar2 + fVar47 + fVar46 * fVar3;
                  uVar33 = local_1088;
                  lVar34 = local_10a0;
                }
                pTVar18 = local_1080;
                uVar36 = ~uVar41 >> 0x1f;
                uVar53 = 0;
                if ((int)uVar41 < *(int *)(lVar34 + 0x120)) {
                  uVar53 = uVar36;
                }
                if ((uVar53 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar34 = local_10a0;
                puVar37 = (uint *)(uVar33 * 0x10 + *(longlong *)(local_10a0 + 0x118));
                uVar53 = 0;
                if ((int)uVar41 < *(int *)(local_10a0 + 0x130)) {
                  uVar53 = uVar36;
                }
                if ((uVar53 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar34 = *(longlong *)(lVar34 + 0x128);
                uVar53 = *puVar37;
                local_1070 = (uint *)(double)*(float *)(lVar34 + uVar33 * 0xc);
                local_1060 = (longlong *)(double)*(float *)(lVar34 + 8 + uVar33 * 0xc);
                local_1078 = (double)*(float *)(lVar34 + 4 + uVar33 * 0xc);
                uVar54 = 0;
                if ((int)uVar53 < iVar44) {
                  uVar54 = ~uVar53 >> 0x1f;
                }
                if ((uVar54 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uVar54 = puVar37[1];
                pFVar8 = local_10b0->Solver;
                dVar55 = pFVar8->LocalSpaceScale;
                local_1050 = (longlong *)
                             ((double)*(float *)(local_10a8 + (int)uVar53) * dVar55 +
                             *(double *)&pFVar8->LocalSpaceLocation);
                local_1080 = (TVector<float,3> *)
                             ((double)*(float *)&local_10a8[(int)uVar53].field_0x4 * dVar55 +
                             *(double *)&(pFVar8->LocalSpaceLocation).field_0x8);
                local_1090 = (double)*(float *)&local_10a8[(int)uVar53].field_0x8 * dVar55 +
                             *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
                uVar53 = 0;
                if ((int)uVar54 < iVar44) {
                  uVar53 = ~uVar54 >> 0x1f;
                }
                local_fd8 = local_1090;
                if ((uVar53 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar8 = local_10b0->Solver;
                uVar53 = puVar37[2];
                dVar55 = pFVar8->LocalSpaceScale;
                dVar14 = (double)*(float *)(local_10a8 + (int)uVar54) * dVar55 +
                         *(double *)&pFVar8->LocalSpaceLocation;
                dVar51 = (double)*(float *)&local_10a8[(int)uVar54].field_0x4 * dVar55 +
                         *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
                dVar55 = (double)*(float *)&local_10a8[(int)uVar54].field_0x8 * dVar55 +
                         *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
                uVar54 = 0;
                if ((int)uVar53 < iVar44) {
                  uVar54 = ~uVar53 >> 0x1f;
                }
                if ((uVar54 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pTVar31 = local_10a8;
                uVar54 = puVar37[3];
                pFVar8 = local_10b0->Solver;
                dVar4 = pFVar8->LocalSpaceScale;
                dVar57 = (double)*(float *)(local_10a8 + (int)uVar53) * dVar4 +
                         *(double *)&pFVar8->LocalSpaceLocation;
                dVar13 = (double)*(float *)&local_10a8[(int)uVar53].field_0x4 * dVar4 +
                         *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
                dVar4 = (double)*(float *)&local_10a8[(int)uVar53].field_0x8 * dVar4 +
                        *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
                uVar53 = 0;
                if ((int)uVar54 < iVar44) {
                  uVar53 = ~uVar54 >> 0x1f;
                }
                if ((uVar53 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar34 = local_10a0;
                pFVar8 = local_10b0->Solver;
                dVar5 = pFVar8->LocalSpaceScale;
                dVar52 = (double)*(float *)(pTVar31 + (int)uVar54) * dVar5 +
                         *(double *)&pFVar8->LocalSpaceLocation;
                dVar64 = (double)*(float *)&pTVar31[(int)uVar54].field_0x4 * dVar5 +
                         *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
                dVar5 = (double)*(float *)&pTVar31[(int)uVar54].field_0x8 * dVar5 +
                        *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
                uVar53 = 0;
                if ((int)uVar41 < *(int *)(local_10a0 + 0x140)) {
                  uVar53 = uVar36;
                }
                local_fc8._s_0.X =
                     local_1078 * dVar57 + dVar14 * (double)local_1070 + dVar52 * (double)local_1060
                ;
                dVar50 = dVar55 * (double)local_1070;
                local_1070 = (uint *)(local_1078 * dVar13 + dVar51 * (double)local_1070 +
                                     dVar64 * (double)local_1060);
                local_1078 = local_1078 * dVar4 + dVar50 + dVar5 * (double)local_1060;
                local_1060 = (longlong *)local_fc8._s_0.X;
                local_fc8._s_0.Y = (double)local_1070;
                local_fc8._s_0.Z = local_1078;
                if ((uVar53 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                dVar52 = dVar52 - dVar14;
                dVar64 = dVar64 - dVar51;
                dVar5 = dVar5 - dVar55;
                dVar57 = dVar57 - dVar14;
                dVar13 = dVar13 - dVar51;
                dVar4 = dVar4 - dVar55;
                if (*(char *)(uVar33 + *(longlong *)(lVar34 + 0x138)) == '\0') {
                  local_ea0 = dVar52;
                  local_e98 = dVar64;
                  local_e90 = dVar5;
                  local_e88 = dVar57;
                  local_e80 = dVar13;
                  local_e78 = dVar4;
                  pTVar27 = TVector<double,3>::CrossProduct
                                      (&local_d48,(TVector<double,3> *)&local_e88,
                                       (TVector<double,3> *)&local_ea0);
                  pTVar28 = UE::Math::TVector<double>::GetSafeNormal
                                      ((TVector<double> *)pTVar27,&local_d30,__real_3e45798ee0000000
                                       ,&UE::Math::TVector<double>::ZeroVector);
                  auVar6 = *(undefined1 (*) [16])&pTVar28->field0_0x0;
                  dVar55 = auVar6._0_8_;
                  uVar53 = auVar6._8_4_;
                  uVar54 = auVar6._12_4_;
                  pTVar40 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar28->field0_0x0)._s_0.Z;
                  pTStack_1008 = pTVar40;
                }
                else {
                  local_ed0 = dVar52;
                  local_ec8 = dVar64;
                  local_ec0 = dVar5;
                  local_eb8 = dVar57;
                  local_eb0 = dVar13;
                  local_ea8 = dVar4;
                  pTVar27 = TVector<double,3>::CrossProduct
                                      (local_d18,(TVector<double,3> *)&local_eb8,
                                       (TVector<double,3> *)&local_ed0);
                  pTVar28 = UE::Math::TVector<double>::GetSafeNormal
                                      ((TVector<double> *)pTVar27,&local_d60,__real_3e45798ee0000000
                                       ,&UE::Math::TVector<double>::ZeroVector);
                  local_dc8 = *(uint *)&pTVar28->field0_0x0;
                  uStack_dc4 = *(uint *)((longlong)&pTVar28->field0_0x0 + 4);
                  uStack_dc0 = *(uint *)((longlong)&pTVar28->field0_0x0 + 8);
                  uStack_dbc = *(uint *)((longlong)&pTVar28->field0_0x0 + 0xc);
                  local_db8 = *(undefined8 *)((longlong)&pTVar28->field0_0x0 + 0x10);
                  uVar63 = (uint)__xmm_80000000000000008000000000000000;
                  uVar65 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
                  dVar55 = (double)CONCAT44(uStack_dc4 ^ uVar65,local_dc8 ^ uVar63);
                  uVar53 = uStack_dc0 ^ uVar63;
                  uVar54 = uStack_dbc ^ uVar65;
                  pTVar40 = (TBitArray<FDefaultBitArrayAllocator> *)
                            CONCAT44((uint)((ulonglong)local_db8 >> 0x20) ^ uVar65,
                                     (uint)local_db8 ^ uVar63);
                }
                dVar51 = (double)fVar60;
                dVar14 = local_10b0->Solver->LocalSpaceScale;
                local_f68._s_0.X = (double)(float)(dVar51 * dVar55) * dVar14 + (double)local_1060;
                local_f68._s_0.Y =
                     (double)(float)(dVar51 * (double)CONCAT44(uVar54,uVar53)) * dVar14 +
                     (double)local_1070;
                local_f68._s_0.Z = (double)(float)(dVar51 * (double)pTVar40) * dVar14 + local_1078;
                DrawPoint(local_1068,(TVector<double> *)&local_fc8._s_0,&Brown,(UMaterial *)0x0,
                          __real_40000000);
                uVar53 = 0;
                if ((int)uVar41 < *(int *)(lVar34 + 0x140)) {
                  uVar53 = uVar36;
                }
                if ((uVar53 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar20 = local_1068;
                pFVar39 = &Brown;
                if (*(char *)(uVar33 + *(longlong *)(lVar34 + 0x138)) != '\0') {
                  pFVar39 = &Red;
                }
                Chaos::DrawLine(local_1068,(TVector<double> *)&local_fc8._s_0,
                                (TVector<double> *)&local_f68._s_0,pFVar39);
                if (pFVar20 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar22 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&Orange);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  if ((pFVar30->bEnableDebugDrawing == false) ||
                     (pFVar30 = FDebugDrawQueue::GetInstance(), pFVar30->NumConsumers < 1)) {
                    uVar61 = SUB84(local_1090,0);
                    uVar62 = (undefined4)((ulonglong)local_1090 >> 0x20);
                    uVar58 = SUB84(local_1080,0);
                    uVar59 = (undefined4)((ulonglong)local_1080 >> 0x20);
                    plVar43 = local_1050;
                  }
                  else {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    plVar43 = local_1050;
                    pTVar19 = local_1080;
                    uVar58 = SUB84(local_1080,0);
                    uVar59 = (undefined4)((ulonglong)local_1080 >> 0x20);
                    local_e70 = local_1050;
                    dStack_e68 = (double)local_1080;
                    local_e60 = local_fd8;
                    bVar23 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)&local_e70);
                    uVar61 = SUB84(local_1090,0);
                    uVar62 = (undefined4)((ulonglong)local_1090 >> 0x20);
                    if (bVar23) {
                      local_5e8[0]._s_0.X = plVar43;
                      local_520 = (void *)0x0;
                      local_518 = 0;
                      local_510 = 0;
                      local_5b0 = 0;
                      local_440 = 0;
                      local_5e8[0]._8_8_ = pTVar19;
                      local_5e8[0]._16_8_ = local_1090;
                      local_5b8 = local_1040;
                      local_5a8 = 0x38d1b717;
                      local_5a0 = 0x40000000;
                      local_5a4 = -bVar22 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_5e8[0]._s_0);
                      if (local_520 != (void *)0x0) {
                        FMemory::Free(local_520);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar22 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&Orange);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  lVar34 = local_10a0;
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = FDebugDrawQueue::GetInstance(), lVar34 = local_10a0,
                     0 < pFVar30->NumConsumers)) {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    uVar17 = local_f68._s_0.Z;
                    uVar16 = local_f68._s_0.Y;
                    uVar56 = local_f68._s_0.X;
                    local_e58 = local_f68._s_0.X;
                    dStack_e50 = local_f68._s_0.Y;
                    local_e48 = local_f68._s_0.Z;
                    bVar23 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)&local_e58);
                    if (bVar23) {
                      local_a30 = (void *)0x0;
                      local_a28 = 0;
                      local_a20 = 0;
                      local_ac8 = local_103c;
                      local_ad8 = CONCAT44(uVar59,uVar58);
                      local_ad0 = CONCAT44(uVar62,uVar61);
                      local_af8._s_0.X = (double)uVar56;
                      local_af8._s_0.Y = (double)uVar16;
                      local_af8._s_0.Z = (double)uVar17;
                      local_ac0 = 0;
                      local_ab8 = 0x38d1b717;
                      local_ab0 = 0;
                      local_950 = 1;
                      local_ae0 = plVar43;
                      local_ab4 = -bVar22 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_af8._s_0);
                      if (local_a30 != (void *)0x0) {
                        FMemory::Free(local_a30);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    lVar34 = local_10a0;
                  }
                }
                local_1080 = pTVar18 + 1;
                local_1088 = local_1088 + 1;
                iVar24 = *(int *)(lVar34 + 0x120);
                local_1098 = (ForElementType<unsigned_int>)((longlong)local_1098 + 0x10);
                uVar41 = uVar41 + 1;
                this = local_10b0;
                fVar60 = __real_38d1b717;
                uVar56 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
              } while ((int)uVar41 < iVar24);
            }
            plVar43 = *(longlong **)(lVar34 + 0x98);
            iVar24 = local_1058;
            local_1050 = plVar43;
            if (plVar43 != (longlong *)0x0) {
              uVar33 = (ulonglong)*(int *)(lVar34 + 0xe0);
              puVar37 = *(uint **)(lVar34 + 0xd8);
              local_1088 = CONCAT44(local_1088._4_4_,*(int *)(lVar34 + 0xe0));
              local_1020 = puVar37 + uVar33;
              while( true ) {
                puVar21 = local_1020;
                local_1070 = puVar37;
                if (*(int *)(lVar34 + 0xe0) != (int)uVar33) {
                  local_10b8 = 0;
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_10b8);
                }
                iVar24 = local_1058;
                if (puVar37 == puVar21) break;
                uVar41 = *puVar37;
                local_1078 = (double)CONCAT44(local_1078._4_4_,uVar41);
                uVar53 = 0;
                if ((int)uVar41 < iVar44) {
                  uVar53 = ~uVar41 >> 0x1f;
                }
                if ((uVar53 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar8 = this->Solver;
                dVar55 = pFVar8->LocalSpaceScale;
                dVar14 = (double)*(float *)&pTVar31[(int)uVar41].field_0x8 * dVar55 +
                         *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
                dVar51 = (double)*(float *)(pTVar31 + (int)uVar41) * dVar55 +
                         *(double *)&pFVar8->LocalSpaceLocation;
                dVar55 = (double)*(float *)&pTVar31[(int)uVar41].field_0x4 * dVar55 +
                         *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
                local_fd8 = dVar14;
                if (local_1068 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar22 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&Orange);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  lVar34 = local_10a0;
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = FDebugDrawQueue::GetInstance(), lVar34 = local_10a0,
                     0 < pFVar30->NumConsumers)) {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_e30 = local_fd8;
                    local_e40 = dVar51;
                    dStack_e38 = dVar55;
                    bVar23 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)&local_e40);
                    if (bVar23) {
                      local_370 = (void *)0x0;
                      local_368 = 0;
                      local_360 = 0;
                      local_400 = 0;
                      local_290 = 0;
                      local_408 = local_1038;
                      local_3f8 = 0x38d1b717;
                      local_3f0 = 0x40000000;
                      local_438[0]._0_8_ = dVar51;
                      local_438[0]._8_8_ = dVar55;
                      local_438[0]._16_8_ = dVar14;
                      local_3f4 = -bVar22 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_438[0]._s_0);
                      if (local_370 != (void *)0x0) {
                        FMemory::Free(local_370);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    lVar34 = local_10a0;
                  }
                }
                uVar36 = uVar41 - local_1034;
                uVar53 = 0;
                if ((int)uVar36 < *(int *)(lVar34 + 0x100)) {
                  uVar53 = ~uVar36 >> 0x1f;
                }
                if ((uVar53 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                local_fa0._padding_._0_4_ = 0;
                local_fa0._padding_._4_4_ = 1;
                local_fa0.UnvisitedBitMask = 0xffffffff;
                local_fa0.CurrentBitIndex = 0;
                local_fa0.BaseBitIndex = 0;
                plVar35 = (longlong *)((longlong)(int)uVar36 * 0x50 + *(longlong *)(lVar34 + 0xf8));
                local_1098 = (ForElementType<unsigned_int>)(plVar35 + 2);
                local_1060 = plVar35;
                local_fa0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1098;
                if ((int)plVar35[5] != 0) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_fa0);
                }
                uVar53 = *(uint *)(plVar35 + 5);
                local_ff0 = (int)plVar35[1] - *(int *)((longlong)plVar35 + 0x34);
                uStack_1010 = CONCAT44(local_fa0._padding_._4_4_,(undefined4)local_fa0._padding_);
                iStack_ffc = local_fa0.CurrentBitIndex;
                uStack_1000 = local_fa0.UnvisitedBitMask;
                uStack_ff4 = local_fa0._28_4_;
                iStack_ff8 = local_fa0.BaseBitIndex;
                uVar36 = uVar53 & 0xffffffe0;
                pTStack_1008 = local_fa0.Array;
                iVar24 = (int)uVar53 >> 5;
                local_1090 = (double)CONCAT44(local_1090._4_4_,uVar53);
                uStack_ef8 = CONCAT44(uStack_fec,local_ff0);
                TStack_f18.Array = local_fa0.Array;
                uVar54 = uVar53;
                local_1018 = plVar35;
                local_f20 = plVar35;
                TStack_f18._padding_ = uStack_1010;
                TStack_f18._16_8_ = _uStack_1000;
                TStack_f18._24_8_ = _iStack_ff8;
                if ((int)uVar53 < 0) {
                  bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L"");
                  if (bVar22) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  uVar54 = local_1090._0_4_;
                }
                uVar63 = *(int *)((longlong)local_1098 + 0x18);
                if (uVar54 != uVar63) {
                  local_1090 = (double)CONCAT44(local_1090._4_4_,uVar63);
                  FVar38 = local_1098;
                  if (*(ForElementType<unsigned_int> *)((longlong)local_1098 + 0x10) !=
                      (ForElementType<unsigned_int>)0x0) {
                    FVar38 = *(ForElementType<unsigned_int> *)((longlong)local_1098 + 0x10);
                  }
                  uVar53 = -1 << ((byte)uVar53 & 0x1f) &
                           *(uint *)((longlong)FVar38 + (longlong)iVar24 * 4);
                  while (uVar53 == 0) {
                    lVar34 = (longlong)iVar24;
                    uVar36 = uVar36 + 0x20;
                    iVar24 = iVar24 + 1;
                    if ((int)((uVar63 - 1) + ((int)(uVar63 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
                    goto LAB_14dbe901f;
                    uVar53 = *(uint *)((longlong)FVar38 + 4 + lVar34 * 4);
                  }
                  uVar33 = (ulonglong)(-uVar53 & uVar53) * 2 + 1;
                  lVar34 = 0x3f;
                  if (uVar33 != 0) {
                    for (; uVar33 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                    }
                  }
                  local_f80 = (int)lVar34;
                  uVar53 = (uVar36 - 1) + local_f80;
                  if ((int)uVar63 < (int)uVar53) {
                    uVar53 = uVar63;
                  }
                  local_1090 = (double)CONCAT44(local_1090._4_4_,uVar53);
                }
LAB_14dbe901f:
                local_1080 = pTVar31 + (int)uVar41;
                while( true ) {
                  plVar35 = local_f20;
                  if ((int)local_f20[1] - *(int *)((longlong)local_f20 + 0x34) != (int)uStack_ef8) {
                    local_10b7 = 0;
                    `TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()
                              (&local_10b7);
                  }
                  lVar34 = (longlong)TStack_f18.CurrentBitIndex;
                  if (((TStack_f18.CurrentBitIndex == local_1090._0_4_) &&
                      ((ForElementType<unsigned_int>)TStack_f18.Array == local_1098)) &&
                     (plVar35 == local_1060)) break;
                  lVar45 = *plVar35;
                  uVar41 = *(uint *)(lVar45 + lVar34 * 0x10);
                  uVar53 = 0;
                  if ((int)uVar41 < (int)plVar43[1]) {
                    uVar53 = ~uVar41 >> 0x1f;
                  }
                  if ((uVar53 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  uVar53 = *(uint *)(lVar45 + lVar34 * 0x10);
                  uVar41 = *(uint *)(*plVar43 + (longlong)(int)uVar41 * 0xc);
                  uVar36 = 0;
                  if ((int)uVar53 < (int)plVar43[1]) {
                    uVar36 = ~uVar53 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  uVar36 = *(uint *)(lVar45 + lVar34 * 0x10);
                  uVar53 = *(uint *)(*plVar43 + 4 + (longlong)(int)uVar53 * 0xc);
                  uVar54 = 0;
                  if ((int)uVar36 < (int)plVar43[1]) {
                    uVar54 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar54 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  uVar36 = *(uint *)(*plVar43 + 8 + (longlong)(int)uVar36 * 0xc);
                  uVar54 = 0;
                  if ((int)local_1078._0_4_ < iVar44) {
                    uVar54 = ~(uint)local_1078._0_4_ >> 0x1f;
                  }
                  if ((uVar54 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar22)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  uVar54 = 0;
                  if ((int)uVar41 < iVar44) {
                    uVar54 = ~uVar41 >> 0x1f;
                  }
                  if ((uVar54 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar22)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pTVar18 = local_10a8;
                  pTVar31 = local_10a8 + (int)uVar41;
                  uVar41 = 0;
                  if ((int)uVar53 < iVar44) {
                    uVar41 = ~uVar53 >> 0x1f;
                  }
                  if ((uVar41 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar22)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  uVar41 = 0;
                  if ((int)uVar36 < iVar44) {
                    uVar41 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar41 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar22)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pTVar31 = FindClosestPointAndBaryOnTriangle<float,3>
                                      (&local_db0,pTVar31,pTVar18 + (int)uVar53,
                                       local_10a8 + (int)uVar36,local_1080,&local_da0);
                  pFVar39 = &DkRed;
                  pFVar8 = local_10b0->Solver;
                  dVar4 = pFVar8->LocalSpaceScale;
                  dVar57 = (double)*(float *)pTVar31 * dVar4 +
                           *(double *)&pFVar8->LocalSpaceLocation;
                  dVar13 = (double)*(float *)&pTVar31->field_0x4 * dVar4 +
                           *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
                  dVar4 = (double)*(float *)&pTVar31->field_0x8 * dVar4 +
                          *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
                  if (0.0 < *(float *)(lVar45 + 4 + lVar34 * 0x10)) {
                    pFVar39 = &LtRed;
                  }
                  local_fd8 = dVar4;
                  if (local_1068 == (FPrimitiveDrawInterface *)0x0) {
                    pFVar29 = FDebugDrawQueue::GetInstance();
                    bVar22 = Chaos::Private::bDrawInForeground != false;
                    FLinearColor::ToFColorSRGB(pFVar39);
                    pFVar30 = FDebugDrawQueue::GetInstance();
                    dVar5 = local_fd8;
                    uVar58 = (undefined4)((ulonglong)dVar13 >> 0x20);
                    if ((pFVar30->bEnableDebugDrawing != false) &&
                       (pFVar30 = FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
                      pFVar1 = &pFVar29->CommandQueueCS;
                      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::ReportNotNullPtr();
                      }
                      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                      local_e18 = dVar5;
                      local_e28._8_4_ = SUB84(dVar13,0);
                      local_e28._0_8_ = dVar57;
                      local_e28._12_4_ = uVar58;
                      bVar23 = FDebugDrawQueue::AcceptCommand
                                         (pFVar29,1,(TVector<double,3> *)local_e28);
                      if (bVar23) {
                        local_1c0 = (void *)0x0;
                        local_1b8 = 0;
                        local_1b0 = 0;
                        local_250 = 0;
                        local_e0 = 0;
                        local_258 = local_1030;
                        local_248 = 0x38d1b717;
                        local_240 = 0x40000000;
                        local_288[0]._0_8_ = dVar57;
                        local_288[0]._8_8_ = dVar13;
                        local_288[0]._16_8_ = dVar4;
                        local_244 = -bVar22 & 2;
                        FDebugDrawQueue::AddCommand
                                  (pFVar29,(FLatentDrawCommand *)&local_288[0]._s_0);
                        if (local_1c0 != (void *)0x0) {
                          FMemory::Free(local_1c0);
                        }
                      }
                      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    }
                    pFVar29 = FDebugDrawQueue::GetInstance();
                    bVar22 = Chaos::Private::bDrawInForeground != false;
                    FLinearColor::ToFColorSRGB(pFVar39);
                    pFVar30 = FDebugDrawQueue::GetInstance();
                    if ((pFVar30->bEnableDebugDrawing != false) &&
                       (pFVar30 = FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
                      pFVar1 = &pFVar29->CommandQueueCS;
                      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::ReportNotNullPtr();
                      }
                      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                      local_e00 = dVar5;
                      local_e10._8_4_ = SUB84(dVar13,0);
                      local_e10._0_8_ = dVar57;
                      local_e10._12_4_ = uVar58;
                      bVar23 = FDebugDrawQueue::AcceptCommand
                                         (pFVar29,1,(TVector<double,3> *)local_e10);
                      if (bVar23) {
                        local_be0 = (void *)0x0;
                        local_bd8 = 0;
                        local_bd0 = 0;
                        local_c78 = local_102c;
                        local_c70 = 0;
                        local_c68 = 0x38d1b717;
                        local_c60 = 0;
                        local_b00 = 1;
                        local_ca8._s_0.X = dVar57;
                        local_ca8._s_0.Y = dVar13;
                        local_ca8._s_0.Z = dVar4;
                        local_c90 = dVar51;
                        local_c88 = dVar55;
                        local_c80 = dVar14;
                        local_c64 = -bVar22 & 2;
                        FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_ca8._s_0);
                        if (local_be0 != (void *)0x0) {
                          FMemory::Free(local_be0);
                        }
                      }
                      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    }
                  }
                  TStack_f18.UnvisitedBitMask =
                       TStack_f18.UnvisitedBitMask & ~TStack_f18._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f18);
                  plVar43 = local_1050;
                }
                puVar37 = local_1070 + 1;
                uVar33 = local_1088 & 0xffffffff;
                this = local_10b0;
                lVar34 = local_10a0;
                pTVar31 = local_10a8;
              }
            }
          }
          lVar34 = local_1048[0x24];
          if (lVar34 != 0) {
            pFVar8 = this->Solver;
            pFVar9 = (pFVar8->PBDEvolution).Ptr;
            if (pFVar9 == (FPBDEvolution *)0x0) {
              pTVar26 = FClothingSimulationSolver::GetParticleXsView(pFVar8,&local_d70,iVar24);
            }
            else {
              pFVar10 = (pFVar8->Evolution).Ptr;
              pFVar15 = &pFVar10->Particles;
              if (pFVar10 == (FEvolution *)0x0) {
                pFVar15 = &pFVar9->MParticles;
              }
              iVar44 = (int)(&pFVar15->_padding_)[2];
              local_ef0.DataPtr = (TVector<float,3> *)(&pFVar15->_padding_)[1];
              if ((iVar44 < 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar22)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_ef0.ArrayNum = iVar44;
              pTVar26 = &local_ef0;
            }
            pTVar31 = pTVar26->DataPtr;
            iVar44 = *(int *)(lVar34 + 0x10);
            iVar42 = (int)*(undefined8 *)&pTVar26->ArrayNum;
            iVar32 = 0;
            if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
              iVar32 = iVar24;
            }
            uVar41 = 0;
            local_1088 = CONCAT44(local_1088._4_4_,iVar32);
            local_10a8 = pTVar31;
            if (0 < iVar44) {
              lVar45 = 0;
              do {
                uVar53 = 0;
                if ((int)uVar41 < iVar44) {
                  uVar53 = ~uVar41 >> 0x1f;
                }
                if ((uVar53 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar11 = *(longlong *)(lVar34 + 8);
                uVar53 = *(uint *)(lVar45 + lVar11);
                uVar36 = 0;
                if ((int)uVar53 < iVar42) {
                  uVar36 = ~uVar53 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar8 = local_10b0->Solver;
                uVar36 = *(uint *)(lVar45 + 4 + lVar11);
                dVar55 = pFVar8->LocalSpaceScale;
                dVar51 = (double)*(float *)(pTVar31 + (int)uVar53) * dVar55 +
                         *(double *)&pFVar8->LocalSpaceLocation;
                dVar14 = (double)*(float *)&pTVar31[(int)uVar53].field_0x4 * dVar55 +
                         *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
                dVar55 = (double)*(float *)&pTVar31[(int)uVar53].field_0x8 * dVar55 +
                         *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
                uVar53 = 0;
                if ((int)uVar36 < iVar42) {
                  uVar53 = ~uVar36 >> 0x1f;
                }
                local_fd8 = dVar55;
                if ((uVar53 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uVar56 = *(undefined8 *)&pTVar31[(int)uVar36].field_0x4;
                pFVar8 = local_10b0->Solver;
                dVar4 = pFVar8->LocalSpaceScale;
                fVar60 = *(float *)(pTVar31 + (int)uVar36);
                dVar5 = *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
                dVar57 = (double)(float)((ulonglong)uVar56 >> 0x20) * dVar4 +
                         *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
                dVar13 = *(double *)&pFVar8->LocalSpaceLocation;
                if (local_1068 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar22 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB(&Brown);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  pTVar31 = local_10a8;
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = FDebugDrawQueue::GetInstance(), pTVar31 = local_10a8,
                     0 < pFVar30->NumConsumers)) {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_de8 = local_fd8;
                    local_df8 = dVar51;
                    dStack_df0 = dVar14;
                    bVar23 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)&local_df8);
                    if (bVar23) {
                      local_880 = (void *)0x0;
                      local_878 = 0;
                      local_870 = 0;
                      local_918 = local_1028;
                      local_928._8_4_ = SUB84(dVar57,0);
                      local_928._0_8_ = (double)(float)uVar56 * dVar4 + dVar5;
                      local_928._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
                      local_910 = 0;
                      local_908 = 0x38d1b717;
                      local_900 = 0;
                      local_7a0 = 1;
                      local_948._s_0.X = dVar51;
                      local_948._s_0.Y = dVar14;
                      local_948._s_0.Z = dVar55;
                      local_930 = (double)fVar60 * dVar4 + dVar13;
                      local_904 = -bVar22 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_948._s_0);
                      if (local_880 != (void *)0x0) {
                        FMemory::Free(local_880);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    pTVar31 = local_10a8;
                  }
                }
                iVar44 = *(int *)(lVar34 + 0x10);
                uVar41 = uVar41 + 1;
                lVar45 = lVar45 + 8;
                this = local_10b0;
              } while ((int)uVar41 < iVar44);
            }
            plVar43 = *(longlong **)(lVar34 + 0x20);
            local_1048 = plVar43;
            if (plVar43 != (longlong *)0x0) {
              iVar44 = 0;
              iStack_ff8 = 0;
              iVar24 = (int)plVar43[5];
              pTStack_1008 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar43 + 2);
              uVar41 = 1;
              puVar37 = (uint *)((double)*(float *)(lVar34 + 0x18) * this->Solver->LocalSpaceScale);
              iStack_ffc = 0;
              if (iVar24 != 0) {
                pTVar40 = pTStack_1008;
                if ((TBitArray<FDefaultBitArrayAllocator> *)plVar43[4] !=
                    (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                  pTVar40 = (TBitArray<FDefaultBitArrayAllocator> *)plVar43[4];
                }
                uVar53 = *(uint *)(pTVar40->AllocatorInstance).InlineData;
                while (uVar53 == 0) {
                  lVar34 = (longlong)iVar44;
                  iStack_ff8 = iStack_ff8 + 0x20;
                  iVar44 = iVar44 + 1;
                  iStack_ffc = iVar24;
                  if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar44)
                  goto LAB_14dbe9a7d;
                  uVar53 = *(uint *)((pTVar40->AllocatorInstance).InlineData + lVar34 * 4 + 4);
                }
                uVar41 = -uVar53 & uVar53;
                uVar33 = (ulonglong)uVar41 * 2 + 1;
                lVar34 = 0x3f;
                if (uVar33 != 0) {
                  for (; uVar33 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                  }
                }
                local_f7c = (int)lVar34;
                iStack_ffc = local_f7c + -1 + iStack_ff8;
                if (iVar24 < iStack_ffc) {
                  iStack_ffc = iVar24;
                }
              }
LAB_14dbe9a7d:
              uVar53 = *(uint *)(plVar43 + 5);
              local_ff0 = (int)plVar43[1] - *(int *)((longlong)plVar43 + 0x34);
              uVar36 = uVar53 & 0xffffffe0;
              uStack_1010 = CONCAT44(uVar41,iVar44);
              uStack_1000 = 0xffffffff;
              uStack_ff4 = local_ce4;
              TStack_f48._padding_ = uStack_1010;
              iVar24 = (int)uVar53 >> 5;
              uStack_f28 = CONCAT44(uStack_fec,local_ff0);
              TStack_f48.UnvisitedBitMask = 0xffffffff;
              TStack_f48.CurrentBitIndex = iStack_ffc;
              TStack_f48.BaseBitIndex = iStack_ff8;
              TStack_f48._28_4_ = local_ce4;
              local_1020 = puVar37;
              local_1018 = plVar43;
              local_f50 = plVar43;
              TStack_f48.Array = pTStack_1008;
              if (((int)uVar53 < 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L""), bVar22)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pTVar31 = local_10a8;
              uVar41 = *(uint *)(plVar43 + 5);
              if (uVar53 != uVar41) {
                plVar35 = plVar43 + 2;
                if ((longlong *)plVar43[4] != (longlong *)0x0) {
                  plVar35 = (longlong *)plVar43[4];
                }
                uVar53 = -1 << ((byte)uVar53 & 0x1f) &
                         *(uint *)((longlong)plVar35 + (longlong)iVar24 * 4);
                while (uVar53 == 0) {
                  lVar34 = (longlong)iVar24;
                  uVar36 = uVar36 + 0x20;
                  iVar24 = iVar24 + 1;
                  uVar53 = uVar41;
                  if ((int)((uVar41 - 1) + ((int)(uVar41 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
                  goto LAB_14dbe9b92;
                  uVar53 = *(uint *)((longlong)plVar35 + lVar34 * 4 + 4);
                }
                uVar33 = (ulonglong)(-uVar53 & uVar53) * 2 + 1;
                lVar34 = 0x3f;
                if (uVar33 != 0) {
                  for (; uVar33 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                  }
                }
                local_f78 = (int)lVar34;
                uVar53 = (uVar36 - 1) + local_f78;
                if ((int)uVar41 < (int)uVar53) {
                  uVar53 = uVar41;
                }
              }
LAB_14dbe9b92:
              while( true ) {
                plVar35 = local_f50;
                if ((int)local_f50[1] - *(int *)((longlong)local_f50 + 0x34) != (int)uStack_f28) {
                  local_10b6[0] = 0;
                  `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_10b6);
                }
                if (((TStack_f48.CurrentBitIndex == uVar53) &&
                    (TStack_f48.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar43 + 2))) &&
                   (plVar35 == plVar43)) break;
                uVar36 = *(int *)(*plVar35 + (longlong)TStack_f48.CurrentBitIndex * 0xc) +
                         (int)local_1088;
                uVar41 = 0;
                if ((int)uVar36 < iVar42) {
                  uVar41 = ~uVar36 >> 0x1f;
                }
                if ((uVar41 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar22)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uVar56 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                fVar60 = *(float *)(pTVar31 + (int)uVar36);
                fVar2 = *(float *)&pTVar31[(int)uVar36].field_0x4;
                fVar3 = *(float *)&pTVar31[(int)uVar36].field_0x8;
                pFVar8 = local_10b0->Solver;
                dVar55 = pFVar8->LocalSpaceScale;
                dVar14 = *(double *)&pFVar8->LocalSpaceLocation;
                dVar51 = *(double *)&(pFVar8->LocalSpaceLocation).field_0x8;
                dVar4 = *(double *)&(pFVar8->LocalSpaceLocation).field_0x10;
                local_fb0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.R]
                ;
                local_fb0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.G]
                ;
                local_fb0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.B]
                ;
                local_fb0._s_0.A = (float)FColor::Orange.field0_0x0._3_1_ * __real_3b808081;
                FImplicitObject::FImplicitObject(&local_ce0,3,'\0');
                pTStack_1008 = (TBitArray<FDefaultBitArrayAllocator> *)uVar17;
                local_cc0 = (float)(double)uVar56;
                local_ce0._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
                local_cb8 = (float)(double)uVar17;
                dVar5 = (double)local_cb8;
                local_ce0.Margin = (float)(double)puVar37;
                local_cbc = (float)(double)uVar16;
                dVar64 = (double)local_cbc;
                local_1078 = (double)CONCAT44(local_1078._4_4_,local_ce0.Margin);
                dVar52 = (double)local_cc0;
                dVar13 = dVar5 * UE::Math::TQuat<double>::Identity.Y -
                         dVar64 * UE::Math::TQuat<double>::Identity.Z;
                dVar13 = dVar13 + dVar13;
                dVar57 = dVar52 * UE::Math::TQuat<double>::Identity.Z -
                         dVar5 * UE::Math::TQuat<double>::Identity.X;
                local_1048 = (longlong *)(dVar57 + dVar57);
                dVar57 = dVar64 * UE::Math::TQuat<double>::Identity.X -
                         dVar52 * UE::Math::TQuat<double>::Identity.Y;
                dVar57 = dVar57 + dVar57;
                local_1098 = (ForElementType<unsigned_int>)
                             (dVar57 * UE::Math::TQuat<double>::Identity.Y -
                             (double)local_1048 * UE::Math::TQuat<double>::Identity.Z);
                dVar52 = (double)local_1098 + dVar14 + (double)fVar60 * dVar55 +
                         dVar13 * UE::Math::TQuat<double>::Identity.W + dVar52;
                dVar14 = (dVar13 * UE::Math::TQuat<double>::Identity.Z -
                         dVar57 * UE::Math::TQuat<double>::Identity.X) +
                         dVar51 + (double)fVar2 * dVar55 +
                         (double)local_1048 * UE::Math::TQuat<double>::Identity.W + dVar64;
                dVar55 = ((double)local_1048 * UE::Math::TQuat<double>::Identity.X -
                         dVar13 * UE::Math::TQuat<double>::Identity.Y) +
                         (double)fVar3 * dVar55 + dVar4 +
                         dVar57 * UE::Math::TQuat<double>::Identity.W + dVar5;
                local_fd8 = dVar55;
                if (local_1068 == (FPrimitiveDrawInterface *)0x0) {
                  pFVar29 = FDebugDrawQueue::GetInstance();
                  bVar22 = Chaos::Private::bDrawInForeground != false;
                  FLinearColor::ToFColorSRGB((FLinearColor *)&local_fb0._s_0);
                  pFVar30 = FDebugDrawQueue::GetInstance();
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers)) {
                    pFVar1 = &pFVar29->CommandQueueCS;
                    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    local_dd0 = local_fd8;
                    local_de0 = dVar52;
                    dStack_dd8 = dVar14;
                    bVar23 = FDebugDrawQueue::AcceptCommand
                                       (pFVar29,0x90,(TVector<double,3> *)&local_de0);
                    if (bVar23) {
                      local_748 = (double)local_1078._0_4_;
                      local_6d0 = (void *)0x0;
                      local_6c8 = 0;
                      local_6c0 = 0;
                      local_768 = local_1024;
                      local_764 = 0xc;
                      local_760 = 0;
                      local_758 = 0x38d1b717;
                      local_750 = 0;
                      local_5f0 = 3;
                      local_798[0]._0_8_ = dVar52;
                      local_798[0]._8_8_ = dVar14;
                      local_798[0]._16_8_ = dVar55;
                      local_754 = -bVar22 & 2;
                      FDebugDrawQueue::AddCommand(pFVar29,(FLatentDrawCommand *)&local_798[0]._s_0);
                      if (local_6d0 != (void *)0x0) {
                        FMemory::Free(local_6d0);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  }
                }
                local_ce0._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
                FImplicitObject::~FImplicitObject(&local_ce0);
                TStack_f48.UnvisitedBitMask =
                     TStack_f48.UnvisitedBitMask & ~TStack_f48._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f48);
                puVar37 = local_1020;
              }
            }
          }
        }
        local_ee0.DataPtr = local_fd0 + 1;
        this = local_10b0;
      } while (local_ee0.DataPtr != local_f70);
    }
  }
  return;
}

// DrawSelfCollisionThickness @ 14dbea100

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
Chaos::FClothVisualizationNoGC::DrawSelfCollisionThickness
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FClothingSimulationSolver *pFVar11;
  FClothingSimulationCloth *this_00;
  undefined1 *puVar12;
  code *pcVar13;
  int iVar14;
  FClothVisualizationNoGC *pFVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  FTriangleMesh *this_01;
  FSegmentMesh *pFVar19;
  float *pfVar20;
  TQuat<double> *pTVar21;
  undefined1 *puVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_248 [32];
  TArrayView<Chaos::TVector<float,3>_const_,int> local_1f8;
  FClothVisualizationNoGC *local_1e8;
  TArrayView<float_const_,int> local_1e0;
  FPrimitiveDrawInterface *local_1d0;
  FScriptContainerElement *local_1c8;
  FScriptContainerElement *local_1c0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  TQuat<double> local_168;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar11 = this->Solver;
  if (pFVar11 != (FClothingSimulationSolver *)0x0) {
    iVar18 = (pFVar11->Cloths).ArrayNum;
    pFVar24 = (pFVar11->Cloths).AllocatorInstance.Data;
    local_1e8 = this;
    local_1d0 = param_1;
    local_1c8 = pFVar24;
    if ((iVar18 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_1c0 = pFVar24 + (longlong)iVar18 * 8;
    fVar34 = __real_3a83126f;
    if (pFVar24 != local_1c0) {
      do {
        uVar30 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar32 = __real_38d1b717;
        this_00 = *(FClothingSimulationCloth **)pFVar24;
        uVar17 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (uVar17 != 0xffffffff) {
          pFVar11 = this->Solver;
          if (*(int *)&(pFVar11->ClothsConstraints).field_0x8 !=
              *(int *)&(pFVar11->ClothsConstraints).field_0x34) {
            puVar12 = *(undefined1 **)&(pFVar11->ClothsConstraints).field_0x40;
            puVar22 = &(pFVar11->ClothsConstraints).field_0x38;
            if (puVar12 != (undefined1 *)0x0) {
              puVar22 = puVar12;
            }
            iVar18 = *(int *)(puVar22 +
                             (ulonglong)
                             (*(int *)&(pFVar11->ClothsConstraints).field_0x48 - 1U & uVar17) * 4);
            if (iVar18 != -1) {
              do {
                lVar23 = *(longlong *)&pFVar11->ClothsConstraints + (longlong)iVar18 * 0x18;
                if (*(uint *)(*(longlong *)&pFVar11->ClothsConstraints + (longlong)iVar18 * 0x18) ==
                    uVar17) {
                  if (lVar23 != 0) goto LAB_14dbea2d3;
                  goto LAB_14dbea2ad;
                }
                iVar18 = *(int *)(lVar23 + 0x10);
              } while (iVar18 != -1);
            }
          }
          lVar23 = 0;
LAB_14dbea2ad:
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L"");
          if (bVar16) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
LAB_14dbea2d3:
          lVar23 = *(longlong *)(*(longlong *)(lVar23 + 8) + 0x100);
          if (lVar23 != 0) {
            uVar26 = 0;
            if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
              uVar26 = uVar17;
            }
            FClothingSimulationCloth::GetParticlePositions(this_00,&local_1f8,this->Solver);
            FClothingSimulationCloth::GetParticleInvMasses(this_00,&local_1e0,this->Solver);
            this_01 = FClothingSimulationCloth::GetTriangleMesh(this_00,this->Solver);
            pFVar19 = FTriangleMesh::GetSegmentMesh(this_01);
            iVar18 = (pFVar19->MElements).ArrayNum;
            pFVar24 = (pFVar19->MElements).AllocatorInstance.Data;
            if ((iVar18 < 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar16)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            iVar14 = local_1f8.ArrayNum;
            pFVar1 = pFVar24 + (longlong)iVar18 * 8;
            for (; pFVar24 != pFVar1; pFVar24 = pFVar24 + 8) {
              uVar27 = *(int *)pFVar24 - uVar26;
              uVar17 = 0;
              if ((int)uVar27 < local_1e0.ArrayNum) {
                uVar17 = ~uVar27 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar16)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              fVar34 = local_1e0.DataPtr[(int)uVar27];
              uVar27 = *(int *)(pFVar24 + 4) - uVar26;
              uVar17 = 0;
              if ((int)uVar27 < local_1e0.ArrayNum) {
                uVar17 = ~uVar27 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar16)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if ((fVar34 != 0.0) || (local_1e0.DataPtr[(int)uVar27] != 0.0)) {
                uVar27 = *(int *)pFVar24 - uVar26;
                uVar17 = 0;
                if ((int)uVar27 < iVar14) {
                  uVar17 = ~uVar27 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar16)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar28 = *(int *)(pFVar24 + 4) - uVar26;
                fVar34 = *(float *)(local_1f8.DataPtr + (int)uVar27);
                fVar2 = *(float *)&local_1f8.DataPtr[(int)uVar27].field_0x4;
                fVar3 = *(float *)&local_1f8.DataPtr[(int)uVar27].field_0x8;
                uVar17 = 0;
                if ((int)uVar28 < iVar14) {
                  uVar17 = ~uVar28 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar16)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar4 = *(float *)(local_1f8.DataPtr + (int)uVar28);
                fVar5 = *(float *)&local_1f8.DataPtr[(int)uVar28].field_0x4;
                fVar6 = *(float *)&local_1f8.DataPtr[(int)uVar28].field_0x8;
                if ((*(int *)(lVar23 + 0x28) < 1) ||
                   (fVar7 = *(float *)(lVar23 + 0x34), (float)((uint)fVar7 & uVar30) <= fVar32)) {
                  fVar32 = *(float *)(lVar23 + 0x30);
                }
                else {
                  fVar32 = *(float *)(lVar23 + 0x30);
                  pfVar20 = TArrayView<float_const_,int>::operator[]
                                      ((TArrayView<float_const_,int> *)(lVar23 + 0x20),
                                       *(int *)pFVar24 - *(int *)(lVar23 + 0x1d8));
                  fVar32 = fVar7 * *pfVar20 + fVar32;
                  uVar30 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                }
                pFVar15 = local_1e8;
                dVar8 = local_1e8->Solver->LocalSpaceScale;
                if ((*(int *)(lVar23 + 0x28) < 1) ||
                   (fVar7 = *(float *)(lVar23 + 0x34),
                   (float)((uint)fVar7 & uVar30) <= __real_38d1b717)) {
                  fVar33 = *(float *)(lVar23 + 0x30);
                }
                else {
                  fVar33 = *(float *)(lVar23 + 0x30);
                  pfVar20 = TArrayView<float_const_,int>::operator[]
                                      ((TArrayView<float_const_,int> *)(lVar23 + 0x20),
                                       *(int *)(pFVar24 + 4) - *(int *)(lVar23 + 0x1d8));
                  fVar33 = fVar7 * *pfVar20 + fVar33;
                }
                pFVar11 = pFVar15->Solver;
                dVar9 = pFVar11->LocalSpaceScale;
                dVar10 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x8;
                dVar31 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x10;
                local_1b8._s_0.X = (double)fVar4 * dVar9 + *(double *)&pFVar11->LocalSpaceLocation;
                local_1b8._s_0.Y = (double)fVar5 * dVar9 + dVar10;
                local_1b8._s_0.Z = (double)fVar6 * dVar9 + dVar31;
                local_1a0._s_0.X = (double)fVar34 * dVar9 + *(double *)&pFVar11->LocalSpaceLocation;
                local_1a0._s_0.Y = (double)fVar2 * dVar9 + dVar10;
                local_1a0._s_0.Z = (double)fVar3 * dVar9 + dVar31;
                DrawTaperedCylinder(local_1d0,(TVector<double> *)&local_1a0._s_0,
                                    (TVector<double> *)&local_1b8._s_0,(double)fVar32 * dVar8,
                                    (double)fVar33 * dVar9,6,&FLinearColor::Gray);
                fVar32 = __real_38d1b717;
                uVar30 = __xmm_7fffffff7fffffff7fffffff7fffffff;
              }
              fVar34 = __real_3a83126f;
            }
            uVar17 = 0;
            if (0 < iVar14) {
              lVar29 = 0;
              lVar25 = 0;
              do {
                uVar27 = 0;
                if ((int)uVar17 < local_1e0.ArrayNum) {
                  uVar27 = ~uVar17 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar16)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                if (*(float *)(lVar25 + (longlong)local_1e0.DataPtr) != 0.0) {
                  uVar27 = 0;
                  if ((int)uVar17 < iVar14) {
                    uVar27 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar16)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  fVar2 = *(float *)(&(local_1f8.DataPtr)->field_0x0 + lVar29);
                  fVar3 = *(float *)(&(local_1f8.DataPtr)->field_0x4 + lVar29);
                  fVar4 = *(float *)(&(local_1f8.DataPtr)->field_0x8 + lVar29);
                  if ((*(int *)(lVar23 + 0x28) < 1) ||
                     (fVar5 = *(float *)(lVar23 + 0x34), (float)((uint)fVar5 & uVar30) <= fVar32)) {
                    fVar32 = *(float *)(lVar23 + 0x30);
                  }
                  else {
                    fVar32 = *(float *)(lVar23 + 0x30);
                    pfVar20 = TArrayView<float_const_,int>::operator[]
                                        ((TArrayView<float_const_,int> *)(lVar23 + 0x20),
                                         (uVar17 - *(int *)(lVar23 + 0x1d8)) + uVar26);
                    fVar32 = fVar5 * *pfVar20 + fVar32;
                  }
                  pFVar11 = local_1e8->Solver;
                  dVar8 = pFVar11->LocalSpaceScale;
                  dVar9 = *(double *)&pFVar11->LocalSpaceLocation;
                  dVar31 = (double)fVar3 * dVar8 +
                           *(double *)&(pFVar11->LocalSpaceLocation).field_0x8;
                  dVar10 = *(double *)&(pFVar11->LocalSpaceLocation).field_0x10;
                  pTVar21 = UE::Math::TRotator<double>::Quaternion
                                      (&UE::Math::TRotator<double>::ZeroRotator,&local_168);
                  local_188 = pTVar21->X;
                  dStack_180 = pTVar21->Y;
                  local_178 = pTVar21->Z;
                  dStack_170 = pTVar21->W;
                  local_148.Translation.ZW.m128d_f64[1] = 0.0;
                  local_148.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar31,0);
                  local_148.Translation.XY.m128d_f64[0] = (double)fVar2 * dVar8 + dVar9;
                  local_148.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar31 >> 0x20);
                  local_148.Scale3D.ZW.m128d_f64[1] = 0.0;
                  local_148.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
                  local_148.Scale3D.XY.m128d_f64[0] = dVar8;
                  local_148.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
                  local_148.Rotation.XY.m128d_f64[0] = local_188;
                  local_148.Rotation.XY.m128d_f64[1] = dStack_180;
                  local_148.Rotation.ZW.m128d_f64[0] = local_178;
                  local_148.Rotation.ZW.m128d_f64[1] = dStack_170;
                  local_148.Translation.ZW.m128d_f64[0] = (double)fVar4 * dVar8 + dVar10;
                  local_148.Scale3D.ZW.m128d_f64[0] = dVar8;
                  DrawWireSphere(local_1d0,&local_148,&FLinearColor::Gray,(double)fVar32,6,
                                 -(Chaos::Private::bDrawInForeground != false) & 2,0.0,fVar34,false)
                  ;
                }
                uVar17 = uVar17 + 1;
                lVar25 = lVar25 + 4;
                lVar29 = lVar29 + 0xc;
                fVar32 = __real_38d1b717;
                uVar30 = __xmm_7fffffff7fffffff7fffffff7fffffff;
              } while ((int)uVar17 < iVar14);
            }
          }
        }
        pFVar24 = local_1c8 + 8;
        this = local_1e8;
        local_1c8 = pFVar24;
      } while (pFVar24 != local_1c0);
    }
  }
  return;
}

// DrawSelfIntersection @ 14dbeaa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawSelfIntersection
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  FClothingSimulationCloth *this_00;
  FClothingSimulationSolver *pFVar7;
  FPBDEvolution *pFVar8;
  FEvolution *pFVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FSolverParticles *pFVar17;
  TVector<float,3> *pTVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>
  *pTVar25;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar26;
  FTriangleMesh *pFVar27;
  FDebugDrawQueue *pFVar28;
  FDebugDrawQueue *pFVar29;
  FPrimitiveDrawInterface *pFVar30;
  longlong lVar31;
  FLinearColor *pFVar32;
  int iVar33;
  ulonglong uVar34;
  double dVar35;
  double dVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  ulonglong uVar40;
  uint *puVar41;
  uint *puVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  float fVar59;
  undefined4 uVar60;
  undefined1 auStackY_d38 [32];
  undefined1 local_d07 [7];
  double local_d00;
  TVector<float,3> *local_cf8;
  undefined8 uStack_cf0;
  FClothVisualizationNoGC *local_ce8;
  FTriangleMesh *local_ce0;
  double local_cd8;
  FPrimitiveDrawInterface *local_cd0;
  double local_cc8;
  double local_cc0;
  undefined4 local_cb8;
  undefined4 local_cb4;
  undefined4 local_cb0;
  undefined4 local_cac;
  undefined4 local_ca8;
  undefined4 local_ca4;
  double local_ca0;
  FClothingSimulationCloth **local_c98;
  double local_c90;
  FClothingSimulationCloth **local_c88;
  FClothVisualizationNoGC *local_c80;
  FPrimitiveDrawInterface *local_c78;
  TVector<float,3> **local_c70;
  undefined1 local_c68 [16];
  double local_c58;
  undefined1 local_c50 [16];
  double local_c40;
  TArrayView<Chaos::FClothingSimulationCloth_const_*_const,int> local_c38;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_c28;
  TVector<double>_u_0 local_c18;
  TVector<double>_u_0 local_c00;
  TVector<double>_u_0 local_be8;
  double local_bc0;
  double local_bb8;
  undefined1 local_bb0 [16];
  double local_ba0;
  undefined1 local_b98 [16];
  double local_b88;
  undefined1 local_b80 [16];
  FTriangleMesh *local_b70;
  undefined1 local_b68 [16];
  FTriangleMesh *local_b58;
  undefined1 local_b50 [16];
  double local_b40;
  undefined1 local_b38 [2] [16];
  FTriangleMesh *local_b10;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_b08;
  TVector<double>_u_0 local_af8;
  double local_ae0;
  double local_ad8;
  double local_ad0;
  undefined4 local_ac8;
  undefined1 local_ac0;
  undefined4 local_ab8;
  byte local_ab4;
  undefined4 local_ab0;
  void *local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined4 local_950;
  TVector<double>_u_0 local_948;
  double local_930;
  double local_928;
  double local_920;
  undefined4 local_918;
  undefined1 local_910;
  undefined4 local_908;
  byte local_904;
  undefined4 local_900;
  void *local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined4 local_7a0;
  TVector<double>_u_0 local_798;
  double local_780;
  undefined1 local_778 [16];
  undefined4 local_768;
  undefined1 local_760;
  undefined4 local_758;
  byte local_754;
  undefined4 local_750;
  void *local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined4 local_5f0;
  TVector<double>_u_0 local_5e8;
  double local_5d0;
  undefined1 local_5c8 [16];
  undefined4 local_5b8;
  undefined1 local_5b0;
  undefined4 local_5a8;
  byte local_5a4;
  undefined4 local_5a0;
  void *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_440;
  TVector<double>_u_0 local_438 [2];
  undefined4 local_408;
  undefined1 local_400;
  undefined4 local_3f8;
  byte local_3f4;
  undefined4 local_3f0;
  void *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_290;
  TVector<double>_u_0 local_288 [2];
  undefined4 local_258;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_d38;
  if (this->Solver != (FClothingSimulationSolver *)0x0) {
    local_ce8 = this;
    local_cd0 = param_1;
    FClothingSimulationSolver::GetCloths(this->Solver,&local_c38);
    local_c88 = local_c38.DataPtr + local_c38.ArrayNum;
    if (local_c38.DataPtr != local_c88) {
      uVar54 = (undefined4)__real_3ff0000000000000;
      uVar55 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      fVar47 = __real_40a00000;
      fVar49 = __real_322bcc77;
      fVar53 = __real_3f800000;
      fVar56 = __real_3eaaaaab;
      fVar59 = __real_3f000000;
      do {
        this_00 = *local_c38.DataPtr;
        local_c98 = local_c38.DataPtr;
        uVar22 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (uVar22 != 0xffffffff) {
          pTVar25 = TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>,0>,FDefaultSetAllocator>
                            *)&this->Solver->ClothsConstraints,uVar22);
          if ((pTVar25 ==
               (TTuple<int,TUniquePtr<Chaos::FClothConstraints,TDefaultDelete<Chaos::FClothConstraints>_>_>
                *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L""), bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          dVar36 = *(double *)(*(longlong *)&pTVar25->field_0x8 + 0xf0);
          local_cd8 = dVar36;
          if (dVar36 != 0.0) {
            pFVar7 = this->Solver;
            pFVar8 = (pFVar7->PBDEvolution).Ptr;
            if (pFVar8 == (FPBDEvolution *)0x0) {
              pTVar26 = FClothingSimulationSolver::GetParticleXsView(pFVar7,&local_b08,uVar22);
            }
            else {
              pFVar9 = (pFVar7->Evolution).Ptr;
              pFVar17 = &pFVar9->Particles;
              if (pFVar9 == (FEvolution *)0x0) {
                pFVar17 = &pFVar8->MParticles;
              }
              iVar33 = (int)(&pFVar17->_padding_)[2];
              local_c28.DataPtr = (TVector<float,3> *)(&pFVar17->_padding_)[1];
              if ((iVar33 < 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              local_c28.ArrayNum = iVar33;
              pTVar26 = &local_c28;
            }
            local_cf8 = pTVar26->DataPtr;
            uStack_cf0 = *(undefined8 *)&pTVar26->ArrayNum;
            uVar37 = 0;
            if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
              uVar37 = uVar22;
            }
            local_cc8 = (double)CONCAT44(local_cc8._4_4_,uVar37);
            pFVar27 = FClothingSimulationCloth::GetTriangleMesh(this_00,this->Solver);
            local_ce0 = pFVar27;
            if ((*(int *)((longlong)dVar36 + 0x4f0) != *(int *)((longlong)dVar36 + 0x500)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContourPoints.Num() == ContourTypes.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                    ,0xb47,L""), bVar19)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar22 = 0;
            iVar33 = *(int *)((longlong)dVar36 + 0x4f0);
            lVar31 = 0;
            local_c78 = local_cd0;
            local_c70 = &local_cf8;
            local_c80 = this;
            if (0 < iVar33) {
              lVar39 = 0;
              do {
                uVar37 = 0;
                if ((int)uVar22 < iVar33) {
                  uVar37 = ~uVar22 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar10 = *(longlong *)((longlong)dVar36 + 0x4e8);
                uVar37 = 0;
                if ((int)uVar22 < *(int *)((longlong)dVar36 + 0x500)) {
                  uVar37 = ~uVar22 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                `Chaos::FClothVisualizationNoGC::DrawSelfIntersection'::__l15::<lambda_1>::
                operator()(&local_c80,
                           (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
                            *)(lVar10 + lVar39),
                           ColorsForType +
                           *(char *)(lVar31 + *(longlong *)((longlong)dVar36 + 0x4f8)));
                iVar33 = *(int *)((longlong)dVar36 + 0x4f0);
                uVar22 = uVar22 + 1;
                lVar31 = lVar31 + 1;
                lVar39 = lVar39 + 0x10;
              } while ((int)uVar22 < iVar33);
              pFVar27 = local_ce0;
              uVar37 = local_cc8._0_4_;
            }
            iVar33 = *(int *)((longlong)dVar36 + 0x520);
            uVar22 = 0;
            if (0 < iVar33) {
              do {
                uVar38 = 0;
                if ((int)uVar22 < iVar33) {
                  uVar38 = ~uVar22 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                `Chaos::FClothVisualizationNoGC::DrawSelfIntersection'::__l15::<lambda_1>::
                operator()(&local_c80,
                           (TArray<Chaos::Softs::FPBDTriangleMeshCollisions::FBarycentricPoint,TSizedDefaultAllocator<32>_>
                            *)((longlong)(int)uVar22 * 0x10 +
                              *(longlong *)((longlong)dVar36 + 0x518)),&Orange);
                iVar33 = *(int *)((longlong)dVar36 + 0x520);
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < iVar33);
            }
            if ((*(char *)((longlong)dVar36 + 0x2e9) != '\0') &&
               (*(int *)((longlong)dVar36 + 0x4c8) == *(int *)((longlong)dVar36 + 0x2e4))) {
              lVar31 = *(longlong *)((longlong)dVar36 + 0x4c0) +
                       (longlong)*(int *)((longlong)dVar36 + 0x2e0) * -8;
              iVar33 = *(int *)((longlong)dVar36 + 0x2e0) + *(int *)((longlong)dVar36 + 0x2e4);
              local_d00 = (double)CONCAT44(local_d00._4_4_,iVar33);
              if (iVar33 < 0) {
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L"");
                if (bVar19) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              else if (iVar33 == 0) goto LAB_14dbeb1d2;
              if ((int)uVar37 < iVar33) {
                lVar39 = (longlong)(int)uVar37;
                dVar35 = (double)(lVar39 * 0xc);
                do {
                  local_cc0 = dVar35;
                  if (((int)uVar37 < 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  if (*(int *)(lVar31 + lVar39 * 8) != 0) {
                    if (((int)uVar37 < 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar19)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    if (((*(byte *)(lVar31 + lVar39 * 8) & 1) == 0) ||
                       (bVar19 = true, (*(byte *)(lVar31 + 4 + lVar39 * 8) & 1) == 0)) {
                      bVar19 = false;
                    }
                    if (((int)uVar37 < 0) &&
                       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar20)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    if (((*(byte *)(lVar31 + lVar39 * 8) & 1) == 0) ||
                       ((*(byte *)(lVar31 + 4 + lVar39 * 8) & 1) != 0)) {
                      bVar20 = false;
                    }
                    else {
                      bVar20 = true;
                    }
                    if (((int)uVar37 < 0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar21)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    uVar22 = *(uint *)(lVar31 + lVar39 * 8);
                    if (((int)uVar37 < 0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar21)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    uVar22 = ~*(uint *)(lVar31 + 4 + lVar39 * 8) & uVar22;
                    if (((int)uVar37 < 0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar21)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    uVar38 = *(uint *)(lVar31 + lVar39 * 8);
                    if (((int)uVar37 < 0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar21)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    if (bVar19) {
                      pFVar32 = &Red;
                    }
                    else if (bVar20) {
                      pFVar32 = &Blue;
                    }
                    else if ((uVar22 == 0) || ((*(uint *)(lVar31 + 4 + lVar39 * 8) & uVar38) == 0))
                    {
                      pFVar32 = &Black;
                      if (uVar22 != 0) {
                        pFVar32 = &White;
                      }
                    }
                    else {
                      pFVar32 = &Gray;
                    }
                    uVar22 = 0;
                    if ((int)local_cc8._0_4_ < (int)uStack_cf0) {
                      uVar22 = ~uVar37 >> 0x1f;
                    }
                    if ((uVar22 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar19)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    dVar35 = local_cc0;
                    pFVar7 = local_ce8->Solver;
                    dVar36 = pFVar7->LocalSpaceScale;
                    local_c18._s_0.X =
                         (double)*(float *)(&local_cf8->field_0x0 + (longlong)local_cc0) * dVar36 +
                         *(double *)&pFVar7->LocalSpaceLocation;
                    local_c18._s_0.Y =
                         (double)*(float *)(&local_cf8->field_0x4 + (longlong)local_cc0) * dVar36 +
                         *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
                    local_c18._s_0.Z =
                         (double)*(float *)(&local_cf8->field_0x8 + (longlong)local_cc0) * dVar36 +
                         *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
                    DrawPoint(local_cd0,(TVector<double> *)&local_c18._s_0,pFVar32,(UMaterial *)0x0,
                              fVar47);
                    iVar33 = local_d00._0_4_;
                  }
                  dVar35 = (double)((longlong)dVar35 + 0xc);
                  uVar37 = local_cc8._0_4_ + 1;
                  lVar39 = lVar39 + 1;
                  local_cc8 = (double)CONCAT44(local_cc8._4_4_,uVar37);
                  pFVar27 = local_ce0;
                  dVar36 = local_cd8;
                  local_cc0 = dVar35;
                } while ((int)uVar37 < iVar33);
              }
            }
LAB_14dbeb1d2:
            iVar33 = *(int *)((longlong)dVar36 + 0x4d8);
            if ((iVar33 == (pFVar27->MElements).ArrayNum) && (uVar34 = 0, 0 < iVar33)) {
              local_d00 = 0.0;
              uVar40 = uVar34;
              do {
                dVar35 = local_d00;
                uVar38 = (uint)uVar40;
                uVar37 = ~uVar38 >> 0x1f;
                uVar22 = 0;
                if ((int)uVar38 < iVar33) {
                  uVar22 = uVar37;
                }
                if ((uVar22 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if (*(int *)(*(longlong *)((longlong)dVar36 + 0x4d0) + uVar34 * 8) != 0) {
                  uVar22 = 0;
                  if ((int)uVar38 < *(int *)((longlong)dVar36 + 0x4d8)) {
                    uVar22 = uVar37;
                  }
                  if ((uVar22 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  if (((*(byte *)(*(longlong *)((longlong)dVar36 + 0x4d0) + uVar34 * 8) & 1) == 0)
                     || ((*(byte *)(*(longlong *)((longlong)dVar36 + 0x4d0) + 4 + uVar34 * 8) & 1)
                         == 0)) {
                    bVar19 = false;
                  }
                  else {
                    bVar19 = true;
                  }
                  uVar22 = 0;
                  if ((int)uVar38 < *(int *)((longlong)dVar36 + 0x4d8)) {
                    uVar22 = uVar37;
                  }
                  if ((uVar22 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar22 = *(uint *)(*(longlong *)((longlong)dVar36 + 0x4d0) + uVar34 * 8);
                  uVar23 = 0;
                  if ((int)uVar38 < *(int *)((longlong)dVar36 + 0x4d8)) {
                    uVar23 = uVar37;
                  }
                  if ((uVar23 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar22 = ~*(uint *)(*(longlong *)((longlong)dVar36 + 0x4d0) + 4 + uVar34 * 8) &
                           uVar22;
                  uVar23 = 0;
                  if ((int)uVar38 < *(int *)((longlong)dVar36 + 0x4d8)) {
                    uVar23 = uVar37;
                  }
                  if ((uVar23 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar23 = *(uint *)(*(longlong *)((longlong)dVar36 + 0x4d0) + uVar34 * 8);
                  uVar24 = 0;
                  if ((int)uVar38 < *(int *)((longlong)dVar36 + 0x4d8)) {
                    uVar24 = uVar37;
                  }
                  if ((uVar24 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar27 = local_ce0;
                  if (bVar19) {
                    pFVar32 = &Red;
                  }
                  else if ((uVar22 == 0) ||
                          ((*(uint *)(*(longlong *)((longlong)dVar36 + 0x4d0) + 4 + uVar34 * 8) &
                           uVar23) == 0)) {
                    pFVar32 = &Black;
                    if (uVar22 != 0) {
                      pFVar32 = &White;
                    }
                  }
                  else {
                    pFVar32 = &Gray;
                  }
                  uVar22 = 0;
                  if ((int)uVar38 < (local_ce0->MElements).ArrayNum) {
                    uVar22 = uVar37;
                  }
                  if ((uVar22 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  dVar35 = local_d00;
                  uVar22 = *(uint *)((pFVar27->MElements).AllocatorInstance.Data +
                                    (longlong)local_d00 + 4);
                  uVar23 = 0;
                  if ((int)uVar22 < (int)uStack_cf0) {
                    uVar23 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar7 = local_ce8->Solver;
                  dVar36 = pFVar7->LocalSpaceScale;
                  local_c00._s_0.X =
                       (double)*(float *)(local_cf8 + (int)uVar22) * dVar36 +
                       *(double *)&pFVar7->LocalSpaceLocation;
                  local_c00._s_0.Y =
                       (double)*(float *)&local_cf8[(int)uVar22].field_0x4 * dVar36 +
                       *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
                  uVar23 = 0;
                  if ((int)uVar38 < (pFVar27->MElements).ArrayNum) {
                    uVar23 = uVar37;
                  }
                  local_c00._s_0.Z =
                       (double)*(float *)&local_cf8[(int)uVar22].field_0x8 * dVar36 +
                       *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
                  if ((uVar23 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar22 = *(uint *)((pFVar27->MElements).AllocatorInstance.Data + (longlong)dVar35)
                  ;
                  uVar23 = 0;
                  if ((int)uVar22 < (int)uStack_cf0) {
                    uVar23 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar7 = local_ce8->Solver;
                  dVar36 = pFVar7->LocalSpaceScale;
                  local_be8._s_0.X =
                       (double)*(float *)(local_cf8 + (int)uVar22) * dVar36 +
                       *(double *)&pFVar7->LocalSpaceLocation;
                  local_be8._s_0.Y =
                       (double)*(float *)&local_cf8[(int)uVar22].field_0x4 * dVar36 +
                       *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
                  local_be8._s_0.Z =
                       (double)*(float *)&local_cf8[(int)uVar22].field_0x8 * dVar36 +
                       *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
                  Chaos::DrawLine(local_cd0,(TVector<double> *)&local_be8._s_0,
                                  (TVector<double> *)&local_c00._s_0,pFVar32);
                  uVar22 = 0;
                  if ((int)uVar38 < (pFVar27->MElements).ArrayNum) {
                    uVar22 = uVar37;
                  }
                  if ((uVar22 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar22 = *(uint *)((pFVar27->MElements).AllocatorInstance.Data +
                                    (longlong)dVar35 + 8);
                  uVar23 = 0;
                  if ((int)uVar22 < (int)uStack_cf0) {
                    uVar23 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar4 = *(undefined8 *)&local_cf8[(int)uVar22].field_0x4;
                  pFVar7 = local_ce8->Solver;
                  fVar47 = *(float *)(local_cf8 + (int)uVar22);
                  dVar36 = pFVar7->LocalSpaceScale;
                  uVar22 = 0;
                  if ((int)uVar38 < (pFVar27->MElements).ArrayNum) {
                    uVar22 = uVar37;
                  }
                  dVar16 = *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
                  dVar5 = *(double *)&pFVar7->LocalSpaceLocation;
                  dVar15 = (double)(float)((ulonglong)uVar4 >> 0x20) * dVar36 +
                           *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
                  if ((uVar22 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar22 = *(uint *)((pFVar27->MElements).AllocatorInstance.Data +
                                    (longlong)dVar35 + 4);
                  uVar23 = 0;
                  if ((int)uVar22 < (int)uStack_cf0) {
                    uVar23 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar7 = local_ce8->Solver;
                  dVar6 = pFVar7->LocalSpaceScale;
                  dVar12 = (double)*(float *)(local_cf8 + (int)uVar22) * dVar6 +
                           *(double *)&pFVar7->LocalSpaceLocation;
                  dVar13 = (double)*(float *)&local_cf8[(int)uVar22].field_0x4 * dVar6 +
                           *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
                  uVar45 = (undefined4)((ulonglong)dVar13 >> 0x20);
                  dVar6 = (double)*(float *)&local_cf8[(int)uVar22].field_0x8 * dVar6 +
                          *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
                  local_c68._8_8_ = dVar13;
                  local_c68._0_8_ = dVar12;
                  local_c58 = dVar6;
                  if (local_cd0 == (FPrimitiveDrawInterface *)0x0) {
                    pFVar28 = FDebugDrawQueue::GetInstance();
                    bVar19 = Chaos::Private::bDrawInForeground != false;
                    FLinearColor::ToFColorSRGB(pFVar32);
                    pFVar29 = FDebugDrawQueue::GetInstance();
                    pFVar27 = local_ce0;
                    dVar35 = local_d00;
                    if ((pFVar29->bEnableDebugDrawing != false) &&
                       (pFVar29 = FDebugDrawQueue::GetInstance(), pFVar27 = local_ce0,
                       dVar35 = local_d00, 0 < pFVar29->NumConsumers)) {
                      pFVar1 = &pFVar28->CommandQueueCS;
                      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::ReportNotNullPtr();
                      }
                      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                      local_c68._8_4_ = SUB84(dVar13,0);
                      local_c68._12_4_ = uVar45;
                      local_bb0._8_4_ = SUB84(dVar13,0);
                      local_bb0._0_8_ = dVar12;
                      local_bb0._12_4_ = uVar45;
                      local_ba0 = local_c58;
                      bVar20 = FDebugDrawQueue::AcceptCommand
                                         (pFVar28,1,(TVector<double,3> *)local_bb0);
                      if (bVar20) {
                        local_6d0 = (void *)0x0;
                        local_6c8 = 0;
                        local_6c0 = 0;
                        local_768 = local_cb8;
                        local_778._8_4_ = SUB84(dVar15,0);
                        local_778._0_8_ = (double)(float)uVar4 * dVar36 + dVar16;
                        local_778._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                        local_760 = 0;
                        local_758 = 0x38d1b717;
                        local_750 = 0;
                        local_5f0 = 1;
                        local_798._s_0.X = dVar12;
                        local_798._s_0.Y = dVar13;
                        local_798._s_0.Z = dVar6;
                        local_780 = (double)fVar47 * dVar36 + dVar5;
                        local_754 = -bVar19 & 2;
                        FDebugDrawQueue::AddCommand(pFVar28,(FLatentDrawCommand *)&local_798._s_0);
                        if (local_6d0 != (void *)0x0) {
                          FMemory::Free(local_6d0);
                        }
                      }
                      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                      pFVar27 = local_ce0;
                      dVar35 = local_d00;
                    }
                  }
                  uVar22 = 0;
                  if ((int)uVar38 < (pFVar27->MElements).ArrayNum) {
                    uVar22 = uVar37;
                  }
                  if ((uVar22 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar22 = *(uint *)((pFVar27->MElements).AllocatorInstance.Data +
                                    (longlong)dVar35 + 8);
                  uVar23 = 0;
                  if ((int)uVar22 < (int)uStack_cf0) {
                    uVar23 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar4 = *(undefined8 *)&local_cf8[(int)uVar22].field_0x4;
                  pFVar7 = local_ce8->Solver;
                  fVar47 = *(float *)(local_cf8 + (int)uVar22);
                  dVar5 = pFVar7->LocalSpaceScale;
                  uVar22 = 0;
                  if ((int)uVar38 < (pFVar27->MElements).ArrayNum) {
                    uVar22 = uVar37;
                  }
                  dVar6 = *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
                  dVar15 = *(double *)&pFVar7->LocalSpaceLocation;
                  dVar16 = (double)(float)((ulonglong)uVar4 >> 0x20) * dVar5 +
                           *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
                  if ((uVar22 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar22 = *(uint *)((pFVar27->MElements).AllocatorInstance.Data + (longlong)dVar35)
                  ;
                  uVar37 = 0;
                  if ((int)uVar22 < (int)uStack_cf0) {
                    uVar37 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar37 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar7 = local_ce8->Solver;
                  dVar36 = pFVar7->LocalSpaceScale;
                  dVar12 = (double)*(float *)(local_cf8 + (int)uVar22) * dVar36 +
                           *(double *)&pFVar7->LocalSpaceLocation;
                  dVar13 = (double)*(float *)&local_cf8[(int)uVar22].field_0x4 * dVar36 +
                           *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
                  uVar45 = (undefined4)((ulonglong)dVar13 >> 0x20);
                  dVar14 = (double)*(float *)&local_cf8[(int)uVar22].field_0x8 * dVar36 +
                           *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
                  local_c50._8_8_ = dVar13;
                  local_c50._0_8_ = dVar12;
                  dVar36 = local_cd8;
                  local_c40 = dVar14;
                  if (local_cd0 == (FPrimitiveDrawInterface *)0x0) {
                    pFVar28 = FDebugDrawQueue::GetInstance();
                    bVar19 = Chaos::Private::bDrawInForeground != false;
                    FLinearColor::ToFColorSRGB(pFVar32);
                    pFVar29 = FDebugDrawQueue::GetInstance();
                    dVar36 = local_cd8;
                    dVar35 = local_d00;
                    if ((pFVar29->bEnableDebugDrawing != false) &&
                       (pFVar29 = FDebugDrawQueue::GetInstance(), dVar36 = local_cd8,
                       dVar35 = local_d00, 0 < pFVar29->NumConsumers)) {
                      pFVar1 = &pFVar28->CommandQueueCS;
                      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::ReportNotNullPtr();
                      }
                      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                      local_c50._8_4_ = SUB84(dVar13,0);
                      local_c50._12_4_ = uVar45;
                      local_b98._8_4_ = SUB84(dVar13,0);
                      local_b98._0_8_ = dVar12;
                      local_b98._12_4_ = uVar45;
                      local_b88 = local_c40;
                      bVar20 = FDebugDrawQueue::AcceptCommand
                                         (pFVar28,1,(TVector<double,3> *)local_b98);
                      if (bVar20) {
                        local_5b8 = local_ca4;
                        local_520 = (void *)0x0;
                        local_518 = 0;
                        local_510 = 0;
                        local_5c8._8_4_ = SUB84(dVar16,0);
                        local_5c8._0_8_ = (double)(float)uVar4 * dVar5 + dVar6;
                        local_5c8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
                        local_5b0 = 0;
                        local_5a8 = 0x38d1b717;
                        local_5a0 = 0;
                        local_440 = 1;
                        local_5e8._s_0.X = dVar12;
                        local_5e8._s_0.Y = dVar13;
                        local_5e8._s_0.Z = dVar14;
                        local_5d0 = (double)fVar47 * dVar5 + dVar15;
                        local_5a4 = -bVar19 & 2;
                        FDebugDrawQueue::AddCommand(pFVar28,(FLatentDrawCommand *)&local_5e8._s_0);
                        if (local_520 != (void *)0x0) {
                          FMemory::Free(local_520);
                        }
                      }
                      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                      dVar36 = local_cd8;
                      dVar35 = local_d00;
                    }
                  }
                }
                iVar33 = *(int *)((longlong)dVar36 + 0x4d8);
                local_d00 = (double)((longlong)dVar35 + 0xc);
                uVar40 = (ulonglong)(uVar38 + 1);
                uVar34 = uVar34 + 1;
                fVar49 = __real_322bcc77;
              } while ((int)(uVar38 + 1) < iVar33);
            }
            iVar33 = *(int *)((longlong)dVar36 + 0x4b8);
            puVar41 = *(uint **)((longlong)dVar36 + 0x4b0);
            puVar42 = puVar41 + (longlong)iVar33 * 0xb;
            uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
            while( true ) {
              if (*(int *)((longlong)dVar36 + 0x4b8) != iVar33) {
                local_d07[0] = 0;
                `TCheckedPointerIterator<Chaos::Softs::FPBDTriangleMeshCollisions::FContourMinimizationIntersection_const_,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_d07);
                uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
              }
              this = local_ce8;
              fVar47 = __real_40a00000;
              if (puVar41 == puVar42) break;
              fVar47 = (float)puVar41[8];
              fVar2 = (float)puVar41[9];
              fVar3 = (float)puVar41[10];
              fVar44 = fVar47 * fVar47 + fVar2 * fVar2 + fVar3 * fVar3;
              fVar43 = SQRT(fVar44);
              fVar50 = (float)uVar45;
              fVar51 = (float)uVar48;
              fVar52 = (float)uVar46;
              if (fVar49 < fVar43) {
                fVar49 = fVar53 / fVar43;
                fVar50 = fVar49 * fVar3;
                fVar51 = fVar49 * fVar47;
                fVar52 = fVar49 * fVar2;
              }
              uVar22 = *puVar41;
              dVar35 = (double)fVar43;
              uVar37 = 0;
              if ((int)uVar22 < (int)uStack_cf0) {
                uVar37 = ~uVar22 >> 0x1f;
              }
              local_bb8 = (double)CONCAT44(uVar55,uVar54) / SQRT((double)(fVar44 + fVar53));
              local_d00 = (double)fVar51 * dVar35 * local_bb8;
              local_cc8 = (double)fVar52 * dVar35 * local_bb8;
              local_ca0 = (double)fVar50 * dVar35 * local_bb8;
              if ((uVar37 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                 uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                 uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pTVar18 = local_cf8;
              uVar37 = puVar41[1];
              uVar38 = 0;
              if ((int)uVar37 < (int)uStack_cf0) {
                uVar38 = ~uVar37 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                 uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                 uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar38 = puVar41[2];
              pFVar7 = local_ce8->Solver;
              dVar35 = pFVar7->LocalSpaceScale;
              dVar5 = (double)((*(float *)(pTVar18 + (int)uVar22) +
                               *(float *)(local_cf8 + (int)uVar37)) * fVar59) * dVar35 +
                      *(double *)&pFVar7->LocalSpaceLocation;
              local_cc0 = (double)((*(float *)&local_cf8[(int)uVar37].field_0x4 +
                                   *(float *)&pTVar18[(int)uVar22].field_0x4) * fVar59) * dVar35 +
                          *(double *)&(pFVar7->LocalSpaceLocation).field_0x8;
              local_ce0 = (FTriangleMesh *)
                          ((double)((*(float *)&local_cf8[(int)uVar37].field_0x8 +
                                    *(float *)&pTVar18[(int)uVar22].field_0x8) * fVar59) * dVar35 +
                          *(double *)&(pFVar7->LocalSpaceLocation).field_0x10);
              uVar22 = 0;
              if ((int)uVar38 < (int)uStack_cf0) {
                uVar22 = ~uVar38 >> 0x1f;
              }
              local_c90 = dVar5;
              local_b10 = local_ce0;
              if ((uVar22 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                 uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                 uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pTVar18 = local_cf8;
              uVar22 = puVar41[3];
              uVar37 = 0;
              if ((int)uVar22 < (int)uStack_cf0) {
                uVar37 = ~uVar22 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                 uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                 uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar37 = puVar41[4];
              fVar47 = *(float *)(pTVar18 + (int)uVar38);
              fVar49 = *(float *)&local_cf8[(int)uVar22].field_0x8;
              fVar53 = *(float *)&local_cf8[(int)uVar22].field_0x4;
              fVar59 = *(float *)(local_cf8 + (int)uVar22);
              fVar2 = *(float *)&pTVar18[(int)uVar38].field_0x8;
              fVar3 = *(float *)&pTVar18[(int)uVar38].field_0x4;
              uVar22 = 0;
              if ((int)uVar37 < (int)uStack_cf0) {
                uVar22 = ~uVar37 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                 uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                 uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar27 = local_b10;
              dVar15 = local_cc0;
              pFVar30 = local_cd0;
              pFVar7 = local_ce8->Solver;
              dVar35 = pFVar7->LocalSpaceScale;
              uVar54 = SUB84(local_cc0,0);
              uVar55 = (undefined4)((ulonglong)local_cc0 >> 0x20);
              local_cd8 = (double)((fVar49 + fVar2 + *(float *)&local_cf8[(int)uVar37].field_0x8) *
                                  fVar56) * dVar35 +
                          *(double *)&(pFVar7->LocalSpaceLocation).field_0x10;
              dVar16 = (double)((fVar47 + fVar59 + *(float *)(local_cf8 + (int)uVar37)) * fVar56) *
                       dVar35 + *(double *)&pFVar7->LocalSpaceLocation;
              dVar35 = (double)((fVar53 + fVar3 + *(float *)&local_cf8[(int)uVar37].field_0x4) *
                               fVar56) * dVar35 + *(double *)&(pFVar7->LocalSpaceLocation).field_0x8
              ;
              uVar60 = (undefined4)((ulonglong)dVar35 >> 0x20);
              local_bc0 = local_cd8;
              if (local_cd0 == (FPrimitiveDrawInterface *)0x0) {
                pFVar28 = FDebugDrawQueue::GetInstance();
                bVar19 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&Green);
                pFVar29 = FDebugDrawQueue::GetInstance();
                uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                if ((pFVar29->bEnableDebugDrawing != false) &&
                   (pFVar29 = FDebugDrawQueue::GetInstance(),
                   uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                   uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                   uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
                   0 < pFVar29->NumConsumers)) {
                  pFVar1 = &pFVar28->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_b70 = pFVar27;
                  local_b80._8_4_ = uVar54;
                  local_b80._0_8_ = dVar5;
                  local_b80._12_4_ = uVar55;
                  bVar20 = FDebugDrawQueue::AcceptCommand(pFVar28,1,(TVector<double,3> *)local_b80);
                  if (bVar20) {
                    local_370 = (void *)0x0;
                    local_368 = 0;
                    local_360 = 0;
                    local_400 = 0;
                    local_290 = 0;
                    local_438[0]._s_0.Y = dVar15;
                    local_438[0]._s_0.Z = local_ce0;
                    local_408 = local_cb4;
                    local_3f8 = 0x38d1b717;
                    local_3f0 = 0x40000000;
                    local_438[0]._0_8_ = dVar5;
                    local_3f4 = -bVar19 & 2;
                    FDebugDrawQueue::AddCommand(pFVar28,(FLatentDrawCommand *)&local_438[0]._s_0);
                    if (local_370 != (void *)0x0) {
                      FMemory::Free(local_370);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  pFVar30 = local_cd0;
                  uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                  uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                  uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                }
              }
              dVar6 = local_d00 + dVar5;
              dVar15 = local_cc8 + dVar15;
              dVar12 = local_ca0 + (double)local_ce0;
              if (pFVar30 == (FPrimitiveDrawInterface *)0x0) {
                pFVar28 = FDebugDrawQueue::GetInstance();
                bVar19 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&Green);
                pFVar29 = FDebugDrawQueue::GetInstance();
                if ((pFVar29->bEnableDebugDrawing != false) &&
                   (pFVar29 = FDebugDrawQueue::GetInstance(), 0 < pFVar29->NumConsumers)) {
                  pFVar1 = &pFVar28->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_b58 = pFVar27;
                  local_b68._8_4_ = uVar54;
                  local_b68._0_8_ = dVar5;
                  local_b68._12_4_ = uVar55;
                  bVar20 = FDebugDrawQueue::AcceptCommand(pFVar28,1,(TVector<double,3> *)local_b68);
                  if (bVar20) {
                    local_af8._s_0.X = local_c90;
                    local_a30 = (void *)0x0;
                    local_a28 = 0;
                    local_a20 = 0;
                    local_af8._s_0.Z = (double)local_ce0;
                    local_af8._s_0.Y = local_cc0;
                    local_ac8 = local_cb0;
                    local_ac0 = 0;
                    local_ab8 = 0x38d1b717;
                    local_ab0 = 0;
                    local_950 = 1;
                    local_ae0 = dVar6;
                    local_ad8 = dVar15;
                    local_ad0 = dVar12;
                    local_ab4 = -bVar19 & 2;
                    FDebugDrawQueue::AddCommand(pFVar28,(FLatentDrawCommand *)&local_af8._s_0);
                    if (local_a30 != (void *)0x0) {
                      FMemory::Free(local_a30);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
                pFVar28 = FDebugDrawQueue::GetInstance();
                bVar19 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&Green);
                pFVar29 = FDebugDrawQueue::GetInstance();
                uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                if ((pFVar29->bEnableDebugDrawing == false) ||
                   (pFVar29 = FDebugDrawQueue::GetInstance(),
                   uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                   uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                   uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
                   pFVar29->NumConsumers < 1)) goto LAB_14dbec560;
                pFVar1 = &pFVar28->CommandQueueCS;
                if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::ReportNotNullPtr();
                }
                EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                uVar57 = SUB84(local_bc0,0);
                uVar58 = (undefined4)((ulonglong)local_bc0 >> 0x20);
                local_b40 = local_bc0;
                local_b50._8_4_ = SUB84(dVar35,0);
                local_b50._0_8_ = dVar16;
                local_b50._12_4_ = uVar60;
                bVar20 = FDebugDrawQueue::AcceptCommand(pFVar28,1,(TVector<double,3> *)local_b50);
                uVar54 = SUB84(local_cd8,0);
                uVar55 = (undefined4)((ulonglong)local_cd8 >> 0x20);
                if (bVar20) {
                  local_1c0 = (void *)0x0;
                  local_1b8 = 0;
                  local_1b0 = 0;
                  local_250 = 0;
                  local_e0 = 0;
                  local_288[0]._16_8_ = local_cd8;
                  local_258 = local_cac;
                  local_248 = 0x38d1b717;
                  local_240 = 0x40000000;
                  local_288[0]._0_8_ = dVar16;
                  local_288[0]._8_8_ = dVar35;
                  local_244 = -bVar19 & 2;
                  FDebugDrawQueue::AddCommand(pFVar28,(FLatentDrawCommand *)&local_288[0]._s_0);
                  if (local_1c0 != (void *)0x0) {
                    FMemory::Free(local_1c0);
                  }
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
              }
              else {
LAB_14dbec560:
                uVar57 = SUB84(local_bc0,0);
                uVar58 = (undefined4)((ulonglong)local_bc0 >> 0x20);
                uVar54 = SUB84(local_cd8,0);
                uVar55 = (undefined4)((ulonglong)local_cd8 >> 0x20);
              }
              dVar5 = dVar16 - local_d00;
              dVar15 = dVar35 - local_cc8;
              dVar6 = (double)CONCAT44(uVar55,uVar54) - local_ca0;
              if (local_cd0 == (FPrimitiveDrawInterface *)0x0) {
                pFVar28 = FDebugDrawQueue::GetInstance();
                bVar19 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB(&Green);
                pFVar29 = FDebugDrawQueue::GetInstance();
                uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                if ((pFVar29->bEnableDebugDrawing != false) &&
                   (pFVar29 = FDebugDrawQueue::GetInstance(),
                   uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                   uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                   uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
                   0 < pFVar29->NumConsumers)) {
                  pFVar1 = &pFVar28->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_b38[1]._4_4_ = uVar58;
                  local_b38[1]._0_4_ = uVar57;
                  local_b38[0]._8_4_ = SUB84(dVar35,0);
                  local_b38[0]._0_8_ = dVar16;
                  local_b38[0]._12_4_ = uVar60;
                  bVar20 = FDebugDrawQueue::AcceptCommand(pFVar28,1,(TVector<double,3> *)local_b38);
                  if (bVar20) {
                    local_880 = (void *)0x0;
                    local_878 = 0;
                    local_870 = 0;
                    local_918 = local_ca8;
                    local_948._s_0.Z = (double)CONCAT44(uVar55,uVar54);
                    local_910 = 0;
                    local_908 = 0x38d1b717;
                    local_900 = 0;
                    local_7a0 = 1;
                    local_948._s_0.X = dVar16;
                    local_948._s_0.Y = dVar35;
                    local_930 = dVar5;
                    local_928 = dVar15;
                    local_920 = dVar6;
                    local_904 = -bVar19 & 2;
                    FDebugDrawQueue::AddCommand(pFVar28,(FLatentDrawCommand *)&local_948._s_0);
                    if (local_880 != (void *)0x0) {
                      FMemory::Free(local_880);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                  uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
                  uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                }
              }
              puVar41 = puVar41 + 0xb;
              uVar54 = (undefined4)__real_3ff0000000000000;
              uVar55 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              fVar49 = __real_322bcc77;
              fVar53 = __real_3f800000;
              fVar56 = __real_3eaaaaab;
              fVar59 = __real_3f000000;
            }
          }
        }
        local_c38.DataPtr = local_c98 + 1;
      } while (local_c38.DataPtr != local_c88);
    }
  }
  return;
}

// DrawTeleportReset @ 14dbedaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawTeleportReset
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FClothingSimulationSolver *pFVar6;
  FClothingSimulationCloth *this_00;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  FTriangleMesh *pFVar18;
  FDebugDrawQueue *pFVar19;
  FDebugDrawQueue *pFVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_708 [32];
  ulonglong local_6e8;
  longlong local_6e0;
  int local_6d8;
  FLinearColor_u_0 local_6d0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_6c0;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  FClothVisualizationNoGC *local_6a0;
  FScriptContainerElement *local_698;
  FPrimitiveDrawInterface *local_690;
  FScriptContainerElement *local_688;
  undefined1 local_680 [16];
  double local_670;
  undefined1 local_668 [16];
  double local_658;
  undefined1 local_650 [16];
  double local_640;
  double local_628;
  double local_610;
  double local_5f8;
  TVector<double>_u_0 local_5e8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  undefined4 local_5b8;
  undefined1 local_5b0;
  undefined4 local_5a8;
  byte local_5a4;
  undefined4 local_5a0;
  void *local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_440;
  TVector<double>_u_0 local_438;
  double local_420;
  double local_418;
  double local_410;
  undefined4 local_408;
  undefined1 local_400;
  undefined4 local_3f8;
  byte local_3f4;
  undefined4 local_3f0;
  void *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_290;
  TVector<double>_u_0 local_288;
  double local_270;
  double local_268;
  double local_260;
  undefined4 local_258;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_708;
  pFVar6 = this->Solver;
  if (pFVar6 != (FClothingSimulationSolver *)0x0) {
    iVar17 = (pFVar6->Cloths).ArrayNum;
    pFVar25 = (pFVar6->Cloths).AllocatorInstance.Data;
    local_6a0 = this;
    local_698 = pFVar25;
    local_690 = param_1;
    if ((iVar17 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_688 = pFVar25 + (longlong)iVar17 * 8;
    fVar28 = __real_3f800000;
    fVar29 = __real_3f000000;
    if (pFVar25 != local_688) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar25;
        iVar17 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (iVar17 != -1) {
          fVar2 = this_00->TimeSinceLastReset;
          local_6d0._s_0.A = 1.0;
          if (this_00->TimeSinceLastTeleport < fVar2) {
            local_6d0._s_0.G = 1.0;
            if (this_00->TimeSinceLastTeleport == 0.0) {
              local_6d0._s_0.B = 0.0;
              local_6d0._s_0.R = local_6d0._s_0.B;
            }
            else {
              local_6d0._s_0.B = fVar2 + fVar2 + fVar29;
              if (fVar28 <= local_6d0._s_0.B) {
                local_6d0._s_0.B = fVar28;
              }
              local_6d0._s_0.R = local_6d0._s_0.B;
              if (local_6d0._s_0.B <= 0.0) {
                local_6d0._s_0.B = 0.0;
                local_6d0._s_0.R = local_6d0._s_0.B;
              }
            }
          }
          else {
            local_6d0._s_0.R = 1.0;
            if (fVar2 == 0.0) {
              local_6d0._s_0.B = 0.0;
              local_6d0._s_0.G = 0.0;
            }
            else {
              local_6d0._s_0.B = fVar2 + fVar2 + fVar29;
              if (fVar28 <= local_6d0._s_0.B) {
                local_6d0._s_0.B = fVar28;
              }
              local_6d0._s_0.G = local_6d0._s_0.B;
              if (local_6d0._s_0.B <= 0.0) {
                local_6d0._s_0.B = 0.0;
                local_6d0._s_0.G = local_6d0._s_0.B;
              }
            }
          }
          iVar23 = 0;
          if ((this->Solver->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
            iVar23 = iVar17;
          }
          local_6d8 = iVar23;
          pFVar18 = FClothingSimulationCloth::GetTriangleMesh(this_00,this->Solver);
          iVar17 = (pFVar18->MElements).ArrayNum;
          pFVar24 = (pFVar18->MElements).AllocatorInstance.Data;
          if ((iVar17 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FClothingSimulationCloth::GetParticlePositions(this_00,&local_6c0,this->Solver);
          iVar14 = local_6c0.ArrayNum;
          uVar27 = 0;
          if (0 < iVar17) {
            pFVar24 = pFVar24 + 8;
            do {
              if (((int)uVar27 < 0) &&
                 (local_6e8 = uVar27, local_6e0 = (longlong)iVar17,
                 bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar21 = *(int *)(pFVar24 + -8) - iVar23;
              uVar26 = 0;
              if ((int)uVar21 < iVar14) {
                uVar26 = ~uVar21 >> 0x1f;
              }
              if (uVar26 == 0) {
                local_6e0 = (longlong)iVar14;
                local_6e8 = (ulonglong)(int)uVar21;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar15) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              pFVar6 = this->Solver;
              uVar22 = *(int *)(pFVar24 + -4) - iVar23;
              dVar3 = pFVar6->LocalSpaceScale;
              uVar26 = 0;
              if ((int)uVar22 < iVar14) {
                uVar26 = ~uVar22 >> 0x1f;
              }
              dVar13 = (double)*(float *)&local_6c0.DataPtr[(int)uVar21].field_0x8 * dVar3 +
                       *(double *)&(pFVar6->LocalSpaceLocation).field_0x10;
              dVar12 = (double)*(float *)(local_6c0.DataPtr + (int)uVar21) * dVar3 +
                       *(double *)&pFVar6->LocalSpaceLocation;
              dVar3 = (double)*(float *)&local_6c0.DataPtr[(int)uVar21].field_0x4 * dVar3 +
                      *(double *)&(pFVar6->LocalSpaceLocation).field_0x8;
              local_628 = dVar13;
              if (uVar26 == 0) {
                local_6e0 = (longlong)iVar14;
                local_6e8 = (ulonglong)(int)uVar22;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar15) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              pFVar6 = this->Solver;
              uVar21 = *(int *)pFVar24 - iVar23;
              dVar4 = pFVar6->LocalSpaceScale;
              uVar26 = 0;
              if ((int)uVar21 < iVar14) {
                uVar26 = ~uVar21 >> 0x1f;
              }
              dVar11 = (double)*(float *)&local_6c0.DataPtr[(int)uVar22].field_0x8 * dVar4 +
                       *(double *)&(pFVar6->LocalSpaceLocation).field_0x10;
              dVar10 = (double)*(float *)(local_6c0.DataPtr + (int)uVar22) * dVar4 +
                       *(double *)&pFVar6->LocalSpaceLocation;
              dVar4 = (double)*(float *)&local_6c0.DataPtr[(int)uVar22].field_0x4 * dVar4 +
                      *(double *)&(pFVar6->LocalSpaceLocation).field_0x8;
              local_610 = dVar11;
              if (uVar26 == 0) {
                local_6e0 = (longlong)iVar14;
                local_6e8 = (ulonglong)(int)uVar21;
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar15) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              pFVar6 = this->Solver;
              dVar5 = pFVar6->LocalSpaceScale;
              dVar9 = (double)*(float *)&local_6c0.DataPtr[(int)uVar21].field_0x8 * dVar5 +
                      *(double *)&(pFVar6->LocalSpaceLocation).field_0x10;
              dVar8 = (double)*(float *)(local_6c0.DataPtr + (int)uVar21) * dVar5 +
                      *(double *)&pFVar6->LocalSpaceLocation;
              dVar5 = (double)*(float *)&local_6c0.DataPtr[(int)uVar21].field_0x4 * dVar5 +
                      *(double *)&(pFVar6->LocalSpaceLocation).field_0x8;
              local_5f8 = dVar9;
              if (local_690 == (FPrimitiveDrawInterface *)0x0) {
                pFVar19 = FDebugDrawQueue::GetInstance();
                bVar15 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB((FLinearColor *)&local_6d0._s_0);
                pFVar20 = FDebugDrawQueue::GetInstance();
                if ((pFVar20->bEnableDebugDrawing != false) &&
                   (pFVar20 = FDebugDrawQueue::GetInstance(), 0 < pFVar20->NumConsumers)) {
                  pFVar1 = &pFVar19->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_680._8_4_ = SUB84(dVar3,0);
                  local_680._0_8_ = dVar12;
                  local_680._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
                  local_670 = local_628;
                  bVar16 = FDebugDrawQueue::AcceptCommand(pFVar19,1,(TVector<double,3> *)local_680);
                  if (bVar16) {
                    local_520 = (void *)0x0;
                    local_518 = 0;
                    local_510 = 0;
                    local_5b8 = local_6b0;
                    local_5b0 = 0;
                    local_5a8 = 0x38d1b717;
                    local_5a0 = 0;
                    local_440 = 1;
                    local_5e8._s_0.X = dVar12;
                    local_5e8._s_0.Y = dVar3;
                    local_5e8._s_0.Z = dVar13;
                    local_5d0 = dVar10;
                    local_5c8 = dVar4;
                    local_5c0 = dVar11;
                    local_5a4 = -bVar15 & 2;
                    FDebugDrawQueue::AddCommand(pFVar19,(FLatentDrawCommand *)&local_5e8._s_0);
                    if (local_520 != (void *)0x0) {
                      FMemory::Free(local_520);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
                pFVar19 = FDebugDrawQueue::GetInstance();
                bVar15 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB((FLinearColor *)&local_6d0._s_0);
                pFVar20 = FDebugDrawQueue::GetInstance();
                if ((pFVar20->bEnableDebugDrawing != false) &&
                   (pFVar20 = FDebugDrawQueue::GetInstance(), 0 < pFVar20->NumConsumers)) {
                  pFVar1 = &pFVar19->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_668._8_4_ = SUB84(dVar4,0);
                  local_668._0_8_ = dVar10;
                  local_668._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
                  local_658 = local_610;
                  bVar16 = FDebugDrawQueue::AcceptCommand(pFVar19,1,(TVector<double,3> *)local_668);
                  if (bVar16) {
                    local_370 = (void *)0x0;
                    local_368 = 0;
                    local_360 = 0;
                    local_408 = local_6ac;
                    local_400 = 0;
                    local_3f8 = 0x38d1b717;
                    local_3f0 = 0;
                    local_290 = 1;
                    local_438._s_0.X = dVar10;
                    local_438._s_0.Y = dVar4;
                    local_438._s_0.Z = dVar11;
                    local_420 = dVar8;
                    local_418 = dVar5;
                    local_410 = dVar9;
                    local_3f4 = -bVar15 & 2;
                    FDebugDrawQueue::AddCommand(pFVar19,(FLatentDrawCommand *)&local_438._s_0);
                    if (local_370 != (void *)0x0) {
                      FMemory::Free(local_370);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                }
                pFVar19 = FDebugDrawQueue::GetInstance();
                bVar15 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB((FLinearColor *)&local_6d0._s_0);
                pFVar20 = FDebugDrawQueue::GetInstance();
                this = local_6a0;
                iVar23 = local_6d8;
                if ((pFVar20->bEnableDebugDrawing != false) &&
                   (pFVar20 = FDebugDrawQueue::GetInstance(), this = local_6a0, iVar23 = local_6d8,
                   0 < pFVar20->NumConsumers)) {
                  pFVar1 = &pFVar19->CommandQueueCS;
                  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  local_650._8_4_ = SUB84(dVar5,0);
                  local_650._0_8_ = dVar8;
                  local_650._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
                  local_640 = local_5f8;
                  bVar16 = FDebugDrawQueue::AcceptCommand(pFVar19,1,(TVector<double,3> *)local_650);
                  if (bVar16) {
                    local_1c0 = (void *)0x0;
                    local_1b8 = 0;
                    local_1b0 = 0;
                    local_258 = local_6a8;
                    local_250 = 0;
                    local_248 = 0x38d1b717;
                    local_240 = 0;
                    local_e0 = 1;
                    local_288._s_0.X = dVar8;
                    local_288._s_0.Y = dVar5;
                    local_288._s_0.Z = dVar9;
                    local_270 = dVar12;
                    local_268 = dVar3;
                    local_260 = dVar13;
                    local_244 = -bVar15 & 2;
                    FDebugDrawQueue::AddCommand(pFVar19,(FLatentDrawCommand *)&local_288._s_0);
                    if (local_1c0 != (void *)0x0) {
                      FMemory::Free(local_1c0);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                  this = local_6a0;
                  iVar23 = local_6d8;
                }
              }
              uVar26 = (int)uVar27 + 1;
              uVar27 = (ulonglong)uVar26;
              pFVar24 = pFVar24 + 0xc;
              pFVar25 = local_698;
              fVar28 = __real_3f800000;
              fVar29 = __real_3f000000;
            } while ((int)uVar26 < iVar17);
          }
        }
        pFVar25 = pFVar25 + 8;
        local_698 = pFVar25;
      } while (pFVar25 != local_688);
    }
  }
  return;
}

// DrawWindAndPressureForces @ 14dbee590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FClothVisualizationNoGC::DrawWindAndPressureForces
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1,double param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  FClothingSimulationSolver *pFVar10;
  FClothingSimulationCloth *this_00;
  FPBDEvolution *pFVar11;
  FEvolution *pFVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  float *pfVar16;
  undefined8 uVar17;
  FSolverParticles *pFVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  FClothConstraints *pFVar27;
  FVelocityAndPressureField *this_01;
  TArrayView<float_const_,int> *pTVar28;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar29;
  TVector<float,3> *pTVar30;
  FDebugDrawQueue *this_02;
  FDebugDrawQueue *pFVar31;
  FColor *pFVar32;
  FScriptContainerElement *pFVar33;
  int *piVar34;
  uint uVar35;
  undefined1 auStackY_3c8 [32];
  int iStack_390;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_388;
  undefined4 local_378;
  FScriptContainerElement *local_370;
  FLinearColor_u_0 local_368;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_358;
  FPrimitiveDrawInterface *local_348;
  FScriptContainerElement *local_340;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_338;
  TArrayView<float_const_,int> local_328;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_318;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_308;
  undefined1 local_2f8 [16];
  double local_2e8;
  TVector<float,3> local_2e0 [2];
  double local_2c0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_2b8;
  TArrayView<float_const_,int> local_2a8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_298;
  TVector<double>_u_0 local_288;
  double local_270;
  double local_268;
  double local_260;
  undefined4 local_258;
  undefined1 local_250;
  undefined4 local_248;
  byte local_244;
  undefined4 local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  pFVar10 = this->Solver;
  if (pFVar10 != (FClothingSimulationSolver *)0x0) {
    iVar23 = (pFVar10->Cloths).ArrayNum;
    pFVar33 = (pFVar10->Cloths).AllocatorInstance.Data;
    local_370 = pFVar33;
    local_348 = param_1;
    if ((iVar23 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar21)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    fVar20 = __real_3eaaaaab;
    fVar19 = __real_3b808081;
    local_340 = pFVar33 + (longlong)iVar23 * 8;
    if (pFVar33 != local_340) {
      do {
        this_00 = *(FClothingSimulationCloth **)pFVar33;
        iVar23 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
        if (iVar23 != -1) {
          pFVar10 = this->Solver;
          if ((pFVar10->PBDEvolution).Ptr == (FPBDEvolution *)0x0) {
            pFVar27 = FClothingSimulationSolver::GetClothConstraints(pFVar10,iVar23);
            this_01 = (pFVar27->VelocityAndPressureField).Object;
            if (this_01 == (FVelocityAndPressureField *)0x0) goto LAB_14dbeee25;
          }
          else {
            this_01 = FClothingSimulationSolver::GetWindVelocityAndPressureField
                                (pFVar10,this_00->GroupId);
          }
          pFVar10 = this->Solver;
          pFVar11 = (pFVar10->PBDEvolution).Ptr;
          if (pFVar11 == (FPBDEvolution *)0x0) {
            pTVar29 = FClothingSimulationSolver::GetParticleXsView(pFVar10,&local_2b8,iVar23);
          }
          else {
            pFVar12 = (pFVar10->Evolution).Ptr;
            pFVar18 = &pFVar12->Particles;
            if (pFVar12 == (FEvolution *)0x0) {
              pFVar18 = &pFVar11->MParticles;
            }
            iVar9 = (int)(&pFVar18->_padding_)[2];
            local_338.DataPtr = (TVector<float,3> *)(&pFVar18->_padding_)[1];
            if ((iVar9 < 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar21)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            local_338.ArrayNum = iVar9;
            pTVar29 = &local_338;
          }
          local_388.DataPtr = pTVar29->DataPtr;
          local_388.ArrayNum = pTVar29->ArrayNum;
          local_388._12_4_ = *(undefined4 *)&pTVar29->field_0xc;
          pFVar10 = this->Solver;
          pFVar11 = (pFVar10->PBDEvolution).Ptr;
          if (pFVar11 == (FPBDEvolution *)0x0) {
            pTVar28 = FClothingSimulationSolver::GetParticleInvMassesView(pFVar10,&local_2a8,iVar23)
            ;
          }
          else {
            pFVar12 = (pFVar10->Evolution).Ptr;
            pFVar18 = &pFVar12->Particles;
            if (pFVar12 == (FEvolution *)0x0) {
              pFVar18 = &pFVar11->MParticles;
            }
            iVar9 = (int)(&pFVar18->_padding_)[2];
            local_328.DataPtr = (float *)(&pFVar18->_padding_)[1];
            if ((iVar9 < 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar21)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            local_328.ArrayNum = iVar9;
            pTVar28 = &local_328;
          }
          pfVar16 = pTVar28->DataPtr;
          uVar17 = *(undefined8 *)&pTVar28->ArrayNum;
          pFVar10 = this->Solver;
          pFVar11 = (pFVar10->PBDEvolution).Ptr;
          if (pFVar11 == (FPBDEvolution *)0x0) {
            pTVar29 = FClothingSimulationSolver::GetParticleVsView(pFVar10,&local_298,iVar23);
          }
          else {
            pFVar12 = (pFVar10->Evolution).Ptr;
            pFVar18 = &pFVar12->Particles;
            if (pFVar12 == (FEvolution *)0x0) {
              pFVar18 = &pFVar11->MParticles;
            }
            iVar23 = (int)(&pFVar18->_padding_)[2];
            local_318.DataPtr = (TVector<float,3> *)(&pFVar18->_padding_)[1];
            if ((iVar23 < 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar21)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            local_318.ArrayNum = iVar23;
            pTVar29 = &local_318;
          }
          local_308.DataPtr = pTVar29->DataPtr;
          local_308.ArrayNum = pTVar29->ArrayNum;
          local_308._12_4_ = *(undefined4 *)&pTVar29->field_0xc;
          local_358 = this_01->Elements;
          iStack_390 = (int)uVar17;
          if ((iStack_390 != local_388.ArrayNum) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InvMasses.Num() == Positions.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0xa54,L""), bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((iStack_390 != local_308.ArrayNum) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InvMasses.Num() == Velocities.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothVisualization.cpp"
                                  ,0xa55,L""), bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar35 = 0;
          if (0 < local_358.ArrayNum) {
            piVar34 = &((local_358.DataPtr)->field0_0x0)._s_0.Z;
            do {
              uVar25 = 0;
              if ((int)uVar35 < local_358.ArrayNum) {
                uVar25 = ~uVar35 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar21)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar25 = ((TVector<int,3>_u_0_s_0 *)(piVar34 + -2))->X;
              uVar26 = 0;
              if ((int)uVar25 < local_388.ArrayNum) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar21)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pTVar30 = local_388.DataPtr;
              uVar26 = piVar34[-1];
              uVar24 = 0;
              if ((int)uVar26 < local_388.ArrayNum) {
                uVar24 = ~uVar26 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar21)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar24 = *piVar34;
              fVar1 = *(float *)&pTVar30[(int)uVar25].field_0x8;
              fVar2 = *(float *)&pTVar30[(int)uVar25].field_0x4;
              fVar3 = *(float *)(local_388.DataPtr + (int)uVar26);
              fVar4 = *(float *)&local_388.DataPtr[(int)uVar26].field_0x8;
              fVar5 = *(float *)&local_388.DataPtr[(int)uVar26].field_0x4;
              fVar6 = *(float *)(pTVar30 + (int)uVar25);
              uVar25 = 0;
              if ((int)uVar24 < local_388.ArrayNum) {
                uVar25 = ~uVar24 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar21)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar10 = this->Solver;
              uVar25 = ((TVector<int,3>_u_0_s_0 *)(piVar34 + -2))->X;
              dVar7 = pFVar10->LocalSpaceScale;
              dVar14 = (double)((fVar3 + fVar6 + *(float *)(local_388.DataPtr + (int)uVar24)) *
                               fVar20) * dVar7 + *(double *)&pFVar10->LocalSpaceLocation;
              dVar15 = (double)((fVar2 + fVar5 + *(float *)&local_388.DataPtr[(int)uVar24].field_0x4
                                ) * fVar20) * dVar7 +
                       *(double *)&(pFVar10->LocalSpaceLocation).field_0x8;
              dVar7 = (double)((fVar1 + fVar4 + *(float *)&local_388.DataPtr[(int)uVar24].field_0x8)
                              * fVar20) * dVar7 +
                      *(double *)&(pFVar10->LocalSpaceLocation).field_0x10;
              uVar26 = 0;
              if ((int)uVar25 < iStack_390) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              local_2c0 = dVar7;
              if ((uVar26 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar21)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              fVar1 = pfVar16[(int)uVar25];
              uVar25 = piVar34[-1];
              uVar26 = 0;
              if ((int)uVar25 < iStack_390) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar21)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              fVar2 = pfVar16[(int)uVar25];
              uVar25 = *piVar34;
              uVar26 = 0;
              if ((int)uVar25 < iStack_390) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar21)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if (((fVar1 == 0.0) || (fVar2 == 0.0)) || (pfVar16[(int)uVar25] == 0.0)) {
                bVar21 = true;
              }
              else {
                bVar21 = false;
              }
              pTVar30 = Softs::FVelocityAndPressureField::CalculateForce
                                  (this_01,local_2e0,&local_388,&local_308,uVar35);
              pFVar32 = &FColor::Green;
              dVar8 = this->Solver->LocalSpaceScale;
              if (bVar21) {
                pFVar32 = &FColor::Cyan;
              }
              local_368._s_0.R = FLinearColor::sRGBToLinearTable[(pFVar32->field0_0x0)._s_0.R];
              local_368._s_0.G = FLinearColor::sRGBToLinearTable[(pFVar32->field0_0x0)._s_0.G];
              local_368._s_0.B = FLinearColor::sRGBToLinearTable[(pFVar32->field0_0x0)._s_0.B];
              fVar1 = *(float *)&pTVar30->field_0x8;
              local_368._s_0.A = (float)(pFVar32->field0_0x0)._s_0.A * fVar19;
              fVar2 = *(float *)&pTVar30->field_0x4;
              fVar3 = *(float *)pTVar30;
              if (local_348 == (FPrimitiveDrawInterface *)0x0) {
                this_02 = FDebugDrawQueue::GetInstance();
                bVar21 = Chaos::Private::bDrawInForeground != false;
                FLinearColor::ToFColorSRGB((FLinearColor *)&local_368._s_0);
                pFVar31 = FDebugDrawQueue::GetInstance();
                if ((pFVar31->bEnableDebugDrawing != false) &&
                   (pFVar31 = FDebugDrawQueue::GetInstance(), 0 < pFVar31->NumConsumers)) {
                  lpCriticalSection = &this_02->CommandQueueCS;
                  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::ReportNotNullPtr();
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  local_2f8._8_4_ = SUB84(dVar15,0);
                  local_2f8._0_8_ = dVar14;
                  local_2f8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                  local_2e8 = local_2c0;
                  bVar22 = FDebugDrawQueue::AcceptCommand(this_02,1,(TVector<double,3> *)local_2f8);
                  if (bVar22) {
                    local_1c0 = (void *)0x0;
                    local_1b8 = 0;
                    local_1b0 = 0;
                    local_258 = local_378;
                    local_250 = 0;
                    local_248 = 0x38d1b717;
                    local_240 = 0;
                    local_e0 = 1;
                    local_288._s_0.X = dVar14;
                    local_288._s_0.Y = dVar15;
                    local_288._s_0.Z = dVar7;
                    local_270 = (double)(float)((double)fVar3 * param_2) * dVar8 + dVar14;
                    local_268 = (double)(float)((double)fVar2 * param_2) * dVar8 + dVar15;
                    local_260 = (double)(float)((double)fVar1 * param_2) * dVar8 + dVar7;
                    local_244 = -bVar21 & 2;
                    FDebugDrawQueue::AddCommand(this_02,(FLatentDrawCommand *)&local_288._s_0);
                    if (local_1c0 != (void *)0x0) {
                      FMemory::Free(local_1c0);
                    }
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                }
              }
              uVar35 = uVar35 + 1;
              piVar34 = piVar34 + 3;
            } while ((int)uVar35 < local_358.ArrayNum);
          }
        }
LAB_14dbeee25:
        pFVar33 = local_370 + 8;
        local_370 = pFVar33;
      } while (pFVar33 != local_340);
    }
  }
  return;
}

// DrawWindVelocity @ 14dbeeef0

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
Chaos::FClothVisualizationNoGC::DrawWindVelocity
          (FClothVisualizationNoGC *this,FPrimitiveDrawInterface *param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FClothingSimulationSolver *pFVar3;
  FClothingSimulationCloth *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FClothConstraints *pFVar7;
  FVelocityAndPressureField *pFVar8;
  FScriptContainerElement *pFVar9;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  pFVar3 = this->Solver;
  if (pFVar3 != (FClothingSimulationSolver *)0x0) {
    pFVar9 = (pFVar3->Cloths).AllocatorInstance.Data;
    iVar6 = (pFVar3->Cloths).ArrayNum;
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = pFVar9 + (longlong)iVar6 * 8;
    for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
      this_00 = *(FClothingSimulationCloth **)pFVar9;
      iVar6 = FClothingSimulationCloth::GetParticleRangeId(this_00,this->Solver);
      if (iVar6 != -1) {
        pFVar3 = this->Solver;
        if ((pFVar3->PBDEvolution).Ptr == (FPBDEvolution *)0x0) {
          pFVar7 = FClothingSimulationSolver::GetClothConstraints(pFVar3,iVar6);
          pFVar8 = (pFVar7->VelocityAndPressureField).Object;
        }
        else {
          pFVar8 = FClothingSimulationSolver::GetWindVelocityAndPressureField
                             (pFVar3,this_00->GroupId);
        }
        if (pFVar8 != (FVelocityAndPressureField *)0x0) {
          local_30._s_0.X = (double)*(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x20;
          local_30._s_0.Y = (double)*(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x28;
          local_30._s_0.Z = (double)*(undefined8 *)&(this_00->ReferenceSpaceTransform).field_0x30;
          dVar2 = this->Solver->LocalSpaceScale;
          local_48._s_0.X = (double)*(float *)&pFVar8->Velocity * dVar2 * param_2 + local_30._s_0.X;
          local_48._s_0.Y =
               (double)*(float *)&(pFVar8->Velocity).field_0x4 * dVar2 * param_2 + local_30._s_0.Y;
          local_48._s_0.Z =
               (double)*(float *)&(pFVar8->Velocity).field_0x8 * dVar2 * param_2 + local_30._s_0.Z;
          DrawArrow(param_1,(TVector<double> *)&local_30._s_0,(TVector<double> *)&local_48._s_0,
                    &FLinearColor::Blue);
        }
      }
    }
  }
  return;
}

// SetSolver @ 14dc193b0

void __thiscall
Chaos::FClothVisualizationNoGC::SetSolver
          (FClothVisualizationNoGC *this,FClothingSimulationSolver *param_1)

{
  this->Solver = param_1;
  return;
}

