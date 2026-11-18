// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 51

// FPhysInterface_Chaos @ 14824f500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPhysInterface_Chaos * __thiscall
FPhysInterface_Chaos::FPhysInterface_Chaos(FPhysInterface_Chaos *this,AWorldSettings *param_1)

{
  *this = (FPhysInterface_Chaos)&___7FPhysInterface_Chaos__6B_;
  return this;
}

// ~FPhysInterface_Chaos @ 148252b60

void __thiscall FPhysInterface_Chaos::~FPhysInterface_Chaos(FPhysInterface_Chaos *this)

{
  *this = (FPhysInterface_Chaos)&___7FPhysInterface_Chaos__6B_;
  return;
}

// operator() @ 148255280

void __thiscall
`FPhysInterface_Chaos::GetSquaredDistanceToBody'::__l2::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  undefined1 (*pauVar1) [16];
  double *pdVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  FImplicitObject *pFVar13;
  ForAnyElementType this_00;
  FPhysicsShapeReference_Chaos *pFVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 local_res8 [8];
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_88 [16];
  double local_78;
  
  **(undefined1 **)this = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  FBodyInstance::GetAllShapes_AssumesLocked
            ((FBodyInstance *)**(undefined8 **)((longlong)this + 8),&local_b8);
  iVar11 = local_b8.ArrayNum;
  pFVar14 = (FPhysicsShapeReference_Chaos *)
            (local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 0x10);
  this_00.Data = local_b8.AllocatorInstance.Data;
  do {
    if (local_b8.ArrayNum != iVar11) {
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FPhysicsShapeReference_Chaos *)this_00.Data == pFVar14) goto LAB_148255534;
    if (((FPhysicsShapeReference_Chaos *)this_00.Data)->Shape != (FPerShapeData *)0x0) {
      bVar12 = FBodyInstance::IsShapeBoundToBody
                         ((FBodyInstance *)**(undefined8 **)((longlong)this + 0x10),
                          (FPhysicsShapeReference_Chaos *)this_00.Data);
      if (bVar12) {
        FChaosEngineInterface::GetShapeType((FPhysicsShapeReference_Chaos *)this_00.Data);
        pFVar13 = FPhysicsShapeReference_Chaos::GetGeometry
                            ((FPhysicsShapeReference_Chaos *)this_00.Data);
        if (pFVar13->bIsConvex != false) {
          **(undefined1 **)((longlong)this + 0x18) = 1;
          pFVar13 = (((FPhysicsShapeReference_Chaos *)this_00.Data)->Shape->Geometry).Reference;
          local_88 = **(undefined1 (**) [16])((longlong)this + 0x20);
          local_78 = *(double *)(*(undefined1 (**) [16])((longlong)this + 0x20))[1];
          dVar15 = (double)(**(code **)(pFVar13->_padding_ + 0x80))(pFVar13,local_88,&local_a8);
          fVar19 = (float)dVar15;
          if (fVar19 <= 0.0) {
            **(undefined4 **)((longlong)this + 0x28) = 0;
            puVar4 = (undefined8 *)**(longlong **)((longlong)this + 0x30);
            if (puVar4 != (undefined8 *)0x0) {
              puVar5 = *(undefined8 **)((longlong)this + 0x38);
              uVar10 = puVar5[1];
              *puVar4 = *puVar5;
              puVar4[1] = uVar10;
              puVar4[2] = puVar5[2];
            }
LAB_148255534:
            if ((FPhysicsShapeReference_Chaos *)local_b8.AllocatorInstance.Data !=
                (FPhysicsShapeReference_Chaos *)0x0) {
              FMemory::Free(local_b8.AllocatorInstance.Data);
            }
            return;
          }
          if (fVar19 < **(float **)((longlong)this + 0x40)) {
            **(float **)((longlong)this + 0x40) = fVar19;
            **(float **)((longlong)this + 0x28) = fVar19 * fVar19;
            pauVar1 = (undefined1 (*) [16])**(longlong **)((longlong)this + 0x30);
            if (pauVar1 != (undefined1 (*) [16])0x0) {
              pdVar2 = *(double **)((longlong)this + 0x20);
              dVar15 = (double)fVar19;
              dVar8 = *pdVar2 - local_a8 * dVar15;
              dVar23 = pdVar2[1] - local_a0 * dVar15;
              pauVar3 = *(undefined1 (**) [16])((longlong)this + 0x48);
              local_78 = pdVar2[2] - local_98 * dVar15;
              local_88 = *pauVar3;
              dVar9 = *(double *)(pauVar3[1] + 8);
              uVar28 = (undefined4)((ulonglong)dVar23 >> 0x20);
              auVar24 = *pauVar3;
              auVar29._8_4_ = SUB84(dVar23,0);
              auVar29._0_8_ = dVar8;
              auVar29._12_4_ = uVar28;
              auVar27 = pauVar3[1];
              dVar15 = auVar27._0_8_;
              auVar20 = blendpd(local_88,auVar27,2);
              auVar30._0_8_ = auVar29._8_8_ * local_88._0_8_ - local_88._8_8_ * dVar8;
              auVar30._8_8_ = local_78 * local_88._8_8_ - dVar15 * dVar23;
              auVar16._8_4_ = SUB84(dVar23,0);
              auVar16._0_8_ = dVar8;
              auVar16._12_4_ = uVar28;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = local_78;
              auVar17 = blendpd(auVar16,auVar17,2);
              auVar18._0_8_ = auVar17._0_8_ * dVar15 - auVar20._0_8_ * local_78;
              auVar18._8_8_ = auVar17._8_8_ * auVar27._8_8_ - auVar20._8_8_ * 0.0;
              auVar17 = blendpd(auVar30,auVar18,2);
              dVar6 = auVar30._8_8_ + auVar30._8_8_;
              dVar7 = auVar18._0_8_ + auVar18._0_8_;
              uVar28 = (undefined4)((ulonglong)dVar7 >> 0x20);
              auVar31._0_8_ = auVar17._0_8_ + auVar17._0_8_;
              auVar31._8_8_ = auVar17._8_8_ + auVar17._8_8_;
              auVar25._8_4_ = SUB84(dVar7,0);
              auVar25._0_8_ = dVar6;
              auVar25._12_4_ = uVar28;
              auVar21._8_4_ = SUB84(dVar7,0);
              auVar21._0_8_ = dVar6;
              auVar21._12_4_ = uVar28;
              auVar17 = blendpd(auVar21,auVar31,2);
              auVar26._0_8_ = auVar25._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar6;
              auVar26._8_8_ = auVar31._0_8_ * auVar24._8_8_ - dVar15 * dVar7;
              auVar20._8_4_ = SUB84(auVar26._8_8_,0);
              auVar20._0_8_ = auVar26._0_8_;
              auVar20._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
              auVar24 = blendpd(auVar24,auVar27,2);
              auVar22._0_8_ = auVar17._0_8_ * dVar15 - auVar24._0_8_ * auVar31._0_8_;
              auVar22._8_8_ = auVar17._8_8_ * auVar27._8_8_ - auVar24._8_8_ * auVar31._8_8_;
              auVar27 = blendpd(auVar26,auVar22,2);
              dVar7 = dVar7 * dVar9 + dVar23 + auVar22._0_8_ + *(double *)(pauVar3[2] + 8);
              dVar15 = *(double *)pauVar3[3];
              auVar24._8_4_ = SUB84(dVar7,0);
              auVar24._0_8_ = dVar6 * dVar9 + dVar8 + auVar20._8_8_ + *(double *)pauVar3[2];
              auVar24._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
              *pauVar1 = auVar24;
              *(double *)pauVar1[1] = auVar31._0_8_ * dVar9 + local_78 + auVar27._0_8_ + dVar15;
            }
          }
        }
      }
    }
    this_00.Data = this_00.Data + 0x10;
  } while( true );
}

// operator() @ 148256a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148256d91) */
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
`FPhysInterface_Chaos::Sweep_Geom'::__l7::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  double *pdVar4;
  double *pdVar5;
  FSingleParticlePhysicsProxy *pFVar6;
  TGeometryParticle<double,3> *pTVar7;
  TGeometryParticle<double,3> *pTVar8;
  TVector<double> *pTVar9;
  TVector<double> *pTVar10;
  FHitResult *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  bool bVar26;
  uchar uVar27;
  int iVar28;
  uint uVar29;
  UObject *pUVar30;
  TQuat<double> *pTVar31;
  FCollisionFilterData *pFVar32;
  FConvex *this_00;
  TBox<double,3> *pTVar33;
  FCapsule *pFVar34;
  FConvex *pFVar35;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar36;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar37;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar38;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar39;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar40;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar41;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar42;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar43;
  TImplicitObjectTransformed<double,3,1> *pTVar44;
  UWorld *pUVar45;
  FPerShapeData *this_01;
  ulonglong uVar46;
  uint uVar47;
  ulonglong uVar48;
  FPhysicsShapeReference_Chaos *pFVar49;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStackY_6d8 [32];
  float local_678;
  int local_674;
  FPerShapeData *local_670;
  longlong local_668;
  <lambda_1> local_660;
  FCollisionFilterData local_618;
  double local_608;
  UActorComponent *local_600;
  TVector<double>_u_0 local_5f8;
  FLocationHit local_5d8;
  double local_558;
  double dStack_550;
  double local_548;
  double local_540;
  double dStack_538;
  double local_530;
  TVector<double,3> local_528;
  FPhysicsShapeAdapter_Chaos local_508;
  TTransform<double> local_4d8;
  TTransform<double> local_478;
  TTransform<double> local_418;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  TTransform<double> local_358;
  TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_2f8;
  ulonglong local_e8;
  ForElementType<FPhysicsShapeReference_Chaos> FVar50;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  if ((*param_1 != (FSingleParticlePhysicsProxy *)0x0) &&
     (pUVar30 = FWeakObjectPtr::Get((FWeakObjectPtr *)(**(longlong **)this + 0x150)),
     pUVar30 != (UObject *)0x0)) {
    FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
              (&local_508,*(TQuat<double> **)((longlong)this + 8),
               *(FCollisionShape **)((longlong)this + 0x10));
    pdVar4 = *(double **)((longlong)this + 0x18);
    pdVar5 = *(double **)((longlong)this + 0x20);
    pFVar6 = *param_1;
    dVar17 = *pdVar4 - *pdVar5;
    dVar16 = pdVar4[1] - pdVar5[1];
    dVar15 = pdVar4[2] - pdVar5[2];
    auVar51._0_8_ = dVar17 * dVar17;
    auVar51._8_8_ = 0;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = dVar16 * dVar16 + auVar51._0_8_ + dVar15 * dVar15;
    auVar52 = sqrtpd(auVar51,auVar52);
    local_678 = (float)auVar52._0_8_;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar6);
    pTVar7 = (pFVar6->Particle).Ptr;
    pFVar6 = *param_1;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar6);
    dVar24 = _UNK_150689688;
    dVar23 = ___xmm_3ff00000000000003ff0000000000000;
    dVar22 = _UNK_150689518;
    dVar21 = ___xmm_00000000000000003ff0000000000000;
    pTVar8 = (pFVar6->Particle).Ptr;
    dVar19 = *(double *)&(pTVar7->MXR).Property.MX;
    dVar20 = *(double *)&(pTVar7->MXR).Property.MX.field_0x8;
    dVar2 = *(double *)&(pTVar7->MXR).Property.MX.field_0x10;
    fVar1 = *(float *)&(pTVar8->MXR).Property.MR;
    uVar3 = *(undefined8 *)&(pTVar8->MXR).Property.MR.field_0x8;
    dVar18 = (double)(float)((ulonglong)uVar3 >> 0x20);
    dVar14 = (double)*(float *)&(pTVar8->MXR).Property.MR.field_0x4;
    local_600 = (UActorComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(**(longlong **)this + 0x150));
    pdVar4 = *(double **)((longlong)this + 0x20);
    pTVar31 = FPhysicsShapeAdapter_Chaos::GetGeomOrientation(&local_508);
    local_418.Rotation.ZW.m128d_f64[0] = pTVar31->Z;
    local_418.Rotation.ZW.m128d_f64[1] = pTVar31->W;
    local_418.Rotation.XY.m128d_f64[0] = pTVar31->X;
    local_418.Rotation.XY.m128d_f64[1] = pTVar31->Y;
    local_418.Translation.XY.m128d_f64[0] = *pdVar4;
    local_418.Translation.XY.m128d_f64[1] = pdVar4[1];
    local_418.Translation.ZW.m128d_f64[0] = pdVar4[2];
    local_418.Translation.ZW.m128d_f64[1] = 0.0;
    local_418.Scale3D.XY.m128d_f64[0] = dVar23;
    local_418.Scale3D.XY.m128d_f64[1] = dVar24;
    local_418.Scale3D.ZW.m128d_f64[0] = dVar21;
    local_418.Scale3D.ZW.m128d_f64[1] = dVar22;
    if (local_678 <= 0.0) {
      local_5f8._s_0.Z = 0.0;
      local_5f8._s_0.Y = 0.0;
      local_5f8._s_0.X = __real_3ff0000000000000;
    }
    else {
      dVar13 = __real_3ff0000000000000 / (double)local_678;
      local_5f8._s_0.Z = dVar15 * dVar13;
      local_5f8._s_0.Y = dVar16 * dVar13;
      local_5f8._s_0.X = dVar17 * dVar13;
    }
    uVar46 = 0;
    local_5d8.Flags.HitFlags = None;
    local_5d8._padding_ = 0;
    local_5d8._padding_ = 0;
    local_2f8.AllocatorInstance.SecondaryData = (ForElementType<FPhysicsShapeReference_Chaos>)0x0;
    local_2f8.ArrayNum = 0;
    local_5d8._padding_ = 0;
    local_5d8._padding_._0_4_ = 0xffffffff;
    local_5d8._padding_._0_4_ = 0xffffffff;
    local_5d8.Distance = 3.4028235e+38;
    local_2f8.ArrayMax = 0x20;
    iVar28 = FillInlineShapeArray_AssumesLocked(&local_2f8,param_1);
    local_668 = (longlong)iVar28;
    uVar48 = uVar46;
    if (0 < iVar28) {
      do {
        uVar47 = (uint)uVar46;
        uVar29 = 0;
        if ((int)uVar47 < local_2f8.ArrayNum) {
          uVar29 = ~uVar47 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar50 = (ForElementType<FPhysicsShapeReference_Chaos>)&local_2f8;
        if (local_2f8.AllocatorInstance.SecondaryData !=
            (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
          FVar50 = local_2f8.AllocatorInstance.SecondaryData;
        }
        pFVar49 = (FPhysicsShapeReference_Chaos *)((longlong)FVar50 + uVar48);
        local_670 = pFVar49->Shape;
        if ((local_670 == (FPerShapeData *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shape",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysInterface_Chaos.cpp"
                                ,0x41a,L""), bVar26)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        bVar26 = FBodyInstance::IsShapeBoundToBody
                           ((FBodyInstance *)**(undefined8 **)((longlong)this + 0x28),pFVar49);
        if (!bVar26) goto LAB_148257295;
        if (local_670->Type == 0) {
          this_01 = (FPerShapeData *)&local_670[1].field_0x8;
        }
        else {
          this_01 = local_670 + 1;
        }
        pFVar32 = Chaos::FCollisionData::GetQueryData((FCollisionData *)this_01);
        uVar46._0_4_ = pFVar32->Word2;
        uVar46._4_4_ = pFVar32->Word3;
        if (**(char **)((longlong)this + 0x30) == '\0') {
          if ((uVar46 & 0x100000000) != 0) goto LAB_148256dc8;
          goto LAB_148257295;
        }
        if ((uVar46 & 0x200000000) == 0) goto LAB_148257295;
LAB_148256dc8:
        this_00 = (FConvex *)FPhysicsShapeAdapter_Chaos::GetGeometry(&local_508);
        local_4d8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar14,0);
        local_4d8.Rotation.XY.m128d_f64[0] = (double)fVar1;
        local_4d8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar14 >> 0x20);
        local_660.Shape = &local_670;
        local_4d8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar18,0);
        local_4d8.Rotation.ZW.m128d_f64[0] = (double)(float)uVar3;
        local_4d8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
        local_660.StartTM = &local_418;
        local_660.Dir = (TVector<double,3> *)&local_5f8;
        local_660.DeltaMag = &local_678;
        local_660.Distance = &local_608;
        local_660.WorldPosition = (TVector<double,3> *)&local_558;
        local_660.WorldNormal = (TVector<double,3> *)&local_540;
        local_660.FaceIdx = &local_674;
        local_660.FaceNormal = &local_528;
        local_4d8.Translation.ZW.m128d_f64[1] = 0.0;
        local_4d8.Scale3D.XY.m128d_f64[0] = dVar23;
        local_4d8.Scale3D.XY.m128d_f64[1] = dVar24;
        local_4d8.Scale3D.ZW.m128d_f64[0] = dVar21;
        local_4d8.Scale3D.ZW.m128d_f64[1] = dVar22;
        local_4d8.Translation.XY.m128d_f64[0] = dVar19;
        local_4d8.Translation.XY.m128d_f64[1] = dVar20;
        local_4d8.Translation.ZW.m128d_f64[0] = dVar2;
        uVar27 = Chaos::FImplicitObject::GetType((FImplicitObject *)this_00);
        switch(uVar27) {
        case '\x01':
          pFVar35 = this_00;
          goto LAB_148256e8e;
        default:
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                              ,0x7a,L"");
          if (bVar26) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        case '\0':
          pFVar35 = this_00;
          if (((uchar)this_00->_padding_ != '\0') &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("T_DERIVED::StaticType() == Type",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                                  ,0xbb,L""), bVar26)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          goto LAB_1482570fc;
        case '\x03':
          pFVar35 = this_00;
          goto LAB_148256eaf;
        case '\x04':
          pTVar44 = Chaos::FImplicitObject::
                    GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                              ((FImplicitObject *)this_00);
          local_478.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_478.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_478.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_478.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_478.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_478.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_478.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_478.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_478.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_478.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_478.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_478.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_478.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_478.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_478,(TTransform<double> *)&pTVar44->MTransform,&local_4d8);
          local_3b8 = local_478.Rotation.XY.m128d_f64[0];
          dStack_3b0 = local_478.Rotation.XY.m128d_f64[1];
          local_3a8 = local_478.Rotation.ZW.m128d_f64[0];
          dStack_3a0 = local_478.Rotation.ZW.m128d_f64[1];
          local_398 = local_478.Translation.XY.m128d_f64[0];
          dStack_390 = local_478.Translation.XY.m128d_f64[1];
          local_388 = local_478.Translation.ZW.m128d_f64[0];
          dStack_380 = local_478.Translation.ZW.m128d_f64[1];
          local_378 = local_478.Scale3D.XY.m128d_f64[0];
          dStack_370 = local_478.Scale3D.XY.m128d_f64[1];
          local_368 = local_478.Scale3D.ZW.m128d_f64[0];
          dStack_360 = local_478.Scale3D.ZW.m128d_f64[1];
          bVar26 = Chaos::Utilities::
                   CastHelper<__FPhysInterface_Chaos::Sweep_Geom_::__l7::<lambda_1>::operator()_::__l21::<lambda_1>_>
                             ((pTVar44->MObject).Reference,(TRigidTransform<double,3> *)&local_3b8,
                              &local_660);
          break;
        case '\b':
          pFVar35 = this_00;
          goto LAB_148256ed0;
        case '@':
          pTVar40 = Chaos::FImplicitObject::
                    GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>
                              ((FImplicitObject *)this_00);
          pFVar35 = (FConvex *)
                    Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                              ((FImplicitObject *)(pTVar40->MObject).Reference);
LAB_1482570fc:
          bVar26 = ``FPhysInterface_Chaos::Sweep_Geom'::__l7::<lambda_1>::operator()'::__l21::
                   <lambda_1>::
                   operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                             (&local_660,(TSphere<double,3> *)pFVar35,
                              (TRigidTransform<double,3> *)&local_4d8);
          break;
        case 'A':
          pTVar41 = Chaos::FImplicitObject::
                    GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
                              ((FImplicitObject *)this_00);
          pFVar35 = (FConvex *)(pTVar41->MObject).Reference;
LAB_148256e8e:
          pTVar33 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                              ((FImplicitObject *)pFVar35);
          bVar26 = ``FPhysInterface_Chaos::Sweep_Geom'::__l7::<lambda_1>::operator()'::__l21::
                   <lambda_1>::operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
                             (&local_660,pTVar33,(TRigidTransform<double,3> *)&local_4d8);
          break;
        case 'C':
          pTVar42 = Chaos::FImplicitObject::
                    GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                              ((FImplicitObject *)this_00);
          pFVar35 = (FConvex *)(pTVar42->MObject).Reference;
LAB_148256eaf:
          pFVar34 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                              ((FImplicitObject *)pFVar35);
          bVar26 = ``FPhysInterface_Chaos::Sweep_Geom'::__l7::<lambda_1>::operator()'::__l21::
                   <lambda_1>::operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
                             (&local_660,pFVar34,(TRigidTransform<double,3> *)&local_4d8);
          break;
        case 'H':
          pTVar43 = Chaos::FImplicitObject::
                    GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                              ((FImplicitObject *)this_00);
          pFVar35 = (pTVar43->MObject).Reference;
LAB_148256ed0:
          pFVar35 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                              ((FImplicitObject *)pFVar35);
          bVar26 = ``FPhysInterface_Chaos::Sweep_Geom'::__l7::<lambda_1>::operator()'::__l21::
                   <lambda_1>::operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
                             (&local_660,pFVar35,(TRigidTransform<double,3> *)&local_4d8);
          break;
        case 0x80:
          pTVar36 = Chaos::FImplicitObject::
                    GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                              ((FImplicitObject *)this_00);
          bVar26 = ``FPhysInterface_Chaos::Sweep_Geom'::__l7::<lambda_1>::operator()'::__l21::
                   <lambda_1>::
                   operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                             (&local_660,pTVar36,(TRigidTransform<double,3> *)&local_4d8);
          break;
        case 0x81:
          pTVar37 = Chaos::FImplicitObject::
                    GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                              ((FImplicitObject *)this_00);
          bVar26 = ``FPhysInterface_Chaos::Sweep_Geom'::__l7::<lambda_1>::operator()'::__l21::
                   <lambda_1>::
                   operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                             (&local_660,pTVar37,(TRigidTransform<double,3> *)&local_4d8);
          break;
        case 0x83:
          pTVar38 = Chaos::FImplicitObject::
                    GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                              ((FImplicitObject *)this_00);
          bVar26 = ``FPhysInterface_Chaos::Sweep_Geom'::__l7::<lambda_1>::operator()'::__l21::
                   <lambda_1>::
                   operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
                             (&local_660,pTVar38,(TRigidTransform<double,3> *)&local_4d8);
          break;
        case 0x88:
          pTVar39 = Chaos::FImplicitObject::
                    GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                              ((FImplicitObject *)this_00);
          bVar26 = ``FPhysInterface_Chaos::Sweep_Geom'::__l7::<lambda_1>::operator()'::__l21::
                   <lambda_1>::
                   operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
                             (&local_660,pTVar39,(TRigidTransform<double,3> *)&local_4d8);
        }
        if ((bVar26 != false) && ((float)local_608 < local_5d8.Distance)) {
          local_5d8._padding_ = (longlong)local_670;
          local_618.Word2 = 0xfffff;
          local_618.Word3 = 0;
          local_618.Word0 = 0;
          local_618.Word1 = 0;
          if (pFVar49->ActorRef == (FSingleParticlePhysicsProxy *)0x0) {
            local_5d8._padding_ = 0;
          }
          else {
            local_5d8._padding_ = (longlong)(pFVar49->ActorRef->Particle).Ptr;
          }
          local_5d8.WorldPosition.field0_0x0._s_0.X = local_558;
          local_5d8.WorldPosition.field0_0x0._s_0.Y = dStack_550;
          local_5d8._padding_._0_4_ = local_674;
          local_5d8.WorldPosition.field0_0x0._s_0.Z = local_548;
          local_5d8.WorldNormal.field0_0x0._s_0.X = local_540;
          local_5d8.WorldNormal.field0_0x0._s_0.Y = dStack_538;
          local_5d8.WorldNormal.field0_0x0._s_0.Z = local_530;
          local_5d8._padding_ = local_528._0_8_;
          local_5d8._padding_ = local_528._8_8_;
          local_5d8._padding_ = local_528._16_8_;
          local_5d8.Distance = (float)local_608;
          local_5d8._padding_._0_4_ = FindFaceIndex(&local_5d8,(TVector<double> *)&local_5f8._s_0);
          fVar25 = local_678;
          pTVar9 = *(TVector<double> **)((longlong)this + 0x20);
          pTVar10 = *(TVector<double> **)((longlong)this + 0x18);
          pFVar11 = *(FHitResult **)((longlong)this + 0x38);
          local_358.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_358.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_5d8.Flags.HitFlags = FaceIndex|Distance|Normal|Position;
          pUVar45 = local_600->WorldPrivate;
          local_358.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_358.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_358.Translation.ZW.m128d_f64[0] = (pTVar9->field0_0x0)._s_0.Z;
          local_358.Translation.XY.m128d_f64[0] = (pTVar9->field0_0x0)._s_0.X;
          local_358.Translation.XY.m128d_f64[1] = (pTVar9->field0_0x0)._s_0.Y;
          local_358.Translation.ZW.m128d_f64[1] = 0.0;
          local_358.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_358.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_358.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_358.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          if (pUVar45 == (UWorld *)0x0) {
            pUVar45 = UActorComponent::GetWorld_Uncached(local_600);
          }
          ConvertQueryImpactHit
                    (pUVar45,&local_5d8,pFVar11,fVar25,&local_618,pTVar9,pTVar10,
                     (FImplicitObject *)this_00,&local_358,true,false);
          **(undefined1 **)((longlong)this + 0x40) = 1;
        }
