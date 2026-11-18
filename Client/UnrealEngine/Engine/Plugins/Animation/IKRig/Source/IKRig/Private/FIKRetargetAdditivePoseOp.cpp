// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 8

// StaticStruct @ 14defffc0

UScriptStruct * __cdecl FIKRetargetAdditivePoseOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOp,(UObject *)pUVar1,
                         L"IKRetargetAdditivePoseOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOp.OuterSingleton;
}

// Initialize @ 14df00080

bool __thiscall
FIKRetargetAdditivePoseOp::Initialize
          (FIKRetargetAdditivePoseOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  FIKRetargetPelvisMotionOp *pFVar1;
  UIKRigDefinition *pUVar2;
  FName FVar3;
  
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  pFVar1 = FIKRetargetProcessor::GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp>
                     (param_1,ProcessorOps);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (pFVar1 != (FIKRetargetPelvisMotionOp *)0x0) {
    if (pFVar1->field_0x1d != '\0') {
      FVar3 = (pFVar1->Target).BoneName;
    }
    if (FVar3 != (FName)0x0) goto LAB_14df000f7;
  }
  if ((param_1->RetargeterAsset == (UIKRetargeter *)0x0) ||
     (pUVar2 = UIKRetargeter::GetIKRig(param_1->RetargeterAsset,Target),
     pUVar2 == (UIKRigDefinition *)0x0)) {
    (this->PelvisBoneName).ComparisonIndex = 0;
    (this->PelvisBoneName).Number = 0;
    return true;
  }
  FVar3 = (pUVar2->RetargetDefinition).RootBone;
LAB_14df000f7:
  this->PelvisBoneName = FVar3;
  return true;
}

// Run @ 14df00170

void __thiscall
FIKRetargetAdditivePoseOp::Run
          (FIKRetargetAdditivePoseOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  ApplyAdditivePose(this,param_1,param_4);
  return;
}

// GetSettings @ 14df00180

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetAdditivePoseOp::GetSettings(FIKRetargetAdditivePoseOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// SetSettings @ 14df00190

void __thiscall
FIKRetargetAdditivePoseOp::SetSettings
          (FIKRetargetAdditivePoseOp *this,FIKRetargetOpSettingsBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014df00198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->Settings)._padding_ + 8))(&this->Settings);
  return;
}

// GetSettingsType @ 14df001b0

UScriptStruct * __thiscall
FIKRetargetAdditivePoseOp::GetSettingsType(FIKRetargetAdditivePoseOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOpSettings,
                         (UObject *)pUVar1,L"IKRetargetAdditivePoseOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOpSettings.OuterSingleton;
}

// GetType @ 14df001f0

UScriptStruct * __thiscall FIKRetargetAdditivePoseOp::GetType(FIKRetargetAdditivePoseOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOp,(UObject *)pUVar1,
                         L"IKRetargetAdditivePoseOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetAdditivePoseOp.OuterSingleton;
}

