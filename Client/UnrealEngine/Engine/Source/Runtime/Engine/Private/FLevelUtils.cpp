// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// ApplyLevelTransform @ 147eaf820

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FLevelUtils::ApplyLevelTransform(FApplyLevelTransformParams *param_1)

{
  undefined1 *puVar1;
  USceneComponent *pUVar2;
  ULevel *pUVar3;
  AActor *pAVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  int iVar20;
  TVector<double> *pTVar21;
  TQuat<double> *pTVar22;
  TRotator<double> *pTVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  TTransform<double> *pTVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
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
  undefined1 auVar46 [16];
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
  double dVar60;
  double dVar61;
  double dVar76;
  double dVar77;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar78;
  undefined4 uVar82;
  undefined4 uVar84;
  double dVar83;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint uVar106;
  uint uVar107;
  uint uVar108;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  FScriptContainerElement *local_res10;
  FScriptContainerElement *local_res18;
  uint local_res20 [2];
  undefined1 local_818 [8];
  TTransform<double> *local_810;
  TVector<double>_u_0 local_808;
  FDestructionSentinel local_7e8;
  FDestructionSentinel local_7d0;
  TVector<double>_u_0 local_7b8;
  TVector<double>_u_0 local_798;
  TVector<double>_u_0 local_778;
  TVector<double>_u_0 local_758;
  TVector<double>_u_0 local_738;
  double local_718;
  double local_710;
  double local_708;
  TVector<double>_u_0 local_700;
  TVector<double>_u_0 local_6e8;
  TRotator<double> local_6c8;
  TRotator<double> local_6a8;
  TRotator<double> local_688;
  TVector<double>_u_0 local_670;
  TVector<double>_u_0 local_658;
  TVector<double>_u_0 local_638;
  TRotator<double> local_618;
  TRotator<double> local_5f8;
  TVector<double>_u_0 local_5d8;
  TRotator<double> local_5b8;
  TRotator<double> local_598;
  TRotator<double> local_578;
  TVector<double>_u_0 local_558;
  TRotator<double> local_538;
  TVector<double>_u_0 local_518;
  TQuat<double> local_4f8;
  TQuat<double> local_4d8;
  TQuat<double> local_4b8;
  undefined1 local_498 [32];
  undefined1 local_478 [32];
  TQuat<double> local_458;
  undefined1 local_438 [32];
  undefined1 local_418 [2] [16];
  undefined1 local_3f8 [2] [16];
  undefined1 local_3d8 [16];
  double local_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double local_390;
  double dStack_388;
  double local_380;
  undefined1 local_378 [16];
  double local_368;
  double local_360;
  double dStack_358;
  double local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double local_330;
  double dStack_328;
  double local_320;
  undefined1 local_318 [16];
  double local_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  TQuat<double> local_258;
  TQuat<double> local_238;
  TQuat<double> local_218;
  TVector<double> local_1f8;
  TRotator<double> local_1e0 [3];
  TVector<double> local_198 [3];
  TRotator<double> local_150;
  TRotator<double> local_138;
  TQuat<double> local_118;
  TQuat<double> local_f8;
  TQuat<double> local_d8;
  TQuat<double> local_b8 [3];
  
  pTVar29 = param_1->LevelTransform;
  dVar8 = (pTVar29->Translation).ZW.m128d_f64[0] -
          UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar9 = (pTVar29->Translation).ZW.m128d_f64[1] -
          UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  dVar60 = (pTVar29->Translation).XY.m128d_f64[0] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar76 = (pTVar29->Translation).XY.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  uVar27 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar106 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar107 = __xmm_7fffffffffffffff7fffffffffffffff._8_4_;
  uVar108 = __xmm_7fffffffffffffff7fffffffffffffff._12_4_;
  uVar82 = SUB84(__real_3f1a36e2e0000000,0);
  auVar80._8_4_ = uVar82;
  auVar80._0_8_ = __real_3f1a36e2e0000000;
  uVar84 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar80._12_4_ = uVar84;
  auVar81._8_8_ =
       -(ulonglong)
        (auVar80._8_8_ <
        (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar108,SUB84(dVar9,0) & uVar107));
  auVar81._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar106,SUB84(dVar8,0) & uVar27));
  auVar42._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar106,SUB84(dVar60,0) & uVar27);
  auVar42._8_4_ = SUB84(dVar76,0) & uVar107;
  auVar42._12_4_ = (uint)((ulonglong)dVar76 >> 0x20) & uVar108;
  uVar24 = movmskpd((int)param_1,auVar81);
  auVar64._8_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar42._8_8_);
  auVar64._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar42._0_8_);
  iVar20 = movmskpd((int)&stack0x00000000,auVar64);
  local_718 = __real_3f1a36e2e0000000;
  if ((uVar24 & 0x3fffffff) == 0 && iVar20 == 0) {
    dVar60 = (pTVar29->Rotation).ZW.m128d_f64[0];
    dVar76 = (pTVar29->Rotation).ZW.m128d_f64[1];
    dVar8 = (pTVar29->Rotation).XY.m128d_f64[0];
    dVar9 = (pTVar29->Rotation).XY.m128d_f64[1];
    local_710 = __real_3f1a36e2e0000000;
    dVar61 = dVar60 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar77 = dVar76 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar60 = dVar60 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar76 = dVar76 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar78 = dVar8 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar83 = dVar9 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    dVar8 = dVar8 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar9 = dVar9 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    auVar62._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar106,SUB84(dVar61,0) & uVar27);
    auVar62._8_4_ = SUB84(dVar77,0) & uVar107;
    auVar62._12_4_ = (uint)((ulonglong)dVar77 >> 0x20) & uVar108;
    auVar33._8_4_ = uVar82;
    auVar33._0_8_ = __real_3f1a36e2e0000000;
    auVar33._12_4_ = uVar84;
    auVar79._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar78 >> 0x20) & uVar106,SUB84(dVar78,0) & uVar27);
    auVar79._8_4_ = SUB84(dVar83,0) & uVar107;
    auVar79._12_4_ = (uint)((ulonglong)dVar83 >> 0x20) & uVar108;
    auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < auVar62._8_8_);
    auVar34._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar62._0_8_);
    iVar25 = movmskpd(0,auVar34);
    auVar35._8_4_ = uVar82;
    auVar35._0_8_ = __real_3f1a36e2e0000000;
    auVar35._12_4_ = uVar84;
    auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < auVar79._8_8_);
    auVar36._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar79._0_8_);
    uVar24 = movmskpd(iVar20,auVar36);
    uVar26 = iVar25 << 2 | uVar24;
    if (uVar26 != 0) {
      auVar37._8_4_ = uVar82;
      auVar37._0_8_ = __real_3f1a36e2e0000000;
      auVar37._12_4_ = uVar84;
      auVar38._8_8_ =
           -(ulonglong)
            (auVar37._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar76 >> 0x20) & uVar108,SUB84(dVar76,0) & uVar107))
      ;
      auVar38._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar106,SUB84(dVar60,0) & uVar27));
      uVar26 = movmskpd(uVar26,auVar38);
      lVar32 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar108,SUB84(dVar9,0) & uVar107
                                ));
      auVar10._8_4_ = (int)lVar32;
      auVar10._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar106,SUB84(dVar8,0) & uVar27));
      auVar10._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      uVar24 = movmskpd(uVar24,auVar10);
      if ((uVar26 & 0x3fffffff) != 0 || uVar24 != 0) goto LAB_147eaf974;
    }
    dVar8 = (pTVar29->Scale3D).ZW.m128d_f64[0] -
            UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dVar9 = (pTVar29->Scale3D).ZW.m128d_f64[1] -
            UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    dVar60 = (pTVar29->Scale3D).XY.m128d_f64[0] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    dVar76 = (pTVar29->Scale3D).XY.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_708 = __real_3f1a36e2e0000000;
    auVar63._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar106,SUB84(dVar60,0) & uVar27);
    auVar63._8_4_ = SUB84(dVar76,0) & uVar107;
    auVar63._12_4_ = (uint)((ulonglong)dVar76 >> 0x20) & uVar108;
    auVar39._8_4_ = uVar82;
    auVar39._0_8_ = __real_3f1a36e2e0000000;
    auVar39._12_4_ = uVar84;
    auVar40._8_8_ =
         -(ulonglong)
          (auVar39._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar108,SUB84(dVar9,0) & uVar107));
    auVar40._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar106,SUB84(dVar8,0) & uVar27));
    uVar27 = movmskpd(0,auVar40);
    auVar85._8_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar63._8_8_);
    auVar85._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar63._0_8_);
    iVar20 = movmskpd(uVar24,auVar85);
    if ((uVar27 & 0x3fffffff) == 0 && iVar20 == 0) {
      return;
    }
  }