LAB_148257295:
        uVar46 = (ulonglong)(uVar47 + 1);
        local_668 = local_668 + -1;
        uVar48 = uVar48 + 0x10;
      } while (local_668 != 0);
      local_668 = 0;
    }
    if (local_2f8.AllocatorInstance.SecondaryData !=
        (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
      FMemory::Free((void *)local_2f8.AllocatorInstance.SecondaryData);
    }
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_508);
  }
  return;
}

// operator() @ 1482582a0

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
`FPhysInterface_Chaos::LineTrace_Geom'::__l13::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  float fVar1;
  undefined8 uVar2;
  FBodyInstance *pFVar3;
  TGeometryParticle<double,3> *pTVar4;
  TGeometryParticle<double,3> *pTVar5;
  double *pdVar6;
  longlong lVar7;
  TVector<double> *pTVar8;
  TVector<double> *pTVar9;
  FHitResult *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong uVar23;
  double dVar24;
  bool bVar25;
  char cVar26;
  int iVar27;
  uint uVar28;
  FSingleParticlePhysicsProxy *this_00;
  FCollisionFilterData *pFVar29;
  UActorComponent *this_01;
  UWorld *pUVar30;
  FCollisionData *this_02;
  uint uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ForElementType<FPhysicsShapeReference_Chaos> FVar34;
  FBodyInstance *this_03;
  ulonglong uVar35;
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
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  double dVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auStackY_518 [32];
  undefined4 local_4b8;
  FCollisionFilterData local_4b0;
  double local_4a0;
  FSingleParticlePhysicsProxy **local_498;
  undefined1 local_490 [16];
  double local_480;
  undefined1 local_478 [64];
  undefined1 local_438 [24];
  TVector<double>_u_0 local_420;
  float local_408;
  undefined1 local_3f8 [16];
  double local_3e8;
  undefined1 local_3e0 [16];
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  double local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  double local_380;
  undefined1 local_378 [16];
  double local_368;
  TTransform<double> local_358;
  TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_2f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_518;
  pFVar3 = ((FBodyInstance *)**(longlong **)this)->WeldParent;
  this_03 = (FBodyInstance *)**(longlong **)this;
  if (pFVar3 != (FBodyInstance *)0x0) {
    this_03 = pFVar3;
  }
  local_498 = param_1;
  this_00 = FBodyInstance::GetPhysicsActor(this_03);
  fVar1 = __real_7f7fffff;
  if (this_00 != (FSingleParticlePhysicsProxy *)0x0) {
    uVar32 = 0;
    local_478._24_8_ = 0;
    local_478._16_4_ = 0xffffffff;
    local_478._32_8_ = 0;
    local_478._40_8_ = 0;
    local_478._48_4_ = 0xffffffff;
    local_478._56_2_ = None;
    local_408 = 3.4028235e+38;
    local_2f8.AllocatorInstance.SecondaryData = (ForElementType<FPhysicsShapeReference_Chaos>)0x0;
    local_2f8.ArrayNum = 0;
    local_2f8.ArrayMax = 0x20;
    iVar27 = FillInlineShapeArray_AssumesLocked(&local_2f8,param_1);
    lVar33 = (longlong)iVar27;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_00);
    pTVar4 = (this_00->Particle).Ptr;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_00);
    dVar24 = __real_3ff0000000000000;
    pTVar5 = (this_00->Particle).Ptr;
    local_3c8 = *(double *)&(pTVar4->MXR).Property.MX;
    dStack_3c0 = *(double *)&(pTVar4->MXR).Property.MX.field_0x8;
    pdVar6 = *(double **)((longlong)this + 8);
    uVar2 = *(undefined8 *)&(pTVar5->MXR).Property.MR.field_0x8;
    dVar20 = (double)(float)uVar2;
    dVar21 = (double)(float)((ulonglong)uVar2 >> 0x20);
    dVar17 = dVar20 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar18 = dVar21 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar65 = *pdVar6 - local_3c8;
    dVar70 = pdVar6[1] - dStack_3c0;
    dVar22 = (double)*(float *)&(pTVar5->MXR).Property.MR;
    local_3b8 = *(double *)&(pTVar4->MXR).Property.MX.field_0x10;
    auVar60._8_4_ = SUB84(dVar70,0);
    auVar60._0_8_ = dVar65;
    uVar58 = (undefined4)((ulonglong)dVar70 >> 0x20);
    auVar60._12_4_ = uVar58;
    auVar71._0_8_ = pdVar6[2] - local_3b8;
    auVar71._8_8_ = 0;
    dVar13 = (double)*(float *)&(pTVar5->MXR).Property.MR.field_0x4;
    dVar64 = dVar22 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar16 = dVar13 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uStack_3b0 = 0;
    auVar36._8_4_ = SUB84(dVar70,0);
    auVar36._0_8_ = dVar65;
    auVar36._12_4_ = uVar58;
    auVar36 = blendpd(auVar36,auVar71,2);
    auVar77._8_4_ = SUB84(dVar16,0);
    auVar77._0_8_ = dVar64;
    auVar77._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar78._8_4_ = SUB84(dVar18,0);
    auVar78._0_8_ = dVar17;
    auVar78._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar78 = blendpd(auVar77,auVar78,2);
    auVar61._0_8_ = auVar60._8_8_ * dVar64 - dVar16 * dVar65;
    auVar61._8_8_ = auVar71._0_8_ * dVar16 - dVar17 * dVar70;
    dVar15 = auVar78._0_8_;
    dVar12 = auVar78._8_8_;
    auVar37._0_8_ = auVar36._0_8_ * dVar17 - dVar15 * auVar71._0_8_;
    auVar37._8_8_ = auVar36._8_8_ * dVar18 - dVar12 * 0.0;
    dVar14 = auVar61._8_8_ + auVar61._8_8_;
    dVar59 = auVar37._0_8_ + auVar37._0_8_;
    uVar58 = (undefined4)((ulonglong)dVar59 >> 0x20);
    auVar78 = blendpd(auVar61,auVar37,2);
    auVar62._0_8_ = auVar78._0_8_ + auVar78._0_8_;
    auVar62._8_8_ = auVar78._8_8_ + auVar78._8_8_;
    auVar50._8_4_ = SUB84(dVar59,0);
    auVar50._0_8_ = dVar14;
    auVar50._12_4_ = uVar58;
    auVar38._8_4_ = SUB84(dVar59,0);
    auVar38._0_8_ = dVar14;
    auVar38._12_4_ = uVar58;
    auVar78 = blendpd(auVar38,auVar62,2);
    auVar51._0_8_ = auVar50._8_8_ * dVar64 - dVar14 * dVar16;
    auVar51._8_8_ = auVar62._0_8_ * dVar16 - dVar59 * dVar17;
    auVar39._0_8_ = auVar78._0_8_ * dVar17 - auVar62._0_8_ * dVar15;
    auVar39._8_8_ = auVar78._8_8_ * dVar18 - auVar62._8_8_ * dVar12;
    auVar78 = blendpd(auVar51,auVar39,2);
    dVar49 = *(double *)(*(undefined1 (**) [16])((longlong)this + 0x10))[1];
    auVar66._8_8_ = 0;
    auVar66._0_8_ = dVar49;
    dVar59 = dVar59 * dVar18 + dVar70 + auVar39._0_8_;
    local_3f8._8_4_ = SUB84(dVar59,0);
    local_3f8._0_8_ = dVar14 * dVar18 + dVar65 + auVar51._8_8_;
    local_3f8._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
    local_3e8 = auVar62._0_8_ * dVar18 + auVar71._0_8_ + auVar78._0_8_;
    auVar78 = **(undefined1 (**) [16])((longlong)this + 0x10);
    dVar65 = auVar78._8_8_;
    auVar36 = blendpd(auVar78,auVar66,2);
    auVar72._0_8_ = dVar65 * dVar64 - auVar78._0_8_ * dVar16;
    auVar72._8_8_ = dVar49 * dVar16 - dVar65 * dVar17;
    auVar40._0_8_ = auVar36._0_8_ * dVar17 - dVar49 * dVar15;
    auVar40._8_8_ = auVar36._8_8_ * dVar18 - dVar12 * 0.0;
    auVar36 = blendpd(auVar72,auVar40,2);
    dVar14 = auVar72._8_8_ + auVar72._8_8_;
    dVar59 = auVar40._0_8_ + auVar40._0_8_;
    uVar58 = (undefined4)((ulonglong)dVar59 >> 0x20);
    auVar73._0_8_ = auVar36._0_8_ + auVar36._0_8_;
    auVar73._8_8_ = auVar36._8_8_ + auVar36._8_8_;
    auVar52._8_4_ = SUB84(dVar59,0);
    auVar52._0_8_ = dVar14;
    auVar52._12_4_ = uVar58;
    auVar41._8_4_ = SUB84(dVar59,0);
    auVar41._0_8_ = dVar14;
    auVar41._12_4_ = uVar58;
    auVar36 = blendpd(auVar41,auVar73,2);
    auVar53._0_8_ = auVar52._8_8_ * dVar64 - dVar14 * dVar16;
    auVar53._8_8_ = auVar73._0_8_ * dVar16 - dVar59 * dVar17;
    auVar42._0_8_ = auVar36._0_8_ * dVar17 - auVar73._0_8_ * dVar15;
    auVar42._8_8_ = auVar36._8_8_ * dVar18 - auVar73._8_8_ * dVar12;
    auVar36 = blendpd(auVar53,auVar42,2);
    dVar15 = dVar59 * dVar18 + dVar65 + auVar42._0_8_;
    local_480 = auVar73._0_8_ * dVar18 + dVar49 + auVar36._0_8_;
    local_490._8_4_ = SUB84(dVar15,0);
    local_490._0_8_ = dVar14 * dVar18 + auVar78._0_8_ + auVar53._8_8_;
    local_490._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    uVar35 = uVar32;
    if (0 < iVar27) {
      do {
        uVar31 = (uint)uVar32;
        uVar28 = 0;
        if ((int)uVar31 < local_2f8.ArrayNum) {
          uVar28 = ~uVar31 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FVar34 = (ForElementType<FPhysicsShapeReference_Chaos>)&local_2f8;
        if (local_2f8.AllocatorInstance.SecondaryData !=
            (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
          FVar34 = local_2f8.AllocatorInstance.SecondaryData;
        }
        lVar7 = *(longlong *)(uVar35 + (longlong)FVar34);
        if ((lVar7 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shape",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysInterface_Chaos.cpp"
                                ,0x3b2,L""), bVar25)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        bVar25 = FBodyInstance::IsShapeBoundToBody
                           (this_03,(FPhysicsShapeReference_Chaos *)
                                    ((longlong)(int)uVar31 * 0x10 + (longlong)FVar34));
        if (bVar25) {
          this_02 = (FCollisionData *)(lVar7 + 0x50);
          if ((*(byte *)(lVar7 + 8) & 3) != 0) {
            this_02 = (FCollisionData *)(lVar7 + 0x48);
          }
          pFVar29 = Chaos::FCollisionData::GetQueryData(this_02);
          uVar32._0_4_ = pFVar29->Word2;
          uVar32._4_4_ = pFVar29->Word3;
          uVar23 = uVar32 & 0x100000000;
          if (**(char **)((longlong)this + 0x18) != '\0') {
            uVar23 = uVar32 & 0x200000000;
          }
          if (uVar23 != 0) {
            dVar49 = dVar24 / (double)**(float **)((longlong)this + 0x20);
            local_398 = local_3e8;
            local_3d0 = dVar49 * local_480;
            local_3e0._8_4_ = SUB84((double)local_490._8_8_ * dVar49,0);
            local_3e0._0_8_ = (double)local_490._0_8_ * dVar49;
            local_3e0._12_4_ = (int)((ulonglong)((double)local_490._8_8_ * dVar49) >> 0x20);
            local_3a8 = local_3f8._0_4_;
            uStack_3a4 = local_3f8._4_4_;
            uStack_3a0 = local_3f8._8_4_;
            uStack_39c = local_3f8._12_4_;
            cVar26 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0xb0))
                               (*(longlong **)(lVar7 + 0x10),&local_3a8,local_3e0);
            if ((cVar26 != '\0') && (local_4a0 < (double)local_408)) {
              local_408 = (float)local_4a0;
              local_420._s_0.Y = (double)uStack_388;
              local_420._s_0.X = (double)local_390;
              local_420._s_0.Z = local_380;
              local_438._16_8_ = local_368;
              local_438._0_16_ = local_378;
              local_478._0_8_ = ((*local_498)->Particle).Ptr;
              local_478._16_4_ = local_4b8;
              local_478._8_8_ = lVar7;
            }
          }
        }
        uVar32 = (ulonglong)(uVar31 + 1);
        lVar33 = lVar33 + -1;
        uVar35 = uVar35 + 0x10;
      } while (lVar33 != 0);
    }
    if (local_408 < fVar1) {
      auVar74._8_8_ = 0;
      auVar74._0_8_ = local_420._s_0.Z;
      dVar64 = local_420._8_8_;
      dVar49 = local_420._0_8_;
      auVar79._8_4_ = SUB84(dVar13,0);
      auVar79._0_8_ = dVar22;
      auVar79._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar67._0_8_ = dVar64 * dVar22 - dVar49 * dVar13;
      auVar67._8_8_ = local_420._s_0.Z * dVar13 - dVar64 * dVar20;
      auVar78 = blendpd(local_420._0_16_,auVar74,2);
      auVar19._8_4_ = SUB84(dVar21,0);
      auVar19._0_8_ = dVar20;
      auVar19._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      auVar36 = blendpd(auVar79,auVar19,2);
      dVar15 = auVar36._0_8_;
      dVar12 = auVar36._8_8_;
      auVar43._0_8_ = auVar78._0_8_ * dVar20 - dVar15 * local_420._s_0.Z;
      auVar43._8_8_ = auVar78._8_8_ * dVar21 - dVar12 * 0.0;
      auVar78 = blendpd(auVar67,auVar43,2);
      dVar14 = auVar67._8_8_ + auVar67._8_8_;
      dVar59 = auVar43._0_8_ + auVar43._0_8_;
      uVar58 = (undefined4)((ulonglong)dVar59 >> 0x20);
      auVar68._0_8_ = auVar78._0_8_ + auVar78._0_8_;
      auVar68._8_8_ = auVar78._8_8_ + auVar78._8_8_;
      auVar54._8_4_ = SUB84(dVar59,0);
      auVar54._0_8_ = dVar14;
      auVar54._12_4_ = uVar58;
      auVar44._8_4_ = SUB84(dVar59,0);
      auVar44._0_8_ = dVar14;
      auVar44._12_4_ = uVar58;
      auVar78 = blendpd(auVar44,auVar68,2);
      auVar55._0_8_ = auVar54._8_8_ * dVar22 - dVar14 * dVar13;
      auVar55._8_8_ = auVar68._0_8_ * dVar13 - dVar59 * dVar20;
      auVar45._0_8_ = auVar78._0_8_ * dVar20 - auVar68._0_8_ * dVar15;
      auVar45._8_8_ = auVar78._8_8_ * dVar21 - auVar68._8_8_ * dVar12;
      auVar78 = blendpd(auVar55,auVar45,2);
      dVar59 = dVar59 * dVar21 + dVar64 + auVar45._0_8_;
      local_420._s_0.Z = auVar68._0_8_ * dVar21 + local_420._s_0.Z + auVar78._0_8_;
      local_420._8_4_ = SUB84(dVar59,0);
      local_420._s_0.X = dVar14 * dVar21 + dVar49 + auVar55._8_8_;
      local_420._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
      auVar69._8_8_ = 0;
      auVar69._0_8_ = local_438._16_8_;
      dVar49 = local_438._0_8_;
      dVar14 = local_438._8_8_;
      auVar78 = blendpd(local_438._0_16_,auVar69,2);
      auVar75._0_8_ = dVar14 * dVar22 - dVar49 * dVar13;
      auVar75._8_8_ = (double)local_438._16_8_ * dVar13 - dVar14 * dVar20;
      auVar63._8_4_ = SUB84(auVar75._8_8_,0);
      auVar63._0_8_ = auVar75._0_8_;
      auVar63._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
      auVar46._0_8_ = auVar78._0_8_ * dVar20 - dVar15 * (double)local_438._16_8_;
      auVar46._8_8_ = auVar78._8_8_ * dVar21 - dVar12 * 0.0;
      dVar59 = auVar63._8_8_ + auVar63._8_8_;
      dVar64 = auVar46._0_8_ + auVar46._0_8_;
      auVar78 = blendpd(auVar75,auVar46,2);
      auVar76._0_8_ = auVar78._0_8_ + auVar78._0_8_;
      auVar76._8_8_ = auVar78._8_8_ + auVar78._8_8_;
      auVar56._8_4_ = SUB84(dVar64,0);
      auVar56._0_8_ = dVar59;
      uVar58 = (undefined4)((ulonglong)dVar64 >> 0x20);
      auVar56._12_4_ = uVar58;
      auVar47._8_4_ = SUB84(dVar64,0);
      auVar47._0_8_ = dVar59;
      auVar47._12_4_ = uVar58;
      auVar78 = blendpd(auVar47,auVar76,2);
      auVar57._0_8_ = auVar56._8_8_ * dVar22 - dVar59 * dVar13;
      auVar57._8_8_ = auVar76._0_8_ * dVar13 - dVar64 * dVar20;
      auVar48._0_8_ = auVar78._0_8_ * dVar20 - auVar76._0_8_ * dVar15;
      auVar48._8_8_ = auVar78._8_8_ * dVar21 - auVar76._8_8_ * dVar12;
      local_4b0.Word2 = 0xfffff;
      local_4b0.Word3 = 0;
      auVar78 = blendpd(auVar57,auVar48,2);
      local_478._56_2_ = Distance|Normal|Position;
      pdVar6 = *(double **)((longlong)this + 8);
      local_4b0.Word0 = 0;
      local_4b0.Word1 = 0;
      local_358.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_358.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_358.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_438._8_8_ = dVar64 * dVar21 + dVar14 + auVar48._0_8_ + dStack_3c0;
      local_438._0_8_ = dVar59 * dVar21 + dVar49 + auVar57._8_8_ + local_3c8;
      local_358.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_358.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_358.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_438._16_8_ =
           auVar76._0_8_ * dVar21 + (double)local_438._16_8_ + auVar78._0_8_ + local_3b8;
      local_358.Translation.ZW.m128d_f64[0] = pdVar6[2];
      local_358.Translation.XY.m128d_f64[0] = *pdVar6;
      local_358.Translation.XY.m128d_f64[1] = pdVar6[1];
      local_358.Translation.ZW.m128d_f64[1] = 0.0;
      local_358.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_358.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_358.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_358.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_358.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_358.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      this_01 = (UActorComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(**(longlong **)this + 0x150));
      pTVar8 = *(TVector<double> **)((longlong)this + 0x30);
      pTVar9 = *(TVector<double> **)((longlong)this + 8);
      pFVar10 = *(FHitResult **)((longlong)this + 0x28);
      bVar25 = *(bool *)*(undefined8 *)((longlong)this + 0x38);
      fVar1 = **(float **)((longlong)this + 0x20);
      pUVar30 = (UWorld *)0x0;
      if ((this_01 != (UActorComponent *)0x0) &&
         (pUVar30 = this_01->WorldPrivate, pUVar30 == (UWorld *)0x0)) {
        pUVar30 = UActorComponent::GetWorld_Uncached(this_01);
      }
      ConvertQueryImpactHit
                (pUVar30,(FLocationHit *)local_478,pFVar10,fVar1,&local_4b0,pTVar9,pTVar8,
                 (FImplicitObject *)0x0,&local_358,true,bVar25);
      **(undefined1 **)((longlong)this + 0x40) = 1;
    }
    if (local_2f8.AllocatorInstance.SecondaryData !=
        (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
      FMemory::Free((void *)local_2f8.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// AddGeometry @ 148263da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPhysInterface_Chaos::AddGeometry
          (FSingleParticlePhysicsProxy **param_1,FGeometryAddParams *param_2,
          TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong *plVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  FScriptContainerElement *pFVar3;
  FPhysicsShapeReference_Chaos *pFVar4;
  FSingleParticlePhysicsProxy *pFVar5;
  code *pcVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  FImplicitObjectUnion *pFVar11;
  ulonglong uVar12;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar13;
  bool bVar14;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [4];
  FLLMScope local_94;
  TRefCountPtr<Chaos::FImplicitObject> local_90;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_88;
  FPhysicsShapeReference_Chaos local_78;
  FMemScope local_68;
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId764,"FPhysInterface_Chaos::AddGeometry",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysInterface_Chaos.cpp"
               ,0x2fc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId764);
  }
  FLLMScope::FLLMScope(&local_94,ChaosGeometry,false,None,Default,true);
  FMemScope::FMemScope(&local_68,ChaosGeometry,true);
  local_60.ArrayMax = 1;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_60.AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0;
  local_60.ArrayNum = 0;
  ChaosInterface::CreateGeometry(param_2,&local_88,&local_60);
  iVar8 = local_60.ArrayNum;
  if ((*param_1 == (FSingleParticlePhysicsProxy *)0x0) || (local_88.ArrayNum == 0))
  goto LAB_14826407f;
  uVar12 = (ulonglong)local_60.ArrayNum;
  FVar13 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
           &local_60;
  if (local_60.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FVar13 = local_60.AllocatorInstance.SecondaryData;
  }
  FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          ((longlong)FVar13 + uVar12 * 8);
  while( true ) {
    if ((uint)uVar12 != iVar8) {
      local_98[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (FVar13 == FVar2) break;
    local_78.Shape = *(FPerShapeData **)FVar13;
    local_78.ActorRef = *param_1;
    if (param_3 != (TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar4 = (FPhysicsShapeReference_Chaos *)(param_3->AllocatorInstance).Data;
      if (((pFVar4 <= &local_78) && (&local_78 < pFVar4 + param_3->ArrayMax)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_3->ArrayNum;
      if (iVar10 == param_3->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar10 + 1;
      pFVar3 = (param_3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(FPerShapeData **)pFVar3 = local_78.Shape;
      *(FSingleParticlePhysicsProxy **)(pFVar3 + 8) = local_78.ActorRef;
    }
    FBodyInstance::ApplyMaterialToShape_AssumesLocked
              (&local_78,param_2->SimpleMaterial,&param_2->ComplexMaterials,
               &param_2->ComplexMaterialMasks);
    uVar12 = (ulonglong)(uint)local_60.ArrayNum;
    FVar13 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              )((longlong)FVar13 + 8);
  }
  pFVar5 = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar5);
  if ((((pFVar5->Particle).Ptr)->MNonFrequentData).Property.MGeometry.Reference ==
      (FImplicitObject *)0x0) {
    pFVar11 = ::operator_new(0x70);
    if (pFVar11 == (FImplicitObjectUnion *)0x0) {
      local_90.Reference = (FImplicitObject *)0x0;
    }
    else {
      pFVar11 = Chaos::FImplicitObjectUnion::FImplicitObjectUnion(pFVar11,&local_88);
      local_90.Reference = (FImplicitObject *)pFVar11;
      if (pFVar11 != (FImplicitObjectUnion *)0x0) {
        LOCK();
        *(int *)&pFVar11->_padding_ = (int)pFVar11->_padding_ + 1;
        UNLOCK();
        Chaos::FRigidBodyHandle_External::SetGeometry
                  ((FRigidBodyHandle_External *)*param_1,&local_90);
        LOCK();
        plVar1 = &pFVar11->_padding_;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar7 == 1) && (*(int *)((longlong)&pFVar11->_padding_ + 4) == 0)) {
          (**(code **)pFVar11->_padding_)(pFVar11,1);
        }
        goto LAB_148264067;
      }
    }
    Chaos::FRigidBodyHandle_External::SetGeometry((FRigidBodyHandle_External *)*param_1,&local_90);
  }
  else {
    pFVar5 = *param_1;
    Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar5);
    Chaos::TGeometryParticle<double,3>::MergeGeometry((pFVar5->Particle).Ptr,&local_88);
  }
LAB_148264067:
  pFVar5 = *param_1;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar5);
  Chaos::TGeometryParticle<double,3>::MergeShapeInstances
            ((pFVar5->Particle).Ptr,
             (TArray<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)&local_60);
LAB_14826407f:
  FVar13 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
           &local_60;
  if (local_60.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FVar13 = local_60.AllocatorInstance.SecondaryData;
  }
  DestructItems<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,int>
            ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)FVar13,
             local_60.ArrayNum);
  if (local_60.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)0x0)
  {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            ((TRefCountPtr<Chaos::FImplicitObject> *)local_88.AllocatorInstance.Data,
             local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(&local_94);
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CalculateMassPropertiesFromShapeCollection @ 14826ab30

void __cdecl
FPhysInterface_Chaos::CalculateMassPropertiesFromShapeCollection
          (FMassProperties *param_1,
          TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  TArray<bool,TSizedDefaultAllocator<32>_> local_48;
  code *local_38 [2];
  undefined **local_28;
  TArray<FPhysicsShapeReference_Chaos,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ChaosInterface::CalculateMassPropertiesFromShapeCollection'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ChaosInterface::CalculateMassPropertiesFromShapeCollection'::__l2::<lambda_1>,Chaos::FPerShapeData_*,int>
                ::Call;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_20 = param_2;
  Chaos::CalculateMassPropertiesFromShapeCollection
            (param_1,param_2->ArrayNum,(double)param_3,&local_48,
             (TFunction<Chaos::FPerShapeData_*___cdecl(int)> *)local_38);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// CreateMaterialMask @ 148275ad0

FMaterialMaskHandle __cdecl FPhysInterface_Chaos::CreateMaterialMask(UPhysicalMaterialMask *param_1)

{
  FPhysicalMaterialManager *pFVar1;
  FChaosPhysicsMaterialMask *pFVar2;
  FMaterialMaskHandle local_res10 [6];
  
  pFVar1 = Chaos::FPhysicalMaterialManager::Get();
  Chaos::FPhysicalMaterialManager::CreateMask(pFVar1);
  pFVar2 = Chaos::FMaterialMaskHandle::Get(local_res10);
  if (pFVar2 != (FChaosPhysicsMaterialMask *)0x0) {
    UPhysicalMaterialMask::GenerateMaskData(param_1,&pFVar2->MaskData,&pFVar2->SizeX,&pFVar2->SizeY)
    ;
    pFVar2->UVChannelIndex = param_1->UVChannelIndex;
    pFVar2->AddressX = (uint)(param_1->AddressX).Value;
    pFVar2->AddressY = (uint)(param_1->AddressY).Value;
  }
  pFVar1 = Chaos::FPhysicalMaterialManager::Get();
  Chaos::FPhysicalMaterialManager::UpdateMaterialMask(pFVar1,local_res10[0]);
  return (FMaterialMaskHandle)local_res10[0].InnerHandle;
}

// CreateShape @ 1482775d0

FPhysicsShapeReference_Chaos * __cdecl
FPhysInterface_Chaos::CreateShape
          (FPhysicsShapeReference_Chaos *__return_storage_ptr__,PxGeometry *param_1,bool param_2,
          bool param_3,UPhysicalMaterial *param_4,
          TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *param_5)

{
  __return_storage_ptr__->Shape = (FPerShapeData *)0x0;
  __return_storage_ptr__->ActorRef = (FSingleParticlePhysicsProxy *)0x0;
  return __return_storage_ptr__;
}

// ExecuteOnUnbrokenConstraintReadOnly @ 14827cf80

bool __cdecl
FPhysInterface_Chaos::ExecuteOnUnbrokenConstraintReadOnly
          (FPhysicsConstraintReference_Chaos *param_1,
          TFunctionRef<void___cdecl(FPhysicsConstraintReference_Chaos_const_&)> *param_2)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FChaosEngineInterface::IsBroken(param_1);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_28,param_1,Read);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    return true;
  }
  return false;
}

// ExecuteOnUnbrokenConstraintReadWrite @ 14827cfe0

bool __cdecl
FPhysInterface_Chaos::ExecuteOnUnbrokenConstraintReadWrite
          (FPhysicsConstraintReference_Chaos *param_1,
          TFunctionRef<void___cdecl(FPhysicsConstraintReference_Chaos_const_&)> *param_2)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FChaosEngineInterface::IsBroken(param_1);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_28,param_1,Write);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    return true;
  }
  return false;
}

// ExecuteRead @ 14827d040

bool __cdecl
FPhysInterface_Chaos::ExecuteRead
          (FSingleParticlePhysicsProxy **param_1,
          TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_&)> *param_2,
          EPhysicsInterfaceScopedThreadContext param_3)

{
  FScopedSceneLock_Chaos local_28;
  
  if (*param_1 != (FSingleParticlePhysicsProxy *)0x0) {
    FScopedSceneLockWithContext_Chaos::FScopedSceneLockWithContext_Chaos
              ((FScopedSceneLockWithContext_Chaos *)&local_28,param_1,Read,param_3,Normal);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    return true;
  }
  return false;
}

// ExecuteRead @ 14827d0b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPhysInterface_Chaos::ExecuteRead
          (FSingleParticlePhysicsProxy **param_1,FSingleParticlePhysicsProxy **param_2,
          TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&,Chaos::FSingleParticlePhysicsProxy_*_const_&)>
          *param_3)

{
  FPhysicsRwLock *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FChaosScene *pFVar4;
  FChaosScene *pFVar5;
  LPVOID pvVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  uint uVar9;
  FChaosScene *pFVar10;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FScopedSceneLock_Chaos local_28;
  
  local_28.bHasLock = false;
  local_28.LockType = Read;
  local_28.ThreadContext = External;
  if (*param_1 == (FSingleParticlePhysicsProxy *)0x0) {
    pFVar4 = (FChaosScene *)0x0;
  }
  else {
    pFVar4 = FChaosEngineInterface::GetCurrentScene(param_1);
  }
  if (*param_2 == (FSingleParticlePhysicsProxy *)0x0) {
    pFVar5 = (FChaosScene *)0x0;
  }
  else {
    pFVar5 = FChaosEngineInterface::GetCurrentScene(param_2);
  }
  pFVar10 = pFVar4;
  if (pFVar4 == pFVar5) {
LAB_14827d235:
    if (pFVar10 != (FChaosScene *)0x0) {
      local_28.Solver = pFVar10->SceneSolver;
      goto LAB_14827d13e;
    }
  }
  else {
    if ((pFVar4 == (FChaosScene *)0x0) || (pFVar5 == (FChaosScene *)0x0)) {
      pFVar10 = pFVar5;
      if (pFVar4 != (FChaosScene *)0x0) {
        pFVar10 = pFVar4;
      }
      goto LAB_14827d235;
    }
    if (2 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    }
  }
  local_28.Solver = (FPBDRigidsSolver *)0x0;
LAB_14827d13e:
  FScopedSceneLock_Chaos::LockScene(&local_28);
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,param_1,param_2);
  if (((local_28.bHasLock != false) && (local_28.Solver != (FPBDRigidsSolver *)0x0)) &&
     (this = (FPhysicsRwLock *)(local_28.Solver)->_padding_, this != (FPhysicsRwLock *)0x0)) {
    if (local_28.LockType == Read) {
      Chaos::FPhysicsRwLock::ReadUnlock(this);
    }
    else if (local_28.LockType == Write) {
      pvVar6 = TlsGetValue(this->TlsSlot);
      uVar9 = (int)((ulonglong)pvVar6 >> 0x20) - 1;
      TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)uVar9 << 0x20 | (ulonglong)pvVar6 & 0xffffffff))
      ;
      if (uVar9 + (int)pvVar6 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)this);
      }
      puVar7 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_30 = local_res8;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar8 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar7);
      if ((*(int *)&pFVar8[2].field_0x4 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GameThreadContext > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                             ,200,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(int *)&pFVar8[2].field_0x4 = *(int *)&pFVar8[2].field_0x4 + -1;
      Chaos::Insights::EndLockAcquireEvent();
    }
  }
  return true;
}

// ExecuteRead @ 14827d280

bool __cdecl
FPhysInterface_Chaos::ExecuteRead
          (FSingleParticlePhysicsProxy **param_1,
          TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *param_2)

{
  FPhysicsRwLock *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FScopedSceneLock_Chaos local_28;
  
  if (*param_1 == (FSingleParticlePhysicsProxy *)0x0) {
    return false;
  }
  local_28.Solver = (FPBDRigidsSolver *)(*param_1)->_padding_;
  local_28.bHasLock = false;
  local_28.LockType = Read;
  local_28.ThreadContext = External;
  FScopedSceneLock_Chaos::LockScene(&local_28);
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
  if (((local_28.bHasLock != false) && (local_28.Solver != (FPBDRigidsSolver *)0x0)) &&
     (this = (FPhysicsRwLock *)(local_28.Solver)->_padding_, this != (FPhysicsRwLock *)0x0)) {
    if (local_28.LockType == Read) {
      Chaos::FPhysicsRwLock::ReadUnlock(this);
    }
    else if (local_28.LockType == Write) {
      pvVar4 = TlsGetValue(this->TlsSlot);
      uVar7 = (int)((ulonglong)pvVar4 >> 0x20) - 1;
      TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar4 & 0xffffffff))
      ;
      if (uVar7 + (int)pvVar4 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)this);
      }
      puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_30 = local_res8;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar6 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
      if ((*(int *)&pFVar6[2].field_0x4 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GameThreadContext > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                             ,200,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + -1;
      Chaos::Insights::EndLockAcquireEvent();
      return true;
    }
  }
  return true;
}

// ExecuteRead @ 14827d3e0

bool __cdecl
FPhysInterface_Chaos::ExecuteRead
          (FPhysicsConstraintReference_Chaos *param_1,
          TFunctionRef<void___cdecl(FPhysicsConstraintReference_Chaos_const_&)> *param_2)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_28,param_1,Read);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    return true;
  }
  return false;
}

// ExecuteRead @ 14827d440

bool __cdecl
FPhysInterface_Chaos::ExecuteRead
          (FPhysicsConstraintReference_Chaos *param_1,
          TFunctionRef<void___cdecl(FPhysicsConstraintReference_Chaos_const_&)> *param_2,
          EPhysicsInterfaceScopedThreadContext param_3)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (bVar1) {
    FScopedSceneLockWithContext_Chaos::FScopedSceneLockWithContext_Chaos
              ((FScopedSceneLockWithContext_Chaos *)&local_28,param_1,Read,param_3,Normal);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    return true;
  }
  return false;
}

// ExecuteRead @ 14827d4c0

bool __cdecl
FPhysInterface_Chaos::ExecuteRead
          (FPhysicsObject *param_1,FPhysicsObject *param_2,
          TFunctionRef<void___cdecl(Chaos::FPhysicsObject_*,Chaos::FPhysicsObject_*)> *param_3)

{
  FPhysicsObject *local_res8;
  FPhysicsObject *local_res10;
  FScopedSceneLock_Chaos local_28;
  
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_28,param_1,param_2,Read);
  local_res8 = param_2;
  local_res10 = param_1;
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res10,&local_res8);
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  return true;
}

// ExecuteRead @ 14827d530

bool __cdecl
FPhysInterface_Chaos::ExecuteRead
          (FPhysScene_Chaos *param_1,TFunctionRef<void___cdecl(void)> *param_2)

{
  FPhysicsRwLock *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FScopedSceneLock_Chaos local_28;
  
  if (param_1 == (FPhysScene_Chaos *)0x0) {
    return false;
  }
  local_28.Solver = (FPBDRigidsSolver *)param_1->_padding_;
  local_28.bHasLock = false;
  local_28.LockType = Read;
  local_28.ThreadContext = External;
  FScopedSceneLock_Chaos::LockScene(&local_28);
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
  if (((local_28.bHasLock != false) && (local_28.Solver != (FPBDRigidsSolver *)0x0)) &&
     (this = (FPhysicsRwLock *)(local_28.Solver)->_padding_, this != (FPhysicsRwLock *)0x0)) {
    if (local_28.LockType == Read) {
      Chaos::FPhysicsRwLock::ReadUnlock(this);
    }
    else if (local_28.LockType == Write) {
      pvVar4 = TlsGetValue(this->TlsSlot);
      uVar7 = (int)((ulonglong)pvVar4 >> 0x20) - 1;
      TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar4 & 0xffffffff))
      ;
      if (uVar7 + (int)pvVar4 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)this);
      }
      puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_30 = local_res8;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar6 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
      if ((*(int *)&pFVar6[2].field_0x4 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GameThreadContext > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                             ,200,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + -1;
      Chaos::Insights::EndLockAcquireEvent();
      return true;
    }
  }
  return true;
}

// ExecuteRead @ 14827d680

bool __cdecl
FPhysInterface_Chaos::ExecuteRead
          (USkeletalMeshComponent *param_1,TFunctionRef<void___cdecl(void)> *param_2)

{
  FScopedSceneLock_Chaos local_28;
  
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_28,param_1,Read);
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  return true;
}

// ExecuteShapeWrite @ 14827d6c0

void __cdecl
FPhysInterface_Chaos::ExecuteShapeWrite
          (FBodyInstance *param_1,FPhysicsShapeReference_Chaos *param_2,
          TFunctionRef<void___cdecl(FPhysicsShapeReference_Chaos_&)> *param_3)

{
  FPhysicsRwLock *this;
  code *pcVar1;
  bool bVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FScopedSceneLock_Chaos local_28;
  
  if ((param_1 != (FBodyInstance *)0x0) && (param_2->Shape != (FPerShapeData *)0x0)) {
    pFVar3 = FBodyInstance::GetPhysicsActor(param_1);
    local_28.bHasLock = false;
    local_28.LockType = Write;
    local_28.ThreadContext = External;
    local_28.Solver = (FPBDRigidsSolver *)pFVar3->_padding_;
    FScopedSceneLock_Chaos::LockScene(&local_28);
    (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,param_2);
    if ((local_28.bHasLock != false) &&
       ((local_28.Solver != (FPBDRigidsSolver *)0x0 &&
        (this = (FPhysicsRwLock *)(local_28.Solver)->_padding_, this != (FPhysicsRwLock *)0x0)))) {
      if (local_28.LockType == Read) {
        Chaos::FPhysicsRwLock::ReadUnlock(this);
      }
      else if (local_28.LockType == Write) {
        pvVar4 = TlsGetValue(this->TlsSlot);
        uVar7 = (int)((ulonglong)pvVar4 >> 0x20) - 1;
        TlsSetValue(this->TlsSlot,
                    (LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar4 & 0xffffffff));
        if (uVar7 + (int)pvVar4 == 0) {
          ReleaseSRWLockExclusive((PSRWLOCK)this);
        }
        puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
        local_30 = local_res8;
        local_38 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar6 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
        if ((*(int *)&pFVar6[2].field_0x4 < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("GameThreadContext > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                               ,200,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + -1;
        Chaos::Insights::EndLockAcquireEvent();
        return;
      }
    }
  }
  return;
}

// ExecuteWrite @ 14827d840

bool __cdecl
FPhysInterface_Chaos::ExecuteWrite
          (FSingleParticlePhysicsProxy **param_1,
          TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_&)> *param_2)

{
  FPhysicsRwLock *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FScopedSceneLock_Chaos local_28;
  
  if (*param_1 == (FSingleParticlePhysicsProxy *)0x0) {
    return false;
  }
  local_28.Solver = (FPBDRigidsSolver *)(*param_1)->_padding_;
  local_28.bHasLock = false;
  local_28.LockType = Write;
  local_28.ThreadContext = External;
  FScopedSceneLock_Chaos::LockScene(&local_28);
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
  if (((local_28.bHasLock != false) && (local_28.Solver != (FPBDRigidsSolver *)0x0)) &&
     (this = (FPhysicsRwLock *)(local_28.Solver)->_padding_, this != (FPhysicsRwLock *)0x0)) {
    if (local_28.LockType == Read) {
      Chaos::FPhysicsRwLock::ReadUnlock(this);
    }
    else if (local_28.LockType == Write) {
      pvVar4 = TlsGetValue(this->TlsSlot);
      uVar7 = (int)((ulonglong)pvVar4 >> 0x20) - 1;
      TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar4 & 0xffffffff))
      ;
      if (uVar7 + (int)pvVar4 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)this);
      }
      puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_30 = local_res8;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar6 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
      if ((*(int *)&pFVar6[2].field_0x4 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GameThreadContext > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                             ,200,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + -1;
      Chaos::Insights::EndLockAcquireEvent();
      return true;
    }
  }
  return true;
}

// ExecuteWrite @ 14827d9a0

bool __cdecl
FPhysInterface_Chaos::ExecuteWrite
          (FSingleParticlePhysicsProxy **param_1,
          TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_&)> *param_2,
          EPhysicsInterfaceScopedThreadContext param_3,
          EPhysicsInterfaceScopedTransactionMode param_4)

{
  FScopedSceneLock_Chaos local_28;
  
  if (*param_1 != (FSingleParticlePhysicsProxy *)0x0) {
    FScopedSceneLockWithContext_Chaos::FScopedSceneLockWithContext_Chaos
              ((FScopedSceneLockWithContext_Chaos *)&local_28,param_1,Write,param_3,param_4);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    return true;
  }
  return false;
}

// ExecuteWrite @ 14827da10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPhysInterface_Chaos::ExecuteWrite
          (FSingleParticlePhysicsProxy **param_1,FSingleParticlePhysicsProxy **param_2,
          TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&,Chaos::FSingleParticlePhysicsProxy_*_const_&)>
          *param_3)

{
  FPhysicsRwLock *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FChaosScene *pFVar4;
  FChaosScene *pFVar5;
  LPVOID pvVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  uint uVar9;
  FChaosScene *pFVar10;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FScopedSceneLock_Chaos local_28;
  
  local_28.bHasLock = false;
  local_28.LockType = Write;
  local_28.ThreadContext = External;
  if (*param_1 == (FSingleParticlePhysicsProxy *)0x0) {
    pFVar4 = (FChaosScene *)0x0;
  }
  else {
    pFVar4 = FChaosEngineInterface::GetCurrentScene(param_1);
  }
  if (*param_2 == (FSingleParticlePhysicsProxy *)0x0) {
    pFVar5 = (FChaosScene *)0x0;
  }
  else {
    pFVar5 = FChaosEngineInterface::GetCurrentScene(param_2);
  }
  pFVar10 = pFVar4;
  if (pFVar4 == pFVar5) {
LAB_14827db95:
    if (pFVar10 != (FChaosScene *)0x0) {
      local_28.Solver = pFVar10->SceneSolver;
      goto LAB_14827da9e;
    }
  }
  else {
    if ((pFVar4 == (FChaosScene *)0x0) || (pFVar5 == (FChaosScene *)0x0)) {
      pFVar10 = pFVar5;
      if (pFVar4 != (FChaosScene *)0x0) {
        pFVar10 = pFVar4;
      }
      goto LAB_14827db95;
    }
    if (2 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    }
  }
  local_28.Solver = (FPBDRigidsSolver *)0x0;
LAB_14827da9e:
  FScopedSceneLock_Chaos::LockScene(&local_28);
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,param_1,param_2);
  if (((local_28.bHasLock != false) && (local_28.Solver != (FPBDRigidsSolver *)0x0)) &&
     (this = (FPhysicsRwLock *)(local_28.Solver)->_padding_, this != (FPhysicsRwLock *)0x0)) {
    if (local_28.LockType == Read) {
      Chaos::FPhysicsRwLock::ReadUnlock(this);
    }
    else if (local_28.LockType == Write) {
      pvVar6 = TlsGetValue(this->TlsSlot);
      uVar9 = (int)((ulonglong)pvVar6 >> 0x20) - 1;
      TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)uVar9 << 0x20 | (ulonglong)pvVar6 & 0xffffffff))
      ;
      if (uVar9 + (int)pvVar6 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)this);
      }
      puVar7 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_30 = local_res8;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar8 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar7);
      if ((*(int *)&pFVar8[2].field_0x4 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GameThreadContext > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                             ,200,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(int *)&pFVar8[2].field_0x4 = *(int *)&pFVar8[2].field_0x4 + -1;
      Chaos::Insights::EndLockAcquireEvent();
    }
  }
  return true;
}

// ExecuteWrite @ 14827dbe0

bool __cdecl
FPhysInterface_Chaos::ExecuteWrite
          (FSingleParticlePhysicsProxy **param_1,
          TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *param_2)

{
  FPhysicsRwLock *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FScopedSceneLock_Chaos local_28;
  
  if (*param_1 == (FSingleParticlePhysicsProxy *)0x0) {
    return false;
  }
  local_28.Solver = (FPBDRigidsSolver *)(*param_1)->_padding_;
  local_28.bHasLock = false;
  local_28.LockType = Write;
  local_28.ThreadContext = External;
  FScopedSceneLock_Chaos::LockScene(&local_28);
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
  if (((local_28.bHasLock != false) && (local_28.Solver != (FPBDRigidsSolver *)0x0)) &&
     (this = (FPhysicsRwLock *)(local_28.Solver)->_padding_, this != (FPhysicsRwLock *)0x0)) {
    if (local_28.LockType == Read) {
      Chaos::FPhysicsRwLock::ReadUnlock(this);
    }
    else if (local_28.LockType == Write) {
      pvVar4 = TlsGetValue(this->TlsSlot);
      uVar7 = (int)((ulonglong)pvVar4 >> 0x20) - 1;
      TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar4 & 0xffffffff))
      ;
      if (uVar7 + (int)pvVar4 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)this);
      }
      puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_30 = local_res8;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar6 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
      if ((*(int *)&pFVar6[2].field_0x4 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GameThreadContext > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                             ,200,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + -1;
      Chaos::Insights::EndLockAcquireEvent();
      return true;
    }
  }
  return true;
}

// ExecuteWrite @ 14827dd40

bool __cdecl
FPhysInterface_Chaos::ExecuteWrite
          (FPhysicsConstraintReference_Chaos *param_1,
          TFunctionRef<void___cdecl(FPhysicsConstraintReference_Chaos_const_&)> *param_2)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_28,param_1,Write);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    return true;
  }
  return false;
}

// ExecuteWrite @ 14827dda0

bool __cdecl
FPhysInterface_Chaos::ExecuteWrite
          (FPhysicsConstraintReference_Chaos *param_1,
          TFunctionRef<void___cdecl(FPhysicsConstraintReference_Chaos_const_&)> *param_2,
          EPhysicsInterfaceScopedThreadContext param_3,
          EPhysicsInterfaceScopedTransactionMode param_4)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (bVar1) {
    FScopedSceneLockWithContext_Chaos::FScopedSceneLockWithContext_Chaos
              ((FScopedSceneLockWithContext_Chaos *)&local_28,param_1,Write,param_3,param_4);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return bVar1;
}

// ExecuteWrite @ 14827de20

bool __cdecl
FPhysInterface_Chaos::ExecuteWrite
          (FPhysicsObject *param_1,FPhysicsObject *param_2,
          TFunctionRef<void___cdecl(Chaos::FPhysicsObject_*,Chaos::FPhysicsObject_*)> *param_3)

{
  FPhysicsObject *local_res8;
  FPhysicsObject *local_res10;
  FScopedSceneLock_Chaos local_28;
  
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_28,param_1,param_2,Write);
  local_res8 = param_2;
  local_res10 = param_1;
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res10,&local_res8);
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  return true;
}

// ExecuteWrite @ 14827de90

bool __cdecl
FPhysInterface_Chaos::ExecuteWrite
          (FPhysScene_Chaos *param_1,TFunctionRef<void___cdecl(FPhysScene_Chaos_*)> *param_2)

{
  FPhysicsRwLock *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  FPhysScene_Chaos *local_res18;
  code *local_38;
  undefined1 *local_30;
  FScopedSceneLock_Chaos local_28;
  
  if (param_1 == (FPhysScene_Chaos *)0x0) {
    return false;
  }
  local_28.Solver = (FPBDRigidsSolver *)param_1->_padding_;
  local_28.bHasLock = false;
  local_28.LockType = Write;
  local_28.ThreadContext = External;
  FScopedSceneLock_Chaos::LockScene(&local_28);
  local_res18 = param_1;
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res18);
  if (((local_28.bHasLock != false) && (local_28.Solver != (FPBDRigidsSolver *)0x0)) &&
     (this = (FPhysicsRwLock *)(local_28.Solver)->_padding_, this != (FPhysicsRwLock *)0x0)) {
    if (local_28.LockType == Read) {
      Chaos::FPhysicsRwLock::ReadUnlock(this);
    }
    else if (local_28.LockType == Write) {
      pvVar4 = TlsGetValue(this->TlsSlot);
      uVar7 = (int)((ulonglong)pvVar4 >> 0x20) - 1;
      TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar4 & 0xffffffff))
      ;
      if (uVar7 + (int)pvVar4 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)this);
      }
      puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_30 = local_res8;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar6 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
      if ((*(int *)&pFVar6[2].field_0x4 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GameThreadContext > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                             ,200,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + -1;
      Chaos::Insights::EndLockAcquireEvent();
      return true;
    }
  }
  return true;
}

// ExecuteWrite @ 14827e000

bool __cdecl
FPhysInterface_Chaos::ExecuteWrite
          (FPhysScene_Chaos *param_1,TFunctionRef<void___cdecl(void)> *param_2)

{
  FPhysicsRwLock *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FScopedSceneLock_Chaos local_28;
  
  if (param_1 == (FPhysScene_Chaos *)0x0) {
    return false;
  }
  local_28.Solver = (FPBDRigidsSolver *)param_1->_padding_;
  local_28.bHasLock = false;
  local_28.LockType = Write;
  local_28.ThreadContext = External;
  FScopedSceneLock_Chaos::LockScene(&local_28);
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
  if (((local_28.bHasLock != false) && (local_28.Solver != (FPBDRigidsSolver *)0x0)) &&
     (this = (FPhysicsRwLock *)(local_28.Solver)->_padding_, this != (FPhysicsRwLock *)0x0)) {
    if (local_28.LockType == Read) {
      Chaos::FPhysicsRwLock::ReadUnlock(this);
    }
    else if (local_28.LockType == Write) {
      pvVar4 = TlsGetValue(this->TlsSlot);
      uVar7 = (int)((ulonglong)pvVar4 >> 0x20) - 1;
      TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar4 & 0xffffffff))
      ;
      if (uVar7 + (int)pvVar4 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)this);
      }
      puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_30 = local_res8;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar6 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
      if ((*(int *)&pFVar6[2].field_0x4 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GameThreadContext > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                             ,200,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + -1;
      Chaos::Insights::EndLockAcquireEvent();
      return true;
    }
  }
  return true;
}

// ExecuteWrite @ 14827e150

bool __cdecl
FPhysInterface_Chaos::ExecuteWrite
          (USkeletalMeshComponent *param_1,TFunctionRef<void___cdecl(void)> *param_2)

{
  FScopedSceneLock_Chaos local_28;
  
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_28,param_1,Write);
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  return true;
}

// FlushScene @ 148282740

void __cdecl FPhysInterface_Chaos::FlushScene(FPhysScene_Chaos *param_1)

{
  int *piVar1;
  int iVar2;
  FPhysicsSolverBase *this;
  code *pcVar3;
  bool bVar4;
  double in_XMM1_Qa;
  undefined8 *puStackX_8;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                       ,0xa7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this = (FPhysicsSolverBase *)param_1->_padding_;
  if (this != (FPhysicsSolverBase *)0x0) {
    Chaos::FPhysicsSolverBase::AdvanceAndDispatch_External(this,in_XMM1_Qa);
    if (puStackX_8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puStackX_8 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puStackX_8 != (undefined8 *)0x0)) {
        (**(code **)*puStackX_8)(puStackX_8,1);
      }
    }
    Chaos::FPhysicsSolverBase::WaitOnPendingTasks_External(this);
    if (*(FPBDRigidsEvolutionBase **)&this[3].bSolverHasFrozenGameThreadCallbacks !=
        (FPBDRigidsEvolutionBase *)0x0) {
      Chaos::FPBDRigidsEvolutionBase::FlushSpatialAcceleration
                (*(FPBDRigidsEvolutionBase **)&this[3].bSolverHasFrozenGameThreadCallbacks);
    }
  }
  FChaosScene::CopySolverAccelerationStructure((FChaosScene *)param_1);
  return;
}

// GetCurrentSceneForComponent @ 148287470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPhysScene_Chaos * __cdecl
FPhysInterface_Chaos::GetCurrentSceneForComponent(USceneComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FBodyInstance *this;
  FSingleParticlePhysicsProxy **ppFVar3;
  FPhysScene_Chaos *pFVar4;
  UWorld *pUVar5;
  
  if (param_1 == (USceneComponent *)0x0) {
    return (FPhysScene_Chaos *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) &&
      (this = (FBodyInstance *)
              (**(code **)(param_1->_padding_ + 0x818))
                        (param_1,0,CONCAT71((int7)((ulonglong)&pUVar2->_padding_ >> 8),1),0xffffffff
                        ), this != (FBodyInstance *)0x0)) &&
     (ppFVar3 = FBodyInstance::GetPhysicsActorHandle(this),
     *ppFVar3 != (FSingleParticlePhysicsProxy *)0x0)) {
    ppFVar3 = FBodyInstance::GetPhysicsActorHandle(this);
    pFVar4 = (FPhysScene_Chaos *)FChaosEngineInterface::GetCurrentScene(ppFVar3);
    return pFVar4;
  }
  pUVar5 = (UWorld *)param_1->_padding_;
  if ((pUVar5 == (UWorld *)0x0) &&
     (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
     pUVar5 == (UWorld *)0x0)) {
    return (FPhysScene_Chaos *)0x0;
  }
  return pUVar5->PhysicsScene;
}

// GetSquaredDistanceToBody @ 14828e200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPhysInterface_Chaos::GetSquaredDistanceToBody
          (FBodyInstance *param_1,TVector<double> *param_2,float *param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  UObject *pUVar4;
  FString *pFVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_1a8 [32];
  char local_188;
  char local_187 [3];
  undefined4 local_184;
  FBodyInstance *local_180;
  FBodyInstance *local_178;
  undefined1 local_170 [16];
  TVector<double> *local_160;
  FSingleParticlePhysicsProxy *local_158;
  char *local_150;
  FBodyInstance **local_148;
  FBodyInstance **local_140;
  char *local_138;
  undefined1 *local_130;
  float *local_128;
  TVector<double> **local_120;
  TVector<double> *local_118;
  undefined4 *local_110;
  TTransform<double> *local_108;
  undefined1 local_100 [16];
  double local_f0;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  bVar6 = false;
  if (param_4 != (TVector<double> *)0x0) {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (param_4->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = dVar1;
    (param_4->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    *param_3 = 0.0;
  }
  local_184 = 0x7f7fc99e;
  local_188 = '\0';
  local_187[0] = '\x01';
  local_178 = param_1;
  if (param_1->WeldParent != (FBodyInstance *)0x0) {
    local_178 = param_1->WeldParent;
  }
  local_180 = param_1;
  local_160 = param_4;
  FBodyInstance::GetUnrealWorldTransform(local_178,&local_e8,true,false);
  local_150 = local_187;
  local_e8.Rotation.XY.m128d_f64[0] =
       local_e8.Rotation.XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_e8.Rotation.XY.m128d_f64[1] =
       local_e8.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_148 = &local_178;
  local_140 = &local_180;
  local_138 = &local_188;
  local_130 = local_100;
  local_120 = &local_160;
  local_e8.Rotation.ZW.m128d_f64[0] =
       local_e8.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_e8.Rotation.ZW.m128d_f64[1] =
       local_e8.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_e8.Translation.ZW.m128d_f64[0] =
       (param_2->field0_0x0)._s_0.Z - local_e8.Translation.ZW.m128d_f64[0];
  local_e8.Translation.XY.m128d_f64[0] =
       (param_2->field0_0x0)._s_0.X - local_e8.Translation.XY.m128d_f64[0];
  local_e8.Translation.XY.m128d_f64[1] =
       (param_2->field0_0x0)._s_0.Y - local_e8.Translation.XY.m128d_f64[1];
  uVar14 = (undefined4)((ulonglong)local_e8.Translation.XY.m128d_f64[1] >> 0x20);
  auVar16._8_4_ = SUB84(local_e8.Translation.XY.m128d_f64[1],0);
  auVar16._0_8_ = local_e8.Translation.XY.m128d_f64[0];
  auVar16._12_4_ = uVar14;
  auVar15._8_4_ = SUB84(local_e8.Rotation.XY.m128d_f64[1],0);
  auVar15._0_8_ = local_e8.Rotation.XY.m128d_f64[0];
  auVar15._12_4_ = (int)((ulonglong)local_e8.Rotation.XY.m128d_f64[1] >> 0x20);
  auVar8._8_4_ = SUB84(local_e8.Rotation.ZW.m128d_f64[1],0);
  auVar8._0_8_ = local_e8.Rotation.ZW.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)local_e8.Rotation.ZW.m128d_f64[1] >> 0x20);
  auVar15 = blendpd(auVar15,auVar8,2);
  auVar17._0_8_ =
       auVar16._8_8_ * local_e8.Rotation.XY.m128d_f64[0] -
       local_e8.Rotation.XY.m128d_f64[1] * local_e8.Translation.XY.m128d_f64[0];
  auVar17._8_8_ =
       local_e8.Translation.ZW.m128d_f64[0] * local_e8.Rotation.XY.m128d_f64[1] -
       local_e8.Rotation.ZW.m128d_f64[0] * local_e8.Translation.XY.m128d_f64[1];
  auVar7._8_4_ = SUB84(local_e8.Translation.XY.m128d_f64[1],0);
  auVar7._0_8_ = local_e8.Translation.XY.m128d_f64[0];
  auVar7._12_4_ = uVar14;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_e8.Translation.ZW.m128d_f64[0];
  auVar8 = blendpd(auVar7,auVar3,2);
  auVar9._0_8_ = auVar8._0_8_ * local_e8.Rotation.ZW.m128d_f64[0] -
                 auVar15._0_8_ * local_e8.Translation.ZW.m128d_f64[0];
  auVar9._8_8_ = auVar8._8_8_ * local_e8.Rotation.ZW.m128d_f64[1] - auVar15._8_8_ * 0.0;
  auVar8 = blendpd(auVar17,auVar9,2);
  dVar1 = auVar17._8_8_ + auVar17._8_8_;
  dVar2 = auVar9._0_8_ + auVar9._0_8_;
  uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar18._0_8_ = auVar8._0_8_ + auVar8._0_8_;
  auVar18._8_8_ = auVar8._8_8_ + auVar8._8_8_;
  auVar12._8_4_ = SUB84(dVar2,0);
  auVar12._0_8_ = dVar1;
  auVar12._12_4_ = uVar14;
  auVar10._8_4_ = SUB84(dVar2,0);
  auVar10._0_8_ = dVar1;
  auVar10._12_4_ = uVar14;
  auVar8 = blendpd(auVar10,auVar18,2);
  auVar13._0_8_ =
       auVar12._8_8_ * local_e8.Rotation.XY.m128d_f64[0] - dVar1 * local_e8.Rotation.XY.m128d_f64[1]
  ;
  auVar13._8_8_ =
       auVar18._0_8_ * local_e8.Rotation.XY.m128d_f64[1] - dVar2 * local_e8.Rotation.ZW.m128d_f64[0]
  ;
  auVar11._0_8_ = auVar8._0_8_ * local_e8.Rotation.ZW.m128d_f64[0] - auVar18._0_8_ * auVar15._0_8_;
  auVar11._8_8_ = auVar8._8_8_ * local_e8.Rotation.ZW.m128d_f64[1] - auVar18._8_8_ * auVar15._8_8_;
  auVar8 = blendpd(auVar13,auVar11,2);
  dVar2 = dVar2 * local_e8.Rotation.ZW.m128d_f64[1] + local_e8.Translation.XY.m128d_f64[1] +
          auVar11._0_8_;
  local_f0 = auVar18._0_8_ * local_e8.Rotation.ZW.m128d_f64[1] +
             local_e8.Translation.ZW.m128d_f64[0] + auVar8._0_8_;
  local_100._8_4_ = SUB84(dVar2,0);
  local_100._0_8_ =
       dVar1 * local_e8.Rotation.ZW.m128d_f64[1] + local_e8.Translation.XY.m128d_f64[0] +
       auVar13._8_8_;
  local_100._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_110 = &local_184;
  local_108 = &local_e8;
  local_170._8_8_ = &local_150;
  local_170._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPhysInterface_Chaos::GetSquaredDistanceToBody'::__l2::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
       ::Call;
  local_128 = param_3;
  local_118 = param_2;
  local_158 = FBodyInstance::GetPhysicsActor(local_178);
  ExecuteRead(&local_158,
              (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)local_170)
  ;
  if (((local_188 == '\0') && (local_187[0] == '\0')) && (5 < (byte)LogPhysics._0_1_)) {
    pUVar4 = FWeakObjectPtr::Get(&(local_180->OwnerComponent).WeakPtr);
    if (pUVar4 != (UObject *)0x0) {
      pUVar4 = FWeakObjectPtr::Get(&(local_180->OwnerComponent).WeakPtr);
      pFVar5 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)pUVar4,(FString *)local_170,(UObject *)0x0);
      if ((pFVar5->Data).ArrayNum == 0) {
        bVar6 = true;
      }
      else {
        bVar6 = true;
      }
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    if ((bVar6) && ((FScriptContainerElement *)local_170._0_8_ != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_170._0_8_);
    }
  }
  return (bool)local_188;
}

// IsInScene @ 148294ef0

bool __cdecl FPhysInterface_Chaos::IsInScene(FSingleParticlePhysicsProxy **param_1)

{
  FChaosScene *pFVar1;
  
  pFVar1 = FChaosEngineInterface::GetCurrentScene(param_1);
  return pFVar1 != (FChaosScene *)0x0;
}

// LineTrace_Geom @ 148295bb0

bool __cdecl
FPhysInterface_Chaos::LineTrace_Geom
          (FHitResult *param_1,FBodyInstance *param_2,TVector<double> *param_3,
          TVector<double> *param_4,bool param_5,bool param_6)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 local_res8 [8];
  FBodyInstance *local_res10;
  float local_res18 [2];
  FSingleParticlePhysicsProxy *local_res20;
  code *local_98;
  FBodyInstance ***local_90;
  double local_88;
  double local_80;
  double local_78;
  FBodyInstance **local_70;
  TVector<double> *local_68;
  double *local_60;
  bool *local_58;
  float *local_50;
  FHitResult *local_48;
  TVector<double> *local_40;
  bool *local_38;
  undefined1 *local_30;
  
  local_res10 = param_2;
  if ((param_2 == (FBodyInstance *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysInterface_Chaos.cpp"
                         ,0x38e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  local_res8[0] = 0;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  *(double *)&param_1->TraceStart = (param_3->field0_0x0)._s_0.X;
  *(double *)&(param_1->TraceStart).field_0x8 = dVar3;
  *(double *)&(param_1->TraceStart).field_0x10 = dVar1;
  dVar3 = (param_4->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  *(double *)&param_1->TraceEnd = (param_4->field0_0x0)._s_0.X;
  *(double *)&(param_1->TraceEnd).field_0x8 = dVar3;
  *(double *)&(param_1->TraceEnd).field_0x10 = dVar1;
  local_88 = (param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  local_80 = (param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  local_78 = (param_4->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  auVar6._0_8_ = local_78 * local_78;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_80 * local_80 + local_88 * local_88 + auVar6._0_8_;
  auVar7 = sqrtpd(auVar6,auVar7);
  local_res18[0] = (float)auVar7._0_8_;
  if (local_res18[0] <= __real_38d1b717) {
    return false;
  }
  local_70 = &local_res10;
  local_60 = &local_88;
  local_58 = &param_5;
  local_50 = local_res18;
  local_38 = &param_6;
  local_30 = local_res8;
  local_90 = &local_70;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPhysInterface_Chaos::LineTrace_Geom'::__l13::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
             ::Call;
  local_68 = param_3;
  local_48 = param_1;
  local_40 = param_4;
  local_res20 = FBodyInstance::GetPhysicsActor(local_res10);
  ExecuteRead(&local_res20,
              (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)&local_98)
  ;
  return (bool)local_res8[0];
}

// Overlap_Geom @ 148299f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPhysInterface_Chaos::Overlap_Geom
          (FBodyInstance *param_1,FCollisionShape *param_2,TQuat<double> *param_3,
          TTransform<double> *param_4,FMTDResult *param_5,bool param_6)

{
  bool bVar1;
  TTransform<double> *pTVar2;
  FImplicitObject *pFVar3;
  undefined1 auStack_108 [32];
  TVector<double>_u_0 local_d8;
  FPhysicsShapeAdapter_Chaos local_b8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos(&local_b8,param_3,param_2);
  local_d8._s_0.X = (param_4->Translation).XY.m128d_f64[0];
  local_d8._s_0.Y = (param_4->Translation).XY.m128d_f64[1];
  local_d8._s_0.Z = (param_4->Translation).ZW.m128d_f64[0];
  pTVar2 = FPhysicsShapeAdapter_Chaos::GetGeomPose
                     (&local_b8,&local_88,(TVector<double> *)&local_d8._s_0);
  pFVar3 = FPhysicsShapeAdapter_Chaos::GetGeometry(&local_b8);
  bVar1 = Overlap_GeomInternal(param_1,pFVar3,pTVar2,param_5,param_6);
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_b8);
  return bVar1;
}

// Overlap_Geom @ 14829a020

bool __cdecl
FPhysInterface_Chaos::Overlap_Geom
          (FBodyInstance *param_1,FPhysicsGeometryCollection_Chaos *param_2,
          TTransform<double> *param_3,FMTDResult *param_4,bool param_5)

{
  bool bVar1;
  FImplicitObject *pFVar2;
  
  pFVar2 = FPhysicsGeometryCollection_Chaos::GetGeometry(param_2);
  bVar1 = Overlap_GeomInternal(param_1,pFVar2,param_3,param_4,param_5);
  return bVar1;
}

// SetAngularMotionLimitType_AssumesLocked @ 1482a98e0

void __cdecl
FPhysInterface_Chaos::SetAngularMotionLimitType_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,ELimitAxis param_2,
          EAngularConstraintMotion param_3)

{
  FConstraintBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  EJointMotionType EVar4;
  IPhysicsProxyBase *pIVar5;
  
  bVar3 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
     (pFVar1 != (FConstraintBase *)0x0)) {
    if (param_2 == Twist) {
      EVar4 = ConvertMotionType(param_3);
      pIVar5 = pFVar1->Proxy;
      pFVar1[10].DirtyFlags.Bits = EVar4;
    }
    else if (param_2 == Swing1) {
      EVar4 = ConvertMotionType(param_3);
      pIVar5 = pFVar1->Proxy;
      *(EJointMotionType *)&pFVar1[0xb]._padding_ = EVar4;
    }
    else {
      if (param_2 != Swing2) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<635270038680502586>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysInterface_Chaos.cpp"
                           ,0x13a,"false");
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar4 = ConvertMotionType(param_3);
      pIVar5 = pFVar1->Proxy;
      *(EJointMotionType *)&pFVar1[10].field_0x1c = EVar4;
    }
    (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
  }
  return;
}

// SetLinearMotionLimitType_AssumesLocked @ 1482abff0

void __cdecl
FPhysInterface_Chaos::SetLinearMotionLimitType_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,ELimitAxis param_2,
          ELinearConstraintMotion param_3)

{
  FConstraintBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  EJointMotionType EVar4;
  IPhysicsProxyBase *pIVar5;
  
  bVar3 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
     (pFVar1 != (FConstraintBase *)0x0)) {
    if (param_2 == X) {
      EVar4 = ConvertMotionType(param_3);
      pIVar5 = pFVar1->Proxy;
      *(EJointMotionType *)&pFVar1[10]._padding_ = EVar4;
    }
    else if (param_2 == Y) {
      EVar4 = ConvertMotionType(param_3);
      pIVar5 = pFVar1->Proxy;
      *(EJointMotionType *)((longlong)&pFVar1[10]._padding_ + 4) = EVar4;
    }
    else {
      if (param_2 != Z) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<635270038680502541>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysInterface_Chaos.cpp"
                           ,0x10d,"false");
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar4 = ConvertMotionType(param_3);
      pIVar5 = pFVar1->Proxy;
      pFVar1[10].Type = EVar4;
    }
    (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
  }
  return;
}

// SetMaterials @ 1482aca60

void __cdecl
FPhysInterface_Chaos::SetMaterials
          (FPhysicsShapeReference_Chaos *param_1,TArrayView<UPhysicalMaterial_*,int> *param_2)

{
  int *piVar1;
  FShapeInstance *pFVar2;
  UPhysicalMaterial **ppUVar3;
  uint uVar4;
  FShapeInstance *this;
  IPhysicsProxyBase *pIVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  int iVar7;
  bool bVar8;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> *pTVar9;
  FMaterialData *pFVar10;
  longlong lVar11;
  UPhysicalMaterial **ppUVar12;
  ForAnyElementType local_28;
  int local_20;
  int iStack_1c;
  
  uVar4 = param_2->ArrayNum;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  iStack_1c = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,&stack0xffffffffffffffd8,0,&stack0xffffffffffffffe4);
  }
  ppUVar12 = param_2->DataPtr;
  ppUVar3 = ppUVar12 + (int)uVar4;
  while( true ) {
    if (ppUVar12 == ppUVar3) {
      this = (FShapeInstance *)param_1->Shape;
      if ((this->_padding_ & 3) == 0) {
        lVar11 = this->_padding_;
        pFVar2 = this + 1;
        pIVar5 = *(IPhysicsProxyBase **)&(this->CollisionData).QueryData;
        if (pFVar2 != (FShapeInstance *)&stack0xffffffffffffffd8) {
          if ((void *)pFVar2->_padding_ != (void *)0x0) {
            FMemory::Free((void *)pFVar2->_padding_);
          }
          pFVar2->_padding_ = (longlong)local_28.Data;
          local_28.Data = (FScriptContainerElement *)0x0;
          *(int *)&this[1]._padding_ = local_20;
          *(int *)((longlong)&this[1]._padding_ + 4) = iStack_1c;
          local_20 = 0;
          iStack_1c = 0;
        }
        uVar4 = *(uint *)((longlong)&this->_padding_ + 4);
        *(uint *)((longlong)&this->_padding_ + 4) = uVar4 | 2;
        if (((uVar4 == 0) && (pIVar5 != (IPhysicsProxyBase *)0x0)) &&
           (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
          Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar5->Solver,pIVar5,(uint)lVar11 >> 3);
        }
      }
      else {
        pFVar10 = Chaos::FShapeInstance::GetMaterialDataImpl(this);
        iVar7 = local_20;
        _Src.Data = local_28.Data;
        if (pFVar10 != (FMaterialData *)&stack0xffffffffffffffd8) {
          lVar11 = (longlong)local_20;
          piVar1 = &(pFVar10->Materials).ArrayMax;
          (pFVar10->Materials).ArrayNum = local_20;
          if ((local_20 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_20,*piVar1,(ForAnyElementType *)pFVar10,local_20,piVar1);
            if (iVar7 != 0) {
              memcpy((pFVar10->Materials).AllocatorInstance.Data,_Src.Data,lVar11 << 2);
            }
          }
        }
      }
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
      return;
    }
    pTVar9 = &UPhysicalMaterial::GetPhysicsMaterial(*ppUVar12)->InnerHandle;
    if (((local_28.Data <= pTVar9) && (pTVar9 < local_28.Data + (longlong)iStack_1c * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) break;
    if (local_20 == iStack_1c) {
      local_20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&stack0xffffffffffffffd8,&stack0xffffffffffffffe4);
    }
    ppUVar12 = ppUVar12 + 1;
    *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)(local_28.Data + (longlong)local_20 * 4) =
         *pTVar9;
    local_20 = local_20 + 1;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// SetMaterials @ 1482acca0

void __cdecl
FPhysInterface_Chaos::SetMaterials
          (FPhysicsShapeReference_Chaos *param_1,TArrayView<UPhysicalMaterial_*,int> *param_2,
          TArrayView<FPhysicalMaterialMaskParams,int> *param_3)

{
  FShapeInstance *pFVar1;
  IPhysicsProxyBase *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UPhysicalMaterial *this;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> *pTVar7;
  THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *pTVar8;
  longlong lVar9;
  FMaterialData *pFVar10;
  FPhysicalMaterialMaskParams *pFVar11;
  int iVar12;
  uint uVar13;
  FPhysicalMaterialMaskParams *pFVar14;
  undefined4 local_78 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_70;
  TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> local_60;
  TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> local_50;
  TArrayView<UPhysicalMaterial_*,int> local_38;
  
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  SetMaterials(param_1,&local_38);
  if (0 < param_3->ArrayNum) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_3->ArrayNum,&local_60.AllocatorInstance,0,&local_60.ArrayMax);
    uVar13 = param_3->ArrayNum * 8;
    if (param_3->ArrayNum << 3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (local_70.ArrayMax < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar13,&local_70.AllocatorInstance,local_70.ArrayNum,&local_70.ArrayMax);
    }
    pFVar11 = param_3->DataPtr;
    pFVar14 = pFVar11 + param_3->ArrayNum;
    iVar12 = 0;
    if (pFVar11 != pFVar14) {
      do {
        if (pFVar11->PhysicalMaterialMask == (UPhysicalMaterialMask *)0x0) {
LAB_1482acdca:
          local_78[0] = 0;
          if (((local_60.AllocatorInstance.Data <= (FScriptContainerElement *)local_78) &&
              ((FScriptContainerElement *)local_78 <
               local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = local_60.ArrayNum;
          if (local_60.ArrayNum == local_60.ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_60.AllocatorInstance,&local_60.ArrayMax);
          }
          local_60.ArrayNum = iVar5 + 1;
          *(undefined4 *)(local_60.AllocatorInstance.Data + (longlong)iVar5 * 4) = local_78[0];
          iVar5 = local_70.ArrayNum;
          if (local_70.ArrayNum == local_70.ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
          }
          iVar6 = iVar5 + 1;
          *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)iVar5 * 4) = 0xffffffff;
          if (iVar6 == local_70.ArrayMax) {
            local_70.ArrayNum = iVar6;
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
          }
          local_70.ArrayNum = iVar6 + 1;
          *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)iVar6 * 4) = 0xffffffff;
          if (local_70.ArrayNum == local_70.ArrayMax) {
            local_70.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
          }
          iVar5 = local_70.ArrayNum + 1;
          *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) =
               0xffffffff;
          if (iVar5 == local_70.ArrayMax) {
            local_70.ArrayNum = iVar5;
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
          }
          local_70.ArrayNum = iVar5 + 1;
          *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)iVar5 * 4) = 0xffffffff;
          if (local_70.ArrayNum == local_70.ArrayMax) {
            local_70.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
          }
          iVar5 = local_70.ArrayNum + 1;
          *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) =
               0xffffffff;
          if (iVar5 == local_70.ArrayMax) {
            local_70.ArrayNum = iVar5;
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
          }
          iVar6 = iVar5 + 1;
          *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)iVar5 * 4) = 0xffffffff;
          if (iVar6 == local_70.ArrayMax) {
            local_70.ArrayNum = iVar6;
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
          }
          local_70.ArrayNum = iVar6 + 1;
          *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)iVar6 * 4) = 0xffffffff;
LAB_1482acfad:
          iVar5 = local_70.ArrayNum;
          if (local_70.ArrayNum == local_70.ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
          }
          local_70.ArrayNum = iVar5 + 1;
          *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)iVar5 * 4) = 0xffffffff;
        }
        else {
          if (pFVar11->PhysicalMaterialMap == (UMaterialInterface *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<635270038680503120>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysInterface_Chaos.cpp"
                               ,0x350,"MaterialMaskData.PhysicalMaterialMap");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            goto LAB_1482acdca;
          }
          pTVar8 = &UPhysicalMaterialMask::GetPhysicsMaterialMask(pFVar11->PhysicalMaterialMask)->
                    InnerHandle;
          if (((local_60.AllocatorInstance.Data <= pTVar8) &&
              (pTVar8 < local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = local_60.ArrayNum;
          if (local_60.ArrayNum == local_60.ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_60.AllocatorInstance,&local_60.ArrayMax);
          }
          local_60.ArrayNum = iVar5 + 1;
          *(THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)
           (local_60.AllocatorInstance.Data + (longlong)iVar5 * 4) = *pTVar8;
          lVar9 = (**(code **)(pFVar11->PhysicalMaterialMap->_padding_ + 0x328))
                            (pFVar11->PhysicalMaterialMap,0);
          iVar5 = local_70.ArrayNum;
          if (lVar9 == 0) {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)iVar5 * 4) = 0xffffffff;
          }
          else {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(int *)(local_70.AllocatorInstance.Data + (longlong)iVar5 * 4) = iVar12;
            iVar12 = iVar12 + 1;
          }
          local_70.ArrayNum = iVar5 + 1;
          lVar9 = (**(code **)(pFVar11->PhysicalMaterialMap->_padding_ + 0x328))
                            (pFVar11->PhysicalMaterialMap,1);
          if (lVar9 == 0) {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) =
                 0xffffffff;
          }
          else {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(int *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) = iVar12;
            iVar12 = iVar12 + 1;
          }
          local_70.ArrayNum = local_70.ArrayNum + 1;
          lVar9 = (**(code **)(pFVar11->PhysicalMaterialMap->_padding_ + 0x328))
                            (pFVar11->PhysicalMaterialMap,2);
          if (lVar9 == 0) {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) =
                 0xffffffff;
          }
          else {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(int *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) = iVar12;
            iVar12 = iVar12 + 1;
          }
          local_70.ArrayNum = local_70.ArrayNum + 1;
          lVar9 = (**(code **)(pFVar11->PhysicalMaterialMap->_padding_ + 0x328))
                            (pFVar11->PhysicalMaterialMap,3);
          if (lVar9 == 0) {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) =
                 0xffffffff;
          }
          else {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(int *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) = iVar12;
            iVar12 = iVar12 + 1;
          }
          local_70.ArrayNum = local_70.ArrayNum + 1;
          lVar9 = (**(code **)(pFVar11->PhysicalMaterialMap->_padding_ + 0x328))
                            (pFVar11->PhysicalMaterialMap,4);
          if (lVar9 == 0) {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) =
                 0xffffffff;
          }
          else {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(int *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) = iVar12;
            iVar12 = iVar12 + 1;
          }
          local_70.ArrayNum = local_70.ArrayNum + 1;
          lVar9 = (**(code **)(pFVar11->PhysicalMaterialMap->_padding_ + 0x328))
                            (pFVar11->PhysicalMaterialMap,5);
          if (lVar9 == 0) {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) =
                 0xffffffff;
          }
          else {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(int *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) = iVar12;
            iVar12 = iVar12 + 1;
          }
          local_70.ArrayNum = local_70.ArrayNum + 1;
          lVar9 = (**(code **)(pFVar11->PhysicalMaterialMap->_padding_ + 0x328))
                            (pFVar11->PhysicalMaterialMap,6);
          if (lVar9 == 0) {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(undefined4 *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) =
                 0xffffffff;
          }
          else {
            if (local_70.ArrayNum == local_70.ArrayMax) {
              local_70.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            *(int *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4) = iVar12;
            iVar12 = iVar12 + 1;
          }
          local_70.ArrayNum = local_70.ArrayNum + 1;
          lVar9 = (**(code **)(pFVar11->PhysicalMaterialMap->_padding_ + 0x328))();
          if (lVar9 == 0) goto LAB_1482acfad;
          iVar5 = local_70.ArrayNum;
          if (local_70.ArrayNum == local_70.ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
          }
          local_70.ArrayNum = iVar5 + 1;
          *(int *)(local_70.AllocatorInstance.Data + (longlong)iVar5 * 4) = iVar12;
          iVar12 = iVar12 + 1;
        }
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != pFVar14);
      if (0 < iVar12) {
        if (local_50.ArrayMax < iVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar12,&local_50.AllocatorInstance,local_50.ArrayNum,&local_50.ArrayMax);
        }
        pFVar11 = param_3->DataPtr;
        pFVar14 = pFVar11 + param_3->ArrayNum;
        for (; pFVar11 != pFVar14; pFVar11 = pFVar11 + 1) {
          iVar12 = 0;
          if (pFVar11->PhysicalMaterialMask != (UPhysicalMaterialMask *)0x0) {
            do {
              this = (UPhysicalMaterial *)
                     (**(code **)(pFVar11->PhysicalMaterialMap->_padding_ + 0x328))
                               (pFVar11->PhysicalMaterialMap,iVar12);
              if (this != (UPhysicalMaterial *)0x0) {
                pTVar7 = &UPhysicalMaterial::GetPhysicsMaterial(this)->InnerHandle;
                if (((local_50.AllocatorInstance.Data <= pTVar7) &&
                    (pTVar7 < local_50.AllocatorInstance.Data + (longlong)local_50.ArrayMax * 4)) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar5 = local_50.ArrayNum;
                if (local_50.ArrayNum == local_50.ArrayMax) {
                  iVar5 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
                }
                local_50.ArrayNum = iVar5 + 1;
                *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)
                 (local_50.AllocatorInstance.Data + (longlong)iVar5 * 4) = *pTVar7;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < 8);
          }
        }
      }
    }
    pFVar1 = (FShapeInstance *)param_1->Shape;
    if ((pFVar1->_padding_ & 3) == 0) {
      lVar9 = pFVar1->_padding_;
      pIVar2 = *(IPhysicsProxyBase **)&(pFVar1->CollisionData).QueryData;
      TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *)
                 &pFVar1[1]._padding_,&local_60);
      uVar13 = *(uint *)((longlong)&pFVar1->_padding_ + 4);
      *(uint *)((longlong)&pFVar1->_padding_ + 4) = uVar13 | 2;
      if (((uVar13 == 0) && (pIVar2 != (IPhysicsProxyBase *)0x0)) &&
         (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,(uint)lVar9 >> 3);
      }
    }
    else {
      pFVar10 = Chaos::FShapeInstance::GetMaterialDataImpl(pFVar1);
      TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_>::operator=
                (&pFVar10->MaterialMasks,&local_60);
    }
    pFVar1 = (FShapeInstance *)param_1->Shape;
    if ((pFVar1->_padding_ & 3) == 0) {
      lVar9 = pFVar1->_padding_;
      pIVar2 = *(IPhysicsProxyBase **)&(pFVar1->CollisionData).QueryData;
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&pFVar1[1]._padding_,&local_70)
      ;
      uVar13 = *(uint *)((longlong)&pFVar1->_padding_ + 4);
      *(uint *)((longlong)&pFVar1->_padding_ + 4) = uVar13 | 2;
      if (((uVar13 == 0) && (pIVar2 != (IPhysicsProxyBase *)0x0)) &&
         (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,(uint)lVar9 >> 3);
      }
    }
    else {
      pFVar10 = Chaos::FShapeInstance::GetMaterialDataImpl(pFVar1);
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                (&pFVar10->MaterialMaskMaps,&local_70);
    }
    pFVar1 = (FShapeInstance *)param_1->Shape;
    if ((pFVar1->_padding_ & 3) == 0) {
      lVar9 = pFVar1->_padding_;
      pIVar2 = *(IPhysicsProxyBase **)&(pFVar1->CollisionData).QueryData;
      TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *)&pFVar1[1]._padding_,
                 &local_50);
      uVar13 = *(uint *)((longlong)&pFVar1->_padding_ + 4);
      *(uint *)((longlong)&pFVar1->_padding_ + 4) = uVar13 | 2;
      if (((uVar13 == 0) && (pIVar2 != (IPhysicsProxyBase *)0x0)) &&
         (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,(uint)lVar9 >> 3);
      }
    }
    else {
      pFVar10 = Chaos::FShapeInstance::GetMaterialDataImpl(pFVar1);
      TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_>::operator=
                (&pFVar10->MaterialMaskMapMaterials,&local_50);
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  return;
}

// ShapeToOriginalBodyInstance @ 1482af020

FBodyInstance * __cdecl
FPhysInterface_Chaos::ShapeToOriginalBodyInstance(FBodyInstance *param_1,FPerShapeData *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  FPerShapeData *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FBodyInstance *pFVar9;
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *pTVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  FPerShapeData *local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_res10 = param_2;
  if ((param_1 == (FBodyInstance *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCurrentInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysInterface_Chaos.cpp"
                         ,0x2e4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FBodyInstance *)(*pcVar4)();
    return pFVar9;
  }
  if ((param_2 == (FPerShapeData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InShape",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysInterface_Chaos.cpp"
                         ,0x2e5,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FBodyInstance *)(*pcVar4)();
    return pFVar9;
  }
  pFVar9 = param_1;
  if (param_1->WeldParent != (FBodyInstance *)0x0) {
    pFVar9 = param_1->WeldParent;
  }
  pTVar10 = FBodyInstance::GetCurrentWeldInfo(param_1);
  if (pTVar10 !=
      (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
       *)0x0) {
    iVar3 = *(int *)&pTVar10->field_0x28;
    iVar14 = 0;
    uVar7 = 1;
    puVar1 = &pTVar10->field_0x10;
    iVar16 = 0;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&pTVar10->field_0x20;
      if (*(uint **)&pTVar10->field_0x20 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1482af14d;
        uVar13 = puVar17[lVar11 + 1];
      }
      uVar7 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res18 = (int)lVar11;
      iVar8 = iVar16 + -1 + local_res18;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_1482af14d:
    uVar13 = *(uint *)&pTVar10->field_0x28;
    uVar12 = uVar13 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar14);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_60._28_4_ = local_9c;
    TStack_60.BaseBitIndex = iVar16;
    uStack_40 = CONCAT44(uStack_6c,*(int *)&pTVar10->field_0x8 - *(int *)&pTVar10->field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FBodyInstance *)(*pcVar4)();
      return pFVar9;
    }
    pFVar5 = local_res10;
    uVar7 = *(uint *)&pTVar10->field_0x28;
    if (uVar13 != uVar7) {
      puVar15 = *(undefined1 **)&pTVar10->field_0x20;
      if (*(undefined1 **)&pTVar10->field_0x20 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar14;
        uVar12 = uVar12 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1482af260;
        uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar13 = (int)lVar11 + -1 + uVar12;
      if ((int)uVar7 < (int)uVar13) {
        uVar13 = uVar7;
      }
    }
LAB_1482af260:
    while( true ) {
      if (*(int *)&pTVar10->field_0x8 - *(int *)&pTVar10->field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar13) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      if (*(FPerShapeData **)(*(longlong *)pTVar10 + (longlong)TStack_60.CurrentBitIndex * 0x90) ==
          pFVar5) {
        pFVar9 = *(FBodyInstance **)
                  (*(longlong *)pTVar10 + 0x10 + (longlong)TStack_60.CurrentBitIndex * 0x90);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return pFVar9;
}

// Sweep_Geom @ 1482b28f0

bool __cdecl
FPhysInterface_Chaos::Sweep_Geom
          (FHitResult *param_1,FBodyInstance *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TQuat<double> *param_5,FCollisionShape *param_6,bool param_7)

{
  float fVar1;
  double dVar2;
  Type TVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  FBodyInstance *local_res10;
  undefined1 local_128 [8];
  bool local_120 [8];
  undefined1 local_118 [8];
  float local_110 [2];
  FBodyInstance *local_108;
  FSingleParticlePhysicsProxy *local_100;
  FBodyInstance *local_f8;
  FSingleParticlePhysicsProxy *local_f0;
  code *local_e8;
  FBodyInstance ***local_e0;
  code *local_d8;
  FBodyInstance ***local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  FBodyInstance **local_b0;
  TVector<double> *local_a8;
  double *local_a0;
  bool *local_98;
  float *local_90;
  FHitResult *local_88;
  TVector<double> *local_80;
  undefined1 *local_78;
  FCollisionShape **local_70;
  FBodyInstance **local_68;
  TQuat<double> *local_60;
  FCollisionShape *local_58;
  TVector<double> *local_50;
  TVector<double> *local_48;
  FBodyInstance **local_40;
  bool *local_38;
  FHitResult *local_30;
  undefined1 *local_28;
  
  fVar6 = __real_38d1b717;
  local_58 = param_6;
  local_128[0] = 0;
  TVar3 = param_6->ShapeType;
  local_res10 = param_2;
  if (TVar3 == Box) {
    if (((param_6->field1_0x4).Box.HalfExtentX <= __real_38d1b717) &&
       ((param_6->field1_0x4).Box.HalfExtentY <= __real_38d1b717)) {
      fVar1 = (param_6->field1_0x4).Box.HalfExtentZ;
      goto joined_r0x0001482b2a47;
    }
LAB_1482b295c:
    dVar5 = (param_3->field0_0x0)._s_0.Y;
    dVar2 = (param_3->field0_0x0)._s_0.Z;
    *(double *)&param_1->TraceStart = (param_3->field0_0x0)._s_0.X;
    *(double *)&(param_1->TraceStart).field_0x8 = dVar5;
    *(double *)&(param_1->TraceStart).field_0x10 = dVar2;
    dVar5 = (param_4->field0_0x0)._s_0.Y;
    dVar2 = (param_4->field0_0x0)._s_0.Z;
    *(double *)&param_1->TraceEnd = (param_4->field0_0x0)._s_0.X;
    *(double *)&(param_1->TraceEnd).field_0x8 = dVar5;
    *(double *)&(param_1->TraceEnd).field_0x10 = dVar2;
    local_f8 = param_2;
    if (param_2->WeldParent != (FBodyInstance *)0x0) {
      local_f8 = param_2->WeldParent;
    }
    local_68 = &local_res10;
    local_60 = param_5;
    local_40 = &local_f8;
    local_38 = &param_7;
    local_28 = local_128;
    local_d0 = &local_68;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPhysInterface_Chaos::Sweep_Geom'::__l7::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
               ::Call;
    local_50 = param_4;
    local_48 = param_3;
    local_30 = param_1;
    local_f0 = FBodyInstance::GetPhysicsActor(local_f8);
    ExecuteRead(&local_f0,
                (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                &local_d8);
    uVar8 = local_128[0];
  }
  else {
    if ((TVar3 == Sphere) || (TVar3 == Capsule)) {
      fVar1 = (param_6->field1_0x4).Box.HalfExtentX;
joined_r0x0001482b2a47:
      if (__real_38d1b717 < fVar1) goto LAB_1482b295c;
    }
    local_120[0] = param_7;
    local_118[0] = 0;
    local_108 = param_2;
    if ((param_2 == (FBodyInstance *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InInstance",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysInterface_Chaos.cpp"
                           ,0x38e,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    dVar5 = (param_3->field0_0x0)._s_0.Y;
    uVar8 = 0;
    dVar2 = (param_3->field0_0x0)._s_0.Z;
    *(double *)&param_1->TraceStart = (param_3->field0_0x0)._s_0.X;
    *(double *)&(param_1->TraceStart).field_0x8 = dVar5;
    param_6._0_1_ = 0;
    *(double *)&(param_1->TraceStart).field_0x10 = dVar2;
    dVar5 = (param_4->field0_0x0)._s_0.Y;
    dVar2 = (param_4->field0_0x0)._s_0.Z;
    *(double *)&param_1->TraceEnd = (param_4->field0_0x0)._s_0.X;
    *(double *)&(param_1->TraceEnd).field_0x8 = dVar5;
    *(double *)&(param_1->TraceEnd).field_0x10 = dVar2;
    local_c8 = (param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    local_c0 = (param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    local_b8 = (param_4->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    auVar9._0_8_ = local_b8 * local_b8;
    auVar9._8_8_ = 0;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_c0 * local_c0 + local_c8 * local_c8 + auVar9._0_8_;
    auVar10 = sqrtpd(auVar9,auVar10);
    local_110[0] = (float)auVar10._0_8_;
    if (fVar6 < local_110[0]) {
      local_b0 = &local_108;
      local_a0 = &local_c8;
      local_98 = local_120;
      local_90 = local_110;
      local_78 = local_118;
      local_70 = &param_6;
      local_e0 = &local_b0;
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPhysInterface_Chaos::LineTrace_Geom'::__l13::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                 ::Call;
      local_a8 = param_3;
      local_88 = param_1;
      local_80 = param_4;
      local_100 = FBodyInstance::GetPhysicsActor(local_108);
      ExecuteRead(&local_100,
                  (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                  &local_e8);
      uVar8 = param_6._0_1_;
    }
  }
  return (bool)uVar8;
}

// UpdateAngularDrive_AssumesLocked @ 1482b6c10

/* WARNING: Type propagation algorithm not settling */

void __cdecl
FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,FAngularDriveConstraint *param_2,bool param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  FJointConstraint *this;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  TQuat<double> *pTVar14;
  IPhysicsProxyBase *pIVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  TQuat<double> local_48 [2];
  
  bVar13 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (!bVar13) {
    return;
  }
  this = (FJointConstraint *)param_1->Constraint;
  if ((int)this->_padding_ != 1) {
    return;
  }
  if (this == (FJointConstraint *)0x0) {
    return;
  }
  pIVar15 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularSLerpPositionDriveEnabled = false;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
  }
  pIVar15 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularTwistPositionDriveEnabled = false;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
  }
  pIVar15 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularSwingPositionDriveEnabled = false;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
  }
  pIVar15 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularSLerpVelocityDriveEnabled = false;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
  }
  pIVar15 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularTwistVelocityDriveEnabled = false;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
  }
  pIVar15 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bAngularSwingVelocityDriveEnabled = false;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
  }
  dVar7 = __real_47efffffe0000000;
  dVar18 = __real_3e45798ee2308c3a;
  if ((param_2->AngularDriveMode).Value == '\x01') {
    bVar13 = (param_2->TwistDrive).bEnablePositionDrive;
    if ((bVar13 != false) || ((param_2->SwingDrive).bEnablePositionDrive != 0)) {
      Chaos::FJointConstraint::SetAngularTwistPositionDriveEnabled(this,bVar13);
      Chaos::FJointConstraint::SetAngularSwingPositionDriveEnabled
                (this,(param_2->SwingDrive).bEnablePositionDrive);
LAB_1482b6d8e:
      if ((param_3) ||
         (dVar6 = (this->JointSettings).Property.AngularPlasticityLimit - dVar7,
         uVar16 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar17 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar17,uVar16) < dVar18 || (double)CONCAT44(uVar17,uVar16) == dVar18)) {
        pTVar14 = UE::Math::TRotator<double>::Quaternion(&param_2->OrientationTarget,local_48);
        pIVar15 = (IPhysicsProxyBase *)this->_padding_;
        dVar6 = pTVar14->Y;
        *(double *)&(this->JointSettings).Property.AngularDrivePositionTarget.field_0x0 = pTVar14->X
        ;
        *(double *)&(this->JointSettings).Property.AngularDrivePositionTarget.field_0x8 = dVar6;
        dVar6 = pTVar14->W;
        *(double *)&(this->JointSettings).Property.AngularDrivePositionTarget.field_0x10 =
             pTVar14->Z;
        *(double *)&(this->JointSettings).Property.AngularDrivePositionTarget.field_0x18 = dVar6;
        *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
        if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0))
        {
          Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
        }
      }
    }
  }
  else {
    bVar13 = (param_2->SlerpDrive).bEnablePositionDrive;
    if (bVar13 != false) {
      Chaos::FJointConstraint::SetAngularSLerpPositionDriveEnabled(this,bVar13);
      goto LAB_1482b6d8e;
    }
  }
  if ((param_2->AngularDriveMode).Value == '\x01') {
    if (((param_2->TwistDrive).bEnableVelocityDrive == '\0') &&
       ((param_2->SwingDrive).bEnableVelocityDrive == '\0')) goto LAB_1482b6ef8;
    Chaos::FJointConstraint::SetAngularTwistVelocityDriveEnabled
              (this,(param_2->TwistDrive).bEnableVelocityDrive);
    Chaos::FJointConstraint::SetAngularSwingVelocityDriveEnabled
              (this,(param_2->SwingDrive).bEnableVelocityDrive);
  }
  else {
    bVar13 = (param_2->SlerpDrive).bEnableVelocityDrive;
    if (bVar13 == false) goto LAB_1482b6ef8;
    Chaos::FJointConstraint::SetAngularSLerpVelocityDriveEnabled(this,bVar13);
  }
  dVar7 = (this->JointSettings).Property.AngularPlasticityLimit - dVar7;
  uVar16 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar17,uVar16) < dVar18 || (double)CONCAT44(uVar17,uVar16) == dVar18) {
    pIVar15 = (IPhysicsProxyBase *)this->_padding_;
    dVar7 = (param_2->AngularVelocityTarget).field0_0x0._s_0.Y * __real_401921fb60000000;
    dVar18 = (param_2->AngularVelocityTarget).field0_0x0._s_0.Z * __real_401921fb60000000;
    auVar10._8_4_ = SUB84(dVar7,0);
    auVar10._0_8_ = (param_2->AngularVelocityTarget).field0_0x0._s_0.X * __real_401921fb60000000;
    auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])&(this->JointSettings).Property.AngularDriveVelocityTarget = auVar10;
    *(double *)&(this->JointSettings).Property.AngularDriveVelocityTarget.field_0x10 = dVar18;
  }
  else {
    local_48[0].Z = *(double *)&(this->JointSettings).Property.AngularDriveVelocityTarget.field_0x10
    ;
    if (((*(double *)&(this->JointSettings).Property.AngularDriveVelocityTarget.field_0x0 == 0.0) &&
        (*(double *)&(this->JointSettings).Property.AngularDriveVelocityTarget.field_0x8 == 0.0)) &&
       (local_48[0].Z == 0.0)) goto LAB_1482b6ef8;
    pIVar15 = (IPhysicsProxyBase *)this->_padding_;
    *(undefined8 *)&(this->JointSettings).Property.AngularDriveVelocityTarget.field_0x0 = 0;
    *(undefined8 *)&(this->JointSettings).Property.AngularDriveVelocityTarget.field_0x8 = 0;
    *(undefined8 *)&(this->JointSettings).Property.AngularDriveVelocityTarget.field_0x10 = 0;
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
  }
LAB_1482b6ef8:
  pIVar15 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.AngularDriveForceMode = (uint)(param_2->bAccelerationMode == false)
  ;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
  }
  if ((param_2->AngularDriveMode).Value == '\x01') {
    fVar3 = (param_2->TwistDrive).Stiffness;
    fVar4 = (param_2->SwingDrive).Stiffness;
    dVar7 = Chaos::ConstraintSettings::AngularDriveStiffnessScale();
    pIVar15 = (IPhysicsProxyBase *)this->_padding_;
    dVar18 = (double)fVar4 * dVar7;
    auVar11._8_4_ = SUB84(dVar18,0);
    auVar11._0_8_ = (double)fVar3 * dVar7;
    auVar11._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *(undefined1 (*) [16])&(this->JointSettings).Property.AngularDriveStiffness = auVar11;
    *(double *)&(this->JointSettings).Property.AngularDriveStiffness.field_0x10 = dVar18;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
    }
    fVar3 = (param_2->TwistDrive).Damping;
    fVar4 = (param_2->SwingDrive).Damping;
    dVar7 = Chaos::ConstraintSettings::AngularDriveDampingScale();
    pIVar15 = (IPhysicsProxyBase *)this->_padding_;
    dVar18 = (double)fVar4 * dVar7;
    auVar12._8_4_ = SUB84(dVar18,0);
    auVar12._0_8_ = (double)fVar3 * dVar7;
    auVar12._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *(undefined1 (*) [16])&(this->JointSettings).Property.AngularDriveDamping = auVar12;
    *(double *)&(this->JointSettings).Property.AngularDriveDamping.field_0x10 = dVar18;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
    }
    dVar7 = (double)(param_2->SwingDrive).MaxForce;
    dVar18 = (double)(param_2->TwistDrive).MaxForce;
  }
  else {
    fVar3 = (param_2->SlerpDrive).Stiffness;
    dVar7 = Chaos::ConstraintSettings::AngularDriveStiffnessScale();
    pIVar15 = (IPhysicsProxyBase *)this->_padding_;
    dVar7 = dVar7 * (double)fVar3;
    auVar8._8_4_ = SUB84(dVar7,0);
    auVar8._0_8_ = dVar7;
    auVar8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])&(this->JointSettings).Property.AngularDriveStiffness = auVar8;
    *(double *)&(this->JointSettings).Property.AngularDriveStiffness.field_0x10 = dVar7;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
    }
    fVar3 = (param_2->SlerpDrive).Damping;
    dVar7 = Chaos::ConstraintSettings::AngularDriveDampingScale();
    pIVar15 = (IPhysicsProxyBase *)this->_padding_;
    dVar7 = dVar7 * (double)fVar3;
    auVar9._8_4_ = SUB84(dVar7,0);
    auVar9._0_8_ = dVar7;
    auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])&(this->JointSettings).Property.AngularDriveDamping = auVar9;
    *(double *)&(this->JointSettings).Property.AngularDriveDamping.field_0x10 = dVar7;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
    }
    dVar7 = (double)(param_2->SlerpDrive).MaxForce;
    dVar18 = dVar7;
  }
  pIVar15 = (IPhysicsProxyBase *)this->_padding_;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar18;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])&(this->JointSettings).Property.AngularDriveMaxTorque = auVar5;
  *(double *)&(this->JointSettings).Property.AngularDriveMaxTorque.field_0x10 = dVar7;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar15 != (IPhysicsProxyBase *)0x0) && (pIVar15->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar15->Solver,pIVar15);
  }
  return;
}

// UpdateConeLimitParams_AssumesLocked @ 1482b7500

void __cdecl
FPhysInterface_Chaos::UpdateConeLimitParams_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,float param_2,FConeConstraint *param_3)

{
  FConstraintBase *pFVar1;
  IPhysicsProxyBase *pIVar2;
  bool bVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  bVar3 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
     (pFVar1 != (FConstraintBase *)0x0)) {
    pIVar2 = pFVar1->Proxy;
    fVar6 = param_3->Swing1LimitDegrees * __real_3c8efa35;
    fVar4 = param_3->Swing2LimitDegrees * __real_3c8efa35;
    pFVar1[0xb].Type = pFVar1[0xb].Type;
    *(undefined4 *)&pFVar1[0xb].field_0xc = *(undefined4 *)&pFVar1[0xb].field_0xc;
    pFVar1[0xb].Proxy = (IPhysicsProxyBase *)(double)fVar4;
    *(double *)&pFVar1[0xb].DirtyFlags = (double)fVar6;
    (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
    pIVar2 = pFVar1->Proxy;
    *(byte *)((longlong)&pFVar1[0xc]._padding_ + 2) = (byte)param_3->_padding_ & 1;
    (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
    fVar4 = *(float *)&param_3->_padding_;
    dVar5 = Chaos::ConstraintSettings::SoftAngularStiffnessScale();
    pIVar2 = pFVar1->Proxy;
    pFVar1[0xd].Proxy = (IPhysicsProxyBase *)(dVar5 * (double)fVar4);
    (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
    fVar4 = *(float *)((longlong)&param_3->_padding_ + 4);
    dVar5 = Chaos::ConstraintSettings::SoftAngularDampingScale();
    pIVar2 = pFVar1->Proxy;
    *(double *)&pFVar1[0xd].DirtyFlags = dVar5 * (double)fVar4;
    (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
    pIVar2 = pFVar1->Proxy;
    *(double *)&pFVar1[0xf].Type = (double)*(float *)((longlong)&param_3->_padding_ + 4);
    (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
    pIVar2 = pFVar1->Proxy;
    pFVar1[0xe].Proxy = (IPhysicsProxyBase *)(double)*(float *)&param_3->_padding_;
    (pFVar1->DirtyFlags).Bits = (pFVar1->DirtyFlags).Bits | 0x80;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  return;
}

// UpdateDriveTarget_AssumesLocked @ 1482b7940

void __cdecl
FPhysInterface_Chaos::UpdateDriveTarget_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,FLinearDriveConstraint *param_2,
          FAngularDriveConstraint *param_3,bool param_4)

{
  bool bVar1;
  
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (bVar1) {
    UpdateLinearDrive_AssumesLocked(param_1,param_2,param_4);
    UpdateAngularDrive_AssumesLocked(param_1,param_3,param_4);
  }
  return;
}

// UpdateLinearDrive_AssumesLocked @ 1482bca00

/* WARNING: Type propagation algorithm not settling */

void __cdecl
FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,FLinearDriveConstraint *param_2,bool param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FJointConstraint *this;
  IPhysicsProxyBase *pIVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  
  bVar9 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (((bVar9) && (this = (FJointConstraint *)param_1->Constraint, (int)this->_padding_ == 1)) &&
     (this != (FJointConstraint *)0x0)) {
    pIVar4 = (IPhysicsProxyBase *)this->_padding_;
    (this->JointSettings).Property.bLinearPositionDriveEnabled.field0_0x0._s_0.X = false;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
    pIVar4 = (IPhysicsProxyBase *)this->_padding_;
    (this->JointSettings).Property.bLinearPositionDriveEnabled.field0_0x0._s_0.Y = false;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
    pIVar4 = (IPhysicsProxyBase *)this->_padding_;
    (this->JointSettings).Property.bLinearPositionDriveEnabled.field0_0x0._s_0.Z = false;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
    pIVar4 = (IPhysicsProxyBase *)this->_padding_;
    (this->JointSettings).Property.bLinearVelocityDriveEnabled.field0_0x0._s_0.X = false;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
    pIVar4 = (IPhysicsProxyBase *)this->_padding_;
    (this->JointSettings).Property.bLinearVelocityDriveEnabled.field0_0x0._s_0.Y = false;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
    pIVar4 = (IPhysicsProxyBase *)this->_padding_;
    (this->JointSettings).Property.bLinearVelocityDriveEnabled.field0_0x0._s_0.Z = false;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
    bVar9 = (param_2->XDrive).bEnablePositionDrive;
    if (((bVar9 != false) || ((param_2->YDrive).bEnablePositionDrive != 0)) ||
       ((param_2->ZDrive).bEnablePositionDrive != 0)) {
      Chaos::FJointConstraint::SetLinearPositionDriveXEnabled(this,bVar9);
      Chaos::FJointConstraint::SetLinearPositionDriveYEnabled
                (this,(param_2->YDrive).bEnablePositionDrive);
      Chaos::FJointConstraint::SetLinearPositionDriveZEnabled
                (this,(param_2->ZDrive).bEnablePositionDrive);
      if ((param_3) ||
         (dVar14 = (this->JointSettings).Property.LinearPlasticityLimit - __real_47efffffe0000000,
         uVar12 = SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar13 = (uint)((ulonglong)dVar14 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar13,uVar12) < __real_3e45798ee2308c3a ||
         (double)CONCAT44(uVar13,uVar12) == __real_3e45798ee2308c3a)) {
        pIVar4 = (IPhysicsProxyBase *)this->_padding_;
        dVar14 = (param_2->PositionTarget).field0_0x0._s_0.Y;
        *(double *)&(this->JointSettings).Property.LinearDrivePositionTarget =
             (param_2->PositionTarget).field0_0x0._s_0.X;
        *(double *)&(this->JointSettings).Property.LinearDrivePositionTarget.field_0x8 = dVar14;
        *(double *)&(this->JointSettings).Property.LinearDrivePositionTarget.field_0x10 =
             (param_2->PositionTarget).field0_0x0._s_0.Z;
        *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
        if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
          Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
        }
      }
    }
    bVar9 = (param_2->XDrive).bEnableVelocityDrive;
    if (((bVar9 != false) || ((param_2->YDrive).bEnableVelocityDrive != '\0')) ||
       ((param_2->ZDrive).bEnableVelocityDrive != '\0')) {
      Chaos::FJointConstraint::SetLinearVelocityDriveXEnabled(this,bVar9);
      Chaos::FJointConstraint::SetLinearVelocityDriveYEnabled
                (this,(param_2->YDrive).bEnableVelocityDrive);
      Chaos::FJointConstraint::SetLinearVelocityDriveZEnabled
                (this,(param_2->ZDrive).bEnableVelocityDrive);
      pIVar4 = (IPhysicsProxyBase *)this->_padding_;
      dVar14 = (param_2->VelocityTarget).field0_0x0._s_0.Y;
      *(double *)&(this->JointSettings).Property.LinearDriveVelocityTarget =
           (param_2->VelocityTarget).field0_0x0._s_0.X;
      *(double *)&(this->JointSettings).Property.LinearDriveVelocityTarget.field_0x8 = dVar14;
      *(double *)&(this->JointSettings).Property.LinearDriveVelocityTarget.field_0x10 =
           (param_2->VelocityTarget).field0_0x0._s_0.Z;
      *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
      if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
      }
    }
    pIVar4 = (IPhysicsProxyBase *)this->_padding_;
    (this->JointSettings).Property.LinearDriveForceMode =
         (uint)(param_2->bAccelerationMode == false);
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
    fVar1 = (param_2->XDrive).Stiffness;
    fVar2 = (param_2->YDrive).Stiffness;
    fVar3 = (param_2->ZDrive).Stiffness;
    dVar14 = Chaos::ConstraintSettings::LinearDriveStiffnessScale();
    pIVar4 = (IPhysicsProxyBase *)this->_padding_;
    dVar8 = (double)fVar2 * dVar14;
    auVar6._8_4_ = SUB84(dVar8,0);
    auVar6._0_8_ = (double)fVar1 * dVar14;
    auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])&(this->JointSettings).Property.LinearDriveStiffness = auVar6;
    *(double *)&(this->JointSettings).Property.LinearDriveStiffness.field_0x10 =
         (double)fVar3 * dVar14;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
    fVar1 = (param_2->XDrive).Damping;
    fVar2 = (param_2->YDrive).Damping;
    fVar3 = (param_2->ZDrive).Damping;
    dVar14 = Chaos::ConstraintSettings::LinearDriveDampingScale();
    pIVar4 = (IPhysicsProxyBase *)this->_padding_;
    dVar8 = (double)fVar2 * dVar14;
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (double)fVar1 * dVar14;
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])&(this->JointSettings).Property.LinearDriveDamping = auVar7;
    *(double *)&(this->JointSettings).Property.LinearDriveDamping.field_0x10 =
         (double)fVar3 * dVar14;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
    fVar1 = (param_2->ZDrive).MaxForce;
    pIVar4 = (IPhysicsProxyBase *)this->_padding_;
    dVar14 = (double)(param_2->YDrive).MaxForce;
    auVar5._8_4_ = SUB84(dVar14,0);
    auVar5._0_8_ = (double)(param_2->XDrive).MaxForce;
    auVar5._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])&(this->JointSettings).Property.LinearDriveMaxForce = auVar5;
    *(double *)&(this->JointSettings).Property.LinearDriveMaxForce.field_0x10 = (double)fVar1;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
    if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
    }
  }
  return;
}

// UpdateLinearLimitParams_AssumesLocked @ 1482bce70

void __cdecl
FPhysInterface_Chaos::UpdateLinearLimitParams_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,float param_2,float param_3,
          FLinearConstraint *param_4)

{
  float fVar1;
  FConstraintBase *pFVar2;
  IPhysicsProxyBase *pIVar3;
  bool bVar4;
  double dVar5;
  
  bVar4 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (((bVar4) && (pFVar2 = param_1->Constraint, pFVar2->Type == JointConstraintType)) &&
     (pFVar2 != (FConstraintBase *)0x0)) {
    pIVar3 = pFVar2->Proxy;
    pFVar2[10].Proxy = (IPhysicsProxyBase *)(double)param_2;
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    pIVar3 = pFVar2->Proxy;
    *(byte *)&pFVar2[0xc]._padding_ = param_4->field_0x10 & 1;
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    fVar1 = *(float *)param_4;
    dVar5 = Chaos::ConstraintSettings::SoftLinearStiffnessScale();
    pIVar3 = pFVar2->Proxy;
    pFVar2[0xc].Proxy = (IPhysicsProxyBase *)(dVar5 * (double)fVar1);
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    fVar1 = *(float *)&param_4->field_0x4;
    dVar5 = Chaos::ConstraintSettings::SoftLinearDampingScale();
    pIVar3 = pFVar2->Proxy;
    *(double *)&pFVar2[0xc].DirtyFlags = dVar5 * (double)fVar1;
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    pIVar3 = pFVar2->Proxy;
    *(double *)&pFVar2[0xe].DirtyFlags = (double)*(float *)&param_4->field_0xc;
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    pIVar3 = pFVar2->Proxy;
    pFVar2[0xe]._padding_ = (longlong)(double)*(float *)&param_4->field_0x8;
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
  }
  return;
}

// UpdateMaterialMask @ 1482bd190

void __cdecl
FPhysInterface_Chaos::UpdateMaterialMask
          (FMaterialMaskHandle *param_1,UPhysicalMaterialMask *param_2)

{
  FChaosPhysicsMaterialMask *pFVar1;
  FPhysicalMaterialManager *this;
  
  pFVar1 = Chaos::FMaterialMaskHandle::Get(param_1);
  if (pFVar1 != (FChaosPhysicsMaterialMask *)0x0) {
    UPhysicalMaterialMask::GenerateMaskData(param_2,&pFVar1->MaskData,&pFVar1->SizeX,&pFVar1->SizeY)
    ;
    pFVar1->UVChannelIndex = param_2->UVChannelIndex;
    pFVar1->AddressX = (uint)(param_2->AddressX).Value;
    pFVar1->AddressY = (uint)(param_2->AddressY).Value;
  }
  this = Chaos::FPhysicalMaterialManager::Get();
  Chaos::FPhysicalMaterialManager::UpdateMaterialMask
            (this,*(FMaterialMaskHandle *)&param_1->InnerHandle);
  return;
}

// UpdateTwistLimitParams_AssumesLocked @ 1482bdda0

void __cdecl
FPhysInterface_Chaos::UpdateTwistLimitParams_AssumesLocked
          (FPhysicsConstraintReference_Chaos *param_1,float param_2,FTwistConstraint *param_3)

{
  float fVar1;
  FConstraintBase *pFVar2;
  IPhysicsProxyBase *pIVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  double dVar6;
  
  bVar5 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (((bVar5) && (pFVar2 = param_1->Constraint, pFVar2->Type == JointConstraintType)) &&
     (pFVar2 != (FConstraintBase *)0x0)) {
    pIVar3 = pFVar2->Proxy;
    dVar6 = (double)(param_3->TwistLimitDegrees * __real_3c8efa35);
    auVar4._8_4_ = *(undefined4 *)&pFVar2[0xb].Proxy;
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = *(undefined4 *)((longlong)&pFVar2[0xb].Proxy + 4);
    pFVar2[0xb].Type = SUB84(dVar6,0);
    *(int *)&pFVar2[0xb].field_0xc = (int)((ulonglong)dVar6 >> 0x20);
    pFVar2[0xb].Proxy = (IPhysicsProxyBase *)auVar4._8_8_;
    pFVar2[0xb].DirtyFlags = (TDirtyFlags<Chaos::EChaosPropertyFlags>)pFVar2[0xb].DirtyFlags.Bits;
    *(undefined4 *)&pFVar2[0xb].field_0x1c = *(undefined4 *)&pFVar2[0xb].field_0x1c;
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    pIVar3 = pFVar2->Proxy;
    *(byte *)((longlong)&pFVar2[0xc]._padding_ + 1) = param_3->field_0x10 & 1;
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    fVar1 = *(float *)param_3;
    dVar6 = Chaos::ConstraintSettings::SoftAngularStiffnessScale();
    pIVar3 = pFVar2->Proxy;
    pFVar2[0xd]._padding_ = (longlong)(dVar6 * (double)fVar1);
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    fVar1 = *(float *)&param_3->field_0x4;
    dVar6 = Chaos::ConstraintSettings::SoftAngularDampingScale();
    pIVar3 = pFVar2->Proxy;
    *(double *)&pFVar2[0xd].Type = dVar6 * (double)fVar1;
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    pIVar3 = pFVar2->Proxy;
    pFVar2[0xf]._padding_ = (longlong)(double)*(float *)&param_3->field_0xc;
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
    pIVar3 = pFVar2->Proxy;
    *(double *)&pFVar2[0xe].Type = (double)*(float *)&param_3->field_0x8;
    (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
  }
  return;
}

// ExecPhysCommands @ 148300650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FPhysInterface_Chaos::ExecPhysCommands(wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  bool bVar1;
  FTrackedGeometryManager *this;
  wchar_t *local_res8;
  uint local_res20 [2];
  
  local_res8 = param_1;
  bVar1 = FParse::Command(&local_res8,L"ChaosGeometryMemory",true);
  if (bVar1) {
    this = Chaos::FTrackedGeometryManager::Get();
    Chaos::FTrackedGeometryManager::DumpMemoryUsage(this,param_2);
    return true;
  }
  local_res20[0] = 0;
  bVar1 = FParse::Value(local_res8,L"ChaosRewind",local_res20);
  if (bVar1) {
    FPhysScene_Chaos::ResimNFrames(param_3->PhysicsScene,local_res20[0]);
    return true;
  }
  return false;
}