// ApplyAdditivePose @ 14df24a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRetargetAdditivePoseOp::ApplyAdditivePose
          (FIKRetargetAdditivePoseOp *this,FIKRetargetProcessor *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  ulonglong uVar1;
  FName *pFVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  ulonglong uVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  bool bVar16;
  TTuple<FName,FIKRetargetPose> *pTVar17;
  int *piVar18;
  uint *puVar19;
  longlong lVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  FName *pFVar24;
  longlong *plVar25;
  FTargetSkeleton *this_00;
  uint uVar26;
  double *pdVar27;
  ForElementType<unsigned_int> FVar28;
  ForElementType<unsigned_int> FVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar41;
  undefined1 auVar37 [16];
  double dVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar43;
  double in_XMM2_Qb;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined1 local_358 [4];
  int local_354;
  int local_350;
  double *local_348;
  FIKRetargetAdditivePoseOp *local_340;
  double *local_338;
  uint uStack_330;
  uint uStack_32c;
  ForElementType<unsigned_int> local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  uint local_318;
  undefined4 uStack_314;
  int iStack_310;
  undefined4 uStack_30c;
  double *local_308;
  undefined1 auStack_300 [20];
  uint uStack_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined4 local_274;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_388;
  local_340 = this;
  pTVar17 = TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
                    *)&param_1->RetargeterAsset->TargetRetargetPoses,(this->Settings).PoseToApply);
  pdVar27 = (double *)&pTVar17->field_0x8;
  if (pTVar17 == (TTuple<FName,FIKRetargetPose> *)0x0) {
    pdVar27 = (double *)0x0;
  }
  if (pdVar27 != (double *)0x0) {
    this_00 = &param_1->TargetSkeleton;
    pFVar2 = (FName *)this_00->_padding_;
    for (pFVar24 = pFVar2; pFVar24 != pFVar2 + (int)(param_1->TargetSkeleton)._padding_;
        pFVar24 = pFVar24 + 1) {
      if (*pFVar24 == this->PelvisBoneName) {
        uVar22 = (uint)((longlong)pFVar24 - (longlong)pFVar2 >> 3);
        if (uVar22 != 0xffffffff) {
          uVar26 = 0;
          if ((int)uVar22 < param_2->ArrayNum) {
            uVar26 = ~uVar22 >> 0x1f;
          }
          if (uVar26 == 0) {
            local_368 = (longlong)(int)uVar22;
            local_360 = (longlong)param_2->ArrayNum;
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pFVar4 = (param_2->AllocatorInstance).Data;
          lVar20 = (longlong)(int)uVar22 * 0x60;
          local_208.Rotation.XY.m128d_f64[0] = *(double *)(pFVar4 + lVar20);
          local_208.Rotation.XY.m128d_f64[1] = *(double *)(pFVar4 + lVar20 + 8);
          local_208.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar20 + 0x10);
          local_208.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar4 + lVar20 + 0x10 + 8);
          local_208.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar4 + lVar20 + 0x40);
          local_208.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar4 + lVar20 + 0x40 + 8);
          local_208.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar20 + 0x50);
          local_208.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar4 + lVar20 + 0x50 + 8);
          local_298 = pdVar27[2];
          local_2a8 = *pdVar27;
          dStack_2a0 = pdVar27[1];
          dVar43 = *(double *)(pFVar4 + lVar20 + 0x30 + 8) + 0.0;
          local_208.Translation.XY.m128d_f64[0] = *(double *)(pFVar4 + lVar20 + 0x20) + local_2a8;
          in_XMM2_Qb = *(double *)(pFVar4 + lVar20 + 0x20 + 8) + dStack_2a0;
          local_208.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar43,0);
          local_208.Translation.ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar20 + 0x30) + local_298;
          local_208.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar43 >> 0x20);
          local_208.Translation.XY.m128d_f64[1] = in_XMM2_Qb;
          FRetargetSkeleton::SetGlobalTransformAndUpdateChildren
                    ((FRetargetSkeleton *)this_00,uVar22,&local_208,param_2);
        }
        break;
      }
    }
    local_348 = pdVar27 + 3;
    FVar29 = (ForElementType<unsigned_int>)&pTVar17->field_0x30;
    uStack_330 = 0;
    if (pTVar17 == (TTuple<FName,FIKRetargetPose> *)0x0) {
      FVar29 = (ForElementType<unsigned_int>)0x28;
    }
    uStack_32c = 1;
    uVar22 = *(int *)((longlong)FVar29 + 0x18);
    uStack_31c = uStack_330;
    local_318 = uStack_330;
    if (uVar22 != 0) {
      FVar28 = *(ForElementType<unsigned_int> *)((longlong)FVar29 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)FVar29 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar28 = FVar29;
      }
      uVar26 = *(uint *)FVar28;
      while (uVar26 == 0) {
        lVar20 = (longlong)(int)uStack_330;
        local_318 = local_318 + 0x20;
        uStack_330 = uStack_330 + 1;
        uStack_31c = uVar22;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_330)
        goto LAB_14df24c7e;
        uVar26 = ((uint *)((longlong)FVar28 + 4))[lVar20];
      }
      uStack_32c = -uVar26 & uVar26;
      uVar1 = (ulonglong)uStack_32c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_354 = (int)lVar20;
      uStack_31c = (local_318 - 1) + local_354;
      if ((int)uVar22 < (int)uStack_31c) {
        uStack_31c = uVar22;
      }
    }
