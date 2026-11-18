// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// TransformLocation @ 14686d3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::MovieScene::FAssignTransformOrigin::TransformLocation
          (FAssignTransformOrigin *this,FInstanceHandle *param_1,UObject **param_2,double *param_3,
          double *param_4,double *param_5,double *param_6,double *param_7,double *param_8,
          int param_9)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  FInstanceHandle FVar4;
  int iVar5;
  TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> *pTVar6;
  UObject *pUVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  UClass *pUVar15;
  TQuat<double> *pTVar16;
  FString *pFVar17;
  undefined1 *puVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  double *pdVar21;
  wchar_t *pwVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_2c8 [32];
  FAssignTransformOrigin *local_2a8;
  longlong local_2a0;
  longlong local_298;
  double *local_290;
  double *local_288;
  double *local_280;
  double *local_278;
  longlong local_270;
  double *local_268;
  FInstanceHandle *local_260;
  FString local_258;
  FString local_248;
  TRotator<double> local_238;
  TRotator<double> local_220;
  TQuat<double> local_208;
  double local_1d8;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  dVar12 = _UNK_150689688;
  dVar11 = ___xmm_3ff00000000000003ff0000000000000;
  dVar10 = _UNK_150689518;
  dVar9 = ___xmm_00000000000000003ff0000000000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)(longlong)param_9;
  local_290 = param_4;
  local_280 = param_6;
  local_278 = param_7;
  local_268 = param_8;
  local_288 = param_5;
  if (0 < param_9) {
    local_248.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)((longlong)param_2 - (longlong)param_3);
    local_2a0 = (longlong)param_6 - (longlong)param_3;
    lVar23 = 0;
    local_270 = (longlong)param_7 - (longlong)param_3;
    local_298 = (longlong)param_8 - (longlong)param_3;
    pdVar21 = param_3;
    local_2a8 = this;
    local_260 = param_1;
    do {
      pTVar6 = this->TransformOriginsByInstanceID;
      FVar4 = local_260[lVar23];
      if ((int)((uint)FVar4 & 0xffff) < *(int *)&pTVar6->field_0x28) {
        puVar18 = &pTVar6->field_0x10;
        if (*(undefined1 **)&pTVar6->field_0x20 != (undefined1 *)0x0) {
          puVar18 = *(undefined1 **)&pTVar6->field_0x20;
        }
        if ((*(uint *)(puVar18 + (ulonglong)(((uint)FVar4 & 0xffff) >> 5) * 4) >>
             ((uint)FVar4 & 0x1f) & 1) != 0) {
          pUVar7 = *(UObject **)(local_248.Data.AllocatorInstance.Data + (longlong)pdVar21);
          if (pUVar7 == (UObject *)0x0) {
            pFVar17 = GetTypeName<USceneComponent_const_>(&local_258);
            if ((pFVar17->Data).ArrayNum == 0) {
              pwVar20 = L"";
            }
            else {
              pwVar20 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar20);
          }
          pUVar15 = Z_Construct_UClass_USceneComponent_NoRegister();
          lVar14 = local_298;
          lVar13 = local_2a0;
          iVar5 = (int)pUVar15->_padding_;
          if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar15->_padding_)) {
            pFVar17 = GetTypeName<USceneComponent_const_>(&local_258);
            pwVar20 = L"";
            if ((pFVar17->Data).ArrayNum == 0) {
              pwVar22 = L"";
            }
            else {
              pwVar22 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
            }
            pFVar17 = GetFullNameForCastLogError<UObject_const_>(&local_248,pUVar7);
            if ((pFVar17->Data).ArrayNum != 0) {
              pwVar20 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar20,pwVar22);
          }
          this = local_2a8;
          if (*(longlong *)&pUVar7[5].field_0x8 == 0) {
            lVar19 = (ulonglong)((uint)FVar4 & 0xffff) * 0x60;
            lVar8 = *(longlong *)local_2a8->TransformOriginsByInstanceID;
            local_168.Rotation.XY.m128d_f64[0] = *(double *)(lVar19 + lVar8);
            local_168.Rotation.XY.m128d_f64[1] = ((double *)(lVar19 + lVar8))[1];
            pdVar2 = (double *)(lVar19 + 0x10 + lVar8);
            local_168.Rotation.ZW.m128d_f64[0] = *pdVar2;
            local_168.Rotation.ZW.m128d_f64[1] = pdVar2[1];
            pdVar2 = (double *)(lVar19 + 0x20 + lVar8);
            local_168.Translation.XY.m128d_f64[0] = *pdVar2;
            local_168.Translation.XY.m128d_f64[1] = pdVar2[1];
            pdVar2 = (double *)(lVar19 + 0x30 + lVar8);
            local_168.Translation.ZW.m128d_f64[0] = *pdVar2;
            local_168.Translation.ZW.m128d_f64[1] = pdVar2[1];
            pdVar2 = (double *)(lVar19 + 0x40 + lVar8);
            local_168.Scale3D.XY.m128d_f64[0] = *pdVar2;
            local_168.Scale3D.XY.m128d_f64[1] = pdVar2[1];
            pdVar2 = (double *)(lVar19 + 0x50 + lVar8);
            local_168.Scale3D.ZW.m128d_f64[0] = *pdVar2;
            local_168.Scale3D.ZW.m128d_f64[1] = pdVar2[1];
            if (local_288 == (double *)0x0) {
              uVar34 = 0;
              uVar35 = 0;
            }
            else {
              uVar3 = *(undefined8 *)((longlong)pdVar21 + ((longlong)param_5 - (longlong)param_3));
              uVar34 = (undefined4)uVar3;
              uVar35 = (undefined4)((ulonglong)uVar3 >> 0x20);
            }
            if (local_290 == (double *)0x0) {
              uVar32 = 0;
              uVar33 = 0;
            }
            else {
              uVar3 = *(undefined8 *)((longlong)pdVar21 + ((longlong)param_4 - (longlong)param_3));
              uVar32 = (undefined4)uVar3;
              uVar33 = (undefined4)((ulonglong)uVar3 >> 0x20);
            }
            if (param_3 == (double *)0x0) {
              uVar30 = 0;
              uVar31 = 0;
            }
            else {
              uVar30 = SUB84(*pdVar21,0);
              uVar31 = (undefined4)((ulonglong)*pdVar21 >> 0x20);
            }
            if (local_280 == (double *)0x0) {
              uVar28 = 0;
              uVar29 = 0;
            }
            else {
              uVar28 = (undefined4)*(undefined8 *)((longlong)pdVar21 + local_2a0);
              uVar29 = (undefined4)
                       ((ulonglong)*(undefined8 *)((longlong)pdVar21 + local_2a0) >> 0x20);
            }
            if (local_268 == (double *)0x0) {
              uVar26 = 0;
              uVar27 = 0;
            }
            else {
              uVar26 = (undefined4)*(undefined8 *)((longlong)pdVar21 + local_298);
              uVar27 = (undefined4)
                       ((ulonglong)*(undefined8 *)((longlong)pdVar21 + local_298) >> 0x20);
            }
            if (local_278 == (double *)0x0) {
              uVar24 = 0;
              uVar25 = 0;
            }
            else {
              uVar24 = (undefined4)*(undefined8 *)(local_270 + (longlong)pdVar21);
              uVar25 = (undefined4)
                       ((ulonglong)*(undefined8 *)(local_270 + (longlong)pdVar21) >> 0x20);
            }
            local_238.Pitch = (double)CONCAT44(uVar25,uVar24);
            local_238.Yaw = (double)CONCAT44(uVar27,uVar26);
            local_238.Roll = (double)CONCAT44(uVar29,uVar28);
            pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_238,&local_208);
            local_108.Rotation.ZW.m128d_f64[0] = pTVar16->Z;
            local_108.Rotation.ZW.m128d_f64[1] = pTVar16->W;
            local_108.Rotation.XY.m128d_f64[0] = pTVar16->X;
            local_108.Rotation.XY.m128d_f64[1] = pTVar16->Y;
            local_108.Translation.ZW.m128d_f64[0] = (double)CONCAT44(uVar35,uVar34);
            local_108.Translation.ZW.m128d_f64[1] = 0.0;
            local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_1c8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_1c8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_1c8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_1c8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_108.Scale3D.XY.m128d_f64[0] = dVar11;
            local_108.Scale3D.XY.m128d_f64[1] = dVar12;
            local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            local_108.Scale3D.ZW.m128d_f64[0] = dVar9;
            local_108.Scale3D.ZW.m128d_f64[1] = dVar10;
            local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_108.Translation.XY.m128d_f64[0]._0_4_ = uVar30;
            local_108.Translation.XY.m128d_f64[0]._4_4_ = uVar31;
            local_108.Translation.XY.m128d_f64[1]._0_4_ = uVar32;
            local_108.Translation.XY.m128d_f64[1]._4_4_ = uVar33;
            UE::Math::TTransform<double>::Multiply(&local_1c8,&local_108,&local_168);
            uVar34 = local_1c8.Translation.XY.m128d_f64[0]._0_4_;
            uVar35 = local_1c8.Translation.XY.m128d_f64[0]._4_4_;
            uVar32 = local_1c8.Translation.XY.m128d_f64[1]._0_4_;
            uVar33 = local_1c8.Translation.XY.m128d_f64[1]._4_4_;
            local_1d8 = local_1c8.Translation.ZW.m128d_f64[0];
            local_208.X = local_1c8.Rotation.XY.m128d_f64[0];
            local_208.Y = local_1c8.Rotation.XY.m128d_f64[1];
            local_208.Z = local_1c8.Rotation.ZW.m128d_f64[0];
            local_208.W = local_1c8.Rotation.ZW.m128d_f64[1];
            UE::Math::TQuat<double>::Rotator(&local_208,&local_220);
            if (param_3 != (double *)0x0) {
              *(undefined4 *)pdVar21 = uVar34;
              *(undefined4 *)((longlong)pdVar21 + 4) = uVar35;
            }
            if (local_290 != (double *)0x0) {
              puVar1 = (undefined4 *)((longlong)pdVar21 + ((longlong)param_4 - (longlong)param_3));
              *puVar1 = uVar32;
              puVar1[1] = uVar33;
            }
            if (local_288 != (double *)0x0) {
              *(double *)((longlong)pdVar21 + ((longlong)param_5 - (longlong)param_3)) = local_1d8;
            }
            if (local_280 != (double *)0x0) {
              *(double *)((longlong)pdVar21 + lVar13) = local_220.Roll;
            }
            if (local_278 != (double *)0x0) {
              *(double *)(local_270 + (longlong)pdVar21) = local_220.Pitch;
            }
            this = local_2a8;
            if (local_268 != (double *)0x0) {
              *(double *)((longlong)pdVar21 + lVar14) = local_220.Yaw;
            }
          }
        }
      }
      lVar23 = lVar23 + 1;
      pdVar21 = pdVar21 + 1;
    } while (lVar23 < (longlong)local_258.Data.AllocatorInstance.Data);
  }
  return;
}