LAB_147eaf974:
  if (param_1->Actor == (AActor *)0x0) {
    local_4b8.X = (pTVar29->Rotation).XY.m128d_f64[0];
    local_4b8.Y = (pTVar29->Rotation).XY.m128d_f64[1];
    local_4b8.Z = (pTVar29->Rotation).ZW.m128d_f64[0];
    local_4b8.W = (pTVar29->Rotation).ZW.m128d_f64[1];
    bVar17 = UE::Math::TQuat<double>::Equals
                       (&local_4b8,&UE::Math::TQuat<double>::Identity,__real_3e45798ee0000000);
    if (!bVar17) {
      param_1->Level->bTextureStreamingRotationChanged = '\x01';
    }
    pUVar3 = param_1->Level;
    pFVar31 = (pUVar3->ModelComponents).AllocatorInstance.Data;
    iVar20 = (pUVar3->ModelComponents).ArrayNum;
    pFVar30 = pFVar31 + (longlong)iVar20 * 8;
    pFVar16 = pFVar30;
    local_res18 = pFVar30;
    if (param_1->bSetRelativeTransformDirectly == false) {
      while( true ) {
        local_res10 = pFVar16;
        if ((pUVar3->ModelComponents).ArrayNum != iVar20) {
          local_res20[0] = local_res20[0] & 0xffffff00;
          `TCheckedPointerIterator<TObjectPtr<UModelComponent>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
        }
        if (pFVar31 == pFVar30) break;
        pUVar2 = *(USceneComponent **)pFVar31;
        if (pUVar2 != (USceneComponent *)0x0) {
          local_578.Pitch = (pUVar2->RelativeRotation).Pitch;
          local_578.Yaw = (pUVar2->RelativeRotation).Yaw;
          pTVar29 = param_1->LevelTransform;
          local_578.Roll = (pUVar2->RelativeRotation).Roll;
          pTVar22 = UE::Math::TRotator<double>::Quaternion(&local_578,&local_d8);
          local_458.X = (pTVar29->Rotation).XY.m128d_f64[0];
          local_458.Y = (pTVar29->Rotation).XY.m128d_f64[1];
          local_458.Z = (pTVar29->Rotation).ZW.m128d_f64[0];
          local_458.W = (pTVar29->Rotation).ZW.m128d_f64[1];
          UE::Math::TQuat<double>::operator*(&local_458,&local_238,pTVar22);
          pTVar29 = param_1->LevelTransform;
          local_270 = (pUVar2->RelativeLocation).field0_0x0._s_0.X;
          dStack_268 = (pUVar2->RelativeLocation).field0_0x0._s_0.Y;
          local_260 = (pUVar2->RelativeLocation).field0_0x0._s_0.Z;
          auVar80 = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
          dVar77 = local_260 * (pTVar29->Scale3D).ZW.m128d_f64[0];
          dVar9 = (pTVar29->Scale3D).ZW.m128d_f64[1] * 0.0;
          dVar78 = (pTVar29->Rotation).ZW.m128d_f64[1];
          local_3f8[0] = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
          dVar76 = (pTVar29->Scale3D).XY.m128d_f64[0] * local_270;
          dVar61 = (pTVar29->Scale3D).XY.m128d_f64[1] * dStack_268;
          uVar82 = (undefined4)((ulonglong)dVar61 >> 0x20);
          auVar81 = *(undefined1 (*) [16])(pTVar29->Rotation).ZW.m128d_f64;
          auVar100._8_4_ = SUB84(dVar61,0);
          auVar100._0_8_ = dVar76;
          auVar100._12_4_ = uVar82;
          dVar8 = auVar81._0_8_;
          auVar64 = blendpd(local_3f8[0],auVar81,2);
          auVar101._0_8_ = auVar100._8_8_ * local_3f8[0]._0_8_ - local_3f8[0]._8_8_ * dVar76;
          auVar101._8_8_ = dVar77 * local_3f8[0]._8_8_ - dVar8 * dVar61;
          auVar52._8_4_ = SUB84(dVar61,0);
          auVar52._0_8_ = dVar76;
          auVar52._12_4_ = uVar82;
          auVar14._8_4_ = SUB84(dVar9,0);
          auVar14._0_8_ = dVar77;
          auVar14._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar42 = blendpd(auVar52,auVar14,2);
          auVar53._0_8_ = auVar42._0_8_ * dVar8 - auVar64._0_8_ * dVar77;
          auVar53._8_8_ = auVar42._8_8_ * auVar81._8_8_ - auVar64._8_8_ * dVar9;
          auVar42 = blendpd(auVar101,auVar53,2);
          dVar9 = auVar101._8_8_ + auVar101._8_8_;
          dVar60 = auVar53._0_8_ + auVar53._0_8_;
          uVar82 = (undefined4)((ulonglong)dVar60 >> 0x20);
          auVar102._0_8_ = auVar42._0_8_ + auVar42._0_8_;
          auVar102._8_8_ = auVar42._8_8_ + auVar42._8_8_;
          auVar90._8_4_ = SUB84(dVar60,0);
          auVar90._0_8_ = dVar9;
          auVar90._12_4_ = uVar82;
          auVar71._8_4_ = SUB84(dVar60,0);
          auVar71._0_8_ = dVar9;
          auVar71._12_4_ = uVar82;
          auVar42 = blendpd(auVar71,auVar102,2);
          auVar91._0_8_ = auVar90._8_8_ * auVar80._0_8_ - auVar80._8_8_ * dVar9;
          auVar91._8_8_ = auVar102._0_8_ * auVar80._8_8_ - dVar8 * dVar60;
          auVar54._8_4_ = SUB84(auVar91._8_8_,0);
          auVar54._0_8_ = auVar91._0_8_;
          auVar54._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
          auVar80 = blendpd(auVar80,auVar81,2);
          auVar72._0_8_ = auVar42._0_8_ * dVar8 - auVar80._0_8_ * auVar102._0_8_;
          auVar72._8_8_ = auVar42._8_8_ * auVar81._8_8_ - auVar80._8_8_ * auVar102._8_8_;
          auVar80 = blendpd(auVar91,auVar72,2);
          dVar8 = dVar9 * dVar78 + dVar76 + auVar54._8_8_ + (pTVar29->Translation).XY.m128d_f64[0];
          dVar9 = dVar60 * dVar78 + dVar61 + auVar72._0_8_ + (pTVar29->Translation).XY.m128d_f64[1];
          uVar82 = SUB84(dVar9,0);
          uVar84 = (undefined4)((ulonglong)dVar9 >> 0x20);
          local_558._s_0.Z =
               auVar102._0_8_ * dVar78 + dVar77 + auVar80._0_8_ +
               (pTVar29->Translation).ZW.m128d_f64[0];
          local_3d8._8_4_ = uVar82;
          local_3d8._0_8_ = dVar8;
          local_3d8._12_4_ = uVar84;
          local_558._8_4_ = uVar82;
          local_558._0_8_ = dVar8;
          local_558._12_4_ = uVar84;
          local_3c8 = local_558._s_0.Z;
          USceneComponent::SetRelativeLocationAndRotation
                    (pUVar2,(TVector<double> *)&local_558._s_0,&local_238,false,(FHitResult *)0x0,
                     None);
          local_3a8 = (pUVar2->RelativeScale3D).field0_0x0._s_0.X;
          dStack_3a0 = (pUVar2->RelativeScale3D).field0_0x0._s_0.Y;
          pTVar29 = param_1->LevelTransform;
          local_398 = (pUVar2->RelativeScale3D).field0_0x0._s_0.Z;
          local_3c0 = (pTVar29->Scale3D).XY.m128d_f64[0];
          dStack_3b8 = (pTVar29->Scale3D).XY.m128d_f64[1];
          local_3b0 = (pTVar29->Scale3D).ZW.m128d_f64[0];
          local_738._s_0.X = local_3c0 * local_3a8;
          local_738._s_0.Y = dStack_3b8 * dStack_3a0;
          local_738._s_0.Z = local_3b0 * local_398;
          USceneComponent::SetRelativeScale3D(pUVar2,(TVector<double> *)&local_738._s_0);
          pFVar30 = local_res10;
        }
        pFVar31 = pFVar31 + 8;
        pFVar16 = local_res10;
      }
      pUVar3 = param_1->Level;
      iVar20 = (pUVar3->Actors).ArrayNum;
      uVar28 = (ulonglong)iVar20;
      pFVar31 = (pUVar3->Actors).AllocatorInstance.Data;
      local_res10 = (FScriptContainerElement *)CONCAT44(local_res10._4_4_,iVar20);
      pFVar30 = pFVar31 + uVar28 * 8;
      local_res18 = pFVar30;
      while( true ) {
        if ((pUVar3->Actors).ArrayNum != (int)uVar28) {
          local_818[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_818);
        }
        if (pFVar31 == pFVar30) break;
        pAVar4 = *(AActor **)pFVar31;
        if (((pAVar4 != (AActor *)0x0) &&
            (pUVar2 = (pAVar4->RootComponent).field0_0x0.DebugPtr, pUVar2 != (USceneComponent *)0x0)
            ) && ((pUVar2->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0)) {
          local_538.Pitch = (pUVar2->RelativeRotation).Pitch;
          local_538.Yaw = (pUVar2->RelativeRotation).Yaw;
          pTVar29 = param_1->LevelTransform;
          local_538.Roll = (pUVar2->RelativeRotation).Roll;
          pTVar22 = UE::Math::TRotator<double>::Quaternion(&local_538,local_b8);
          auVar80 = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
          auVar81 = *(undefined1 (*) [16])(pTVar29->Rotation).ZW.m128d_f64;
          dVar9 = auVar80._0_8_;
          dVar77 = pTVar22->Z;
          dVar78 = pTVar22->W;
          auVar73._8_4_ = auVar80._0_4_;
          auVar73._0_8_ = dVar9;
          auVar73._12_4_ = auVar80._4_4_;
          dVar83 = pTVar22->X;
          dVar15 = pTVar22->Y;
          pTVar29 = param_1->LevelTransform;
          dVar61 = auVar81._8_8_;
          auVar55._8_4_ = auVar81._8_4_;
          auVar55._0_8_ = dVar61;
          auVar55._12_4_ = auVar81._12_4_;
          dVar60 = auVar80._8_8_;
          dVar76 = auVar81._0_8_;
          local_390 = (pUVar2->RelativeLocation).field0_0x0._s_0.X;
          dStack_388 = (pUVar2->RelativeLocation).field0_0x0._s_0.Y;
          auVar56._8_4_ = auVar81._0_4_;
          auVar56._0_8_ = dVar76;
          auVar56._12_4_ = auVar81._4_4_;
          local_438._0_8_ =
               dVar9 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar61 * dVar83 +
               dVar60 * dVar77 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar76 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_438._8_8_ =
               auVar73._8_8_ * dVar77 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar55._8_8_ * dVar15 +
               dVar60 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar56._8_8_ * dVar83 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          local_380 = (pUVar2->RelativeLocation).field0_0x0._s_0.Z;
          dVar8 = dVar9 * dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  dVar61 * dVar78 +
                  dVar60 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                  + dVar76 * dVar77 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_438._24_4_ = SUB84(dVar8,0);
          local_438._16_8_ =
               dVar9 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar61 * dVar77 +
               dVar60 * dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar76 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_438._28_4_ = (int)((ulonglong)dVar8 >> 0x20);
          local_3f8[0] = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
          dVar61 = local_390 * (pTVar29->Scale3D).XY.m128d_f64[0];
          dVar77 = dStack_388 * (pTVar29->Scale3D).XY.m128d_f64[1];
          uVar82 = (undefined4)((ulonglong)dVar77 >> 0x20);
          dVar76 = local_380 * (pTVar29->Scale3D).ZW.m128d_f64[0];
          dVar9 = (pTVar29->Scale3D).ZW.m128d_f64[1] * 0.0;
          auVar80 = *(undefined1 (*) [16])(pTVar29->Rotation).ZW.m128d_f64;
          dVar78 = (pTVar29->Rotation).ZW.m128d_f64[1];
          auVar103._8_4_ = SUB84(dVar77,0);
          auVar103._0_8_ = dVar61;
          auVar103._12_4_ = uVar82;
          auVar81 = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
          dVar8 = auVar80._0_8_;
          auVar64 = blendpd(local_3f8[0],auVar80,2);
          auVar104._0_8_ = auVar103._8_8_ * local_3f8[0]._0_8_ - local_3f8[0]._8_8_ * dVar61;
          auVar104._8_8_ = dVar76 * local_3f8[0]._8_8_ - dVar8 * dVar77;
          auVar57._8_4_ = SUB84(dVar77,0);
          auVar57._0_8_ = dVar61;
          auVar57._12_4_ = uVar82;
          auVar11._8_4_ = SUB84(dVar9,0);
          auVar11._0_8_ = dVar76;
          auVar11._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar42 = blendpd(auVar57,auVar11,2);
          auVar58._0_8_ = auVar42._0_8_ * dVar8 - auVar64._0_8_ * dVar76;
          auVar58._8_8_ = auVar42._8_8_ * auVar80._8_8_ - auVar64._8_8_ * dVar9;
          dVar9 = auVar104._8_8_ + auVar104._8_8_;
          dVar60 = auVar58._0_8_ + auVar58._0_8_;
          uVar82 = (undefined4)((ulonglong)dVar60 >> 0x20);
          auVar42 = blendpd(auVar104,auVar58,2);
          auVar92._8_4_ = SUB84(dVar60,0);
          auVar92._0_8_ = dVar9;
          auVar92._12_4_ = uVar82;
          auVar105._0_8_ = auVar42._0_8_ + auVar42._0_8_;
          auVar105._8_8_ = auVar42._8_8_ + auVar42._8_8_;
          auVar74._8_4_ = SUB84(dVar60,0);
          auVar74._0_8_ = dVar9;
          auVar74._12_4_ = uVar82;
          auVar42 = blendpd(auVar74,auVar105,2);
          auVar93._0_8_ = auVar92._8_8_ * auVar81._0_8_ - auVar81._8_8_ * dVar9;
          auVar93._8_8_ = auVar105._0_8_ * auVar81._8_8_ - dVar8 * dVar60;
          auVar59._8_4_ = SUB84(auVar93._8_8_,0);
          auVar59._0_8_ = auVar93._0_8_;
          auVar59._12_4_ = (int)((ulonglong)auVar93._8_8_ >> 0x20);
          auVar81 = blendpd(auVar81,auVar80,2);
          auVar75._0_8_ = auVar42._0_8_ * dVar8 - auVar81._0_8_ * auVar105._0_8_;
          auVar75._8_8_ = auVar42._8_8_ * auVar80._8_8_ - auVar81._8_8_ * auVar105._8_8_;
          auVar80 = blendpd(auVar93,auVar75,2);
          dVar8 = dVar9 * dVar78 + dVar61 + auVar59._8_8_ + (pTVar29->Translation).XY.m128d_f64[0];
          dVar9 = dVar60 * dVar78 + dVar77 + auVar75._0_8_ + (pTVar29->Translation).XY.m128d_f64[1];
          uVar82 = SUB84(dVar9,0);
          uVar84 = (undefined4)((ulonglong)dVar9 >> 0x20);
          local_518._s_0.Z =
               auVar105._0_8_ * dVar78 + dVar76 + auVar80._0_8_ +
               (pTVar29->Translation).ZW.m128d_f64[0];
          local_378._8_4_ = uVar82;
          local_378._0_8_ = dVar8;
          local_378._12_4_ = uVar84;
          local_518._8_4_ = uVar82;
          local_518._0_8_ = dVar8;
          local_518._12_4_ = uVar84;
          local_368 = local_518._s_0.Z;
          USceneComponent::SetRelativeLocationAndRotation
                    (pUVar2,(TVector<double> *)&local_518._s_0,(TQuat<double> *)local_438,false,
                     (FHitResult *)0x0,None);
          local_348 = (pUVar2->RelativeScale3D).field0_0x0._s_0.X;
          dStack_340 = (pUVar2->RelativeScale3D).field0_0x0._s_0.Y;
          pTVar29 = param_1->LevelTransform;
          local_338 = (pUVar2->RelativeScale3D).field0_0x0._s_0.Z;
          local_360 = (pTVar29->Scale3D).XY.m128d_f64[0];
          dStack_358 = (pTVar29->Scale3D).XY.m128d_f64[1];
          local_350 = (pTVar29->Scale3D).ZW.m128d_f64[0];
          local_808._s_0.X = local_360 * local_348;
          local_808._s_0.Y = dStack_358 * dStack_340;
          local_808._s_0.Z = local_350 * local_338;
          USceneComponent::SetRelativeScale3D(pUVar2,(TVector<double> *)&local_808._s_0);
          AActor::MarkNeedsRecomputeBoundsOnceForGame(pAVar4);
          pFVar30 = local_res18;
        }
        uVar28 = (ulonglong)local_res10 & 0xffffffff;
        pFVar31 = pFVar31 + 8;
      }
    }
    else {
      while( true ) {
        if ((pUVar3->ModelComponents).ArrayNum != iVar20) {
          local_res10 = (FScriptContainerElement *)((ulonglong)local_res10 & 0xffffffffffffff00);
          `TCheckedPointerIterator<TObjectPtr<UModelComponent>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res10);
        }
        if (pFVar31 == pFVar30) break;
        pUVar2 = *(USceneComponent **)pFVar31;
        if (pUVar2 != (USceneComponent *)0x0) {
          pTVar29 = param_1->LevelTransform;
          local_330 = (pUVar2->RelativeLocation).field0_0x0._s_0.X;
          dStack_328 = (pUVar2->RelativeLocation).field0_0x0._s_0.Y;
          local_320 = (pUVar2->RelativeLocation).field0_0x0._s_0.Z;
          auVar80 = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
          dVar77 = local_320 * (pTVar29->Scale3D).ZW.m128d_f64[0];
          dVar9 = (pTVar29->Scale3D).ZW.m128d_f64[1] * 0.0;
          dVar78 = (pTVar29->Rotation).ZW.m128d_f64[1];
          local_418[0] = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
          dVar76 = (pTVar29->Scale3D).XY.m128d_f64[0] * local_330;
          dVar61 = (pTVar29->Scale3D).XY.m128d_f64[1] * dStack_328;
          uVar82 = (undefined4)((ulonglong)dVar61 >> 0x20);
          auVar81 = *(undefined1 (*) [16])(pTVar29->Rotation).ZW.m128d_f64;
          auVar94._8_4_ = SUB84(dVar61,0);
          auVar94._0_8_ = dVar76;
          auVar94._12_4_ = uVar82;
          dVar8 = auVar81._0_8_;
          auVar64 = blendpd(local_418[0],auVar81,2);
          auVar95._0_8_ = auVar94._8_8_ * local_418[0]._0_8_ - local_418[0]._8_8_ * dVar76;
          auVar95._8_8_ = dVar77 * local_418[0]._8_8_ - dVar8 * dVar61;
          auVar41._8_4_ = SUB84(dVar61,0);
          auVar41._0_8_ = dVar76;
          auVar41._12_4_ = uVar82;
          auVar12._8_4_ = SUB84(dVar9,0);
          auVar12._0_8_ = dVar77;
          auVar12._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar42 = blendpd(auVar41,auVar12,2);
          auVar43._0_8_ = auVar42._0_8_ * dVar8 - auVar64._0_8_ * dVar77;
          auVar43._8_8_ = auVar42._8_8_ * auVar81._8_8_ - auVar64._8_8_ * dVar9;
          auVar42 = blendpd(auVar95,auVar43,2);
          dVar9 = auVar95._8_8_ + auVar95._8_8_;
          dVar60 = auVar43._0_8_ + auVar43._0_8_;
          uVar82 = (undefined4)((ulonglong)dVar60 >> 0x20);
          auVar96._0_8_ = auVar42._0_8_ + auVar42._0_8_;
          auVar96._8_8_ = auVar42._8_8_ + auVar42._8_8_;
          auVar86._8_4_ = SUB84(dVar60,0);
          auVar86._0_8_ = dVar9;
          auVar86._12_4_ = uVar82;
          auVar65._8_4_ = SUB84(dVar60,0);
          auVar65._0_8_ = dVar9;
          auVar65._12_4_ = uVar82;
          auVar42 = blendpd(auVar65,auVar96,2);
          auVar87._0_8_ = auVar86._8_8_ * auVar80._0_8_ - auVar80._8_8_ * dVar9;
          auVar87._8_8_ = auVar96._0_8_ * auVar80._8_8_ - dVar8 * dVar60;
          auVar44._8_4_ = SUB84(auVar87._8_8_,0);
          auVar44._0_8_ = auVar87._0_8_;
          auVar44._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
          auVar80 = blendpd(auVar80,auVar81,2);
          auVar66._0_8_ = auVar42._0_8_ * dVar8 - auVar80._0_8_ * auVar96._0_8_;
          auVar66._8_8_ = auVar42._8_8_ * auVar81._8_8_ - auVar80._8_8_ * auVar96._8_8_;
          auVar80 = blendpd(auVar87,auVar66,2);
          dVar8 = dVar9 * dVar78 + dVar76 + auVar44._8_8_ + (pTVar29->Translation).XY.m128d_f64[0];
          dVar9 = dVar60 * dVar78 + dVar61 + auVar66._0_8_ + (pTVar29->Translation).XY.m128d_f64[1];
          uVar82 = SUB84(dVar9,0);
          uVar84 = (undefined4)((ulonglong)dVar9 >> 0x20);
          local_638._s_0.Z =
               auVar96._0_8_ * dVar78 + dVar77 + auVar80._0_8_ +
               (pTVar29->Translation).ZW.m128d_f64[0];
          local_318._8_4_ = uVar82;
          local_318._0_8_ = dVar8;
          local_318._12_4_ = uVar84;
          local_638._8_4_ = uVar82;
          local_638._0_8_ = dVar8;
          local_638._12_4_ = uVar84;
          local_308 = local_638._s_0.Z;
          USceneComponent::SetRelativeLocation_Direct(pUVar2,(TVector<double> *)&local_638._s_0);
          local_618.Pitch = (pUVar2->RelativeRotation).Pitch;
          local_618.Yaw = (pUVar2->RelativeRotation).Yaw;
          pTVar29 = param_1->LevelTransform;
          local_618.Roll = (pUVar2->RelativeRotation).Roll;
          pTVar22 = UE::Math::TRotator<double>::Quaternion(&local_618,&local_f8);
          auVar80 = *(undefined1 (*) [16])(pTVar29->Rotation).ZW.m128d_f64;
          auVar81 = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
          dVar61 = auVar80._8_8_;
          dVar77 = pTVar22->Z;
          dVar78 = pTVar22->W;
          dVar83 = pTVar22->X;
          dVar15 = pTVar22->Y;
          dVar76 = auVar80._0_8_;
          dVar9 = auVar81._0_8_;
          auVar67._8_4_ = auVar81._0_4_;
          auVar67._0_8_ = dVar9;
          auVar67._12_4_ = auVar81._4_4_;
          dVar60 = auVar81._8_8_;
          auVar45._8_4_ = auVar80._8_4_;
          auVar45._0_8_ = dVar61;
          auVar45._12_4_ = auVar80._12_4_;
          auVar46._8_4_ = auVar80._0_4_;
          auVar46._0_8_ = dVar76;
          auVar46._12_4_ = auVar80._4_4_;
          local_498._0_8_ =
               dVar9 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar61 * dVar83 +
               dVar60 * dVar77 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar76 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_498._8_8_ =
               auVar67._8_8_ * dVar77 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar45._8_8_ * dVar15 +
               dVar60 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar46._8_8_ * dVar83 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar8 = dVar9 * dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  dVar61 * dVar78 +
                  dVar60 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                  + dVar76 * dVar77 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_498._24_4_ = SUB84(dVar8,0);
          local_498._16_8_ =
               dVar9 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar61 * dVar77 +
               dVar60 * dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar76 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_498._28_4_ = (int)((ulonglong)dVar8 >> 0x20);
          pTVar23 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_498,&local_138);
          local_5f8.Pitch = pTVar23->Pitch;
          local_5f8.Yaw = pTVar23->Yaw;
          local_5f8.Roll = pTVar23->Roll;
          USceneComponent::SetRelativeRotation_Direct(pUVar2,&local_5f8);
          local_2e8 = (pUVar2->RelativeScale3D).field0_0x0._s_0.X;
          dStack_2e0 = (pUVar2->RelativeScale3D).field0_0x0._s_0.Y;
          pTVar29 = param_1->LevelTransform;
          local_2d8 = (pUVar2->RelativeScale3D).field0_0x0._s_0.Z;
          local_300 = (pTVar29->Scale3D).XY.m128d_f64[0];
          dStack_2f8 = (pTVar29->Scale3D).XY.m128d_f64[1];
          local_2f0 = (pTVar29->Scale3D).ZW.m128d_f64[0];
          local_778._s_0.X = local_300 * local_2e8;
          local_778._s_0.Y = dStack_2f8 * dStack_2e0;
          local_778._s_0.Z = local_2f0 * local_2d8;
          USceneComponent::SetRelativeScale3D_Direct(pUVar2,(TVector<double> *)&local_778._s_0);
          pFVar30 = local_res18;
        }
        pFVar31 = pFVar31 + 8;
      }
      pUVar3 = param_1->Level;
      local_res20[0] = (pUVar3->Actors).ArrayNum;
      uVar28 = (ulonglong)(int)local_res20[0];
      pFVar30 = (pUVar3->Actors).AllocatorInstance.Data;
      pTVar29 = (TTransform<double> *)(pFVar30 + uVar28 * 8);
      local_810 = pTVar29;
      while( true ) {
        if ((pUVar3->Actors).ArrayNum != (int)uVar28) {
          local_res18 = (FScriptContainerElement *)((ulonglong)local_res18 & 0xffffffffffffff00);
          `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res18);
        }
        if ((TTransform<double> *)pFVar30 == pTVar29) break;
        pAVar4 = *(AActor **)pFVar30;
        if (((pAVar4 != (AActor *)0x0) &&
            (pUVar2 = (pAVar4->RootComponent).field0_0x0.DebugPtr, pUVar2 != (USceneComponent *)0x0)
            ) && ((pUVar2->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0)) {
          pTVar29 = param_1->LevelTransform;
          local_2d0 = (pUVar2->RelativeLocation).field0_0x0._s_0.X;
          dStack_2c8 = (pUVar2->RelativeLocation).field0_0x0._s_0.Y;
          local_2c0 = (pUVar2->RelativeLocation).field0_0x0._s_0.Z;
          auVar80 = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
          dVar77 = local_2c0 * (pTVar29->Scale3D).ZW.m128d_f64[0];
          dVar9 = (pTVar29->Scale3D).ZW.m128d_f64[1] * 0.0;
          dVar78 = (pTVar29->Rotation).ZW.m128d_f64[1];
          local_418[0] = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
          dVar76 = (pTVar29->Scale3D).XY.m128d_f64[0] * local_2d0;
          dVar61 = (pTVar29->Scale3D).XY.m128d_f64[1] * dStack_2c8;
          uVar82 = (undefined4)((ulonglong)dVar61 >> 0x20);
          auVar81 = *(undefined1 (*) [16])(pTVar29->Rotation).ZW.m128d_f64;
          auVar97._8_4_ = SUB84(dVar61,0);
          auVar97._0_8_ = dVar76;
          auVar97._12_4_ = uVar82;
          dVar8 = auVar81._0_8_;
          auVar64 = blendpd(local_418[0],auVar81,2);
          auVar98._0_8_ = auVar97._8_8_ * local_418[0]._0_8_ - local_418[0]._8_8_ * dVar76;
          auVar98._8_8_ = dVar77 * local_418[0]._8_8_ - dVar8 * dVar61;
          auVar47._8_4_ = SUB84(dVar61,0);
          auVar47._0_8_ = dVar76;
          auVar47._12_4_ = uVar82;
          auVar13._8_4_ = SUB84(dVar9,0);
          auVar13._0_8_ = dVar77;
          auVar13._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar42 = blendpd(auVar47,auVar13,2);
          auVar48._0_8_ = auVar42._0_8_ * dVar8 - auVar64._0_8_ * dVar77;
          auVar48._8_8_ = auVar42._8_8_ * auVar81._8_8_ - auVar64._8_8_ * dVar9;
          auVar42 = blendpd(auVar98,auVar48,2);
          dVar9 = auVar98._8_8_ + auVar98._8_8_;
          dVar60 = auVar48._0_8_ + auVar48._0_8_;
          uVar82 = (undefined4)((ulonglong)dVar60 >> 0x20);
          auVar99._0_8_ = auVar42._0_8_ + auVar42._0_8_;
          auVar99._8_8_ = auVar42._8_8_ + auVar42._8_8_;
          auVar88._8_4_ = SUB84(dVar60,0);
          auVar88._0_8_ = dVar9;
          auVar88._12_4_ = uVar82;
          auVar68._8_4_ = SUB84(dVar60,0);
          auVar68._0_8_ = dVar9;
          auVar68._12_4_ = uVar82;
          auVar42 = blendpd(auVar68,auVar99,2);
          auVar89._0_8_ = auVar88._8_8_ * auVar80._0_8_ - auVar80._8_8_ * dVar9;
          auVar89._8_8_ = auVar99._0_8_ * auVar80._8_8_ - dVar8 * dVar60;
          auVar49._8_4_ = SUB84(auVar89._8_8_,0);
          auVar49._0_8_ = auVar89._0_8_;
          auVar49._12_4_ = (int)((ulonglong)auVar89._8_8_ >> 0x20);
          auVar80 = blendpd(auVar80,auVar81,2);
          auVar69._0_8_ = auVar42._0_8_ * dVar8 - auVar80._0_8_ * auVar99._0_8_;
          auVar69._8_8_ = auVar42._8_8_ * auVar81._8_8_ - auVar80._8_8_ * auVar99._8_8_;
          auVar80 = blendpd(auVar89,auVar69,2);
          dVar8 = dVar9 * dVar78 + dVar76 + auVar49._8_8_ + (pTVar29->Translation).XY.m128d_f64[0];
          dVar9 = dVar60 * dVar78 + dVar61 + auVar69._0_8_ + (pTVar29->Translation).XY.m128d_f64[1];
          uVar82 = SUB84(dVar9,0);
          uVar84 = (undefined4)((ulonglong)dVar9 >> 0x20);
          local_5d8._s_0.Z =
               auVar99._0_8_ * dVar78 + dVar77 + auVar80._0_8_ +
               (pTVar29->Translation).ZW.m128d_f64[0];
          local_2b8._8_4_ = uVar82;
          local_2b8._0_8_ = dVar8;
          local_2b8._12_4_ = uVar84;
          local_5d8._8_4_ = uVar82;
          local_5d8._0_8_ = dVar8;
          local_5d8._12_4_ = uVar84;
          local_2a8 = local_5d8._s_0.Z;
          USceneComponent::SetRelativeLocation_Direct(pUVar2,(TVector<double> *)&local_5d8._s_0);
          local_5b8.Pitch = (pUVar2->RelativeRotation).Pitch;
          local_5b8.Yaw = (pUVar2->RelativeRotation).Yaw;
          pTVar29 = param_1->LevelTransform;
          local_5b8.Roll = (pUVar2->RelativeRotation).Roll;
          pTVar22 = UE::Math::TRotator<double>::Quaternion(&local_5b8,(TQuat<double> *)local_3f8);
          auVar80 = *(undefined1 (*) [16])(pTVar29->Rotation).ZW.m128d_f64;
          auVar81 = *(undefined1 (*) [16])(pTVar29->Rotation).XY.m128d_f64;
          dVar61 = auVar80._8_8_;
          dVar77 = pTVar22->Z;
          dVar78 = pTVar22->W;
          dVar83 = pTVar22->X;
          dVar15 = pTVar22->Y;
          dVar76 = auVar80._0_8_;
          dVar9 = auVar81._0_8_;
          auVar70._8_4_ = auVar81._0_4_;
          auVar70._0_8_ = dVar9;
          auVar70._12_4_ = auVar81._4_4_;
          dVar60 = auVar81._8_8_;
          auVar50._8_4_ = auVar80._8_4_;
          auVar50._0_8_ = dVar61;
          auVar50._12_4_ = auVar80._12_4_;
          auVar51._8_4_ = auVar80._0_4_;
          auVar51._0_8_ = dVar76;
          auVar51._12_4_ = auVar80._4_4_;
          local_478._0_8_ =
               dVar9 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar61 * dVar83 +
               dVar60 * dVar77 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar76 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_478._8_8_ =
               auVar70._8_8_ * dVar77 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar50._8_8_ * dVar15 +
               dVar60 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar51._8_8_ * dVar83 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar8 = dVar9 * dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  dVar61 * dVar78 +
                  dVar60 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                  + dVar76 * dVar77 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_478._24_4_ = SUB84(dVar8,0);
          local_478._16_8_ =
               dVar9 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar61 * dVar77 +
               dVar60 * dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar76 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_478._28_4_ = (int)((ulonglong)dVar8 >> 0x20);
          pTVar23 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_478,&local_150);
          local_598.Pitch = pTVar23->Pitch;
          local_598.Yaw = pTVar23->Yaw;
          local_598.Roll = pTVar23->Roll;
          USceneComponent::SetRelativeRotation_Direct(pUVar2,&local_598);
          local_288 = (pUVar2->RelativeScale3D).field0_0x0._s_0.X;
          dStack_280 = (pUVar2->RelativeScale3D).field0_0x0._s_0.Y;
          pTVar29 = param_1->LevelTransform;
          local_278 = (pUVar2->RelativeScale3D).field0_0x0._s_0.Z;
          local_2a0 = (pTVar29->Scale3D).XY.m128d_f64[0];
          dStack_298 = (pTVar29->Scale3D).XY.m128d_f64[1];
          local_290 = (pTVar29->Scale3D).ZW.m128d_f64[0];
          local_758._s_0.X = local_2a0 * local_288;
          local_758._s_0.Y = dStack_298 * dStack_280;
          local_758._s_0.Z = local_290 * local_278;
          USceneComponent::SetRelativeScale3D_Direct(pUVar2,(TVector<double> *)&local_758._s_0);
          AActor::MarkNeedsRecomputeBoundsOnceForGame(pAVar4);
          pTVar29 = local_810;
        }
        uVar28 = (ulonglong)local_res20[0];
        pFVar30 = pFVar30 + 8;
      }
    }
    pUVar3 = param_1->Level;
    local_810 = param_1->LevelTransform;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar3->OnApplyLevelTransform,(FWriteAccessScope *)&local_7e8);
    puVar1 = &(pUVar3->OnApplyLevelTransform).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar17 = false;
    uVar24 = *(int *)&(pUVar3->OnApplyLevelTransform).field_0x10 - 1;
    if (-1 < (int)uVar24) {
      lVar32 = (longlong)(int)uVar24 << 4;
      bVar17 = false;
      do {
        uVar27 = 0;
        if ((int)uVar24 < *(int *)&(pUVar3->OnApplyLevelTransform).field_0x10) {
          uVar27 = ~uVar24 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&(pUVar3->OnApplyLevelTransform).field_0x8;
        if (((*(int *)(lVar32 + 8 + lVar5) == 0) ||
            (plVar6 = *(longlong **)(lVar32 + lVar5), plVar6 == (longlong *)0x0)) ||
           (cVar19 = (**(code **)(*plVar6 + 0x68))(), cVar19 == '\0')) {
          bVar17 = true;
        }
        lVar32 = lVar32 + -0x10;
        uVar24 = uVar24 - 1;
      } while (-1 < (int)uVar24);
    }
    puVar1 = &(pUVar3->OnApplyLevelTransform).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar17) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar3->OnApplyLevelTransform,false);
    }
    if (local_7e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7e8.Accessor,&local_7e8);
    }
    pTVar29 = param_1->LevelTransform;
    pUVar3 = param_1->Level;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FWorldDelegates::PostApplyLevelTransform,(FWriteAccessScope *)&local_7d0);
    bVar17 = false;
    FWorldDelegates::PostApplyLevelTransform._28_4_ =
         FWorldDelegates::PostApplyLevelTransform._28_4_ + 1;
    uVar24 = FWorldDelegates::PostApplyLevelTransform._16_4_ - 1;
    if (-1 < (int)uVar24) {
      lVar32 = (longlong)(int)uVar24 << 4;
      bVar17 = false;
      do {
        uVar27 = 0;
        if ((int)uVar24 < (int)FWorldDelegates::PostApplyLevelTransform._16_4_) {
          uVar27 = ~uVar24 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((*(int *)(FWorldDelegates::PostApplyLevelTransform._8_8_ + 8 + lVar32) == 0) ||
            (plVar6 = *(longlong **)(FWorldDelegates::PostApplyLevelTransform._8_8_ + lVar32),
            plVar6 == (longlong *)0x0)) ||
           (cVar19 = (**(code **)(*plVar6 + 0x68))(plVar6,pUVar3,pTVar29), cVar19 == '\0')) {
          bVar17 = true;
        }
        lVar32 = lVar32 + -0x10;
        uVar24 = uVar24 - 1;
      } while (-1 < (int)uVar24);
    }
    FWorldDelegates::PostApplyLevelTransform._28_4_ =
         FWorldDelegates::PostApplyLevelTransform._28_4_ + -1;
    if (bVar17) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FWorldDelegates::PostApplyLevelTransform,false);
    }
    if (local_7d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7d0.Accessor,&local_7d0);
    }
  }
  else {
    pUVar2 = (param_1->Actor->RootComponent).field0_0x0.DebugPtr;
    if (param_1->bSetRelativeTransformDirectly == false) {
      if ((pUVar2 != (USceneComponent *)0x0) &&
         ((pUVar2->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0)) {
        local_688.Pitch = (pUVar2->RelativeRotation).Pitch;
        local_688.Yaw = (pUVar2->RelativeRotation).Yaw;
        local_688.Roll = (pUVar2->RelativeRotation).Roll;
        pTVar22 = UE::Math::TRotator<double>::Quaternion(&local_688,(TQuat<double> *)local_418);
        local_4d8.X = (pTVar29->Rotation).XY.m128d_f64[0];
        local_4d8.Y = (pTVar29->Rotation).XY.m128d_f64[1];
        local_4d8.Z = (pTVar29->Rotation).ZW.m128d_f64[0];
        local_4d8.W = (pTVar29->Rotation).ZW.m128d_f64[1];
        UE::Math::TQuat<double>::operator*(&local_4d8,&local_258,pTVar22);
        local_670._s_0.X = (pUVar2->RelativeLocation).field0_0x0._s_0.X;
        local_670._s_0.Y = (pUVar2->RelativeLocation).field0_0x0._s_0.Y;
        local_670._s_0.Z = (pUVar2->RelativeLocation).field0_0x0._s_0.Z;
        pTVar21 = UE::Math::TTransform<double>::TransformPosition
                            (param_1->LevelTransform,local_198,(TVector<double> *)&local_670._s_0);
        local_658._s_0.X = (pTVar21->field0_0x0)._s_0.X;
        local_658._s_0.Y = (pTVar21->field0_0x0)._s_0.Y;
        local_658._s_0.Z = (pTVar21->field0_0x0)._s_0.Z;
        USceneComponent::SetRelativeLocationAndRotation
                  (pUVar2,(TVector<double> *)&local_658._s_0,&local_258,false,(FHitResult *)0x0,None
                  );
        pTVar29 = param_1->LevelTransform;
        local_798._s_0.Z =
             (pTVar29->Scale3D).ZW.m128d_f64[0] * (pUVar2->RelativeScale3D).field0_0x0._s_0.Z;
        local_798._s_0.X =
             (pTVar29->Scale3D).XY.m128d_f64[0] * (pUVar2->RelativeScale3D).field0_0x0._s_0.X;
        local_798._s_0.Y =
             (pTVar29->Scale3D).XY.m128d_f64[1] * (pUVar2->RelativeScale3D).field0_0x0._s_0.Y;
        USceneComponent::SetRelativeScale3D(pUVar2,(TVector<double> *)&local_798._s_0);
        AActor::MarkNeedsRecomputeBoundsOnceForGame(param_1->Actor);
      }
    }
    else if ((pUVar2 != (USceneComponent *)0x0) &&
            ((pUVar2->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0)) {
      local_700._s_0.X = (pUVar2->RelativeLocation).field0_0x0._s_0.X;
      local_700._s_0.Y = (pUVar2->RelativeLocation).field0_0x0._s_0.Y;
      local_700._s_0.Z = (pUVar2->RelativeLocation).field0_0x0._s_0.Z;
      pTVar21 = UE::Math::TTransform<double>::TransformPosition
                          (pTVar29,&local_1f8,(TVector<double> *)&local_700._s_0);
      local_6e8._s_0.X = (pTVar21->field0_0x0)._s_0.X;
      local_6e8._s_0.Y = (pTVar21->field0_0x0)._s_0.Y;
      local_6e8._s_0.Z = (pTVar21->field0_0x0)._s_0.Z;
      USceneComponent::SetRelativeLocation_Direct(pUVar2,(TVector<double> *)&local_6e8._s_0);
      local_6c8.Pitch = (pUVar2->RelativeRotation).Pitch;
      local_6c8.Yaw = (pUVar2->RelativeRotation).Yaw;
      pTVar29 = param_1->LevelTransform;
      local_6c8.Roll = (pUVar2->RelativeRotation).Roll;
      pTVar22 = UE::Math::TRotator<double>::Quaternion(&local_6c8,&local_118);
      local_4f8.X = (pTVar29->Rotation).XY.m128d_f64[0];
      local_4f8.Y = (pTVar29->Rotation).XY.m128d_f64[1];
      local_4f8.Z = (pTVar29->Rotation).ZW.m128d_f64[0];
      local_4f8.W = (pTVar29->Rotation).ZW.m128d_f64[1];
      UE::Math::TQuat<double>::operator*(&local_4f8,&local_218,pTVar22);
      pTVar23 = UE::Math::TQuat<double>::Rotator(&local_218,local_1e0);
      local_6a8.Pitch = pTVar23->Pitch;
      local_6a8.Yaw = pTVar23->Yaw;
      local_6a8.Roll = pTVar23->Roll;
      USceneComponent::SetRelativeRotation_Direct(pUVar2,&local_6a8);
      pTVar29 = param_1->LevelTransform;
      local_7b8._s_0.Z =
           (pTVar29->Scale3D).ZW.m128d_f64[0] * (pUVar2->RelativeScale3D).field0_0x0._s_0.Z;
      local_7b8._s_0.X =
           (pTVar29->Scale3D).XY.m128d_f64[0] * (pUVar2->RelativeScale3D).field0_0x0._s_0.X;
      local_7b8._s_0.Y =
           (pTVar29->Scale3D).XY.m128d_f64[1] * (pUVar2->RelativeScale3D).field0_0x0._s_0.Y;
      USceneComponent::SetRelativeScale3D_Direct(pUVar2,(TVector<double> *)&local_7b8._s_0);
      AActor::MarkNeedsRecomputeBoundsOnceForGame(param_1->Actor);
    }
  }
  return;
}

// FindStreamingLevel @ 147ebc2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULevelStreaming * __cdecl FLevelUtils::FindStreamingLevel(UWorld *param_1,wchar_t *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  ULevelStreaming *pUVar4;
  FName *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FName local_res18;
  undefined1 local_res20 [8];
  
  pFVar5 = ::FName::FName(&local_res18,param_2);
  FVar3 = *pFVar5;
  if ((param_1 == (UWorld *)0x0) || (FVar3 == (FName)0x0)) {
    return (ULevelStreaming *)0x0;
  }
  pFVar6 = (param_1->StreamingLevels).AllocatorInstance.Data;
  iVar2 = (param_1->StreamingLevels).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->StreamingLevels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    pUVar4 = *(ULevelStreaming **)pFVar6;
    if ((pUVar4 != (ULevelStreaming *)0x0) &&
       (pFVar5 = (FName *)(**(code **)(pUVar4->_padding_ + 0x2e0))(pUVar4,local_res20),
       *pFVar5 == FVar3)) {
      return pUVar4;
    }
    pFVar6 = pFVar6 + 8;
  }
  return (ULevelStreaming *)0x0;
}

// FindStreamingLevel @ 147ebc3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULevelStreaming * __cdecl FLevelUtils::FindStreamingLevel(UWorld *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULevelStreaming *pUVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  if ((param_1 == (UWorld *)0x0) || (param_2 == (FName)0x0)) {
    return (ULevelStreaming *)0x0;
  }
  pFVar5 = (param_1->StreamingLevels).AllocatorInstance.Data;
  iVar2 = (param_1->StreamingLevels).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->StreamingLevels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pUVar3 = *(ULevelStreaming **)pFVar5;
    if ((pUVar3 != (ULevelStreaming *)0x0) &&
       (pFVar4 = (FName *)(**(code **)(pUVar3->_padding_ + 0x2e0))(pUVar3,local_res18),
       *pFVar4 == param_2)) {
      return pUVar3;
    }
    pFVar5 = pFVar5 + 8;
  }
  return (ULevelStreaming *)0x0;
}

// FindStreamingLevel @ 147ebc470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreaming * __cdecl FLevelUtils::FindStreamingLevel(ULevel *param_1)

{
  UWorld *pUVar1;
  ULevel *pUVar2;
  code *pcVar3;
  bool bVar4;
  ULevelStreaming *pUVar5;
  FLevelAnnotation *pFVar6;
  FPlatformRWLock *SRWLock;
  FLevelAnnotation FVar7;
  FLevelAnnotation FStackX_8;
  FLevelAnnotation FStackX_10;
  
  if (param_1 != (ULevel *)0x0) {
    if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
      pUVar1 = (param_1->OwningWorld).field0_0x0.DebugPtr;
      if ((pUVar1 != (UWorld *)0x0) &&
         ((pUVar2 = (pUVar1->PersistentLevel).field0_0x0.DebugPtr, pUVar2 == (ULevel *)0x0 ||
          (pUVar2 != param_1)))) {
        AcquireSRWLockShared((PSRWLOCK)&ULevelStreaming::LevelAnnotations.AnnotationCacheCritical);
        SRWLock = &ULevelStreaming::LevelAnnotations.AnnotationCacheCritical;
        FVar7 = ULevelStreaming::LevelAnnotations.AnnotationCacheValue;
        if (param_1 != (ULevel *)ULevelStreaming::LevelAnnotations.AnnotationCacheKey) {
          ReleaseSRWLockShared((PSRWLOCK)&ULevelStreaming::LevelAnnotations.AnnotationCacheCritical)
          ;
          AcquireSRWLockShared((PSRWLOCK)&ULevelStreaming::LevelAnnotations.AnnotationMapCritical);
          pFVar6 = TMapBase<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>_>
                   ::Find((TMapBase<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>_>
                           *)&ULevelStreaming::LevelAnnotations.AnnotationMap,(UObjectBase *)param_1
                         );
          if (pFVar6 == (FLevelAnnotation *)0x0) {
            FStackX_10.LevelStreaming = (ULevelStreaming *)0x0;
            FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::
            SetAnnotationCacheKeyAndValue
                      (&ULevelStreaming::LevelAnnotations,(UObjectBase *)param_1,&FStackX_10);
            FVar7.LevelStreaming = (ULevelStreaming *)0x0;
          }
          else {
            FStackX_8.LevelStreaming = pFVar6->LevelStreaming;
            FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::
            SetAnnotationCacheKeyAndValue
                      (&ULevelStreaming::LevelAnnotations,(UObjectBase *)param_1,&FStackX_8);
            FVar7.LevelStreaming = pFVar6->LevelStreaming;
          }
          SRWLock = &ULevelStreaming::LevelAnnotations.AnnotationMapCritical;
        }
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
        if (FVar7.LevelStreaming == (ULevelStreaming *)0x0) {
          return (ULevelStreaming *)0x0;
        }
        if ((((FVar7.LevelStreaming)->LoadedLevel).field0_0x0.DebugPtr != param_1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("LevelAnnotation.LevelStreaming->GetLoadedLevel() == Level",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                               ,0x54e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (ULevelStreaming *)(*pcVar3)();
          return pUVar5;
        }
        return FVar7.LevelStreaming;
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3914447087793601209>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                         ,0x547,"IsValid(Level)");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (ULevelStreaming *)(*pcVar3)();
        return pUVar5;
      }
    }
  }
  return (ULevelStreaming *)0x0;
}

// GetServerVisibleStreamingLevel @ 147ec6040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULevelStreaming * __cdecl
FLevelUtils::GetServerVisibleStreamingLevel(UWorld *param_1,FName *param_2)

{
  bool bVar1;
  AServerStreamingLevelsVisibility *this;
  ULevelStreaming *pUVar2;
  
  if (param_1 != (UWorld *)0x0) {
    bVar1 = UWorld::SupportsMakingVisibleTransactionRequests(param_1);
    if (bVar1) {
      this = UWorld::GetServerStreamingLevelsVisibility(param_1);
      if (this != (AServerStreamingLevelsVisibility *)0x0) {
        pUVar2 = AServerStreamingLevelsVisibility::GetVisibleStreamingLevel(this,param_2);
        return pUVar2;
      }
    }
  }
  return (ULevelStreaming *)0x0;
}

// IsLevelLoaded @ 147ecd850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FLevelUtils::IsLevelLoaded(ULevel *param_1)

{
  bool bVar1;
  ULevelStreaming *pUVar2;
  
  if (param_1 != (ULevel *)0x0) {
    bVar1 = ULevel::IsPersistentLevel(param_1);
    if (bVar1) {
      return true;
    }
  }
  pUVar2 = ULevelStreaming::FindStreamingLevel(param_1);
  return pUVar2 != (ULevelStreaming *)0x0;
}

// IsLevelVisible @ 147ecd890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FLevelUtils::IsLevelVisible(ULevel *param_1)

{
  bool bVar1;
  
  if (param_1 != (ULevel *)0x0) {
    bVar1 = ULevel::IsPersistentLevel(param_1);
    if (bVar1) {
      return true;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&NAME_TransLevelMoveBuffer,L"TransLevelMoveBuffer");
        _Init_thread_footer(&::_TSS0);
      }
    }
    if ((FName)param_1->_padding_ != NAME_TransLevelMoveBuffer) {
      return param_1->bIsVisible;
    }
  }
  return false;
}

// IsServerStreamingLevelVisible @ 147ecde90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl FLevelUtils::IsServerStreamingLevelVisible(UWorld *param_1,FName *param_2)

{
  bool bVar1;
  AServerStreamingLevelsVisibility *this;
  
  if ((param_1 == (UWorld *)0x0) ||
     (bVar1 = UWorld::SupportsMakingVisibleTransactionRequests(param_1), !bVar1)) {
    return true;
  }
  this = UWorld::GetServerStreamingLevelsVisibility(param_1);
  if ((this != (AServerStreamingLevelsVisibility *)0x0) &&
     (bVar1 = AServerStreamingLevelsVisibility::Contains(this,param_2), bVar1)) {
    return true;
  }
  return false;
}

// IsValidStreamingLevel @ 147ece070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl FLevelUtils::IsValidStreamingLevel(UWorld *param_1,wchar_t *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  FName *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [16];
  FName local_res18;
  undefined1 local_res20 [8];
  
  pFVar5 = ::FName::FName(&local_res18,param_2);
  FVar3 = *pFVar5;
  if ((param_1 != (UWorld *)0x0) && (FVar3 != (FName)0x0)) {
    pFVar6 = (param_1->StreamingLevels).AllocatorInstance.Data;
    iVar2 = (param_1->StreamingLevels).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->StreamingLevels).ArrayNum != iVar2) {
        `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      plVar4 = *(longlong **)pFVar6;
      if (plVar4 != (longlong *)0x0) {
        pFVar5 = (FName *)(**(code **)(*plVar4 + 0x2e0))(plVar4,local_res20);
        if (*pFVar5 == FVar3) {
          return true;
        }
      }
      pFVar6 = pFVar6 + 8;
    }
  }
  return false;
}

// SupportsMakingInvisibleTransactionRequests @ 147edf1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl FLevelUtils::SupportsMakingInvisibleTransactionRequests(UWorld *param_1)

{
  bool bVar1;
  
  if (param_1 != (UWorld *)0x0) {
    bVar1 = UWorld::SupportsMakingInvisibleTransactionRequests(param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// SupportsMakingVisibleTransactionRequests @ 147edf1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl FLevelUtils::SupportsMakingVisibleTransactionRequests(UWorld *param_1)

{
  bool bVar1;
  
  if (param_1 != (UWorld *)0x0) {
    bVar1 = UWorld::SupportsMakingVisibleTransactionRequests(param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