LAB_14df24c7e:
    piVar21 = (int *)&pTVar17->field_0x54;
    uStack_314 = local_274;
    if (pTVar17 == (TTuple<FName,FIKRetargetPose> *)0x0) {
      piVar21 = (int *)&DAT_0000004c;
    }
    piVar18 = (int *)&pTVar17->field_0x28;
    auStack_300._0_8_ = CONCAT44(uStack_32c,uStack_330);
    uStack_320 = 0xffffffff;
    if (pTVar17 == (TTuple<FName,FIKRetargetPose> *)0x0) {
      piVar18 = (int *)&DAT_00000020;
    }
    dVar43 = (double)CONCAT44(uStack_31c,0xffffffff);
    iStack_310 = *piVar18 - *piVar21;
    local_2e8._4_4_ = local_274;
    local_2e8._0_4_ = local_318;
    uStack_2e0 = CONCAT44(uStack_30c,iStack_310);
    puVar19 = (uint *)&pTVar17->field_0x48;
    if (pTVar17 == (TTuple<FName,FIKRetargetPose> *)0x0) {
      puVar19 = (uint *)&DAT_00000040;
    }
    uVar26 = *puVar19;
    iVar23 = (int)uVar26 >> 5;
    uVar30 = uVar26 & 0xffffffe0;
    local_338 = local_348;
    local_328 = FVar29;
    local_308 = local_348;
    auStack_300._8_8_ = FVar29;
    unique0x10001710 = dVar43;
    if ((((int)uVar26 < 0) || ((int)uVar22 < (int)uVar26)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    dVar15 = __real_bff0000000000000;
    uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar12 = __real_3ff0000000000000;
    uVar22 = *(uint *)((longlong)FVar29 + 0x18);
    if (uVar26 != uVar22) {
      FVar28 = *(ForElementType<unsigned_int> *)((longlong)FVar29 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)FVar29 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar28 = FVar29;
      }
      uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)((longlong)FVar28 + (longlong)iVar23 * 4);
      while (uVar26 == 0) {
        lVar20 = (longlong)iVar23;
        uVar30 = uVar30 + 0x20;
        iVar23 = iVar23 + 1;
        uVar26 = uVar22;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_14df24db0;
        uVar26 = ((uint *)((longlong)FVar28 + 4))[lVar20];
      }
      uVar1 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_350 = (int)lVar20;
      uVar26 = (uVar30 - 1) + local_350;
      if ((int)uVar22 < (int)uVar26) {
        uVar26 = uVar22;
      }
    }
LAB_14df24db0:
    uVar22 = (uint)__xmm_80000000000000008000000000000000;
    uVar1 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    uVar47 = (undefined4)__real_3e45798ee2308c3a;
    uVar48 = (undefined4)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
    uVar49 = (undefined4)__real_3e45798ee0000000;
    uVar50 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    while( true ) {
      pdVar27 = local_308;
      if (*(int *)(local_308 + 1) - *(int *)((longlong)local_308 + 0x34) != (int)uStack_2e0) {
        local_358[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_358);
      }
      if (((uStack_2ec == uVar26) && ((ForElementType<unsigned_int>)auStack_300._8_8_ == FVar29)) &&
         (pdVar27 == local_348)) break;
      plVar3 = (longlong *)this_00->_padding_;
      dVar35 = *pdVar27;
      lVar20 = (longlong)(int)uStack_2ec * 0x40;
      for (plVar25 = plVar3; plVar25 != plVar3 + (int)(param_1->TargetSkeleton)._padding_;
          plVar25 = plVar25 + 1) {
        if (*plVar25 == *(longlong *)(lVar20 + (longlong)dVar35)) {
          uVar30 = (uint)((longlong)plVar25 - (longlong)plVar3 >> 3);
          if (uVar30 != 0xffffffff) {
            FRetargetSkeleton::GetLocalTransformOfSingleBone
                      ((FRetargetSkeleton *)this_00,&local_148,uVar30,param_2);
            local_2c8 = *(undefined1 (*) [16])(lVar20 + 0x10 + (longlong)dVar35);
            local_2b8 = *(undefined1 (*) [16])(lVar20 + 0x20 + (longlong)dVar35);
            fVar51 = GlobalVectorConstants::Float0001.m128_f32[0];
            fVar52 = GlobalVectorConstants::Float0001.m128_f32[1];
            fVar53 = GlobalVectorConstants::Float0001.m128_f32[2];
            fVar54 = GlobalVectorConstants::Float0001.m128_f32[3];
            dVar7 = (double)(local_340->Settings).Alpha;
            dVar35 = dVar7 - dVar12;
            uVar33 = SUB84(dVar35,0) & uVar13;
            uVar34 = (uint)((ulonglong)dVar35 >> 0x20) & uVar14;
            if ((double)CONCAT44(uVar48,uVar47) <= (double)CONCAT44(uVar34,uVar33) &&
                (double)CONCAT44(uVar34,uVar33) != (double)CONCAT44(uVar48,uVar47)) {
              auVar9._4_8_ = in_XMM2_Qb;
              auVar9._0_4_ = local_2b8._4_4_;
              auVar55._0_8_ = auVar9._0_8_ << 0x20;
              auVar55._8_4_ = local_2b8._8_4_;
              auVar55._12_4_ = local_2b8._12_4_;
              auVar10._4_8_ = dVar43;
              auVar10._0_4_ = local_2c8._4_4_;
              auVar45._0_8_ = auVar10._0_8_ << 0x20;
              auVar45._8_4_ = local_2c8._8_4_;
              auVar45._12_4_ = local_2c8._12_4_;
              dVar43 = dVar12;
              dVar35 = dVar7;
              if (auVar55._8_8_ * UE::Math::TQuat<double>::Identity.W +
                  local_2b8._0_8_ * UE::Math::TQuat<double>::Identity.Z +
                  auVar45._8_8_ * UE::Math::TQuat<double>::Identity.Y +
                  local_2c8._0_8_ * UE::Math::TQuat<double>::Identity.X < 0.0) {
                dVar43 = dVar15;
                dVar35 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ (uint)uVar1,
                                          SUB84(dVar7,0) ^ uVar22);
              }
              dVar43 = dVar43 - dVar35;
              local_2d8 = CONCAT44(uVar50,uVar49);
              auVar36._8_4_ = SUB84(dVar43,0);
              auVar36._0_8_ = dVar43;
              auVar36._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
              auVar37._0_8_ = dVar43 * UE::Math::TQuat<double>::Identity.X + local_2c8._0_8_ * dVar7
              ;
              dVar41 = auVar36._8_8_ * UE::Math::TQuat<double>::Identity.Y + local_2c8._8_8_ * dVar7
              ;
              dVar8 = dVar43 * UE::Math::TQuat<double>::Identity.Z + dVar7 * local_2b8._0_8_;
              dVar7 = dVar43 * UE::Math::TQuat<double>::Identity.W + dVar7 * local_2b8._8_8_;
              auVar37._8_4_ = SUB84(dVar41,0);
              auVar37._12_4_ = (undefined4)((ulonglong)dVar41 >> 0x20);
              auVar44._8_8_ = dVar7;
              auVar44._0_8_ = dVar7;
              dVar35 = auVar37._0_8_ * auVar37._0_8_ + dVar8 * dVar8;
              dVar42 = auVar37._8_8_ * dVar41 + dVar7 * dVar7;
              dVar43 = dVar42 + dVar35;
              dVar35 = dVar35 + dVar42;
              auVar6._8_4_ = SUB84(dVar35,0);
              auVar6._0_8_ = dVar43;
              auVar6._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
              auVar45 = sqrtpd(auVar44,auVar6);
              uVar31 = -(ulonglong)((double)CONCAT44(uVar50,uVar49) <= dVar43);
              uVar32 = -(ulonglong)((double)CONCAT44(uVar50,uVar49) <= dVar35);
              uVar33 = (uint)(uVar31 >> 0x20);
              uVar34 = (uint)(uVar32 >> 0x20);
              auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              auVar45);
              auVar38._0_4_ = ~(uint)uVar31 & SUB84((double)fVar51,0);
              auVar38._4_4_ = ~uVar33 & (uint)((ulonglong)(double)fVar51 >> 0x20);
              auVar38._8_4_ = ~(uint)uVar32 & SUB84((double)fVar52,0);
              auVar38._12_4_ = ~uVar34 & (uint)((ulonglong)(double)fVar52 >> 0x20);
              local_2c8._0_8_ = uVar31 & (ulonglong)(auVar55._0_8_ * auVar37._0_8_);
              uVar11 = uVar32 & (ulonglong)(auVar55._8_8_ * dVar41);
              local_2c8._8_4_ = (undefined4)uVar11;
              local_2c8._12_4_ = (undefined4)(uVar11 >> 0x20);
              local_2c8 = local_2c8 | auVar38;
              auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar45);
              auVar39._0_8_ = (ulonglong)(auVar45._0_8_ * dVar8) & uVar31;
              uVar11 = (ulonglong)(auVar45._8_8_ * dVar7) & uVar32;
              auVar39._8_4_ = (undefined4)uVar11;
              auVar39._12_4_ = (undefined4)(uVar11 >> 0x20);
              local_2b8._0_4_ = ~(uint)uVar31 & SUB84((double)fVar53,0);
              local_2b8._4_4_ = ~uVar33 & (uint)((ulonglong)(double)fVar53 >> 0x20);
              local_2b8._8_4_ = ~(uint)uVar32 & SUB84((double)fVar54,0);
              local_2b8._12_4_ = ~uVar34 & (uint)((ulonglong)(double)fVar54 >> 0x20);
              local_2b8 = local_2b8 | auVar39;
            }
            iVar23 = (int)(param_1->TargetSkeleton)._padding_;
            dVar43 = local_2c8._0_8_;
            dVar35 = local_2c8._8_8_;
            uVar33 = 0;
            if ((int)uVar30 < iVar23) {
              uVar33 = ~uVar30 >> 0x1f;
            }
            auVar46._8_4_ = SUB84(local_148.Rotation.XY.m128d_f64[0],0);
            auVar46._0_8_ = local_148.Rotation.XY.m128d_f64[0];
            auVar46._12_4_ = (int)((ulonglong)local_148.Rotation.XY.m128d_f64[0] >> 0x20);
            dVar56 = local_2b8._0_8_;
            dVar57 = local_2b8._8_8_;
            auVar40._8_4_ = SUB84(local_148.Rotation.XY.m128d_f64[1],0);
            auVar40._0_8_ = local_148.Rotation.XY.m128d_f64[1];
            auVar40._12_4_ = (int)((ulonglong)local_148.Rotation.XY.m128d_f64[1] >> 0x20);
            dVar7 = local_148.Rotation.XY.m128d_f64[0] * dVar35;
            dVar8 = local_148.Rotation.XY.m128d_f64[0] * dVar43;
            local_268.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_268.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_268.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            local_148.Rotation.XY.m128d_f64[0] =
                 local_148.Rotation.XY.m128d_f64[0] * dVar57 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar43 * local_148.Rotation.ZW.m128d_f64[1] +
                 local_148.Rotation.XY.m128d_f64[1] * dVar56 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_148.Rotation.ZW.m128d_f64[0] * dVar35 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar42 = auVar46._8_8_ * dVar56 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar35 * local_148.Rotation.ZW.m128d_f64[1] +
                     auVar40._8_8_ * dVar57 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     local_148.Rotation.ZW.m128d_f64[0] * dVar43 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            local_268.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_268.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_268.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            dVar41 = local_148.Rotation.ZW.m128d_f64[1] * dVar56;
            dVar35 = dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     local_148.Rotation.ZW.m128d_f64[1] * dVar57 +
                     dVar35 * local_148.Rotation.XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     local_148.Rotation.ZW.m128d_f64[0] * dVar56 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            local_148.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar35,0);
            local_148.Rotation.ZW.m128d_f64[0] =
                 dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar41 +
                 dVar43 * local_148.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 local_148.Rotation.ZW.m128d_f64[0] * dVar57 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            local_148.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar35 >> 0x20);
            local_148.Rotation.XY.m128d_f64[1] = dVar42;
            if (uVar33 == 0) {
              local_368 = (longlong)(int)uVar30;
              local_360 = (longlong)iVar23;
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              fVar51 = GlobalVectorConstants::Float0001.m128_f32[0];
              fVar52 = GlobalVectorConstants::Float0001.m128_f32[1];
              fVar53 = GlobalVectorConstants::Float0001.m128_f32[2];
              fVar54 = GlobalVectorConstants::Float0001.m128_f32[3];
            }
            uVar33 = *(uint *)((param_1->TargetSkeleton)._padding_ + (longlong)(int)uVar30 * 4);
            if (uVar33 != 0xffffffff) {
              uVar34 = 0;
              if ((int)uVar33 < param_2->ArrayNum) {
                uVar34 = ~uVar33 >> 0x1f;
              }
              if (uVar34 == 0) {
                local_368 = (longlong)(int)uVar33;
                local_360 = (longlong)param_2->ArrayNum;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                fVar51 = GlobalVectorConstants::Float0001.m128_f32[0];
                fVar52 = GlobalVectorConstants::Float0001.m128_f32[1];
                fVar53 = GlobalVectorConstants::Float0001.m128_f32[2];
                fVar54 = GlobalVectorConstants::Float0001.m128_f32[3];
              }
              pFVar4 = (param_2->AllocatorInstance).Data;
              lVar20 = (longlong)(int)uVar33 * 0x60;
              local_268.Rotation.XY.m128d_f64 = *(double (*) [2])(pFVar4 + lVar20);
              local_268.Rotation.ZW.m128d_f64 = *(double (*) [2])(pFVar4 + lVar20 + 0x10);
              local_268.Translation.XY.m128d_f64 = *(double (*) [2])(pFVar4 + lVar20 + 0x20);
              local_268.Translation.ZW.m128d_f64 = *(double (*) [2])(pFVar4 + lVar20 + 0x30);
              local_268.Scale3D.XY.m128d_f64 = *(double (*) [2])(pFVar4 + lVar20 + 0x40);
              local_268.Scale3D.ZW.m128d_f64 = *(double (*) [2])(pFVar4 + lVar20 + 0x50);
            }
            local_1a8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_1a8.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar52,0);
            local_1a8.Rotation.XY.m128d_f64[0] = (double)fVar51;
            local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar52 >> 0x20);
            in_XMM2_Qb = GlobalVectorConstants::FloatZero.m128_u64[1];
            local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar54,0);
            local_1a8.Rotation.ZW.m128d_f64[0] = (double)fVar53;
            local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar54 >> 0x20);
            local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            dVar43 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
            local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_1a8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            local_1a8.Scale3D.XY.m128d_f64[1] = dVar43;
            UE::Math::TTransform<double>::Multiply(&local_1a8,&local_148,&local_268);
            FRetargetSkeleton::SetGlobalTransformAndUpdateChildren
                      ((FRetargetSkeleton *)this_00,uVar30,&local_1a8,param_2);
            uVar47 = (undefined4)__real_3e45798ee2308c3a;
            uVar48 = (undefined4)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
            uVar49 = (undefined4)__real_3e45798ee0000000;
            uVar50 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          }
          break;
        }
      }
      stack0xfffffffffffffd10 = (double)CONCAT44(uStack_2ec,auStack_300._16_4_ & ~auStack_300._4_4_)
      ;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_300);
    }
  }
  return;
}

